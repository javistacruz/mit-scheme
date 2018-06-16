/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:11-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define LABEL_1_10 9
#define LABEL_1_11 11
#define LABEL_1_9 13
#define ENVIRONMENT_LABEL_1_3 31
#define DEBUGGING_LABEL_1_2 30
#define OBJECT_1_8 29
#define OBJECT_1_7 28
#define OBJECT_1_6 27
#define OBJECT_1_5 26
#define OBJECT_1_4 25
#define OBJECT_1_3 24
#define OBJECT_1_2 23
#define OBJECT_1_1 22
#define OBJECT_1_0 21
#define EXECUTE_CACHE_1_12 15
#define EXECUTE_CACHE_1_8 17
#define EXECUTE_CACHE_1_7 19
#define FREE_REFERENCES_LABEL_1_0 14
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_18;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_24)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_31;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_30)
  (Wrd17.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  (Wrd27.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (label_25)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_29;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_28)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_27;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_1_5]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_1_6]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd54.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd59.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd59.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_21)
  (Wrd11.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_5 7
#define LABEL_2_9 9
#define LABEL_2_10 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_13 17
#define LABEL_2_14 19
#define LABEL_2_16 21
#define LABEL_2_17 23
#define LABEL_2_18 25
#define LABEL_2_20 27
#define TAG_2_21 12
#define ENVIRONMENT_LABEL_2_3 47
#define DEBUGGING_LABEL_2_2 46
#define OBJECT_2_6 45
#define OBJECT_2_5 44
#define OBJECT_2_4 43
#define OBJECT_2_3 42
#define OBJECT_2_2 41
#define OBJECT_2_1 40
#define OBJECT_2_0 39
#define EXECUTE_CACHE_2_22 29
#define EXECUTE_CACHE_2_19 31
#define EXECUTE_CACHE_2_15 33
#define EXECUTE_CACHE_2_8 35
#define EXECUTE_CACHE_2_7 37
#define FREE_REFERENCES_LABEL_2_0 28
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd47;
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
      current_block = (Rpc - LABEL_2_4);
      goto lambda_19;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_17;

    case 8:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_2_17);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_2_20);
      goto lambda_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_39;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_38)
  (Wrd17.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd47.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd47.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (label_29)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_37;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_36)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_35;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_34)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_33;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_32)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_31;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_30)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (Wrd8.Obj) = (current_block [OBJECT_2_5]);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_20])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_24)
  (Wrd23.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_22)
  (Wrd7.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_2_20);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_2_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_5 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_11 13
#define LABEL_3_8 15
#define LABEL_3_14 17
#define LABEL_3_15 19
#define LABEL_3_16 21
#define LABEL_3_17 23
#define LABEL_3_18 25
#define LABEL_3_19 27
#define ENVIRONMENT_LABEL_3_3 43
#define DEBUGGING_LABEL_3_2 42
#define OBJECT_3_6 41
#define OBJECT_3_5 40
#define OBJECT_3_4 39
#define OBJECT_3_3 38
#define OBJECT_3_2 37
#define OBJECT_3_1 36
#define OBJECT_3_0 35
#define EXECUTE_CACHE_3_13 29
#define EXECUTE_CACHE_3_12 31
#define EXECUTE_CACHE_3_7 33
#define FREE_REFERENCES_LABEL_3_0 28
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_3_4);
      goto lambda_15;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_3_14);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_3_16);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_3_17);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_3_18);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_41;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_40)
  (Wrd17.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_27;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_26)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_39;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_38)
  (Wrd33.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd21.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (label_29)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_37;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_36)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_35;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_34)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_33;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_32)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_31;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_30)
  (Wrd37.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_19);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_23)
  (Wrd30.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_22)
  (Wrd23.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_21)
  (Wrd14.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_6 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define LABEL_4_9 11
#define LABEL_4_5 13
#define LABEL_4_11 15
#define LABEL_4_12 17
#define LABEL_4_13 19
#define LABEL_4_14 21
#define LABEL_4_15 23
#define LABEL_4_16 25
#define LABEL_4_17 27
#define LABEL_4_19 29
#define ENVIRONMENT_LABEL_4_3 71
#define DEBUGGING_LABEL_4_2 70
#define OBJECT_4_34 69
#define OBJECT_4_33 68
#define OBJECT_4_32 67
#define OBJECT_4_31 66
#define OBJECT_4_30 65
#define OBJECT_4_29 64
#define OBJECT_4_28 63
#define OBJECT_4_27 62
#define OBJECT_4_26 61
#define OBJECT_4_25 60
#define OBJECT_4_24 59
#define OBJECT_4_23 58
#define OBJECT_4_22 57
#define OBJECT_4_21 56
#define OBJECT_4_20 55
#define OBJECT_4_19 54
#define OBJECT_4_18 53
#define OBJECT_4_17 52
#define OBJECT_4_16 51
#define OBJECT_4_15 50
#define OBJECT_4_14 49
#define OBJECT_4_13 48
#define OBJECT_4_12 47
#define OBJECT_4_11 46
#define OBJECT_4_10 45
#define OBJECT_4_9 44
#define OBJECT_4_8 43
#define OBJECT_4_7 42
#define OBJECT_4_6 41
#define OBJECT_4_5 40
#define OBJECT_4_4 39
#define OBJECT_4_3 38
#define OBJECT_4_2 37
#define OBJECT_4_1 36
#define OBJECT_4_0 35
#define EXECUTE_CACHE_4_18 31
#define EXECUTE_CACHE_4_10 33
#define FREE_REFERENCES_LABEL_4_0 30
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd280;
  machine_word Wrd282;
  machine_word Wrd275;
  machine_word Wrd277;
  machine_word Wrd270;
  machine_word Wrd272;
  machine_word Wrd266;
  machine_word Wrd268;
  machine_word Wrd269;
  machine_word Wrd262;
  machine_word Wrd264;
  machine_word Wrd258;
  machine_word Wrd260;
  machine_word Wrd254;
  machine_word Wrd256;
  machine_word Wrd257;
  machine_word Wrd250;
  machine_word Wrd252;
  machine_word Wrd246;
  machine_word Wrd248;
  machine_word Wrd242;
  machine_word Wrd244;
  machine_word Wrd245;
  machine_word Wrd238;
  machine_word Wrd240;
  machine_word Wrd234;
  machine_word Wrd236;
  machine_word Wrd237;
  machine_word Wrd230;
  machine_word Wrd232;
  machine_word Wrd233;
  machine_word Wrd227;
  machine_word Wrd229;
  machine_word Wrd222;
  machine_word Wrd224;
  machine_word Wrd225;
  machine_word Wrd218;
  machine_word Wrd220;
  machine_word Wrd214;
  machine_word Wrd216;
  machine_word Wrd217;
  machine_word Wrd210;
  machine_word Wrd212;
  machine_word Wrd206;
  machine_word Wrd208;
  machine_word Wrd202;
  machine_word Wrd204;
  machine_word Wrd205;
  machine_word Wrd198;
  machine_word Wrd200;
  machine_word Wrd194;
  machine_word Wrd196;
  machine_word Wrd197;
  machine_word Wrd190;
  machine_word Wrd192;
  machine_word Wrd193;
  machine_word Wrd186;
  machine_word Wrd188;
  machine_word Wrd182;
  machine_word Wrd184;
  machine_word Wrd185;
  machine_word Wrd178;
  machine_word Wrd180;
  machine_word Wrd174;
  machine_word Wrd176;
  machine_word Wrd177;
  machine_word Wrd171;
  machine_word Wrd173;
  machine_word Wrd167;
  machine_word Wrd169;
  machine_word Wrd170;
  machine_word Wrd164;
  machine_word Wrd166;
  machine_word Wrd160;
  machine_word Wrd162;
  machine_word Wrd156;
  machine_word Wrd158;
  machine_word Wrd159;
  machine_word Wrd152;
  machine_word Wrd154;
  machine_word Wrd155;
  machine_word Wrd148;
  machine_word Wrd150;
  machine_word Wrd144;
  machine_word Wrd146;
  machine_word Wrd147;
  machine_word Wrd140;
  machine_word Wrd142;
  machine_word Wrd143;
  machine_word Wrd136;
  machine_word Wrd138;
  machine_word Wrd132;
  machine_word Wrd134;
  machine_word Wrd135;
  machine_word Wrd129;
  machine_word Wrd131;
  machine_word Wrd124;
  machine_word Wrd126;
  machine_word Wrd127;
  machine_word Wrd121;
  machine_word Wrd123;
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd119;
  machine_word Wrd112;
  machine_word Wrd114;
  machine_word Wrd115;
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd104;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd86;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd10;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_4_4);
      goto lambda_83;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto label_85;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_86;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_87;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto label_88;

    case 5:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_4_11);
      goto label_89;

    case 7:
      current_block = (Rpc - LABEL_4_12);
      goto label_90;

    case 8:
      current_block = (Rpc - LABEL_4_13);
      goto label_91;

    case 9:
      current_block = (Rpc - LABEL_4_14);
      goto label_92;

    case 10:
      current_block = (Rpc - LABEL_4_15);
      goto label_93;

    case 11:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_4_19);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_95)
DEFLABEL (lambda_83)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_113;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_112)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_111;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_110)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_109;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd25.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_108)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_107;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_106)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_105;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_104)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_103;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_102)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_101;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_100)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_99;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_98)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_97;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_96)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_19);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_4_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_4_5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_4_6]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_4_7]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd53.Obj) = (current_block [OBJECT_4_8]);
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd61.Obj) = (current_block [OBJECT_4_9]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd65.Obj) = (current_block [OBJECT_4_10]);
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (Wrd69.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (Wrd78.Obj) = (current_block [OBJECT_4_11]);
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (* (Rhp++)) = (Wrd71.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  (Wrd86.Obj) = (current_block [OBJECT_4_12]);
  (* (Rhp++)) = (Wrd86.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd85.pObj) = (& (Rhp [-2]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd85.pObj)));
  (Wrd90.Obj) = (current_block [OBJECT_4_13]);
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd83.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (* (Rhp++)) = (Wrd96.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd102.pObj) = (& (Rhp [-2]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd102.pObj)));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd100.Obj);
  (Wrd106.pObj) = (& (Rhp [-2]));
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd106.pObj)));
  (* (Rhp++)) = (Wrd104.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd110.pObj) = (& (Rhp [-2]));
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd110.pObj)));
  (Wrd115.Obj) = (current_block [OBJECT_4_14]);
  (* (Rhp++)) = (Wrd115.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd114.pObj) = (& (Rhp [-2]));
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd114.pObj)));
  (Wrd119.Obj) = (current_block [OBJECT_4_15]);
  (* (Rhp++)) = (Wrd119.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd118.pObj) = (& (Rhp [-2]));
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd118.pObj)));
  (* (Rhp++)) = (Wrd112.Obj);
  (* (Rhp++)) = (Wrd116.Obj);
  (Wrd123.pObj) = (& (Rhp [-2]));
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd123.pObj)));
  (Wrd127.Obj) = (current_block [OBJECT_4_16]);
  (* (Rhp++)) = (Wrd127.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd126.pObj) = (& (Rhp [-2]));
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd126.pObj)));
  (* (Rhp++)) = (Wrd121.Obj);
  (* (Rhp++)) = (Wrd124.Obj);
  (Wrd131.pObj) = (& (Rhp [-2]));
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd131.pObj)));
  (Wrd135.Obj) = (current_block [OBJECT_4_17]);
  (* (Rhp++)) = (Wrd135.Obj);
  (* (Rhp++)) = (Wrd129.Obj);
  (Wrd134.pObj) = (& (Rhp [-2]));
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd134.pObj)));
  (* (Rhp++)) = (Wrd132.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd138.pObj) = (& (Rhp [-2]));
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd138.pObj)));
  (Wrd143.Obj) = (current_block [OBJECT_4_18]);
  (* (Rhp++)) = (Wrd143.Obj);
  (* (Rhp++)) = (Wrd136.Obj);
  (Wrd142.pObj) = (& (Rhp [-2]));
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd142.pObj)));
  (Wrd147.Obj) = (current_block [OBJECT_4_19]);
  (* (Rhp++)) = (Wrd147.Obj);
  (* (Rhp++)) = (Wrd140.Obj);
  (Wrd146.pObj) = (& (Rhp [-2]));
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd146.pObj)));
  (* (Rhp++)) = (Wrd144.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd150.pObj) = (& (Rhp [-2]));
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd150.pObj)));
  (Wrd155.Obj) = (current_block [OBJECT_4_9]);
  (* (Rhp++)) = (Wrd155.Obj);
  (* (Rhp++)) = (Wrd148.Obj);
  (Wrd154.pObj) = (& (Rhp [-2]));
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd154.pObj)));
  (Wrd159.Obj) = (current_block [OBJECT_4_20]);
  (* (Rhp++)) = (Wrd159.Obj);
  (* (Rhp++)) = (Wrd152.Obj);
  (Wrd158.pObj) = (& (Rhp [-2]));
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd158.pObj)));
  (* (Rhp++)) = (Wrd156.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd162.pObj) = (& (Rhp [-2]));
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd162.pObj)));
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd160.Obj);
  (Wrd166.pObj) = (& (Rhp [-2]));
  (Wrd164.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd166.pObj)));
  (Wrd170.Obj) = (current_block [OBJECT_4_21]);
  (* (Rhp++)) = (Wrd170.Obj);
  (* (Rhp++)) = (Wrd164.Obj);
  (Wrd169.pObj) = (& (Rhp [-2]));
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd169.pObj)));
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd167.Obj);
  (Wrd173.pObj) = (& (Rhp [-2]));
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd173.pObj)));
  (Wrd177.Obj) = (current_block [OBJECT_4_22]);
  (* (Rhp++)) = (Wrd177.Obj);
  (* (Rhp++)) = (Wrd171.Obj);
  (Wrd176.pObj) = (& (Rhp [-2]));
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd176.pObj)));
  (* (Rhp++)) = (Wrd174.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd180.pObj) = (& (Rhp [-2]));
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd180.pObj)));
  (Wrd185.Obj) = (current_block [OBJECT_4_23]);
  (* (Rhp++)) = (Wrd185.Obj);
  (* (Rhp++)) = (Wrd178.Obj);
  (Wrd184.pObj) = (& (Rhp [-2]));
  (Wrd182.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd184.pObj)));
  (* (Rhp++)) = (Wrd182.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd188.pObj) = (& (Rhp [-2]));
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd188.pObj)));
  (Wrd193.Obj) = (current_block [OBJECT_4_24]);
  (* (Rhp++)) = (Wrd193.Obj);
  (* (Rhp++)) = (Wrd186.Obj);
  (Wrd192.pObj) = (& (Rhp [-2]));
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd192.pObj)));
  (Wrd197.Obj) = (current_block [OBJECT_4_25]);
  (* (Rhp++)) = (Wrd197.Obj);
  (* (Rhp++)) = (Wrd190.Obj);
  (Wrd196.pObj) = (& (Rhp [-2]));
  (Wrd194.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd196.pObj)));
  (* (Rhp++)) = (Wrd194.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd200.pObj) = (& (Rhp [-2]));
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd200.pObj)));
  (Wrd205.Obj) = (current_block [OBJECT_4_26]);
  (* (Rhp++)) = (Wrd205.Obj);
  (* (Rhp++)) = (Wrd198.Obj);
  (Wrd204.pObj) = (& (Rhp [-2]));
  (Wrd202.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd204.pObj)));
  (* (Rhp++)) = (Wrd197.Obj);
  (* (Rhp++)) = (Wrd202.Obj);
  (Wrd208.pObj) = (& (Rhp [-2]));
  (Wrd206.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd208.pObj)));
  (* (Rhp++)) = (Wrd206.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd212.pObj) = (& (Rhp [-2]));
  (Wrd210.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd212.pObj)));
  (Wrd217.Obj) = (current_block [OBJECT_4_27]);
  (* (Rhp++)) = (Wrd217.Obj);
  (* (Rhp++)) = (Wrd210.Obj);
  (Wrd216.pObj) = (& (Rhp [-2]));
  (Wrd214.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd216.pObj)));
  (* (Rhp++)) = (Wrd197.Obj);
  (* (Rhp++)) = (Wrd214.Obj);
  (Wrd220.pObj) = (& (Rhp [-2]));
  (Wrd218.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd220.pObj)));
  (Wrd225.Obj) = (current_block [OBJECT_4_28]);
  (* (Rhp++)) = (Wrd225.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd224.pObj) = (& (Rhp [-2]));
  (Wrd222.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd224.pObj)));
  (* (Rhp++)) = (Wrd218.Obj);
  (* (Rhp++)) = (Wrd222.Obj);
  (Wrd229.pObj) = (& (Rhp [-2]));
  (Wrd227.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd229.pObj)));
  (Wrd233.Obj) = (current_block [OBJECT_4_29]);
  (* (Rhp++)) = (Wrd233.Obj);
  (* (Rhp++)) = (Wrd227.Obj);
  (Wrd232.pObj) = (& (Rhp [-2]));
  (Wrd230.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd232.pObj)));
  (Wrd237.Obj) = (current_block [OBJECT_4_30]);
  (* (Rhp++)) = (Wrd237.Obj);
  (* (Rhp++)) = (Wrd230.Obj);
  (Wrd236.pObj) = (& (Rhp [-2]));
  (Wrd234.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd236.pObj)));
  (* (Rhp++)) = (Wrd234.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd240.pObj) = (& (Rhp [-2]));
  (Wrd238.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd240.pObj)));
  (Wrd245.Obj) = (current_block [OBJECT_4_31]);
  (* (Rhp++)) = (Wrd245.Obj);
  (* (Rhp++)) = (Wrd238.Obj);
  (Wrd244.pObj) = (& (Rhp [-2]));
  (Wrd242.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd244.pObj)));
  (* (Rhp++)) = (Wrd147.Obj);
  (* (Rhp++)) = (Wrd242.Obj);
  (Wrd248.pObj) = (& (Rhp [-2]));
  (Wrd246.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd248.pObj)));
  (* (Rhp++)) = (Wrd246.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd252.pObj) = (& (Rhp [-2]));
  (Wrd250.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd252.pObj)));
  (Wrd257.Obj) = (current_block [OBJECT_4_32]);
  (* (Rhp++)) = (Wrd257.Obj);
  (* (Rhp++)) = (Wrd250.Obj);
  (Wrd256.pObj) = (& (Rhp [-2]));
  (Wrd254.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd256.pObj)));
  (* (Rhp++)) = (Wrd197.Obj);
  (* (Rhp++)) = (Wrd254.Obj);
  (Wrd260.pObj) = (& (Rhp [-2]));
  (Wrd258.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd260.pObj)));
  (* (Rhp++)) = (Wrd258.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd264.pObj) = (& (Rhp [-2]));
  (Wrd262.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd264.pObj)));
  (Wrd269.Obj) = (current_block [OBJECT_4_33]);
  (* (Rhp++)) = (Wrd269.Obj);
  (* (Rhp++)) = (Wrd262.Obj);
  (Wrd268.pObj) = (& (Rhp [-2]));
  (Wrd266.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd268.pObj)));
  (* (Rhp++)) = (Wrd266.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd272.pObj) = (& (Rhp [-2]));
  (Wrd270.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd272.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd270.Obj);
  (Wrd277.pObj) = (& (Rhp [-2]));
  (Wrd275.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd277.pObj)));
  (Wrd282.Obj) = (current_block [OBJECT_4_34]);
  (* (Rhp++)) = (Wrd282.Obj);
  (* (Rhp++)) = (Wrd275.Obj);
  (Wrd280.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd280.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_97)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_92)
  (Wrd28.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_91)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_90)
  (Wrd14.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_89)
  (Wrd5.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_87)
  (Wrd25.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_86)
  (Wrd18.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_85)
  (Wrd9.Obj) = Rvl;
  goto label_112;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_5 7
