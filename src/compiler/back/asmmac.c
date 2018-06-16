/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:08-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define LABEL_1_12 9
#define LABEL_1_13 11
#define LABEL_1_9 13
#define LABEL_1_15 15
#define LABEL_1_16 17
#define LABEL_1_19 19
#define LABEL_1_10 21
#define TAG_1_11 9
#define LABEL_1_20 23
#define LABEL_1_21 25
#define LABEL_1_17 27
#define ENVIRONMENT_LABEL_1_3 49
#define DEBUGGING_LABEL_1_2 48
#define OBJECT_1_6 47
#define OBJECT_1_5 46
#define OBJECT_1_4 45
#define OBJECT_1_3 44
#define OBJECT_1_2 43
#define OBJECT_1_1 42
#define OBJECT_1_0 41
#define EXECUTE_CACHE_1_23 29
#define EXECUTE_CACHE_1_22 31
#define EXECUTE_CACHE_1_18 33
#define EXECUTE_CACHE_1_14 35
#define EXECUTE_CACHE_1_8 37
#define EXECUTE_CACHE_1_7 39
#define FREE_REFERENCES_LABEL_1_0 28
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asmmac_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd31;
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
      goto lambda_17;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_12);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_1_13);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_1_15);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_1_16);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_1_10);
      goto lambda_28;

    case 10:
      current_block = (Rpc - LABEL_1_20);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_1_21);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_39;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_38)
  (Wrd17.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd31.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (label_29)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_10])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_37;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_36)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_35;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Wrd9.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
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
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_30)
  (Wrd29.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd34.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 1);

DEFLABEL (label_23)
  (Wrd19.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_22)
  (Wrd10.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_20)
  (Wrd15.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_1_10);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_44;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_19);

DEFLABEL (label_44)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_43;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_42)
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_41;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_40)
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd33.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_22]));

DEFLABEL (label_41)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_25)
  (Wrd24.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define TAG_2_7 2
#define LABEL_2_14 9
#define LABEL_2_15 11
#define LABEL_2_9 13
#define LABEL_2_11 15
#define TAG_2_12 6
#define LABEL_2_13 17
#define LABEL_2_17 19
#define LABEL_2_18 21
#define ENVIRONMENT_LABEL_2_3 37
#define DEBUGGING_LABEL_2_2 36
#define OBJECT_2_2 35
#define OBJECT_2_1 34
#define OBJECT_2_0 33
#define EXECUTE_CACHE_2_20 23
#define EXECUTE_CACHE_2_19 25
#define EXECUTE_CACHE_2_16 27
#define EXECUTE_CACHE_2_10 29
#define EXECUTE_CACHE_2_8 31
#define FREE_REFERENCES_LABEL_2_0 22
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asmmac_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_2_4);
      goto compile_database_9;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto lambda_15;

    case 3:
      current_block = (Rpc - LABEL_2_14);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_2_15);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto lambda_16;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_2_17);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_database_14)
