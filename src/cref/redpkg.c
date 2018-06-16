/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:23-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_10 11
#define TAG_1_11 4
#define LABEL_1_13 13
#define LABEL_1_14 15
#define TAG_1_15 6
#define LABEL_1_18 17
#define LABEL_1_20 19
#define LABEL_1_24 21
#define LABEL_1_22 23
#define LABEL_1_26 25
#define ENVIRONMENT_LABEL_1_3 50
#define DEBUGGING_LABEL_1_2 49
#define OBJECT_1_1 48
#define OBJECT_1_0 47
#define EXECUTE_CACHE_1_27 27
#define EXECUTE_CACHE_1_25 29
#define EXECUTE_CACHE_1_23 31
#define EXECUTE_CACHE_1_21 33
#define EXECUTE_CACHE_1_19 35
#define EXECUTE_CACHE_1_17 37
#define EXECUTE_CACHE_1_16 39
#define EXECUTE_CACHE_1_12 41
#define EXECUTE_CACHE_1_9 43
#define EXECUTE_CACHE_1_6 45
#define FREE_REFERENCES_LABEL_1_0 26
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_1_4);
      goto read_package_model_15;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_13;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto lambda_19;

    case 5:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_1_14);
      goto lambda_20;

    case 7:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_package_model_18)
DEFLABEL (read_package_model_15)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_10])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_1_10);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_14])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd17.pObj) [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd10.Obj);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_1_14);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_22);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_24);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_22)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_22;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_6 5
#define LABEL_2_4 7
#define LABEL_2_8 9
#define LABEL_2_7 11
#define LABEL_2_14 13
#define LABEL_2_12 15
#define LABEL_2_15 17
#define LABEL_2_16 19
#define LABEL_2_18 21
#define LABEL_2_19 23
#define TAG_2_20 10
#define LABEL_2_24 25
#define LABEL_2_22 27
#define LABEL_2_27 29
#define ENVIRONMENT_LABEL_2_3 59
#define DEBUGGING_LABEL_2_2 58
#define OBJECT_2_6 57
#define OBJECT_2_5 56
#define OBJECT_2_4 55
#define OBJECT_2_3 54
#define OBJECT_2_2 53
#define OBJECT_2_1 52
#define OBJECT_2_0 51
#define EXECUTE_CACHE_2_28 31
#define EXECUTE_CACHE_2_26 33
#define EXECUTE_CACHE_2_25 35
#define EXECUTE_CACHE_2_23 37
#define EXECUTE_CACHE_2_21 39
#define EXECUTE_CACHE_2_17 41
#define EXECUTE_CACHE_2_13 43
#define EXECUTE_CACHE_2_11 45
#define EXECUTE_CACHE_2_10 47
#define EXECUTE_CACHE_2_9 49
#define FREE_REFERENCES_LABEL_2_0 30
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd47;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd42;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_2_4);
      goto find_global_definitions_22;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_2_15);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_2_19);
      goto lambda_28;

    case 11:
      current_block = (Rpc - LABEL_2_24);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_2_27);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_global_definitions_27)
DEFLABEL (find_global_definitions_22)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_2_0]);
  (Wrd42.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd42.Lng))))
    goto label_53;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd39.Obj));
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd16.Obj) == (Wrd18.Obj))
    goto label_52;

DEFLABEL (label_51)
  (Wrd19.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng)))
    goto label_29;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_29)
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd23.Obj) == (Wrd25.Obj))
    goto label_31;
  (Wrd21.Obj) = (current_block [OBJECT_2_4]);
  goto label_30;

DEFLABEL (label_31)
  (Wrd21.Obj) = (current_block [OBJECT_2_3]);

DEFLABEL (label_30)
DEFLABEL (label_50)
  Rsp = (& (Rsp [3]));
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;

DEFLABEL (label_47)
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_2_0]);
  (Wrd42.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd42.Lng))))
    goto label_45;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd39.Obj));
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd11.Obj) == (Wrd13.Obj))
    goto label_44;

DEFLABEL (label_43)
  (Wrd14.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd24.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd24.Lng)))
    goto label_32;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_32)
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_34;
  (Wrd16.Obj) = (current_block [OBJECT_2_4]);
  goto label_33;

DEFLABEL (label_34)
  (Wrd16.Obj) = (current_block [OBJECT_2_3]);

DEFLABEL (label_33)
DEFLABEL (label_42)
  Rsp = (& (Rsp [3]));
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;

DEFLABEL (label_40)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_19])));
  Rhp += 1;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  Wrd36 = Wrd35;
  (Wrd37.Obj) = (Rsp [1]);
  ((Wrd36.pObj) [2]) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_2_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;

DEFLABEL (label_37)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_35;

DEFLABEL (label_36)
  (Wrd25.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_35)
DEFLABEL (label_39)
  (Wrd9.Obj) = (Rsp [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_2_27);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_36;

DEFLABEL (label_44)
  Rsp = (& (Rsp [2]));
  goto label_40;

DEFLABEL (label_45)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (label_48)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 30)
    goto label_49;
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd31.Obj);
  goto label_46;

DEFLABEL (label_52)
  Rsp = (& (Rsp [2]));
  goto label_47;

DEFLABEL (label_53)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_52;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_40;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_47;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_2_19);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_8 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_12 13
#define LABEL_3_14 15
#define LABEL_3_18 17
#define LABEL_3_23 19
#define LABEL_3_7 21
#define LABEL_3_26 23
#define TAG_3_27 10
#define LABEL_3_24 25
#define LABEL_3_20 27
#define TAG_3_21 12
#define LABEL_3_22 29
#define LABEL_3_16 31
#define LABEL_3_17 33
#define LABEL_3_13 35
#define LABEL_3_30 37
#define LABEL_3_31 39
#define LABEL_3_11 41
#define LABEL_3_32 43
#define LABEL_3_33 45
#define LABEL_3_28 47
#define LABEL_3_34 49
#define LABEL_3_36 51
#define LABEL_3_37 53
#define LABEL_3_38 55
#define LABEL_3_39 57
#define TAG_3_40 27
#define ENVIRONMENT_LABEL_3_3 78
#define DEBUGGING_LABEL_3_2 77
#define OBJECT_3_7 76
#define OBJECT_3_6 75
#define OBJECT_3_5 74
#define OBJECT_3_4 73
#define OBJECT_3_3 72
#define OBJECT_3_2 71
#define OBJECT_3_1 70
#define OBJECT_3_0 69
#define EXECUTE_CACHE_3_35 59
#define EXECUTE_CACHE_3_29 61
#define EXECUTE_CACHE_3_25 63
#define EXECUTE_CACHE_3_19 65
#define EXECUTE_CACHE_3_15 67
#define FREE_REFERENCES_LABEL_3_0 58
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd94;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd116;
  machine_word Wrd123;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd110;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd158;
  machine_word Wrd144;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd131;
  machine_word Wrd126;
  machine_word Wrd124;
  machine_word Wrd165;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd152;
  machine_word Wrd147;
  machine_word Wrd145;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
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
      goto sort_descriptions_43;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_58;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto label_45;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto label_46;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto label_47;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto label_51;

    case 6:
      current_block = (Rpc - LABEL_3_14);
      goto label_50;

    case 7:
      current_block = (Rpc - LABEL_3_18);
      goto label_49;

    case 8:
      current_block = (Rpc - LABEL_3_23);
      goto label_48;

    case 9:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_41;

    case 10:
      current_block = (Rpc - LABEL_3_26);
      goto lambda_60;

    case 11:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_3_20);
      goto lambda_59;

    case 13:
      current_block = (Rpc - LABEL_3_22);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_20;

    case 17:
      current_block = (Rpc - LABEL_3_30);
      goto label_52;

    case 18:
      current_block = (Rpc - LABEL_3_31);
      goto label_53;

    case 19:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_26;

    case 20:
      current_block = (Rpc - LABEL_3_32);
      goto label_54;

    case 21:
      current_block = (Rpc - LABEL_3_33);
      goto label_55;

    case 22:
      current_block = (Rpc - LABEL_3_28);
      goto lambda_40;

    case 23:
      current_block = (Rpc - LABEL_3_34);
      goto continuation_34;

    case 24:
      current_block = (Rpc - LABEL_3_36);
      goto continuation_35;

    case 25:
      current_block = (Rpc - LABEL_3_37);
      goto continuation_36;

    case 26:
      current_block = (Rpc - LABEL_3_38);
      goto continuation_37;

    case 27:
      current_block = (Rpc - LABEL_3_39);
      goto lambda_62;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sort_descriptions_57)
DEFLABEL (sort_descriptions_43)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  ((Wrd6.pObj) [0]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_63;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_26])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd16 = Wrd9;
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_63)
  if (! ((Wrd6.uLng) == 1))
    goto label_81;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_80)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_79;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_78)
  Rdl = (& (Rsp [8]));
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_77;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_76)
  (Wrd50.Obj) = (Rsp [0]);
  if ((Wrd50.Obj) == (current_block [OBJECT_3_3]))
    goto label_74;
  if ((Wrd50.Obj) == (current_block [OBJECT_3_4]))
    goto label_70;
  if ((Wrd50.Obj) == (current_block [OBJECT_3_5]))
    goto label_67;
  if ((Wrd50.Obj) == (current_block [OBJECT_3_6]))
    goto label_64;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd64.Obj) = (current_block [OBJECT_3_7]);
  (* (--Rsp)) = (Wrd64.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_24);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [6]));
    SCHEME_OBJECT * MFUp2 = Rdl;
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (label_64)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd66.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_20])));
  Rhp += 2;
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd66.pObj)));
  Wrd69 = Wrd66;
  (Wrd70.Obj) = (Rsp [3]);
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [2]);
  ((Wrd69.pObj) [2]) = (Wrd72.Obj);
  (Wrd68.Obj) = (Rsp [2]);
  ((Wrd69.pObj) [3]) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd78.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd85.Obj) = (Rsp [8]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 1))
    goto label_66;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [1]);
  (* (--Rsp)) = (Wrd84.Obj);

DEFLABEL (label_65)
  (Wrd95.Obj) = (Rsp [11]);
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd97.Obj) = ((Wrd96.pObj) [2]);
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (* (--Rsp)) = (Wrd99.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_3_22);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_48)
  (Wrd87.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd87.Obj));
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_67)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd105.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd114.Obj) = (Rsp [6]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_69;
  (Wrd112.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd113.Obj) = ((Wrd112.pObj) [1]);
  (* (--Rsp)) = (Wrd113.Obj);

DEFLABEL (label_68)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_3_17);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_16);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [8]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [6]));
    SCHEME_OBJECT * MFUp2 = Rdl;
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_49)
  (Wrd116.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd116.Obj));
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_70)
  (Wrd124.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (Wrd135.Obj) = (Rsp [5]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if (! ((Wrd136.uLng) == 1))
    goto label_72;
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd135.Obj));
  (Wrd134.Obj) = ((Wrd133.pObj) [1]);
  (* (--Rsp)) = (Wrd134.Obj);

DEFLABEL (label_71)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd126.Obj);
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_50)
DEFLABEL (label_73)
  (Wrd158.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd158.Obj));
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd145.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd145.Obj);
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd152.Obj);
  (Wrd156.Obj) = (Rsp [5]);
  (Wrd157.uLng) = (OBJECT_TYPE (Wrd156.Obj));
  if (! ((Wrd157.uLng) == 1))
    goto label_75;
  (Wrd154.pObj) = (OBJECT_ADDRESS (Wrd156.Obj));
  (Wrd155.Obj) = ((Wrd154.pObj) [1]);
  (* (--Rsp)) = (Wrd155.Obj);
  goto label_71;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd147.Obj);
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_51)
  goto label_73;

DEFLABEL (label_77)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_47)
  (Wrd42.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd42.Obj));
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_87;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_86;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_85)
  (Wrd27.Obj) = (Rsp [9]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd22.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd22.Obj));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_84)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_83;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_82)
  (Wrd44.Obj) = (Rsp [8]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [8]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [2]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (* (--Rsp)) = (Wrd51.Obj);
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [6]));
    SCHEME_OBJECT * MFUp2 = Rdl;
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (label_83)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_53)
  (Wrd33.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd28.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_86)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_52)
  (Wrd14.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd9.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_87)
  (Wrd54.Obj) = (Rsp [9]);
  (Wrd52.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd52.Obj));
  (* (--Rsp)) = (Wrd54.Obj);
  goto label_84;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_93;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_92;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_91)
  (Wrd27.Obj) = (Rsp [9]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd22.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd22.Obj));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_90)
  (Wrd28.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_89;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_88)
  (Wrd45.Obj) = (Rsp [8]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd46.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [8]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [2]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (* (--Rsp)) = (Wrd51.Obj);
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [6]));
    SCHEME_OBJECT * MFUp2 = Rdl;
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (label_89)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_55)
  (Wrd34.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd29.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_92)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_54)
  (Wrd14.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd9.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_93)
  (Wrd54.Obj) = (Rsp [9]);
  (Wrd52.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd52.Obj));
  (* (--Rsp)) = (Wrd54.Obj);
  goto label_90;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_3_26);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [3]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (lambda_59)
  CLOSURE_HEADER (LABEL_3_20);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (lambda_61)
DEFLABEL (lambda_40)
  INTERRUPT_CHECK (26, LABEL_3_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_35]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_3_34);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_36]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_35]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_3_36);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_37]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_35]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_3_37);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_38]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_35]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_3_38);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_39])));
  Rhp += 4;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd15 = Wrd8;
  ((Wrd15.pObj) [2]) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_3_39);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [3]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define ENVIRONMENT_LABEL_4_3 16
#define DEBUGGING_LABEL_4_2 15
#define OBJECT_4_4 14
#define OBJECT_4_3 13
#define OBJECT_4_2 12
#define OBJECT_4_1 11
#define OBJECT_4_0 10
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_4_4);
      goto interesting_package_to_loadP_5;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interesting_package_to_loadP_11)
DEFLABEL (interesting_package_to_loadP_5)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_19)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_13;
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_18;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd30.Lng))))
    goto label_18;
  (Wrd22.Obj) = ((Wrd28.pObj) [5]);

DEFLABEL (label_17)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd38.uLng) == 1)
    goto label_13;
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_16;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd47.Lng))))
    goto label_16;
  (Wrd39.Obj) = ((Wrd45.pObj) [6]);

DEFLABEL (label_15)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_4_4]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.Obj) = (current_block [OBJECT_4_3]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_9)
  (Wrd39.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (current_block [OBJECT_4_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_8)
  (Wrd22.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_7 7
#define LABEL_5_9 9
#define LABEL_5_10 11
#define TAG_5_11 4
#define LABEL_5_13 13
#define LABEL_5_14 15
#define LABEL_5_15 17
#define LABEL_5_16 19
#define LABEL_5_17 21
#define ENVIRONMENT_LABEL_5_3 35
#define DEBUGGING_LABEL_5_2 34
#define OBJECT_5_4 33
#define OBJECT_5_3 32
#define OBJECT_5_2 31
#define OBJECT_5_1 30
#define OBJECT_5_0 29
#define EXECUTE_CACHE_5_18 23
#define EXECUTE_CACHE_5_12 25
#define EXECUTE_CACHE_5_8 27
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      goto read_file_analysesB_9;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_18;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto lambda_19;

    case 5:
      current_block = (Rpc - LABEL_5_13);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_5_14);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_5_15);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_5_16);
      goto label_14;

    case 9:
      current_block = (Rpc - LABEL_5_17);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_file_analysesB_17)
DEFLABEL (read_file_analysesB_9)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_10])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_9);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_5_10);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_29;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_28)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_27;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_26)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_25;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd32.Lng))))
    goto label_25;
  (Wrd26.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_24)
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_23;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_22)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_21;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd54.Lng))))
    goto label_21;
  (Wrd48.Obj) = ((Wrd52.pObj) [3]);

DEFLABEL (label_20)
  (Rsp [3]) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (label_21)
  (Wrd57.Obj) = (current_block [OBJECT_5_4]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 2);

DEFLABEL (label_15)
  (Wrd48.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_14)
  (Wrd39.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd35.Obj) = (current_block [OBJECT_5_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 2);

DEFLABEL (label_13)
  (Wrd26.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_12)
  (Wrd17.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 5
#define DEBUGGING_LABEL_6_2 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto make_analysis_cache_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_analysis_cache_3)
DEFLABEL (make_analysis_cache_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
redpkg_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto analysis_cache_pathname_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analysis_cache_pathname_3)
DEFLABEL (analysis_cache_pathname_0)
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
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
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
redpkg_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto analysis_cache_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analysis_cache_time_3)
DEFLABEL (analysis_cache_time_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
redpkg_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto analysis_cache_data_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analysis_cache_data_3)
DEFLABEL (analysis_cache_data_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 8
#define DEBUGGING_LABEL_10_2 7
#define OBJECT_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto set_analysis_cache_timeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_analysis_cache_timeB_3)
DEFLABEL (set_analysis_cache_timeB_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_10_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 8
#define DEBUGGING_LABEL_11_2 7
#define OBJECT_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto set_analysis_cache_dataB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_analysis_cache_dataB_3)
DEFLABEL (set_analysis_cache_dataB_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_11_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_7 5
#define LABEL_12_5 7
#define LABEL_12_6 9
#define LABEL_12_14 11
#define LABEL_12_9 13
#define LABEL_12_15 15
#define LABEL_12_16 17
#define LABEL_12_20 19
#define LABEL_12_11 21
#define LABEL_12_10 23
#define LABEL_12_24 25
#define LABEL_12_17 27
#define TAG_12_18 12
#define LABEL_12_19 29
#define LABEL_12_23 31
#define LABEL_12_27 33
#define LABEL_12_28 35
#define LABEL_12_26 37
#define LABEL_12_29 39
#define TAG_12_30 18
#define LABEL_12_35 41
#define LABEL_12_33 43
#define TAG_12_34 20
#define LABEL_12_36 45
#define ENVIRONMENT_LABEL_12_3 77
#define DEBUGGING_LABEL_12_2 76
#define OBJECT_12_8 75
#define OBJECT_12_7 74
#define OBJECT_12_6 73
#define OBJECT_12_5 72
#define OBJECT_12_4 71
#define OBJECT_12_3 70
#define OBJECT_12_2 69
#define OBJECT_12_1 68
#define OBJECT_12_0 67
#define EXECUTE_CACHE_12_37 47
#define EXECUTE_CACHE_12_32 49
#define EXECUTE_CACHE_12_31 51
#define EXECUTE_CACHE_12_25 53
#define EXECUTE_CACHE_12_22 55
#define EXECUTE_CACHE_12_21 57
#define EXECUTE_CACHE_12_13 59
#define EXECUTE_CACHE_12_12 61
#define EXECUTE_CACHE_12_8 63
#define FREE_REFERENCE_12_0 66
#define FREE_REFERENCES_LABEL_12_0 46
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd10;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd9;
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
      goto cache_file_analysesB_26;

    case 1:
      current_block = (Rpc - LABEL_12_7);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_12_14);
      goto continuation_20;

    case 5:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_12_15);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_12_16);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_12_20);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_12_24);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_12_17);
      goto lambda_37;

    case 13:
      current_block = (Rpc - LABEL_12_19);
      goto continuation_19;

    case 14:
      current_block = (Rpc - LABEL_12_23);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_12_27);
      goto label_33;

    case 16:
      current_block = (Rpc - LABEL_12_28);
      goto lambda_11;

    case 17:
      current_block = (Rpc - LABEL_12_26);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_12_29);
      goto lambda_39;

    case 19:
      current_block = (Rpc - LABEL_12_35);
      goto label_34;

    case 20:
      current_block = (Rpc - LABEL_12_33);
      goto lambda_40;

    case 21:
      current_block = (Rpc - LABEL_12_36);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cache_file_analysesB_36)
DEFLABEL (cache_file_analysesB_26)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd9.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_48;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd26.Lng))))
    goto label_48;
  (Wrd20.Obj) = ((Wrd24.pObj) [7]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd29.Obj) = (current_block [OBJECT_12_5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_10);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_45)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_44;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_44;
  (Wrd13.Obj) = ((Wrd17.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_43)
  goto lambda_11;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_12_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [7]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_42;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_42;
  (Wrd13.Obj) = ((Wrd17.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_41)
  goto lambda_11;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_12_26);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_32]));

DEFLABEL (label_42)
  (Wrd22.Obj) = (Rsp [7]);
  (Wrd23.Obj) = (current_block [OBJECT_12_7]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_27]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.Obj) = (current_block [OBJECT_12_6]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_24]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd32.Obj) = (current_block [OBJECT_12_0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  goto label_45;

DEFLABEL (label_48)
  (Wrd29.Obj) = (Rsp [5]);
  (Wrd30.Obj) = (current_block [OBJECT_12_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (* (--Rsp)) = Rvl;
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_55;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;

DEFLABEL (label_54)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_12_5]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_53;
  Wrd36 = Wrd40;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_21]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_12_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_25]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_12_14);

DEFLABEL (label_51)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_50;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_49)
  (Rsp [4]) = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_17])));
  Rhp += 2;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd24 = Wrd21;
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  Rvl = (Wrd20.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 1);

DEFLABEL (label_29)
  (Wrd10.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_20])), (Wrd37.pObj));

DEFLABEL (label_30)
  (Wrd36.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 1);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_54;

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_12_17);

DEFLABEL (lambda_22)
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

DEFLABEL (lambda_38)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_12_28);
  (Wrd5.Obj) = (Rsp [0]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_29])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd17 = Wrd8;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Wrd16.Obj) = ((Wrd19.pObj) [3]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd19.pObj) [0]);
  ((Wrd17.pObj) [4]) = (Wrd12.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_31]));

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_12_29);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_33])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd20.pObj) [4]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [5]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_57;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd30.Lng))))
    goto label_57;
  (Wrd22.Obj) = ((Wrd28.pObj) [3]);

DEFLABEL (label_56)
  (Rsp [1]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_21]));

DEFLABEL (label_57)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (current_block [OBJECT_12_8]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_35]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 2);

DEFLABEL (label_34)
  (Wrd22.Obj) = Rvl;
  goto label_56;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_12_33);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_37]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_36);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_6 5
#define LABEL_13_5 7
#define LABEL_13_7 9
#define LABEL_13_9 11
#define LABEL_13_14 13
#define LABEL_13_15 15
#define LABEL_13_16 17
#define LABEL_13_17 19
#define LABEL_13_18 21
#define LABEL_13_12 23
#define LABEL_13_20 25
#define LABEL_13_22 27
#define LABEL_13_23 29
#define LABEL_13_21 31
#define ENVIRONMENT_LABEL_13_3 58
#define DEBUGGING_LABEL_13_2 57
#define OBJECT_13_9 56
#define OBJECT_13_8 55
#define OBJECT_13_7 54
#define OBJECT_13_6 53
#define OBJECT_13_5 52
#define OBJECT_13_4 51
#define OBJECT_13_3 50
#define OBJECT_13_2 49
#define OBJECT_13_1 48
#define OBJECT_13_0 47
#define EXECUTE_CACHE_13_25 33
#define EXECUTE_CACHE_13_24 35
#define EXECUTE_CACHE_13_19 37
#define EXECUTE_CACHE_13_13 39
#define EXECUTE_CACHE_13_11 41
#define EXECUTE_CACHE_13_10 43
#define EXECUTE_CACHE_13_8 45
#define FREE_REFERENCES_LABEL_13_0 32
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd76;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd106;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd63;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_13_4);
      goto cache_file_analysisB_16;

    case 1:
      current_block = (Rpc - LABEL_13_6);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_13_14);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_13_15);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_13_16);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_13_17);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_13_18);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_13_20);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_13_22);
      goto label_19;

    case 13:
      current_block = (Rpc - LABEL_13_23);
      goto label_20;

    case 14:
      current_block = (Rpc - LABEL_13_21);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cache_file_analysisB_26)
DEFLABEL (cache_file_analysisB_16)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_38;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_38;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_37)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_12);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_13_8]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_14);

DEFLABEL (label_36)
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_32;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_32;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_31)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_30;
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_30;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd41.Lng) > (Wrd42.Lng))
    goto label_28;

DEFLABEL (label_27)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_29)
  (Wrd47.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_24]));

DEFLABEL (label_30)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_23]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_28;