#define LABEL_5_10 9
#define LABEL_5_11 11
#define LABEL_5_9 13
#define LABEL_5_16 15
#define LABEL_5_17 17
#define LABEL_5_12 19
#define TAG_5_13 8
#define LABEL_5_15 21
#define ENVIRONMENT_LABEL_5_3 39
#define DEBUGGING_LABEL_5_2 38
#define OBJECT_5_6 37
#define OBJECT_5_5 36
#define OBJECT_5_4 35
#define OBJECT_5_3 34
#define OBJECT_5_2 33
#define OBJECT_5_1 32
#define OBJECT_5_0 31
#define EXECUTE_CACHE_5_18 23
#define EXECUTE_CACHE_5_14 25
#define EXECUTE_CACHE_5_8 27
#define EXECUTE_CACHE_5_7 29
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_20;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_10);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_5_16);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_5_17);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_5_12);
      goto lambda_29;

    case 9:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_28)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_40;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_39)
  (Wrd17.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;
  (Wrd30.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_30)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_38;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_37)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_36;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_35)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_12])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd28 = Wrd27;
  (Wrd29.Obj) = (Rsp [3]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_33)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_32;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_5_3]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_5_4]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_5_5]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_5_6]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_5_6]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_25)
  (Wrd9.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_23)
  (Wrd10.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_5_12);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_5 7
#define LABEL_6_10 9
#define LABEL_6_11 11
#define LABEL_6_9 13
#define LABEL_6_16 15
#define LABEL_6_17 17
#define LABEL_6_12 19
#define TAG_6_13 8
#define LABEL_6_15 21
#define ENVIRONMENT_LABEL_6_3 39
#define DEBUGGING_LABEL_6_2 38
#define OBJECT_6_6 37
#define OBJECT_6_5 36
#define OBJECT_6_4 35
#define OBJECT_6_3 34
#define OBJECT_6_2 33
#define OBJECT_6_1 32
#define OBJECT_6_0 31
#define EXECUTE_CACHE_6_18 23
#define EXECUTE_CACHE_6_14 25
#define EXECUTE_CACHE_6_8 27
#define EXECUTE_CACHE_6_7 29
#define FREE_REFERENCES_LABEL_6_0 22
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_6_4);
      goto lambda_21;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_6_10);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_6_11);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_6_16);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_6_17);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_6_12);
      goto lambda_30;

    case 9:
      current_block = (Rpc - LABEL_6_15);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_29)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_41;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_40)
  (Wrd17.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;
  (Wrd30.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (label_31)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_39;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_38)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_37;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_36)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_12])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd28 = Wrd27;
  (Wrd29.Obj) = (Rsp [3]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_35;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_34)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_33;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_15);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6_3]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_6_4]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_6_5]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_6_6]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_6_6]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_26)
  (Wrd9.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_24)
  (Wrd10.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_6_12);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_5 7
#define LABEL_7_10 9
#define LABEL_7_11 11
#define LABEL_7_9 13
#define LABEL_7_16 15
#define LABEL_7_17 17
#define LABEL_7_12 19
#define TAG_7_13 8
#define LABEL_7_15 21
#define ENVIRONMENT_LABEL_7_3 38
#define DEBUGGING_LABEL_7_2 37
#define OBJECT_7_5 36
#define OBJECT_7_4 35
#define OBJECT_7_3 34
#define OBJECT_7_2 33
#define OBJECT_7_1 32
#define OBJECT_7_0 31
#define EXECUTE_CACHE_7_18 23
#define EXECUTE_CACHE_7_14 25
#define EXECUTE_CACHE_7_8 27
#define EXECUTE_CACHE_7_7 29
#define FREE_REFERENCES_LABEL_7_0 22
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_7_4);
      goto lambda_15;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_10);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_7_16);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_7_17);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_7_12);
      goto lambda_24;

    case 9:
      current_block = (Rpc - LABEL_7_15);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_23)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_35;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_34)
  (Wrd17.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  (Wrd30.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (label_25)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_33;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_32)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_31;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_30)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_12])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd28 = Wrd27;
  (Wrd29.Obj) = (Rsp [3]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_28)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_27;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_15);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_3]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_7_4]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_7_5]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_20)
  (Wrd9.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_18)
  (Wrd10.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_7_12);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_5 7
#define LABEL_8_10 9
#define LABEL_8_11 11
#define LABEL_8_9 13
#define LABEL_8_16 15
#define LABEL_8_17 17
#define LABEL_8_12 19
#define TAG_8_13 8
#define LABEL_8_15 21
#define ENVIRONMENT_LABEL_8_3 43
#define DEBUGGING_LABEL_8_2 42
#define OBJECT_8_10 41
#define OBJECT_8_9 40
#define OBJECT_8_8 39
#define OBJECT_8_7 38
#define OBJECT_8_6 37
#define OBJECT_8_5 36
#define OBJECT_8_4 35
#define OBJECT_8_3 34
#define OBJECT_8_2 33
#define OBJECT_8_1 32
#define OBJECT_8_0 31
#define EXECUTE_CACHE_8_18 23
#define EXECUTE_CACHE_8_14 25
#define EXECUTE_CACHE_8_8 27
#define EXECUTE_CACHE_8_7 29
#define FREE_REFERENCES_LABEL_8_0 22
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd106;
  machine_word Wrd108;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_34;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_36;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8_10);
      goto label_37;

    case 4:
      current_block = (Rpc - LABEL_8_11);
      goto label_38;

    case 5:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_8_16);
      goto label_39;

    case 7:
      current_block = (Rpc - LABEL_8_17);
      goto label_40;

    case 8:
      current_block = (Rpc - LABEL_8_12);
      goto lambda_43;

    case 9:
      current_block = (Rpc - LABEL_8_15);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_42)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_54;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_53)
  (Wrd17.Obj) = (current_block [OBJECT_8_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;
  (Wrd30.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (label_44)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_52;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_51)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_50;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_49)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_12])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd28 = Wrd27;
  (Wrd29.Obj) = (Rsp [3]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_47)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_46;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_15);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8_3]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_8_4]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_8_5]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_8_6]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_8_6]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_8_7]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd48.Obj) = (current_block [OBJECT_8_6]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd52.Obj) = (current_block [OBJECT_8_6]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_8_6]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd60.Obj) = (current_block [OBJECT_8_6]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (Wrd64.Obj) = (current_block [OBJECT_8_6]);
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (Wrd68.Obj) = (current_block [OBJECT_8_6]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (* (Rhp++)) = (Wrd77.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  (Wrd87.Obj) = (current_block [OBJECT_8_8]);
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (* (Rhp++)) = (Wrd84.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd90.pObj) = (& (Rhp [-2]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd90.pObj)));
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (Wrd100.Obj) = (current_block [OBJECT_8_9]);
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd99.pObj) = (& (Rhp [-2]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd99.pObj)));
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd97.Obj);
  (Wrd103.pObj) = (& (Rhp [-2]));
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd103.pObj)));
  (Wrd108.Obj) = (current_block [OBJECT_8_10]);
  (* (Rhp++)) = (Wrd108.Obj);
  (* (Rhp++)) = (Wrd101.Obj);
  (Wrd106.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd106.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_39)
  (Wrd9.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_37)
  (Wrd10.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_8_12);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_18]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 11
#define DEBUGGING_LABEL_9_2 10
#define OBJECT_9_0 9
#define EXECUTE_CACHE_9_6 7
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (lambda_5)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_9_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 13
#define DEBUGGING_LABEL_10_2 12
#define OBJECT_10_2 11
#define OBJECT_10_1 10
#define OBJECT_10_0 9
#define EXECUTE_CACHE_10_6 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_10_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_10_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_10_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 13
#define DEBUGGING_LABEL_11_2 12
#define OBJECT_11_2 11
#define OBJECT_11_1 10
#define OBJECT_11_0 9
#define EXECUTE_CACHE_11_6 7
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_11_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_11_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_11_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_6 5
#define LABEL_12_5 7
#define LABEL_12_9 9
#define LABEL_12_10 11
#define LABEL_12_11 13
#define LABEL_12_12 15
#define LABEL_12_13 17
#define LABEL_12_14 19
#define LABEL_12_15 21
#define LABEL_12_16 23
#define LABEL_12_17 25
#define LABEL_12_20 27
#define LABEL_12_22 29
#define LABEL_12_18 31
#define LABEL_12_24 33
#define LABEL_12_21 35
#define LABEL_12_27 37
#define LABEL_12_28 39
#define LABEL_12_29 41
#define LABEL_12_23 43
#define LABEL_12_26 45
#define LABEL_12_30 47
#define LABEL_12_31 49
#define LABEL_12_32 51
#define LABEL_12_33 53
#define ENVIRONMENT_LABEL_12_3 93
#define DEBUGGING_LABEL_12_2 92
#define OBJECT_12_24 91
#define OBJECT_12_23 90
#define OBJECT_12_22 89
#define OBJECT_12_21 88
#define OBJECT_12_20 87
#define OBJECT_12_19 86
#define OBJECT_12_18 85
#define OBJECT_12_17 84
#define OBJECT_12_16 83
#define OBJECT_12_15 82
#define OBJECT_12_14 81
#define OBJECT_12_13 80
#define OBJECT_12_12 79
#define OBJECT_12_11 78
#define OBJECT_12_10 77
#define OBJECT_12_9 76
#define OBJECT_12_8 75
#define OBJECT_12_7 74
#define OBJECT_12_6 73
#define OBJECT_12_5 72
#define OBJECT_12_4 71
#define OBJECT_12_3 70
#define OBJECT_12_2 69
#define OBJECT_12_1 68
#define OBJECT_12_0 67
#define EXECUTE_CACHE_12_25 55
#define EXECUTE_CACHE_12_34 57
#define EXECUTE_CACHE_12_19 59
#define EXECUTE_CACHE_12_8 61
#define EXECUTE_CACHE_12_7 63
#define FREE_REFERENCE_12_0 66
#define FREE_REFERENCES_LABEL_12_0 54
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd43;
  machine_word Wrd60;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd36;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd78;
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
      goto define_rtl_common_80;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto label_82;

    case 2:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto label_83;

    case 4:
      current_block = (Rpc - LABEL_12_10);
      goto label_84;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto label_85;

    case 6:
      current_block = (Rpc - LABEL_12_12);
      goto label_86;

    case 7:
      current_block = (Rpc - LABEL_12_13);
      goto label_87;

    case 8:
      current_block = (Rpc - LABEL_12_14);
      goto label_88;

    case 9:
      current_block = (Rpc - LABEL_12_15);
      goto label_89;

    case 10:
      current_block = (Rpc - LABEL_12_16);
      goto label_90;

    case 11:
      current_block = (Rpc - LABEL_12_17);
      goto continuation_41;

    case 12:
      current_block = (Rpc - LABEL_12_20);
      goto loop_74;

    case 13:
      current_block = (Rpc - LABEL_12_22);
      goto label_91;

    case 14:
      current_block = (Rpc - LABEL_12_18);
      goto continuation_30;

    case 15:
      current_block = (Rpc - LABEL_12_24);
      goto label_92;

    case 16:
      current_block = (Rpc - LABEL_12_21);
      goto continuation_45;

    case 17:
      current_block = (Rpc - LABEL_12_27);
      goto label_93;

    case 18:
      current_block = (Rpc - LABEL_12_28);
      goto label_94;

    case 19:
      current_block = (Rpc - LABEL_12_29);
      goto label_95;

    case 20:
      current_block = (Rpc - LABEL_12_23);
      goto continuation_18;

    case 21:
      current_block = (Rpc - LABEL_12_26);
      goto continuation_71;

    case 22:
      current_block = (Rpc - LABEL_12_30);
      goto continuation_26;

    case 23:
      current_block = (Rpc - LABEL_12_31);
      goto continuation_55;

    case 24:
      current_block = (Rpc - LABEL_12_32);
      goto continuation_20;

    case 25:
      current_block = (Rpc - LABEL_12_33);
      goto continuation_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_rtl_common_97)
DEFLABEL (define_rtl_common_80)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_119;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_118)
  (Wrd17.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_99;
  (Wrd78.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd78.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (label_99)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_117;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_116)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_115;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_114)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_113;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_112)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_111;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_110)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_109;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_108)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_107;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_106)
  (Wrd56.Obj) = (Rsp [2]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_105;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_104)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_103;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_102)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.pObj) = (& (Rsp [1]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd72.pObj)));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd77.Obj);
  goto loop_74;

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_12_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_12_18);
  (Wrd8.Obj) = (current_block [OBJECT_12_9]);
  (Wrd9.Obj) = (current_block [OBJECT_12_8]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_12_10]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_12_11]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_12_12]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd45.Obj) = (current_block [OBJECT_12_13]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd46.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_23]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_101;
  Wrd54 = Wrd58;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_25]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_12_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (current_block [OBJECT_12_8]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_12_10]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_12_14]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_12_30);
  (Wrd9.Obj) = (current_block [OBJECT_12_8]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_32]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12_17]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_12_32);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_12_13]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (current_block [OBJECT_12_8]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_12_10]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd35.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_12_22]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (Wrd55.Obj) = (current_block [OBJECT_12_23]);
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (Wrd63.Obj) = (current_block [OBJECT_12_24]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_24])), (Wrd55.pObj));

DEFLABEL (label_92)
  (Wrd54.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_89)
  (Wrd53.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_87)
  (Wrd39.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_86)
  (Wrd30.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_84)
  (Wrd16.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_83)
  (Wrd7.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_118;

DEFLABEL (loop_98)
DEFLABEL (loop_74)
  INTERRUPT_CHECK (26, LABEL_12_20);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_120;
  Rvl = (current_block [OBJECT_12_8]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_120)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_128;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_127)
  (Wrd21.Obj) = (current_block [OBJECT_12_7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_12_21);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [5]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_126;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (multiply_with_overflow ((Wrd27.Lng), 2, (& (Wrd25.Lng))))
    goto label_126;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_125)
  (Wrd40.Obj) = (Rsp [6]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_124;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (multiply_with_overflow ((Wrd44.Lng), 2, (& (Wrd42.Lng))))
    goto label_124;
  (Wrd47.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_123)
  (Wrd51.Obj) = (Rsp [6]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_122;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [1]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_121)
  goto loop_74;

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_12_26);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_12_15]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12_16]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_12_31);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = (current_block [OBJECT_12_18]);
  (Wrd11.Obj) = (current_block [OBJECT_12_8]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_12_19]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd23.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_12_20]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_12_21]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd55.Obj) = (current_block [OBJECT_12_13]);
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (Wrd56.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_33]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = (current_block [OBJECT_12_6]);
  (* (--Rsp)) = (Wrd66.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_34]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_12_33);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = (current_block [OBJECT_12_19]);
  (Wrd11.Obj) = (current_block [OBJECT_12_8]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd19.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_12_20]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd39.Obj) = (current_block [OBJECT_12_13]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd40.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_122)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_29]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_95)
  (Wrd53.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd53.Obj));
  (* (--Rsp)) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd35.Obj) = (Rsp [6]);
  (Wrd36.Obj) = (current_block [OBJECT_12_3]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_28]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_94)
  (Wrd31.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd31.Obj));
  (* (--Rsp)) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd18.Obj) = (Rsp [6]);
  (Wrd19.Obj) = (current_block [OBJECT_12_3]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_27]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_93)
  (Wrd14.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd14.Obj));
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_91)
  (* (--Rsp)) = Rvl;
  goto label_127;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_6 5
#define LABEL_13_5 7
#define LABEL_13_12 9
#define LABEL_13_13 11
#define LABEL_13_14 13
#define LABEL_13_15 15
#define LABEL_13_16 17
#define LABEL_13_17 19
#define LABEL_13_9 21
#define TAG_13_10 9
#define LABEL_13_20 23
#define LABEL_13_21 25
#define LABEL_13_23 27
#define LABEL_13_24 29
#define LABEL_13_11 31
#define LABEL_13_19 33
#define ENVIRONMENT_LABEL_13_3 59
#define DEBUGGING_LABEL_13_2 58
#define OBJECT_13_12 57
#define OBJECT_13_11 56
#define OBJECT_13_10 55
#define OBJECT_13_9 54
#define OBJECT_13_8 53
#define OBJECT_13_7 52
#define OBJECT_13_6 51
#define OBJECT_13_5 50
#define OBJECT_13_4 49
#define OBJECT_13_3 48
#define OBJECT_13_2 47
#define OBJECT_13_1 46
#define OBJECT_13_0 45
#define EXECUTE_CACHE_13_25 35
#define EXECUTE_CACHE_13_22 37
#define EXECUTE_CACHE_13_18 39
#define EXECUTE_CACHE_13_8 41
#define EXECUTE_CACHE_13_7 43
#define FREE_REFERENCES_LABEL_13_0 34
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd62;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd63;
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_24;

    case 1:
      current_block = (Rpc - LABEL_13_6);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_13_12);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_13_13);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_13_14);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_13_15);
      goto label_30;

    case 7:
      current_block = (Rpc - LABEL_13_16);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_13_17);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_13_9);
      goto lambda_39;

    case 10:
      current_block = (Rpc - LABEL_13_20);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_13_21);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_13_23);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_13_24);
      goto label_36;

    case 14:
      current_block = (Rpc - LABEL_13_11);
      goto continuation_23;

    case 15:
      current_block = (Rpc - LABEL_13_19);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_38)
DEFLABEL (lambda_24)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_54;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_53)
  (Wrd17.Obj) = (current_block [OBJECT_13_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;
  (Wrd63.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd63.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (label_40)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_9])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_52;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_51)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_50;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_49)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_48;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_47)
  (Wrd43.Obj) = (Rsp [4]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_46;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_45)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_44;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd49.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_43)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_42;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_18]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_13_11);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_42)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_31)
  (Wrd49.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_30)
  (Wrd40.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_28)
  (Wrd26.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_27)
  (Wrd17.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_13_9);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_66;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_65)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_64;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_63)
  (Wrd30.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == (current_block [OBJECT_13_3]))
    goto label_62;
  if ((Wrd30.Obj) == (current_block [OBJECT_13_4]))
    goto label_62;
  if ((Wrd30.Obj) == (current_block [OBJECT_13_6]))
    goto label_61;
  if ((Wrd30.Obj) == (current_block [OBJECT_13_8]))
    goto label_59;
  (Wrd38.Obj) = (current_block [OBJECT_13_10]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_58;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd39.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_57)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_56;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd54.Obj) = ((Wrd55.pObj) [0]);

DEFLABEL (label_55)
  (Rsp [1]) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_25]));

DEFLABEL (label_56)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_24]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_36)
  (Wrd54.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_23]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_35)
  (Wrd39.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_59)
  (Wrd61.Obj) = (current_block [OBJECT_13_9]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_60)
  (Wrd71.Obj) = (Rsp [3]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [2]);
  (Rsp [1]) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

DEFLABEL (label_61)
  (Wrd65.Obj) = (current_block [OBJECT_13_7]);
  (* (--Rsp)) = (Wrd65.Obj);
  goto label_60;

DEFLABEL (label_62)
  (Wrd69.Obj) = (current_block [OBJECT_13_5]);
  (* (--Rsp)) = (Wrd69.Obj);
  goto label_60;

DEFLABEL (label_64)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_33)
  (Wrd8.Obj) = Rvl;
  goto label_65;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_19);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_13_11]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_13_12]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_6 5
#define LABEL_14_5 7
#define LABEL_14_10 9
#define LABEL_14_11 11
#define LABEL_14_12 13
#define LABEL_14_13 15
#define LABEL_14_9 17
#define LABEL_14_15 19
#define ENVIRONMENT_LABEL_14_3 31
#define DEBUGGING_LABEL_14_2 30
#define OBJECT_14_2 29
#define OBJECT_14_1 28
#define OBJECT_14_0 27
#define EXECUTE_CACHE_14_14 21
#define EXECUTE_CACHE_14_8 23
#define EXECUTE_CACHE_14_7 25
#define FREE_REFERENCES_LABEL_14_0 20
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd43;
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_8;

    case 1:
      current_block = (Rpc - LABEL_14_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_14_10);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_14_11);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_14_12);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_14_13);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_14_15);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_16)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_28;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_27)
  (Wrd17.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd43.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd43.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_26;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_25)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_24;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_23)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_22;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_21)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_20;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_20)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_13)
  (Wrd27.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (lambda_17)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_14_15);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_6 5