DEFLABEL (compile_database_9)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_6])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_2_6);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_11])));
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
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_20;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_19)
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_18;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_18)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_2_11);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_17);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_5 7
#define LABEL_3_7 9
#define LABEL_3_11 11
#define LABEL_3_8 13
#define LABEL_3_12 15
#define LABEL_3_14 17
#define LABEL_3_15 19
#define LABEL_3_16 21
#define LABEL_3_17 23
#define LABEL_3_18 25
#define LABEL_3_19 27
#define LABEL_3_21 29
#define LABEL_3_22 31
#define LABEL_3_24 33
#define LABEL_3_13 35
#define LABEL_3_26 37
#define LABEL_3_20 39
#define LABEL_3_27 41
#define LABEL_3_28 43
#define LABEL_3_29 45
#define LABEL_3_25 47
#define LABEL_3_31 49
#define LABEL_3_33 51
#define LABEL_3_34 53
#define LABEL_3_35 55
#define LABEL_3_32 57
#define LABEL_3_37 59
#define LABEL_3_30 61
#define LABEL_3_38 63
#define ENVIRONMENT_LABEL_3_3 82
#define DEBUGGING_LABEL_3_2 81
#define OBJECT_3_7 80
#define OBJECT_3_6 79
#define OBJECT_3_5 78
#define OBJECT_3_4 77
#define OBJECT_3_3 76
#define OBJECT_3_2 75
#define OBJECT_3_1 74
#define OBJECT_3_0 73
#define EXECUTE_CACHE_3_36 65
#define EXECUTE_CACHE_3_23 67
#define EXECUTE_CACHE_3_10 69
#define EXECUTE_CACHE_3_9 71
#define FREE_REFERENCES_LABEL_3_0 64
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asmmac_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd12;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_3_4);
      goto optimize_group_syntax_46;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto label_48;

    case 4:
      current_block = (Rpc - LABEL_3_11);
      goto find_constant_17;

    case 5:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_3_14);
      goto label_53;

    case 8:
      current_block = (Rpc - LABEL_3_15);
      goto label_49;

    case 9:
      current_block = (Rpc - LABEL_3_16);
      goto label_50;

    case 10:
      current_block = (Rpc - LABEL_3_17);
      goto label_51;

    case 11:
      current_block = (Rpc - LABEL_3_18);
      goto label_52;

    case 12:
      current_block = (Rpc - LABEL_3_19);
      goto car_constantP_40;

    case 13:
      current_block = (Rpc - LABEL_3_21);
      goto label_54;

    case 14:
      current_block = (Rpc - LABEL_3_22);
      goto label_55;

    case 15:
      current_block = (Rpc - LABEL_3_24);
      goto compact_33;

    case 16:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_3_26);
      goto label_56;

    case 18:
      current_block = (Rpc - LABEL_3_20);
      goto continuation_36;

    case 19:
      current_block = (Rpc - LABEL_3_27);
      goto label_57;

    case 20:
      current_block = (Rpc - LABEL_3_28);
      goto label_58;

    case 21:
      current_block = (Rpc - LABEL_3_29);
      goto label_59;

    case 22:
      current_block = (Rpc - LABEL_3_25);
      goto continuation_19;

    case 23:
      current_block = (Rpc - LABEL_3_31);
      goto label_63;

    case 24:
      current_block = (Rpc - LABEL_3_33);
      goto label_60;

    case 25:
      current_block = (Rpc - LABEL_3_34);
      goto label_61;

    case 26:
      current_block = (Rpc - LABEL_3_35);
      goto label_62;

    case 27:
      current_block = (Rpc - LABEL_3_32);
      goto continuation_29;

    case 28:
      current_block = (Rpc - LABEL_3_37);
      goto label_64;

    case 29:
      current_block = (Rpc - LABEL_3_30);
      goto continuation_24;

    case 30:
      current_block = (Rpc - LABEL_3_38);
      goto label_65;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimize_group_syntax_67)
DEFLABEL (optimize_group_syntax_46)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto find_constant_17;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_78;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_6);

DEFLABEL (label_78)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_77;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_76)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd20.uLng) == 1)
    goto label_72;
  (Wrd21.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_71;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  Rvl = ((Wrd24.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_71)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_72)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd35.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd35.Obj);
  goto label_73;

DEFLABEL (label_74)
  (Wrd36.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_73)
DEFLABEL (label_75)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_48)
  (Wrd11.Obj) = Rvl;
  goto label_76;

DEFLABEL (find_constant_68)
DEFLABEL (find_constant_17)
  INTERRUPT_CHECK (26, LABEL_3_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_3_5]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_79;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  goto car_constantP_40;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_87;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_86)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_85;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_84)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_83;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_82)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_81;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_80)
  (Rsp [1]) = (Wrd30.Obj);
  goto compact_33;

DEFLABEL (label_81)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_52)
  (Wrd30.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_50)
  (Wrd16.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_49)
  (Wrd7.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_88)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_92;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_91)
  goto find_constant_17;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_90;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_89)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_90)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_56)
  (Wrd5.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (car_constantP_69)
DEFLABEL (car_constantP_40)
  INTERRUPT_CHECK (26, LABEL_3_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_106;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_105)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_104;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_103)
  (Wrd26.Obj) = (Rsp [5]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_3_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_95;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_102;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_101)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_100;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_99)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_98;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_97)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd31.uLng) == 47)
    goto label_94;

DEFLABEL (label_95)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_93;

DEFLABEL (label_94)
  Rvl = (current_block [OBJECT_3_7]);

DEFLABEL (label_93)
DEFLABEL (label_96)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_98)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_59)
  (Wrd23.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_58)
  (Wrd16.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_57)
  (Wrd7.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_54)
  (Wrd10.Obj) = Rvl;
  goto label_105;

DEFLABEL (compact_70)
DEFLABEL (compact_33)
  INTERRUPT_CHECK (26, LABEL_3_24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_3_5]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_107;
  (Wrd18.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_3_6]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_107)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  goto car_constantP_40;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_116;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_115;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_114)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_113;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_112)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_111;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_110)
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_36]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_3_32);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_109;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_108)
  (Rsp [1]) = (Wrd6.Obj);
  goto compact_33;