DEFLABEL (label_32)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_13_5]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_9]), 2);

DEFLABEL (label_19)
  (Wrd9.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd51.Obj) = (Rsp [6]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_35;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = (current_block [OBJECT_13_6]);
  ((Wrd49.pObj) [0]) = (Wrd50.Obj);

DEFLABEL (label_34)
  (Wrd43.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd43.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd46.Obj);
  goto label_29;

DEFLABEL (label_35)
  (Wrd54.Obj) = (current_block [OBJECT_13_6]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_7]), 2);

DEFLABEL (label_21)
  goto label_34;

DEFLABEL (label_38)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_13_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13_15);
  (Wrd63.Obj) = Rvl;
  (Wrd99.Obj) = (Rsp [1]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 10))
    goto label_43;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd97.Obj) = ((Wrd96.pObj) [0]);
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd97.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd98.Lng))))
    goto label_43;
  ((Wrd96.pObj) [3]) = Rvl;

DEFLABEL (label_42)
  (Wrd83.Obj) = (Rsp [1]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 10))
    goto label_41;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd82.Lng))))
    goto label_41;
  (Wrd76.Obj) = (Rsp [0]);
  ((Wrd80.pObj) [2]) = (Wrd76.Obj);

DEFLABEL (label_40)
  (Wrd67.Obj) = (Rsp [6]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_39;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd66.Obj) = (current_block [OBJECT_13_6]);
  ((Wrd65.pObj) [0]) = (Wrd66.Obj);
  goto label_27;

DEFLABEL (label_39)
  (Wrd70.Obj) = (current_block [OBJECT_13_6]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_7]), 2);

DEFLABEL (label_22)
  goto label_27;

DEFLABEL (label_41)
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.Obj) = (current_block [OBJECT_13_5]);
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 3);

DEFLABEL (label_23)
  goto label_40;

DEFLABEL (label_43)
  (Wrd101.Obj) = (Rsp [1]);
  (Wrd102.Obj) = (current_block [OBJECT_13_3]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 3);

DEFLABEL (label_24)
  goto label_42;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_21);
  (Rsp [6]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_25]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_8 9
#define LABEL_14_6 11
#define LABEL_14_10 13
#define ENVIRONMENT_LABEL_14_3 23
#define DEBUGGING_LABEL_14_2 22
#define OBJECT_14_4 21
#define OBJECT_14_3 20
#define OBJECT_14_2 19
#define OBJECT_14_1 18
#define OBJECT_14_0 17
#define EXECUTE_CACHE_14_9 15
#define FREE_REFERENCES_LABEL_14_0 14
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd9;
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
      goto analysis_cache_lookup_8;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_14_10);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analysis_cache_lookup_14)
DEFLABEL (analysis_cache_lookup_8)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (loop_15)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_14_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_14_0])))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_24;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_23)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_22;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd25.Lng))))
    goto label_22;
  (Wrd20.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_21)
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_17;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_18)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_20;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd15.Obj);
  goto loop_6;

DEFLABEL (label_20)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 1);

DEFLABEL (label_12)
  (Wrd15.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd28.Obj) = (current_block [OBJECT_14_2]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_10)
  (Wrd10.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define LABEL_15_9 11
#define TAG_15_10 4
#define LABEL_15_13 13
#define LABEL_15_12 15
#define LABEL_15_15 17
#define LABEL_15_19 19
#define LABEL_15_16 21
#define LABEL_15_22 23
#define LABEL_15_17 25
#define TAG_15_18 11
#define LABEL_15_23 27
#define LABEL_15_24 29
#define LABEL_15_29 31
#define LABEL_15_27 33
#define LABEL_15_32 35
#define LABEL_15_36 37
#define LABEL_15_34 39
#define ENVIRONMENT_LABEL_15_3 83
#define DEBUGGING_LABEL_15_2 82
#define OBJECT_15_12 81
#define OBJECT_15_11 80
#define OBJECT_15_10 79
#define OBJECT_15_9 78
#define OBJECT_15_8 77
#define OBJECT_15_7 76
#define OBJECT_15_6 75
#define OBJECT_15_5 74
#define OBJECT_15_4 73
#define OBJECT_15_3 72
#define OBJECT_15_2 71
#define OBJECT_15_1 70
#define OBJECT_15_0 69
#define EXECUTE_CACHE_15_38 41
#define EXECUTE_CACHE_15_37 43
#define EXECUTE_CACHE_15_35 45
#define EXECUTE_CACHE_15_33 47
#define EXECUTE_CACHE_15_31 49
#define EXECUTE_CACHE_15_30 51
#define EXECUTE_CACHE_15_28 53
#define EXECUTE_CACHE_15_26 55
#define EXECUTE_CACHE_15_25 57
#define EXECUTE_CACHE_15_21 59
#define EXECUTE_CACHE_15_20 61
#define EXECUTE_CACHE_15_14 63
#define EXECUTE_CACHE_15_11 65
#define EXECUTE_CACHE_15_8 67
#define FREE_REFERENCES_LABEL_15_0 40
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_15_4);
      goto record_file_analysisB_22;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto lambda_32;

    case 5:
      current_block = (Rpc - LABEL_15_13);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_15_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_15_15);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_15_19);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_15_16);
      goto continuation_18;

    case 10:
      current_block = (Rpc - LABEL_15_22);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_15_17);
      goto lambda_33;

    case 12:
      current_block = (Rpc - LABEL_15_23);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_15_24);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_15_29);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_15_27);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_15_32);
      goto continuation_13;

    case 17:
      current_block = (Rpc - LABEL_15_36);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_15_34);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_file_analysisB_31)
DEFLABEL (record_file_analysisB_22)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_36)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_35;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_35;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_34)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_9])));
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
  Rsp = (& (Rsp [3]));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (label_35)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_15_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_15_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_15_9);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_44;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_44;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_43)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15_12);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_42;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_42;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_41)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_17])));
  Rhp += 4;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd36 = Wrd25;
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [2]);
  ((Wrd36.pObj) [2]) = (Wrd39.Obj);
  (Wrd35.Obj) = ((Wrd38.pObj) [3]);
  ((Wrd36.pObj) [3]) = (Wrd35.Obj);
  (Wrd31.Obj) = ((Wrd38.pObj) [4]);
  ((Wrd36.pObj) [4]) = (Wrd31.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd36.pObj) [5]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd49.Obj) = (Rsp [5]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_40;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd48.Lng))))
    goto label_40;
  (Wrd42.Obj) = ((Wrd46.pObj) [3]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_20]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_15_16);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd7.Obj) = (current_block [OBJECT_15_6]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_21]));

DEFLABEL (label_38)
  Rvl = (current_block [OBJECT_15_5]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd51.Obj) = (Rsp [5]);
  (Wrd52.Obj) = (current_block [OBJECT_15_0]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_15_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_15_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_15_17);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_15_7]);
  (Wrd40.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd40.Lng))))
    goto label_56;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd37.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_55;

DEFLABEL (label_54)
  (Wrd13.Obj) = (current_block [OBJECT_15_9]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_45;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_8]), 2);

DEFLABEL (label_45)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_47;
  (Wrd15.Obj) = (current_block [OBJECT_15_10]);
  goto label_46;

DEFLABEL (label_47)
  (Wrd15.Obj) = (current_block [OBJECT_15_6]);

DEFLABEL (label_46)
DEFLABEL (label_53)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;

DEFLABEL (label_48)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = ((Wrd30.pObj) [5]);
  (Wrd35.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd35.Obj);
  (Rsp [2]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_26]));

DEFLABEL (label_49)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_24]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd8.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_29]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_30]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_15_29);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_26]));

DEFLABEL (label_50)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_27]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_28]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_15_27);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_51;
  (Wrd11.Obj) = (current_block [OBJECT_15_11]);
  (Rsp [0]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_31]));

DEFLABEL (label_51)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_33]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_15_32);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_36]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_37]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_15_36);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_15_12]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_38]));

DEFLABEL (label_52)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_34]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_35]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_15_34);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_26]));

DEFLABEL (label_55)
  Rsp = (& (Rsp [2]));
  goto label_48;

DEFLABEL (label_56)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_8]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_55;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_48;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_6 5
#define LABEL_16_5 7
#define LABEL_16_8 9
#define LABEL_16_9 11
#define ENVIRONMENT_LABEL_16_3 21
#define DEBUGGING_LABEL_16_2 20
#define OBJECT_16_2 19
#define OBJECT_16_1 18
#define OBJECT_16_0 17
#define EXECUTE_CACHE_16_7 13
#define FREE_REFERENCE_16_0 16
#define FREE_REFERENCES_LABEL_16_0 12
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto resolve_referencesB_3;

    case 1:
      current_block = (Rpc - LABEL_16_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (resolve_referencesB_9)
DEFLABEL (resolve_referencesB_3)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_12;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (label_12)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_16_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_5)
  (Wrd7.Obj) = Rvl;
  goto label_11;

DEFLABEL (lambda_10)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_16_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_14;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd19.Lng))))
    goto label_14;
  (Wrd11.Obj) = ((Wrd17.pObj) [7]);

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (label_14)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_16_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_8])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_6 5
#define LABEL_17_7 7
#define LABEL_17_5 9
#define LABEL_17_9 11
#define LABEL_17_10 13
#define ENVIRONMENT_LABEL_17_3 25
#define DEBUGGING_LABEL_17_2 24
#define OBJECT_17_6 23
#define OBJECT_17_5 22
#define OBJECT_17_4 21
#define OBJECT_17_3 20
#define OBJECT_17_2 19
#define OBJECT_17_1 18
#define OBJECT_17_0 17
#define EXECUTE_CACHE_17_8 15
#define FREE_REFERENCES_LABEL_17_0 14
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd8;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
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
      current_block = (Rpc - LABEL_17_4);
      goto resolve_referenceB_7;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_17_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_17_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (resolve_referenceB_14)
DEFLABEL (resolve_referenceB_7)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_25;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_25;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_24)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_23;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_23;
  (Wrd26.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rvl = (current_block [OBJECT_17_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_21;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd50.Lng))))
    goto label_21;
  ((Wrd48.pObj) [5]) = Rvl;

DEFLABEL (label_20)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_19;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_19;
  (Wrd8.Obj) = ((Wrd14.pObj) [6]);

DEFLABEL (label_18)
  (Wrd27.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_17_6]);
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 62)
    goto label_17;

DEFLABEL (label_16)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_5]), 3);

DEFLABEL (label_17)
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd39.Lng))))
    goto label_16;
  ((Wrd37.pObj) [6]) = (Wrd24.Obj);
  Rvl = (current_block [OBJECT_17_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_17_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (current_block [OBJECT_17_4]);
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_5]), 3);

DEFLABEL (label_12)
  goto label_20;

DEFLABEL (label_23)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_17_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_17_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define ENVIRONMENT_LABEL_18_3 17
#define DEBUGGING_LABEL_18_2 16
#define OBJECT_18_0 15
#define EXECUTE_CACHE_18_9 9
#define EXECUTE_CACHE_18_8 11
#define EXECUTE_CACHE_18_7 13
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_18_4);
      goto read_and_parse_model_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_and_parse_model_5)
DEFLABEL (read_and_parse_model_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define TAG_19_6 1
#define ENVIRONMENT_LABEL_19_3 12
#define DEBUGGING_LABEL_19_2 11
#define EXECUTE_CACHE_19_8 7
#define EXECUTE_CACHE_19_7 9
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_19_4);
      goto parse_package_expressions_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_package_expressions_4)
DEFLABEL (parse_package_expressions_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_19_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_5 3
#define LABEL_20_6 5
#define LABEL_20_7 7
#define LABEL_20_8 9
#define LABEL_20_10 11
#define LABEL_20_11 13
#define LABEL_20_13 15
#define LABEL_20_14 17
#define LABEL_20_16 19
#define LABEL_20_17 21
#define LABEL_20_19 23
#define LABEL_20_20 25
#define LABEL_20_22 27
#define LABEL_20_27 29
#define LABEL_20_29 31
#define LABEL_20_31 33
#define LABEL_20_4 35
#define LABEL_20_34 37
#define LABEL_20_35 39
#define LABEL_20_36 41
#define LABEL_20_38 43
#define LABEL_20_32 45
#define LABEL_20_28 47
#define LABEL_20_40 49
#define LABEL_20_30 51
#define LABEL_20_44 53
#define LABEL_20_45 55
#define LABEL_20_47 57
#define LABEL_20_26 59
#define LABEL_20_49 61
#define LABEL_20_50 63
#define LABEL_20_23 65
#define LABEL_20_24 67
#define LABEL_20_51 69
#define LABEL_20_15 71
#define LABEL_20_18 73
#define LABEL_20_9 75
#define LABEL_20_12 77
#define LABEL_20_41 79
#define TAG_20_42 38
#define LABEL_20_56 81
#define LABEL_20_57 83
#define LABEL_20_58 85
#define LABEL_20_59 87
#define LABEL_20_48 89
#define LABEL_20_60 91
#define LABEL_20_61 93
#define LABEL_20_62 95
#define LABEL_20_54 97
#define LABEL_20_64 99
#define LABEL_20_65 101
#define LABEL_20_66 103
#define LABEL_20_67 105
#define LABEL_20_68 107
#define LABEL_20_69 109
#define LABEL_20_70 111
#define LABEL_20_72 113
#define LABEL_20_73 115
#define LABEL_20_46 117
#define ENVIRONMENT_LABEL_20_3 164
#define DEBUGGING_LABEL_20_2 163
#define OBJECT_20_16 162
#define OBJECT_20_15 161
#define OBJECT_20_14 160
#define OBJECT_20_13 159
#define OBJECT_20_12 158
#define OBJECT_20_11 157
#define OBJECT_20_10 156
#define OBJECT_20_9 155
#define OBJECT_20_8 154
#define OBJECT_20_7 153
#define OBJECT_20_6 152
#define OBJECT_20_5 151
#define OBJECT_20_4 150
#define OBJECT_20_3 149
#define OBJECT_20_2 148
#define OBJECT_20_1 147
#define OBJECT_20_0 146
#define EXECUTE_CACHE_20_74 119
#define EXECUTE_CACHE_20_71 121
#define EXECUTE_CACHE_20_63 123
#define EXECUTE_CACHE_20_55 125
#define EXECUTE_CACHE_20_53 127
#define EXECUTE_CACHE_20_52 129
#define EXECUTE_CACHE_20_43 131
#define EXECUTE_CACHE_20_39 133
#define EXECUTE_CACHE_20_37 135
#define EXECUTE_CACHE_20_33 137
#define EXECUTE_CACHE_20_25 139
#define EXECUTE_CACHE_20_21 141
#define FREE_REFERENCE_20_1 144
#define FREE_REFERENCE_20_0 145
#define FREE_REFERENCES_LABEL_20_0 118
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd30;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd23;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd109;
  machine_word Wrd103;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd121;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd112;
  machine_word Wrd135;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd122;
  machine_word Wrd124;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd174;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd170;
  machine_word Wrd167;
  machine_word Wrd159;
  machine_word Wrd161;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd158;
  machine_word Wrd155;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd140;
  machine_word Wrd142;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd139;
  machine_word Wrd212;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd208;
  machine_word Wrd205;
  machine_word Wrd197;
  machine_word Wrd199;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd196;
  machine_word Wrd193;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd189;
  machine_word Wrd186;
  machine_word Wrd178;
  machine_word Wrd180;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd177;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd68;
  machine_word Wrd67;
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
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto label_78;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto label_87;

    case 5:
      current_block = (Rpc - LABEL_20_11);
      goto label_88;

    case 6:
      current_block = (Rpc - LABEL_20_13);
      goto label_89;

    case 7:
      current_block = (Rpc - LABEL_20_14);
      goto label_90;

    case 8:
      current_block = (Rpc - LABEL_20_16);
      goto label_83;

    case 9:
      current_block = (Rpc - LABEL_20_17);
      goto label_84;

    case 10:
      current_block = (Rpc - LABEL_20_19);
      goto label_85;

    case 11:
      current_block = (Rpc - LABEL_20_20);
      goto label_86;

    case 12:
      current_block = (Rpc - LABEL_20_22);
      goto label_82;

    case 13:
      current_block = (Rpc - LABEL_20_27);
      goto label_81;

    case 14:
      current_block = (Rpc - LABEL_20_29);
      goto label_79;

    case 15:
      current_block = (Rpc - LABEL_20_31);
      goto label_80;

    case 16:
      current_block = (Rpc - LABEL_20_4);
      goto parse_package_expression_73;

    case 17:
      current_block = (Rpc - LABEL_20_34);
      goto label_75;

    case 18:
      current_block = (Rpc - LABEL_20_35);
      goto label_77;

    case 19:
      current_block = (Rpc - LABEL_20_36);
      goto label_76;

    case 20:
      current_block = (Rpc - LABEL_20_38);
      goto lambda_0;

    case 21:
      current_block = (Rpc - LABEL_20_32);
      goto continuation_15;

    case 22:
      current_block = (Rpc - LABEL_20_28);
      goto continuation_17;

    case 23:
      current_block = (Rpc - LABEL_20_40);
      goto continuation_19;

    case 24:
      current_block = (Rpc - LABEL_20_30);
      goto continuation_18;

    case 25:
      current_block = (Rpc - LABEL_20_44);
      goto continuation_35;

    case 26:
      current_block = (Rpc - LABEL_20_45);
      goto continuation_34;

    case 27:
      current_block = (Rpc - LABEL_20_47);
      goto label_93;

    case 28:
      current_block = (Rpc - LABEL_20_26);
      goto continuation_24;

    case 29:
      current_block = (Rpc - LABEL_20_49);
      goto label_91;

    case 30:
      current_block = (Rpc - LABEL_20_50);
      goto continuation_57;

    case 31:
      current_block = (Rpc - LABEL_20_23);
      goto continuation_56;

    case 32:
      current_block = (Rpc - LABEL_20_24);
      goto lambda_55;

    case 33:
      current_block = (Rpc - LABEL_20_51);
      goto label_92;

    case 34:
      current_block = (Rpc - LABEL_20_15);
      goto continuation_64;

    case 35:
      current_block = (Rpc - LABEL_20_18);
      goto continuation_61;

    case 36:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_70;

    case 37:
      current_block = (Rpc - LABEL_20_12);
      goto continuation_67;

    case 38:
      current_block = (Rpc - LABEL_20_41);
      goto lambda_109;

    case 39:
      current_block = (Rpc - LABEL_20_56);
      goto continuation_31;

    case 40:
      current_block = (Rpc - LABEL_20_57);
      goto continuation_29;

    case 41:
      current_block = (Rpc - LABEL_20_58);
      goto label_103;

    case 42:
      current_block = (Rpc - LABEL_20_59);
      goto label_104;

    case 43:
      current_block = (Rpc - LABEL_20_48);
      goto lambda_33;

    case 44:
      current_block = (Rpc - LABEL_20_60);
      goto label_94;

    case 45:
      current_block = (Rpc - LABEL_20_61);
      goto label_96;

    case 46:
      current_block = (Rpc - LABEL_20_62);
      goto label_95;

    case 47:
      current_block = (Rpc - LABEL_20_54);
      goto continuation_20;

    case 48:
      current_block = (Rpc - LABEL_20_64);
      goto continuation_45;

    case 49:
      current_block = (Rpc - LABEL_20_65);
      goto label_105;

    case 50:
      current_block = (Rpc - LABEL_20_66);
      goto loop_49;

    case 51:
      current_block = (Rpc - LABEL_20_67);
      goto label_97;

    case 52:
      current_block = (Rpc - LABEL_20_68);
      goto label_98;

    case 53:
      current_block = (Rpc - LABEL_20_69);
      goto label_101;

    case 54:
      current_block = (Rpc - LABEL_20_70);
      goto label_102;

    case 55:
      current_block = (Rpc - LABEL_20_72);
      goto label_99;

    case 56:
      current_block = (Rpc - LABEL_20_73);
      goto label_100;

    case 57:
      current_block = (Rpc - LABEL_20_46);
      goto continuation_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_package_expression_107)
DEFLABEL (parse_package_expression_73)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_151;

DEFLABEL (label_150)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.pObj) = (& (Rsp [1]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_0;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20_7);

DEFLABEL (label_149)
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_148;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (* (--Rsp)) = (Wrd66.Obj);

DEFLABEL (label_147)
  (Wrd73.Obj) = (Rsp [0]);
  if ((Wrd73.Obj) == (current_block [OBJECT_20_1]))
    goto label_139;
  if ((Wrd73.Obj) == (current_block [OBJECT_20_3]))
    goto label_129;
  if ((Wrd73.Obj) == (current_block [OBJECT_20_4]))
    goto label_124;
  if ((Wrd73.Obj) == (current_block [OBJECT_20_5]))
    goto label_120;
  if ((Wrd73.Obj) == (current_block [OBJECT_20_6]))
    goto label_113;
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_32]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd86.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = (current_block [OBJECT_20_7]);
  (* (--Rsp)) = (Wrd87.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_33]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_20_32);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_28]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd94.Obj) = (Rsp [2]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_119;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [1]);
  (* (--Rsp)) = (Wrd93.Obj);

DEFLABEL (label_118)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_30]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd107.Obj) = ((Wrd104.pObj) [0]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if ((Wrd108.uLng) == 50)
    goto label_117;
  Wrd103 = Wrd107;

DEFLABEL (label_116)
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd109.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd109.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_25]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_20_30);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_115;

DEFLABEL (label_114)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_42);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_41])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [5]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_43]));

DEFLABEL (label_115)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_40]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.pObj) = (& (Rsp [4]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  goto lambda_0;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_20_40);
  goto label_114;

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_31])), (Wrd104.pObj));

DEFLABEL (label_80)
  (Wrd103.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_29]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_118;

DEFLABEL (label_120)
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_26]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (Wrd116.Obj) = (Rsp [2]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 1))
    goto label_122;
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd115.Obj) = ((Wrd114.pObj) [1]);
  (* (--Rsp)) = (Wrd115.Obj);

DEFLABEL (label_121)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_37]));

DEFLABEL (label_122)
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_27]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_81)
DEFLABEL (label_123)
  (* (--Rsp)) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd125.Obj) = (Rsp [1]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd126.uLng) == 1))
    goto label_128;
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd122.Obj) = ((Wrd124.pObj) [1]);

DEFLABEL (label_127)
  (Rsp [0]) = (Wrd122.Obj);
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_23]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_24]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_25]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_20_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_126;

DEFLABEL (label_125)
  (Wrd11.Obj) = (current_block [OBJECT_20_4]);
  (Wrd12.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_126)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_50]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.pObj) = (& (Rsp [2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  goto lambda_0;

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_20_50);
  goto label_125;

DEFLABEL (label_128)
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_22]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_82)
  (Wrd122.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_129)
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd139.Obj);
  (Wrd143.Obj) = (Rsp [2]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if (! ((Wrd144.uLng) == 1))
    goto label_138;
  (Wrd142.pObj) = (OBJECT_ADDRESS (Wrd143.Obj));
  (Wrd140.Obj) = ((Wrd142.pObj) [1]);

DEFLABEL (label_137)
  (Wrd151.uLng) = (OBJECT_TYPE (Wrd140.Obj));
  if (! ((Wrd151.uLng) == 1))
    goto label_136;
  (Wrd149.pObj) = (OBJECT_ADDRESS (Wrd140.Obj));
  (Wrd150.Obj) = ((Wrd149.pObj) [1]);
  (* (--Rsp)) = (Wrd150.Obj);

DEFLABEL (label_135)
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_18]))));
  (* (--Rsp)) = (Wrd158.Obj);
  (Wrd162.Obj) = (Rsp [4]);
  (Wrd163.uLng) = (OBJECT_TYPE (Wrd162.Obj));
  if (! ((Wrd163.uLng) == 1))
    goto label_134;
  (Wrd161.pObj) = (OBJECT_ADDRESS (Wrd162.Obj));
  (Wrd159.Obj) = ((Wrd161.pObj) [1]);

DEFLABEL (label_133)
  (Wrd170.uLng) = (OBJECT_TYPE (Wrd159.Obj));
  if (! ((Wrd170.uLng) == 1))
    goto label_131;
  (Wrd168.pObj) = (OBJECT_ADDRESS (Wrd159.Obj));
  (Wrd169.Obj) = ((Wrd168.pObj) [0]);
  (* (--Rsp)) = (Wrd169.Obj);