#define LABEL_15_5 7
#define LABEL_15_9 9
#define LABEL_15_10 11
#define ENVIRONMENT_LABEL_15_3 24
#define DEBUGGING_LABEL_15_2 23
#define OBJECT_15_3 22
#define OBJECT_15_2 21
#define OBJECT_15_1 20
#define OBJECT_15_0 19
#define EXECUTE_CACHE_15_11 13
#define EXECUTE_CACHE_15_8 15
#define EXECUTE_CACHE_15_7 17
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_15_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_15;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_14)
  (Wrd17.Obj) = (current_block [OBJECT_15_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd25.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (label_11)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_13;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_12)
  (Wrd19.Obj) = (current_block [OBJECT_15_2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_15_3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_6 5
#define LABEL_16_5 7
#define LABEL_16_9 9
#define LABEL_16_10 11
#define LABEL_16_11 13
#define ENVIRONMENT_LABEL_16_3 27
#define DEBUGGING_LABEL_16_2 26
#define OBJECT_16_4 25
#define OBJECT_16_3 24
#define OBJECT_16_2 23
#define OBJECT_16_1 22
#define OBJECT_16_0 21
#define EXECUTE_CACHE_16_12 15
#define EXECUTE_CACHE_16_8 17
#define EXECUTE_CACHE_16_7 19
#define FREE_REFERENCES_LABEL_16_0 14
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_16_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_16_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_16_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_12)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_19;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_18)
  (Wrd17.Obj) = (current_block [OBJECT_16_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd32.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd32.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (label_13)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_17;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_16)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_15;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_14)
  (Wrd26.Obj) = (current_block [OBJECT_16_3]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_16_4]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_10)
  (Wrd16.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_6 5
#define LABEL_17_5 7
#define LABEL_17_9 9
#define LABEL_17_10 11
#define LABEL_17_11 13
#define LABEL_17_12 15
#define LABEL_17_13 17
#define LABEL_17_14 19
#define LABEL_17_16 21
#define LABEL_17_18 23
#define LABEL_17_19 25
#define TAG_17_20 11
#define LABEL_17_22 27
#define ENVIRONMENT_LABEL_17_3 53
#define DEBUGGING_LABEL_17_2 52
#define OBJECT_17_10 51
#define OBJECT_17_9 50
#define OBJECT_17_8 49
#define OBJECT_17_7 48
#define OBJECT_17_6 47
#define OBJECT_17_5 46
#define OBJECT_17_4 45
#define OBJECT_17_3 44
#define OBJECT_17_2 43
#define OBJECT_17_1 42
#define OBJECT_17_0 41
#define EXECUTE_CACHE_17_21 29
#define EXECUTE_CACHE_17_17 31
#define EXECUTE_CACHE_17_23 33
#define EXECUTE_CACHE_17_15 35
#define EXECUTE_CACHE_17_8 37
#define EXECUTE_CACHE_17_7 39
#define FREE_REFERENCES_LABEL_17_0 28
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd51;
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
      current_block = (Rpc - LABEL_17_4);
      goto lambda_30;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto label_33;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto label_34;

    case 5:
      current_block = (Rpc - LABEL_17_11);
      goto label_35;

    case 6:
      current_block = (Rpc - LABEL_17_12);
      goto label_36;

    case 7:
      current_block = (Rpc - LABEL_17_13);
      goto label_37;

    case 8:
      current_block = (Rpc - LABEL_17_14);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_17_16);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_17_18);
      goto continuation_25;

    case 11:
      current_block = (Rpc - LABEL_17_19);
      goto lambda_40;

    case 12:
      current_block = (Rpc - LABEL_17_22);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_39)
DEFLABEL (lambda_30)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_53;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_52)
  (Wrd17.Obj) = (current_block [OBJECT_17_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_41;
  (Wrd51.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd51.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (label_41)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_51;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_50)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_49;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_48)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_47;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_46)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_45;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_44)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_43;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_42)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_17_3]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_19])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  ((Wrd13.pObj) [3]) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_21]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_17_18);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_17_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_17_5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_17_6]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_17_7]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_17_8]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_36)
  (Wrd30.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_34)
  (Wrd16.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_33)
  (Wrd7.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_17_19);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_23]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_17_22);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_17_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_17_5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_17_10]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_17_7]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_6 5
#define LABEL_18_5 7
#define LABEL_18_9 9
#define LABEL_18_10 11
#define LABEL_18_11 13
#define LABEL_18_12 15
#define LABEL_18_13 17
#define LABEL_18_14 19
#define LABEL_18_15 21
#define TAG_18_16 9
#define LABEL_18_19 23
#define LABEL_18_20 25
#define LABEL_18_17 27
#define ENVIRONMENT_LABEL_18_3 43
#define DEBUGGING_LABEL_18_2 42
#define OBJECT_18_4 41
#define OBJECT_18_3 40
#define OBJECT_18_2 39
#define OBJECT_18_1 38
#define OBJECT_18_0 37
#define EXECUTE_CACHE_18_21 29
#define EXECUTE_CACHE_18_18 31
#define EXECUTE_CACHE_18_8 33
#define EXECUTE_CACHE_18_7 35
#define FREE_REFERENCES_LABEL_18_0 28
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd61;
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_18_6);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_18_9);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_18_10);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_18_11);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_18_12);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_18_13);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_18_14);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_18_15);
      goto lambda_25;

    case 10:
      current_block = (Rpc - LABEL_18_19);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_18_20);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_18_17);
      goto lambda_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_24)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_41;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_40)
  (Wrd17.Obj) = (current_block [OBJECT_18_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;
  (Wrd61.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd61.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (label_27)
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_39;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_38)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_37;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_36)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_35;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_34)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_33;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [1]);

DEFLABEL (label_32)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_31;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd40.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_30)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_29;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_28)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd56.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_15])));
  Rhp += 1;
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd56.pObj)));
  Wrd57 = Wrd56;
  (Wrd58.Obj) = (Rsp [3]);
  ((Wrd57.pObj) [2]) = (Wrd58.Obj);
  (Rsp [3]) = (Wrd55.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (Rsp [4]) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_18]));

DEFLABEL (label_29)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_19)
  (Wrd40.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_18)
  (Wrd31.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_16)
  (Wrd17.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_15)
  (Wrd8.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_18_15);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_45;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_44)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_43;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_42)
  (Wrd27.Obj) = (current_block [OBJECT_18_3]);
  (Rsp [1]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_21]));

DEFLABEL (label_43)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_20]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_19]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_44;

DEFLABEL (lambda_26)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_18_17);
  Rvl = (current_block [OBJECT_18_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_6 5
#define LABEL_19_5 7
#define LABEL_19_9 9
#define LABEL_19_10 11
#define LABEL_19_11 13
#define LABEL_19_12 15
#define LABEL_19_13 17
#define LABEL_19_14 19
#define ENVIRONMENT_LABEL_19_3 38
#define DEBUGGING_LABEL_19_2 37
#define OBJECT_19_7 36
#define OBJECT_19_6 35
#define OBJECT_19_5 34
#define OBJECT_19_4 33
#define OBJECT_19_3 32
#define OBJECT_19_2 31
#define OBJECT_19_1 30
#define OBJECT_19_0 29
#define EXECUTE_CACHE_19_16 21
#define EXECUTE_CACHE_19_15 23
#define EXECUTE_CACHE_19_8 25
#define EXECUTE_CACHE_19_7 27
#define FREE_REFERENCES_LABEL_19_0 20
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd44;
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_13;

    case 1:
      current_block = (Rpc - LABEL_19_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_19_9);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_19_10);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_19_11);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_19_12);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_19_13);
      goto lambda_6;

    case 8:
      current_block = (Rpc - LABEL_19_14);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_21)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_34;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_33)
  (Wrd17.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd44.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd44.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (label_24)
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_32;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_31)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_30;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_29)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_28;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_27)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_26;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_25)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (Rsp [3]) = (Wrd40.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (Rsp [4]) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_15]));

DEFLABEL (label_26)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_18)
  (Wrd24.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (lambda_22)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_19_13);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_16]));

DEFLABEL (lambda_23)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_19_14);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_19_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_19_5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_19_6]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_19_7]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define TAG_20_6 1
#define LABEL_20_8 7
#define LABEL_20_10 9
#define LABEL_20_13 11
#define LABEL_20_12 13
#define LABEL_20_14 15
#define LABEL_20_15 17
#define LABEL_20_17 19
#define LABEL_20_18 21
#define LABEL_20_19 23
#define LABEL_20_20 25
#define LABEL_20_21 27
#define LABEL_20_24 29
#define LABEL_20_25 31
#define LABEL_20_16 33
#define LABEL_20_30 35
#define LABEL_20_31 37
#define LABEL_20_32 39
#define LABEL_20_29 41
#define LABEL_20_35 43
#define LABEL_20_36 45
#define LABEL_20_23 47
#define LABEL_20_26 49
#define TAG_20_27 23
#define LABEL_20_34 51
#define LABEL_20_40 53
#define LABEL_20_41 55
#define LABEL_20_37 57
#define TAG_20_38 27
#define LABEL_20_39 59
#define LABEL_20_42 61
#define TAG_20_43 29
#define LABEL_20_44 63
#define LABEL_20_45 65
#define ENVIRONMENT_LABEL_20_3 90
#define DEBUGGING_LABEL_20_2 89
#define OBJECT_20_9 88
#define OBJECT_20_8 87
#define OBJECT_20_7 86
#define OBJECT_20_6 85
#define OBJECT_20_5 84
#define OBJECT_20_4 83
#define OBJECT_20_3 82
#define OBJECT_20_2 81
#define OBJECT_20_1 80
#define OBJECT_20_0 79
#define EXECUTE_CACHE_20_33 67
#define EXECUTE_CACHE_20_28 69
#define EXECUTE_CACHE_20_22 71
#define EXECUTE_CACHE_20_11 73
#define EXECUTE_CACHE_20_9 75
#define EXECUTE_CACHE_20_7 77
#define FREE_REFERENCES_LABEL_20_0 66
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
macros_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd85;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_20_4);
      goto enumeration_case_1_46;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto lambda_62;

    case 2:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_37;

    case 4:
      current_block = (Rpc - LABEL_20_13);
      goto lambda_36;

    case 5:
      current_block = (Rpc - LABEL_20_12);
      goto continuation_41;

    case 6:
      current_block = (Rpc - LABEL_20_14);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_20_15);
      goto loop_34;

    case 8:
      current_block = (Rpc - LABEL_20_17);
      goto label_48;

    case 9:
      current_block = (Rpc - LABEL_20_18);
      goto label_49;

    case 10:
      current_block = (Rpc - LABEL_20_19);
      goto continuation_28;

    case 11:
      current_block = (Rpc - LABEL_20_20);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_20_21);
      goto label_53;

    case 13:
      current_block = (Rpc - LABEL_20_24);
      goto label_54;

    case 14:
      current_block = (Rpc - LABEL_20_25);
      goto label_55;

    case 15:
      current_block = (Rpc - LABEL_20_16);
      goto continuation_6;

    case 16:
      current_block = (Rpc - LABEL_20_30);
      goto label_52;

    case 17:
      current_block = (Rpc - LABEL_20_31);
      goto label_50;

    case 18:
      current_block = (Rpc - LABEL_20_32);
      goto label_51;

    case 19:
      current_block = (Rpc - LABEL_20_29);
      goto continuation_25;

    case 20:
      current_block = (Rpc - LABEL_20_35);
      goto label_56;

    case 21:
      current_block = (Rpc - LABEL_20_36);
      goto label_57;

    case 22:
      current_block = (Rpc - LABEL_20_23);
      goto continuation_32;

    case 23:
      current_block = (Rpc - LABEL_20_26);
      goto lambda_65;

    case 24:
      current_block = (Rpc - LABEL_20_34);
      goto continuation_22;

    case 25:
      current_block = (Rpc - LABEL_20_40);
      goto label_58;

    case 26:
      current_block = (Rpc - LABEL_20_41);
      goto label_59;

    case 27:
      current_block = (Rpc - LABEL_20_37);
      goto lambda_66;

    case 28:
      current_block = (Rpc - LABEL_20_39);
      goto continuation_17;

    case 29:
      current_block = (Rpc - LABEL_20_42);
      goto lambda_67;

    case 30:
      current_block = (Rpc - LABEL_20_44);
      goto continuation_11;

    case 31:
      current_block = (Rpc - LABEL_20_45);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (enumeration_case_1_61)
DEFLABEL (enumeration_case_1_46)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_5])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [6]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_20_5);

DEFLABEL (lambda_45)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_20_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = (& (Rsp [2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (Rsp [1]) = (Wrd11.Obj);
  Rdl = (& (Rsp [4]));
  goto lambda_36;

DEFLABEL (label_68)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.pObj) = (& (Rsp [2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  Rdl = (& (Rsp [2]));
  goto lambda_36;

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_20_12);
  (Wrd9.Obj) = (current_block [OBJECT_20_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_20_0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_20_2]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_63)
DEFLABEL (lambda_36)
  DLINK_INTERRUPT_CHECK (25, LABEL_20_13);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.pObj) = (& (Rsp [2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto loop_34;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_14);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_20_3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (loop_64)
DEFLABEL (loop_34)
  INTERRUPT_CHECK (26, LABEL_20_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_69;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd14.Obj) = ((Wrd9.pObj) [0]);
  (Rsp [1]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_69)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_95;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_94)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_93;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_92)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_20_7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_91;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_90)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_89;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_88)
  (Wrd32.Obj) = (Rsp [5]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_33]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_20_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_76;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_75)
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_74;
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd99.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd100.Obj) = (current_block [OBJECT_20_6]);
  (* (--Rsp)) = (Wrd100.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_22]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_20_19);

DEFLABEL (label_74)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_23]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_73;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [0]);

DEFLABEL (label_72)
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_71;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [1]);
  (* (--Rsp)) = (Wrd80.Obj);

DEFLABEL (label_70)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd87.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_26])));
  Rhp += 1;
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd87.pObj)));
  Wrd88 = Wrd87;
  (Wrd89.Obj) = (Rsp [3]);
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [1]);
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [0]);
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [4]);
  ((Wrd88.pObj) [2]) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_28]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_20_23);
  (Wrd9.Obj) = (current_block [OBJECT_20_7]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_20_1]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_25]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_24]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_54)
  (Wrd70.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_76)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_21]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 1);