DEFLABEL (label_109)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_37]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_64)
  (Wrd6.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_61)
  (Wrd19.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_60)
  (Wrd10.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_116)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_120;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_119)
  goto find_constant_17;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_3_30);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_118;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_117)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_3_6]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_118)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_38]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_65)
  (Wrd5.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_119;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_11 15
#define ENVIRONMENT_LABEL_3 32
#define DEBUGGING_LABEL_2 31
#define PURIFICATION_ROOT 30
#define OBJECT_10 29
#define OBJECT_9 28
#define OBJECT_8 27
#define OBJECT_7 26
#define OBJECT_6 25
#define OBJECT_5 24
#define OBJECT_4 23
#define OBJECT_3 22
#define OBJECT_2 21
#define OBJECT_1 20
#define OBJECT_0 19
#define GLOBAL_EXECUTE_CACHE_7 17
#define FREE_REFERENCES_LABEL_0 16
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
asmmac_so_6219e73c256c8a38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto expression_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_6)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_10])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_10)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_9)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 3)
      goto label_8;
    blocks = (current_block [OBJECT_10]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_8)
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
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_9]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_asmmac_so_6219e73c256c8a38 [3] =
  {
    { "asmmac_so_code_1", 13, asmmac_so_code_1 },
    { "asmmac_so_code_2", 10, asmmac_so_code_2 },
    { "asmmac_so_code_3", 31, asmmac_so_code_3 }
  };

int
decl_asmmac_so_6219e73c256c8a38 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_asmmac_so_6219e73c256c8a38);
  return (0);
}