DEFLABEL (label_130)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_21]));

DEFLABEL (label_131)
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_20]))));
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd159.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_86)
DEFLABEL (label_132)
  (* (--Rsp)) = Rvl;
  goto label_130;

DEFLABEL (label_134)
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_85)
  (Wrd159.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_83)
  (Wrd140.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_139)
  (Wrd177.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd177.Obj);
  (Wrd181.Obj) = (Rsp [2]);
  (Wrd182.uLng) = (OBJECT_TYPE (Wrd181.Obj));
  if (! ((Wrd182.uLng) == 1))
    goto label_146;
  (Wrd180.pObj) = (OBJECT_ADDRESS (Wrd181.Obj));
  (Wrd178.Obj) = ((Wrd180.pObj) [1]);

DEFLABEL (label_145)
  (Wrd189.uLng) = (OBJECT_TYPE (Wrd178.Obj));
  if (! ((Wrd189.uLng) == 1))
    goto label_144;
  (Wrd187.pObj) = (OBJECT_ADDRESS (Wrd178.Obj));
  (Wrd188.Obj) = ((Wrd187.pObj) [1]);
  (* (--Rsp)) = (Wrd188.Obj);

DEFLABEL (label_143)
  (Wrd196.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd196.Obj);
  (Wrd200.Obj) = (Rsp [4]);
  (Wrd201.uLng) = (OBJECT_TYPE (Wrd200.Obj));
  if (! ((Wrd201.uLng) == 1))
    goto label_142;
  (Wrd199.pObj) = (OBJECT_ADDRESS (Wrd200.Obj));
  (Wrd197.Obj) = ((Wrd199.pObj) [1]);

DEFLABEL (label_141)
  (Wrd208.uLng) = (OBJECT_TYPE (Wrd197.Obj));
  if (! ((Wrd208.uLng) == 1))
    goto label_140;
  (Wrd206.pObj) = (OBJECT_ADDRESS (Wrd197.Obj));
  (Wrd207.Obj) = ((Wrd206.pObj) [0]);
  (* (--Rsp)) = (Wrd207.Obj);
  goto label_130;

DEFLABEL (label_140)
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd197.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_90)
  goto label_132;

DEFLABEL (label_142)
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd205.Obj);
  (* (--Rsp)) = (Wrd200.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_89)
  (Wrd197.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd193.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd193.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd186.Obj);
  (* (--Rsp)) = (Wrd181.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_87)
  (Wrd178.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_147;

DEFLABEL (label_151)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_162;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_161)
  (Wrd54.Obj) = (current_block [OBJECT_20_8]);
  (Wrd57.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd57.Lng))))
    goto label_160;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd54.Obj));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd26.Obj) == (Wrd28.Obj))
    goto label_159;

DEFLABEL (label_158)
  (Wrd29.Obj) = (current_block [OBJECT_20_10]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd39.Lng)))
    goto label_152;
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_9]), 2);

DEFLABEL (label_152)
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd33.Obj) == (Wrd35.Obj))
    goto label_154;
  (Wrd31.Obj) = (current_block [OBJECT_20_12]);
  goto label_153;

DEFLABEL (label_154)
  (Wrd31.Obj) = (current_block [OBJECT_20_11]);

DEFLABEL (label_153)
DEFLABEL (label_157)
  Rsp = (& (Rsp [3]));
  if ((Wrd31.Obj) == ((SCHEME_OBJECT) 0))
    goto label_150;

DEFLABEL (label_156)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_155;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [1]);
  (* (--Rsp)) = (Wrd46.Obj);
  goto label_121;

DEFLABEL (label_155)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_36]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_76)
  goto label_123;

DEFLABEL (label_159)
  Rsp = (& (Rsp [2]));
  goto label_156;

DEFLABEL (label_160)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_35]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_9]), 2);

DEFLABEL (label_77)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_158;
  goto label_159;

DEFLABEL (label_162)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_34]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_161;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_20_28);
  (Wrd10.Obj) = (current_block [OBJECT_20_14]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_20_26);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_168;

DEFLABEL (label_167)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_44]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.pObj) = (& (Rsp [2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  goto lambda_0;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_20_44);

DEFLABEL (label_166)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_46]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_165;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_164)
  goto loop_49;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_20_46);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_163)
  (Wrd10.Obj) = (current_block [OBJECT_20_14]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_165)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_47]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_164;

DEFLABEL (label_168)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_45]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_48]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_170;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_169)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_25]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_20_45);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_167;
  goto label_166;

DEFLABEL (label_170)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_49]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_91)
  (* (--Rsp)) = Rvl;
  goto label_169;

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_20_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_52]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_20_15);
  (Wrd10.Obj) = (current_block [OBJECT_20_3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_20_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_53]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (Wrd10.Obj) = (current_block [OBJECT_20_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_20_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_150;
  goto label_149;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_150;
  goto label_156;

DEFLABEL (lambda_108)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_20_38);
  (Wrd5.Obj) = (current_block [OBJECT_20_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_39]));

DEFLABEL (lambda_110)
DEFLABEL (lambda_55)
  INTERRUPT_CHECK (26, LABEL_20_24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_172;

DEFLABEL (label_171)
  Rvl = (current_block [OBJECT_20_11]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_172)
  (Wrd25.Obj) = (current_block [OBJECT_20_8]);
  (Wrd28.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd28.Lng))))
    goto label_178;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  if ((Wrd8.Obj) == (Wrd6.Obj))
    goto label_171;

DEFLABEL (label_177)
  (Wrd11.Obj) = (current_block [OBJECT_20_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd22.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng)))
    goto label_173;
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_9]), 2);

DEFLABEL (label_173)
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_175;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_174;

DEFLABEL (label_175)
  Rvl = (current_block [OBJECT_20_11]);

DEFLABEL (label_174)
DEFLABEL (label_176)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_178)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_51]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_9]), 2);

DEFLABEL (label_92)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_177;
  goto label_171;

DEFLABEL (lambda_109)
  CLOSURE_HEADER (LABEL_20_41);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_54]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_55]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_20_54);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_63]));

DEFLABEL (lambda_111)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_20_48);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_185;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_184)
  if ((Wrd5.Obj) == (current_block [OBJECT_20_15]))
    goto label_181;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_57]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_180;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_179)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_37]));

DEFLABEL (label_180)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_62]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_95)
  (* (--Rsp)) = Rvl;
  goto label_179;

DEFLABEL (label_181)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_183;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_182)
  (Rsp [0]) = (Wrd27.Obj);
  goto label_179;

DEFLABEL (label_183)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_61]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_96)
  (Wrd27.Obj) = Rvl;
  goto label_182;

DEFLABEL (label_185)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_60]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_94)
  (Wrd5.Obj) = Rvl;
  goto label_184;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_20_57);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_187;

DEFLABEL (label_186)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_187)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_56]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_1]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_191;
  Wrd41 = Wrd45;

DEFLABEL (label_190)
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_189;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_188)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_25]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_20_56);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_186;
  goto label_181;

DEFLABEL (label_189)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_59]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_104)
  (* (--Rsp)) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_58])), (Wrd42.pObj));

DEFLABEL (label_103)
  (Wrd41.Obj) = Rvl;
  goto label_190;

DEFLABEL (loop_112)
DEFLABEL (loop_49)
  INTERRUPT_CHECK (26, LABEL_20_66);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Obj) = (current_block [OBJECT_20_16]);
  if ((Wrd11.Obj) == (Wrd12.Obj))
    goto label_208;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_207;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_206)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_205;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_204)
  if ((Wrd22.Obj) == (current_block [OBJECT_20_15]))
    goto label_196;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_64]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_203;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [0]);

DEFLABEL (label_202)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_201;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_200)
  (Wrd49.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_74]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_20_64);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_197;

DEFLABEL (label_196)
  (Wrd50.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_195;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [0]);

DEFLABEL (label_194)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_193;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [1]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_192)
  (Wrd67.Obj) = (Rsp [7]);
  (Rsp [2]) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_71]));

DEFLABEL (label_193)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_70]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_102)
  (* (--Rsp)) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_69]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_101)
  (Wrd51.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  (Wrd74.Obj) = (Rsp [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_199;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [1]);

DEFLABEL (label_198)
  (Rsp [0]) = (Wrd71.Obj);
  goto loop_49;

DEFLABEL (label_199)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_65]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_105)
  (Wrd71.Obj) = Rvl;
  goto label_198;

DEFLABEL (label_201)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_73]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_100)
  (* (--Rsp)) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_72]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_99)
  (Wrd33.Obj) = Rvl;
  goto label_202;

DEFLABEL (label_205)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_68]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_98)
  (Wrd22.Obj) = Rvl;
  goto label_204;

DEFLABEL (label_207)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_67]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_97)
  (Wrd13.Obj) = Rvl;
  goto label_206;

DEFLABEL (label_208)
  Wrd5 = Wrd12;
  Rsp = (& (Rsp [2]));
  goto label_163;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define TAG_21_8 2
#define LABEL_21_13 9
#define LABEL_21_14 11
#define LABEL_21_15 13
#define LABEL_21_16 15
#define LABEL_21_17 17
#define LABEL_21_20 19
#define LABEL_21_21 21
#define LABEL_21_9 23
#define LABEL_21_11 25
#define LABEL_21_30 27
#define LABEL_21_26 29
#define LABEL_21_31 31
#define LABEL_21_32 33
#define LABEL_21_33 35
#define LABEL_21_24 37
#define TAG_21_25 17
#define LABEL_21_28 39
#define LABEL_21_18 41
#define TAG_21_19 19
#define ENVIRONMENT_LABEL_21_3 68
#define DEBUGGING_LABEL_21_2 67
#define OBJECT_21_7 66
#define OBJECT_21_6 65
#define OBJECT_21_5 64
#define OBJECT_21_4 63
#define OBJECT_21_3 62
#define OBJECT_21_2 61
#define OBJECT_21_1 60
#define OBJECT_21_0 59
#define EXECUTE_CACHE_21_29 43
#define EXECUTE_CACHE_21_27 45
#define EXECUTE_CACHE_21_34 47
#define EXECUTE_CACHE_21_23 49
#define EXECUTE_CACHE_21_22 51
#define EXECUTE_CACHE_21_12 53
#define EXECUTE_CACHE_21_10 55
#define EXECUTE_CACHE_21_6 57
#define FREE_REFERENCES_LABEL_21_0 42
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd67;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd18;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd72;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd68;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd43;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_21_4);
      goto parse_package_definition_27;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto lambda_38;

    case 3:
      current_block = (Rpc - LABEL_21_13);
      goto continuation_20;

    case 4:
      current_block = (Rpc - LABEL_21_14);
      goto continuation_17;

    case 5:
      current_block = (Rpc - LABEL_21_15);
      goto continuation_16;

    case 6:
      current_block = (Rpc - LABEL_21_16);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_21_17);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_21_20);
      goto label_33;

    case 9:
      current_block = (Rpc - LABEL_21_21);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_21_11);
      goto continuation_1;

    case 12:
      current_block = (Rpc - LABEL_21_30);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_21_26);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_21_31);
      goto label_29;

    case 15:
      current_block = (Rpc - LABEL_21_32);
      goto label_30;

    case 16:
      current_block = (Rpc - LABEL_21_33);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_21_24);
      goto lambda_40;

    case 18:
      current_block = (Rpc - LABEL_21_28);
      goto continuation_2;

    case 19:
      current_block = (Rpc - LABEL_21_18);
      goto lambda_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_package_definition_37)
DEFLABEL (parse_package_definition_27)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_7])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_27]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21_26);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_61;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_60)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_55;

DEFLABEL (label_54)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_30]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_21_6]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_34]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_21_30);

DEFLABEL (label_53)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_21_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_21_4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_23]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21_14);

DEFLABEL (label_52)
  (Wrd26.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_51;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_50)
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_49;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;

DEFLABEL (label_47)
  (Wrd55.Obj) = (Rsp [3]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_46;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd52.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_45)
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_44;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_22]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_21_13);
  (Wrd43.Obj) = Rvl;

DEFLABEL (label_42)
  (Rsp [1]) = (Wrd43.Obj);
  (Wrd44.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd44.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd47.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_18])));
  Rhp += 2;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd47.pObj)));
  Wrd50 = Wrd47;
  ((Wrd50.pObj) [2]) = (Wrd44.Obj);
  ((Wrd50.pObj) [3]) = (Wrd43.Obj);
  Wrd18 = Wrd46;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd18.Obj);
  (Wrd19.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd19.Obj);
  goto pop_return;

DEFLABEL (label_44)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_21]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_20]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_33)
  (Wrd52.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd43.Obj) = (current_block [OBJECT_21_3]);
  Rsp = (& (Rsp [1]));
  goto label_42;

DEFLABEL (label_49)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_17]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_47;

DEFLABEL (label_51)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_32)
  (Wrd30.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_55)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_59;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_58)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_57;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd29.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_56)
  if ((Wrd29.Obj) == (current_block [OBJECT_21_5]))
    goto label_53;
  goto label_54;

DEFLABEL (label_57)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_33]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_31)
  (Wrd29.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_32]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_30)
  (Wrd20.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_31]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [0]) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_24])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd12.Obj);
  Wrd18 = Wrd14;
  Rsp = (& (Rsp [1]));
  goto label_41;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_21_7);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_29]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_28);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_21_24);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21_7]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_4;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_21_18);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_4;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_8 7
#define LABEL_22_7 9
#define LABEL_22_11 11
#define LABEL_22_13 13
#define ENVIRONMENT_LABEL_22_3 29
#define DEBUGGING_LABEL_22_2 28
#define OBJECT_22_2 27
#define OBJECT_22_1 26
#define OBJECT_22_0 25
#define EXECUTE_CACHE_22_14 15
#define EXECUTE_CACHE_22_12 17
#define EXECUTE_CACHE_22_10 19
#define EXECUTE_CACHE_22_9 21
#define EXECUTE_CACHE_22_6 23
#define FREE_REFERENCES_LABEL_22_0 14
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_22_4);
      goto parse_package_extension_7;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_22_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_22_13);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_package_extension_10)
DEFLABEL (parse_package_extension_7)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd12.Obj) = (current_block [OBJECT_22_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (label_11)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_12)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_13);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_7);
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_7 5
#define LABEL_23_5 7
#define LABEL_23_11 9
#define LABEL_23_12 11
#define LABEL_23_9 13
#define LABEL_23_13 15
#define LABEL_23_14 17
#define LABEL_23_15 19
#define ENVIRONMENT_LABEL_23_3 38
#define DEBUGGING_LABEL_23_2 37
#define OBJECT_23_9 36
#define OBJECT_23_8 35
#define OBJECT_23_7 34
#define OBJECT_23_6 33
#define OBJECT_23_5 32
#define OBJECT_23_4 31
#define OBJECT_23_3 30
#define OBJECT_23_2 29
#define OBJECT_23_1 28
#define OBJECT_23_0 27
#define EXECUTE_CACHE_23_10 21
#define EXECUTE_CACHE_23_8 23
#define EXECUTE_CACHE_23_6 25
#define FREE_REFERENCES_LABEL_23_0 20
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_23_4);
      goto check_package_options_10;

    case 1:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_23_11);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_23_12);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_23_9);
      goto lambda_9;

    case 6:
      current_block = (Rpc - LABEL_23_13);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_23_14);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_23_15);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_package_options_16)
DEFLABEL (check_package_options_10)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_18)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_7);
  goto label_18;

DEFLABEL (lambda_17)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_23_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_21;

DEFLABEL (label_20)
  (Wrd7.Obj) = (current_block [OBJECT_23_9]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (label_21)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_33;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_32)
  (Wrd49.Obj) = (current_block [OBJECT_23_3]);
  (Wrd52.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd52.Lng))))
    goto label_31;
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd49.Obj));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd21.Obj) == (Wrd23.Obj))
    goto label_30;

DEFLABEL (label_29)
  (Wrd24.Obj) = (current_block [OBJECT_23_5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd34.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd34.Lng)))
    goto label_22;
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_4]), 2);

DEFLABEL (label_22)
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd24.Obj));
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd28.Obj) == (Wrd30.Obj))
    goto label_24;
  (Wrd26.Obj) = (current_block [OBJECT_23_7]);
  goto label_23;

DEFLABEL (label_24)
  (Wrd26.Obj) = (current_block [OBJECT_23_6]);

DEFLABEL (label_23)
DEFLABEL (label_28)
  Rsp = (& (Rsp [3]));
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;

DEFLABEL (label_27)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_26;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [1]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_23_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  Rvl = (current_block [OBJECT_23_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_15]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_8]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_30)
  Rsp = (& (Rsp [2]));
  goto label_27;

DEFLABEL (label_31)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_4]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

DEFLABEL (label_33)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_23_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define TAG_24_6 1
#define LABEL_24_8 7
#define LABEL_24_11 9
#define LABEL_24_15 11
#define LABEL_24_19 13
#define LABEL_24_22 15
#define LABEL_24_25 17
#define LABEL_24_27 19
#define LABEL_24_26 21
#define LABEL_24_31 23
#define LABEL_24_24 25
#define LABEL_24_34 27
#define LABEL_24_20 29
#define LABEL_24_21 31
#define LABEL_24_35 33
#define LABEL_24_17 35
#define LABEL_24_18 37
#define LABEL_24_36 39
#define LABEL_24_13 41
#define LABEL_24_14 43
#define LABEL_24_37 45
#define LABEL_24_9 47
#define LABEL_24_10 49
#define LABEL_24_38 51
#define LABEL_24_30 53
#define LABEL_24_33 55
#define ENVIRONMENT_LABEL_24_3 90
#define DEBUGGING_LABEL_24_2 89
#define OBJECT_24_17 88
#define OBJECT_24_16 87
#define OBJECT_24_15 86
#define OBJECT_24_14 85
#define OBJECT_24_13 84
#define OBJECT_24_12 83
#define OBJECT_24_11 82
#define OBJECT_24_10 81
#define OBJECT_24_9 80
#define OBJECT_24_8 79
#define OBJECT_24_7 78
#define OBJECT_24_6 77
#define OBJECT_24_5 76
#define OBJECT_24_4 75
#define OBJECT_24_3 74
#define OBJECT_24_2 73
#define OBJECT_24_1 72
#define OBJECT_24_0 71
#define EXECUTE_CACHE_24_32 57
#define EXECUTE_CACHE_24_29 59
#define EXECUTE_CACHE_24_28 61
#define EXECUTE_CACHE_24_23 63
#define EXECUTE_CACHE_24_16 65
#define EXECUTE_CACHE_24_12 67
#define EXECUTE_CACHE_24_7 69
#define FREE_REFERENCES_LABEL_24_0 56
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd36;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd26;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd87;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd105;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd123;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd106;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_24_4);
      goto process_package_options_41;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lambda_58;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto label_43;

    case 3:
      current_block = (Rpc - LABEL_24_11);
      goto label_49;

    case 4:
      current_block = (Rpc - LABEL_24_15);
      goto label_48;

    case 5:
      current_block = (Rpc - LABEL_24_19);
      goto label_47;

    case 6:
      current_block = (Rpc - LABEL_24_22);
      goto label_46;

    case 7:
      current_block = (Rpc - LABEL_24_25);
      goto label_45;

    case 8:
      current_block = (Rpc - LABEL_24_27);
      goto label_44;

    case 9:
      current_block = (Rpc - LABEL_24_26);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_24_31);
      goto label_50;

    case 11:
      current_block = (Rpc - LABEL_24_24);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_24_34);
      goto label_51;

    case 13:
      current_block = (Rpc - LABEL_24_20);
      goto continuation_23;

    case 14:
      current_block = (Rpc - LABEL_24_21);
      goto continuation_21;

    case 15:
      current_block = (Rpc - LABEL_24_35);
      goto label_52;

    case 16:
      current_block = (Rpc - LABEL_24_17);
      goto continuation_28;

    case 17:
      current_block = (Rpc - LABEL_24_18);
      goto continuation_26;

    case 18:
      current_block = (Rpc - LABEL_24_36);
      goto label_53;

    case 19:
      current_block = (Rpc - LABEL_24_13);
      goto continuation_33;

    case 20:
      current_block = (Rpc - LABEL_24_14);
      goto continuation_31;

    case 21:
      current_block = (Rpc - LABEL_24_37);
      goto label_54;

    case 22:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_38;

    case 23:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_36;

    case 24:
      current_block = (Rpc - LABEL_24_38);
      goto label_55;

    case 25:
      current_block = (Rpc - LABEL_24_30);
      goto continuation_11;

    case 26:
      current_block = (Rpc - LABEL_24_33);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_package_options_57)
DEFLABEL (process_package_options_41)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_24_5);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_86;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_85)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (current_block [OBJECT_24_1]))
    goto label_78;
  if ((Wrd14.Obj) == (current_block [OBJECT_24_3]))
    goto label_71;
  if ((Wrd14.Obj) == (current_block [OBJECT_24_4]))
    goto label_69;
  if ((Wrd14.Obj) == (current_block [OBJECT_24_5]))
    goto label_65;
  if ((Wrd14.Obj) == (current_block [OBJECT_24_6]))
    goto label_63;
  if ((Wrd14.Obj) == (current_block [OBJECT_24_7]))
    goto label_59;
  (Wrd26.Obj) = (current_block [OBJECT_24_8]);
  (Rsp [1]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_29]));

DEFLABEL (label_59)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_26]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_61;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_60)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_28]));

DEFLABEL (label_61)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_27]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_44)
DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_24]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_64;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);
  goto label_60;

DEFLABEL (label_64)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_25]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_45)
  goto label_62;

DEFLABEL (label_65)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd54.pObj) [2]);
  (Rsp [0]) = (Wrd52.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_20]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_21]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd64.Obj) = (Rsp [4]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_67;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [1]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_66)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_23]));

DEFLABEL (label_67)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_22]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_46)
DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [2]);
  (Rsp [0]) = (Wrd70.Obj);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_17]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_18]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd82.Obj) = (Rsp [4]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_70;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [1]);
  (* (--Rsp)) = (Wrd81.Obj);
  goto label_66;

DEFLABEL (label_70)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_19]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_47)
  goto label_68;

DEFLABEL (label_71)
  (Wrd89.Obj) = (Rsp [1]);
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd88.Obj) = ((Wrd90.pObj) [2]);
  (Rsp [0]) = (Wrd88.Obj);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_77;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [1]);
  (* (--Rsp)) = (Wrd99.Obj);

DEFLABEL (label_76)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_16]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_24_14);
  (Wrd9.Obj) = (current_block [OBJECT_24_10]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_75;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_75;
  (Wrd14.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_74)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_32]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_24_13);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_24_17]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_73;

DEFLABEL (label_72)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_15]), 3);

DEFLABEL (label_73)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_72;
  ((Wrd15.pObj) [3]) = Rvl;
  Rvl = (current_block [OBJECT_24_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Wrd30.Obj) = (current_block [OBJECT_24_17]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_37]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_12]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_15]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_78)
  (Wrd107.Obj) = (Rsp [1]);
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd106.Obj) = ((Wrd108.pObj) [2]);
  (Rsp [0]) = (Wrd106.Obj);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd118.Obj) = (Rsp [4]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 1))
    goto label_84;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd117.Obj) = ((Wrd116.pObj) [1]);
  (* (--Rsp)) = (Wrd117.Obj);

DEFLABEL (label_83)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_24_10);
  (Wrd9.Obj) = (current_block [OBJECT_24_10]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_82;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_82;
  (Wrd14.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_81)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_32]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_24_17]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_80;

DEFLABEL (label_79)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_15]), 3);

DEFLABEL (label_80)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_79;
  ((Wrd15.pObj) [3]) = Rvl;
  Rvl = (current_block [OBJECT_24_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Wrd30.Obj) = (current_block [OBJECT_24_17]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_38]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_12]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_24_26);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_87;
  Rvl = (current_block [OBJECT_24_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_24_10]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_91;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd28.Lng))))
    goto label_91;
  (Wrd20.Obj) = ((Wrd26.pObj) [6]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_90)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_32]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_24_30);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24_11]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd22.uLng) == 62)
    goto label_89;