DEFLABEL (label_53)
  (Wrd57.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_29]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_87;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_86)
  goto loop_34;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_20_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_85;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_84)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_83;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_82)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_37])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [4]);
  ((Wrd26.pObj) [2]) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_28]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_20_34);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_81;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_80)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_79;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_78)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_43);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_42])));
  Rhp += 3;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd38 = Wrd25;
  (Wrd39.Obj) = (Rsp [5]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [1]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [3]);
  ((Wrd38.pObj) [2]) = (Wrd45.Obj);
  (Wrd37.Obj) = ((Wrd44.pObj) [4]);
  ((Wrd38.pObj) [3]) = (Wrd37.Obj);
  (Wrd29.Obj) = ((Wrd40.pObj) [0]);
  ((Wrd38.pObj) [4]) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_28]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_20_39);
  (Wrd9.Obj) = (current_block [OBJECT_20_8]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_41]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_40]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_58)
  (Wrd8.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_36]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_35]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_56)
  (Wrd8.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_30]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_32]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_31]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_50)
  (Wrd16.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_18]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_48)
  (Wrd20.Obj) = Rvl;
  goto label_94;

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_20_26);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_20_37);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (lambda_67)
  CLOSURE_HEADER (LABEL_20_42);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_45]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_20_45);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20_44);
  (Wrd9.Obj) = (current_block [OBJECT_20_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_20_9]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_12 15
#define LABEL_18 17
#define LABEL_13 19
#define LABEL_14 21
#define LABEL_15 23
#define LABEL_16 25
#define LABEL_17 27
#define LABEL_28 29
#define LABEL_19 31
#define LABEL_29 33
#define LABEL_30 35
#define LABEL_20 37
#define TAG_21 17
#define LABEL_33 39
#define LABEL_22 41
#define LABEL_23 43
#define LABEL_24 45
#define LABEL_38 47
#define LABEL_25 49
#define LABEL_39 51
#define LABEL_40 53
#define LABEL_26 55
#define TAG_27 26
#define LABEL_42 57
#define LABEL_32 59
#define LABEL_44 61
#define LABEL_45 63
#define LABEL_46 65
#define LABEL_47 67
#define LABEL_48 69
#define LABEL_49 71
#define LABEL_50 73
#define LABEL_51 75
#define LABEL_35 77
#define LABEL_36 79
#define LABEL_37 81
#define LABEL_41 83
#define LABEL_61 85
#define LABEL_62 87
#define LABEL_63 89
#define LABEL_64 91
#define LABEL_52 93
#define TAG_53 45
#define LABEL_54 95
#define LABEL_69 97
#define LABEL_71 99
#define LABEL_72 101
#define LABEL_55 103
#define LABEL_56 105
#define LABEL_57 107
#define LABEL_79 109
#define LABEL_58 111
#define LABEL_80 113
#define LABEL_81 115
#define LABEL_59 117
#define TAG_60 57
#define LABEL_83 119
#define LABEL_65 121
#define LABEL_67 123
#define LABEL_70 125
#define LABEL_88 127
#define LABEL_89 129
#define LABEL_93 131
#define LABEL_73 133
#define LABEL_74 135
#define LABEL_75 137
#define LABEL_100 139
#define LABEL_76 141
#define LABEL_101 143
#define LABEL_102 145
#define LABEL_77 147
#define TAG_78 72
#define LABEL_104 149
#define LABEL_82 151
#define LABEL_105 153
#define LABEL_106 155
#define LABEL_107 157
#define LABEL_108 159
#define LABEL_84 161
#define LABEL_86 163
#define LABEL_87 165
#define LABEL_90 167
#define TAG_91 82
#define LABEL_94 169
#define LABEL_95 171
#define LABEL_96 173
#define LABEL_118 175
#define LABEL_97 177
#define LABEL_119 179
#define LABEL_120 181
#define LABEL_98 183
#define TAG_99 90
#define LABEL_122 185
#define LABEL_103 187
#define LABEL_123 189
#define LABEL_124 191
#define LABEL_125 193
#define LABEL_126 195
#define LABEL_109 197
#define LABEL_110 199
#define LABEL_112 201
#define LABEL_113 203
#define LABEL_114 205
#define LABEL_135 207
#define LABEL_115 209
#define LABEL_136 211
#define LABEL_137 213
#define LABEL_116 215
#define TAG_117 106
#define LABEL_139 217
#define LABEL_121 219
#define LABEL_140 221
#define LABEL_141 223
#define LABEL_142 225
#define LABEL_143 227
#define LABEL_127 229
#define LABEL_128 231
#define LABEL_129 233
#define LABEL_130 235
#define LABEL_131 237
#define LABEL_150 239
#define LABEL_132 241
#define LABEL_151 243
#define LABEL_152 245
#define LABEL_133 247
#define TAG_134 122
#define LABEL_154 249
#define LABEL_138 251
#define LABEL_155 253
#define LABEL_156 255
#define LABEL_157 257
#define LABEL_158 259
#define LABEL_144 261
#define LABEL_145 263
#define LABEL_146 265
#define LABEL_147 267
#define LABEL_148 269
#define LABEL_149 271
#define LABEL_153 273
#define LABEL_165 275
#define LABEL_166 277
#define LABEL_167 279
#define LABEL_168 281
#define LABEL_169 283
#define LABEL_170 285
#define LABEL_172 287
#define LABEL_173 289
#define LABEL_159 291
#define LABEL_160 293
#define LABEL_161 295
#define LABEL_162 297
#define LABEL_163 299
#define LABEL_164 301
#define LABEL_171 303
#define LABEL_174 305
#define LABEL_175 307
#define LABEL_176 309
#define LABEL_177 311
#define LABEL_178 313
#define LABEL_179 315
#define TAG_180 156
#define LABEL_181 317
#define LABEL_182 319
#define TAG_183 158
#define LABEL_185 321
#define LABEL_186 323
#define LABEL_187 325
#define LABEL_188 327
#define LABEL_189 329
#define LABEL_191 331
#define LABEL_190 333
#define LABEL_195 335
#define LABEL_192 337
#define LABEL_193 339
#define LABEL_194 341
#define LABEL_196 343
#define LABEL_197 345
#define LABEL_198 347
#define LABEL_199 349
#define LABEL_200 351
#define LABEL_201 353
#define LABEL_202 355
#define LABEL_203 357
#define LABEL_204 359
#define LABEL_205 361
#define LABEL_206 363
#define LABEL_207 365
#define LABEL_208 367
#define LABEL_209 369
#define LABEL_210 371
#define LABEL_211 373
#define LABEL_212 375
#define LABEL_213 377
#define LABEL_214 379
#define LABEL_215 381
#define LABEL_216 383
#define LABEL_217 385
#define LABEL_218 387
#define LABEL_219 389
#define LABEL_220 391
#define LABEL_221 393
#define LABEL_222 395
#define LABEL_223 397
#define LABEL_224 399
#define LABEL_225 401
#define LABEL_226 403
#define ENVIRONMENT_LABEL_3 531
#define DEBUGGING_LABEL_2 530
#define PURIFICATION_ROOT 529
#define OBJECT_97 528
#define OBJECT_96 527
#define OBJECT_95 526
#define OBJECT_94 525
#define OBJECT_93 524
#define OBJECT_92 523
#define OBJECT_91 522
#define OBJECT_90 521
#define OBJECT_89 520
#define OBJECT_88 519
#define OBJECT_87 518
#define OBJECT_86 517
#define OBJECT_85 516
#define OBJECT_84 515
#define OBJECT_83 514
#define OBJECT_82 513
#define OBJECT_81 512
#define OBJECT_80 511
#define OBJECT_79 510
#define OBJECT_78 509
#define OBJECT_77 508
#define OBJECT_76 507
#define OBJECT_75 506
#define OBJECT_74 505
#define OBJECT_73 504
#define OBJECT_72 503
#define OBJECT_71 502
#define OBJECT_70 501
#define OBJECT_69 500
#define OBJECT_68 499
#define OBJECT_67 498
#define OBJECT_66 497
#define OBJECT_65 496
#define OBJECT_64 495
#define OBJECT_63 494
#define OBJECT_62 493
#define OBJECT_61 492
#define OBJECT_60 491
#define OBJECT_59 490
#define OBJECT_58 489
#define OBJECT_57 488
#define OBJECT_56 487
#define OBJECT_55 486
#define OBJECT_54 485
#define OBJECT_53 484
#define OBJECT_52 483
#define OBJECT_51 482
#define OBJECT_50 481
#define OBJECT_49 480
#define OBJECT_48 479
#define OBJECT_47 478
#define OBJECT_46 477
#define OBJECT_45 476
#define OBJECT_44 475
#define OBJECT_43 474
#define OBJECT_42 473
#define OBJECT_41 472
#define OBJECT_40 471
#define OBJECT_39 470
#define OBJECT_38 469
#define OBJECT_37 468
#define OBJECT_36 467
#define OBJECT_35 466
#define OBJECT_34 465
#define OBJECT_33 464
#define OBJECT_32 463
#define OBJECT_31 462
#define OBJECT_30 461
#define OBJECT_29 460
#define OBJECT_28 459
#define OBJECT_27 458
#define OBJECT_26 457
#define OBJECT_25 456
#define OBJECT_24 455
#define OBJECT_23 454
#define OBJECT_22 453
#define OBJECT_21 452
#define OBJECT_20 451
#define OBJECT_19 450
#define OBJECT_18 449
#define OBJECT_17 448
#define OBJECT_16 447
#define OBJECT_15 446
#define OBJECT_14 445
#define OBJECT_13 444
#define OBJECT_12 443
#define OBJECT_11 442
#define OBJECT_10 441
#define OBJECT_9 440
#define OBJECT_8 439
#define OBJECT_7 438
#define OBJECT_6 437
#define OBJECT_5 436
#define OBJECT_4 435
#define OBJECT_3 434
#define OBJECT_2 433
#define OBJECT_1 432
#define OBJECT_0 431
#define EXECUTE_CACHE_184 405
#define EXECUTE_CACHE_111 407
#define EXECUTE_CACHE_92 409
#define EXECUTE_CACHE_85 411
#define EXECUTE_CACHE_68 413
#define EXECUTE_CACHE_66 415
#define EXECUTE_CACHE_43 417
#define EXECUTE_CACHE_34 419
#define EXECUTE_CACHE_31 421
#define FREE_REFERENCE_1 424
#define FREE_REFERENCE_0 425
#define GLOBAL_EXECUTE_CACHE_11 427
#define GLOBAL_EXECUTE_CACHE_7 429
#define FREE_REFERENCES_LABEL_0 404
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
macros_so_734d2c026aafe31e (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd126;
  machine_word Wrd156;
  machine_word Wrd158;
  machine_word Wrd151;
  machine_word Wrd153;
  machine_word Wrd147;
  machine_word Wrd149;
  machine_word Wrd143;
  machine_word Wrd145;
  machine_word Wrd139;
  machine_word Wrd141;
  machine_word Wrd135;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd131;
  machine_word Wrd133;
  machine_word Wrd122;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd106;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd87;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd53;
  machine_word Wrd128;
  machine_word Wrd130;
  machine_word Wrd123;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd121;
  machine_word Wrd115;
  machine_word Wrd117;
  machine_word Wrd118;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd110;
  machine_word Wrd103;
  machine_word Wrd105;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd83;
  machine_word Wrd75;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd81;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd37;
  machine_word Wrd47;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd85;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd18;
  machine_word Wrd50;
  machine_word Wrd12;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd11;
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
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_522;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_78;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_77;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_75;

    case 13:
      current_block = (Rpc - LABEL_28);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto lambda_17;

    case 15:
      current_block = (Rpc - LABEL_29);
      goto label_524;

    case 16:
      current_block = (Rpc - LABEL_30);
      goto label_523;

    case 17:
      current_block = (Rpc - LABEL_20);
      goto lambda_587;

    case 18:
      current_block = (Rpc - LABEL_33);
      goto label_525;

    case 19:
      current_block = (Rpc - LABEL_22);
      goto continuation_136;

    case 20:
      current_block = (Rpc - LABEL_23);
      goto continuation_135;

    case 21:
      current_block = (Rpc - LABEL_24);
      goto continuation_133;

    case 22:
      current_block = (Rpc - LABEL_38);
      goto continuation_79;

    case 23:
      current_block = (Rpc - LABEL_25);
      goto lambda_84;

    case 24:
      current_block = (Rpc - LABEL_39);
      goto label_527;

    case 25:
      current_block = (Rpc - LABEL_40);
      goto label_526;

    case 26:
      current_block = (Rpc - LABEL_26);
      goto lambda_588;

    case 27:
      current_block = (Rpc - LABEL_42);
      goto label_528;

    case 28:
      current_block = (Rpc - LABEL_32);
      goto continuation_24;

    case 29:
      current_block = (Rpc - LABEL_44);
      goto label_529;

    case 30:
      current_block = (Rpc - LABEL_45);
      goto label_530;

    case 31:
      current_block = (Rpc - LABEL_46);
      goto label_531;

    case 32:
      current_block = (Rpc - LABEL_47);
      goto label_532;

    case 33:
      current_block = (Rpc - LABEL_48);
      goto label_533;

    case 34:
      current_block = (Rpc - LABEL_49);
      goto label_534;

    case 35:
      current_block = (Rpc - LABEL_50);
      goto label_535;

    case 36:
      current_block = (Rpc - LABEL_51);
      goto label_536;

    case 37:
      current_block = (Rpc - LABEL_35);
      goto continuation_140;

    case 38:
      current_block = (Rpc - LABEL_36);
      goto continuation_139;

    case 39:
      current_block = (Rpc - LABEL_37);
      goto continuation_137;

    case 40:
      current_block = (Rpc - LABEL_41);
      goto continuation_90;

    case 41:
      current_block = (Rpc - LABEL_61);
      goto label_537;

    case 42:
      current_block = (Rpc - LABEL_62);
      goto label_538;

    case 43:
      current_block = (Rpc - LABEL_63);
      goto label_539;

    case 44:
      current_block = (Rpc - LABEL_64);
      goto label_540;

    case 45:
      current_block = (Rpc - LABEL_52);
      goto lambda_55;

    case 46:
      current_block = (Rpc - LABEL_54);
      goto continuation_57;

    case 47:
      current_block = (Rpc - LABEL_69);
      goto loop_69;

    case 48:
      current_block = (Rpc - LABEL_71);
      goto label_541;

    case 49:
      current_block = (Rpc - LABEL_72);
      goto label_542;

    case 50:
      current_block = (Rpc - LABEL_55);
      goto continuation_205;

    case 51:
      current_block = (Rpc - LABEL_56);
      goto continuation_204;

    case 52:
      current_block = (Rpc - LABEL_57);
      goto continuation_202;

    case 53:
      current_block = (Rpc - LABEL_79);
      goto continuation_141;

    case 54:
      current_block = (Rpc - LABEL_58);
      goto lambda_146;

    case 55:
      current_block = (Rpc - LABEL_80);
      goto label_544;

    case 56:
      current_block = (Rpc - LABEL_81);
      goto label_543;

    case 57:
      current_block = (Rpc - LABEL_59);
      goto lambda_592;

    case 58:
      current_block = (Rpc - LABEL_83);
      goto label_545;

    case 59:
      current_block = (Rpc - LABEL_65);
      goto continuation_95;

    case 60:
      current_block = (Rpc - LABEL_67);
      goto continuation_33;

    case 61:
      current_block = (Rpc - LABEL_70);
      goto continuation_68;

    case 62:
      current_block = (Rpc - LABEL_88);
      goto label_546;

    case 63:
      current_block = (Rpc - LABEL_89);
      goto label_548;

    case 64:
      current_block = (Rpc - LABEL_93);
      goto label_547;

    case 65:
      current_block = (Rpc - LABEL_73);
      goto continuation_270;

    case 66:
      current_block = (Rpc - LABEL_74);
      goto continuation_269;

    case 67:
      current_block = (Rpc - LABEL_75);
      goto continuation_267;

    case 68:
      current_block = (Rpc - LABEL_100);
      goto continuation_206;

    case 69:
      current_block = (Rpc - LABEL_76);
      goto lambda_211;

    case 70:
      current_block = (Rpc - LABEL_101);
      goto label_550;

    case 71:
      current_block = (Rpc - LABEL_102);
      goto label_549;

    case 72:
      current_block = (Rpc - LABEL_77);
      goto lambda_594;

    case 73:
      current_block = (Rpc - LABEL_104);
      goto label_551;

    case 74:
      current_block = (Rpc - LABEL_82);
      goto continuation_152;

    case 75:
      current_block = (Rpc - LABEL_105);
      goto label_552;

    case 76:
      current_block = (Rpc - LABEL_106);
      goto label_553;

    case 77:
      current_block = (Rpc - LABEL_107);
      goto label_554;

    case 78:
      current_block = (Rpc - LABEL_108);
      goto label_555;

    case 79:
      current_block = (Rpc - LABEL_84);
      goto continuation_96;

    case 80:
      current_block = (Rpc - LABEL_86);
      goto continuation_42;

    case 81:
      current_block = (Rpc - LABEL_87);
      goto continuation_62;

    case 82:
      current_block = (Rpc - LABEL_90);
      goto lambda_596;

    case 83:
      current_block = (Rpc - LABEL_94);
      goto continuation_335;

    case 84:
      current_block = (Rpc - LABEL_95);
      goto continuation_334;

    case 85:
      current_block = (Rpc - LABEL_96);
      goto continuation_332;

    case 86:
      current_block = (Rpc - LABEL_118);
      goto continuation_271;

    case 87:
      current_block = (Rpc - LABEL_97);
      goto lambda_276;

    case 88:
      current_block = (Rpc - LABEL_119);
      goto label_557;

    case 89:
      current_block = (Rpc - LABEL_120);
      goto label_556;

    case 90:
      current_block = (Rpc - LABEL_98);
      goto lambda_597;

    case 91:
      current_block = (Rpc - LABEL_122);
      goto label_558;

    case 92:
      current_block = (Rpc - LABEL_103);
      goto continuation_217;

    case 93:
      current_block = (Rpc - LABEL_123);
      goto label_559;

    case 94:
      current_block = (Rpc - LABEL_124);
      goto label_560;

    case 95:
      current_block = (Rpc - LABEL_125);
      goto label_561;

    case 96:
      current_block = (Rpc - LABEL_126);
      goto label_562;

    case 97:
      current_block = (Rpc - LABEL_109);
      goto continuation_157;

    case 98:
      current_block = (Rpc - LABEL_110);
      goto continuation_106;

    case 99:
      current_block = (Rpc - LABEL_112);
      goto continuation_400;

    case 100:
      current_block = (Rpc - LABEL_113);
      goto continuation_399;

    case 101:
      current_block = (Rpc - LABEL_114);
      goto continuation_397;

    case 102:
      current_block = (Rpc - LABEL_135);
      goto continuation_336;

    case 103:
      current_block = (Rpc - LABEL_115);
      goto lambda_341;

    case 104:
      current_block = (Rpc - LABEL_136);
      goto label_564;

    case 105:
      current_block = (Rpc - LABEL_137);
      goto label_563;

    case 106:
      current_block = (Rpc - LABEL_116);
      goto lambda_599;

    case 107:
      current_block = (Rpc - LABEL_139);
      goto label_565;

    case 108:
      current_block = (Rpc - LABEL_121);
      goto continuation_282;

    case 109:
      current_block = (Rpc - LABEL_140);
      goto label_566;

    case 110:
      current_block = (Rpc - LABEL_141);
      goto label_567;

    case 111:
      current_block = (Rpc - LABEL_142);
      goto label_568;

    case 112:
      current_block = (Rpc - LABEL_143);
      goto label_569;

    case 113:
      current_block = (Rpc - LABEL_127);
      goto continuation_222;

    case 114:
      current_block = (Rpc - LABEL_128);
      goto continuation_158;

    case 115:
      current_block = (Rpc - LABEL_129);
      goto continuation_462;

    case 116:
      current_block = (Rpc - LABEL_130);
      goto continuation_461;

    case 117:
      current_block = (Rpc - LABEL_131);
      goto continuation_459;

    case 118:
      current_block = (Rpc - LABEL_150);
      goto continuation_401;

    case 119:
      current_block = (Rpc - LABEL_132);
      goto lambda_406;

    case 120:
      current_block = (Rpc - LABEL_151);
      goto label_571;

    case 121:
      current_block = (Rpc - LABEL_152);
      goto label_570;

    case 122:
      current_block = (Rpc - LABEL_133);
      goto lambda_601;

    case 123:
      current_block = (Rpc - LABEL_154);
      goto label_572;

    case 124:
      current_block = (Rpc - LABEL_138);
      goto continuation_347;

    case 125:
      current_block = (Rpc - LABEL_155);
      goto label_573;

    case 126:
      current_block = (Rpc - LABEL_156);
      goto label_574;

    case 127:
      current_block = (Rpc - LABEL_157);
      goto label_575;

    case 128:
      current_block = (Rpc - LABEL_158);
      goto label_576;

    case 129:
      current_block = (Rpc - LABEL_144);
      goto continuation_287;

    case 130:
      current_block = (Rpc - LABEL_145);
      goto continuation_223;

    case 131:
      current_block = (Rpc - LABEL_146);
      goto continuation_168;

    case 132:
      current_block = (Rpc - LABEL_147);
      goto continuation_466;

    case 133:
      current_block = (Rpc - LABEL_148);
      goto continuation_465;

    case 134:
      current_block = (Rpc - LABEL_149);
      goto continuation_463;

    case 135:
      current_block = (Rpc - LABEL_153);
      goto continuation_413;

    case 136:
      current_block = (Rpc - LABEL_165);
      goto label_577;

    case 137:
      current_block = (Rpc - LABEL_166);
      goto label_578;

    case 138:
      current_block = (Rpc - LABEL_167);
      goto label_579;

    case 139:
      current_block = (Rpc - LABEL_168);
      goto label_580;

    case 140:
      current_block = (Rpc - LABEL_169);
      goto label_581;

    case 141:
      current_block = (Rpc - LABEL_170);
      goto label_582;

    case 142:
      current_block = (Rpc - LABEL_172);
      goto label_583;

    case 143:
      current_block = (Rpc - LABEL_173);
      goto label_584;

    case 144:
      current_block = (Rpc - LABEL_159);
      goto continuation_352;

    case 145:
      current_block = (Rpc - LABEL_160);
      goto continuation_288;

    case 146:
      current_block = (Rpc - LABEL_161);
      goto continuation_233;

    case 147:
      current_block = (Rpc - LABEL_162);
      goto continuation_470;

    case 148:
      current_block = (Rpc - LABEL_163);
      goto continuation_469;

    case 149:
      current_block = (Rpc - LABEL_164);
      goto continuation_467;

    case 150:
      current_block = (Rpc - LABEL_171);
      goto continuation_416;

    case 151:
      current_block = (Rpc - LABEL_174);
      goto continuation_353;

    case 152:
      current_block = (Rpc - LABEL_175);
      goto continuation_298;

    case 153:
      current_block = (Rpc - LABEL_176);
      goto continuation_474;

    case 154:
      current_block = (Rpc - LABEL_177);
      goto continuation_473;

    case 155:
      current_block = (Rpc - LABEL_178);
      goto continuation_471;

    case 156:
      current_block = (Rpc - LABEL_179);
      goto lambda_604;

    case 157:
      current_block = (Rpc - LABEL_181);
      goto continuation_454;

    case 158:
      current_block = (Rpc - LABEL_182);
      goto lambda_605;

    case 159:
      current_block = (Rpc - LABEL_185);
      goto continuation_363;

    case 160:
      current_block = (Rpc - LABEL_186);
      goto continuation_478;

    case 161:
      current_block = (Rpc - LABEL_187);
      goto continuation_477;

    case 162:
      current_block = (Rpc - LABEL_188);
      goto continuation_475;

    case 163:
      current_block = (Rpc - LABEL_189);
      goto continuation_423;

    case 164:
      current_block = (Rpc - LABEL_191);
      goto continuation_426;

    case 165:
      current_block = (Rpc - LABEL_190);
      goto continuation_439;

    case 166:
      current_block = (Rpc - LABEL_195);
      goto label_585;

    case 167:
      current_block = (Rpc - LABEL_192);
      goto continuation_482;

    case 168:
      current_block = (Rpc - LABEL_193);
      goto continuation_481;

    case 169:
      current_block = (Rpc - LABEL_194);
      goto continuation_479;

    case 170:
      current_block = (Rpc - LABEL_196);
      goto continuation_486;

    case 171:
      current_block = (Rpc - LABEL_197);
      goto continuation_485;

    case 172:
      current_block = (Rpc - LABEL_198);
      goto continuation_483;

    case 173:
      current_block = (Rpc - LABEL_199);
      goto continuation_490;

    case 174:
      current_block = (Rpc - LABEL_200);
      goto continuation_489;

    case 175:
      current_block = (Rpc - LABEL_201);
      goto continuation_487;

    case 176:
      current_block = (Rpc - LABEL_202);
      goto continuation_491;

    case 177:
      current_block = (Rpc - LABEL_203);
      goto continuation_495;

    case 178:
      current_block = (Rpc - LABEL_204);
      goto continuation_494;

    case 179:
      current_block = (Rpc - LABEL_205);
      goto continuation_492;

    case 180:
      current_block = (Rpc - LABEL_206);
      goto continuation_499;

    case 181:
      current_block = (Rpc - LABEL_207);
      goto continuation_498;

    case 182:
      current_block = (Rpc - LABEL_208);
      goto continuation_496;

    case 183:
      current_block = (Rpc - LABEL_209);
      goto continuation_503;

    case 184:
      current_block = (Rpc - LABEL_210);
      goto continuation_502;

    case 185:
      current_block = (Rpc - LABEL_211);
      goto continuation_500;

    case 186:
      current_block = (Rpc - LABEL_212);
      goto continuation_507;

    case 187:
      current_block = (Rpc - LABEL_213);
      goto continuation_506;

    case 188:
      current_block = (Rpc - LABEL_214);
      goto continuation_504;

    case 189:
      current_block = (Rpc - LABEL_215);
      goto continuation_511;

    case 190:
      current_block = (Rpc - LABEL_216);
      goto continuation_510;

    case 191:
      current_block = (Rpc - LABEL_217);
      goto continuation_508;

    case 192:
      current_block = (Rpc - LABEL_218);
      goto continuation_515;

    case 193:
      current_block = (Rpc - LABEL_219);
      goto continuation_514;

    case 194:
      current_block = (Rpc - LABEL_220);
      goto continuation_512;

    case 195:
      current_block = (Rpc - LABEL_221);
      goto continuation_519;

    case 196:
      current_block = (Rpc - LABEL_222);
      goto continuation_518;

    case 197:
      current_block = (Rpc - LABEL_223);
      goto continuation_516;

    case 198:
      current_block = (Rpc - LABEL_224);
      goto label_607;

    case 199:
      current_block = (Rpc - LABEL_225);
      goto label_608;

    case 200:
      current_block = (Rpc - LABEL_226);
      goto expression_521;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_521)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_225])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_608)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_607)
  {
    static const short sections [] =
      {
	0,
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
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 20)
      goto label_606;
    blocks = (current_block [OBJECT_97]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_224])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_606)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_610;
  Wrd16 = Wrd20;