DECLARE_COMPILED_CODE ("asmmac.so", 7, decl_asmmac_so_6219e73c256c8a38, asmmac_so_6219e73c256c8a38)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_asmmac_so_data_6219e73c256c8a38 [1131] =
  "\x58\x0a\xef\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0d\x0d\xb9"
  "\xc1\xba\x08\x0d\x0d\x0d\xbb\x0d\xb3\x08\x8a\x08\x8a\xc1\xbb\x28"
  "\x0d\x28\x0d\x28\x0d\xbc\x28\x0d\xbd\x28\x0d\x28\x0d\xbe\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x82"
  "\x88\xb2\xb3\x0d\x28\x0d\x28\xb5\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x07\xb1\x08\x0c\xb2"
  "\x0d\x0d\xb3\x28\xb5\x28\xb6\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x9a\xbd"
  "\x88\xb5\xb6\x2a\x0d\xc2\x02\x02\x0d\xc3\xb4\x1b\x2a\xb7\x2a\x28"
  "\x0d\x26\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61\x63"
  "\x6b\x2f\x61\x73\x6d\x6d\x61\x63\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x23\x44\x45\x46\x49\x4e\x45\x2d\x49\x4e\x53\x54\x52\x55"
  "\x43\x54\x49\x4f\x4e\x3a\x20\x54\x6f\x6f\x20\x66\x65\x77\x20\x66"
  "\x6f\x72\x6d\x73\x2e\x11\x61\x64\x64\x2d\x69\x6e\x73\x74\x72\x75"
  "\x63\x74\x69\x6f\x6e\x21\x06\x71\x75\x6f\x74\x65\x04\x63\x61\x72"
  "\x07\x73\x79\x6d\x62\x6f\x6c\x02\x2a\x06\x64\x61\x74\x75\x6d\x02"
  "\x2b\x04\x63\x64\x72\x04\x0e\x73\x79\x6e\x74\x61\x78\x2d\x6d\x61"
  "\x74\x63\x68\x3f\x03\x12\x69\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64"
  "\x2d\x73\x79\x6e\x74\x61\x78\x05\x11\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x2d\x64\x61\x74\x61\x62\x61\x73\x65\x04\x0d\x63\x6c\x6f\x73\x65"
  "\x2d\x73\x79\x6e\x74\x61\x78\x06\x12\x70\x61\x72\x73\x65\x2d\x69"
  "\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x03\x06\x65\x72\x72\x6f"
  "\x72\x07\x14\x1c\x81\x87\x02\x13\x1a\x81\x8b\x02\x12\x18\x81\x87"
  "\x02\x11\x16\x81\x87\x02\x10\x14\x81\x87\x02\x0f\x12\x81\x87\x02"
  "\x0e\x10\x81\x87\x02\x0d\x0e\x81\x85\x02\x0c\x0c\x81\x8b\x02\x0b"
  "\x0a\x81\x8b\x02\x0a\x08\x81\x85\x02\x09\x06\x81\x87\x02\x08\x04"
  "\x84\x06\x1b\x32\x02\x05\x6c\x69\x73\x74\x04\x04\x6d\x61\x70\x04"
  "\x04\x0b\x70\x61\x72\x73\x65\x2d\x72\x75\x6c\x65\x05\x12\x6d\x61"
  "\x6b\x65\x2d\x72\x75\x6c\x65\x2d\x6d\x61\x74\x63\x68\x65\x72\x06"
  "\x17\x72\x75\x6c\x65\x2d\x72\x65\x73\x75\x6c\x74\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x06\x1e\x16\x81\x8f\x02\x1d\x14\x81"
  "\x8b\x02\x1c\x12\x81\x87\x02\x1b\x10\x81\x8b\x02\x1a\x0e\x81\x89"
  "\x02\x19\x0c\x81\x8b\x02\x18\x0a\x81\x89\x02\x17\x08\x81\x85\x02"
  "\x16\x06\x81\x87\x02\x15\x04\x85\x08\x15\x26\x09\x02\x18\x4e\x6f"
  "\x20\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x20\x69\x6e\x20\x67"
  "\x72\x6f\x75\x70\x21\x15\x6f\x70\x74\x69\x6d\x69\x7a\x65\x2d\x67"
  "\x72\x6f\x75\x70\x2d\x65\x61\x72\x6c\x79\x0f\x6f\x70\x74\x69\x6d"
  "\x69\x7a\x65\x2d\x67\x72\x6f\x75\x70\x04\x03\x06\x0d\x69\x64\x65"
  "\x6e\x74\x69\x66\x69\x65\x72\x3d\x3f\x04\x13\x69\x6e\x73\x74\x72"
  "\x75\x63\x74\x69\x6f\x6e\x2d\x61\x70\x70\x65\x6e\x64\x05\x3d\x40"
  "\x81\x89\x02\x3c\x3e\x81\x87\x02\x3b\x3c\x81\x87\x02\x3a\x3a\x81"
  "\x87\x02\x39\x38\x81\x89\x02\x38\x36\x81\x89\x02\x37\x34\x81\x89"
  "\x02\x36\x32\x81\x8b\x02\x35\x30\x81\x87\x02\x34\x2e\x81\x85\x02"
  "\x33\x2c\x81\x85\x02\x32\x2a\x81\x85\x02\x31\x28\x81\x85\x02\x30"
  "\x26\x81\x87\x02\x2f\x24\x81\x85\x02\x2e\x22\x81\x87\x02\x2d\x20"
  "\x81\x8b\x02\x2c\x1e\x81\x8b\x02\x2b\x1c\x81\x85\x02\x2a\x1a\x81"
  "\x87\x02\x29\x18\x81\x85\x02\x28\x16\x81\x85\x02\x27\x14\x81\x85"
  "\x02\x26\x12\x81\x89\x02\x25\x10\x81\x85\x02\x24\x0e\x81\x89\x02"
  "\x23\x0c\x81\x85\x02\x22\x0a\x81\x89\x02\x21\x08\x81\x87\x02\x20"
  "\x06\x81\x89\x02\x1f\x04\x85\x08\x3f\x53\x04\x16\x6f\x70\x74\x69"
  "\x6d\x69\x7a\x65\x2d\x67\x72\x6f\x75\x70\x2d\x73\x79\x6e\x74\x61"
  "\x78\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x33\x10\x13\x64\x65"
  "\x66\x69\x6e\x65\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x09\x04\x04\x04\x20\x72\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d"
  "\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70"
  "\x61\x6e\x64\x65\x72\x02\x07\x10\x80\x80\x04\x06\x0e\x81\x81\x02"
  "\x05\x0c\x81\x81\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x87\x02\x02"
  "\x06\x81\x85\x02\x01\x04\x81\x83\x02\x0f\x21";

SCHEME_OBJECT *
asmmac_so_data_6219e73c256c8a38 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_asmmac_so_data_6219e73c256c8a38 [0]))), (sizeof (prog_asmmac_so_data_6219e73c256c8a38)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_11]));
}

DECLARE_COMPILED_DATA_NS ("asmmac.so", asmmac_so_data_6219e73c256c8a38)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("asmmac.so", "a3b042554c11050e")