DEFLABEL (label_88)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_15]), 3);

DEFLABEL (label_89)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng))))
    goto label_88;
  ((Wrd18.pObj) [6]) = Rvl;
  Rvl = (current_block [OBJECT_24_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [2]);
  (Wrd36.Obj) = (current_block [OBJECT_24_11]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_31]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_12]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_24_24);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_92;
  Rvl = (current_block [OBJECT_24_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_92)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_24_10]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_96;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd28.Lng))))
    goto label_96;
  (Wrd20.Obj) = ((Wrd26.pObj) [5]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_95)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_32]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_24_33);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24_13]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd22.uLng) == 62)
    goto label_94;

DEFLABEL (label_93)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_15]), 3);

DEFLABEL (label_94)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd20.Lng))))
    goto label_93;
  ((Wrd18.pObj) [5]) = Rvl;
  Rvl = (current_block [OBJECT_24_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_96)
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [2]);
  (Wrd36.Obj) = (current_block [OBJECT_24_13]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_34]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_12]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_24_21);
  (Wrd9.Obj) = (current_block [OBJECT_24_10]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_100;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd22.Lng))))
    goto label_100;
  (Wrd14.Obj) = ((Wrd20.pObj) [8]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_99)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_32]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_24_20);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_24_14]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_98;

DEFLABEL (label_97)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_15]), 3);

DEFLABEL (label_98)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_97;
  ((Wrd15.pObj) [8]) = Rvl;
  Rvl = (current_block [OBJECT_24_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_100)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Wrd30.Obj) = (current_block [OBJECT_24_14]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_35]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_12]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_24_18);
  (Wrd9.Obj) = (current_block [OBJECT_24_10]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_104;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd22.Lng))))
    goto label_104;
  (Wrd14.Obj) = ((Wrd20.pObj) [7]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_103)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_32]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_24_17);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_24_16]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_102;

DEFLABEL (label_101)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_15]), 3);

DEFLABEL (label_102)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_101;
  ((Wrd15.pObj) [7]) = Rvl;
  Rvl = (current_block [OBJECT_24_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_104)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Wrd30.Obj) = (current_block [OBJECT_24_16]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_36]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_12]), 2);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_103;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_6 5
#define LABEL_25_8 7
#define LABEL_25_5 9
#define ENVIRONMENT_LABEL_25_3 19
#define DEBUGGING_LABEL_25_2 18
#define OBJECT_25_0 17
#define EXECUTE_CACHE_25_9 11
#define EXECUTE_CACHE_25_7 13
#define FREE_REFERENCE_25_0 16
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_25_4);
      goto parse_name_2;

    case 1:
      current_block = (Rpc - LABEL_25_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_name_6)
DEFLABEL (parse_name_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;

DEFLABEL (label_7)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_8);
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_6 5
#define LABEL_26_8 7
#define LABEL_26_5 9
#define LABEL_26_11 11
#define LABEL_26_10 13
#define ENVIRONMENT_LABEL_26_3 28
#define DEBUGGING_LABEL_26_2 27
#define OBJECT_26_2 26
#define OBJECT_26_1 25
#define OBJECT_26_0 24
#define EXECUTE_CACHE_26_12 15
#define EXECUTE_CACHE_26_9 17
#define EXECUTE_CACHE_26_7 19
#define FREE_REFERENCE_26_1 22
#define FREE_REFERENCE_26_0 23
#define FREE_REFERENCES_LABEL_26_0 14
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_26_4);
      goto parse_filenames_5;

    case 1:
      current_block = (Rpc - LABEL_26_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_26_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_26_11);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_26_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_filenames_10)
DEFLABEL (parse_filenames_5)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_15;
  Wrd8 = Wrd12;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_8);

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_12;
  Wrd11 = Wrd15;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_10);
  (Wrd9.Obj) = (current_block [OBJECT_26_1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_26_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_11])), (Wrd12.pObj));

DEFLABEL (label_8)
  (Wrd11.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_5 3
#define LABEL_27_6 5
#define LABEL_27_7 7
#define LABEL_27_9 9
#define LABEL_27_4 11
#define LABEL_27_12 13
#define LABEL_27_13 15
#define LABEL_27_15 17
#define LABEL_27_18 19
#define LABEL_27_14 21
#define LABEL_27_19 23
#define LABEL_27_20 25
#define LABEL_27_21 27
#define LABEL_27_22 29
#define LABEL_27_23 31
#define LABEL_27_8 33
#define LABEL_27_24 35
#define LABEL_27_10 37
#define LABEL_27_26 39
#define LABEL_27_27 41
#define LABEL_27_25 43
#define LABEL_27_28 45
#define ENVIRONMENT_LABEL_27_3 67
#define DEBUGGING_LABEL_27_2 66
#define OBJECT_27_8 65
#define OBJECT_27_7 64
#define OBJECT_27_6 63
#define OBJECT_27_5 62
#define OBJECT_27_4 61
#define OBJECT_27_3 60
#define OBJECT_27_2 59
#define OBJECT_27_1 58
#define OBJECT_27_0 57
#define EXECUTE_CACHE_27_17 47
#define EXECUTE_CACHE_27_16 49
#define EXECUTE_CACHE_27_11 51
#define FREE_REFERENCE_27_2 54
#define FREE_REFERENCE_27_1 55
#define FREE_REFERENCE_27_0 56
#define FREE_REFERENCES_LABEL_27_0 46
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd67;
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
      goto continuation_13;

    case 1:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_14;

    case 3:
      current_block = (Rpc - LABEL_27_9);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_27_4);
      goto parse_file_case_22;

    case 5:
      current_block = (Rpc - LABEL_27_12);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_27_13);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_27_15);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_27_18);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_27_14);
      goto lambda_12;

    case 10:
      current_block = (Rpc - LABEL_27_19);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_27_20);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_27_21);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_27_22);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_27_23);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_21;

    case 16:
      current_block = (Rpc - LABEL_27_24);
      goto label_33;

    case 17:
      current_block = (Rpc - LABEL_27_10);
      goto lambda_19;

    case 18:
      current_block = (Rpc - LABEL_27_26);
      goto label_34;

    case 19:
      current_block = (Rpc - LABEL_27_27);
      goto label_35;

    case 20:
      current_block = (Rpc - LABEL_27_25);
      goto continuation_18;

    case 21:
      current_block = (Rpc - LABEL_27_28);
      goto label_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_file_case_38)
DEFLABEL (parse_file_case_22)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_47;

DEFLABEL (label_46)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_17]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_27_7);

DEFLABEL (label_45)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_44;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_43)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_27_8);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_42;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_41)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_33)
  (Wrd5.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_47)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_59;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_58)
  (Wrd55.Obj) = (current_block [OBJECT_27_2]);
  (Wrd58.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd58.Lng))))
    goto label_57;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd55.Obj));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd25.Obj) == (Wrd27.Obj))
    goto label_56;

DEFLABEL (label_55)
  (Wrd28.Obj) = (current_block [OBJECT_27_4]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd38.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd38.Lng)))
    goto label_48;
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 2);

DEFLABEL (label_48)
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd32.Obj) == (Wrd34.Obj))
    goto label_50;
  (Wrd30.Obj) = (current_block [OBJECT_27_6]);
  goto label_49;

DEFLABEL (label_50)
  (Wrd30.Obj) = (current_block [OBJECT_27_5]);

DEFLABEL (label_49)
DEFLABEL (label_54)
  Rsp = (& (Rsp [3]));
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_46;

DEFLABEL (label_53)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_52;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_16]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_27_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_45;

DEFLABEL (label_52)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_15]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_56)
  Rsp = (& (Rsp [2]));
  goto label_53;

DEFLABEL (label_57)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_56;

DEFLABEL (label_59)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_53;

DEFLABEL (lambda_39)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_27_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_61;

DEFLABEL (label_60)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_61)
  if (! ((Wrd6.uLng) == 1))
    goto label_72;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_71)
  if ((Wrd9.Obj) == (current_block [OBJECT_27_8]))
    goto label_66;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_65;
  Wrd22 = Wrd26;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_63;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_62)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_16]));

DEFLABEL (label_63)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_23]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_22])), (Wrd23.pObj));

DEFLABEL (label_29)
  (Wrd22.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_66)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_70;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_69)
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_68;
  Wrd47 = Wrd51;

DEFLABEL (label_67)
  (Rsp [1]) = (Wrd47.Obj);
  goto label_62;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_21])), (Wrd48.pObj));

DEFLABEL (label_32)
  (Wrd47.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_20]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_28)
  (Wrd9.Obj) = Rvl;
  goto label_71;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_27_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  goto label_66;

DEFLABEL (lambda_40)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_27_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_78;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_77)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_76;
  Wrd17 = Wrd21;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_27_25);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_74;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_73)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_28]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_27])), (Wrd18.pObj));

DEFLABEL (label_35)
  (Wrd17.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_77;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 8
#define DEBUGGING_LABEL_28_2 7
#define EXECUTE_CACHE_28_5 5
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto parse_filename_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_filename_3)
DEFLABEL (parse_filename_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define ENVIRONMENT_LABEL_29_3 16
#define DEBUGGING_LABEL_29_2 15
#define OBJECT_29_3 14
#define OBJECT_29_2 13
#define OBJECT_29_1 12
#define OBJECT_29_0 11
#define EXECUTE_CACHE_29_7 9
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_29_4);
      goto parse_initialization_4;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_initialization_8)
DEFLABEL (parse_initialization_4)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_10;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_29_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_6);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  if (! ((Wrd6.uLng) == 1))
    goto label_13;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_12)
  if (! ((Wrd12.Obj) == (current_block [OBJECT_29_1])))
    goto label_9;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_11;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  Rvl = ((Wrd24.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_13)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_5 3
#define LABEL_30_6 5
#define LABEL_30_8 7
#define LABEL_30_4 9
#define LABEL_30_12 11
#define LABEL_30_15 13
#define LABEL_30_16 15
#define LABEL_30_17 17
#define LABEL_30_11 19
#define LABEL_30_18 21
#define LABEL_30_19 23
#define LABEL_30_20 25
#define LABEL_30_21 27
#define LABEL_30_22 29
#define LABEL_30_23 31
#define LABEL_30_24 33
#define LABEL_30_25 35
#define LABEL_30_26 37
#define LABEL_30_7 39
#define LABEL_30_28 41
#define LABEL_30_9 43
#define LABEL_30_30 45
#define LABEL_30_31 47
#define LABEL_30_32 49
#define LABEL_30_27 51
#define ENVIRONMENT_LABEL_30_3 71
#define DEBUGGING_LABEL_30_2 70
#define OBJECT_30_8 69
#define OBJECT_30_7 68
#define OBJECT_30_6 67
#define OBJECT_30_5 66
#define OBJECT_30_4 65
#define OBJECT_30_3 64
#define OBJECT_30_2 63
#define OBJECT_30_1 62
#define OBJECT_30_0 61
#define EXECUTE_CACHE_30_29 53
#define EXECUTE_CACHE_30_14 55
#define EXECUTE_CACHE_30_13 57
#define EXECUTE_CACHE_30_10 59
#define FREE_REFERENCES_LABEL_30_0 52
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd120;
  machine_word Wrd114;
  machine_word Wrd115;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd95;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd103;
  machine_word Wrd93;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd88;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd58;
  machine_word Wrd48;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd148;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd157;
  machine_word Wrd12;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_30_5);
      goto continuation_21;

    case 1:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_22;

    case 2:
      current_block = (Rpc - LABEL_30_8);
      goto label_35;

    case 3:
      current_block = (Rpc - LABEL_30_4);
      goto parse_import_export_32;

    case 4:
      current_block = (Rpc - LABEL_30_12);
      goto label_34;

    case 5:
      current_block = (Rpc - LABEL_30_15);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_30_16);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_30_17);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_30_11);
      goto lambda_20;

    case 9:
      current_block = (Rpc - LABEL_30_18);
      goto label_44;

    case 10:
      current_block = (Rpc - LABEL_30_19);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_30_20);
      goto label_43;

    case 12:
      current_block = (Rpc - LABEL_30_21);
      goto label_37;

    case 13:
      current_block = (Rpc - LABEL_30_22);
      goto label_38;

    case 14:
      current_block = (Rpc - LABEL_30_23);
      goto label_39;

    case 15:
      current_block = (Rpc - LABEL_30_24);
      goto label_42;

    case 16:
      current_block = (Rpc - LABEL_30_25);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_30_26);
      goto label_41;

    case 18:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_31;

    case 19:
      current_block = (Rpc - LABEL_30_28);
      goto label_45;

    case 20:
      current_block = (Rpc - LABEL_30_9);
      goto lambda_29;

    case 21:
      current_block = (Rpc - LABEL_30_30);
      goto label_46;

    case 22:
      current_block = (Rpc - LABEL_30_31);
      goto label_47;

    case 23:
      current_block = (Rpc - LABEL_30_32);
      goto label_48;

    case 24:
      current_block = (Rpc - LABEL_30_27);
      goto continuation_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_import_export_50)
DEFLABEL (parse_import_export_32)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_59;

DEFLABEL (label_58)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_30_6);

DEFLABEL (label_57)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_56;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_55)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_54;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_53)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_29]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_30_27);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_28]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_7]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_59)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_61;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_60)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_13]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_30_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_57;

DEFLABEL (label_61)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (lambda_51)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_30_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd149.Obj) = (current_block [OBJECT_30_2]);
  (Wrd152.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd152.Lng))))
    goto label_100;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd149.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_99;

DEFLABEL (label_98)
  (Wrd13.Obj) = (current_block [OBJECT_30_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_63;

DEFLABEL (label_62)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 2);

DEFLABEL (label_63)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_65;
  (Wrd15.Obj) = (current_block [OBJECT_30_6]);
  goto label_64;

DEFLABEL (label_65)
  (Wrd15.Obj) = (current_block [OBJECT_30_5]);

DEFLABEL (label_64)
DEFLABEL (label_97)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_96)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_67;
  Rvl = (Wrd24.Obj);

DEFLABEL (label_66)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 1)
    goto label_69;

DEFLABEL (label_68)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_66;

DEFLABEL (label_69)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_16]))));
  (* (--Rsp)) = (Wrd34.Obj);
  if (! ((Wrd29.uLng) == 1))
    goto label_95;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_94)
  (Wrd137.Obj) = (current_block [OBJECT_30_2]);
  (Wrd140.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd140.Lng))))
    goto label_93;
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd137.Obj));
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd45.Obj) == (Wrd47.Obj))
    goto label_92;

DEFLABEL (label_91)
  (Wrd48.Obj) = (current_block [OBJECT_30_4]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd58.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd58.Lng))))
    goto label_62;
  (Wrd52.uLng) = (OBJECT_DATUM (Wrd48.Obj));
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd52.Obj) == (Wrd54.Obj))
    goto label_71;
  (Wrd50.Obj) = (current_block [OBJECT_30_6]);
  goto label_70;

DEFLABEL (label_71)
  (Wrd50.Obj) = (current_block [OBJECT_30_5]);

DEFLABEL (label_70)
DEFLABEL (label_90)
  Rsp = (& (Rsp [3]));
  if ((Wrd50.Obj) == ((SCHEME_OBJECT) 0))
    goto label_68;

DEFLABEL (label_89)
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_88;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [1]);

DEFLABEL (label_87)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_68;
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd76.Obj) = (Rsp [2]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_86;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd73.Obj) = ((Wrd75.pObj) [1]);

DEFLABEL (label_85)
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_84;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (* (--Rsp)) = (Wrd83.Obj);

DEFLABEL (label_83)
  (Wrd126.Obj) = (current_block [OBJECT_30_2]);
  (Wrd129.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd129.Lng))))
    goto label_82;
  (Wrd90.uLng) = (OBJECT_DATUM (Wrd126.Obj));
  (Wrd91.Obj) = (Rsp [0]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if ((Wrd90.Obj) == (Wrd92.Obj))
    goto label_81;

DEFLABEL (label_80)
  (Wrd93.Obj) = (current_block [OBJECT_30_4]);
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd103.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd103.Lng))))
    goto label_62;
  (Wrd97.uLng) = (OBJECT_DATUM (Wrd93.Obj));
  (Wrd98.Obj) = (Rsp [1]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if ((Wrd97.Obj) == (Wrd99.Obj))
    goto label_73;
  (Wrd95.Obj) = (current_block [OBJECT_30_6]);
  goto label_72;

DEFLABEL (label_73)
  (Wrd95.Obj) = (current_block [OBJECT_30_5]);

DEFLABEL (label_72)
DEFLABEL (label_79)
  Rsp = (& (Rsp [3]));
  if ((Wrd95.Obj) == ((SCHEME_OBJECT) 0))
    goto label_68;

DEFLABEL (label_78)
  (Wrd108.Obj) = (Rsp [1]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 1))
    goto label_77;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd105.Obj) = ((Wrd107.pObj) [1]);

DEFLABEL (label_76)
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd116.uLng) == 1))
    goto label_75;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd114.Obj) = ((Wrd115.pObj) [1]);

DEFLABEL (label_74)
  if (! ((Wrd114.Obj) == (current_block [OBJECT_30_8])))
    goto label_68;
  Rvl = (current_block [OBJECT_30_5]);
  goto label_66;

DEFLABEL (label_75)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_26]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_41)
  (Wrd114.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_25]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_40)
  (Wrd105.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_81)
  Rsp = (& (Rsp [2]));
  goto label_78;

DEFLABEL (label_82)
  (Wrd131.Obj) = (Rsp [0]);
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_24]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 2);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  goto label_81;

DEFLABEL (label_84)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_23]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_7]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_22]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_38)
  (Wrd73.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_21]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_37)
  (Wrd60.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_92)
  Rsp = (& (Rsp [2]));
  goto label_89;

DEFLABEL (label_93)
  (Wrd142.Obj) = (Rsp [0]);
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_20]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 2);

DEFLABEL (label_43)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  goto label_92;

DEFLABEL (label_95)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_19]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_7]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (label_99)
  (Wrd148.Obj) = (current_block [OBJECT_30_5]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd148.Obj);
  goto label_96;

DEFLABEL (label_100)
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd149.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 2);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  goto label_99;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_30_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_78;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_30_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_89;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_17);
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (lambda_52)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_30_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_102;
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd5.Obj);

DEFLABEL (label_101)
  (Wrd41.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_102)
  if (! ((Wrd6.uLng) == 1))
    goto label_108;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_107)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_106;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_105)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_104;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_103)
  (Wrd38.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  goto label_101;

DEFLABEL (label_104)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_32]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_7]), 1);

DEFLABEL (label_48)
  (Wrd29.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_31]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_7]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_30]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_46)
  (Wrd13.Obj) = Rvl;
  goto label_107;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 12
#define DEBUGGING_LABEL_31_2 11
#define EXECUTE_CACHE_31_7 7
#define EXECUTE_CACHE_31_6 9
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto check_list_1;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_list_4)
DEFLABEL (check_list_1)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (label_5)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_11 9
#define LABEL_32_9 11
#define LABEL_32_8 13
#define LABEL_32_13 15
#define TAG_32_14 6
#define LABEL_32_15 17
#define LABEL_32_16 19
#define TAG_32_17 8
#define LABEL_32_24 21
#define LABEL_32_25 23
#define LABEL_32_27 25
#define LABEL_32_19 27
#define LABEL_32_20 29
#define LABEL_32_33 31
#define LABEL_32_34 33
#define LABEL_32_21 35
#define TAG_32_22 16
#define LABEL_32_35 37
#define LABEL_32_36 39
#define LABEL_32_37 41
#define LABEL_32_26 43
#define LABEL_32_40 45
#define LABEL_32_29 47
#define LABEL_32_30 49
#define LABEL_32_44 51
#define LABEL_32_31 53
#define TAG_32_32 25
#define LABEL_32_46 55
#define LABEL_32_42 57
#define LABEL_32_43 59
#define LABEL_32_45 61
#define LABEL_32_47 63
#define LABEL_32_48 65
#define TAG_32_49 31
#define LABEL_32_52 67
#define LABEL_32_51 69
#define ENVIRONMENT_LABEL_32_3 109
#define DEBUGGING_LABEL_32_2 108
#define OBJECT_32_12 107
#define OBJECT_32_11 106
#define OBJECT_32_10 105
#define OBJECT_32_9 104
#define OBJECT_32_8 103
#define OBJECT_32_7 102
#define OBJECT_32_6 101
#define OBJECT_32_5 100
#define OBJECT_32_4 99
#define OBJECT_32_3 98
#define OBJECT_32_2 97
#define OBJECT_32_1 96
#define OBJECT_32_0 95
#define EXECUTE_CACHE_32_53 71
#define EXECUTE_CACHE_32_50 73
#define EXECUTE_CACHE_32_41 75
#define EXECUTE_CACHE_32_39 77
#define EXECUTE_CACHE_32_38 79
#define EXECUTE_CACHE_32_28 81
#define EXECUTE_CACHE_32_23 83
#define EXECUTE_CACHE_32_18 85
#define EXECUTE_CACHE_32_12 87
#define EXECUTE_CACHE_32_10 89
#define EXECUTE_CACHE_32_7 91
#define FREE_REFERENCE_32_0 94
#define FREE_REFERENCES_LABEL_32_0 70
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd40;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd82;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_32_4);
      goto descriptions__pmodel_45;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_32_11);
      goto label_47;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_32_13);
      goto lambda_60;

    case 7:
      current_block = (Rpc - LABEL_32_15);
      goto continuation_21;

    case 8:
      current_block = (Rpc - LABEL_32_16);
      goto lambda_61;

    case 9:
      current_block = (Rpc - LABEL_32_24);
      goto label_50;

    case 10:
      current_block = (Rpc - LABEL_32_25);
      goto label_48;

    case 11:
      current_block = (Rpc - LABEL_32_27);
      goto label_49;

    case 12:
      current_block = (Rpc - LABEL_32_19);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_32_20);
      goto continuation_32;

    case 14:
      current_block = (Rpc - LABEL_32_33);
      goto continuation_23;

    case 15:
      current_block = (Rpc - LABEL_32_34);
      goto continuation_26;

    case 16:
      current_block = (Rpc - LABEL_32_21);
      goto lambda_62;

    case 17:
      current_block = (Rpc - LABEL_32_35);
      goto label_51;

    case 18:
      current_block = (Rpc - LABEL_32_36);
      goto label_53;

    case 19:
      current_block = (Rpc - LABEL_32_37);
      goto label_52;

    case 20:
      current_block = (Rpc - LABEL_32_26);
      goto continuation_19;

    case 21:
      current_block = (Rpc - LABEL_32_40);
      goto continuation_9;

    case 22:
      current_block = (Rpc - LABEL_32_29);
      goto continuation_8;

    case 23:
      current_block = (Rpc - LABEL_32_30);
      goto continuation_36;

    case 24:
      current_block = (Rpc - LABEL_32_44);
      goto label_54;

    case 25:
      current_block = (Rpc - LABEL_32_31);
      goto lambda_63;

    case 26:
      current_block = (Rpc - LABEL_32_46);
      goto label_55;

    case 27:
      current_block = (Rpc - LABEL_32_42);
      goto continuation_10;

    case 28:
      current_block = (Rpc - LABEL_32_43);
      goto continuation_37;

    case 29:
      current_block = (Rpc - LABEL_32_45);
      goto continuation_34;

    case 30:
      current_block = (Rpc - LABEL_32_47);
      goto continuation_41;

    case 31:
      current_block = (Rpc - LABEL_32_48);
      goto lambda_64;

    case 32:
      current_block = (Rpc - LABEL_32_52);
      goto label_56;

    case 33:
      current_block = (Rpc - LABEL_32_51);
      goto continuation_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (descriptions__pmodel_58)
DEFLABEL (descriptions__pmodel_45)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd8.Obj) = (current_block [OBJECT_32_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_65;
  (Wrd25.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (label_65)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_13])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_16])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  ((Wrd18.pObj) [2]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_18]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_32_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_21])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_23]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_32_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_31])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_18]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_32_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_67;
  Wrd9 = Wrd13;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_32_43);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_47]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_49);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_48])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_32_47);
  (Rsp [7]) = Rvl;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);
  (Rsp [6]) = (Wrd6.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_50]));

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_44])), (Wrd10.pObj));