DEFLABEL (label_609)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (Wrd29.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd44.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20])));
  Rhp += 1;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd44.pObj)));
  ((Wrd44.pObj) [2]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (Wrd22.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26])));
  Rhp += 1;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  ((Wrd34.pObj) [2]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (Wrd22.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_60);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59])));
  Rhp += 1;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  ((Wrd34.pObj) [2]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_202)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_204)
  INTERRUPT_CHECK (27, LABEL_56);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_205)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (Wrd22.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_78);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_77])));
  Rhp += 1;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  ((Wrd34.pObj) [2]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_267)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_269)
  INTERRUPT_CHECK (27, LABEL_74);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_270)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (Wrd22.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_99);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_98])));
  Rhp += 1;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  ((Wrd34.pObj) [2]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_332)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_334)
  INTERRUPT_CHECK (27, LABEL_95);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_335)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (Wrd22.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_117);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_116])));
  Rhp += 1;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  ((Wrd34.pObj) [2]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_397)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_399)
  INTERRUPT_CHECK (27, LABEL_113);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_400)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (Wrd22.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_48]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd38.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_134);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_133])));
  Rhp += 1;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd38.pObj)));
  ((Wrd38.pObj) [2]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_459)
  INTERRUPT_CHECK (27, LABEL_131);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_461)
  INTERRUPT_CHECK (27, LABEL_130);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_462)
  INTERRUPT_CHECK (27, LABEL_129);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_463)
  INTERRUPT_CHECK (27, LABEL_149);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_465)
  INTERRUPT_CHECK (27, LABEL_148);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_466)
  INTERRUPT_CHECK (27, LABEL_147);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_162]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_163]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_164]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_467)
  INTERRUPT_CHECK (27, LABEL_164);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_469)
  INTERRUPT_CHECK (27, LABEL_163);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_470)
  INTERRUPT_CHECK (27, LABEL_162);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_176]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_177]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_178]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_471)
  INTERRUPT_CHECK (27, LABEL_178);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_473)
  INTERRUPT_CHECK (27, LABEL_177);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_474)
  INTERRUPT_CHECK (27, LABEL_176);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_186]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_187]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_188]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_475)
  INTERRUPT_CHECK (27, LABEL_188);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_477)
  INTERRUPT_CHECK (27, LABEL_187);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_478)
  INTERRUPT_CHECK (27, LABEL_186);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_192]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_193]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_194]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_479)
  INTERRUPT_CHECK (27, LABEL_194);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_481)
  INTERRUPT_CHECK (27, LABEL_193);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_482)
  INTERRUPT_CHECK (27, LABEL_192);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_196]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_197]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_198]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_483)
  INTERRUPT_CHECK (27, LABEL_198);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_485)
  INTERRUPT_CHECK (27, LABEL_197);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_486)
  INTERRUPT_CHECK (27, LABEL_196);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_199]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_200]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_201]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_487)
  INTERRUPT_CHECK (27, LABEL_201);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_489)
  INTERRUPT_CHECK (27, LABEL_200);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_490)
  INTERRUPT_CHECK (27, LABEL_199);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_202]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_491)
  INTERRUPT_CHECK (27, LABEL_202);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_203]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_204]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_205]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_492)
  INTERRUPT_CHECK (27, LABEL_205);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_494)
  INTERRUPT_CHECK (27, LABEL_204);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_495)
  INTERRUPT_CHECK (27, LABEL_203);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_206]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_207]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_208]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_496)
  INTERRUPT_CHECK (27, LABEL_208);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_498)
  INTERRUPT_CHECK (27, LABEL_207);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_499)
  INTERRUPT_CHECK (27, LABEL_206);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_209]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_210]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_211]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_500)
  INTERRUPT_CHECK (27, LABEL_211);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_502)
  INTERRUPT_CHECK (27, LABEL_210);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_503)
  INTERRUPT_CHECK (27, LABEL_209);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_212]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_213]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_214]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_504)
  INTERRUPT_CHECK (27, LABEL_214);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_506)
  INTERRUPT_CHECK (27, LABEL_213);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_507)
  INTERRUPT_CHECK (27, LABEL_212);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_215]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_216]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_217]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_508)
  INTERRUPT_CHECK (27, LABEL_217);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_510)
  INTERRUPT_CHECK (27, LABEL_216);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_511)
  INTERRUPT_CHECK (27, LABEL_215);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_218]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_219]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_220]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_512)
  INTERRUPT_CHECK (27, LABEL_220);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_514)
  INTERRUPT_CHECK (27, LABEL_219);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_515)
  INTERRUPT_CHECK (27, LABEL_218);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_221]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_222]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_223]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_516)
  INTERRUPT_CHECK (27, LABEL_223);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_518)
  INTERRUPT_CHECK (27, LABEL_222);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_519)
  INTERRUPT_CHECK (27, LABEL_221);
  (Wrd5.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_95]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_610)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd17.pObj));

DEFLABEL (label_522)
  (Wrd16.Obj) = Rvl;
  goto label_609;

DEFLABEL (lambda_589)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_14]);
  (Wrd45.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd45.Lng))))
    goto label_623;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_622;

DEFLABEL (label_621)
  (Wrd13.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_611;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_611)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_613;
  (Wrd15.Obj) = (current_block [OBJECT_18]);
  goto label_612;

DEFLABEL (label_613)
  (Wrd15.Obj) = (current_block [OBJECT_17]);

DEFLABEL (label_612)
DEFLABEL (label_620)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_619)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_615;
  Rvl = (Wrd24.Obj);

DEFLABEL (label_614)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_615)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 1)
    goto label_616;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_614;

DEFLABEL (label_616)
  (Rsp [0]) = (Wrd28.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_618;
  Wrd34 = Wrd38;

DEFLABEL (label_617)
  (Rsp [1]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (label_618)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd35.pObj));

DEFLABEL (label_523)
  (Wrd34.Obj) = Rvl;
  goto label_617;

DEFLABEL (label_622)
  (Wrd41.Obj) = (current_block [OBJECT_17]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_619;

DEFLABEL (label_623)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_524)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_621;
  goto label_622;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  goto label_619;

DEFLABEL (lambda_587)
  CLOSURE_HEADER (LABEL_20);

DEFLABEL (lambda_73)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_643;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_642)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_32);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_624;
  (Wrd85.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd85.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (label_624)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_641;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_640)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_639;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_638)
  (Rsp [0]) = (Wrd16.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_637;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_636)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_635;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd32.Obj) = ((Wrd33.pObj) [1]);

DEFLABEL (label_634)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_633;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_632)
  (Rsp [2]) = (Wrd39.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_631;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_630)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_629;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd55.Obj) = ((Wrd56.pObj) [1]);

DEFLABEL (label_628)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_627;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd62.Obj) = ((Wrd63.pObj) [0]);

DEFLABEL (label_626)
  (Rsp [1]) = (Wrd62.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd70.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_52])));
  Rhp += 1;
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd70.pObj)));
  Wrd71 = Wrd70;
  (Wrd72.Obj) = (Rsp [0]);
  ((Wrd71.pObj) [2]) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd73.Obj) = (Rsp [3]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 1)
    goto label_625;
  Rvl = (current_block [OBJECT_23]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_625)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.pObj) = (& (Rsp [1]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd80.pObj)));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  goto loop_69;

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd10.Obj) = (current_block [OBJECT_27]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_627)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_536)
  (Wrd62.Obj) = Rvl;
  goto label_626;

DEFLABEL (label_629)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_535)
  (Wrd55.Obj) = Rvl;
  goto label_628;

DEFLABEL (label_631)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_534)
  (Wrd46.Obj) = Rvl;
  goto label_630;

DEFLABEL (label_633)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_533)
  (Wrd39.Obj) = Rvl;
  goto label_632;

DEFLABEL (label_635)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_532)
  (Wrd32.Obj) = Rvl;
  goto label_634;

DEFLABEL (label_637)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_531)
  (Wrd23.Obj) = Rvl;
  goto label_636;

DEFLABEL (label_639)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_530)
  (Wrd16.Obj) = Rvl;
  goto label_638;

DEFLABEL (label_641)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_529)
  (Wrd7.Obj) = Rvl;
  goto label_640;

DEFLABEL (label_643)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_525)
  (* (--Rsp)) = Rvl;
  goto label_642;

DEFLABEL (lambda_590)
DEFLABEL (lambda_84)
  INTERRUPT_CHECK (26, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_14]);
  (Wrd45.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd45.Lng))))
    goto label_656;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_655;

DEFLABEL (label_654)
  (Wrd13.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_644;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_644)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_646;
  (Wrd15.Obj) = (current_block [OBJECT_18]);
  goto label_645;

DEFLABEL (label_646)
  (Wrd15.Obj) = (current_block [OBJECT_17]);

DEFLABEL (label_645)
DEFLABEL (label_653)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_652)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_648;
  Rvl = (Wrd24.Obj);

DEFLABEL (label_647)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_648)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 1)
    goto label_649;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_647;

DEFLABEL (label_649)
  (Rsp [0]) = (Wrd28.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_651;
  Wrd34 = Wrd38;

DEFLABEL (label_650)
  (Rsp [1]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (label_651)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd35.pObj));

DEFLABEL (label_526)
  (Wrd34.Obj) = Rvl;
  goto label_650;

DEFLABEL (label_655)
  (Wrd41.Obj) = (current_block [OBJECT_17]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_652;

DEFLABEL (label_656)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_527)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_654;
  goto label_655;

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_38);
  (* (--Rsp)) = Rvl;
  goto label_652;

DEFLABEL (lambda_588)
  CLOSURE_HEADER (LABEL_26);

DEFLABEL (lambda_131)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_667;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_666)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_41);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_657;
  (Wrd44.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd44.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (label_657)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_665;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_664)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_663;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_662)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_661;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_660)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_659;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_658)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_65);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85]));

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_84);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_39]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_40]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_41]);
  (Wrd30.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd47.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd51.Obj) = (current_block [OBJECT_42]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (Wrd59.Obj) = (current_block [OBJECT_43]);
  (* (Rhp++)) = (Wrd59.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (Wrd63.Obj) = (current_block [OBJECT_44]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  (Wrd75.Obj) = (current_block [OBJECT_45]);
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd68.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd78.pObj) = (& (Rhp [-2]));
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd78.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd76.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd85.pObj) = (& (Rhp [-2]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd85.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd88.pObj) = (& (Rhp [-2]));
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd88.pObj)));
  (Wrd94.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd94.Obj);
  (* (Rhp++)) = (Wrd86.Obj);
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd97.pObj) = (& (Rhp [-2]));
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd97.pObj)));
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd95.Obj);
  (Wrd102.pObj) = (& (Rhp [-2]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd102.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd100.Obj);
  (Wrd105.pObj) = (& (Rhp [-2]));
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd105.pObj)));
  (Wrd110.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd110.Obj);
  (* (Rhp++)) = (Wrd103.Obj);
  (Wrd109.pObj) = (& (Rhp [-2]));
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd109.pObj)));
  (* (Rhp++)) = (Wrd107.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (Wrd118.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd118.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd117.pObj) = (& (Rhp [-2]));
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd117.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd115.Obj);
  (Wrd121.pObj) = (& (Rhp [-2]));
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd121.pObj)));
  (* (Rhp++)) = (Wrd119.Obj);
  (* (Rhp++)) = (Wrd83.Obj);
  (Wrd125.pObj) = (& (Rhp [-2]));
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd125.pObj)));
  (Wrd130.Obj) = (current_block [OBJECT_27]);
  (* (Rhp++)) = (Wrd130.Obj);
  (* (Rhp++)) = (Wrd123.Obj);
  (Wrd128.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd128.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_659)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_540)
  (* (--Rsp)) = Rvl;
  goto label_658;

DEFLABEL (label_661)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_539)
  (Wrd23.Obj) = Rvl;
  goto label_660;

DEFLABEL (label_663)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_538)
  (* (--Rsp)) = Rvl;
  goto label_662;

DEFLABEL (label_665)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_537)
  (Wrd7.Obj) = Rvl;
  goto label_664;

DEFLABEL (label_667)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_528)
  (* (--Rsp)) = Rvl;
  goto label_666;

DEFLABEL (lambda_591)
DEFLABEL (lambda_55)
  INTERRUPT_CHECK (26, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_67);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd8.Obj) = (current_block [OBJECT_33]);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_34]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_35]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd45.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Wrd58.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (Wrd71.Obj) = (current_block [OBJECT_37]);
  (* (Rhp++)) = (Wrd71.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd78.pObj) = (& (Rhp [-2]));
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd78.pObj)));
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd76.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd85.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd85.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (loop_593)
DEFLABEL (loop_69)
  INTERRUPT_CHECK (26, LABEL_69);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_668;
  Rvl = (current_block [OBJECT_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_668)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_679;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd24.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_679;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_678)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_677;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_676)
  goto loop_69;

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_70);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_675;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_674)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd17.uLng) == 1)
    goto label_671;
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_670;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_669)
  (Wrd28.Obj) = (Rsp [6]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);
  goto lambda_55;

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_87);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111]));

DEFLABEL (label_670)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_547)
  (* (--Rsp)) = Rvl;
  goto label_669;

DEFLABEL (label_671)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_673;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_672)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd41.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_91);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_90])));
  Rhp += 2;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd41.pObj)));
  Wrd44 = Wrd41;
  (Wrd45.Obj) = (Rsp [5]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  ((Wrd44.pObj) [2]) = (Wrd47.Obj);
  (Wrd43.Obj) = (Rsp [4]);
  ((Wrd44.pObj) [3]) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92]));

DEFLABEL (label_673)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_548)
  (* (--Rsp)) = Rvl;
  goto label_672;

DEFLABEL (label_675)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_546)
  (Wrd8.Obj) = Rvl;
  goto label_674;

DEFLABEL (label_677)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_542)
  (* (--Rsp)) = Rvl;
  goto label_676;

DEFLABEL (label_679)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_541)
  (* (--Rsp)) = Rvl;
  goto label_678;

DEFLABEL (lambda_595)
DEFLABEL (lambda_146)
  INTERRUPT_CHECK (26, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_14]);
  (Wrd45.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd45.Lng))))
    goto label_692;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_691;

DEFLABEL (label_690)
  (Wrd13.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_680;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_680)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_682;
  (Wrd15.Obj) = (current_block [OBJECT_18]);
  goto label_681;

DEFLABEL (label_682)
  (Wrd15.Obj) = (current_block [OBJECT_17]);

DEFLABEL (label_681)
DEFLABEL (label_689)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_688)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_684;
  Rvl = (Wrd24.Obj);

DEFLABEL (label_683)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_684)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 1)
    goto label_685;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_683;

DEFLABEL (label_685)
  (Rsp [0]) = (Wrd28.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_687;
  Wrd34 = Wrd38;

DEFLABEL (label_686)
  (Rsp [1]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (label_687)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81])), (Wrd35.pObj));

DEFLABEL (label_543)
  (Wrd34.Obj) = Rvl;
  goto label_686;

DEFLABEL (label_691)
  (Wrd41.Obj) = (current_block [OBJECT_17]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_688;

DEFLABEL (label_692)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_544)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_690;
  goto label_691;

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_79);
  (* (--Rsp)) = Rvl;
  goto label_688;

DEFLABEL (lambda_592)
  CLOSURE_HEADER (LABEL_59);

DEFLABEL (lambda_200)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_703;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_702)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_152)
  INTERRUPT_CHECK (27, LABEL_82);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_693;
  (Wrd44.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd44.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (label_693)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_701;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_700)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_699;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_698)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_697;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_696)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_695;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_694)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_157)
  INTERRUPT_CHECK (27, LABEL_109);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85]));

DEFLABEL (continuation_158)
  INTERRUPT_CHECK (27, LABEL_128);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_168)
  INTERRUPT_CHECK (27, LABEL_146);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_40]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_52]);
  (Wrd30.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_53]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd47.Obj) = (current_block [OBJECT_54]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd51.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (Wrd68.Obj) = (current_block [OBJECT_42]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));
  (Wrd79.Obj) = (current_block [OBJECT_55]);
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd78.pObj) = (& (Rhp [-2]));
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd78.pObj)));
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  (Wrd87.Obj) = (current_block [OBJECT_43]);
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (Wrd91.Obj) = (current_block [OBJECT_44]);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd90.pObj) = (& (Rhp [-2]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd90.pObj)));
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (Wrd99.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (Wrd103.Obj) = (current_block [OBJECT_45]);
  (* (Rhp++)) = (Wrd103.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd102.pObj) = (& (Rhp [-2]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd102.pObj)));
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd106.pObj) = (& (Rhp [-2]));
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd106.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  (Wrd110.pObj) = (& (Rhp [-2]));
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd110.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (Wrd122.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd122.Obj);
  (* (Rhp++)) = (Wrd114.Obj);
  (Wrd121.pObj) = (& (Rhp [-2]));
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd121.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd125.pObj) = (& (Rhp [-2]));
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd125.pObj)));
  (* (Rhp++)) = (Wrd119.Obj);
  (* (Rhp++)) = (Wrd123.Obj);
  (Wrd130.pObj) = (& (Rhp [-2]));
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd130.pObj)));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd128.Obj);
  (Wrd133.pObj) = (& (Rhp [-2]));
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd133.pObj)));
  (Wrd138.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd138.Obj);
  (* (Rhp++)) = (Wrd131.Obj);
  (Wrd137.pObj) = (& (Rhp [-2]));
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd137.pObj)));
  (* (Rhp++)) = (Wrd135.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd141.pObj) = (& (Rhp [-2]));
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd141.pObj)));
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd139.Obj);
  (Wrd145.pObj) = (& (Rhp [-2]));
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd145.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd143.Obj);
  (Wrd149.pObj) = (& (Rhp [-2]));
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd149.pObj)));
  (* (Rhp++)) = (Wrd147.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd153.pObj) = (& (Rhp [-2]));
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd153.pObj)));
  (Wrd158.Obj) = (current_block [OBJECT_27]);
  (* (Rhp++)) = (Wrd158.Obj);
  (* (Rhp++)) = (Wrd151.Obj);
  (Wrd156.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd156.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_695)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_555)
  (* (--Rsp)) = Rvl;
  goto label_694;

DEFLABEL (label_697)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_554)
  (Wrd23.Obj) = Rvl;
  goto label_696;

DEFLABEL (label_699)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_553)
  (* (--Rsp)) = Rvl;
  goto label_698;

DEFLABEL (label_701)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_552)
  (Wrd7.Obj) = Rvl;
  goto label_700;

DEFLABEL (label_703)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_545)
  (* (--Rsp)) = Rvl;
  goto label_702;

DEFLABEL (lambda_598)
DEFLABEL (lambda_211)
  INTERRUPT_CHECK (26, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_14]);
  (Wrd45.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd45.Lng))))
    goto label_716;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_715;

DEFLABEL (label_714)
  (Wrd13.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_704;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_704)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_706;
  (Wrd15.Obj) = (current_block [OBJECT_18]);
  goto label_705;

DEFLABEL (label_706)
  (Wrd15.Obj) = (current_block [OBJECT_17]);

DEFLABEL (label_705)
DEFLABEL (label_713)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_712)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_708;
  Rvl = (Wrd24.Obj);

DEFLABEL (label_707)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_708)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 1)
    goto label_709;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_707;

DEFLABEL (label_709)
  (Rsp [0]) = (Wrd28.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_711;
  Wrd34 = Wrd38;

DEFLABEL (label_710)
  (Rsp [1]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (label_711)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_102])), (Wrd35.pObj));

DEFLABEL (label_549)
  (Wrd34.Obj) = Rvl;
  goto label_710;

DEFLABEL (label_715)
  (Wrd41.Obj) = (current_block [OBJECT_17]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_712;

DEFLABEL (label_716)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_550)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_714;
  goto label_715;

DEFLABEL (continuation_206)
  INTERRUPT_CHECK (27, LABEL_100);
  (* (--Rsp)) = Rvl;
  goto label_712;

DEFLABEL (lambda_594)
  CLOSURE_HEADER (LABEL_77);

DEFLABEL (lambda_265)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_727;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_726)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_217)
  INTERRUPT_CHECK (27, LABEL_103);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_717;
  (Wrd44.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd44.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (label_717)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_725;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_724)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_723;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_722)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_721;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_720)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_719;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_718)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_222)
  INTERRUPT_CHECK (27, LABEL_127);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_145]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85]));