DEFLABEL (label_54)
  (Wrd9.Obj) = Rvl;
  goto label_66;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_8);
  goto label_68;

DEFLABEL (lambda_59)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_32_6);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_70;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_70;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_69)
  (Wrd21.Obj) = (current_block [OBJECT_32_3]);
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (label_70)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_32_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_32_13);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_32_0])))
    goto label_71;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  Rvl = ((Wrd16.pObj) [4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_32_19);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_29]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_32_29);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd10.Obj) = (Rsp [3]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_75;

DEFLABEL (label_74)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_42]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_32_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_32_42);
  (Rsp [0]) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  ((Wrd13.pObj) [0]) = (Wrd6.Obj);
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_40]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_32_12]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_41]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_32_40);
  goto label_74;

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_32_16);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_77;

DEFLABEL (label_76)
  Rvl = (current_block [OBJECT_32_5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_83;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_76;

DEFLABEL (label_82)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_81;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_80)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_26]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_79;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_78)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_32_26);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_39]));

DEFLABEL (label_79)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_27]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_25]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_24]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_4]), 1);

DEFLABEL (label_50)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_82;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_32_21);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_95;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_95;
  (Wrd13.Obj) = ((Wrd17.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_94)
  (Wrd27.Obj) = (Rsp [0]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_84;
  if ((Wrd27.Obj) == (current_block [OBJECT_32_8]))
    goto label_84;
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_32_11]);
  (Rsp [2]) = (Wrd35.Obj);
  goto lambda_15;

DEFLABEL (label_84)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_93)
  (Wrd89.Obj) = (Rsp [3]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 62))
    goto label_92;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd88.Lng))))
    goto label_92;
  (Wrd82.Obj) = (Rsp [0]);
  ((Wrd86.pObj) [4]) = (Wrd82.Obj);

DEFLABEL (label_91)
  (Wrd38.Obj) = (Rsp [0]);
  if ((Wrd38.Obj) == ((SCHEME_OBJECT) 0))
    goto label_90;
  (Wrd40.Obj) = (current_block [OBJECT_32_10]);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_89;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd50.Lng))))
    goto label_89;
  (Wrd42.Obj) = ((Wrd48.pObj) [5]);

DEFLABEL (label_88)
  (Wrd61.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Rsp [2]) = (Wrd58.Obj);
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd78.uLng) == 62)
    goto label_86;

DEFLABEL (label_85)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 3);

DEFLABEL (label_86)
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd76.Lng))))
    goto label_85;
  ((Wrd74.pObj) [5]) = (Wrd58.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_87)
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd64.Obj);
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd65.Obj) = ((Wrd67.pObj) [2]);
  (Rsp [2]) = (Wrd65.Obj);
  (Rsp [0]) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_38]));

DEFLABEL (label_89)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.Obj) = (current_block [OBJECT_32_10]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_37]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

DEFLABEL (label_52)
  (Wrd42.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_90)
  Rsp = (& (Rsp [2]));
  goto label_87;

DEFLABEL (label_92)
  (Wrd91.Obj) = (Rsp [3]);
  (Wrd92.Obj) = (current_block [OBJECT_32_7]);
  (Wrd93.Obj) = (Rsp [0]);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_36]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_9]), 3);

DEFLABEL (label_53)
  goto label_91;

DEFLABEL (label_95)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_32_7]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_35]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_32_33);
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_32_34);
  goto label_87;

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_32_31);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_97;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_97;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_96)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto lambda_15;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_32_45);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_38]));

DEFLABEL (label_97)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_32_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_46]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_32_48);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_99;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_99;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_98)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto lambda_15;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_32_51);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_53]));

DEFLABEL (label_99)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_32_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_52]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_98;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_7 5
#define LABEL_33_5 7
#define TAG_33_6 2
#define LABEL_33_10 9
#define LABEL_33_9 11
#define LABEL_33_12 13
#define LABEL_33_13 15
#define LABEL_33_14 17
#define LABEL_33_16 19
#define LABEL_33_11 21
#define LABEL_33_22 23
#define LABEL_33_17 25
#define TAG_33_18 11
#define LABEL_33_19 27
#define LABEL_33_27 29
#define LABEL_33_20 31
#define TAG_33_21 14
#define LABEL_33_15 33
#define LABEL_33_30 35
#define LABEL_33_31 37
#define LABEL_33_24 39
#define LABEL_33_34 41
#define LABEL_33_25 43
#define TAG_33_26 20
#define LABEL_33_29 45
#define LABEL_33_38 47
#define LABEL_33_32 49
#define TAG_33_33 23
#define LABEL_33_39 51
#define LABEL_33_40 53
#define LABEL_33_41 55
#define LABEL_33_43 57
#define LABEL_33_35 59
#define LABEL_33_36 61
#define LABEL_33_42 63
#define LABEL_33_47 65
#define LABEL_33_49 67
#define LABEL_33_44 69
#define TAG_33_45 33
#define LABEL_33_50 71
#define LABEL_33_51 73
#define LABEL_33_52 75
#define LABEL_33_54 77
#define LABEL_33_53 79
#define ENVIRONMENT_LABEL_33_3 107
#define DEBUGGING_LABEL_33_2 106
#define OBJECT_33_12 105
#define OBJECT_33_11 104
#define OBJECT_33_10 103
#define OBJECT_33_9 102
#define OBJECT_33_8 101
#define OBJECT_33_7 100
#define OBJECT_33_6 99
#define OBJECT_33_5 98
#define OBJECT_33_4 97
#define OBJECT_33_3 96
#define OBJECT_33_2 95
#define OBJECT_33_1 94
#define OBJECT_33_0 93
#define EXECUTE_CACHE_33_48 81
#define EXECUTE_CACHE_33_46 83
#define EXECUTE_CACHE_33_37 85
#define EXECUTE_CACHE_33_28 87
#define EXECUTE_CACHE_33_23 89
#define EXECUTE_CACHE_33_8 91
#define FREE_REFERENCES_LABEL_33_0 80
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd51;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd73;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd13;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd5;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_33_4);
      goto process_globals_info_45;

    case 1:
      current_block = (Rpc - LABEL_33_7);
      goto label_47;

    case 2:
      current_block = (Rpc - LABEL_33_5);
      goto lambda_68;

    case 3:
      current_block = (Rpc - LABEL_33_10);
      goto label_48;

    case 4:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_33_12);
      goto label_49;

    case 6:
      current_block = (Rpc - LABEL_33_13);
      goto loop_14;

    case 7:
      current_block = (Rpc - LABEL_33_14);
      goto label_51;

    case 8:
      current_block = (Rpc - LABEL_33_16);
      goto label_52;

    case 9:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_33_22);
      goto label_50;

    case 11:
      current_block = (Rpc - LABEL_33_17);
      goto lambda_16;

    case 12:
      current_block = (Rpc - LABEL_33_19);
      goto continuation_20;

    case 13:
      current_block = (Rpc - LABEL_33_27);
      goto label_53;

    case 14:
      current_block = (Rpc - LABEL_33_20);
      goto lambda_71;

    case 15:
      current_block = (Rpc - LABEL_33_15);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_33_30);
      goto label_55;

    case 17:
      current_block = (Rpc - LABEL_33_31);
      goto label_54;

    case 18:
      current_block = (Rpc - LABEL_33_24);
      goto continuation_32;

    case 19:
      current_block = (Rpc - LABEL_33_34);
      goto label_56;

    case 20:
      current_block = (Rpc - LABEL_33_25);
      goto lambda_72;

    case 21:
      current_block = (Rpc - LABEL_33_29);
      goto continuation_18;

    case 22:
      current_block = (Rpc - LABEL_33_38);
      goto continuation_38;

    case 23:
      current_block = (Rpc - LABEL_33_32);
      goto lambda_73;

    case 24:
      current_block = (Rpc - LABEL_33_39);
      goto label_57;

    case 25:
      current_block = (Rpc - LABEL_33_40);
      goto label_60;

    case 26:
      current_block = (Rpc - LABEL_33_41);
      goto label_58;

    case 27:
      current_block = (Rpc - LABEL_33_43);
      goto label_59;

    case 28:
      current_block = (Rpc - LABEL_33_35);
      goto continuation_23;

    case 29:
      current_block = (Rpc - LABEL_33_36);
      goto continuation_22;

    case 30:
      current_block = (Rpc - LABEL_33_42);
      goto continuation_35;

    case 31:
      current_block = (Rpc - LABEL_33_47);
      goto label_61;

    case 32:
      current_block = (Rpc - LABEL_33_49);
      goto continuation_28;

    case 33:
      current_block = (Rpc - LABEL_33_44);
      goto lambda_74;

    case 34:
      current_block = (Rpc - LABEL_33_50);
      goto label_62;

    case 35:
      current_block = (Rpc - LABEL_33_51);
      goto label_65;

    case 36:
      current_block = (Rpc - LABEL_33_52);
      goto label_63;

    case 37:
      current_block = (Rpc - LABEL_33_54);
      goto label_64;

    case 38:
      current_block = (Rpc - LABEL_33_53);
      goto continuation_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_globals_info_67)
DEFLABEL (process_globals_info_45)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_76;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_76;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);

DEFLABEL (label_75)
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (label_76)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_33_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_47)
  (Wrd12.Obj) = Rvl;
  goto label_75;

DEFLABEL (lambda_68)
  CLOSURE_HEADER (LABEL_33_5);

DEFLABEL (lambda_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_87;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd17.Lng))))
    goto label_87;
  (Wrd11.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_86)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_85;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_85;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_84)
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto loop_14;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_11);

DEFLABEL (label_83)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_17])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_19]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_20])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  ((Wrd20.pObj) [2]) = (Wrd8.Obj);
  ((Wrd20.pObj) [3]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_82;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd30.Lng))))
    goto label_82;
  (Wrd24.Obj) = ((Wrd28.pObj) [3]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_81)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_33_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_25])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_80;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd26.Lng))))
    goto label_80;
  (Wrd20.Obj) = ((Wrd24.pObj) [4]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_79)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_28]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_33_24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_32])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_78;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_78;
  (Wrd13.Obj) = ((Wrd19.pObj) [5]);

DEFLABEL (label_77)
  (Rsp [3]) = (Wrd13.Obj);
  (Wrd29.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd29.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (label_78)
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.Obj) = (current_block [OBJECT_33_11]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_34]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_56)
  (Wrd13.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd29.Obj) = (Rsp [5]);
  (Wrd30.Obj) = (current_block [OBJECT_33_5]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_27]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd33.Obj) = (Rsp [5]);
  (Wrd34.Obj) = (current_block [OBJECT_33_0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_22]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_85)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_33_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_33_3]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (loop_69)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_33_13);
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_99;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd46.Lng))))
    goto label_99;
  (Wrd38.Obj) = ((Wrd44.pObj) [4]);

DEFLABEL (label_98)
  if ((Wrd38.Obj) == (current_block [OBJECT_33_7]))
    goto label_88;
  Rsp = (& (Rsp [3]));
  goto label_83;

DEFLABEL (label_88)
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 1)
    goto label_91;
  (Wrd58.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (current_block [OBJECT_33_5]);
  (Rsp [1]) = (Wrd59.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd72.uLng) == 62)
    goto label_90;

DEFLABEL (label_89)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_9]), 3);

DEFLABEL (label_90)
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd70.Lng))))
    goto label_89;
  ((Wrd68.pObj) [4]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto label_83;

DEFLABEL (label_91)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd76.Obj);
  if (! ((Wrd57.uLng) == 1))
    goto label_97;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (* (--Rsp)) = (Wrd79.Obj);

DEFLABEL (label_96)
  (Wrd86.Obj) = (Rsp [7]);
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [2]);
  (* (--Rsp)) = (Wrd88.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_33_15);
  (* (--Rsp)) = Rvl;
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_95;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd24.Lng))))
    goto label_95;
  ((Wrd22.pObj) [4]) = Rvl;

DEFLABEL (label_94)
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_93;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_92)
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_14;

DEFLABEL (label_93)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_31]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_10]), 1);

DEFLABEL (label_54)
  (Wrd6.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (current_block [OBJECT_33_5]);
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_30]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_9]), 3);

DEFLABEL (label_55)
  goto label_94;

DEFLABEL (label_97)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_8]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_33_5]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_6]), 2);

DEFLABEL (label_51)
  (Wrd38.Obj) = Rvl;
  goto label_98;

DEFLABEL (lambda_70)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_33_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_23]));

DEFLABEL (lambda_71)
  CLOSURE_HEADER (LABEL_33_20);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_29]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_16;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_33_29);
  (Rsp [2]) = Rvl;
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_37]));

DEFLABEL (lambda_72)
  CLOSURE_HEADER (LABEL_33_25);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_36]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_16;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_33_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_37]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_33_35);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_44])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_46]));

DEFLABEL (lambda_73)
  CLOSURE_HEADER (LABEL_33_32);

DEFLABEL (lambda_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 10))
    goto label_111;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd8.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));

DEFLABEL (label_110)
  if ((Wrd8.Obj) == (current_block [OBJECT_33_0]))
    goto label_107;
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_106;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_106;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_105)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_104)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_42]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd50.Obj) = (Rsp [4]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_103;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd49.Lng))))
    goto label_103;
  (Wrd43.Obj) = ((Wrd47.pObj) [2]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_102)
  (Wrd57.Obj) = (Rsp [4]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [2]);
  (* (--Rsp)) = (Wrd59.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_33_42);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_101;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd18.Lng))))
    goto label_101;
  (Wrd10.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_100)
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [3]);
  (Rsp [4]) = (Wrd26.Obj);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_48]));

DEFLABEL (label_101)
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.Obj) = (current_block [OBJECT_33_3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_47]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_61)
  (Wrd10.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd52.Obj) = (Rsp [4]);
  (Wrd53.Obj) = (current_block [OBJECT_33_4]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_43]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (label_106)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_33_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_41]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_58)
  (Wrd21.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_107)
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_109;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd69.Lng))))
    goto label_109;
  (Wrd61.Obj) = ((Wrd67.pObj) [1]);

DEFLABEL (label_108)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);
  goto label_104;

DEFLABEL (label_109)
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (current_block [OBJECT_33_3]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_40]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_60)
  (Wrd61.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_39]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_12]), 1);

DEFLABEL (label_57)
  (Wrd8.Obj) = Rvl;
  goto label_110;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_33_38);
  (* (--Rsp)) = Rvl;
  goto label_104;

DEFLABEL (lambda_74)
  CLOSURE_HEADER (LABEL_33_44);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 10))
    goto label_121;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd8.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));

DEFLABEL (label_120)
  if ((Wrd8.Obj) == (current_block [OBJECT_33_0]))
    goto label_117;
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_116;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_116;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_115)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_114)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_53]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd50.Obj) = (Rsp [4]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_113;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd49.Lng))))
    goto label_113;
  (Wrd43.Obj) = ((Wrd47.pObj) [2]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_112)
  (Wrd57.Obj) = (Rsp [4]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [2]);
  (* (--Rsp)) = (Wrd59.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_33_53);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd10.Obj);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_48]));

DEFLABEL (label_113)
  (Wrd52.Obj) = (Rsp [4]);
  (Wrd53.Obj) = (current_block [OBJECT_33_4]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_54]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (label_116)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_33_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_52]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_63)
  (Wrd21.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_117)
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_119;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd69.Lng))))
    goto label_119;
  (Wrd61.Obj) = ((Wrd67.pObj) [1]);

DEFLABEL (label_118)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);
  goto label_114;

DEFLABEL (label_119)
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (current_block [OBJECT_33_3]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_51]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_65)
  (Wrd61.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_50]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_12]), 1);

DEFLABEL (label_62)
  (Wrd8.Obj) = Rvl;
  goto label_120;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_33_49);
  (* (--Rsp)) = Rvl;
  goto label_114;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define LABEL_34_7 9
#define LABEL_34_8 11
#define LABEL_34_11 13
#define TAG_34_12 5
#define LABEL_34_14 15
#define LABEL_34_15 17
#define LABEL_34_9 19
#define LABEL_34_16 21
#define LABEL_34_17 23
#define ENVIRONMENT_LABEL_34_3 37
#define DEBUGGING_LABEL_34_2 36
#define OBJECT_34_6 35
#define OBJECT_34_5 34
#define OBJECT_34_4 33
#define OBJECT_34_3 32
#define OBJECT_34_2 31
#define OBJECT_34_1 30
#define OBJECT_34_0 29
#define EXECUTE_CACHE_34_13 25
#define EXECUTE_CACHE_34_10 27
#define FREE_REFERENCES_LABEL_34_0 24
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd50;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
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
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_34_4);
      goto for_each_exported_name_24;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto loop_21;

    case 3:
      current_block = (Rpc - LABEL_34_7);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_34_8);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_34_11);
      goto lambda_36;

    case 6:
      current_block = (Rpc - LABEL_34_14);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_34_15);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_34_16);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_34_17);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_each_exported_name_34)
DEFLABEL (for_each_exported_name_24)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_38;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_37)
  (Wrd16.Obj) = (current_block [OBJECT_34_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_34_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto loop_21;

DEFLABEL (label_38)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (loop_35)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_34_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_39;
  (Wrd10.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_11])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [0]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (label_39)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_49;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_49;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_49;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd20.pObj) = (& ((Wrd27.pObj) [(Wrd17.Lng)]));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_48)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_47;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd45.Lng))))
    goto label_47;
  (Wrd39.Obj) = ((Wrd43.pObj) [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_46)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_34_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_44;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_43)
  (Wrd19.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_42;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  ((Wrd26.pObj) [1]) = (Wrd16.Obj);

DEFLABEL (label_41)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = ((Wrd22.Lng) + 1L);
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (Rsp [3]) = (Wrd20.Obj);

DEFLABEL (label_40)
  Rsp = (& (Rsp [3]));
  goto loop_21;

DEFLABEL (label_42)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_17]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_6]), 2);

DEFLABEL (label_32)
  goto label_41;

DEFLABEL (label_44)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_5]), 1);

DEFLABEL (label_31)
  (Wrd7.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd36.Lng) + 1L);
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  (Rsp [3]) = (Wrd34.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.Obj) = (current_block [OBJECT_34_1]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd46.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd50.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Rsp [4]) = (Wrd47.Obj);
  goto label_40;

DEFLABEL (label_47)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (current_block [OBJECT_34_2]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_34_11);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_53;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_52)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_51;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_50)
  (Rsp [2]) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_51)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_5]), 1);

DEFLABEL (label_30)
  (Wrd17.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_4]), 1);

DEFLABEL (label_29)
  (Wrd8.Obj) = Rvl;
  goto label_52;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_9 7
#define LABEL_35_6 9
#define LABEL_35_12 11
#define LABEL_35_7 13
#define TAG_35_8 5
#define LABEL_35_14 15
#define LABEL_35_11 17
#define LABEL_35_15 19
#define ENVIRONMENT_LABEL_35_3 31
#define DEBUGGING_LABEL_35_2 30
#define OBJECT_35_4 29
#define OBJECT_35_3 28
#define OBJECT_35_2 27
#define OBJECT_35_1 26
#define OBJECT_35_0 25
#define EXECUTE_CACHE_35_13 21
#define EXECUTE_CACHE_35_10 23
#define FREE_REFERENCES_LABEL_35_0 20
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
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
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_35_4);
      goto package_lookup_11;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto package_loop_9;

    case 2:
      current_block = (Rpc - LABEL_35_9);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_35_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_35_12);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_35_7);
      goto lambda_20;

    case 6:
      current_block = (Rpc - LABEL_35_14);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_35_11);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_35_15);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_lookup_18)
DEFLABEL (package_lookup_11)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto package_loop_9;

DEFLABEL (package_loop_19)
DEFLABEL (package_loop_9)
  INTERRUPT_CHECK (26, LABEL_35_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_7])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_28;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng))))
    goto label_28;
  (Wrd14.Obj) = ((Wrd18.pObj) [6]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_35_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_26;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_26;
  (Wrd14.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_35_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_24;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_24;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto package_loop_9;

DEFLABEL (label_24)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_35_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_16)
  (Wrd7.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_35_2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_35_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_35_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_33;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_32)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd24.Obj))
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_29;

DEFLABEL (label_30)
  Rvl = (current_block [OBJECT_35_4]);

DEFLABEL (label_29)
DEFLABEL (label_31)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_35_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define TAG_36_6 1
#define LABEL_36_8 7
#define ENVIRONMENT_LABEL_36_3 16
#define DEBUGGING_LABEL_36_2 15
#define OBJECT_36_1 14
#define OBJECT_36_0 13
#define EXECUTE_CACHE_36_9 9
#define EXECUTE_CACHE_36_7 11
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_36_4);
      goto name__package_2;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_36_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (name__package_6)
DEFLABEL (name__package_2)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_36_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_9;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_9;
  (Wrd8.Obj) = ((Wrd14.pObj) [2]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (label_9)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_36_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_6 5
#define LABEL_37_7 7
#define LABEL_37_5 9
#define LABEL_37_12 11
#define LABEL_37_8 13
#define LABEL_37_16 15
#define LABEL_37_9 17
#define LABEL_37_18 19
#define LABEL_37_19 21
#define LABEL_37_11 23
#define LABEL_37_21 25
#define LABEL_37_13 27
#define TAG_37_14 12
#define LABEL_37_25 29
#define LABEL_37_22 31
#define TAG_37_23 14
#define LABEL_37_27 33
#define LABEL_37_24 35
#define LABEL_37_30 37
#define LABEL_37_26 39
#define LABEL_37_33 41
#define LABEL_37_28 43
#define TAG_37_29 20
#define LABEL_37_34 45
#define LABEL_37_35 47
#define LABEL_37_31 49
#define TAG_37_32 23
#define LABEL_37_37 51
#define LABEL_37_38 53
#define ENVIRONMENT_LABEL_37_3 76
#define DEBUGGING_LABEL_37_2 75
#define OBJECT_37_7 74
#define OBJECT_37_6 73
#define OBJECT_37_5 72
#define OBJECT_37_4 71
#define OBJECT_37_3 70
#define OBJECT_37_2 69
#define OBJECT_37_1 68
#define OBJECT_37_0 67
#define EXECUTE_CACHE_37_36 55
#define EXECUTE_CACHE_37_20 57
#define EXECUTE_CACHE_37_17 59
#define EXECUTE_CACHE_37_15 61
#define EXECUTE_CACHE_37_10 63
#define FREE_REFERENCE_37_0 66
#define FREE_REFERENCES_LABEL_37_0 54
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_37_4);
      goto process_package_description_27;

    case 1:
      current_block = (Rpc - LABEL_37_6);
      goto label_29;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_37_12);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_37_16);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_37_9);
      goto lambda_4;

    case 8:
      current_block = (Rpc - LABEL_37_18);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_37_19);
      goto label_33;

    case 10:
      current_block = (Rpc - LABEL_37_11);
      goto continuation_17;

    case 11:
      current_block = (Rpc - LABEL_37_21);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_37_13);
      goto lambda_45;

    case 13:
      current_block = (Rpc - LABEL_37_25);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_37_22);
      goto lambda_47;

    case 15:
      current_block = (Rpc - LABEL_37_27);
      goto label_36;

    case 16:
      current_block = (Rpc - LABEL_37_24);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_37_30);
      goto label_37;

    case 18:
      current_block = (Rpc - LABEL_37_26);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_37_33);
      goto label_38;

    case 20:
      current_block = (Rpc - LABEL_37_28);
      goto lambda_48;

    case 21:
      current_block = (Rpc - LABEL_37_34);
      goto label_39;

    case 22:
      current_block = (Rpc - LABEL_37_35);
      goto label_40;

    case 23:
      current_block = (Rpc - LABEL_37_31);
      goto lambda_49;

    case 24:
      current_block = (Rpc - LABEL_37_37);
      goto label_41;

    case 25:
      current_block = (Rpc - LABEL_37_38);
      goto label_42;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_package_description_44)
DEFLABEL (process_package_description_27)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_60;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_60;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_59)
  (Wrd24.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_37_8);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [6]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_58;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_58;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_37_7);
  (Rsp [2]) = Rvl;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 62)
    goto label_51;

DEFLABEL (label_50)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 3);

DEFLABEL (label_51)
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd40.Lng))))
    goto label_50;
  ((Wrd38.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [4]));

DEFLABEL (label_56)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_55;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_55;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_54)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_13])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd28 = Wrd25;
  (Wrd29.Obj) = (Rsp [4]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_15]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_37_11);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_53;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_53;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_52)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_22])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_15]));

DEFLABEL (label_53)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_37_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_34)
  (Wrd5.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_37_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_58)
  (Wrd16.Obj) = (Rsp [6]);
  (Wrd17.Obj) = (current_block [OBJECT_37_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_37_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_5);
  goto label_56;

DEFLABEL (lambda_46)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_37_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_64;
  Wrd5 = Wrd9;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_62;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_61)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_20]));

DEFLABEL (label_62)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_19]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_4]), 1);

DEFLABEL (label_33)
  (Wrd11.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_18])), (Wrd6.pObj));

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_63;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_37_13);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_68;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_67)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_37_24);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_28])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_66;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_65)
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_15]));

DEFLABEL (label_66)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_30]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_4]), 1);

DEFLABEL (label_37)
  (Wrd14.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_25]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_37_22);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_72;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_71)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_37_26);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_31])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_70;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_69)
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_15]));

DEFLABEL (label_70)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_33]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_4]), 1);

DEFLABEL (label_38)
  (Wrd14.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_27]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_37_28);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_76;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_75)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_74;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_73)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Rsp [4]) = (Wrd28.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_37_6]);
  (Rsp [5]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_36]));

DEFLABEL (label_74)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_35]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_4]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_34]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_37_31);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_80;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_79)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_78;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_77)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = ((Wrd27.pObj) [2]);
  (Rsp [4]) = (Wrd29.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_37_6]);
  (Rsp [5]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_36]));

DEFLABEL (label_78)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_38]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_4]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_79;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define LABEL_38_7 9
#define ENVIRONMENT_LABEL_38_3 18
#define DEBUGGING_LABEL_38_2 17
#define OBJECT_38_3 16
#define OBJECT_38_2 15
#define OBJECT_38_1 14
#define OBJECT_38_0 13
#define EXECUTE_CACHE_38_8 11
#define FREE_REFERENCES_LABEL_38_0 10
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_38_4);
      goto process_package_load_3;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_38_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_package_load_9)
DEFLABEL (process_package_load_3)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_13;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd30.Lng))))
    goto label_13;
  (Wrd22.Obj) = ((Wrd28.pObj) [5]);

DEFLABEL (label_12)
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_11;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd46.Lng))))
    goto label_11;
  (Wrd38.Obj) = ((Wrd44.pObj) [6]);

DEFLABEL (label_10)
  (Rsp [3]) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (label_11)
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.Obj) = (current_block [OBJECT_38_3]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_7)
  (Wrd38.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.Obj) = (current_block [OBJECT_38_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_6)
  (Wrd22.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_38_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define LABEL_39_8 9
#define LABEL_39_9 11
#define ENVIRONMENT_LABEL_39_3 22
#define DEBUGGING_LABEL_39_2 21
#define OBJECT_39_5 20
#define OBJECT_39_4 19
#define OBJECT_39_3 18
#define OBJECT_39_2 17
#define OBJECT_39_1 16
#define OBJECT_39_0 15
#define EXECUTE_CACHE_39_6 13
#define FREE_REFERENCES_LABEL_39_0 12
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd19;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd57;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_39_4);
      goto bindB_6;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_39_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_39_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bindB_12)
DEFLABEL (bindB_6)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_20;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 62))
    goto label_18;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd63.Lng))))
    goto label_18;
  (Wrd57.Obj) = (Rsp [0]);
  ((Wrd61.pObj) [6]) = (Wrd57.Obj);

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd19.Obj);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_16;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd28.Lng))))
    goto label_16;
  (Wrd20.Obj) = ((Wrd26.pObj) [3]);

DEFLABEL (label_15)
  (Wrd39.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Rsp [4]) = (Wrd36.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_39_4]);
  (Rsp [3]) = (Wrd40.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 62)
    goto label_14;

DEFLABEL (label_13)
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 3);

DEFLABEL (label_14)
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd51.Lng))))
    goto label_13;
  (Wrd44.Obj) = (Rsp [2]);
  ((Wrd49.pObj) [3]) = (Wrd44.Obj);
  Rvl = (current_block [OBJECT_39_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (current_block [OBJECT_39_4]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_9)
  (Wrd20.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.Obj) = (current_block [OBJECT_39_2]);
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 3);

DEFLABEL (label_10)
  goto label_17;

DEFLABEL (label_20)
  (Wrd15.Obj) = (current_block [OBJECT_39_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_10 7
#define LABEL_40_12 9
#define LABEL_40_13 11
#define LABEL_40_14 13
#define LABEL_40_15 15
#define LABEL_40_7 17
#define LABEL_40_16 19
#define LABEL_40_18 21
#define LABEL_40_19 23
#define LABEL_40_20 25
#define LABEL_40_8 27
#define TAG_40_9 12
#define LABEL_40_23 29
#define ENVIRONMENT_LABEL_40_3 50
#define DEBUGGING_LABEL_40_2 49
#define OBJECT_40_7 48
#define OBJECT_40_6 47
#define OBJECT_40_5 46
#define OBJECT_40_4 45
#define OBJECT_40_3 44
#define OBJECT_40_2 43
#define OBJECT_40_1 42
#define OBJECT_40_0 41
#define EXECUTE_CACHE_40_22 31
#define EXECUTE_CACHE_40_21 33
#define EXECUTE_CACHE_40_17 35
#define EXECUTE_CACHE_40_11 37
#define EXECUTE_CACHE_40_6 39
#define FREE_REFERENCES_LABEL_40_0 30
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd75;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd128;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd92;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd101;
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
      current_block = (Rpc - LABEL_40_4);
      goto linkB_19;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_40_10);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_40_12);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_40_13);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_40_14);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_40_15);
      goto continuation_15;

    case 7:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_40_16);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_40_18);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_40_19);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_40_20);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_40_8);
      goto lambda_31;

    case 13:
      current_block = (Rpc - LABEL_40_23);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (linkB_30)
DEFLABEL (linkB_19)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_8])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [5]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_46;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng))))
    goto label_46;
  (Wrd14.Obj) = ((Wrd18.pObj) [6]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_38;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_38;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_37)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_36;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd31.Lng))))
    goto label_36;
  (Wrd23.Obj) = ((Wrd29.pObj) [4]);

DEFLABEL (label_35)
  (Wrd39.Obj) = (* (Rsp++));
  if ((Wrd23.Obj) == (Wrd39.Obj))
    goto label_34;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_15]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_40_6]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_22]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_40_15);

DEFLABEL (label_34)
  (Wrd46.Obj) = (Rsp [7]);
  if ((Wrd46.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 62))
    goto label_33;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd60.Lng))))
    goto label_33;
  (Wrd54.Obj) = (current_block [OBJECT_40_4]);
  ((Wrd58.pObj) [5]) = (Wrd54.Obj);

DEFLABEL (label_32)
  (Wrd49.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (Rsp [4]) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd50.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_21]));

DEFLABEL (label_33)
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.Obj) = (current_block [OBJECT_40_5]);
  (Wrd65.Obj) = (current_block [OBJECT_40_4]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_20]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 3);

DEFLABEL (label_24)
  goto label_32;

DEFLABEL (label_36)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_40_3]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_19]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_23)
  (Wrd23.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_40_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd82.Obj) = (Rsp [3]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 62))
    goto label_44;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd81.Lng))))
    goto label_44;
  (Wrd75.Obj) = ((Wrd79.pObj) [4]);
  (* (--Rsp)) = (Wrd75.Obj);

DEFLABEL (label_43)
  (Wrd89.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd90.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd90.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_40_12);
  (Rsp [0]) = Rvl;
  (Wrd101.Obj) = (Rsp [4]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 62))
    goto label_42;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd100.Lng))))
    goto label_42;
  (Wrd92.Obj) = ((Wrd98.pObj) [6]);

DEFLABEL (label_41)
  (Wrd111.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd111.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd110.pObj) = (& (Rhp [-2]));
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd110.pObj)));
  (Wrd121.Obj) = (Rsp [4]);
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd122.uLng) == 62))
    goto label_40;
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd121.Obj));
  (Wrd119.Obj) = ((Wrd118.pObj) [0]);
  (Wrd120.Lng) = (FIXNUM_TO_LONG (Wrd119.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd120.Lng))))
    goto label_40;
  ((Wrd118.pObj) [6]) = (Wrd108.Obj);
  goto label_32;

DEFLABEL (label_40)
  (Wrd123.Obj) = (Rsp [4]);
  (Wrd124.Obj) = (current_block [OBJECT_40_0]);
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_14]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 3);

DEFLABEL (label_28)
  goto label_32;

DEFLABEL (label_42)
  (Wrd103.Obj) = (Rsp [4]);
  (Wrd104.Obj) = (current_block [OBJECT_40_0]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_13]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_27)
  (Wrd92.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd84.Obj) = (Rsp [3]);
  (Wrd85.Obj) = (current_block [OBJECT_40_3]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_16]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.Obj) = (current_block [OBJECT_40_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_40_8);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_51;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_51;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_50)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd24.Obj))
    goto label_48;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_47;

DEFLABEL (label_48)
  Rvl = (current_block [OBJECT_40_4]);

DEFLABEL (label_47)
DEFLABEL (label_49)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_40_7]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_50;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_8 5
#define LABEL_41_5 7
#define LABEL_41_12 9
#define LABEL_41_6 11
#define TAG_41_7 4
#define LABEL_41_13 13
#define LABEL_41_10 15
#define LABEL_41_14 17
#define LABEL_41_16 19
#define LABEL_41_17 21
#define LABEL_41_18 23
#define ENVIRONMENT_LABEL_41_3 39
#define DEBUGGING_LABEL_41_2 38
#define OBJECT_41_6 37
#define OBJECT_41_5 36
#define OBJECT_41_4 35
#define OBJECT_41_3 34
#define OBJECT_41_2 33
#define OBJECT_41_1 32
#define OBJECT_41_0 31
#define EXECUTE_CACHE_41_15 25
#define EXECUTE_CACHE_41_11 27
#define EXECUTE_CACHE_41_9 29
#define FREE_REFERENCES_LABEL_41_0 24
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd6;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_41_4);
      goto intern_bindingB_16;

    case 1:
      current_block = (Rpc - LABEL_41_8);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_41_12);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_41_6);
      goto lambda_26;

    case 5:
      current_block = (Rpc - LABEL_41_13);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_41_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_41_14);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_41_16);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_41_17);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_41_18);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (intern_bindingB_25)
DEFLABEL (intern_bindingB_16)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_38;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng))))
    goto label_38;
  (Wrd14.Obj) = ((Wrd18.pObj) [6]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_41_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_41_14);
  (* (--Rsp)) = Rvl;
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 62))
    goto label_32;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd53.Lng))))
    goto label_32;
  ((Wrd51.pObj) [4]) = Rvl;

DEFLABEL (label_31)
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_30;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_30;
  (Wrd7.Obj) = ((Wrd13.pObj) [6]);

DEFLABEL (label_29)
  (Wrd26.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_28;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd36.Lng))))
    goto label_28;
  ((Wrd34.pObj) [6]) = (Wrd23.Obj);

DEFLABEL (label_27)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_41_0]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_18]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_4]), 3);

DEFLABEL (label_22)
  goto label_27;

DEFLABEL (label_30)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_41_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.Obj) = (current_block [OBJECT_41_6]);
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_16]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_4]), 3);

DEFLABEL (label_23)
  goto label_31;

DEFLABEL (label_33)
  (Wrd7.Obj) = (Rsp [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_35;

DEFLABEL (label_34)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 62))
    goto label_36;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_36;
  (Wrd13.Obj) = (current_block [OBJECT_41_2]);
  ((Wrd17.pObj) [5]) = (Wrd13.Obj);
  goto label_34;

DEFLABEL (label_36)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_41_3]);
  (Wrd24.Obj) = (current_block [OBJECT_41_2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_4]), 3);

DEFLABEL (label_19)
  goto label_34;

DEFLABEL (label_38)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_41_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_41_6);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_43;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_43;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_42)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd24.Obj))
    goto label_40;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_39;

DEFLABEL (label_40)
  Rvl = (current_block [OBJECT_41_2]);

DEFLABEL (label_39)
DEFLABEL (label_41)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_41_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_8 5
#define LABEL_42_5 7
#define LABEL_42_13 9
#define LABEL_42_6 11
#define TAG_42_7 4
#define LABEL_42_15 13
#define LABEL_42_16 15
#define LABEL_42_12 17
#define LABEL_42_10 19
#define LABEL_42_17 21
#define LABEL_42_18 23
#define LABEL_42_20 25
#define LABEL_42_21 27
#define LABEL_42_22 29
#define LABEL_42_23 31
#define LABEL_42_19 33
#define ENVIRONMENT_LABEL_42_3 50
#define DEBUGGING_LABEL_42_2 49
#define OBJECT_42_7 48
#define OBJECT_42_6 47
#define OBJECT_42_5 46
#define OBJECT_42_4 45
#define OBJECT_42_3 44
#define OBJECT_42_2 43
#define OBJECT_42_1 42
#define OBJECT_42_0 41
#define EXECUTE_CACHE_42_14 35
#define EXECUTE_CACHE_42_11 37
#define EXECUTE_CACHE_42_9 39
#define FREE_REFERENCES_LABEL_42_0 34
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
redpkg_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_42_4);
      goto make_reference_21;

    case 1:
      current_block = (Rpc - LABEL_42_8);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_42_13);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_42_6);
      goto lambda_33;

    case 5:
      current_block = (Rpc - LABEL_42_15);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_42_16);
      goto continuation_18;

    case 7:
      current_block = (Rpc - LABEL_42_12);
      goto continuation_17;

    case 8:
      current_block = (Rpc - LABEL_42_10);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_42_17);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_42_18);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_42_20);
      goto lambda_5;

    case 12:
      current_block = (Rpc - LABEL_42_21);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_42_22);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_42_23);
      goto label_29;

    case 15:
      current_block = (Rpc - LABEL_42_19);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_reference_32)
DEFLABEL (make_reference_21)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_45;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd20.Lng))))
    goto label_45;
  (Wrd14.Obj) = ((Wrd18.pObj) [7]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_9]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_42_10);
  (Rsp [0]) = Rvl;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_38;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd14.Lng))))
    goto label_38;
  (Wrd6.Obj) = ((Wrd12.pObj) [7]);

DEFLABEL (label_37)
  (Wrd25.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_36;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd40.Lng))))
    goto label_36;
  ((Wrd38.pObj) [7]) = (Wrd22.Obj);

DEFLABEL (label_35)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_19]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.pObj) = (& (Rsp [2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  goto lambda_5;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_42_19);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_42_0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_18]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_5]), 3);

DEFLABEL (label_27)
  goto label_35;

DEFLABEL (label_38)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_42_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_17]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_26)
  (Wrd6.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 62))
    goto label_43;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_43;
  (Wrd12.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_42)
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_14]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_42_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;

DEFLABEL (label_40)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.pObj) = (& (Rsp [2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_5;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_42_16);
  goto label_40;

DEFLABEL (label_43)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_42_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_42_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_42_6);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_50;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_50;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_49)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd24.Obj))
    goto label_47;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_46;

DEFLABEL (label_47)
  Rvl = (current_block [OBJECT_42_4]);

DEFLABEL (label_46)
DEFLABEL (label_48)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_42_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_49;

DEFLABEL (lambda_34)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_42_20);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_58;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_58;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_57)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd80.Obj) = (Rsp [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 62))
    goto label_56;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd79.Lng))))
    goto label_56;
  ((Wrd77.pObj) [4]) = (Wrd21.Obj);

DEFLABEL (label_55)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd46.uLng) == 62))
    goto label_54;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd42.Lng))))
    goto label_54;
  (Wrd30.Obj) = ((Wrd40.pObj) [5]);

DEFLABEL (label_53)
  (Wrd57.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Rsp [2]) = (Wrd54.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_42_6]);
  (Rsp [1]) = (Wrd58.Obj);
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 62)
    goto label_52;

DEFLABEL (label_51)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_5]), 3);

DEFLABEL (label_52)
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_51;
  ((Wrd67.pObj) [5]) = (Wrd54.Obj);
  Rvl = (current_block [OBJECT_42_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [2]);
  (Wrd50.Obj) = (current_block [OBJECT_42_6]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_23]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_29)
  (Wrd30.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.Obj) = (current_block [OBJECT_42_2]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_22]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_5]), 3);

DEFLABEL (label_30)
  goto label_55;

DEFLABEL (label_58)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_42_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_57;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_8 7
#define LABEL_9 9
#define LABEL_10 11
#define ENVIRONMENT_LABEL_3 30
#define DEBUGGING_LABEL_2 29
#define PURIFICATION_ROOT 28
#define OBJECT_10 27
#define OBJECT_9 26
#define OBJECT_8 25
#define OBJECT_7 24
#define OBJECT_6 23
#define OBJECT_5 22
#define OBJECT_4 21
#define OBJECT_3 20
#define OBJECT_2 19
#define OBJECT_1 18
#define OBJECT_0 17
#define GLOBAL_EXECUTE_CACHE_7 13
#define GLOBAL_EXECUTE_CACHE_6 15
#define FREE_REFERENCES_LABEL_0 12
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
redpkg_so_e80fd1c24f2d13c0 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_4);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto expression_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_6)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_10)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_9)
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
	1,
	1,
	1,
	2,
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
	2,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	2,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	0,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 42)
      goto label_8;
    blocks = (current_block [OBJECT_10]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_8])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_8)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd20.Obj) = (MAKE_OBJECT (0, 3));
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd16.pObj) = (& (Rhp [-4]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd16.Obj) = (MAKE_OBJECT (0, 2));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-3]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_6]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

INVOKE_INTERFACE_TARGET_1
}

static const struct liarc_code_S arr_decl_redpkg_so_e80fd1c24f2d13c0 [42] =
  {
    { "redpkg_so_code_1", 12, redpkg_so_code_1 },
    { "redpkg_so_code_2", 14, redpkg_so_code_2 },
    { "redpkg_so_code_3", 28, redpkg_so_code_3 },
    { "redpkg_so_code_4", 4, redpkg_so_code_4 },
    { "redpkg_so_code_5", 10, redpkg_so_code_5 },
    { "redpkg_so_code_6", 1, redpkg_so_code_6 },
    { "redpkg_so_code_7", 1, redpkg_so_code_7 },
    { "redpkg_so_code_8", 1, redpkg_so_code_8 },
    { "redpkg_so_code_9", 1, redpkg_so_code_9 },
    { "redpkg_so_code_10", 1, redpkg_so_code_10 },
    { "redpkg_so_code_11", 1, redpkg_so_code_11 },
    { "redpkg_so_code_12", 22, redpkg_so_code_12 },
    { "redpkg_so_code_13", 15, redpkg_so_code_13 },
    { "redpkg_so_code_14", 6, redpkg_so_code_14 },
    { "redpkg_so_code_15", 19, redpkg_so_code_15 },
    { "redpkg_so_code_16", 5, redpkg_so_code_16 },
    { "redpkg_so_code_17", 6, redpkg_so_code_17 },
    { "redpkg_so_code_18", 3, redpkg_so_code_18 },
    { "redpkg_so_code_19", 2, redpkg_so_code_19 },
    { "redpkg_so_code_20", 58, redpkg_so_code_20 },
    { "redpkg_so_code_21", 20, redpkg_so_code_21 },
    { "redpkg_so_code_22", 6, redpkg_so_code_22 },
    { "redpkg_so_code_23", 9, redpkg_so_code_23 },
    { "redpkg_so_code_24", 27, redpkg_so_code_24 },
    { "redpkg_so_code_25", 4, redpkg_so_code_25 },
    { "redpkg_so_code_26", 6, redpkg_so_code_26 },
    { "redpkg_so_code_27", 22, redpkg_so_code_27 },
    { "redpkg_so_code_28", 1, redpkg_so_code_28 },
    { "redpkg_so_code_29", 3, redpkg_so_code_29 },
    { "redpkg_so_code_30", 25, redpkg_so_code_30 },
    { "redpkg_so_code_31", 2, redpkg_so_code_31 },
    { "redpkg_so_code_32", 34, redpkg_so_code_32 },
    { "redpkg_so_code_33", 39, redpkg_so_code_33 },
    { "redpkg_so_code_34", 11, redpkg_so_code_34 },
    { "redpkg_so_code_35", 9, redpkg_so_code_35 },
    { "redpkg_so_code_36", 3, redpkg_so_code_36 },
    { "redpkg_so_code_37", 26, redpkg_so_code_37 },
    { "redpkg_so_code_38", 4, redpkg_so_code_38 },
    { "redpkg_so_code_39", 5, redpkg_so_code_39 },
    { "redpkg_so_code_40", 14, redpkg_so_code_40 },
    { "redpkg_so_code_41", 11, redpkg_so_code_41 },
    { "redpkg_so_code_42", 16, redpkg_so_code_42 }
  };

int
decl_redpkg_so_e80fd1c24f2d13c0 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_redpkg_so_e80fd1c24f2d13c0);
  return (0);
}