DEFLABEL (continuation_223)
  INTERRUPT_CHECK (27, LABEL_145);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_161]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_233)
  INTERRUPT_CHECK (27, LABEL_161);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_40]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_58]);
  (Wrd30.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_59]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd47.Obj) = (current_block [OBJECT_54]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd51.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (Wrd68.Obj) = (current_block [OBJECT_42]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));
  (Wrd79.Obj) = (current_block [OBJECT_55]);
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd78.pObj) = (& (Rhp [-2]));
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd78.pObj)));
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  (Wrd87.Obj) = (current_block [OBJECT_43]);
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (Wrd91.Obj) = (current_block [OBJECT_44]);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd90.pObj) = (& (Rhp [-2]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd90.pObj)));
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (Wrd99.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (Wrd103.Obj) = (current_block [OBJECT_45]);
  (* (Rhp++)) = (Wrd103.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd102.pObj) = (& (Rhp [-2]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd102.pObj)));
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd106.pObj) = (& (Rhp [-2]));
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd106.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  (Wrd110.pObj) = (& (Rhp [-2]));
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd110.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (Wrd122.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd122.Obj);
  (* (Rhp++)) = (Wrd114.Obj);
  (Wrd121.pObj) = (& (Rhp [-2]));
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd121.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd125.pObj) = (& (Rhp [-2]));
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd125.pObj)));
  (* (Rhp++)) = (Wrd119.Obj);
  (* (Rhp++)) = (Wrd123.Obj);
  (Wrd130.pObj) = (& (Rhp [-2]));
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd130.pObj)));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd128.Obj);
  (Wrd133.pObj) = (& (Rhp [-2]));
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd133.pObj)));
  (Wrd138.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd138.Obj);
  (* (Rhp++)) = (Wrd131.Obj);
  (Wrd137.pObj) = (& (Rhp [-2]));
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd137.pObj)));
  (* (Rhp++)) = (Wrd135.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd141.pObj) = (& (Rhp [-2]));
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd141.pObj)));
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd139.Obj);
  (Wrd145.pObj) = (& (Rhp [-2]));
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd145.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd143.Obj);
  (Wrd149.pObj) = (& (Rhp [-2]));
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd149.pObj)));
  (* (Rhp++)) = (Wrd147.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd153.pObj) = (& (Rhp [-2]));
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd153.pObj)));
  (Wrd158.Obj) = (current_block [OBJECT_27]);
  (* (Rhp++)) = (Wrd158.Obj);
  (* (Rhp++)) = (Wrd151.Obj);
  (Wrd156.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd156.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_719)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_562)
  (* (--Rsp)) = Rvl;
  goto label_718;

DEFLABEL (label_721)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_561)
  (Wrd23.Obj) = Rvl;
  goto label_720;

DEFLABEL (label_723)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_560)
  (* (--Rsp)) = Rvl;
  goto label_722;

DEFLABEL (label_725)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_559)
  (Wrd7.Obj) = Rvl;
  goto label_724;

DEFLABEL (label_727)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_551)
  (* (--Rsp)) = Rvl;
  goto label_726;

DEFLABEL (lambda_596)
  CLOSURE_HEADER (LABEL_90);

DEFLABEL (lambda_64)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  goto lambda_55;

DEFLABEL (lambda_600)
DEFLABEL (lambda_276)
  INTERRUPT_CHECK (26, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_14]);
  (Wrd45.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd45.Lng))))
    goto label_740;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_739;

DEFLABEL (label_738)
  (Wrd13.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_728;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_728)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_730;
  (Wrd15.Obj) = (current_block [OBJECT_18]);
  goto label_729;

DEFLABEL (label_730)
  (Wrd15.Obj) = (current_block [OBJECT_17]);

DEFLABEL (label_729)
DEFLABEL (label_737)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_736)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_732;
  Rvl = (Wrd24.Obj);

DEFLABEL (label_731)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_732)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 1)
    goto label_733;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_731;

DEFLABEL (label_733)
  (Rsp [0]) = (Wrd28.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_735;
  Wrd34 = Wrd38;

DEFLABEL (label_734)
  (Rsp [1]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (label_735)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_120])), (Wrd35.pObj));

DEFLABEL (label_556)
  (Wrd34.Obj) = Rvl;
  goto label_734;

DEFLABEL (label_739)
  (Wrd41.Obj) = (current_block [OBJECT_17]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_736;

DEFLABEL (label_740)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_557)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_738;
  goto label_739;

DEFLABEL (continuation_271)
  INTERRUPT_CHECK (27, LABEL_118);
  (* (--Rsp)) = Rvl;
  goto label_736;

DEFLABEL (lambda_597)
  CLOSURE_HEADER (LABEL_98);

DEFLABEL (lambda_330)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_751;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_750)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_282)
  INTERRUPT_CHECK (27, LABEL_121);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_741;
  (Wrd44.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd44.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (label_741)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_749;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_748)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_747;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_746)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_745;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_744)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_743;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_742)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_287)
  INTERRUPT_CHECK (27, LABEL_144);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_160]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85]));

DEFLABEL (continuation_288)
  INTERRUPT_CHECK (27, LABEL_160);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_298)
  INTERRUPT_CHECK (27, LABEL_175);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_40]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_62]);
  (Wrd30.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_63]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd47.Obj) = (current_block [OBJECT_54]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd51.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (Wrd68.Obj) = (current_block [OBJECT_42]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));
  (Wrd79.Obj) = (current_block [OBJECT_55]);
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd78.pObj) = (& (Rhp [-2]));
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd78.pObj)));
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  (Wrd87.Obj) = (current_block [OBJECT_43]);
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (Wrd91.Obj) = (current_block [OBJECT_44]);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd90.pObj) = (& (Rhp [-2]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd90.pObj)));
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (Wrd99.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (Wrd103.Obj) = (current_block [OBJECT_45]);
  (* (Rhp++)) = (Wrd103.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd102.pObj) = (& (Rhp [-2]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd102.pObj)));
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd106.pObj) = (& (Rhp [-2]));
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd106.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  (Wrd110.pObj) = (& (Rhp [-2]));
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd110.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (Wrd122.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd122.Obj);
  (* (Rhp++)) = (Wrd114.Obj);
  (Wrd121.pObj) = (& (Rhp [-2]));
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd121.pObj)));
  (Wrd126.Obj) = (current_block [OBJECT_64]);
  (* (Rhp++)) = (Wrd126.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd125.pObj) = (& (Rhp [-2]));
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd125.pObj)));
  (* (Rhp++)) = (Wrd119.Obj);
  (* (Rhp++)) = (Wrd123.Obj);
  (Wrd130.pObj) = (& (Rhp [-2]));
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd130.pObj)));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd128.Obj);
  (Wrd133.pObj) = (& (Rhp [-2]));
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd133.pObj)));
  (Wrd138.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd138.Obj);
  (* (Rhp++)) = (Wrd131.Obj);
  (Wrd137.pObj) = (& (Rhp [-2]));
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd137.pObj)));
  (* (Rhp++)) = (Wrd135.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd141.pObj) = (& (Rhp [-2]));
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd141.pObj)));
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd139.Obj);
  (Wrd145.pObj) = (& (Rhp [-2]));
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd145.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd143.Obj);
  (Wrd149.pObj) = (& (Rhp [-2]));
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd149.pObj)));
  (* (Rhp++)) = (Wrd147.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd153.pObj) = (& (Rhp [-2]));
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd153.pObj)));
  (Wrd158.Obj) = (current_block [OBJECT_27]);
  (* (Rhp++)) = (Wrd158.Obj);
  (* (Rhp++)) = (Wrd151.Obj);
  (Wrd156.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd156.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_743)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_569)
  (* (--Rsp)) = Rvl;
  goto label_742;

DEFLABEL (label_745)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_568)
  (Wrd23.Obj) = Rvl;
  goto label_744;

DEFLABEL (label_747)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_567)
  (* (--Rsp)) = Rvl;
  goto label_746;

DEFLABEL (label_749)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_566)
  (Wrd7.Obj) = Rvl;
  goto label_748;

DEFLABEL (label_751)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_558)
  (* (--Rsp)) = Rvl;
  goto label_750;

DEFLABEL (lambda_602)
DEFLABEL (lambda_341)
  INTERRUPT_CHECK (26, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_14]);
  (Wrd45.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd45.Lng))))
    goto label_764;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_763;

DEFLABEL (label_762)
  (Wrd13.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_752;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_752)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_754;
  (Wrd15.Obj) = (current_block [OBJECT_18]);
  goto label_753;

DEFLABEL (label_754)
  (Wrd15.Obj) = (current_block [OBJECT_17]);

DEFLABEL (label_753)
DEFLABEL (label_761)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_760)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_756;
  Rvl = (Wrd24.Obj);

DEFLABEL (label_755)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_756)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 1)
    goto label_757;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_755;

DEFLABEL (label_757)
  (Rsp [0]) = (Wrd28.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_759;
  Wrd34 = Wrd38;

DEFLABEL (label_758)
  (Rsp [1]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (label_759)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_137])), (Wrd35.pObj));

DEFLABEL (label_563)
  (Wrd34.Obj) = Rvl;
  goto label_758;

DEFLABEL (label_763)
  (Wrd41.Obj) = (current_block [OBJECT_17]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_760;

DEFLABEL (label_764)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_564)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_762;
  goto label_763;

DEFLABEL (continuation_336)
  INTERRUPT_CHECK (27, LABEL_135);
  (* (--Rsp)) = Rvl;
  goto label_760;

DEFLABEL (lambda_599)
  CLOSURE_HEADER (LABEL_116);

DEFLABEL (lambda_395)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_775;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_774)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_347)
  INTERRUPT_CHECK (27, LABEL_138);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_765;
  (Wrd44.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd44.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (label_765)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_773;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_772)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_771;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_770)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_769;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_768)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_767;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_766)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_159]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_352)
  INTERRUPT_CHECK (27, LABEL_159);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_174]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85]));

DEFLABEL (continuation_353)
  INTERRUPT_CHECK (27, LABEL_174);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_185]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_363)
  INTERRUPT_CHECK (27, LABEL_185);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_40]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_68]);
  (Wrd30.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_69]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd47.Obj) = (current_block [OBJECT_54]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd51.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (Wrd68.Obj) = (current_block [OBJECT_42]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));
  (Wrd79.Obj) = (current_block [OBJECT_55]);
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd78.pObj) = (& (Rhp [-2]));
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd78.pObj)));
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  (Wrd87.Obj) = (current_block [OBJECT_43]);
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (Wrd91.Obj) = (current_block [OBJECT_44]);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd90.pObj) = (& (Rhp [-2]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd90.pObj)));
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (Wrd99.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (Wrd103.Obj) = (current_block [OBJECT_45]);
  (* (Rhp++)) = (Wrd103.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd102.pObj) = (& (Rhp [-2]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd102.pObj)));
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd106.pObj) = (& (Rhp [-2]));
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd106.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  (Wrd110.pObj) = (& (Rhp [-2]));
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd110.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (Wrd122.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd122.Obj);
  (* (Rhp++)) = (Wrd114.Obj);
  (Wrd121.pObj) = (& (Rhp [-2]));
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd121.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd125.pObj) = (& (Rhp [-2]));
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd125.pObj)));
  (* (Rhp++)) = (Wrd119.Obj);
  (* (Rhp++)) = (Wrd123.Obj);
  (Wrd130.pObj) = (& (Rhp [-2]));
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd130.pObj)));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd128.Obj);
  (Wrd133.pObj) = (& (Rhp [-2]));
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd133.pObj)));
  (Wrd138.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd138.Obj);
  (* (Rhp++)) = (Wrd131.Obj);
  (Wrd137.pObj) = (& (Rhp [-2]));
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd137.pObj)));
  (* (Rhp++)) = (Wrd135.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd141.pObj) = (& (Rhp [-2]));
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd141.pObj)));
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd139.Obj);
  (Wrd145.pObj) = (& (Rhp [-2]));
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd145.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd143.Obj);
  (Wrd149.pObj) = (& (Rhp [-2]));
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd149.pObj)));
  (* (Rhp++)) = (Wrd147.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd153.pObj) = (& (Rhp [-2]));
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd153.pObj)));
  (Wrd158.Obj) = (current_block [OBJECT_27]);
  (* (Rhp++)) = (Wrd158.Obj);
  (* (Rhp++)) = (Wrd151.Obj);
  (Wrd156.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd156.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_767)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_576)
  (* (--Rsp)) = Rvl;
  goto label_766;

DEFLABEL (label_769)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_157]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_575)
  (Wrd23.Obj) = Rvl;
  goto label_768;

DEFLABEL (label_771)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_574)
  (* (--Rsp)) = Rvl;
  goto label_770;

DEFLABEL (label_773)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_573)
  (Wrd7.Obj) = Rvl;
  goto label_772;

DEFLABEL (label_775)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_565)
  (* (--Rsp)) = Rvl;
  goto label_774;

DEFLABEL (lambda_603)
DEFLABEL (lambda_406)
  INTERRUPT_CHECK (26, LABEL_132);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_14]);
  (Wrd45.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd45.Lng))))
    goto label_788;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_787;

DEFLABEL (label_786)
  (Wrd13.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_776;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_776)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_778;
  (Wrd15.Obj) = (current_block [OBJECT_18]);
  goto label_777;

DEFLABEL (label_778)
  (Wrd15.Obj) = (current_block [OBJECT_17]);

DEFLABEL (label_777)
DEFLABEL (label_785)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_784)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_780;
  Rvl = (Wrd24.Obj);

DEFLABEL (label_779)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_780)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 1)
    goto label_781;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_779;

DEFLABEL (label_781)
  (Rsp [0]) = (Wrd28.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_783;
  Wrd34 = Wrd38;

DEFLABEL (label_782)
  (Rsp [1]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (label_783)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_152])), (Wrd35.pObj));

DEFLABEL (label_570)
  (Wrd34.Obj) = Rvl;
  goto label_782;

DEFLABEL (label_787)
  (Wrd41.Obj) = (current_block [OBJECT_17]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_784;

DEFLABEL (label_788)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 2);

DEFLABEL (label_571)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_786;
  goto label_787;

DEFLABEL (continuation_401)
  INTERRUPT_CHECK (27, LABEL_150);
  (* (--Rsp)) = Rvl;
  goto label_784;

DEFLABEL (lambda_601)
  CLOSURE_HEADER (LABEL_133);

DEFLABEL (lambda_457)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_807;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_806)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_413)
  INTERRUPT_CHECK (27, LABEL_153);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_789;
  (Wrd73.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd73.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (label_789)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_805;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_804)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_803;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_802)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_801;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_800)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_799;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_798)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_797;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_796)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_795;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_794)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd60.Obj) = (Rsp [5]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_793;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_792)
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_791;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_790)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85]));

DEFLABEL (continuation_416)
  INTERRUPT_CHECK (27, LABEL_171);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_180);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_179])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [5]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_181]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_183);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_182])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  ((Wrd19.pObj) [2]) = Rvl;
  ((Wrd19.pObj) [3]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_184]));

DEFLABEL (continuation_454)
  INTERRUPT_CHECK (27, LABEL_181);
  (Wrd10.Obj) = (current_block [OBJECT_67]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_791)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_173]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_584)
  (* (--Rsp)) = Rvl;
  goto label_790;

DEFLABEL (label_793)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_172]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_583)
  (Wrd57.Obj) = Rvl;
  goto label_792;

DEFLABEL (label_795)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_170]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_582)
  (* (--Rsp)) = Rvl;
  goto label_794;

DEFLABEL (label_797)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_581)
  (Wrd39.Obj) = Rvl;
  goto label_796;

DEFLABEL (label_799)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_580)
  (Wrd30.Obj) = Rvl;
  goto label_798;

DEFLABEL (label_801)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_579)
  (* (--Rsp)) = Rvl;
  goto label_800;

DEFLABEL (label_803)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_578)
  (Wrd16.Obj) = Rvl;
  goto label_802;

DEFLABEL (label_805)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_577)
  (Wrd7.Obj) = Rvl;
  goto label_804;

DEFLABEL (label_807)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 1);

DEFLABEL (label_572)
  (* (--Rsp)) = Rvl;
  goto label_806;

DEFLABEL (lambda_604)
  CLOSURE_HEADER (LABEL_179);

DEFLABEL (lambda_424)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_189]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68]));

DEFLABEL (continuation_423)
  INTERRUPT_CHECK (27, LABEL_189);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85]));

DEFLABEL (lambda_605)
  CLOSURE_HEADER (LABEL_182);

DEFLABEL (lambda_453)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_808;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_191]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_424;

DEFLABEL (continuation_426)
  INTERRUPT_CHECK (27, LABEL_191);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_72]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_73]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_808)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_190]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_184]));

DEFLABEL (continuation_439)
  INTERRUPT_CHECK (27, LABEL_190);
  (* (--Rsp)) = Rvl;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd9.uLng) == 1))
    goto label_810;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_809)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (Wrd20.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_72]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Wrd39.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (Wrd64.Obj) = (current_block [OBJECT_73]);
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_810)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_195]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_585)
  (Wrd5.Obj) = Rvl;
  goto label_809;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_macros_so_734d2c026aafe31e [20] =
  {
    { "macros_so_code_1", 6, macros_so_code_1 },
    { "macros_so_code_2", 13, macros_so_code_2 },
    { "macros_so_code_3", 13, macros_so_code_3 },
    { "macros_so_code_4", 14, macros_so_code_4 },
    { "macros_so_code_5", 10, macros_so_code_5 },
    { "macros_so_code_6", 10, macros_so_code_6 },
    { "macros_so_code_7", 10, macros_so_code_7 },
    { "macros_so_code_8", 10, macros_so_code_8 },
    { "macros_so_code_9", 2, macros_so_code_9 },
    { "macros_so_code_10", 2, macros_so_code_10 },
    { "macros_so_code_11", 2, macros_so_code_11 },
    { "macros_so_code_12", 26, macros_so_code_12 },
    { "macros_so_code_13", 16, macros_so_code_13 },
    { "macros_so_code_14", 9, macros_so_code_14 },
    { "macros_so_code_15", 5, macros_so_code_15 },
    { "macros_so_code_16", 6, macros_so_code_16 },
    { "macros_so_code_17", 13, macros_so_code_17 },
    { "macros_so_code_18", 13, macros_so_code_18 },
    { "macros_so_code_19", 9, macros_so_code_19 },
    { "macros_so_code_20", 32, macros_so_code_20 }
  };

int
decl_macros_so_734d2c026aafe31e (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_macros_so_734d2c026aafe31e);
  return (0);
}