DECLARE_COMPILED_CODE ("redpkg.so", 5, decl_redpkg_so_e80fd1c24f2d13c0, redpkg_so_e80fd1c24f2d13c0)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_redpkg_so_data_e80fd1c24f2d13c0 [8532] =
  "\xbb\x01\x54\xaa\x11\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x07\x28"
  "\x0d\xb9\x28\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x28\x0d\xbd\x28\x0d"
  "\xbe\x28\x0d\xbf\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x0c\x0c\x06"
  "\x07\x85\xc2\x1c\x02\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c"
  "\x28\xb1\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x83\x88\x0c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\xc1\x1c\xc1\x1c\x08"
  "\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x07\x85\x84"
  "\xc2\x1c\x82\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x85\x88\x82\xc2\x1c\x80\x1b\x1b\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x22"
  "\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d"
  "\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x82\x84\x83\x07\x1b\x1b\x86\x0c"
  "\x08\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\xb4\x28\xb7\x28"
  "\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\xbf\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c"
  "\xc2\x07\x81\x1b\x82\x0c\x1b\x86\x28\x1b\x28\x0d\x1c\x28\xb1\x28"
  "\x0d\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x80\x1b\x08\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x06\x85\x1b"
  "\x02\x07\x1d\x80\x1b\x81\x1b\x82\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x86\x1b\x83\x0d\x1c\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x85\xc3\x1c\x84\x1d\x81\x1b\x82\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1c\x1b\x0c"
  "\x06\x07\x85\x1b\x02\x0c\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x1c\x0d"
  "\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\xb1\x28\xb2\x28\x1b\x28\x0d"
  "\xb9\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x0c\x08\x0c\x06\x1b\x1b\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x1b\x06\x07\x85\x1b\x02\x1b\x1d\x0c\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x86\x1b\x02\x84\x1b"
  "\x85\x08\x1d\x0c\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x24"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x0c\x1b\x0d\x1c\x24\x28\x1b\x28"
  "\x1b\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x06\x07\x85\x1b\x02\x1b"
  "\x1b\x1b\x1b\x1b\x24\x28\xb4\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x08"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x1b\x06\x07\x85\x1b\x02\x0c\x1b\x28\xb4\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x07\x84\x1b\x1b\x83\x1b\x1d\x1b\x0d\x1c\x1b\x81\x08\x0d\x1c\x24"
  "\x28\xb4\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\xbc\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x84\x1b\x1b\x1b\x1b\x1b\x83"
  "\x81\x80\x07\x1b\x82\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1b\x1b\x1b\x80\x08"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x82\x83\x1b\x85\x28\x0d\x1c\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x07"
  "\x02\x1b\x86\x1b\x1b\x82\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85"
  "\x84\x1b\x82\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x82\x1b\x85\x1b\x83\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x82\x0c\x84\x07\x83\x1b\x1b\x85\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x82\x1b\x84\x07\x1b"
  "\x85\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x84\x1b\x07\x82\x83\x1b\x86\x28\x1b"
  "\x28\x0d\x28\xb1\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x0d\x99"
  "\x08\x0d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\xb4\xb5\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb2"
  "\x1b\x0d\x1b\x1b\xb7\x1b\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x1b\xb3\xb6"
  "\x0d\x17\x0d\x0c\x0d\x0d\x0d\x9a\x82\x81\x80\x9a\x83\x28\x0d\x28"
  "\x0d\x26\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x52"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x63\x72\x65\x66\x2f\x2e\x2f\x72\x65\x64\x70\x6b\x67\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x24\x4d\x61\x6c\x66\x6f\x72\x6d\x65"
  "\x64\x20\x70\x61\x63\x6b\x61\x67\x65\x2d\x64\x65\x73\x63\x72\x69"
  "\x70\x74\x69\x6f\x6e\x20\x66\x69\x6c\x65\x3a\x03\x10\x6d\x65\x72"
  "\x67\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x73\x04\x15\x72\x65"
  "\x61\x64\x2d\x61\x6e\x64\x2d\x70\x61\x72\x73\x65\x2d\x6d\x6f\x64"
  "\x65\x6c\x03\x12\x73\x6f\x72\x74\x2d\x64\x65\x73\x63\x72\x69\x70"
  "\x74\x69\x6f\x6e\x73\x04\x04\x6d\x61\x70\x07\x15\x64\x65\x73\x63"
  "\x72\x69\x70\x74\x69\x6f\x6e\x73\x2d\x3e\x70\x6d\x6f\x64\x65\x6c"
  "\x05\x18\x66\x69\x6e\x64\x2d\x67\x6c\x6f\x62\x61\x6c\x2d\x64\x65"
  "\x66\x69\x6e\x69\x74\x69\x6f\x6e\x73\x04\x08\x66\x61\x73\x6c\x6f"
  "\x61\x64\x03\x0e\x70\x61\x63\x6b\x61\x67\x65\x2d\x66\x69\x6c\x65"
  "\x3f\x04\x05\x77\x61\x72\x6e\x09\x03\x0d\x2d\x3e\x6e\x61\x6d\x65"
  "\x73\x74\x72\x69\x6e\x67\x0a\x0b\x11\x1a\x81\x85\x02\x10\x18\x81"
  "\x85\x02\x0f\x16\x81\x85\x02\x0e\x14\x81\x83\x02\x0d\x12\x81\x85"
  "\x02\x0c\x10\x81\x85\x02\x0b\x0e\x81\x8b\x02\x0a\x0c\x81\x8b\x02"
  "\x09\x0a\x81\x89\x02\x08\x08\x81\x87\x02\x07\x06\x81\x85\x02\x06"
  "\x04\x84\x06\x19\x33\x0b\x02\x23\x43\x6f\x75\x6c\x64\x20\x6e\x6f"
  "\x74\x20\x66\x69\x6e\x64\x20\x67\x6c\x6f\x62\x61\x6c\x20\x64\x65"
  "\x66\x69\x6e\x69\x74\x69\x6f\x6e\x73\x3a\x14\x4e\x6f\x74\x20\x61"
  "\x20\x67\x6c\x6f\x62\x61\x6c\x73\x20\x6e\x61\x6d\x65\x3a\x0d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x0c\x1e\x03\x0b\x2d"
  "\x3e\x70\x61\x74\x68\x6e\x61\x6d\x65\x0d\x04\x06\x65\x72\x72\x6f"
  "\x72\x0e\x03\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65\x04"
  "\x15\x70\x61\x63\x6b\x61\x67\x65\x2d\x73\x65\x74\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x0f\x04\x03\x0e\x69\x67\x6e\x6f\x72\x65\x2d"
  "\x65\x72\x72\x6f\x72\x73\x03\x0d\x66\x69\x6c\x65\x2d\x65\x78\x69"
  "\x73\x74\x73\x3f\x10\x03\x0b\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x3f\x03\x18\x73\x79\x73\x74\x65\x6d\x2d\x6c\x69\x62\x72\x61\x72"
  "\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x04\x09\x0b\x1f\x1e\x81"
  "\x8b\x02\x1e\x1c\x81\x8b\x02\x1d\x1a\x81\x8b\x02\x1c\x18\x81\x83"
  "\x02\x1b\x16\x81\x89\x02\x1a\x14\x81\x89\x02\x19\x12\x81\x83\x02"
  "\x18\x10\x81\x89\x02\x17\x0e\x81\x89\x02\x16\x0c\x81\x87\x02\x15"
  "\x0a\x81\x83\x02\x14\x08\x85\x08\x13\x06\x81\x89\x02\x12\x04\x81"
  "\x8b\x02\x1d\x3c\x11\x02\x18\x55\x6e\x65\x78\x70\x65\x63\x74\x65"
  "\x64\x20\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x3a\x14\x6e"
  "\x65\x73\x74\x65\x64\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f"
  "\x6e\x73\x12\x13\x67\x6c\x6f\x62\x61\x6c\x2d\x64\x65\x66\x69\x6e"
  "\x69\x74\x69\x6f\x6e\x73\x13\x0f\x65\x78\x74\x65\x6e\x64\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x14\x0f\x64\x65\x66\x69\x6e\x65\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x15\x04\x63\x61\x72\x16\x04\x63\x64\x72"
  "\x17\x03\x1d\x69\x6e\x74\x65\x72\x65\x73\x74\x69\x6e\x67\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x2d\x74\x6f\x2d\x6c\x6f\x61\x64\x3f\x18"
  "\x03\x08\x72\x65\x76\x65\x72\x73\x65\x04\x09\x04\x08\x61\x70\x70"
  "\x65\x6e\x64\x21\x19\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x06"
  "\x3b\x3a\x81\x85\x02\x3a\x38\x81\x89\x02\x39\x36\x81\x89\x02\x38"
  "\x34\x81\x89\x02\x37\x32\x81\x89\x02\x36\x30\x86\x0a\x35\x2e\xfd"
  "\xff\x03\x34\x2c\xfd\xff\x03\x33\x2a\xfd\xff\x03\x32\x28\xfd\xff"
  "\x03\x31\x26\xfd\xff\x03\x30\x24\xfd\xff\x03\x2f\x22\xfd\xff\x03"
  "\x2e\x20\xfd\xff\x03\x2d\x1e\xfd\xff\x03\x2c\x1c\x81\x8b\x02\x2b"
  "\x1a\xfd\xff\x03\x2a\x18\x81\x85\x02\x29\x16\x81\x85\x02\x28\x14"
  "\xfd\xff\x03\x27\x12\xfd\xff\x03\x26\x10\xfd\xff\x03\x25\x0e\xfd"
  "\xff\x03\x24\x0c\xfd\xff\x03\x23\x0a\x81\x8f\x02\x22\x08\x81\x8d"
  "\x02\x21\x06\x81\x8d\x02\x20\x04\x83\x04\x39\x4f\x1a\x02\x0c\x25"
  "\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x1b\x3f\x0a\x81\x83\x02"
  "\x3e\x08\x81\x83\x02\x3d\x06\x81\x83\x02\x3c\x04\x83\x04\x09\x11"
  "\x1c\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x1d\x17\x16"
  "\x04\x15\x63\x61\x63\x68\x65\x2d\x66\x69\x6c\x65\x2d\x61\x6e\x61"
  "\x6c\x79\x73\x65\x73\x21\x1e\x04\x09\x66\x6f\x72\x2d\x65\x61\x63"
  "\x68\x1f\x06\x16\x72\x65\x63\x6f\x72\x64\x2d\x66\x69\x6c\x65\x2d"
  "\x61\x6e\x61\x6c\x79\x73\x69\x73\x21\x20\x04\x49\x16\x81\x89\x02"
  "\x48\x14\x81\x89\x02\x47\x12\x81\x89\x02\x46\x10\x81\x89\x02\x45"
  "\x0e\x81\x85\x02\x44\x0c\x81\x85\x02\x43\x0a\x81\x87\x02\x42\x08"
  "\x81\x87\x02\x41\x06\x81\x87\x02\x40\x04\x84\x06\x15\x24\x21\x02"
  "\x4a\x04\x85\x08\x03\x22\x02\x08\x1d\x4b\x04\x83\x04\x03\x23\x02"
  "\x09\x1d\x4c\x04\x83\x04\x03\x24\x02\x0a\x1d\x4d\x04\x83\x04\x03"
  "\x25\x02\x0b\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x26"
  "\x02\x4e\x04\x84\x06\x03\x27\x02\x0c\x26\x02\x4f\x04\x84\x06\x03"
  "\x28\x02\x0d\x16\x1b\x04\x66\x72\x65\x04\x63\x64\x72\x29\x02\x04"
  "\x0f\x03\x10\x04\x12\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65"
  "\x77\x2d\x74\x79\x70\x65\x10\x04\x04\x05\x08\x66\x61\x73\x64\x75"
  "\x6d\x70\x04\x0c\x61\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70\x21\x0f"
  "\x04\x19\x06\x15\x63\x61\x63\x68\x65\x2d\x66\x69\x6c\x65\x2d\x61"
  "\x6e\x61\x6c\x79\x73\x69\x73\x21\x0a\x65\x2e\x81\x85\x02\x64\x2c"
  "\x81\x85\x02\x63\x2a\x81\x85\x02\x62\x28\x81\x85\x02\x61\x26\x81"
  "\x85\x02\x60\x24\x81\x85\x02\x5f\x22\x81\x89\x02\x5e\x20\x81\x83"
  "\x02\x5d\x1e\x81\x91\x02\x5c\x1c\x81\x85\x02\x5b\x1a\x81\x87\x02"
  "\x5a\x18\x81\x8b\x02\x59\x16\x81\x8d\x02\x58\x14\x81\x95\x02\x57"
  "\x12\x81\x8b\x02\x56\x10\x81\x8b\x02\x55\x0e\x81\x89\x02\x54\x0c"
  "\x81\x8b\x02\x53\x0a\x81\x8b\x02\x52\x08\x81\x87\x02\x51\x06\x81"
  "\x8f\x02\x50\x04\x84\x06\x2d\x4e\x2a\x02\x0e\x1d\x14\x75\x6e\x61"
  "\x62\x6c\x65\x20\x74\x6f\x20\x6f\x70\x65\x6e\x20\x66\x69\x6c\x65"
  "\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x26\x04\x62\x69\x6e\x1b\x04"
  "\x10\x04\x16\x61\x6e\x61\x6c\x79\x73\x69\x73\x2d\x63\x61\x63\x68"
  "\x65\x2f\x6c\x6f\x6f\x6b\x75\x70\x26\x04\x03\x17\x66\x69\x6c\x65"
  "\x2d\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69"
  "\x6d\x65\x04\x0e\x03\x0d\x61\x6e\x61\x6c\x79\x7a\x65\x2d\x66\x69"
  "\x6c\x65\x05\x14\x6d\x61\x6b\x65\x2d\x61\x6e\x61\x6c\x79\x73\x69"
  "\x73\x2d\x63\x61\x63\x68\x65\x10\x08\x74\x20\x81\x8f\x02\x73\x1e"
  "\x81\x8f\x02\x72\x1c\x81\x8f\x02\x71\x1a\x81\x8f\x02\x70\x18\x81"
  "\x8d\x02\x6f\x16\x81\x8f\x02\x6e\x14\x81\x8f\x02\x6d\x12\x81\x8f"
  "\x02\x6c\x10\x81\x8f\x02\x6b\x0e\x81\x8f\x02\x6a\x0c\x81\x8b\x02"
  "\x69\x0a\x81\x8d\x02\x68\x08\x81\x89\x02\x67\x06\x81\x8b\x02\x66"
  "\x04\x86\x0a\x1f\x3b\x2b\x02\x0f\x17\x1d\x16\x04\x0b\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x3d\x3f\x02\x7a\x0e\x81\x87\x02\x79\x0c\x81"
  "\x87\x02\x78\x0a\x81\x89\x02\x77\x08\x81\x89\x02\x76\x06\x81\x87"
  "\x02\x75\x04\x84\x06\x0d\x18\x2c\x02\x10\x10\x4e\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x20\x61\x63\x63\x65\x73\x73\x17\x49\x6c\x6c\x65\x67"
  "\x61\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x6e\x61\x6d"
  "\x65\x0c\x1e\x02\x1d\x1b\x03\x0a\x04\x1f\x05\x10\x6d\x61\x6b\x65"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x04\x18\x66\x6f"
  "\x72\x2d\x65\x61\x63\x68\x2d\x76\x65\x63\x74\x6f\x72\x2d\x65\x6c"
  "\x65\x6d\x65\x6e\x74\x2e\x06\x06\x62\x69\x6e\x64\x21\x2f\x03\x15"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x3f\x05\x0f\x6d\x61\x6b\x65\x2d\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x30\x03\x08\x61\x63\x63\x65\x73\x73\x3f\x03\x19"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x6e\x61\x6d\x65\x04\x0e\x03\x13\x61\x63\x63\x65"
  "\x73\x73\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x0c"
  "\x61\x63\x63\x65\x73\x73\x2d\x6e\x61\x6d\x65\x03\x09\x75\x6e\x73"
  "\x79\x6e\x74\x61\x78\x04\x09\x0f\x8d\x01\x28\x81\x89\x02\x8c\x01"
  "\x26\x81\x85\x02\x8b\x01\x24\x81\x85\x02\x8a\x01\x22\x81\x85\x02"
  "\x89\x01\x20\x81\x89\x02\x88\x01\x1e\x81\x85\x02\x87\x01\x1c\x81"
  "\x83\x02\x86\x01\x1a\x81\x85\x02\x85\x01\x18\x81\x85\x02\x84\x01"
  "\x16\x81\x89\x02\x83\x01\x14\x81\x8d\x02\x82\x01\x12\x81\x87\x02"
  "\x81\x01\x10\x81\x85\x02\x80\x01\x0e\x81\x87\x02\x7f\x0c\x81\x85"
  "\x02\x7e\x0a\x81\x8d\x02\x7d\x08\x81\x8b\x02\x7c\x06\x81\x89\x02"
  "\x7b\x04\x86\x0a\x27\x54\x31\x02\x11\x1b\x13\x72\x65\x73\x6f\x6c"
  "\x76\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x21\x32\x02\x04"
  "\x1f\x02\x92\x01\x0c\x81\x85\x02\x91\x01\x0a\x81\x83\x02\x90\x01"
  "\x08\x83\x04\x8f\x01\x06\x81\x85\x02\x8e\x01\x04\x83\x04\x0b\x16"
  "\x33\x02\x12\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21"
  "\x34\x02\x1b\x04\x0f\x70\x61\x63\x6b\x61\x67\x65\x2d\x6c\x6f\x6f"
  "\x6b\x75\x70\x35\x02\x98\x01\x0e\x81\x87\x02\x97\x01\x0c\x81\x85"
  "\x02\x96\x01\x0a\x81\x83\x02\x95\x01\x08\x81\x87\x02\x94\x01\x06"
  "\x81\x85\x02\x93\x01\x04\x83\x04\x0d\x1a\x36\x02\x13\x04\x70\x6b"
  "\x67\x04\x16\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x66\x61"
  "\x75\x6c\x74\x2d\x74\x79\x70\x65\x05\x1a\x70\x61\x72\x73\x65\x2d"
  "\x70\x61\x63\x6b\x61\x67\x65\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x73\x37\x03\x0a\x72\x65\x61\x64\x2d\x66\x69\x6c\x65\x04"
  "\x9b\x01\x08\x81\x87\x02\x9a\x01\x06\x81\x85\x02\x99\x01\x04\x84"
  "\x06\x07\x12\x38\x02\x14\x04\x0b\x66\x69\x6c\x74\x65\x72\x2d\x6d"
  "\x61\x70\x05\x19\x70\x61\x72\x73\x65\x2d\x70\x61\x63\x6b\x61\x67"
  "\x65\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x39\x03\x9d\x01"
  "\x06\x81\x85\x02\x9c\x01\x04\x85\x08\x05\x0d\x3a\x02\x15\x05\x65"
  "\x6c\x73\x65\x3b\x12\x1f\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64"
  "\x20\x70\x61\x63\x6b\x61\x67\x65\x20\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x3a\x0c\x1e\x18\x55\x6e\x65\x78\x70\x65\x63\x74\x65"
  "\x64\x20\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x3a\x08\x69"
  "\x6e\x63\x6c\x75\x64\x65\x0d\x6f\x73\x2d\x74\x79\x70\x65\x2d\x63"
  "\x61\x73\x65\x13\x14\x17\x15\x16\x08\x73\x74\x72\x69\x6e\x67\x3f"
  "\x15\x08\x73\x79\x6d\x62\x6f\x6c\x3f\x14\x03\x03\x0b\x70\x61\x72"
  "\x73\x65\x2d\x6e\x61\x6d\x65\x13\x04\x09\x66\x6f\x72\x2d\x61\x6c"
  "\x6c\x3f\x12\x04\x09\x03\x06\x6c\x69\x73\x74\x3f\x3c\x04\x0e\x04"
  "\x0b\x61\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70\x3d\x04\x18\x70\x61"
  "\x72\x73\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x65\x78\x74\x65"
  "\x6e\x73\x69\x6f\x6e\x3e\x04\x19\x70\x61\x72\x73\x65\x2d\x70\x61"
  "\x63\x6b\x61\x67\x65\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e"
  "\x3f\x04\x04\x05\x37\x04\x05\x6d\x65\x6d\x71\x0d\xd7\x01\x76\x81"
  "\x89\x02\xd6\x01\x74\x81\x85\x02\xd5\x01\x72\x81\x85\x02\xd4\x01"
  "\x70\x81\x85\x02\xd3\x01\x6e\x81\x85\x02\xd2\x01\x6c\x81\x83\x02"
  "\xd1\x01\x6a\x81\x83\x02\xd0\x01\x68\x81\x83\x02\xcf\x01\x66\x81"
  "\x83\x02\xce\x01\x64\x81\x83\x02\xcd\x01\x62\x81\x87\x02\xcc\x01"
  "\x60\x81\x85\x02\xcb\x01\x5e\x81\x83\x02\xca\x01\x5c\x81\x83\x02"
  "\xc9\x01\x5a\x83\x04\xc8\x01\x58\x81\x87\x02\xc7\x01\x56\x81\x85"
  "\x02\xc6\x01\x54\x81\x83\x02\xc5\x01\x52\x81\x83\x02\xc4\x01\x50"
  "\x81\x85\x02\xc3\x01\x4e\x81\x8d\x02\xc2\x01\x4c\x81\x89\x02\xc1"
  "\x01\x4a\x81\x8d\x02\xc0\x01\x48\x81\x89\x02\xbf\x01\x46\x81\x83"
  "\x02\xbe\x01\x44\x83\x04\xbd\x01\x42\x81\x89\x02\xbc\x01\x40\x81"
  "\x89\x02\xbb\x01\x3e\x81\x8d\x02\xba\x01\x3c\x81\x89\x02\xb9\x01"
  "\x3a\x81\x8b\x02\xb8\x01\x38\x81\x89\x02\xb7\x01\x36\x81\x89\x02"
  "\xb6\x01\x34\x81\x83\x02\xb5\x01\x32\x81\x83\x02\xb4\x01\x30\x81"
  "\x89\x02\xb3\x01\x2e\x81\x89\x02\xb2\x01\x2c\x81\x83\x02\xb1\x01"
  "\x2a\x81\x89\x02\xb0\x01\x28\x81\x83\x02\xaf\x01\x26\x81\x89\x02"
  "\xae\x01\x24\x85\x08\xad\x01\x22\x81\x85\x02\xac\x01\x20\x81\x8b"
  "\x02\xab\x01\x1e\x81\x8b\x02\xaa\x01\x1c\x81\x89\x02\xa9\x01\x1a"
  "\x81\x8f\x02\xa8\x01\x18\x81\x8f\x02\xa7\x01\x16\x81\x8b\x02\xa6"
  "\x01\x14\x81\x8b\x02\xa5\x01\x12\x81\x8f\x02\xa4\x01\x10\x81\x8f"
  "\x02\xa3\x01\x0e\x81\x8b\x02\xa2\x01\x0c\x81\x8b\x02\xa1\x01\x0a"
  "\x81\x87\x02\xa0\x01\x08\x81\x87\x02\x9f\x01\x06\x81\x87\x02\x9e"
  "\x01\x04\x81\x87\x02\x75\xa5\x01\x40\x02\x16\x05\x6e\x6f\x6e\x65"
  "\x41\x1a\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x20\x50\x41\x52"
  "\x45\x4e\x54\x20\x6f\x70\x74\x69\x6f\x6e\x3a\x19\x4d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x20\x50\x41\x52\x45\x4e\x54\x20\x6f\x70\x74\x69"
  "\x6f\x6e\x73\x2e\x16\x17\x07\x70\x61\x72\x65\x6e\x74\x42\x03\x16"
  "\x63\x68\x65\x63\x6b\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x6f\x70"
  "\x74\x69\x6f\x6e\x73\x43\x04\x05\x61\x73\x73\x71\x44\x04\x19\x6d"
  "\x61\x6b\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x64\x65\x73\x63"
  "\x72\x69\x70\x74\x69\x6f\x6e\x45\x03\x13\x03\x0e\x04\x0e\x04\x05"
  "\x64\x65\x6c\x71\x04\x18\x70\x72\x6f\x63\x65\x73\x73\x2d\x70\x61"
  "\x63\x6b\x61\x67\x65\x2d\x6f\x70\x74\x69\x6f\x6e\x73\x46\x09\xeb"
  "\x01\x2a\x81\x85\x02\xea\x01\x28\x81\x89\x02\xe9\x01\x26\x81\x85"
  "\x02\xe8\x01\x24\x81\x8b\x02\xe7\x01\x22\x81\x8b\x02\xe6\x01\x20"
  "\x81\x8b\x02\xe5\x01\x1e\x81\x89\x02\xe4\x01\x1c\x81\x8b\x02\xe3"
  "\x01\x1a\x81\x87\x02\xe2\x01\x18\x81\x87\x02\xe1\x01\x16\x81\x8f"
  "\x02\xe0\x01\x14\x81\x8f\x02\xdf\x01\x12\x81\x8f\x02\xde\x01\x10"
  "\x81\x8f\x02\xdd\x01\x0e\x81\x8b\x02\xdc\x01\x0c\x81\x8b\x02\xdb"
  "\x01\x0a\x81\x8d\x02\xda\x01\x08\x81\x87\x02\xd9\x01\x06\x81\x85"
  "\x02\xd8\x01\x04\x84\x06\x29\x45\x47\x02\x17\x41\x2c\x50\x41\x52"
  "\x45\x4e\x54\x20\x6f\x70\x74\x69\x6f\x6e\x20\x69\x6c\x6c\x65\x67"
  "\x61\x6c\x20\x69\x6e\x20\x70\x61\x63\x6b\x61\x67\x65\x20\x65\x78"
  "\x74\x65\x6e\x73\x69\x6f\x6e\x3a\x42\x03\x43\x04\x44\x04\x0e\x04"
  "\x45\x04\x46\x06\xf1\x01\x0e\x81\x87\x02\xf0\x01\x0c\x81\x85\x02"
  "\xef\x01\x0a\x81\x85\x02\xee\x01\x08\x81\x87\x02\xed\x01\x06\x81"
  "\x85\x02\xec\x01\x04\x84\x06\x0d\x1e\x45\x02\x18\x1b\x49\x6c\x6c"
  "\x2d\x66\x6f\x72\x6d\x65\x64\x20\x70\x61\x63\x6b\x61\x67\x65\x20"
  "\x6f\x70\x74\x69\x6f\x6e\x3a\x17\x0c\x1e\x16\x02\x20\x50\x61\x63"
  "\x6b\x61\x67\x65\x20\x6f\x70\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73"
  "\x74\x20\x62\x65\x20\x61\x20\x6c\x69\x73\x74\x3a\x03\x3c\x04\x0e"
  "\x04\x1f\x04\xfa\x01\x14\x81\x85\x02\xf9\x01\x12\x81\x83\x02\xf8"
  "\x01\x10\x81\x85\x02\xf7\x01\x0e\x83\x04\xf6\x01\x0c\x81\x83\x02"
  "\xf5\x01\x0a\x81\x83\x02\xf4\x01\x08\x81\x83\x02\xf3\x01\x06\x81"
  "\x83\x02\xf2\x01\x04\x83\x04\x13\x27\x42\x02\x19\x34\x08\x1b\x02"
  "\x13\x55\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6f\x70\x74\x69"
  "\x6f\x6e\x3a\x0d\x66\x69\x6e\x61\x6c\x69\x7a\x61\x74\x69\x6f\x6e"
  "\x0f\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x61\x74\x69\x6f\x6e\x07"
  "\x69\x6d\x70\x6f\x72\x74\x07\x65\x78\x70\x6f\x72\x74\x0a\x66\x69"
  "\x6c\x65\x2d\x63\x61\x73\x65\x17\x06\x66\x69\x6c\x65\x73\x16\x04"
  "\x1f\x03\x10\x70\x61\x72\x73\x65\x2d\x66\x69\x6c\x65\x6e\x61\x6d"
  "\x65\x73\x48\x03\x10\x70\x61\x72\x73\x65\x2d\x66\x69\x6c\x65\x2d"
  "\x63\x61\x73\x65\x49\x03\x14\x70\x61\x72\x73\x65\x2d\x69\x6d\x70"
  "\x6f\x72\x74\x2f\x65\x78\x70\x6f\x72\x74\x4a\x03\x15\x70\x61\x72"
  "\x73\x65\x2d\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x61\x74\x69\x6f"
  "\x6e\x4b\x04\x09\x04\x19\x08\x95\x02\x38\x81\x87\x02\x94\x02\x36"
  "\x81\x87\x02\x93\x02\x34\x81\x8b\x02\x92\x02\x32\x81\x89\x02\x91"
  "\x02\x30\x81\x87\x02\x90\x02\x2e\x81\x8b\x02\x8f\x02\x2c\x81\x89"
  "\x02\x8e\x02\x2a\x81\x87\x02\x8d\x02\x28\x81\x8b\x02\x8c\x02\x26"
  "\x81\x89\x02\x8b\x02\x24\x81\x87\x02\x8a\x02\x22\x81\x8b\x02\x89"
  "\x02\x20\x81\x89\x02\x88\x02\x1e\x81\x87\x02\x87\x02\x1c\x81\x8b"
  "\x02\x86\x02\x1a\x81\x87\x02\x85\x02\x18\x81\x8b\x02\x84\x02\x16"
  "\x81\x87\x02\x83\x02\x14\x81\x89\x02\x82\x02\x12\x81\x89\x02\x81"
  "\x02\x10\x81\x8b\x02\x80\x02\x0e\x81\x8b\x02\xff\x01\x0c\x81\x8b"
  "\x02\xfe\x01\x0a\x81\x8b\x02\xfd\x01\x08\x81\x85\x02\xfc\x01\x06"
  "\x81\x85\x02\xfb\x01\x04\x84\x06\x37\x5b\x4c\x02\x1a\x0d\x69\x6c"
  "\x6c\x65\x67\x61\x6c\x20\x6e\x61\x6d\x65\x14\x02\x04\x0b\x63\x68"
  "\x65\x63\x6b\x2d\x6c\x69\x73\x74\x4d\x04\x0e\x03\x99\x02\x0a\x81"
  "\x83\x02\x98\x02\x08\x81\x83\x02\x97\x02\x06\x81\x85\x02\x96\x02"
  "\x04\x83\x04\x09\x14\x4e\x02\x1b\x3b\x12\x69\x6c\x6c\x65\x67\x61"
  "\x6c\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x15\x0f\x70\x61\x72"
  "\x73\x65\x2d\x66\x69\x6c\x65\x6e\x61\x6d\x65\x4f\x03\x04\x4d\x04"
  "\x0e\x04\x04\x9f\x02\x0e\x81\x83\x02\x9e\x02\x0c\x81\x87\x02\x9d"
  "\x02\x0a\x81\x83\x02\x9c\x02\x08\x81\x83\x02\x9b\x02\x06\x81\x85"
  "\x02\x9a\x02\x04\x83\x04\x0d\x1d\x50\x02\x1c\x3b\x12\x49\x6c\x6c"
  "\x65\x67\x61\x6c\x20\x66\x69\x6c\x65\x2d\x63\x61\x73\x65\x0c\x1e"
  "\x16\x17\x15\x14\x4f\x04\x04\x04\x4d\x04\x0e\x04\xb5\x02\x2e\x81"
  "\x85\x02\xb4\x02\x2c\x81\x83\x02\xb3\x02\x2a\x81\x87\x02\xb2\x02"
  "\x28\x81\x85\x02\xb1\x02\x26\x83\x04\xb0\x02\x24\x81\x85\x02\xaf"
  "\x02\x22\x81\x83\x02\xae\x02\x20\x81\x87\x02\xad\x02\x1e\x81\x85"
  "\x02\xac\x02\x1c\x81\x85\x02\xab\x02\x1a\x81\x83\x02\xaa\x02\x18"
  "\x81\x83\x02\xa9\x02\x16\x83\x04\xa8\x02\x14\x81\x83\x02\xa7\x02"
  "\x12\x81\x87\x02\xa6\x02\x10\x81\x83\x02\xa5\x02\x0e\x81\x85\x02"
  "\xa4\x02\x0c\x83\x04\xa3\x02\x0a\x81\x85\x02\xa2\x02\x08\x81\x83"
  "\x02\xa1\x02\x06\x81\x83\x02\xa0\x02\x04\x81\x83\x02\x2d\x44\x3b"
  "\x02\x1d\x03\x0d\x02\xb6\x02\x04\x83\x04\x03\x15\x02\x1e\x25\x49"
  "\x6c\x6c\x65\x67\x61\x6c\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a"
  "\x61\x74\x69\x6f\x6e\x2f\x66\x69\x6e\x61\x6c\x69\x7a\x61\x74\x69"
  "\x6f\x6e\x3a\x16\x17\x04\x09\x02\xb9\x02\x08\x81\x83\x02\xb8\x02"
  "\x06\x81\x83\x02\xb7\x02\x04\x83\x04\x07\x11\x14\x02\x1f\x16\x0c"
  "\x1e\x1b\x69\x6c\x6c\x65\x67\x61\x6c\x20\x69\x6d\x70\x6f\x72\x74"
  "\x2f\x65\x78\x70\x6f\x72\x74\x20\x6c\x69\x73\x74\x17\x04\x04\x4d"
  "\x04\x0e\x03\x13\x05\xd2\x02\x34\x81\x85\x02\xd1\x02\x32\x81\x85"
  "\x02\xd0\x02\x30\x81\x83\x02\xcf\x02\x2e\x81\x83\x02\xce\x02\x2c"
  "\x83\x04\xcd\x02\x2a\x81\x87\x02\xcc\x02\x28\x81\x83\x02\xcb\x02"
  "\x26\x81\x85\x02\xca\x02\x24\x81\x85\x02\xc9\x02\x22\x81\x83\x02"
  "\xc8\x02\x20\x81\x87\x02\xc7\x02\x1e\x81\x87\x02\xc6\x02\x1c\x81"
  "\x85\x02\xc5\x02\x1a\x81\x83\x02\xc4\x02\x18\x81\x87\x02\xc3\x02"
  "\x16\x81\x83\x02\xc2\x02\x14\x83\x04\xc1\x02\x12\x81\x83\x02\xc0"
  "\x02\x10\x81\x85\x02\xbf\x02\x0e\x81\x85\x02\xbe\x02\x0c\x81\x87"
  "\x02\xbd\x02\x0a\x83\x04\xbc\x02\x08\x81\x85\x02\xbb\x02\x06\x81"
  "\x83\x02\xba\x02\x04\x81\x83\x02\x33\x48\x0d\x02\x20\x03\x3c\x04"
  "\x12\x03\xd4\x02\x06\x81\x85\x02\xd3\x02\x04\x84\x06\x05\x0d\x3c"
  "\x02\x21\x16\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x70\x61\x63\x6b\x61"
  "\x67\x65\x20\x6e\x61\x6d\x65\x3a\x34\x41\x16\x02\x17\x08\x75\x6e"
  "\x6b\x6e\x6f\x77\x6e\x41\x1b\x17\x70\x72\x69\x6d\x69\x74\x69\x76"
  "\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x6e\x61\x6d\x65\x12\x02"
  "\x04\x04\x0e\x6e\x61\x6d\x65\x2d\x3e\x70\x61\x63\x6b\x61\x67\x65"
  "\x0c\x04\x0d\x6d\x61\x6b\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x04"
  "\x1f\x05\x1f\x03\x0a\x05\x1c\x70\x72\x6f\x63\x65\x73\x73\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69"
  "\x6f\x6e\x0a\x05\x15\x70\x72\x6f\x63\x65\x73\x73\x2d\x67\x6c\x6f"
  "\x62\x61\x6c\x73\x2d\x69\x6e\x66\x6f\x04\x09\x08\x0c\x6d\x61\x6b"
  "\x65\x2d\x70\x6d\x6f\x64\x65\x6c\x04\x15\x70\x72\x6f\x63\x65\x73"
  "\x73\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x6c\x6f\x61\x64\x09\x0c"
  "\xf6\x02\x46\x81\x85\x02\xf5\x02\x44\x81\x89\x02\xf4\x02\x42\x81"
  "\x85\x02\xf3\x02\x40\x81\x93\x02\xf2\x02\x3e\x81\x85\x02\xf1\x02"
  "\x3c\x81\x93\x02\xf0\x02\x3a\x81\x89\x02\xef\x02\x38\x81\x89\x02"
  "\xee\x02\x36\x81\x85\x02\xed\x02\x34\x81\x97\x02\xec\x02\x32\x81"
  "\x93\x02\xeb\x02\x30\x81\x89\x02\xea\x02\x2e\x81\x89\x02\xe9\x02"
  "\x2c\x81\x89\x02\xe8\x02\x2a\x81\x87\x02\xe7\x02\x28\x81\x83\x02"
  "\xe6\x02\x26\x81\x8b\x02\xe5\x02\x24\x81\x87\x02\xe4\x02\x22\x81"
  "\x87\x02\xe3\x02\x20\x81\x89\x02\xe2\x02\x1e\x81\x93\x02\xe1\x02"
  "\x1c\x81\x87\x02\xe0\x02\x1a\x81\x8b\x02\xdf\x02\x18\x81\x85\x02"
  "\xde\x02\x16\x81\x85\x02\xdd\x02\x14\x81\x85\x02\xdc\x02\x12\x81"
  "\x93\x02\xdb\x02\x10\x81\x87\x02\xda\x02\x0e\x81\x8f\x02\xd9\x02"
  "\x0c\x81\x91\x02\xd8\x02\x0a\x81\x83\x02\xd7\x02\x08\x83\x04\xd6"
  "\x02\x06\x81\x8d\x02\xd5\x02\x04\x87\x0c\x45\x6e\x51\x02\x22\x0e"
  "\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x52\x17\x34"
  "\x16\x41\x1b\x1d\x04\x2e\x05\x2d\x04\x17\x66\x6f\x72\x2d\x65\x61"
  "\x63\x68\x2d\x65\x78\x70\x6f\x72\x74\x65\x64\x2d\x6e\x61\x6d\x65"
  "\x41\x06\x2f\x04\x1f\x08\x06\x6c\x69\x6e\x6b\x21\x2e\x07\x9d\x03"
  "\x50\x81\x87\x02\x9c\x03\x4e\x81\x8b\x02\x9b\x03\x4c\x81\x87\x02"
  "\x9a\x03\x4a\x81\x87\x02\x99\x03\x48\x81\x87\x02\x98\x03\x46\x81"
  "\x85\x02\x97\x03\x44\x81\x85\x02\x96\x03\x42\x81\x8d\x02\x95\x03"
  "\x40\x81\x87\x02\x94\x03\x3e\x81\x8b\x02\x93\x03\x3c\x81\x87\x02"
  "\x92\x03\x3a\x81\x8b\x02\x91\x03\x38\x81\x87\x02\x90\x03\x36\x81"
  "\x87\x02\x8f\x03\x34\x81\x87\x02\x8e\x03\x32\x81\x85\x02\x8d\x03"
  "\x30\x81\x85\x02\x8c\x03\x2e\x81\x89\x02\x8b\x03\x2c\x81\x87\x02"
  "\x8a\x03\x2a\x81\x8b\x02\x89\x03\x28\x81\x89\x02\x88\x03\x26\x81"
  "\x87\x02\x87\x03\x24\x81\x87\x02\x86\x03\x22\x81\x85\x02\x85\x03"
  "\x20\x81\x85\x02\x84\x03\x1e\x81\x8d\x02\x83\x03\x1c\x81\x89\x02"
  "\x82\x03\x1a\x81\x83\x02\x81\x03\x18\x81\x8d\x02\x80\x03\x16\x81"
  "\x87\x02\xff\x02\x14\x81\x89\x02\xfe\x02\x12\x81\x85\x02\xfd\x02"
  "\x10\x81\x85\x02\xfc\x02\x0e\x81\x89\x02\xfb\x02\x0c\x81\x85\x02"
  "\xfa\x02\x0a\x81\x89\x02\xf9\x02\x08\x81\x85\x02\xf8\x02\x06\x81"
  "\x87\x02\xf7\x02\x04\x85\x08\x4f\x6c\x2d\x02\x23\x09\x73\x65\x74"
  "\x2d\x63\x64\x72\x21\x17\x16\x1d\x52\x04\x44\x04\x1f\x03\xa8\x03"
  "\x18\x81\x91\x02\xa7\x03\x16\x81\x91\x02\xa6\x03\x14\x81\x8f\x02"
  "\xa5\x03\x12\x81\x87\x02\xa4\x03\x10\x81\x87\x02\xa3\x03\x0e\x81"
  "\x85\x02\xa2\x03\x0c\x81\x8d\x02\xa1\x03\x0a\x81\x8b\x02\xa0\x03"
  "\x08\x81\x8b\x02\x9f\x03\x06\x81\x85\x02\x9e\x03\x04\x84\x06\x17"
  "\x26\x52\x02\x24\x1b\x04\x13\x66\x69\x6e\x64\x2d\x6d\x61\x74\x63"
  "\x68\x69\x6e\x67\x2d\x69\x74\x65\x6d\x44\x03\x09\x70\x61\x63\x6b"
  "\x61\x67\x65\x3f\x03\xb1\x03\x14\x81\x89\x02\xb0\x03\x12\x81\x89"
  "\x02\xaf\x03\x10\x81\x85\x02\xae\x03\x0e\x81\x85\x02\xad\x03\x0c"
  "\x81\x8b\x02\xac\x03\x0a\x81\x87\x02\xab\x03\x08\x81\x8b\x02\xaa"
  "\x03\x06\x81\x87\x02\xa9\x03\x04\x84\x06\x13\x20\x1d\x02\x25\x1b"
  "\x04\x15\x6c\x69\x73\x74\x2d\x73\x65\x61\x72\x63\x68\x2d\x70\x6f"
  "\x73\x69\x74\x69\x76\x65\x04\x0e\x73\x79\x6d\x62\x6f\x6c\x2d\x6c"
  "\x69\x73\x74\x3d\x3f\x03\xb4\x03\x08\x81\x85\x02\xb3\x03\x06\x81"
  "\x85\x02\xb2\x03\x04\x84\x06\x07\x11\x53\x02\x26\x16\x08\x17\x34"
  "\x1b\x29\x02\x04\x0f\x04\x1f\x04\x19\x04\x3d\x08\x2e\x06\xce\x03"
  "\x36\x81\x89\x02\xcd\x03\x34\x81\x85\x02\xcc\x03\x32\x81\x85\x02"
  "\xcb\x03\x30\x81\x89\x02\xca\x03\x2e\x81\x85\x02\xc9\x03\x2c\x81"
  "\x85\x02\xc8\x03\x2a\x81\x87\x02\xc7\x03\x28\x81\x85\x02\xc6\x03"
  "\x26\x81\x87\x02\xc5\x03\x24\x81\x85\x02\xc4\x03\x22\x81\x89\x02"
  "\xc3\x03\x20\x81\x85\x02\xc2\x03\x1e\x81\x89\x02\xc1\x03\x1c\x81"
  "\x85\x02\xc0\x03\x1a\x81\x87\x02\xbf\x03\x18\x81\x87\x02\xbe\x03"
  "\x16\x81\x85\x02\xbd\x03\x14\x81\x83\x02\xbc\x03\x12\x83\x04\xbb"
  "\x03\x10\x81\x8b\x02\xba\x03\x0e\x81\x89\x02\xb9\x03\x0c\x81\x89"
  "\x02\xb8\x03\x0a\x81\x87\x02\xb7\x03\x08\x81\x87\x02\xb6\x03\x06"
  "\x81\x89\x02\xb5\x03\x04\x85\x08\x35\x4d\x3d\x02\x27\x1b\x06\x12"
  "\x6d\x61\x6b\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x6c\x6f\x61"
  "\x64\x02\xd2\x03\x0a\x81\x89\x02\xd1\x03\x08\x81\x89\x02\xd0\x03"
  "\x06\x81\x85\x02\xcf\x03\x04\x84\x06\x09\x13\x29\x02\x28\x02\x34"
  "\x1b\x05\x10\x69\x6e\x74\x65\x72\x6e\x2d\x62\x69\x6e\x64\x69\x6e"
  "\x67\x21\x1f\x02\xd7\x03\x0c\x81\x8b\x02\xd6\x03\x0a\x81\x8b\x02"
  "\xd5\x03\x08\x81\x89\x02\xd4\x03\x06\x81\x89\x02\xd3\x03\x04\x86"
  "\x0a\x0b\x17\x19\x02\x29\x1d\x41\x74\x74\x65\x6d\x70\x74\x20\x74"
  "\x6f\x20\x72\x65\x69\x6e\x73\x65\x72\x74\x20\x62\x69\x6e\x64\x69"
  "\x6e\x67\x3a\x34\x1b\x05\x1f\x04\x44\x06\x0d\x6d\x61\x6b\x65\x2d"
  "\x62\x69\x6e\x64\x69\x6e\x67\x17\x06\x0a\x6d\x61\x6b\x65\x2d\x6c"
  "\x69\x6e\x6b\x05\x0e\x06\xe5\x03\x1e\x81\x85\x02\xe4\x03\x1c\x81"
  "\x85\x02\xe3\x03\x1a\x81\x91\x02\xe2\x03\x18\x81\x93\x02\xe1\x03"
  "\x16\x81\x91\x02\xe0\x03\x14\x81\x95\x02\xdf\x03\x12\x81\x8f\x02"
  "\xde\x03\x10\x81\x91\x02\xdd\x03\x0e\x81\x91\x02\xdc\x03\x0c\x81"
  "\x91\x02\xdb\x03\x0a\x81\x91\x02\xda\x03\x08\x81\x93\x02\xd9\x03"
  "\x06\x81\x8d\x02\xd8\x03\x04\x88\x0e\x1d\x33\x16\x02\x2a\x34\x1b"
  "\x04\x44\x02\x10\x6d\x61\x6b\x65\x2d\x76\x61\x6c\x75\x65\x2d\x63"
  "\x65\x6c\x6c\x06\x17\x04\xf0\x03\x18\x81\x89\x02\xef\x03\x16\x81"
  "\x89\x02\xee\x03\x14\x81\x8d\x02\xed\x03\x12\x81\x8b\x02\xec\x03"
  "\x10\x81\x89\x02\xeb\x03\x0e\x81\x85\x02\xea\x03\x0c\x81\x85\x02"
  "\xe9\x03\x0a\x81\x89\x02\xe8\x03\x08\x81\x87\x02\xe7\x03\x06\x81"
  "\x8b\x02\xe6\x03\x04\x85\x08\x17\x28\x17\x02\x2b\x02\x34\x1b\x04"
  "\x44\x04\x10\x25\x6d\x61\x6b\x65\x2d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x04\x04\x80\x04\x22\x81\x89\x02\xff\x03\x20\x81\x87\x02"
  "\xfe\x03\x1e\x81\x85\x02\xfd\x03\x1c\x81\x85\x02\xfc\x03\x1a\x81"
  "\x85\x02\xfb\x03\x18\x81\x89\x02\xfa\x03\x16\x81\x89\x02\xf9\x03"
  "\x14\x81\x89\x02\xf8\x03\x12\x81\x89\x02\xf7\x03\x10\x81\x89\x02"
  "\xf6\x03\x0e\x81\x85\x02\xf5\x03\x0c\x81\x85\x02\xf4\x03\x0a\x81"
  "\x8b\x02\xf3\x03\x08\x81\x87\x02\xf2\x03\x06\x81\x8b\x02\xf1\x03"
  "\x04\x85\x08\x21\x33\x44\x2b\x34\x34\x12\x13\x72\x74\x64\x3a\x61"
  "\x6e\x61\x6c\x79\x73\x69\x73\x2d\x63\x61\x63\x68\x65\x26\x23\x5b"
  "\x28\x63\x72\x6f\x73\x73\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x20\x72\x65\x61\x64\x65\x72\x29\x70\x72\x69\x6d\x69\x74\x69\x76"
  "\x65\x73\x5d\x44\x04\x17\x04\x16\x04\x19\x04\x29\x04\x3d\x04\x53"
  "\x04\x1d\x04\x52\x04\x2d\x04\x51\x04\x3c\x04\x0d\x0a\x14\x04\x15"
  "\x04\x3b\x0c\x50\x04\x4e\x04\x4c\x04\x42\x04\x45\x04\x47\x04\x40"
  "\x24\x3a\x04\x38\x04\x36\x04\x33\x04\x31\x04\x2c\x04\x2b\x04\x2a"
  "\x04\x28\x04\x27\x04\x25\x04\x24\x04\x23\x04\x22\x04\x21\x04\x1c"
  "\x04\x1a\x04\x11\x08\x0b\x04\x2b\x30\x1f\x2e\x2f\x09\x0a\x0c\x35"
  "\x41\x4d\x4a\x4b\x4f\x49\x48\x13\x46\x43\x3e\x3f\x39\x37\x32\x14"
  "\x72\x65\x73\x6f\x6c\x76\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x73\x21\x20\x26\x1e\x19\x73\x65\x74\x2d\x61\x6e\x61\x6c\x79"
  "\x73\x69\x73\x2d\x63\x61\x63\x68\x65\x2f\x64\x61\x74\x61\x21\x19"
  "\x73\x65\x74\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73\x2d\x63\x61\x63"
  "\x68\x65\x2f\x74\x69\x6d\x65\x21\x14\x61\x6e\x61\x6c\x79\x73\x69"
  "\x73\x2d\x63\x61\x63\x68\x65\x2f\x64\x61\x74\x61\x14\x61\x6e\x61"
  "\x6c\x79\x73\x69\x73\x2d\x63\x61\x63\x68\x65\x2f\x74\x69\x6d\x65"
  "\x18\x61\x6e\x61\x6c\x79\x73\x69\x73\x2d\x63\x61\x63\x68\x65\x2f"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x10\x14\x72\x65\x61\x64\x2d\x66"
  "\x69\x6c\x65\x2d\x61\x6e\x61\x6c\x79\x73\x65\x73\x21\x18\x13\x72"
  "\x65\x61\x64\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x6d\x6f\x64\x65"
  "\x6c\x2b\x07\x76\x65\x63\x74\x6f\x72\x0f\x61\x6e\x61\x6c\x79\x73"
  "\x69\x73\x2d\x63\x61\x63\x68\x65\x05\x64\x61\x74\x61\x05\x74\x69"
  "\x6d\x65\x09\x70\x61\x74\x68\x6e\x61\x6d\x65\x0a\x1b\x6d\x61\x6b"
  "\x65\x2d\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75"
  "\x72\x65\x2d\x74\x79\x70\x65\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x03\x05\x0c\x80\x80\x04\x04\x0a"
  "\x81\x81\x02\x03\x08\x81\x81\x02\x02\x06\x81\x85\x02\x01\x04\x81"
  "\x83\x02\x0b\x1f";

SCHEME_OBJECT *
redpkg_so_data_e80fd1c24f2d13c0 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_redpkg_so_data_e80fd1c24f2d13c0 [0]))), (sizeof (prog_redpkg_so_data_e80fd1c24f2d13c0)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_10]));
}

DECLARE_COMPILED_DATA_NS ("redpkg.so", redpkg_so_data_e80fd1c24f2d13c0)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("redpkg.so", "e53e7e4cde2ecfa2")