DECLARE_COMPILED_CODE ("macros.so", 201, decl_macros_so_734d2c026aafe31e, macros_so_734d2c026aafe31e)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_macros_so_data_734d2c026aafe31e [6679] =
  "\x94\x04\x40\x87\x0e\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x0d"
  "\x0d\xba\x0d\xbb\x0d\xbc\x08\xc1\xbd\x0d\xbe\x08\x88\xc1\xbf\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x0d\x1c\x08"
  "\x0d\x1c\xb2\xb5\x0d\x1c\xb6\x08\x89\x1b\x0d\x1c\x08\x8a\xb7\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xb5\x08"
  "\x0d\xb3\xb6\x0d\x88\x0d\x1c\x1b\x08\x8a\xb6\x1b\x08\x89\xb7\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0d\x0d\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x08\x88\x0d\x1c\x0d\x1c\x1b\x08\x89"
  "\x0d\x0d\x1b\x08\x89\x0d\x1c\x1b\x1b\x08\x8a\x08\x8a\x08\x8a\x08"
  "\x8a\x08\x89\x08\x8a\x08\x89\x08\x89\x08\x88\x0d\x1c\x0d\x1c\x08"
  "\x89\xb1\x1b\x1b\x0d\x1b\x08\x89\x08\x8a\x1b\x1b\x08\x89\x0d\x1c"
  "\x0d\x1b\x08\x89\x08\x89\x0d\xb9\x0d\x1b\x08\x89\x08\x89\x08\x89"
  "\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x08\x89\x08\x8a\x08\x89\x08"
  "\x88\xb2\x0d\x1c\x1b\x1b\x1b\x08\x8a\x08\x89\x08\x88\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x0d\x1c\x08\x89\x08\x8a\x08\x89\x0d\x1c\x1b\x1b"
  "\x08\x89\x08\x89\x08\x8a\x0d\x1c\x1b\x0d\x1c\x08\x88\x0d\x1c\x0d"
  "\x1c\x1b\x1b\x1b\x08\x89\x0d\x1c\xb1\x08\x89\x08\x8b\x1b\x0d\x1c"
  "\x0d\x1c\x1b\x1b\x08\x89\x1b\xb1\x08\x89\x1b\x1b\x1b\x08\x89\x0d"
  "\x1c\x1b\x1b\x1b\x08\x89\x08\x89\x1b\x1b\x08\x0d\x1b\xb5\xb7\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x1b\x08\x08\x89\x0d\x1c\x0d\xb9"
  "\x08\xb5\x1b\x1b\x08\x89\xb7\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1b\x08\x08\x89"
  "\x1b\xb1\x08\xb5\x1b\x1b\x08\x89\xb7\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb1"
  "\x08\xb5\x1b\x1b\x08\x89\xb7\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\xb3\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x1b\x08\x8a\x08\x8a\x1b\x1b\x0d\x08\x89\x1b\x08"
  "\x08\x89\x1b\xb1\x08\xb5\x1b\x1b\x08\x89\xb7\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x08\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d"
  "\xb0\x02\x88\x0d\x08\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\xb3\x1b\x0d\x0d\x1b\x0d\x1c\x0d\x0d\x0d"
  "\xbb\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1b\x08\x89\x1b\x1b\x08\x0d\x1c"
  "\x0d\x1b\x86\x82\xb5\x1b\x1b\x1b\x1b\x08\x8b\xb7\x0d\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x08\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\xb5"
  "\xb6\x0d\x1c\x1b\x1b\x08\x8b\xb7\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x1b\x1b"
  "\x1b\x08\x8a\xb7\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\x1b\x08\x89\xb7\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x08\xb5\x1b\x08\x88\xb7\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x1c\x1b\x1b\x0d\x1b\x08\x0d"
  "\xb5\x1b\x1b\x1b\x08\x89\x08\x89\xb7\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\xb5\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x08\x8a\x08\x8b\xb7\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x1b\x0c\x08\x1b\xb5\x1b\x1b\x1b\x1b\x1b\x08\x8a"
  "\x08\x8a\xb7\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x0c\xb7\xb5\x0d\xb2\x08\xb4"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x17\x1c\x88\x1b\x0d\x1b\x2a\x1b\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x2a\x0d\x1b\x1b"
  "\x2a\x0d\x1b\x2a\x0d\xb1\x2a\x1b\x1b\x0d\x1b\x2a\x0d\x02\x1b\x0d"
  "\x1b\x2a\x0d\x0d\x82\x0d\x1b\x2a\x0d\x02\x0d\x1b\x2a\x1b\x1b\x0d"
  "\x02\x1b\x1b\x2a\x0d\xb6\x1b\x1b\x1b\x1b\x1b\x08\x88\x1b\x81\x1b"
  "\x0d\x0d\x0d\x1b\x0d\x1b\x1b\x1b\x0d\x0d\xb3\x0d\x1b\x1b\x1b\x0d"
  "\x0d\xb5\x0d\x1b\x2a\xb7\x06\x07\x85\xc2\x02\x1b\x0d\x1b\x1b\x08"
  "\x0d\x1b\x2a\xc2\x02\x02\xc3\x0d\x1b\x2a\x1b\x2a\x28\x0d\x28\x0d"
  "\x26\x0d\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
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
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2f\x62\x61\x73\x65\x2f\x6d\x61\x63\x72\x6f"
  "\x73\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x03\x69\x66\x23\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x70\x72\x65\x73\x65\x72\x76\x65"
  "\x2d\x64\x61\x74\x61\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x73"
  "\x3f\x04\x6c\x65\x74\x05\x73\x65\x74\x21\x05\x74\x65\x6d\x70\x04"
  "\x63\x61\x72\x0b\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x04\x63"
  "\x64\x72\x04\x0e\x73\x79\x6e\x74\x61\x78\x2d\x6d\x61\x74\x63\x68"
  "\x3f\x09\x03\x12\x69\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x2d\x73"
  "\x79\x6e\x74\x61\x78\x0a\x04\x0d\x63\x6c\x6f\x73\x65\x2d\x73\x79"
  "\x6e\x74\x61\x78\x0b\x04\xcf\x01\x0e\x81\x85\x02\xce\x01\x0c\x81"
  "\x89\x02\xcd\x01\x0a\x81\x89\x02\xcc\x01\x08\x81\x85\x02\xcb\x01"
  "\x06\x81\x87\x02\xca\x01\x04\x84\x06\x0d\x20\x0c\x02\x07\x64\x65"
  "\x66\x69\x6e\x65\x0d\x06\x62\x65\x67\x69\x6e\x0e\x02\x2a\x0f\x0f"
  "\x0b\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x10\x04\x09\x03\x0a"
  "\x04\x0b\x04\x07\x61\x70\x70\x65\x6e\x64\x11\x04\x04\x6d\x61\x70"
  "\x12\x06\xdc\x01\x1c\x81\x85\x02\xdb\x01\x1a\x81\x91\x02\xda\x01"
  "\x18\x81\x8d\x02\xd9\x01\x16\x81\x8b\x02\xd8\x01\x14\x81\x8b\x02"
  "\xd7\x01\x12\x81\x89\x02\xd6\x01\x10\x81\x87\x02\xd5\x01\x0e\x81"
  "\x87\x02\xd4\x01\x0c\x81\x85\x02\xd3\x01\x0a\x81\x85\x02\xd2\x01"
  "\x08\x81\x85\x02\xd1\x01\x06\x81\x87\x02\xd0\x01\x04\x84\x06\x1b"
  "\x30\x13\x02\x0d\x6e\x61\x6d\x65\x64\x2d\x6c\x61\x6d\x62\x64\x61"
  "\x08\x6d\x69\x74\x2d\x62\x76\x6c\x02\x2b\x14\x10\x10\x04\x09\x04"
  "\x0b\x03\x0a\x04\xe9\x01\x1c\x81\x87\x02\xe8\x01\x1a\x81\x87\x02"
  "\xe7\x01\x18\x81\x87\x02\xe6\x01\x16\x81\x87\x02\xe5\x01\x14\x81"
  "\x87\x02\xe4\x01\x12\x81\x85\x02\xe3\x01\x10\x81\x85\x02\xe2\x01"
  "\x0e\x81\x87\x02\xe1\x01\x0c\x81\x85\x02\xe0\x01\x0a\x81\x87\x02"
  "\xdf\x01\x08\x81\x85\x02\xde\x01\x06\x81\x87\x02\xdd\x01\x04\x84"
  "\x06\x1b\x2c\x15\x02\x0e\x64\x65\x66\x69\x6e\x65\x2d\x73\x79\x6e"
  "\x74\x61\x78\x15\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61"
  "\x6e\x73\x66\x6f\x72\x6d\x65\x72\x08\x70\x61\x74\x74\x65\x72\x6e"
  "\x16\x0b\x71\x75\x61\x73\x69\x71\x75\x6f\x74\x65\x17\x07\x73\x79"
  "\x6d\x62\x6f\x6c\x18\x0f\x08\x75\x6e\x71\x75\x6f\x74\x65\x19\x07"
  "\x6c\x61\x6d\x62\x64\x61\x1a\x02\x78\x1b\x03\x6f\x72\x1c\x08\x73"
  "\x79\x6d\x62\x6f\x6c\x3f\x1d\x1b\x04\x61\x6e\x64\x06\x70\x61\x69"
  "\x72\x3f\x1b\x0e\x6c\x69\x73\x74\x2d\x6f\x66\x2d\x74\x79\x70\x65"
  "\x3f\x1e\x1b\x1d\x05\x66\x6f\x72\x6d\x1b\x0c\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x1f\x09\x16\x04\x63\x64\x72\x1b\x0a\x1b"
  "\x05\x74\x79\x70\x65\x16\x05\x63\x61\x64\x72\x1b\x06\x73\x6c\x6f"
  "\x74\x73\x05\x63\x64\x64\x72\x1b\x09\x74\x61\x67\x2d\x6e\x61\x6d"
  "\x65\x1b\x0e\x73\x79\x6d\x62\x6f\x6c\x2d\x61\x70\x70\x65\x6e\x64"
  "\x20\x16\x06\x71\x75\x6f\x74\x65\x21\x05\x2d\x74\x61\x67\x22\x08"
  "\x74\x61\x67\x2d\x72\x65\x66\x23\x0b\x1b\x1f\x17\x0e\x0d\x19\x20"
  "\x16\x21\x02\x3f\x1f\x18\x74\x61\x67\x67\x65\x64\x2d\x76\x65\x63"
  "\x74\x6f\x72\x2f\x70\x72\x65\x64\x69\x63\x61\x74\x65\x24\x19\x23"
  "\x1c\x73\x65\x74\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x2d"
  "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x21\x23\x1a\x07\x6f"
  "\x62\x6a\x65\x63\x74\x25\x08\x61\x70\x70\x65\x6e\x64\x21\x26\x10"
  "\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2d\x6c\x69\x73\x74\x27"
  "\x25\x19\x16\x11\x75\x6e\x71\x75\x6f\x74\x65\x2d\x73\x70\x6c\x69"
  "\x63\x69\x6e\x67\x28\x25\x17\x76\x65\x63\x74\x6f\x72\x2d\x74\x61"
  "\x67\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x29\x14\x64"
  "\x65\x66\x69\x6e\x65\x2d\x76\x65\x63\x74\x6f\x72\x2d\x73\x6c\x6f"
  "\x74\x73\x2a\x19\x16\x28\x0d\x19\x1b\x10\x6d\x61\x6b\x65\x2d\x76"
  "\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x28\x21\x19\x16\x19\x21\x08"
  "\x64\x65\x66\x69\x6e\x65\x2d\x22\x04\x0b\x04\x20\x03\xf7\x01\x1e"
  "\x81\x8d\x02\xf6\x01\x1c\x81\x8f\x02\xf5\x01\x1a\x81\x8b\x02\xf4"
  "\x01\x18\x81\x89\x02\xf3\x01\x16\x81\x89\x02\xf2\x01\x14\x81\x87"
  "\x02\xf1\x01\x12\x81\x87\x02\xf0\x01\x10\x81\x87\x02\xef\x01\x0e"
  "\x81\x85\x02\xee\x01\x0c\x81\x89\x02\xed\x01\x0a\x81\x89\x02\xec"
  "\x01\x08\x81\x89\x02\xeb\x01\x06\x81\x89\x02\xea\x01\x04\x84\x06"
  "\x1d\x48\x1b\x02\x21\x07\x61\x63\x63\x65\x73\x73\x16\x07\x76\x65"
  "\x63\x74\x6f\x72\x14\x10\x04\x09\x03\x0a\x04\x12\x04\x0b\x05\x81"
  "\x02\x16\x81\x87\x02\x80\x02\x14\x81\x85\x02\xff\x01\x12\x81\x8b"
  "\x02\xfe\x01\x10\x81\x8b\x02\xfd\x01\x0e\x81\x85\x02\xfc\x01\x0c"
  "\x81\x87\x02\xfb\x01\x0a\x81\x87\x02\xfa\x01\x08\x81\x85\x02\xf9"
  "\x01\x06\x81\x87\x02\xf8\x01\x04\x84\x06\x15\x28\x2b\x02\x21\x16"
  "\x14\x10\x04\x09\x03\x0a\x04\x12\x04\x0b\x05\x8b\x02\x16\x81\x87"
  "\x02\x8a\x02\x14\x81\x85\x02\x89\x02\x12\x81\x8b\x02\x88\x02\x10"
  "\x81\x8b\x02\x87\x02\x0e\x81\x85\x02\x86\x02\x0c\x81\x87\x02\x85"
  "\x02\x0a\x81\x87\x02\x84\x02\x08\x81\x85\x02\x83\x02\x06\x81\x87"
  "\x02\x82\x02\x04\x84\x06\x15\x28\x2c\x02\x08\x16\x14\x10\x04\x09"
  "\x03\x0a\x04\x12\x04\x0b\x05\x95\x02\x16\x81\x87\x02\x94\x02\x14"
  "\x81\x85\x02\x93\x02\x12\x81\x8b\x02\x92\x02\x10\x81\x8b\x02\x91"
  "\x02\x0e\x81\x85\x02\x90\x02\x0c\x81\x87\x02\x8f\x02\x0a\x81\x87"
  "\x02\x8e\x02\x08\x81\x85\x02\x8d\x02\x06\x81\x87\x02\x8c\x02\x04"
  "\x84\x06\x15\x27\x2d\x02\x09\x0a\x2a\x6c\x76\x61\x6c\x75\x65\x73"
  "\x2a\x2e\x05\x63\x6f\x6e\x73\x2f\x07\x6c\x76\x61\x6c\x75\x65\x30"
  "\x2e\x30\x21\x0b\x6e\x6f\x74\x2d\x63\x61\x63\x68\x65\x64\x21\x16"
  "\x14\x10\x04\x09\x03\x0a\x04\x12\x04\x0b\x05\x9f\x02\x16\x81\x87"
  "\x02\x9e\x02\x14\x81\x85\x02\x9d\x02\x12\x81\x8b\x02\x9c\x02\x10"
  "\x81\x8b\x02\x9b\x02\x0e\x81\x85\x02\x9a\x02\x0c\x81\x87\x02\x99"
  "\x02\x0a\x81\x87\x02\x98\x02\x08\x81\x85\x02\x97\x02\x06\x81\x87"
  "\x02\x96\x02\x04\x84\x06\x15\x2c\x30\x02\x0a\x15\x72\x74\x6c\x3a"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x74\x79\x70\x65\x73"
  "\x05\x12\x64\x65\x66\x69\x6e\x65\x2d\x72\x74\x6c\x2d\x63\x6f\x6d"
  "\x6d\x6f\x6e\x2e\x02\xa1\x02\x06\x83\x04\xa0\x02\x04\x84\x06\x05"
  "\x0c\x16\x02\x0b\x10\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2d\x3e"
  "\x73\x72\x74\x6c\x14\x72\x74\x6c\x3a\x73\x74\x61\x74\x65\x6d\x65"
  "\x6e\x74\x2d\x74\x79\x70\x65\x73\x05\x2e\x02\xa3\x02\x06\x83\x04"
  "\xa2\x02\x04\x84\x06\x05\x0e\x02\x0c\x10\x70\x72\x65\x64\x69\x63"
  "\x61\x74\x65\x2d\x3e\x70\x72\x74\x6c\x14\x72\x74\x6c\x3a\x70\x72"
  "\x65\x64\x69\x63\x61\x74\x65\x2d\x74\x79\x70\x65\x73\x05\x2e\x02"
  "\xa5\x02\x06\x83\x04\xa4\x02\x04\x84\x06\x05\x0e\x31\x02\x0d\x0e"
  "\x2f\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x10\x67\x65\x6e\x65\x72"
  "\x61\x6c\x2d\x63\x61\x72\x2d\x63\x64\x72\x25\x02\x76\x2f\x06\x6d"
  "\x61\x6b\x65\x2d\x09\x72\x74\x6c\x3a\x73\x65\x74\x2d\x02\x21\x05"
  "\x6c\x69\x73\x74\x32\x12\x64\x65\x66\x69\x6e\x65\x2d\x69\x6e\x74"
  "\x65\x67\x72\x61\x62\x6c\x65\x33\x04\x65\x71\x3f\x34\x04\x63\x61"
  "\x72\x10\x21\x10\x02\x2d\x35\x05\x72\x74\x6c\x3a\x1f\x18\x18\x0f"
  "\x18\x1a\x6d\x61\x6b\x65\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63"
  "\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x02\x04\x09\x03\x0a"
  "\x05\x20\x04\x20\x04\x12\x06\xbf\x02\x36\xfd\xff\x03\xbe\x02\x34"
  "\x81\x93\x02\xbd\x02\x32\xfd\xff\x03\xbc\x02\x30\x81\x91\x02\xbb"
  "\x02\x2e\xfd\xff\x03\xba\x02\x2c\x81\x8f\x02\xb9\x02\x2a\xfd\xff"
  "\x03\xb8\x02\x28\xfd\xff\x03\xb7\x02\x26\xfd\xff\x03\xb6\x02\x24"
  "\x81\x89\x02\xb5\x02\x22\x81\x93\x02\xb4\x02\x20\x81\x8f\x02\xb3"
  "\x02\x1e\x81\x8b\x02\xb2\x02\x1c\x81\x89\x02\xb1\x02\x1a\x81\x8d"
  "\x02\xb0\x02\x18\x81\x8b\x02\xaf\x02\x16\x81\x8b\x02\xae\x02\x14"
  "\x81\x89\x02\xad\x02\x12\x81\x89\x02\xac\x02\x10\x81\x89\x02\xab"
  "\x02\x0e\x81\x87\x02\xaa\x02\x0c\x81\x87\x02\xa9\x02\x0a\x81\x87"
  "\x02\xa8\x02\x08\x81\x87\x02\xa7\x02\x06\x81\x89\x02\xa6\x02\x04"
  "\x85\x08\x35\x5e\x36\x02\x0e\x21\x13\x55\x6e\x6b\x6e\x6f\x77\x6e"
  "\x20\x72\x75\x6c\x65\x20\x74\x79\x70\x65\x3a\x1c\x61\x64\x64\x2d"
  "\x70\x72\x65\x2d\x63\x73\x65\x2d\x72\x65\x77\x72\x69\x74\x69\x6e"
  "\x67\x2d\x72\x75\x6c\x65\x21\x12\x70\x72\x65\x2d\x63\x73\x65\x2d"
  "\x72\x65\x77\x72\x69\x74\x69\x6e\x67\x14\x61\x64\x64\x2d\x72\x65"
  "\x77\x72\x69\x74\x69\x6e\x67\x2d\x72\x75\x6c\x65\x21\x0a\x72\x65"
  "\x77\x72\x69\x74\x69\x6e\x67\x14\x61\x64\x64\x2d\x73\x74\x61\x74"
  "\x65\x6d\x65\x6e\x74\x2d\x72\x75\x6c\x65\x21\x0a\x70\x72\x65\x64"
  "\x69\x63\x61\x74\x65\x0a\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x06"
  "\x64\x61\x74\x75\x6d\x37\x14\x37\x04\x09\x03\x0a\x05\x0e\x72\x75"
  "\x6c\x65\x2d\x3e\x6d\x61\x74\x63\x68\x65\x72\x38\x04\x0b\x04\x06"
  "\x65\x72\x72\x6f\x72\x39\x06\xcf\x02\x22\x81\x87\x02\xce\x02\x20"
  "\x81\x87\x02\xcd\x02\x1e\x81\x85\x02\xcc\x02\x1c\x81\x85\x02\xcb"
  "\x02\x1a\x81\x89\x02\xca\x02\x18\x81\x89\x02\xc9\x02\x16\x81\x87"
  "\x02\xc8\x02\x14\x81\x8d\x02\xc7\x02\x12\x81\x8d\x02\xc6\x02\x10"
  "\x81\x8d\x02\xc5\x02\x0e\x81\x8b\x02\xc4\x02\x0c\x81\x8b\x02\xc3"
  "\x02\x0a\x81\x8b\x02\xc2\x02\x08\x81\x85\x02\xc1\x02\x06\x81\x87"
  "\x02\xc0\x02\x04\x84\x06\x21\x3c\x3a\x02\x0f\x37\x14\x37\x04\x09"
  "\x03\x0a\x05\x38\x04\xd8\x02\x14\x84\x06\xd7\x02\x12\x81\x85\x02"
  "\xd6\x02\x10\x81\x8b\x02\xd5\x02\x0e\x81\x8b\x02\xd4\x02\x0c\x81"
  "\x89\x02\xd3\x02\x0a\x81\x89\x02\xd2\x02\x08\x81\x85\x02\xd1\x02"
  "\x06\x81\x87\x02\xd0\x02\x04\x84\x06\x13\x20\x38\x02\x10\x17\x0f"
  "\x37\x04\x09\x03\x0a\x04\x0b\x04\xdd\x02\x0c\x81\x87\x02\xdc\x02"
  "\x0a\x81\x85\x02\xdb\x02\x08\x81\x85\x02\xda\x02\x06\x81\x87\x02"
  "\xd9\x02\x04\x84\x06\x0b\x19\x14\x02\x11\x17\x37\x04\x09\x03\x0a"
  "\x04\x0b\x04\xe3\x02\x0e\x81\x87\x02\xe2\x02\x0c\x81\x85\x02\xe1"
  "\x02\x0a\x81\x85\x02\xe0\x02\x08\x81\x85\x02\xdf\x02\x06\x81\x87"
  "\x02\xde\x02\x04\x84\x06\x0d\x1c\x3b\x02\x12\x18\x65\x6e\x75\x6d"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2f\x6e\x61\x6d\x65\x2d\x3e\x69\x6e"
  "\x64\x65\x78\x02\x2f\x3c\x0e\x0d\x11\x6d\x61\x6b\x65\x2d\x65\x6e"
  "\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x21\x02\x73\x18\x0f\x18\x04"
  "\x09\x03\x0a\x04\x20\x05\x20\x04\x0b\x04\x12\x07\xf0\x02\x1c\x81"
  "\x85\x02\xef\x02\x1a\x81\x85\x02\xee\x02\x18\x81\x8d\x02\xed\x02"
  "\x16\x81\x8b\x02\xec\x02\x14\x81\x89\x02\xeb\x02\x12\x81\x87\x02"
  "\xea\x02\x10\x81\x87\x02\xe9\x02\x0e\x81\x85\x02\xe8\x02\x0c\x81"
  "\x85\x02\xe7\x02\x0a\x81\x85\x02\xe6\x02\x08\x81\x85\x02\xe5\x02"
  "\x06\x81\x87\x02\xe4\x02\x04\x84\x06\x1b\x36\x3d\x02\x13\x3c\x18"
  "\x10\x0f\x37\x0f\x10\x04\x09\x03\x0a\x07\x13\x65\x6e\x75\x6d\x65"
  "\x72\x61\x74\x69\x6f\x6e\x2d\x63\x61\x73\x65\x2d\x31\x3c\x05\x20"
  "\x05\xfd\x02\x1c\x83\x04\xfc\x02\x1a\x81\x85\x02\xfb\x02\x18\x81"
  "\x85\x02\xfa\x02\x16\x81\x85\x02\xf9\x02\x14\x81\x89\x02\xf8\x02"
  "\x12\x81\x89\x02\xf7\x02\x10\x81\x89\x02\xf6\x02\x0e\x81\x87\x02"
  "\xf5\x02\x0c\x81\x87\x02\xf4\x02\x0a\x81\x87\x02\xf3\x02\x08\x81"
  "\x85\x02\xf2\x02\x06\x81\x87\x02\xf1\x02\x04\x84\x06\x1b\x2c\x3e"
  "\x02\x14\x05\x65\x6c\x73\x65\x3f\x39\x13\x55\x6e\x6b\x6e\x6f\x77"
  "\x6e\x20\x6e\x6f\x64\x65\x20\x74\x79\x70\x65\x3a\x22\x10\x0f\x37"
  "\x0f\x10\x04\x09\x03\x0a\x07\x3c\x04\x20\x05\x86\x03\x14\x83\x04"
  "\x85\x03\x12\x83\x04\x84\x03\x10\x81\x89\x02\x83\x03\x0e\x81\x89"
  "\x02\x82\x03\x0c\x81\x87\x02\x81\x03\x0a\x81\x87\x02\x80\x03\x08"
  "\x81\x85\x02\xff\x02\x06\x81\x87\x02\xfe\x02\x04\x84\x06\x13\x27"
  "\x37\x02\x15\x34\x1c\x3f\x16\x45\x4c\x53\x45\x20\x63\x6c\x61\x75"
  "\x73\x65\x20\x6e\x6f\x74\x20\x6c\x61\x73\x74\x3a\x05\x63\x6f\x6e"
  "\x64\x03\x1e\x63\x61\x70\x74\x75\x72\x65\x2d\x73\x79\x6e\x74\x61"
  "\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x04\x0b\x03\x0c\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x3f\x04"
  "\x39\x04\x12\x06\x0d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x3d"
  "\x3f\x07\xa6\x03\x42\x81\x89\x02\xa5\x03\x40\x81\x85\x02\xa4\x03"
  "\x3e\x81\x85\x02\xa3\x03\x3c\x81\x89\x02\xa2\x03\x3a\x81\x85\x02"
  "\xa1\x03\x38\x81\x8b\x02\xa0\x03\x36\x81\x8b\x02\x9f\x03\x34\x81"
  "\x87\x02\x9e\x03\x32\x81\x85\x02\x9d\x03\x30\x81\x85\x02\x9c\x03"
  "\x2e\x81\x89\x02\x9b\x03\x2c\x81\x89\x02\x9a\x03\x2a\x81\x85\x02"
  "\x99\x03\x28\x81\x8b\x02\x98\x03\x26\x81\x8b\x02\x97\x03\x24\x81"
  "\x89\x02\x96\x03\x22\x81\x85\x02\x95\x03\x20\x81\x87\x02\x94\x03"
  "\x1e\x81\x87\x02\x93\x03\x1c\x81\x85\x02\x92\x03\x1a\x81\x85\x02"
  "\x91\x03\x18\x81\x85\x02\x90\x03\x16\x81\x87\x02\x8f\x03\x14\x81"
  "\x87\x02\x8e\x03\x12\x81\x85\x02\x8d\x03\x10\xfd\xff\x03\x8c\x03"
  "\x0e\x81\x87\x02\x8b\x03\x0c\xff\xff\x03\x8a\x03\x0a\x81\x87\x02"
  "\x89\x03\x08\x81\x85\x02\x88\x03\x06\x81\x85\x02\x87\x03\x04\x87"
  "\x0c\x41\x5b\x3f\x15\x39\x39\x0e\x63\x66\x67\x2d\x6e\x6f\x64\x65"
  "\x2d\x63\x61\x73\x65\x3f\x04\x3c\x11\x65\x6e\x75\x6d\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2d\x63\x61\x73\x65\x37\x04\x13\x64\x65\x66\x69"
  "\x6e\x65\x2d\x65\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x3e\x04"
  "\x08\x69\x6e\x73\x74\x2d\x65\x61\x3d\x04\x04\x6c\x61\x70\x3b\x04"
  "\x0d\x72\x75\x6c\x65\x2d\x6d\x61\x74\x63\x68\x65\x72\x14\x04\x0c"
  "\x64\x65\x66\x69\x6e\x65\x2d\x72\x75\x6c\x65\x38\x04\x3a\x04\x15"
  "\x64\x65\x66\x69\x6e\x65\x2d\x72\x74\x6c\x2d\x70\x72\x65\x64\x69"
  "\x63\x61\x74\x65\x2e\x36\x04\x15\x64\x65\x66\x69\x6e\x65\x2d\x72"
  "\x74\x6c\x2d\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x31\x04\x16\x64"
  "\x65\x66\x69\x6e\x65\x2d\x72\x74\x6c\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x04\x17\x19\x0c\x6d\x61\x6b\x65\x2d\x6c\x76\x61"
  "\x6c\x75\x65\x16\x04\x0b\x6c\x76\x61\x6c\x75\x65\x2d\x74\x61\x67"
  "\x0f\x32\x0c\x6d\x61\x6b\x65\x2d\x72\x76\x61\x6c\x75\x65\x30\x04"
  "\x0d\x72\x76\x61\x6c\x75\x65\x2d\x74\x79\x70\x65\x73\x0b\x72\x76"
  "\x61\x6c\x75\x65\x2d\x74\x61\x67\x0b\x6d\x61\x6b\x65\x2d\x70\x6e"
  "\x6f\x64\x65\x2d\x04\x0a\x70\x6e\x6f\x64\x65\x2d\x74\x61\x67\x09"
  "\x0b\x6d\x61\x6b\x65\x2d\x73\x6e\x6f\x64\x65\x2c\x04\x26\x29\x0a"
  "\x73\x6e\x6f\x64\x65\x2d\x74\x61\x67\x08\x24\x2b\x04\x0e\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6c\x76\x61\x6c\x75\x65\x28\x21\x23\x1a\x25"
  "\x27\x0d\x21\x74\x61\x67\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72"
  "\x2f\x73\x75\x62\x63\x6c\x61\x73\x73\x2d\x70\x72\x65\x64\x69\x63"
  "\x61\x74\x65\x0e\x64\x65\x66\x69\x6e\x65\x2d\x72\x76\x61\x6c\x75"
  "\x65\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x33\x0c\x76\x65"
  "\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x2f\x25\x1f\x0d\x64\x65\x66"
  "\x69\x6e\x65\x2d\x70\x6e\x6f\x64\x65\x05\x73\x65\x74\x2d\x0d\x64"
  "\x65\x66\x69\x6e\x65\x2d\x73\x6e\x6f\x64\x65\x0e\x35\x22\x17\x64"
  "\x65\x66\x69\x6e\x65\x2d\x74\x79\x70\x65\x2d\x64\x65\x66\x69\x6e"
  "\x69\x74\x69\x6f\x6e\x0b\x75\x6e\x73\x70\x65\x63\x69\x66\x69\x63"
  "\x11\x64\x65\x66\x69\x6e\x65\x2d\x72\x6f\x6f\x74\x2d\x74\x79\x70"
  "\x65\x1b\x04\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f"
  "\x1e\x2a\x0e\x64\x65\x66\x69\x6e\x65\x2d\x65\x78\x70\x6f\x72\x74"
  "\x18\x0f\x08\x70\x61\x63\x6b\x61\x67\x65\x15\x04\x1a\x70\x72\x69"
  "\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65"
  "\x74\x2d\x74\x79\x70\x65\x33\x10\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0f\x6c\x61\x73\x74\x2d\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x13\x04\x0c\x04\x04\x1f\x73\x63"
  "\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d"
  "\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x04\x20\x72\x73"
  "\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72"
  "\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x03\x1b\x65"
  "\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65\x67\x61\x74\x69\x76\x65"
  "\x2d\x69\x6e\x74\x65\x67\x65\x72\x3f\x1d\x03\x04\x1e\x04\x09\x03"
  "\x0a\x04\x20\x05\x20\x04\x0b\x04\x0b\x61\x70\x70\x65\x6e\x64\x2d"
  "\x6d\x61\x70\x04\x11\x04\x12\x0a\xc9\x01\x94\x03\x80\x80\x04\xc8"
  "\x01\x92\x03\x81\x81\x02\xc7\x01\x90\x03\x81\x81\x02\xc6\x01\x8e"
  "\x03\x81\x87\x02\xc5\x01\x8c\x03\x81\x85\x02\xc4\x01\x8a\x03\x81"
  "\x83\x02\xc3\x01\x88\x03\x81\x87\x02\xc2\x01\x86\x03\x81\x85\x02"
  "\xc1\x01\x84\x03\x81\x83\x02\xc0\x01\x82\x03\x81\x87\x02\xbf\x01"
  "\x80\x03\x81\x85\x02\xbe\x01\xfe\x02\x81\x83\x02\xbd\x01\xfc\x02"
  "\x81\x87\x02\xbc\x01\xfa\x02\x81\x85\x02\xbb\x01\xf8\x02\x81\x83"
  "\x02\xba\x01\xf6\x02\x81\x87\x02\xb9\x01\xf4\x02\x81\x85\x02\xb8"
  "\x01\xf2\x02\x81\x83\x02\xb7\x01\xf0\x02\x81\x87\x02\xb6\x01\xee"
  "\x02\x81\x85\x02\xb5\x01\xec\x02\x81\x83\x02\xb4\x01\xea\x02\x81"
  "\x87\x02\xb3\x01\xe8\x02\x81\x85\x02\xb2\x01\xe6\x02\x81\x83\x02"
  "\xb1\x01\xe4\x02\x81\x83\x02\xb0\x01\xe2\x02\x81\x87\x02\xaf\x01"
  "\xe0\x02\x81\x85\x02\xae\x01\xde\x02\x81\x83\x02\xad\x01\xdc\x02"
  "\x81\x87\x02\xac\x01\xda\x02\x81\x85\x02\xab\x01\xd8\x02\x81\x83"
  "\x02\xaa\x01\xd6\x02\x81\x87\x02\xa9\x01\xd4\x02\x81\x85\x02\xa8"
  "\x01\xd2\x02\x81\x83\x02\xa7\x01\xd0\x02\x81\x87\x02\xa6\x01\xce"
  "\x02\x81\x85\x02\xa5\x01\xcc\x02\x81\x85\x02\xa4\x01\xca\x02\x81"
  "\x87\x02\xa3\x01\xc8\x02\x81\x87\x02\xa2\x01\xc6\x02\x81\x85\x02"
  "\xa1\x01\xc4\x02\x81\x83\x02\xa0\x01\xc2\x02\x81\x8f\x02\x9f\x01"
  "\xc0\x02\x81\x85\x02\x9e\x01\xbe\x02\x81\x8f\x02\x9d\x01\xbc\x02"
  "\x81\x85\x02\x9c\x01\xba\x02\x81\x87\x02\x9b\x01\xb8\x02\x81\x85"
  "\x02\x9a\x01\xb6\x02\x81\x83\x02\x99\x01\xb4\x02\x81\x8f\x02\x98"
  "\x01\xb2\x02\x81\x8d\x02\x97\x01\xb0\x02\x81\x8b\x02\x96\x01\xae"
  "\x02\x81\x87\x02\x95\x01\xac\x02\x81\x85\x02\x94\x01\xaa\x02\x81"
  "\x83\x02\x93\x01\xa8\x02\x81\x8f\x02\x92\x01\xa6\x02\x81\x8d\x02"
  "\x91\x01\xa4\x02\x81\x8b\x02\x90\x01\xa2\x02\x81\x8f\x02\x8f\x01"
  "\xa0\x02\x81\x8f\x02\x8e\x01\x9e\x02\x81\x89\x02\x8d\x01\x9c\x02"
  "\x81\x89\x02\x8c\x01\x9a\x02\x81\x89\x02\x8b\x01\x98\x02\x81\x87"
  "\x02\x8a\x01\x96\x02\x81\x87\x02\x89\x01\x94\x02\x81\x87\x02\x88"
  "\x01\x92\x02\x81\x87\x02\x87\x01\x90\x02\x81\x87\x02\x86\x01\x8e"
  "\x02\x81\x85\x02\x85\x01\x8c\x02\x81\x83\x02\x84\x01\x8a\x02\x81"
  "\x8f\x02\x83\x01\x88\x02\x81\x8d\x02\x82\x01\x86\x02\x81\x8b\x02"
  "\x81\x01\x84\x02\x81\x89\x02\x80\x01\x82\x02\x81\x89\x02\x7f\x80"
  "\x02\x81\x87\x02\x7e\xfe\x01\x81\x87\x02\x7d\xfc\x01\x81\x87\x02"
  "\x7c\xfa\x01\x81\x89\x02\x7b\xf8\x01\x81\x87\x02\x7a\xf6\x01\x81"
  "\x85\x02\x79\xf4\x01\x81\x83\x02\x78\xf2\x01\x83\x04\x77\xf0\x01"
  "\x81\x83\x02\x76\xee\x01\x81\x87\x02\x75\xec\x01\x81\x85\x02\x74"
  "\xea\x01\x81\x83\x02\x73\xe8\x01\x81\x8d\x02\x72\xe6\x01\x81\x8b"
  "\x02\x71\xe4\x01\x81\x89\x02\x70\xe2\x01\x81\x89\x02\x6f\xe0\x01"
  "\x81\x87\x02\x6e\xde\x01\x81\x87\x02\x6d\xdc\x01\x81\x87\x02\x6c"
  "\xda\x01\x81\x89\x02\x6b\xd8\x01\x81\x87\x02\x6a\xd6\x01\x81\x85"
  "\x02\x69\xd4\x01\x81\x83\x02\x68\xd2\x01\x83\x04\x67\xd0\x01\x81"
  "\x83\x02\x66\xce\x01\x81\x87\x02\x65\xcc\x01\x81\x85\x02\x64\xca"
  "\x01\x81\x83\x02\x63\xc8\x01\x81\x8f\x02\x62\xc6\x01\x81\x8b\x02"
  "\x61\xc4\x01\x81\x89\x02\x60\xc2\x01\x81\x89\x02\x5f\xc0\x01\x81"
  "\x87\x02\x5e\xbe\x01\x81\x87\x02\x5d\xbc\x01\x81\x87\x02\x5c\xba"
  "\x01\x81\x89\x02\x5b\xb8\x01\x81\x87\x02\x5a\xb6\x01\x81\x85\x02"
  "\x59\xb4\x01\x81\x83\x02\x58\xb2\x01\x83\x04\x57\xb0\x01\x81\x83"
  "\x02\x56\xae\x01\x81\x87\x02\x55\xac\x01\x81\x85\x02\x54\xaa\x01"
  "\x81\x83\x02\x53\xa8\x01\x81\x85\x02\x52\xa6\x01\x81\x89\x02\x51"
  "\xa4\x01\x81\x89\x02\x50\xa2\x01\x81\x8d\x02\x4f\xa0\x01\x81\x89"
  "\x02\x4e\x9e\x01\x81\x89\x02\x4d\x9c\x01\x81\x87\x02\x4c\x9a\x01"
  "\x81\x87\x02\x4b\x98\x01\x81\x87\x02\x4a\x96\x01\x81\x89\x02\x49"
  "\x94\x01\x81\x87\x02\x48\x92\x01\x81\x85\x02\x47\x90\x01\x81\x83"
  "\x02\x46\x8e\x01\x83\x04\x45\x8c\x01\x81\x83\x02\x44\x8a\x01\x81"
  "\x87\x02\x43\x88\x01\x81\x85\x02\x42\x86\x01\x81\x83\x02\x41\x84"
  "\x01\x81\x8d\x02\x40\x82\x01\x81\x8b\x02\x3f\x80\x01\x81\x8b\x02"
  "\x3e\x7e\x81\x87\x02\x3d\x7c\x81\x87\x02\x3c\x7a\x81\x8b\x02\x3b"
  "\x78\x81\x89\x02\x3a\x76\x81\x87\x02\x39\x74\x81\x85\x02\x38\x72"
  "\x81\x83\x02\x37\x70\x83\x04\x36\x6e\x81\x83\x02\x35\x6c\x81\x87"
  "\x02\x34\x6a\x81\x85\x02\x33\x68\x81\x83\x02\x32\x66\x81\x8d\x02"
  "\x31\x64\x81\x8b\x02\x30\x62\x81\x87\x02\x2f\x60\x81\x89\x02\x2e"
  "\x5e\x81\x87\x02\x2d\x5c\x81\x89\x02\x2c\x5a\x81\x89\x02\x2b\x58"
  "\x81\x87\x02\x2a\x56\x81\x87\x02\x29\x54\x81\x87\x02\x28\x52\x81"
  "\x87\x02\x27\x50\x81\x85\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x87"
  "\x02\x24\x4a\x81\x87\x02\x23\x48\x81\x87\x02\x22\x46\x81\x87\x02"
  "\x21\x44\x81\x87\x02\x20\x42\x81\x87\x02\x1f\x40\x81\x87\x02\x1e"
  "\x3e\x81\x87\x02\x1d\x3c\x81\x87\x02\x1c\x3a\x81\x89\x02\x1b\x38"
  "\x81\x87\x02\x1a\x36\x81\x85\x02\x19\x34\x81\x83\x02\x18\x32\x83"
  "\x04\x17\x30\x81\x83\x02\x16\x2e\x81\x87\x02\x15\x2c\x81\x85\x02"
  "\x14\x2a\x81\x83\x02\x13\x28\x81\x89\x02\x12\x26\x81\x87\x02\x11"
  "\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x83\x04\x0e\x1e\x81"
  "\x83\x02\x0d\x1c\x81\x87\x02\x0c\x1a\x81\x85\x02\x0b\x18\x81\x83"
  "\x02\x0a\x16\x81\x87\x02\x09\x14\x81\x85\x02\x08\x12\x81\x8b\x02"
  "\x07\x10\x81\x83\x02\x06\x0e\x81\x87\x02\x05\x0c\x81\x85\x02\x04"
  "\x0a\x81\x83\x02\x03\x08\x81\x87\x02\x02\x06\x81\x85\x02\x01\x04"
  "\x81\x83\x02\x93\x03\x94\x04";

SCHEME_OBJECT *
macros_so_data_734d2c026aafe31e (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_macros_so_data_734d2c026aafe31e [0]))), (sizeof (prog_macros_so_data_734d2c026aafe31e)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_226]));
}

DECLARE_COMPILED_DATA_NS ("macros.so", macros_so_data_734d2c026aafe31e)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("macros.so", "39931ec30e344e02")
