/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:21-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_8 7
#define TAG_1_9 2
#define LABEL_1_10 9
#define ENVIRONMENT_LABEL_1_3 22
#define DEBUGGING_LABEL_1_2 21
#define EXECUTE_CACHE_1_14 11
#define EXECUTE_CACHE_1_13 13
#define EXECUTE_CACHE_1_12 15
#define EXECUTE_CACHE_1_11 17
#define EXECUTE_CACHE_1_7 19
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_1_4);
      goto rtl_make_assignment_4;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_assignment_7)
DEFLABEL (rtl_make_assignment_4)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_8])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (label_10)
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_1_8);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_4 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_9 11
#define LABEL_2_10 13
#define LABEL_2_14 15
#define LABEL_2_17 17
#define LABEL_2_11 19
#define LABEL_2_20 21
#define LABEL_2_12 23
#define LABEL_2_16 25
#define LABEL_2_24 27
#define LABEL_2_18 29
#define LABEL_2_19 31
#define LABEL_2_23 33
#define LABEL_2_25 35
#define LABEL_2_26 37
#define ENVIRONMENT_LABEL_2_3 59
#define DEBUGGING_LABEL_2_2 58
#define OBJECT_2_4 57
#define OBJECT_2_3 56
#define OBJECT_2_2 55
#define OBJECT_2_1 54
#define OBJECT_2_0 53
#define EXECUTE_CACHE_2_27 39
#define EXECUTE_CACHE_2_22 41
#define EXECUTE_CACHE_2_21 43
#define EXECUTE_CACHE_2_15 45
#define EXECUTE_CACHE_2_13 47
#define EXECUTE_CACHE_2_8 49
#define FREE_REFERENCE_2_0 52
#define FREE_REFERENCES_LABEL_2_0 38
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd47;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_2_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_2_4);
      goto rtl_make_assignment_internal_28;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_30;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto label_32;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto label_33;

    case 6:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_2_17);
      goto label_34;

    case 8:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_27;

    case 9:
      current_block = (Rpc - LABEL_2_20);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_26;

    case 11:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_21;

    case 12:
      current_block = (Rpc - LABEL_2_24);
      goto label_36;

    case 13:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_20;

    case 14:
      current_block = (Rpc - LABEL_2_19);
      goto continuation_19;

    case 15:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_2_26);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_assignment_internal_38)
DEFLABEL (rtl_make_assignment_internal_28)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_57;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_56)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_2_1])))
    goto label_53;

DEFLABEL (label_52)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_51;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_50)
  if (! ((Wrd25.Obj) == (current_block [OBJECT_2_1])))
    goto label_43;

DEFLABEL (label_42)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.Obj) = (current_block [OBJECT_2_3]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd62.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (Wrd66.Obj) = (current_block [OBJECT_2_4]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (* (--Rsp)) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (Rsp [0]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_41;
  Wrd7 = Wrd11;

DEFLABEL (label_40)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_20])), (Wrd8.pObj));

DEFLABEL (label_35)
  (Wrd7.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_49;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_48)
  if ((Wrd35.Obj) == (current_block [OBJECT_2_1]))
    goto label_42;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_47;
  Wrd8 = Wrd12;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.Obj) = (current_block [OBJECT_2_3]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd28.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_2_4]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_45;
  Wrd8 = Wrd12;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [7]);
  (Wrd24.Obj) = (current_block [OBJECT_2_3]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd28.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_2_4]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_23);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_24])), (Wrd9.pObj));

DEFLABEL (label_36)
  (Wrd8.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_17])), (Wrd9.pObj));

DEFLABEL (label_34)
  (Wrd8.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_33)
  (Wrd35.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_32)
  (Wrd25.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_55;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_54)
  if ((Wrd15.Obj) == (current_block [OBJECT_2_2]))
    goto label_52;
  goto label_39;

DEFLABEL (label_55)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_31)
  (Wrd15.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define ENVIRONMENT_LABEL_3_3 22
#define DEBUGGING_LABEL_3_2 21
#define OBJECT_3_3 20
#define OBJECT_3_2 19
#define OBJECT_3_1 18
#define OBJECT_3_0 17
#define EXECUTE_CACHE_3_9 11
#define EXECUTE_CACHE_3_6 13
#define FREE_REFERENCE_3_0 16
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_3_4);
      goto rtl_make_pop_5;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_4;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_pop_10)
DEFLABEL (rtl_make_pop_5)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (lambda_11)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_3_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_15;
  Wrd7 = Wrd11;

DEFLABEL (label_14)
  Wrd6 = Wrd7;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_13;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_13;
  (Wrd13.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_12)
  (Wrd29.Obj) = (current_block [OBJECT_3_0]);
  (Wrd30.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Rsp [1]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (label_13)
  (Wrd22.Obj) = (current_block [OBJECT_3_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_8)
  (Wrd13.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_7])), (Wrd8.pObj));

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define ENVIRONMENT_LABEL_4_3 23
#define DEBUGGING_LABEL_4_2 22
#define OBJECT_4_4 21
#define OBJECT_4_3 20
#define OBJECT_4_2 19
#define OBJECT_4_1 18
#define OBJECT_4_0 17
#define EXECUTE_CACHE_4_9 11
#define EXECUTE_CACHE_4_6 13
#define FREE_REFERENCE_4_0 16
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_4_4);
      goto rtl_make_push_5;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_4;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_push_10)
DEFLABEL (rtl_make_push_5)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (lambda_11)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_4_5);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_15;
  Wrd6 = Wrd10;

DEFLABEL (label_14)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_13;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_13;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_12)
  (Wrd28.Obj) = (current_block [OBJECT_4_2]);
  (Wrd29.Obj) = (current_block [OBJECT_4_3]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_4_4]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (label_13)
  (Wrd21.Obj) = (current_block [OBJECT_4_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_7])), (Wrd7.pObj));

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_8 7
#define TAG_5_9 2
#define LABEL_5_10 9
#define LABEL_5_13 11
#define LABEL_5_14 13
#define LABEL_5_11 15
#define ENVIRONMENT_LABEL_5_3 31
#define DEBUGGING_LABEL_5_2 30
#define OBJECT_5_1 29
#define OBJECT_5_0 28
#define EXECUTE_CACHE_5_16 17
#define EXECUTE_CACHE_5_15 19
#define EXECUTE_CACHE_5_12 21
#define EXECUTE_CACHE_5_7 23
#define FREE_REFERENCE_5_1 26
#define FREE_REFERENCE_5_0 27
#define FREE_REFERENCES_LABEL_5_0 16
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_5_4);
      goto rtl_make_eq_test_7;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto lambda_14;

    case 3:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_5_13);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_5_14);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_eq_test_12)
DEFLABEL (rtl_make_eq_test_7)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_8])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_5_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (current_block [OBJECT_5_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_18;
  Wrd6 = Wrd10;

DEFLABEL (label_17)
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_16;
  Wrd13 = Wrd17;

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_14])), (Wrd14.pObj));

DEFLABEL (label_10)
  (Wrd13.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_13])), (Wrd7.pObj));

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 12
#define DEBUGGING_LABEL_6_2 11
#define EXECUTE_CACHE_6_7 7
#define EXECUTE_CACHE_6_6 9
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto rtl_make_false_test_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_false_test_4)
DEFLABEL (rtl_make_false_test_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

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
rtlcon_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto rtl_make_true_test_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_true_test_4)
DEFLABEL (rtl_make_true_test_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define TAG_8_6 1
#define LABEL_8_8 7
#define LABEL_8_11 9
#define LABEL_8_12 11
#define LABEL_8_9 13
#define ENVIRONMENT_LABEL_8_3 29
#define DEBUGGING_LABEL_8_2 28
#define OBJECT_8_1 27
#define OBJECT_8_0 26
#define EXECUTE_CACHE_8_14 15
#define EXECUTE_CACHE_8_13 17
#define EXECUTE_CACHE_8_10 19
#define EXECUTE_CACHE_8_7 21
#define FREE_REFERENCE_8_1 24
#define FREE_REFERENCE_8_0 25
#define FREE_REFERENCES_LABEL_8_0 14
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_8_4);
      goto rtl_make_type_test_6;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_8_11);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_8_12);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_type_test_11)
DEFLABEL (rtl_make_type_test_6)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_8_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd21.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_16;
  Wrd6 = Wrd10;

DEFLABEL (label_15)
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_14;
  Wrd13 = Wrd17;

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_12])), (Wrd14.pObj));

DEFLABEL (label_9)
  (Wrd13.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_11])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_8 7
#define LABEL_9_11 9
#define LABEL_9_12 11
#define LABEL_9_9 13
#define ENVIRONMENT_LABEL_9_3 29
#define DEBUGGING_LABEL_9_2 28
#define OBJECT_9_1 27
#define OBJECT_9_0 26
#define EXECUTE_CACHE_9_14 15
#define EXECUTE_CACHE_9_13 17
#define EXECUTE_CACHE_9_10 19
#define EXECUTE_CACHE_9_7 21
#define FREE_REFERENCE_9_1 24
#define FREE_REFERENCE_9_0 25
#define FREE_REFERENCES_LABEL_9_0 14
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_9_4);
      goto rtl_make_pred_1_arg_6;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_9_11);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_9_12);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_pred_1_arg_11)
DEFLABEL (rtl_make_pred_1_arg_6)
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
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_9_1]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_16;
  Wrd6 = Wrd10;

DEFLABEL (label_15)
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_14;
  Wrd13 = Wrd17;

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_12])), (Wrd14.pObj));

DEFLABEL (label_9)
  (Wrd13.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_11])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_8 7
#define TAG_10_9 2
#define LABEL_10_10 9
#define LABEL_10_13 11
#define LABEL_10_14 13
#define LABEL_10_11 15
#define ENVIRONMENT_LABEL_10_3 31
#define DEBUGGING_LABEL_10_2 30
#define OBJECT_10_1 29
#define OBJECT_10_0 28
#define EXECUTE_CACHE_10_16 17
#define EXECUTE_CACHE_10_15 19
#define EXECUTE_CACHE_10_12 21
#define EXECUTE_CACHE_10_7 23
#define FREE_REFERENCE_10_1 26
#define FREE_REFERENCE_10_0 27
#define FREE_REFERENCES_LABEL_10_0 16
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_10_4);
      goto rtl_make_pred_2_args_8;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto lambda_15;

    case 3:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_10_13);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_10_14);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_pred_2_args_13)
DEFLABEL (rtl_make_pred_2_args_8)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_10_8);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd27.Obj) = ((Wrd20.pObj) [2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_10_1]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_19;
  Wrd6 = Wrd10;

DEFLABEL (label_18)
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_17;
  Wrd13 = Wrd17;

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_15]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_14])), (Wrd14.pObj));

DEFLABEL (label_11)
  (Wrd13.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_13])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 13
#define DEBUGGING_LABEL_11_2 12
#define OBJECT_11_4 11
#define OBJECT_11_3 10
#define OBJECT_11_2 9
#define OBJECT_11_1 8
#define OBJECT_11_0 7
#define EXECUTE_CACHE_11_5 5
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_11_4);
      goto rtl_make_unassigned_test_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_unassigned_test_10)
DEFLABEL (rtl_make_unassigned_test_7)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_0]);
  (Wrd10.Obj) = (current_block [OBJECT_11_1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_11_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_11_3]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_11_4]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Rsp [1]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define TAG_12_6 1
#define LABEL_12_8 7
#define LABEL_12_11 9
#define LABEL_12_12 11
#define LABEL_12_9 13
#define ENVIRONMENT_LABEL_12_3 29
#define DEBUGGING_LABEL_12_2 28
#define OBJECT_12_1 27
#define OBJECT_12_0 26
#define EXECUTE_CACHE_12_14 15
#define EXECUTE_CACHE_12_13 17
#define EXECUTE_CACHE_12_10 19
#define EXECUTE_CACHE_12_7 21
#define FREE_REFERENCE_12_1 24
#define FREE_REFERENCE_12_0 25
#define FREE_REFERENCES_LABEL_12_0 14
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_12_4);
      goto rtl_make_fixnum_pred_1_arg_6;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_12_11);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_12_12);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_fixnum_pred_1_arg_11)
DEFLABEL (rtl_make_fixnum_pred_1_arg_6)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_12_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_12_1]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_16;
  Wrd6 = Wrd10;

DEFLABEL (label_15)
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_14;
  Wrd13 = Wrd17;

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_12])), (Wrd14.pObj));

DEFLABEL (label_9)
  (Wrd13.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_11])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define TAG_13_6 1
#define LABEL_13_8 7
#define TAG_13_9 2
#define LABEL_13_10 9
#define LABEL_13_13 11
#define LABEL_13_14 13
#define LABEL_13_11 15
#define ENVIRONMENT_LABEL_13_3 31
#define DEBUGGING_LABEL_13_2 30
#define OBJECT_13_1 29
#define OBJECT_13_0 28
#define EXECUTE_CACHE_13_16 17
#define EXECUTE_CACHE_13_15 19
#define EXECUTE_CACHE_13_12 21
#define EXECUTE_CACHE_13_7 23
#define FREE_REFERENCE_13_1 26
#define FREE_REFERENCE_13_0 27
#define FREE_REFERENCES_LABEL_13_0 16
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_13_4);
      goto rtl_make_fixnum_pred_2_args_8;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_13_8);
      goto lambda_15;

    case 3:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_13_13);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_13_14);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_13_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_fixnum_pred_2_args_13)
DEFLABEL (rtl_make_fixnum_pred_2_args_8)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_13_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_13_8);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (current_block [OBJECT_13_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd27.Obj) = ((Wrd20.pObj) [2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_13_1]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_19;
  Wrd6 = Wrd10;

DEFLABEL (label_18)
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_17;
  Wrd13 = Wrd17;

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_15]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_14])), (Wrd14.pObj));

DEFLABEL (label_11)
  (Wrd13.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_13])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define TAG_14_6 1
#define LABEL_14_8 7
#define LABEL_14_11 9
#define LABEL_14_12 11
#define LABEL_14_9 13
#define ENVIRONMENT_LABEL_14_3 29
#define DEBUGGING_LABEL_14_2 28
#define OBJECT_14_1 27
#define OBJECT_14_0 26
#define EXECUTE_CACHE_14_14 15
#define EXECUTE_CACHE_14_13 17
#define EXECUTE_CACHE_14_10 19
#define EXECUTE_CACHE_14_7 21
#define FREE_REFERENCE_14_1 24
#define FREE_REFERENCE_14_0 25
#define FREE_REFERENCES_LABEL_14_0 14
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_14_4);
      goto rtl_make_flonum_pred_1_arg_6;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_14_11);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_14_12);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_flonum_pred_1_arg_11)
DEFLABEL (rtl_make_flonum_pred_1_arg_6)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (current_block [OBJECT_14_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_14_1]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_16;
  Wrd6 = Wrd10;

DEFLABEL (label_15)
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_14;
  Wrd13 = Wrd17;

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_13]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_12])), (Wrd14.pObj));

DEFLABEL (label_9)
  (Wrd13.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_11])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define LABEL_15_8 7
#define TAG_15_9 2
#define LABEL_15_10 9
#define LABEL_15_13 11
#define LABEL_15_14 13
#define LABEL_15_11 15
#define ENVIRONMENT_LABEL_15_3 31
#define DEBUGGING_LABEL_15_2 30
#define OBJECT_15_1 29
#define OBJECT_15_0 28
#define EXECUTE_CACHE_15_16 17
#define EXECUTE_CACHE_15_15 19
#define EXECUTE_CACHE_15_12 21
#define EXECUTE_CACHE_15_7 23
#define FREE_REFERENCE_15_1 26
#define FREE_REFERENCE_15_0 27
#define FREE_REFERENCES_LABEL_15_0 16
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_15_4);
      goto rtl_make_flonum_pred_2_args_8;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_15_8);
      goto lambda_15;

    case 3:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_15_13);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_15_14);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_flonum_pred_2_args_13)
DEFLABEL (rtl_make_flonum_pred_2_args_8)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_15_8);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd27.Obj) = ((Wrd20.pObj) [2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_15_1]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_19;
  Wrd6 = Wrd10;

DEFLABEL (label_18)
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_17;
  Wrd13 = Wrd17;

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_14])), (Wrd14.pObj));

DEFLABEL (label_11)
  (Wrd13.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_13])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 13
#define DEBUGGING_LABEL_16_2 12
#define OBJECT_16_4 11
#define OBJECT_16_3 10
#define OBJECT_16_2 9
#define OBJECT_16_1 8
#define OBJECT_16_0 7
#define EXECUTE_CACHE_16_5 5
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_16_4);
      goto rtl_make_push_return_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_push_return_10)
DEFLABEL (rtl_make_push_return_7)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  (Wrd9.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_16_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_16_3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_16_4]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Rsp [0]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 12
#define DEBUGGING_LABEL_17_2 11
#define OBJECT_17_3 10
#define OBJECT_17_2 9
#define OBJECT_17_1 8
#define OBJECT_17_0 7
#define EXECUTE_CACHE_17_5 5
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_17_4);
      goto rtl_make_push_link_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_push_link_7)
DEFLABEL (rtl_make_push_link_4)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd8.Obj) = (current_block [OBJECT_17_0]);
  (Wrd9.Obj) = (current_block [OBJECT_17_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_17_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_17_3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define ENVIRONMENT_LABEL_18_3 20
#define DEBUGGING_LABEL_18_2 19
#define OBJECT_18_5 18
#define OBJECT_18_4 17
#define OBJECT_18_3 16
#define OBJECT_18_2 15
#define OBJECT_18_1 14
#define OBJECT_18_0 13
#define EXECUTE_CACHE_18_7 9
#define FREE_REFERENCE_18_0 12
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_18_4);
      goto rtl_make_pop_link_6;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_pop_link_11)
DEFLABEL (rtl_make_pop_link_6)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_15;
  Wrd6 = Wrd10;

DEFLABEL (label_14)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_13;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_13;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_12)
  (Wrd28.Obj) = (current_block [OBJECT_18_0]);
  (Wrd29.Obj) = (current_block [OBJECT_18_2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_18_3]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_18_4]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_18_5]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (label_13)
  (Wrd21.Obj) = (current_block [OBJECT_18_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_9)
  (Wrd12.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_5])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 12
#define DEBUGGING_LABEL_19_2 11
#define OBJECT_19_3 10
#define OBJECT_19_2 9
#define OBJECT_19_1 8
#define OBJECT_19_0 7
#define EXECUTE_CACHE_19_5 5
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_19_4);
      goto rtl_make_stack_pointer__link_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_stack_pointer__link_5)
DEFLABEL (rtl_make_stack_pointer__link_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (Wrd9.Obj) = (current_block [OBJECT_19_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_19_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_19_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 12
#define DEBUGGING_LABEL_20_2 11
#define OBJECT_20_3 10
#define OBJECT_20_2 9
#define OBJECT_20_1 8
#define OBJECT_20_0 7
#define EXECUTE_CACHE_20_5 5
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_20_4);
      goto rtl_make_link__stack_pointer_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_link__stack_pointer_5)
DEFLABEL (rtl_make_link__stack_pointer_2)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (Wrd9.Obj) = (current_block [OBJECT_20_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_20_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_20_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 16
#define DEBUGGING_LABEL_21_2 15
#define OBJECT_21_5 14
#define OBJECT_21_4 13
#define OBJECT_21_3 12
#define OBJECT_21_2 11
#define OBJECT_21_1 10
#define OBJECT_21_0 9
#define EXECUTE_CACHE_21_6 7
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
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
      goto rtl_make_constant_8;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_constant_11)
DEFLABEL (rtl_make_constant_8)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd10.Obj) = (current_block [OBJECT_21_2]);
  (Wrd11.Obj) = (current_block [OBJECT_21_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_21_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_21_4]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_21_5]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  goto label_12;

DEFLABEL (label_13)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (current_block [OBJECT_21_0]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_21_1]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd37.Obj);

DEFLABEL (label_12)
DEFLABEL (label_14)
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define TAG_22_6 1
#define LABEL_22_8 7
#define LABEL_22_9 9
#define LABEL_22_10 11
#define ENVIRONMENT_LABEL_22_3 26
#define DEBUGGING_LABEL_22_2 25
#define OBJECT_22_1 24
#define OBJECT_22_0 23
#define EXECUTE_CACHE_22_13 13
#define EXECUTE_CACHE_22_12 15
#define EXECUTE_CACHE_22_11 17
#define EXECUTE_CACHE_22_7 19
#define FREE_REFERENCE_22_0 22
#define FREE_REFERENCES_LABEL_22_0 12
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_22_4);
      goto rtl_make_interpreter_call_lookup_8;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_22_8);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_interpreter_call_lookup_12)
DEFLABEL (rtl_make_interpreter_call_lookup_8)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_22_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_15;
  Wrd5 = Wrd9;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (Wrd23.Obj) = (current_block [OBJECT_22_0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd29.Obj) = ((Wrd21.pObj) [3]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd33.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd39.Obj) = ((Wrd21.pObj) [4]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_22_1]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_8])), (Wrd6.pObj));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define TAG_23_6 1
#define LABEL_23_8 7
#define TAG_23_9 2
#define LABEL_23_10 9
#define LABEL_23_11 11
#define LABEL_23_12 13
#define ENVIRONMENT_LABEL_23_3 28
#define DEBUGGING_LABEL_23_2 27
#define OBJECT_23_1 26
#define OBJECT_23_0 25
#define EXECUTE_CACHE_23_15 15
#define EXECUTE_CACHE_23_14 17
#define EXECUTE_CACHE_23_13 19
#define EXECUTE_CACHE_23_7 21
#define FREE_REFERENCE_23_0 24
#define FREE_REFERENCES_LABEL_23_0 14
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_23_4);
      goto rtl_make_interpreter_call_cache_assignment_8;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_23_8);
      goto lambda_14;

    case 3:
      current_block = (Rpc - LABEL_23_10);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_23_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_23_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_interpreter_call_cache_assignment_12)
DEFLABEL (rtl_make_interpreter_call_cache_assignment_8)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_23_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_23_8);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [3]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd33.Obj) = ((Wrd26.pObj) [2]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_23_1]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_23_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_23_11);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_14]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_10])), (Wrd6.pObj));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define TAG_24_6 1
#define LABEL_24_8 7
#define LABEL_24_9 9
#define LABEL_24_10 11
#define ENVIRONMENT_LABEL_24_3 26
#define DEBUGGING_LABEL_24_2 25
#define OBJECT_24_1 24
#define OBJECT_24_0 23
#define EXECUTE_CACHE_24_13 13
#define EXECUTE_CACHE_24_12 15
#define EXECUTE_CACHE_24_11 17
#define EXECUTE_CACHE_24_7 19
#define FREE_REFERENCE_24_0 22
#define FREE_REFERENCES_LABEL_24_0 12
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_24_4);
      goto rtl_make_interpreter_call_cache_reference_7;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_interpreter_call_cache_reference_11)
DEFLABEL (rtl_make_interpreter_call_cache_reference_7)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_24_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (Wrd23.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd27.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd33.Obj) = ((Wrd21.pObj) [3]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_24_1]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_8])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_8 7
#define LABEL_25_9 9
#define LABEL_25_10 11
#define ENVIRONMENT_LABEL_25_3 26
#define DEBUGGING_LABEL_25_2 25
#define OBJECT_25_1 24
#define OBJECT_25_0 23
#define EXECUTE_CACHE_25_13 13
#define EXECUTE_CACHE_25_12 15
#define EXECUTE_CACHE_25_11 17
#define EXECUTE_CACHE_25_7 19
#define FREE_REFERENCE_25_0 22
#define FREE_REFERENCES_LABEL_25_0 12
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcon_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_25_4);
      goto rtl_make_interpreter_call_cache_unassignedP_6;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_interpreter_call_cache_unassignedP_10)
DEFLABEL (rtl_make_interpreter_call_cache_unassignedP_6)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_25_1]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_9);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_12]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_8])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_6 7
#define LABEL_7 9
#define LABEL_13 11
#define LABEL_8 13
#define LABEL_14 15
#define LABEL_10 17
#define LABEL_20 19
#define LABEL_11 21
#define LABEL_22 23
#define LABEL_12 25
#define LABEL_15 27
#define TAG_16 12
#define LABEL_17 29
#define LABEL_18 31
#define LABEL_28 33
#define LABEL_19 35
#define LABEL_29 37
#define LABEL_21 39
#define LABEL_23 41
#define TAG_24 19
#define LABEL_26 43
#define LABEL_27 45
#define LABEL_30 47
#define TAG_31 22
#define LABEL_40 49
#define LABEL_41 51
#define TAG_42 24
#define LABEL_48 53
#define LABEL_38 55
#define TAG_39 26
#define LABEL_51 57
#define LABEL_53 59
#define LABEL_36 61
#define TAG_37 29
#define LABEL_57 63
#define LABEL_58 65
#define LABEL_34 67
#define TAG_35 32
#define LABEL_59 69
#define LABEL_60 71
#define LABEL_61 73
#define LABEL_62 75
#define LABEL_63 77
#define LABEL_64 79
#define LABEL_65 81
#define LABEL_66 83
#define LABEL_67 85
#define LABEL_68 87
#define LABEL_69 89
#define LABEL_70 91
#define LABEL_80 93
#define LABEL_81 95
#define LABEL_82 97
#define LABEL_83 99
#define LABEL_84 101
#define LABEL_85 103
#define LABEL_86 105
#define LABEL_87 107
#define LABEL_88 109
#define LABEL_32 111
#define TAG_33 54
#define LABEL_43 113
#define TAG_44 55
#define LABEL_45 115
#define LABEL_46 117
#define TAG_47 57
#define LABEL_102 119
#define LABEL_49 121
#define TAG_50 59
#define LABEL_52 123
#define LABEL_104 125
#define LABEL_55 127
#define TAG_56 62
#define LABEL_111 129
#define LABEL_112 131
#define LABEL_91 133
#define TAG_92 65
#define LABEL_89 135
#define TAG_90 66
#define LABEL_75 137
#define TAG_76 67
#define LABEL_77 139
#define TAG_78 68
#define LABEL_71 141
#define TAG_72 69
#define LABEL_73 143
#define TAG_74 70
#define LABEL_122 145
#define LABEL_127 147
#define LABEL_128 149
#define LABEL_93 151
#define LABEL_133 153
#define LABEL_134 155
#define LABEL_95 157
#define LABEL_137 159
#define LABEL_138 161
#define LABEL_97 163
#define TAG_98 80
#define LABEL_99 165
#define LABEL_100 167
#define TAG_101 82
#define LABEL_144 169
#define LABEL_103 171
#define LABEL_145 173
#define LABEL_105 175
#define TAG_106 86
#define LABEL_146 177
#define LABEL_147 179
#define LABEL_109 181
#define TAG_110 89
#define LABEL_150 183
#define LABEL_107 185
#define LABEL_113 187
#define TAG_114 92
#define LABEL_115 189
#define TAG_116 93
#define LABEL_153 191
#define LABEL_117 193
#define TAG_118 95
#define LABEL_119 195
#define LABEL_157 197
#define LABEL_121 199
#define LABEL_123 201
#define TAG_124 99
#define LABEL_125 203
#define TAG_126 100
#define LABEL_129 205
#define TAG_130 101
#define LABEL_131 207
#define TAG_132 102
#define LABEL_135 209
#define LABEL_139 211
#define LABEL_163 213
#define LABEL_169 215
#define LABEL_170 217
#define LABEL_171 219
#define LABEL_172 221
#define TAG_281 109
#define LABEL_173 223
#define LABEL_174 225
#define LABEL_140 227
#define LABEL_178 229
#define LABEL_141 231
#define LABEL_142 233
#define TAG_143 115
#define LABEL_183 235
#define LABEL_148 237
#define LABEL_185 239
#define TAG_249 118
#define LABEL_151 241
#define TAG_152 119
#define LABEL_186 243
#define LABEL_154 245
#define LABEL_155 247
#define TAG_156 122
#define LABEL_158 249
#define TAG_159 123
#define LABEL_190 251
#define LABEL_160 253
#define LABEL_191 255
#define LABEL_162 257
#define LABEL_166 259
#define TAG_167 128
#define LABEL_168 261
#define LABEL_164 263
#define TAG_165 130
#define LABEL_180 265
#define LABEL_182 267
#define LABEL_197 269
#define LABEL_198 271
#define LABEL_184 273
#define LABEL_200 275
#define LABEL_202 277
#define LABEL_203 279
#define LABEL_187 281
#define LABEL_188 283
#define TAG_189 140
#define LABEL_205 285
#define LABEL_206 287
#define LABEL_208 289
#define LABEL_209 291
#define LABEL_194 293
#define LABEL_195 295
#define TAG_196 146
#define LABEL_220 297
#define LABEL_199 299
#define LABEL_201 301
#define LABEL_224 303
#define LABEL_204 305
#define LABEL_207 307
#define LABEL_210 309
#define LABEL_212 311
#define LABEL_213 313
#define TAG_214 155
#define LABEL_228 315
#define LABEL_231 317
#define LABEL_215 319
#define LABEL_216 321
#define LABEL_236 323
#define TAG_237 160
#define LABEL_217 325
#define LABEL_244 327
#define LABEL_218 329
#define TAG_219 163
#define LABEL_221 331
#define LABEL_223 333
#define LABEL_225 335
#define LABEL_226 337
#define LABEL_248 339
#define LABEL_232 341
#define TAG_233 169
#define LABEL_229 343
#define TAG_230 170
#define LABEL_234 345
#define LABEL_235 347
#define LABEL_254 349
#define LABEL_240 351
#define TAG_241 174
#define LABEL_255 353
#define LABEL_242 355
#define TAG_243 176
#define LABEL_245 357
#define TAG_246 177
#define LABEL_247 359
#define LABEL_250 361
#define LABEL_251 363
#define LABEL_252 365
#define TAG_253 181
#define LABEL_262 367
#define LABEL_238 369
#define TAG_239 183
#define LABEL_265 371
#define LABEL_256 373
#define LABEL_257 375
#define LABEL_258 377
#define TAG_259 187
#define LABEL_260 379
#define TAG_261 188
#define LABEL_263 381
#define TAG_264 189
#define LABEL_266 383
#define LABEL_267 385
#define TAG_268 191
#define LABEL_269 387
#define TAG_270 192
#define LABEL_271 389
#define TAG_272 193
#define LABEL_273 391
#define LABEL_274 393
#define TAG_275 195
#define LABEL_276 395
#define TAG_277 196
#define LABEL_278 397
#define LABEL_279 399
#define TAG_280 198
#define LABEL_282 401
#define LABEL_283 403
#define TAG_284 200
#define LABEL_285 405
#define LABEL_175 407
#define LABEL_176 409
#define LABEL_286 411
#define LABEL_287 413
#define TAG_288 205
#define LABEL_289 415
#define TAG_290 206
#define LABEL_291 417
#define LABEL_298 419
#define LABEL_293 421
#define LABEL_294 423
#define TAG_295 210
#define LABEL_296 425
#define TAG_297 211
#define LABEL_300 427
#define LABEL_301 429
#define LABEL_302 431
#define TAG_303 214
#define LABEL_304 433
#define TAG_305 215
#define LABEL_306 435
#define LABEL_307 437
#define LABEL_308 439
#define TAG_309 218
#define LABEL_310 441
#define LABEL_311 443
#define LABEL_312 445
#define LABEL_316 447
#define LABEL_313 449
#define LABEL_314 451
#define LABEL_319 453
#define LABEL_315 455
#define LABEL_320 457
#define LABEL_317 459
#define LABEL_325 461
#define LABEL_318 463
#define LABEL_321 465
#define TAG_322 231
#define LABEL_323 467
#define LABEL_330 469
#define LABEL_324 471
#define LABEL_326 473
#define TAG_327 235
#define LABEL_328 475
#define LABEL_334 477
#define LABEL_329 479
#define LABEL_331 481
#define LABEL_332 483
#define LABEL_337 485
#define LABEL_333 487
#define LABEL_335 489
#define LABEL_340 491
#define LABEL_336 493
#define LABEL_338 495
#define LABEL_343 497
#define LABEL_339 499
#define LABEL_341 501
#define LABEL_346 503
#define LABEL_342 505
#define LABEL_344 507
#define LABEL_349 509
#define LABEL_345 511
#define LABEL_347 513
#define LABEL_348 515
#define LABEL_350 517
#define LABEL_351 519
#define TAG_352 258
#define LABEL_353 521
#define LABEL_354 523
#define TAG_355 260
#define LABEL_356 525
#define TAG_357 261
#define LABEL_358 527
#define LABEL_359 529
#define TAG_360 263
#define LABEL_361 531
#define TAG_362 264
#define LABEL_363 533
#define TAG_364 265
#define LABEL_365 535
#define TAG_366 266
#define LABEL_367 537
#define TAG_368 267
#define LABEL_369 539
#define TAG_370 268
#define LABEL_371 541
#define TAG_372 269
#define LABEL_373 543
#define LABEL_374 545
#define LABEL_375 547
#define ENVIRONMENT_LABEL_3 700
#define DEBUGGING_LABEL_2 699
#define PURIFICATION_ROOT 698
#define OBJECT_83 697
#define OBJECT_82 696
#define OBJECT_81 695
#define OBJECT_80 694
#define OBJECT_79 693
#define OBJECT_78 692
#define OBJECT_77 691
#define OBJECT_76 690
#define OBJECT_75 689
#define OBJECT_74 688
#define OBJECT_73 687
#define OBJECT_72 686
#define OBJECT_71 685
#define OBJECT_70 684
#define OBJECT_69 683
#define OBJECT_68 682
#define OBJECT_67 681
#define OBJECT_66 680
#define OBJECT_65 679
#define OBJECT_64 678
#define OBJECT_63 677
#define OBJECT_62 676
#define OBJECT_61 675
#define OBJECT_60 674
#define OBJECT_59 673
#define OBJECT_58 672
#define OBJECT_57 671
#define OBJECT_56 670
#define OBJECT_55 669
#define OBJECT_54 668
#define OBJECT_53 667
#define OBJECT_52 666
#define OBJECT_51 665
#define OBJECT_50 664
#define OBJECT_49 663
#define OBJECT_48 662
#define OBJECT_47 661
#define OBJECT_46 660
#define OBJECT_45 659
#define OBJECT_44 658
#define OBJECT_43 657
#define OBJECT_42 656
#define OBJECT_41 655
#define OBJECT_40 654
#define OBJECT_39 653
#define OBJECT_38 652
#define OBJECT_37 651
#define OBJECT_36 650
#define OBJECT_35 649
#define OBJECT_34 648
#define OBJECT_33 647
#define OBJECT_32 646
#define OBJECT_31 645
#define OBJECT_30 644
#define OBJECT_29 643
#define OBJECT_28 642
#define OBJECT_27 641
#define OBJECT_26 640
#define OBJECT_25 639
#define OBJECT_24 638
#define OBJECT_23 637
#define OBJECT_22 636
#define OBJECT_21 635
#define OBJECT_20 634
#define OBJECT_19 633
#define OBJECT_18 632
#define OBJECT_17 631
#define OBJECT_16 630
#define OBJECT_15 629
#define OBJECT_14 628
#define OBJECT_13 627
#define OBJECT_12 626
#define OBJECT_11 625
#define OBJECT_10 624
#define OBJECT_9 623
#define OBJECT_8 622
#define OBJECT_7 621
#define OBJECT_6 620
#define OBJECT_5 619
#define OBJECT_4 618
#define OBJECT_3 617
#define OBJECT_2 616
#define OBJECT_1 615
#define OBJECT_0 614
#define EXECUTE_CACHE_299 549
#define EXECUTE_CACHE_292 551
#define EXECUTE_CACHE_227 553
#define EXECUTE_CACHE_222 555
#define EXECUTE_CACHE_211 557
#define EXECUTE_CACHE_193 559
#define EXECUTE_CACHE_192 561
#define EXECUTE_CACHE_181 563
#define EXECUTE_CACHE_179 565
#define EXECUTE_CACHE_177 567
#define EXECUTE_CACHE_161 569
#define EXECUTE_CACHE_149 571
#define EXECUTE_CACHE_136 573
#define EXECUTE_CACHE_108 575
#define EXECUTE_CACHE_96 577
#define EXECUTE_CACHE_94 579
#define EXECUTE_CACHE_120 581
#define EXECUTE_CACHE_79 583
#define EXECUTE_CACHE_54 585
#define EXECUTE_CACHE_25 587
#define FREE_REFERENCE_20 590
#define FREE_REFERENCE_19 591
#define FREE_REFERENCE_18 592
#define FREE_REFERENCE_17 593
#define FREE_REFERENCE_16 594
#define FREE_REFERENCE_15 595
#define FREE_REFERENCE_14 596
#define FREE_REFERENCE_13 597
#define FREE_REFERENCE_12 598
#define FREE_REFERENCE_11 599
#define FREE_REFERENCE_10 600
#define FREE_REFERENCE_9 601
#define FREE_REFERENCE_8 602
#define FREE_REFERENCE_7 603
#define FREE_REFERENCE_6 604
#define FREE_REFERENCE_5 605
#define FREE_REFERENCE_4 606
#define FREE_REFERENCE_3 607
#define FREE_REFERENCE_2 608
#define FREE_REFERENCE_1 609
#define FREE_REFERENCE_0 610
#define GLOBAL_EXECUTE_CACHE_5 612
#define FREE_REFERENCES_LABEL_0 548
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rtlcon_so_455992bcaaeb7039 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd83;
  machine_word Wrd95;
  machine_word Wrd74;
  machine_word Wrd67;
  machine_word Wrd113;
  machine_word Wrd108;
  machine_word Wrd90;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd76;
  machine_word Wrd56;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd35;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd294;
  machine_word Wrd293;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd139;
  machine_word Wrd132;
  machine_word Wrd137;
  machine_word Wrd129;
  machine_word Wrd130;
  machine_word Wrd124;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd146;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd123;
  machine_word Wrd117;
  machine_word Wrd118;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd103;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd227;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd246;
  machine_word Wrd245;
  machine_word Wrd282;
  machine_word Wrd281;
  machine_word Wrd257;
  machine_word Wrd259;
  machine_word Wrd261;
  machine_word Wrd263;
  machine_word Wrd262;
  machine_word Wrd254;
  machine_word Wrd255;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd249;
  machine_word Wrd250;
  machine_word Wrd276;
  machine_word Wrd278;
  machine_word Wrd280;
  machine_word Wrd279;
  machine_word Wrd273;
  machine_word Wrd274;
  machine_word Wrd271;
  machine_word Wrd270;
  machine_word Wrd268;
  machine_word Wrd269;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd230;
  machine_word Wrd229;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd222;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd214;
  machine_word Wrd215;
  machine_word Wrd216;
  machine_word Wrd213;
  machine_word Wrd207;
  machine_word Wrd208;
  machine_word Wrd209;
  machine_word Wrd206;
  machine_word Wrd200;
  machine_word Wrd201;
  machine_word Wrd202;
  machine_word Wrd199;
  machine_word Wrd191;
  machine_word Wrd193;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd190;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd186;
  machine_word Wrd183;
  machine_word Wrd175;
  machine_word Wrd177;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd174;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd170;
  machine_word Wrd167;
  machine_word Wrd161;
  machine_word Wrd162;
  machine_word Wrd163;
  machine_word Wrd160;
  machine_word Wrd152;
  machine_word Wrd154;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd286;
  machine_word Wrd289;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd304;
  machine_word Wrd299;
  machine_word Wrd296;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_9);
      goto label_445;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_13);
      goto label_446;

    case 5:
      current_block = (Rpc - LABEL_8);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_14);
      goto lambda_3;

    case 7:
      current_block = (Rpc - LABEL_10);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_20);
      goto label_447;

    case 9:
      current_block = (Rpc - LABEL_11);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_22);
      goto label_448;

    case 11:
      current_block = (Rpc - LABEL_12);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_15);
      goto lambda_520;

    case 13:
      current_block = (Rpc - LABEL_17);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_18);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_28);
      goto label_449;

    case 16:
      current_block = (Rpc - LABEL_19);
      goto continuation_17;

    case 17:
      current_block = (Rpc - LABEL_29);
      goto lambda_15;

    case 18:
      current_block = (Rpc - LABEL_21);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_23);
      goto lambda_521;

    case 20:
      current_block = (Rpc - LABEL_26);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_27);
      goto continuation_19;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto lambda_523;

    case 23:
      current_block = (Rpc - LABEL_40);
      goto continuation_25;

    case 24:
      current_block = (Rpc - LABEL_41);
      goto locative_dereference_for_statement_528;

    case 25:
      current_block = (Rpc - LABEL_48);
      goto label_450;

    case 26:
      current_block = (Rpc - LABEL_38);
      goto expression_simplify_232;

    case 27:
      current_block = (Rpc - LABEL_51);
      goto label_451;

    case 28:
      current_block = (Rpc - LABEL_53);
      goto label_452;

    case 29:
      current_block = (Rpc - LABEL_36);
      goto simplify_expressions_242;

    case 30:
      current_block = (Rpc - LABEL_57);
      goto continuation_334;

    case 31:
      current_block = (Rpc - LABEL_58);
      goto continuation_293;

    case 32:
      current_block = (Rpc - LABEL_34);
      goto locative_dereference_356;

    case 33:
      current_block = (Rpc - LABEL_59);
      goto label_473;

    case 34:
      current_block = (Rpc - LABEL_60);
      goto label_453;

    case 35:
      current_block = (Rpc - LABEL_61);
      goto label_463;

    case 36:
      current_block = (Rpc - LABEL_62);
      goto label_464;

    case 37:
      current_block = (Rpc - LABEL_63);
      goto label_465;

    case 38:
      current_block = (Rpc - LABEL_64);
      goto label_466;

    case 39:
      current_block = (Rpc - LABEL_65);
      goto label_467;

    case 40:
      current_block = (Rpc - LABEL_66);
      goto label_468;

    case 41:
      current_block = (Rpc - LABEL_67);
      goto label_469;

    case 42:
      current_block = (Rpc - LABEL_68);
      goto label_470;

    case 43:
      current_block = (Rpc - LABEL_69);
      goto label_471;

    case 44:
      current_block = (Rpc - LABEL_70);
      goto label_472;

    case 45:
      current_block = (Rpc - LABEL_80);
      goto label_454;

    case 46:
      current_block = (Rpc - LABEL_81);
      goto label_455;

    case 47:
      current_block = (Rpc - LABEL_82);
      goto label_456;

    case 48:
      current_block = (Rpc - LABEL_83);
      goto label_457;

    case 49:
      current_block = (Rpc - LABEL_84);
      goto label_458;

    case 50:
      current_block = (Rpc - LABEL_85);
      goto label_459;

    case 51:
      current_block = (Rpc - LABEL_86);
      goto label_460;

    case 52:
      current_block = (Rpc - LABEL_87);
      goto label_461;

    case 53:
      current_block = (Rpc - LABEL_88);
      goto label_462;

    case 54:
      current_block = (Rpc - LABEL_32);
      goto typed_cons_436;

    case 55:
      current_block = (Rpc - LABEL_43);
      goto lambda_529;

    case 56:
      current_block = (Rpc - LABEL_45);
      goto continuation_27;

    case 57:
      current_block = (Rpc - LABEL_46);
      goto expression_simplify_for_statement_530;

    case 58:
      current_block = (Rpc - LABEL_102);
      goto label_474;

    case 59:
      current_block = (Rpc - LABEL_49);
      goto lambda_531;

    case 60:
      current_block = (Rpc - LABEL_52);
      goto continuation_224;

    case 61:
      current_block = (Rpc - LABEL_104);
      goto label_475;

    case 62:
      current_block = (Rpc - LABEL_55);
      goto loop_240;

    case 63:
      current_block = (Rpc - LABEL_111);
      goto label_476;

    case 64:
      current_block = (Rpc - LABEL_112);
      goto lambda_292;

    case 65:
      current_block = (Rpc - LABEL_91);
      goto lambda_538;

    case 66:
      current_block = (Rpc - LABEL_89);
      goto finish_322;

    case 67:
      current_block = (Rpc - LABEL_75);
      goto lambda_535;

    case 68:
      current_block = (Rpc - LABEL_77);
      goto lambda_536;

    case 69:
      current_block = (Rpc - LABEL_71);
      goto lambda_533;

    case 70:
      current_block = (Rpc - LABEL_73);
      goto lambda_534;

    case 71:
      current_block = (Rpc - LABEL_122);
      goto lambda_289;

    case 72:
      current_block = (Rpc - LABEL_127);
      goto label_477;

    case 73:
      current_block = (Rpc - LABEL_128);
      goto label_478;

    case 74:
      current_block = (Rpc - LABEL_93);
      goto continuation_351;

    case 75:
      current_block = (Rpc - LABEL_133);
      goto label_479;

    case 76:
      current_block = (Rpc - LABEL_134);
      goto label_480;

    case 77:
      current_block = (Rpc - LABEL_95);
      goto continuation_370;

    case 78:
      current_block = (Rpc - LABEL_137);
      goto label_481;

    case 79:
      current_block = (Rpc - LABEL_138);
      goto label_482;

    case 80:
      current_block = (Rpc - LABEL_97);
      goto lambda_539;

    case 81:
      current_block = (Rpc - LABEL_99);
      goto continuation_29;

    case 82:
      current_block = (Rpc - LABEL_100);
      goto expression_simplify_for_predicate_540;

    case 83:
      current_block = (Rpc - LABEL_144);
      goto label_483;

    case 84:
      current_block = (Rpc - LABEL_103);
      goto continuation_22;

    case 85:
      current_block = (Rpc - LABEL_145);
      goto make_offset_264;

    case 86:
      current_block = (Rpc - LABEL_105);
      goto lambda_541;

    case 87:
      current_block = (Rpc - LABEL_146);
      goto label_484;

    case 88:
      current_block = (Rpc - LABEL_147);
      goto assign_to_temporary_247;

    case 89:
      current_block = (Rpc - LABEL_109);
      goto lambda_542;

    case 90:
      current_block = (Rpc - LABEL_150);
      goto label_485;

    case 91:
      current_block = (Rpc - LABEL_107);
      goto continuation_239;

    case 92:
      current_block = (Rpc - LABEL_113);
      goto lambda_544;

    case 93:
      current_block = (Rpc - LABEL_115);
      goto lambda_545;

    case 94:
      current_block = (Rpc - LABEL_153);
      goto label_486;

    case 95:
      current_block = (Rpc - LABEL_117);
      goto lambda_546;

    case 96:
      current_block = (Rpc - LABEL_119);
      goto continuation_320;

    case 97:
      current_block = (Rpc - LABEL_157);
      goto make_offset_address_275;

    case 98:
      current_block = (Rpc - LABEL_121);
      goto continuation_343;

    case 99:
      current_block = (Rpc - LABEL_123);
      goto lambda_548;

    case 100:
      current_block = (Rpc - LABEL_125);
      goto lambda_549;

    case 101:
      current_block = (Rpc - LABEL_129);
      goto lambda_550;

    case 102:
      current_block = (Rpc - LABEL_131);
      goto lambda_551;

    case 103:
      current_block = (Rpc - LABEL_135);
      goto continuation_353;

    case 104:
      current_block = (Rpc - LABEL_139);
      goto continuation_373;

    case 105:
      current_block = (Rpc - LABEL_163);
      goto label_487;

    case 106:
      current_block = (Rpc - LABEL_169);
      goto label_488;

    case 107:
      current_block = (Rpc - LABEL_170);
      goto label_489;

    case 108:
      current_block = (Rpc - LABEL_171);
      goto continuation_124;

    case 109:
      current_block = (Rpc - LABEL_172);
      goto lambda_561;

    case 110:
      current_block = (Rpc - LABEL_173);
      goto label_505;

    case 111:
      current_block = (Rpc - LABEL_174);
      goto label_506;

    case 112:
      current_block = (Rpc - LABEL_140);
      goto continuation_371;

    case 113:
      current_block = (Rpc - LABEL_178);
      goto label_490;

    case 114:
      current_block = (Rpc - LABEL_141);
      goto continuation_37;

    case 115:
      current_block = (Rpc - LABEL_142);
      goto expression_simplify_for_pseudo_assignment_552;

    case 116:
      current_block = (Rpc - LABEL_183);
      goto label_491;

    case 117:
      current_block = (Rpc - LABEL_148);
      goto continuation_243;

    case 118:
      current_block = (Rpc - LABEL_185);
      goto lambda_562;

    case 119:
      current_block = (Rpc - LABEL_151);
      goto lambda_555;

    case 120:
      current_block = (Rpc - LABEL_186);
      goto assign_to_address_temporary_363;

    case 121:
      current_block = (Rpc - LABEL_154);
      goto continuation_316;

    case 122:
      current_block = (Rpc - LABEL_155);
      goto lambda_556;

    case 123:
      current_block = (Rpc - LABEL_158);
      goto lambda_558;

    case 124:
      current_block = (Rpc - LABEL_190);
      goto continuation_282;

    case 125:
      current_block = (Rpc - LABEL_160);
      goto continuation_280;

    case 126:
      current_block = (Rpc - LABEL_191);
      goto label_492;

    case 127:
      current_block = (Rpc - LABEL_162);
      goto continuation_285;

    case 128:
      current_block = (Rpc - LABEL_166);
      goto lambda_560;

    case 129:
      current_block = (Rpc - LABEL_168);
      goto continuation_377;

    case 130:
      current_block = (Rpc - LABEL_164);
      goto lambda_559;

    case 131:
      current_block = (Rpc - LABEL_180);
      goto continuation_38;

    case 132:
      current_block = (Rpc - LABEL_182);
      goto continuation_31;

    case 133:
      current_block = (Rpc - LABEL_197);
      goto label_493;

    case 134:
      current_block = (Rpc - LABEL_198);
      goto label_494;

    case 135:
      current_block = (Rpc - LABEL_184);
      goto continuation_245;

    case 136:
      current_block = (Rpc - LABEL_200);
      goto loop_429;

    case 137:
      current_block = (Rpc - LABEL_202);
      goto label_495;

    case 138:
      current_block = (Rpc - LABEL_203);
      goto label_496;

    case 139:
      current_block = (Rpc - LABEL_187);
      goto continuation_357;

    case 140:
      current_block = (Rpc - LABEL_188);
      goto lambda_564;

    case 141:
      current_block = (Rpc - LABEL_205);
      goto process_397;

    case 142:
      current_block = (Rpc - LABEL_206);
      goto label_497;

    case 143:
      current_block = (Rpc - LABEL_208);
      goto label_498;

    case 144:
      current_block = (Rpc - LABEL_209);
      goto label_499;

    case 145:
      current_block = (Rpc - LABEL_194);
      goto continuation_42;

    case 146:
      current_block = (Rpc - LABEL_195);
      goto lambda_565;

    case 147:
      current_block = (Rpc - LABEL_220);
      goto define_expression_method_365;

    case 148:
      current_block = (Rpc - LABEL_199);
      goto continuation_244;

    case 149:
      current_block = (Rpc - LABEL_201);
      goto continuation_428;

    case 150:
      current_block = (Rpc - LABEL_224);
      goto label_500;

    case 151:
      current_block = (Rpc - LABEL_204);
      goto continuation_361;

    case 152:
      current_block = (Rpc - LABEL_207);
      goto continuation_395;

    case 153:
      current_block = (Rpc - LABEL_210);
      goto continuation_392;

    case 154:
      current_block = (Rpc - LABEL_212);
      goto continuation_396;

    case 155:
      current_block = (Rpc - LABEL_213);
      goto lambda_568;

    case 156:
      current_block = (Rpc - LABEL_228);
      goto label_501;

    case 157:
      current_block = (Rpc - LABEL_231);
      goto label_502;

    case 158:
      current_block = (Rpc - LABEL_215);
      goto continuation_64;

    case 159:
      current_block = (Rpc - LABEL_216);
      goto continuation_63;

    case 160:
      current_block = (Rpc - LABEL_236);
      goto lambda_573;

    case 161:
      current_block = (Rpc - LABEL_217);
      goto lambda_62;

    case 162:
      current_block = (Rpc - LABEL_244);
      goto address_method_369;

    case 163:
      current_block = (Rpc - LABEL_218);
      goto lambda_569;

    case 164:
      current_block = (Rpc - LABEL_221);
      goto continuation_364;

    case 165:
      current_block = (Rpc - LABEL_223);
      goto continuation_425;

    case 166:
      current_block = (Rpc - LABEL_225);
      goto continuation_360;

    case 167:
      current_block = (Rpc - LABEL_226);
      goto continuation_391;

    case 168:
      current_block = (Rpc - LABEL_248);
      goto do_chunk_432;

    case 169:
      current_block = (Rpc - LABEL_232);
      goto lambda_572;

    case 170:
      current_block = (Rpc - LABEL_229);
      goto lambda_571;

    case 171:
      current_block = (Rpc - LABEL_234);
      goto continuation_83;

    case 172:
      current_block = (Rpc - LABEL_235);
      goto continuation_82;

    case 173:
      current_block = (Rpc - LABEL_254);
      goto continuation_43;

    case 174:
      current_block = (Rpc - LABEL_240);
      goto lambda_576;

    case 175:
      current_block = (Rpc - LABEL_255);
      goto label_503;

    case 176:
      current_block = (Rpc - LABEL_242);
      goto lambda_577;

    case 177:
      current_block = (Rpc - LABEL_245);
      goto lambda_579;

    case 178:
      current_block = (Rpc - LABEL_247);
      goto continuation_39;

    case 179:
      current_block = (Rpc - LABEL_250);
      goto continuation_408;

    case 180:
      current_block = (Rpc - LABEL_251);
      goto continuation_90;

    case 181:
      current_block = (Rpc - LABEL_252);
      goto lambda_581;

    case 182:
      current_block = (Rpc - LABEL_262);
      goto continuation_66;

    case 183:
      current_block = (Rpc - LABEL_238);
      goto lambda_574;

    case 184:
      current_block = (Rpc - LABEL_265);
      goto label_504;

    case 185:
      current_block = (Rpc - LABEL_256);
      goto continuation_407;

    case 186:
      current_block = (Rpc - LABEL_257);
      goto continuation_97;

    case 187:
      current_block = (Rpc - LABEL_258);
      goto lambda_582;

    case 188:
      current_block = (Rpc - LABEL_260);
      goto lambda_583;

    case 189:
      current_block = (Rpc - LABEL_263);
      goto lambda_584;

    case 190:
      current_block = (Rpc - LABEL_266);
      goto continuation_102;

    case 191:
      current_block = (Rpc - LABEL_267);
      goto lambda_585;

    case 192:
      current_block = (Rpc - LABEL_269);
      goto lambda_586;

    case 193:
      current_block = (Rpc - LABEL_271);
      goto lambda_587;

    case 194:
      current_block = (Rpc - LABEL_273);
      goto continuation_106;

    case 195:
      current_block = (Rpc - LABEL_274);
      goto lambda_588;

    case 196:
      current_block = (Rpc - LABEL_276);
      goto lambda_589;

    case 197:
      current_block = (Rpc - LABEL_278);
      goto continuation_118;

    case 198:
      current_block = (Rpc - LABEL_279);
      goto lambda_590;

    case 199:
      current_block = (Rpc - LABEL_282);
      goto continuation_134;

    case 200:
      current_block = (Rpc - LABEL_283);
      goto lambda_591;

    case 201:
      current_block = (Rpc - LABEL_285);
      goto continuation_109;

    case 202:
      current_block = (Rpc - LABEL_175);
      goto continuation_123;

    case 203:
      current_block = (Rpc - LABEL_176);
      goto lambda_122;

    case 204:
      current_block = (Rpc - LABEL_286);
      goto continuation_141;

    case 205:
      current_block = (Rpc - LABEL_287);
      goto lambda_592;

    case 206:
      current_block = (Rpc - LABEL_289);
      goto lambda_593;

    case 207:
      current_block = (Rpc - LABEL_291);
      goto continuation_121;

    case 208:
      current_block = (Rpc - LABEL_298);
      goto label_507;

    case 209:
      current_block = (Rpc - LABEL_293);
      goto continuation_148;

    case 210:
      current_block = (Rpc - LABEL_294);
      goto lambda_595;

    case 211:
      current_block = (Rpc - LABEL_296);
      goto lambda_596;

    case 212:
      current_block = (Rpc - LABEL_300);
      goto continuation_152;

    case 213:
      current_block = (Rpc - LABEL_301);
      goto lambda_151;

    case 214:
      current_block = (Rpc - LABEL_302);
      goto lambda_597;

    case 215:
      current_block = (Rpc - LABEL_304);
      goto lambda_598;

    case 216:
      current_block = (Rpc - LABEL_306);
      goto continuation_156;

    case 217:
      current_block = (Rpc - LABEL_307);
      goto lambda_155;

    case 218:
      current_block = (Rpc - LABEL_308);
      goto lambda_600;

    case 219:
      current_block = (Rpc - LABEL_310);
      goto continuation_163;

    case 220:
      current_block = (Rpc - LABEL_311);
      goto lambda_162;

    case 221:
      current_block = (Rpc - LABEL_312);
      goto continuation_169;

    case 222:
      current_block = (Rpc - LABEL_316);
      goto label_508;

    case 223:
      current_block = (Rpc - LABEL_313);
      goto lambda_168;

    case 224:
      current_block = (Rpc - LABEL_314);
      goto continuation_171;

    case 225:
      current_block = (Rpc - LABEL_319);
      goto label_509;

    case 226:
      current_block = (Rpc - LABEL_315);
      goto continuation_170;

    case 227:
      current_block = (Rpc - LABEL_320);
      goto object_selector_440;

    case 228:
      current_block = (Rpc - LABEL_317);
      goto continuation_173;

    case 229:
      current_block = (Rpc - LABEL_325);
      goto label_510;

    case 230:
      current_block = (Rpc - LABEL_318);
      goto continuation_172;

    case 231:
      current_block = (Rpc - LABEL_321);
      goto lambda_605;

    case 232:
      current_block = (Rpc - LABEL_323);
      goto continuation_175;

    case 233:
      current_block = (Rpc - LABEL_330);
      goto label_511;

    case 234:
      current_block = (Rpc - LABEL_324);
      goto continuation_174;

    case 235:
      current_block = (Rpc - LABEL_326);
      goto lambda_606;

    case 236:
      current_block = (Rpc - LABEL_328);
      goto continuation_177;

    case 237:
      current_block = (Rpc - LABEL_334);
      goto label_512;

    case 238:
      current_block = (Rpc - LABEL_329);
      goto continuation_176;

    case 239:
      current_block = (Rpc - LABEL_331);
      goto continuation_437;

    case 240:
      current_block = (Rpc - LABEL_332);
      goto continuation_179;

    case 241:
      current_block = (Rpc - LABEL_337);
      goto label_513;

    case 242:
      current_block = (Rpc - LABEL_333);
      goto continuation_178;

    case 243:
      current_block = (Rpc - LABEL_335);
      goto continuation_181;

    case 244:
      current_block = (Rpc - LABEL_340);
      goto label_514;

    case 245:
      current_block = (Rpc - LABEL_336);
      goto continuation_180;

    case 246:
      current_block = (Rpc - LABEL_338);
      goto continuation_183;

    case 247:
      current_block = (Rpc - LABEL_343);
      goto label_515;

    case 248:
      current_block = (Rpc - LABEL_339);
      goto continuation_182;

    case 249:
      current_block = (Rpc - LABEL_341);
      goto continuation_185;

    case 250:
      current_block = (Rpc - LABEL_346);
      goto label_516;

    case 251:
      current_block = (Rpc - LABEL_342);
      goto continuation_184;

    case 252:
      current_block = (Rpc - LABEL_344);
      goto continuation_187;

    case 253:
      current_block = (Rpc - LABEL_349);
      goto label_517;

    case 254:
      current_block = (Rpc - LABEL_345);
      goto continuation_186;

    case 255:
      current_block = (Rpc - LABEL_347);
      goto continuation_189;

    case 256:
      current_block = (Rpc - LABEL_348);
      goto continuation_188;

    case 257:
      current_block = (Rpc - LABEL_350);
      goto continuation_198;

    case 258:
      current_block = (Rpc - LABEL_351);
      goto lambda_607;

    case 259:
      current_block = (Rpc - LABEL_353);
      goto continuation_205;

    case 260:
      current_block = (Rpc - LABEL_354);
      goto lambda_608;

    case 261:
      current_block = (Rpc - LABEL_356);
      goto lambda_609;

    case 262:
      current_block = (Rpc - LABEL_358);
      goto continuation_212;

    case 263:
      current_block = (Rpc - LABEL_359);
      goto lambda_610;

    case 264:
      current_block = (Rpc - LABEL_361);
      goto lambda_611;

    case 265:
      current_block = (Rpc - LABEL_363);
      goto lambda_612;

    case 266:
      current_block = (Rpc - LABEL_365);
      goto lambda_613;

    case 267:
      current_block = (Rpc - LABEL_367);
      goto lambda_614;

    case 268:
      current_block = (Rpc - LABEL_369);
      goto lambda_615;

    case 269:
      current_block = (Rpc - LABEL_371);
      goto lambda_616;

    case 270:
      current_block = (Rpc - LABEL_373);
      goto label_618;

    case 271:
      current_block = (Rpc - LABEL_374);
      goto label_619;

    case 272:
      current_block = (Rpc - LABEL_375);
      goto expression_444;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_444)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_374])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_619)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_618)
  {
    static const short sections [] =
      {
	0,
	2,
	2,
	2,
	2,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	2,
	2,
	2,
	1,
	2,
	2,
	2,
	1,
	1,
	2,
	2,
	2,
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 25)
      goto label_617;
    blocks = (current_block [OBJECT_83]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_373])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_617)
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
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_625;
  Wrd14 = Wrd18;

DEFLABEL (label_624)
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_3;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_623;
  Wrd11 = Wrd15;

DEFLABEL (label_622)
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_3;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_621;
  Wrd8 = Wrd12;

DEFLABEL (label_620)
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_3;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (label_621)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd9.pObj));

DEFLABEL (label_448)
  (Wrd8.Obj) = Rvl;
  goto label_620;

DEFLABEL (label_623)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd12.pObj));

DEFLABEL (label_446)
  (Wrd11.Obj) = Rvl;
  goto label_622;

DEFLABEL (label_625)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd15.pObj));

DEFLABEL (label_445)
  (Wrd14.Obj) = Rvl;
  goto label_624;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_629;
  Wrd14 = Wrd18;

DEFLABEL (label_628)
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_15;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_627;
  Wrd8 = Wrd12;

DEFLABEL (label_626)
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_15;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (label_627)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd9.pObj));

DEFLABEL (label_449)
  (Wrd8.Obj) = Rvl;
  goto label_626;

DEFLABEL (label_629)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd15.pObj));

DEFLABEL (label_447)
  (Wrd14.Obj) = Rvl;
  goto label_628;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd50.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32])));
  Rhp += 3;
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd48.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34])));
  Rhp += 1;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36])));
  Rhp += 1;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd44.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38])));
  Rhp += 1;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  ((Wrd44.pObj) [2]) = (Wrd13.Obj);
  ((Wrd46.pObj) [2]) = (Wrd45.Obj);
  ((Wrd48.pObj) [2]) = (Wrd45.Obj);
  Wrd42 = Wrd50;
  ((Wrd42.pObj) [2]) = (Wrd47.Obj);
  ((Wrd42.pObj) [3]) = (Wrd45.Obj);
  ((Wrd42.pObj) [4]) = (Wrd7.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  ((Wrd21.pObj) [2]) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_101);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_100])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_143);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_142])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [5]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_141);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_180]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_181]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_180);
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_194]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.pObj) = (& (Rsp [1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_196);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_195])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd18.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_194);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_215]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_216]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [3]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_217]))));
  (* (--Rsp)) = (Wrd18.Obj);
  goto address_method_369;

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_216);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_215);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_234]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_235]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [3]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_237);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_236])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd19 = Wrd18;
  (Wrd20.Obj) = (Rsp [4]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  goto address_method_369;

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_235);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_234);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_251]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_253);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_252])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd15.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_251);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_257]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_259);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_258])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd15.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_257);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_266]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_268);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_267])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [5]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd15.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_266);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_273]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_275);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_274])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [5]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd15.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_273);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_278]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x4fb, 2);
  (* (Rhp++)) = (dispatch_base + TAG_280);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_279])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [5]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd15.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_278);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_281);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_172])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  ((Wrd18.pObj) [2]) = (Wrd7.Obj);
  ((Wrd18.pObj) [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  ((Wrd22.pObj) [0]) = (Wrd14.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_282]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.pObj) = (& (Rsp [1]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_284);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_283])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  Wrd31 = Wrd30;
  (Wrd32.Obj) = (Rsp [2]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd33.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_282);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_286]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_288);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_287])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd15.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_286);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_293]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_295);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_294])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd15.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_148)
  INTERRUPT_CHECK (27, LABEL_293);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_300]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_301]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd13.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_152)
  INTERRUPT_CHECK (27, LABEL_300);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_306]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_307]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd13.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_156)
  INTERRUPT_CHECK (27, LABEL_306);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_310]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_311]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd13.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_163)
  INTERRUPT_CHECK (27, LABEL_310);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_312]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_313]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd13.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_169)
  INTERRUPT_CHECK (27, LABEL_312);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_314]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_315]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [3]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_649;
  Wrd17 = Wrd21;

DEFLABEL (label_648)
  (* (--Rsp)) = (Wrd17.Obj);
  goto object_selector_440;

DEFLABEL (continuation_170)
  INTERRUPT_CHECK (27, LABEL_315);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_171)
  INTERRUPT_CHECK (27, LABEL_314);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_317]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_318]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [3]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_647;
  Wrd17 = Wrd21;

DEFLABEL (label_646)
  (* (--Rsp)) = (Wrd17.Obj);
  goto object_selector_440;

DEFLABEL (continuation_172)
  INTERRUPT_CHECK (27, LABEL_318);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_173)
  INTERRUPT_CHECK (27, LABEL_317);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_323]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_324]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [3]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_645;
  Wrd17 = Wrd21;

DEFLABEL (label_644)
  (* (--Rsp)) = (Wrd17.Obj);
  goto object_selector_440;

DEFLABEL (continuation_174)
  INTERRUPT_CHECK (27, LABEL_324);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_175)
  INTERRUPT_CHECK (27, LABEL_323);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_328]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_329]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [3]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_643;
  Wrd17 = Wrd21;

DEFLABEL (label_642)
  (* (--Rsp)) = (Wrd17.Obj);
  goto object_selector_440;

DEFLABEL (continuation_176)
  INTERRUPT_CHECK (27, LABEL_329);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_177)
  INTERRUPT_CHECK (27, LABEL_328);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_332]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_333]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [3]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_641;
  Wrd17 = Wrd21;

DEFLABEL (label_640)
  (* (--Rsp)) = (Wrd17.Obj);
  goto object_selector_440;

DEFLABEL (continuation_178)
  INTERRUPT_CHECK (27, LABEL_333);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_179)
  INTERRUPT_CHECK (27, LABEL_332);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_335]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_336]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [3]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_639;
  Wrd17 = Wrd21;

DEFLABEL (label_638)
  (* (--Rsp)) = (Wrd17.Obj);
  goto object_selector_440;

DEFLABEL (continuation_180)
  INTERRUPT_CHECK (27, LABEL_336);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_181)
  INTERRUPT_CHECK (27, LABEL_335);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_338]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_339]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [3]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_637;
  Wrd17 = Wrd21;

DEFLABEL (label_636)
  (* (--Rsp)) = (Wrd17.Obj);
  goto object_selector_440;

DEFLABEL (continuation_182)
  INTERRUPT_CHECK (27, LABEL_339);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_183)
  INTERRUPT_CHECK (27, LABEL_338);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_341]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_342]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [3]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_635;
  Wrd17 = Wrd21;

DEFLABEL (label_634)
  (* (--Rsp)) = (Wrd17.Obj);
  goto object_selector_440;

DEFLABEL (continuation_184)
  INTERRUPT_CHECK (27, LABEL_342);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_185)
  INTERRUPT_CHECK (27, LABEL_341);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_344]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_345]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [3]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_633;
  Wrd17 = Wrd21;

DEFLABEL (label_632)
  (* (--Rsp)) = (Wrd17.Obj);
  goto object_selector_440;

DEFLABEL (continuation_186)
  INTERRUPT_CHECK (27, LABEL_345);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_187)
  INTERRUPT_CHECK (27, LABEL_344);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_347]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_348]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.pObj) = (& (Rsp [3]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_631;
  Wrd17 = Wrd21;

DEFLABEL (label_630)
  (* (--Rsp)) = (Wrd17.Obj);
  goto object_selector_440;

DEFLABEL (continuation_188)
  INTERRUPT_CHECK (27, LABEL_348);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_189)
  INTERRUPT_CHECK (27, LABEL_347);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_350]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x707, 2);
  (* (Rhp++)) = (dispatch_base + TAG_352);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_351])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd15.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_198)
  INTERRUPT_CHECK (27, LABEL_350);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_353]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_355);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_354])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd15.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_205)
  INTERRUPT_CHECK (27, LABEL_353);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_358]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_360);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_359])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd15.Obj);
  Rdl = (& (Rsp [3]));
  goto define_expression_method_365;

DEFLABEL (continuation_212)
  INTERRUPT_CHECK (27, LABEL_358);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x707, 2);
  (* (Rhp++)) = (dispatch_base + TAG_366);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_365])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd11.Obj);
  Rdl = (& (Rsp [10]));
  goto define_expression_method_365;

DEFLABEL (label_631)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_349])), (Wrd18.pObj));

DEFLABEL (label_517)
  (Wrd17.Obj) = Rvl;
  goto label_630;

DEFLABEL (label_633)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_346])), (Wrd18.pObj));

DEFLABEL (label_516)
  (Wrd17.Obj) = Rvl;
  goto label_632;

DEFLABEL (label_635)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_343])), (Wrd18.pObj));

DEFLABEL (label_515)
  (Wrd17.Obj) = Rvl;
  goto label_634;

DEFLABEL (label_637)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_340])), (Wrd18.pObj));

DEFLABEL (label_514)
  (Wrd17.Obj) = Rvl;
  goto label_636;

DEFLABEL (label_639)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_337])), (Wrd18.pObj));

DEFLABEL (label_513)
  (Wrd17.Obj) = Rvl;
  goto label_638;

DEFLABEL (label_641)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_334])), (Wrd18.pObj));

DEFLABEL (label_512)
  (Wrd17.Obj) = Rvl;
  goto label_640;

DEFLABEL (label_643)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_330])), (Wrd18.pObj));

DEFLABEL (label_511)
  (Wrd17.Obj) = Rvl;
  goto label_642;

DEFLABEL (label_645)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_325])), (Wrd18.pObj));

DEFLABEL (label_510)
  (Wrd17.Obj) = Rvl;
  goto label_644;

DEFLABEL (label_647)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_319])), (Wrd18.pObj));

DEFLABEL (label_509)
  (Wrd17.Obj) = Rvl;
  goto label_646;

DEFLABEL (label_649)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_316])), (Wrd18.pObj));

DEFLABEL (label_508)
  (Wrd17.Obj) = Rvl;
  goto label_648;

DEFLABEL (lambda_519)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_14);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_520)
  CLOSURE_HEADER (LABEL_15);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (lambda_522)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_29);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_521)
  CLOSURE_HEADER (LABEL_23);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_523)
  CLOSURE_HEADER (LABEL_30);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd18.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (locative_dereference_for_statement_528)
  CLOSURE_HEADER (LABEL_41);

DEFLABEL (locative_dereference_for_statement_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_651;
  Wrd10 = Wrd14;

DEFLABEL (label_650)
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  ((Wrd19.pObj) [2]) = (Wrd16.Obj);
  (Rsp [4]) = (Wrd18.Obj);
  goto locative_dereference_356;

DEFLABEL (label_651)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48])), (Wrd11.pObj));

DEFLABEL (label_450)
  (Wrd10.Obj) = Rvl;
  goto label_650;

DEFLABEL (expression_simplify_527)
DEFLABEL (expression_simplify_232)
  INTERRUPT_CHECK (26, LABEL_38);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_659;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_658)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_15])))
    goto label_652;
  (Wrd33.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd34.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_652)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_657;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_656)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54]));

DEFLABEL (continuation_224)
  INTERRUPT_CHECK (27, LABEL_52);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_653;
  Rsp = (& (Rsp [2]));
  goto assign_to_temporary_247;

DEFLABEL (label_653)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_655;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_654)
  (Wrd19.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_106);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_105])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [4]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  ((Wrd25.pObj) [3]) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Rsp [4]) = (Wrd27.Obj);
  (Wrd30.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd30.Obj);
  Rsp = (& (Rsp [3]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_34]), 2);

DEFLABEL (label_655)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_475)
  (Wrd7.Obj) = Rvl;
  goto label_654;

DEFLABEL (label_657)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_452)
  (* (--Rsp)) = Rvl;
  goto label_656;

DEFLABEL (label_659)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_451)
  (Wrd5.Obj) = Rvl;
  goto label_658;

DEFLABEL (simplify_expressions_526)
DEFLABEL (simplify_expressions_242)
  INTERRUPT_CHECK (26, LABEL_36);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_56);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55])));
  Rhp += 3;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  Wrd17 = Wrd21;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd17.pObj) [3]) = (Wrd15.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [4]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_240;

DEFLABEL (locative_dereference_525)
DEFLABEL (locative_dereference_356)
  INTERRUPT_CHECK (26, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd296.Obj) = (current_block [OBJECT_17]);
  (Wrd299.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd299.Lng))))
    goto label_725;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd296.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_724;

DEFLABEL (label_723)
  (Wrd13.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_660;
  INVOKE_PRIMITIVE ((current_block [OBJECT_18]), 2);

DEFLABEL (label_660)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_662;
  (Wrd15.Obj) = (current_block [OBJECT_21]);
  goto label_661;

DEFLABEL (label_662)
  (Wrd15.Obj) = (current_block [OBJECT_20]);

DEFLABEL (label_661)
DEFLABEL (label_722)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_669;

DEFLABEL (label_668)
  (Wrd293.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd293.Obj);
  (Wrd294.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd294.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94]));

DEFLABEL (continuation_351)
  INTERRUPT_CHECK (27, LABEL_93);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_663;
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_663)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_667;
  Wrd10 = Wrd14;

DEFLABEL (label_666)
  Wrd9 = Wrd10;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_665;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_665;
  (Wrd16.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_664)
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_136]));

DEFLABEL (continuation_353)
  INTERRUPT_CHECK (27, LABEL_135);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_24]);
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_665)
  (Wrd25.Obj) = (current_block [OBJECT_23]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37]), 2);

DEFLABEL (label_480)
  (Wrd16.Obj) = Rvl;
  goto label_664;

DEFLABEL (label_667)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_133])), (Wrd11.pObj));

DEFLABEL (label_479)
  (Wrd10.Obj) = Rvl;
  goto label_666;

DEFLABEL (label_669)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 1)
    goto label_670;
  (Wrd27.Obj) = (current_block [OBJECT_32]);
  (Rsp [3]) = (Wrd27.Obj);
  (Rsp [4]) = (Wrd25.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (label_670)
  if (! ((Wrd26.uLng) == 1))
    goto label_721;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_720)
  (Wrd39.Obj) = (Rsp [0]);
  if (! ((Wrd39.Obj) == (current_block [OBJECT_15])))
    goto label_671;
  (Wrd289.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd289.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_671)
  if (! ((Wrd39.Obj) == (current_block [OBJECT_22])))
    goto label_672;
  (Wrd286.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd286.Obj);
  (Wrd287.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd287.Obj);
  (Wrd288.Obj) = (current_block [OBJECT_24]);
  (Rsp [2]) = (Wrd288.Obj);
  goto lambda_289;

DEFLABEL (label_672)
  if ((Wrd39.Obj) == (current_block [OBJECT_25]))
    goto label_693;
  if ((Wrd39.Obj) == (current_block [OBJECT_28]))
    goto label_674;
  if ((Wrd39.Obj) == (current_block [OBJECT_27]))
    goto label_673;
  (Wrd49.Obj) = (current_block [OBJECT_31]);
  (Rsp [4]) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd50.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (label_673)
  (Wrd52.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_24]);
  (Rsp [2]) = (Wrd54.Obj);
  goto lambda_292;

DEFLABEL (label_674)
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_692;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_691)
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_690;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd64.Obj) = ((Wrd65.pObj) [1]);

DEFLABEL (label_689)
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_688;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (* (--Rsp)) = (Wrd72.Obj);

DEFLABEL (label_687)
  (Wrd81.Obj) = (Rsp [3]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 1))
    goto label_686;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd78.Obj) = ((Wrd80.pObj) [1]);

DEFLABEL (label_685)
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd89.uLng) == 1))
    goto label_684;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (* (--Rsp)) = (Wrd88.Obj);

DEFLABEL (label_683)
  (Wrd97.Obj) = (Rsp [4]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 1))
    goto label_682;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd94.Obj) = ((Wrd96.pObj) [1]);

DEFLABEL (label_681)
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd105.uLng) == 1))
    goto label_680;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd103.Obj) = ((Wrd104.pObj) [1]);

DEFLABEL (label_679)
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd112.uLng) == 1))
    goto label_678;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd110.Obj) = ((Wrd111.pObj) [1]);

DEFLABEL (label_677)
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd119.uLng) == 1))
    goto label_676;
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd117.Obj) = ((Wrd118.pObj) [0]);

DEFLABEL (label_675)
  (Rsp [2]) = (Wrd117.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd150.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_90);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_89])));
  Rhp += 3;
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd150.pObj)));
  (* (--Rsp)) = (Wrd151.Obj);
  Wrd148 = Wrd150;
  (Wrd149.Obj) = (Rsp [8]);
  ((Wrd148.pObj) [2]) = (Wrd149.Obj);
  (Wrd146.Obj) = (Rsp [6]);
  ((Wrd148.pObj) [3]) = (Wrd146.Obj);
  ((Wrd148.pObj) [4]) = (Wrd117.Obj);
  (Wrd125.Obj) = (Rsp [4]);
  (Wrd126.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd124.Obj) = ((Wrd126.pObj) [2]);
  (Rsp [5]) = (Wrd124.Obj);
  (Rsp [7]) = (Wrd146.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd130.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_91])));
  Rhp += 4;
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd130.pObj)));
  Wrd137 = Wrd130;
  ((Wrd137.pObj) [2]) = (Wrd125.Obj);
  ((Wrd137.pObj) [3]) = (Wrd146.Obj);
  ((Wrd137.pObj) [4]) = (Wrd151.Obj);
  (Wrd132.Obj) = (Rsp [1]);
  ((Wrd137.pObj) [5]) = (Wrd132.Obj);
  (Rsp [8]) = (Wrd129.Obj);
  (Wrd139.Obj) = (Rsp [2]);
  (Rsp [6]) = (Wrd139.Obj);
  Rsp = (& (Rsp [5]));
  goto expression_simplify_232;

DEFLABEL (label_676)
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_462)
  (Wrd117.Obj) = Rvl;
  goto label_675;

DEFLABEL (label_678)
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_461)
  (Wrd110.Obj) = Rvl;
  goto label_677;

DEFLABEL (label_680)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_460)
  (Wrd103.Obj) = Rvl;
  goto label_679;

DEFLABEL (label_682)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_459)
  (Wrd94.Obj) = Rvl;
  goto label_681;

DEFLABEL (label_684)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_458)
  (* (--Rsp)) = Rvl;
  goto label_683;

DEFLABEL (label_686)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_457)
  (Wrd78.Obj) = Rvl;
  goto label_685;

DEFLABEL (label_688)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_456)
  (* (--Rsp)) = Rvl;
  goto label_687;

DEFLABEL (label_690)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_455)
  (Wrd64.Obj) = Rvl;
  goto label_689;

DEFLABEL (label_692)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_454)
  (Wrd55.Obj) = Rvl;
  goto label_691;

DEFLABEL (label_693)
  (Wrd155.Obj) = (Rsp [2]);
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd155.Obj));
  if (! ((Wrd156.uLng) == 1))
    goto label_719;
  (Wrd154.pObj) = (OBJECT_ADDRESS (Wrd155.Obj));
  (Wrd152.Obj) = ((Wrd154.pObj) [1]);

DEFLABEL (label_718)
  (Wrd163.uLng) = (OBJECT_TYPE (Wrd152.Obj));
  if (! ((Wrd163.uLng) == 1))
    goto label_717;
  (Wrd162.pObj) = (OBJECT_ADDRESS (Wrd152.Obj));
  (Wrd161.Obj) = ((Wrd162.pObj) [1]);

DEFLABEL (label_716)
  (Wrd170.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd170.uLng) == 1))
    goto label_715;
  (Wrd168.pObj) = (OBJECT_ADDRESS (Wrd161.Obj));
  (Wrd169.Obj) = ((Wrd168.pObj) [0]);
  (* (--Rsp)) = (Wrd169.Obj);

DEFLABEL (label_714)
  (Wrd178.Obj) = (Rsp [3]);
  (Wrd179.uLng) = (OBJECT_TYPE (Wrd178.Obj));
  if (! ((Wrd179.uLng) == 1))
    goto label_713;
  (Wrd177.pObj) = (OBJECT_ADDRESS (Wrd178.Obj));
  (Wrd175.Obj) = ((Wrd177.pObj) [1]);

DEFLABEL (label_712)
  (Wrd186.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if (! ((Wrd186.uLng) == 1))
    goto label_711;
  (Wrd184.pObj) = (OBJECT_ADDRESS (Wrd175.Obj));
  (Wrd185.Obj) = ((Wrd184.pObj) [0]);
  (* (--Rsp)) = (Wrd185.Obj);

DEFLABEL (label_710)
  (Wrd194.Obj) = (Rsp [4]);
  (Wrd195.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if (! ((Wrd195.uLng) == 1))
    goto label_709;
  (Wrd193.pObj) = (OBJECT_ADDRESS (Wrd194.Obj));
  (Wrd191.Obj) = ((Wrd193.pObj) [1]);

DEFLABEL (label_708)
  (Wrd202.uLng) = (OBJECT_TYPE (Wrd191.Obj));
  if (! ((Wrd202.uLng) == 1))
    goto label_707;
  (Wrd201.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd200.Obj) = ((Wrd201.pObj) [1]);

DEFLABEL (label_706)
  (Wrd209.uLng) = (OBJECT_TYPE (Wrd200.Obj));
  if (! ((Wrd209.uLng) == 1))
    goto label_705;
  (Wrd208.pObj) = (OBJECT_ADDRESS (Wrd200.Obj));
  (Wrd207.Obj) = ((Wrd208.pObj) [1]);

DEFLABEL (label_704)
  (Wrd216.uLng) = (OBJECT_TYPE (Wrd207.Obj));
  if (! ((Wrd216.uLng) == 1))
    goto label_703;
  (Wrd215.pObj) = (OBJECT_ADDRESS (Wrd207.Obj));
  (Wrd214.Obj) = ((Wrd215.pObj) [0]);

DEFLABEL (label_702)
  (Rsp [2]) = (Wrd214.Obj);
  (Wrd221.Obj) = (Rsp [0]);
  (Wrd222.uLng) = (OBJECT_TYPE (Wrd221.Obj));
  if ((Wrd222.uLng) == 1)
    goto label_701;
  (Wrd225.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd225.Obj);
  (Wrd226.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd226.Obj);
  (Wrd227.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd227.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (continuation_334)
  INTERRUPT_CHECK (27, LABEL_57);

DEFLABEL (label_701)
  (Wrd231.Obj) = (Rsp [0]);
  (Wrd232.uLng) = (OBJECT_TYPE (Wrd231.Obj));
  if (! ((Wrd232.uLng) == 1))
    goto label_700;
  (Wrd229.pObj) = (OBJECT_ADDRESS (Wrd231.Obj));
  (Wrd230.Obj) = ((Wrd229.pObj) [0]);
  (* (--Rsp)) = (Wrd230.Obj);

DEFLABEL (label_699)
  (Wrd237.Obj) = (Rsp [0]);
  if (! ((Wrd237.Obj) == (current_block [OBJECT_22])))
    goto label_694;
  Rsp = (& (Rsp [1]));
  goto lambda_289;

DEFLABEL (label_694)
  if (! ((Wrd237.Obj) == (current_block [OBJECT_27])))
    goto label_695;
  Rsp = (& (Rsp [1]));
  goto lambda_292;

DEFLABEL (label_695)
  if ((Wrd237.Obj) == (current_block [OBJECT_28]))
    goto label_698;
  if ((Wrd237.Obj) == (current_block [OBJECT_25]))
    goto label_696;
  (Wrd245.Obj) = (current_block [OBJECT_29]);
  (Rsp [7]) = (Wrd245.Obj);
  (Wrd246.Obj) = (Rsp [5]);
  (Rsp [8]) = (Wrd246.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (label_696)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd250.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_76);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75])));
  Rhp += 1;
  (Wrd249.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd250.pObj)));
  Wrd251 = Wrd250;
  (Wrd252.Obj) = (Rsp [5]);
  ((Wrd251.pObj) [2]) = (Wrd252.Obj);
  (Rsp [7]) = (Wrd249.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd255.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_78);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_77])));
  Rhp += 4;
  (Wrd254.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd255.pObj)));
  Wrd262 = Wrd255;
  (Wrd263.Obj) = (Rsp [8]);
  ((Wrd262.pObj) [2]) = (Wrd263.Obj);
  (Wrd261.Obj) = (Rsp [6]);
  ((Wrd262.pObj) [3]) = (Wrd261.Obj);
  (Wrd259.Obj) = (Rsp [3]);
  ((Wrd262.pObj) [4]) = (Wrd259.Obj);
  (Wrd257.Obj) = (Rsp [2]);
  ((Wrd262.pObj) [5]) = (Wrd257.Obj);
  (Rsp [8]) = (Wrd254.Obj);

DEFLABEL (label_697)
  (Wrd281.Obj) = (Rsp [4]);
  (Rsp [4]) = (Wrd281.Obj);
  (Wrd282.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd282.Obj);
  Rsp = (& (Rsp [4]));
  goto locative_dereference_356;

DEFLABEL (label_698)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd269.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_72);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_71])));
  Rhp += 1;
  (Wrd268.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd269.pObj)));
  Wrd270 = Wrd269;
  (Wrd271.Obj) = (Rsp [5]);
  ((Wrd270.pObj) [2]) = (Wrd271.Obj);
  (Rsp [7]) = (Wrd268.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd274.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73])));
  Rhp += 3;
  (Wrd273.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd274.pObj)));
  Wrd279 = Wrd274;
  (Wrd280.Obj) = (Rsp [8]);
  ((Wrd279.pObj) [2]) = (Wrd280.Obj);
  (Wrd278.Obj) = (Rsp [3]);
  ((Wrd279.pObj) [3]) = (Wrd278.Obj);
  (Wrd276.Obj) = (Rsp [2]);
  ((Wrd279.pObj) [4]) = (Wrd276.Obj);
  (Rsp [8]) = (Wrd273.Obj);
  goto label_697;

DEFLABEL (label_700)
  (Wrd236.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd236.Obj);
  (* (--Rsp)) = (Wrd231.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_472)
  (* (--Rsp)) = Rvl;
  goto label_699;

DEFLABEL (label_703)
  (Wrd220.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd220.Obj);
  (* (--Rsp)) = (Wrd207.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_471)
  (Wrd214.Obj) = Rvl;
  goto label_702;

DEFLABEL (label_705)
  (Wrd213.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd213.Obj);
  (* (--Rsp)) = (Wrd200.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_470)
  (Wrd207.Obj) = Rvl;
  goto label_704;

DEFLABEL (label_707)
  (Wrd206.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd206.Obj);
  (* (--Rsp)) = (Wrd191.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_469)
  (Wrd200.Obj) = Rvl;
  goto label_706;

DEFLABEL (label_709)
  (Wrd199.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd199.Obj);
  (* (--Rsp)) = (Wrd194.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_468)
  (Wrd191.Obj) = Rvl;
  goto label_708;

DEFLABEL (label_711)
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd190.Obj);
  (* (--Rsp)) = (Wrd175.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_467)
  (* (--Rsp)) = Rvl;
  goto label_710;

DEFLABEL (label_713)
  (Wrd183.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd183.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_466)
  (Wrd175.Obj) = Rvl;
  goto label_712;

DEFLABEL (label_715)
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd161.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_465)
  (* (--Rsp)) = Rvl;
  goto label_714;

DEFLABEL (label_717)
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_464)
  (Wrd161.Obj) = Rvl;
  goto label_716;

DEFLABEL (label_719)
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd155.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_463)
  (Wrd152.Obj) = Rvl;
  goto label_718;

DEFLABEL (label_721)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_453)
  (* (--Rsp)) = Rvl;
  goto label_720;

DEFLABEL (label_724)
  Rsp = (& (Rsp [2]));
  goto label_668;

DEFLABEL (label_725)
  (Wrd304.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd304.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd296.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18]), 2);

DEFLABEL (label_473)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_723;
  goto label_724;

DEFLABEL (continuation_293)
  INTERRUPT_CHECK (27, LABEL_58);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_669;
  goto label_668;

DEFLABEL (typed_cons_524)
DEFLABEL (typed_cons_436)
  INTERRUPT_CHECK (26, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96]));

DEFLABEL (continuation_370)
  INTERRUPT_CHECK (27, LABEL_95);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_741;
  Wrd6 = Wrd10;

DEFLABEL (label_740)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_739;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_739;
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_738)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [4]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_371)
  INTERRUPT_CHECK (27, LABEL_140);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_737)
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_736;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd11.Lng) = ((Wrd12.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_736;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_735)
  (Wrd14.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_179]));

DEFLABEL (continuation_373)
  INTERRUPT_CHECK (27, LABEL_139);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_734;
  Wrd5 = Wrd9;

DEFLABEL (label_733)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_727;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_167);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_166])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_726;

DEFLABEL (label_727)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd44.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_165);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_164])));
  Rhp += 1;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd44.pObj)));
  Wrd45 = Wrd44;
  (Wrd46.Obj) = (Rsp [1]);
  ((Wrd45.pObj) [2]) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_726)
DEFLABEL (label_732)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_731;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd27.Lng) = ((Wrd29.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_731;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));

DEFLABEL (label_730)
  (Wrd35.Obj) = (Rsp [5]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_729;
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_729;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd38.Lng) = ((Wrd40.Lng) + (Wrd41.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd38.Lng)))
    goto label_729;
  (Wrd42.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_728)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_377)
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd9.Obj);
  Rdl = (& (Rsp [14]));
  goto process_397;

DEFLABEL (label_729)
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_170]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_489)
  (* (--Rsp)) = Rvl;
  goto label_728;

DEFLABEL (label_731)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_488)
  (Wrd24.Obj) = Rvl;
  goto label_730;

DEFLABEL (label_734)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_163])), (Wrd6.pObj));

DEFLABEL (label_487)
  (Wrd5.Obj) = Rvl;
  goto label_733;

DEFLABEL (label_736)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_178]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_490)
  (* (--Rsp)) = Rvl;
  goto label_735;

DEFLABEL (label_739)
  (Wrd21.Obj) = (current_block [OBJECT_38]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37]), 2);

DEFLABEL (label_482)
  (* (--Rsp)) = Rvl;
  goto label_738;

DEFLABEL (label_741)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_137])), (Wrd7.pObj));

DEFLABEL (label_481)
  (Wrd6.Obj) = Rvl;
  goto label_740;

DEFLABEL (lambda_529)
  CLOSURE_HEADER (LABEL_43);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_98);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_97])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd20.pObj) [5]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [5]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd22.Obj) = ((Wrd20.pObj) [4]);
  (Rsp [0]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (expression_simplify_for_statement_530)
  CLOSURE_HEADER (LABEL_46);

DEFLABEL (expression_simplify_for_statement_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_743;
  Wrd9 = Wrd13;

DEFLABEL (label_742)
  (Wrd15.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  goto expression_simplify_232;

DEFLABEL (label_743)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_102])), (Wrd10.pObj));

DEFLABEL (label_474)
  (Wrd9.Obj) = Rvl;
  goto label_742;

DEFLABEL (lambda_531)
  CLOSURE_HEADER (LABEL_49);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto make_offset_264;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_103);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (loop_532)
DEFLABEL (loop_240)
  INTERRUPT_CHECK (26, LABEL_55);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_16])))
    goto label_744;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [3]);
  (Rsp [1]) = (Wrd32.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108]));

DEFLABEL (continuation_239)
  INTERRUPT_CHECK (27, LABEL_107);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto lambda_431;

DEFLABEL (label_744)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_110);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_109])));
  Rhp += 3;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd17 = Wrd12;
  ((Wrd17.pObj) [2]) = (Wrd7.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  ((Wrd17.pObj) [4]) = (Wrd5.Obj);
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd21.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_746;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_745)
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd31.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd31.Obj);
  goto expression_simplify_232;

DEFLABEL (label_746)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_476)
  (Wrd22.Obj) = Rvl;
  goto label_745;

DEFLABEL (lambda_543)
DEFLABEL (lambda_292)
  INTERRUPT_CHECK (26, LABEL_112);
  (Wrd5.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_114);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_113])));
  Rhp += 4;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd15 = Wrd8;
  (Wrd16.Obj) = (Rsp [7]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  ((Wrd15.pObj) [3]) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  (Rsp [7]) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd17.Obj);
  Rsp = (& (Rsp [5]));
  goto assign_to_temporary_247;

DEFLABEL (lambda_538)
  CLOSURE_HEADER (LABEL_91);

DEFLABEL (lambda_319)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_116);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_115])));
  Rhp += 3;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd23 = Wrd16;
  ((Wrd23.pObj) [2]) = (Wrd7.Obj);
  (Wrd22.Obj) = ((Wrd6.pObj) [4]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  ((Wrd23.pObj) [4]) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_118);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_117])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd32 = Wrd29;
  ((Wrd32.pObj) [2]) = (Wrd22.Obj);
  ((Wrd32.pObj) [3]) = (Wrd18.Obj);
  (Rsp [3]) = (Wrd28.Obj);
  (Rsp [4]) = (Wrd15.Obj);
  goto locative_dereference_356;

DEFLABEL (finish_537)
DEFLABEL (finish_322)
  INTERRUPT_CHECK (26, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto make_offset_address_275;

DEFLABEL (continuation_320)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_156);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_155])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  (Wrd18.Obj) = ((Wrd7.pObj) [2]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd7.pObj) [4]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  (Rsp [0]) = Rvl;
  goto assign_to_temporary_247;

DEFLABEL (lambda_535)
  CLOSURE_HEADER (LABEL_75);

DEFLABEL (lambda_340)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (lambda_536)
  CLOSURE_HEADER (LABEL_77);

DEFLABEL (lambda_345)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto make_offset_address_275;

DEFLABEL (continuation_343)
  INTERRUPT_CHECK (27, LABEL_121);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_159);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_158])));
  Rhp += 3;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd20 = Wrd11;
  (Wrd23.Obj) = ((Wrd8.pObj) [2]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd8.pObj) [4]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd8.pObj) [5]);
  ((Wrd20.pObj) [4]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  goto assign_to_temporary_247;

DEFLABEL (lambda_533)
  CLOSURE_HEADER (LABEL_71);

DEFLABEL (lambda_346)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (lambda_534)
  CLOSURE_HEADER (LABEL_73);

DEFLABEL (lambda_347)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd11.Obj);
  goto pop_return;

DEFLABEL (lambda_547)
DEFLABEL (lambda_289)
  INTERRUPT_CHECK (26, LABEL_122);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_124);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_123])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [7]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_126);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_125])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [6]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  ((Wrd17.pObj) [3]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_750;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_749)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_748;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_747)
  (Rsp [6]) = (Wrd28.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_130);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_129])));
  Rhp += 2;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  Wrd40 = Wrd37;
  (Wrd41.Obj) = (Rsp [1]);
  ((Wrd40.pObj) [2]) = (Wrd41.Obj);
  (Wrd39.Obj) = (Rsp [0]);
  ((Wrd40.pObj) [3]) = (Wrd39.Obj);
  (Rsp [8]) = (Wrd36.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd44.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_132);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_131])));
  Rhp += 2;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd44.pObj)));
  Wrd47 = Wrd44;
  (Wrd48.Obj) = (Rsp [7]);
  ((Wrd47.pObj) [2]) = (Wrd48.Obj);
  ((Wrd47.pObj) [3]) = (Wrd39.Obj);
  (Rsp [9]) = (Wrd43.Obj);
  (Wrd49.Obj) = (Rsp [5]);
  (Rsp [5]) = (Wrd49.Obj);
  Rsp = (& (Rsp [5]));
  goto locative_dereference_356;

DEFLABEL (label_748)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_478)
  (Wrd28.Obj) = Rvl;
  goto label_747;

DEFLABEL (label_750)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_477)
  (Wrd19.Obj) = Rvl;
  goto label_749;

DEFLABEL (lambda_539)
  CLOSURE_HEADER (LABEL_97);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [5]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [3]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (expression_simplify_for_predicate_540)
  CLOSURE_HEADER (LABEL_100);

DEFLABEL (expression_simplify_for_predicate_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_752;
  Wrd9 = Wrd13;

DEFLABEL (label_751)
  (Wrd15.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  goto expression_simplify_232;

DEFLABEL (label_752)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_144])), (Wrd10.pObj));

DEFLABEL (label_483)
  (Wrd9.Obj) = Rvl;
  goto label_751;

DEFLABEL (make_offset_553)
DEFLABEL (make_offset_264)
  INTERRUPT_CHECK (26, LABEL_145);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_24]))
    goto label_756;
  if ((Wrd5.Obj) == (current_block [OBJECT_40]))
    goto label_755;
  if ((Wrd5.Obj) == (current_block [OBJECT_42]))
    goto label_753;
  (Wrd11.Obj) = (current_block [OBJECT_44]);
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (label_753)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_43]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);

DEFLABEL (label_754)
  (Wrd76.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_755)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd51.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_41]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  goto label_754;

DEFLABEL (label_756)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (Wrd65.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Wrd73.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (Wrd78.Obj) = (current_block [OBJECT_25]);
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  goto label_754;

DEFLABEL (lambda_541)
  CLOSURE_HEADER (LABEL_105);

DEFLABEL (lambda_227)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_759;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_758)
  if ((Wrd5.Obj) == (current_block [OBJECT_15]))
    goto label_757;
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [2]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (Rsp [1]) = (Wrd19.Obj);
  goto assign_to_temporary_247;

DEFLABEL (label_757)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Rsp [0]) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_759)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_484)
  (Wrd5.Obj) = Rvl;
  goto label_758;

DEFLABEL (assign_to_temporary_554)
DEFLABEL (assign_to_temporary_247)
  INTERRUPT_CHECK (26, LABEL_147);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_149]));

DEFLABEL (continuation_243)
  INTERRUPT_CHECK (27, LABEL_148);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_184]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_245)
  INTERRUPT_CHECK (27, LABEL_184);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_199]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_193]));

DEFLABEL (continuation_244)
  INTERRUPT_CHECK (27, LABEL_199);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_542)
  CLOSURE_HEADER (LABEL_109);

DEFLABEL (lambda_238)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd14.Obj) = ((Wrd6.pObj) [3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd22.Obj) = ((Wrd6.pObj) [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_761;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd15.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_760)
  (Rsp [1]) = (Wrd15.Obj);
  goto loop_240;

DEFLABEL (label_761)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_485)
  (Wrd15.Obj) = Rvl;
  goto label_760;

DEFLABEL (lambda_544)
  CLOSURE_HEADER (LABEL_113);

DEFLABEL (lambda_291)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_152);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_151])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd17 = Wrd8;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Wrd16.Obj) = ((Wrd19.pObj) [4]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd19.pObj) [5]);
  ((Wrd17.pObj) [4]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd21.Obj) = ((Wrd19.pObj) [3]);
  (Rsp [1]) = (Wrd21.Obj);
  goto assign_to_address_temporary_363;

DEFLABEL (lambda_545)
  CLOSURE_HEADER (LABEL_115);

DEFLABEL (lambda_318)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_764;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd35.Lng) == 0))
    goto label_763;

DEFLABEL (label_762)
  (Wrd26.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [4]);
  (Rsp [3]) = (Wrd27.Obj);
  (Wrd30.Obj) = ((Wrd29.pObj) [3]);
  (Rsp [1]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  goto finish_322;

DEFLABEL (label_763)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  goto make_offset_address_275;

DEFLABEL (continuation_316)
  INTERRUPT_CHECK (27, LABEL_154);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_189);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_188])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd16 = Wrd11;
  (Wrd19.Obj) = ((Wrd8.pObj) [3]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd8.pObj) [4]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  goto assign_to_temporary_247;

DEFLABEL (label_764)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_486)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_763;
  goto label_762;

DEFLABEL (lambda_546)
  CLOSURE_HEADER (LABEL_117);

DEFLABEL (lambda_312)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  goto finish_322;

DEFLABEL (make_offset_address_557)
DEFLABEL (make_offset_address_275)
  INTERRUPT_CHECK (26, LABEL_157);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_24]))
    goto label_768;
  if ((Wrd5.Obj) == (current_block [OBJECT_40]))
    goto label_767;
  if ((Wrd5.Obj) == (current_block [OBJECT_42]))
    goto label_765;
  (Wrd11.Obj) = (current_block [OBJECT_44]);
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (label_765)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd21.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);

DEFLABEL (label_766)
  (Wrd52.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_767)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd35.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  goto label_766;

DEFLABEL (label_768)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd49.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Wrd54.Obj) = (current_block [OBJECT_45]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  goto label_766;

DEFLABEL (lambda_548)
  CLOSURE_HEADER (LABEL_123);

DEFLABEL (lambda_276)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [2]) = (Wrd12.Obj);
  goto pop_return;

DEFLABEL (lambda_549)
  CLOSURE_HEADER (LABEL_125);

DEFLABEL (lambda_277)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd9.Obj);
  goto assign_to_address_temporary_363;

DEFLABEL (lambda_550)
  CLOSURE_HEADER (LABEL_129);

DEFLABEL (lambda_284)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_160]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_161]));

DEFLABEL (continuation_280)
  INTERRUPT_CHECK (27, LABEL_160);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_771;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd8.Lng) < 5L)
    goto label_770;

DEFLABEL (label_769)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [3]);
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_277;

DEFLABEL (label_770)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_190]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_192]));

DEFLABEL (continuation_282)
  INTERRUPT_CHECK (27, LABEL_190);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_769;
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Rsp [1]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_276;

DEFLABEL (label_771)
  (Wrd20.Obj) = (current_block [OBJECT_19]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_191]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_492)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_769;
  goto label_770;

DEFLABEL (lambda_551)
  CLOSURE_HEADER (LABEL_131);

DEFLABEL (lambda_286)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_162]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto make_offset_264;

DEFLABEL (continuation_285)
  INTERRUPT_CHECK (27, LABEL_162);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto assign_to_temporary_247;

DEFLABEL (expression_simplify_for_pseudo_assignment_552)
  CLOSURE_HEADER (LABEL_142);

DEFLABEL (expression_simplify_for_pseudo_assignment_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_182]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_778;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_777)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_182);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_772;
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd34.Obj);
  (Rsp [3]) = (Wrd33.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_772)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_776;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_775)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_774;
  Wrd17 = Wrd21;

DEFLABEL (label_773)
  (Wrd23.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd30.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Rsp [3]) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd31.Obj);
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_34]), 2);

DEFLABEL (label_774)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_198])), (Wrd18.pObj));

DEFLABEL (label_494)
  (Wrd17.Obj) = Rvl;
  goto label_773;

DEFLABEL (label_776)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_197]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_493)
  (* (--Rsp)) = Rvl;
  goto label_775;

DEFLABEL (label_778)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_183]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_491)
  (* (--Rsp)) = Rvl;
  goto label_777;

DEFLABEL (lambda_562)
  CLOSURE_HEADER (LABEL_185);

DEFLABEL (lambda_431)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  Rdl = (& (Rsp [5]));
  goto loop_429;

DEFLABEL (lambda_555)
  CLOSURE_HEADER (LABEL_151);

DEFLABEL (lambda_290)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [2]) = (Wrd12.Obj);
  goto pop_return;

DEFLABEL (assign_to_address_temporary_563)
DEFLABEL (assign_to_address_temporary_363)
  INTERRUPT_CHECK (26, LABEL_186);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_187]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_149]));

DEFLABEL (continuation_357)
  INTERRUPT_CHECK (27, LABEL_187);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_204]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto pop_return;

DEFLABEL (continuation_361)
  INTERRUPT_CHECK (27, LABEL_204);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_225]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_193]));

DEFLABEL (continuation_360)
  INTERRUPT_CHECK (27, LABEL_225);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_556)
  CLOSURE_HEADER (LABEL_155);

DEFLABEL (lambda_321)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (Rsp [2]) = (Wrd12.Obj);
  goto pop_return;

DEFLABEL (lambda_558)
  CLOSURE_HEADER (LABEL_158);

DEFLABEL (lambda_344)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [2]) = (Wrd12.Obj);
  goto pop_return;

DEFLABEL (lambda_560)
  CLOSURE_HEADER (LABEL_166);

DEFLABEL (lambda_388)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (Wrd10.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_50]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_193]));

DEFLABEL (lambda_559)
  CLOSURE_HEADER (LABEL_164);

DEFLABEL (lambda_384)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_25]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Rsp [1]) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_193]));

DEFLABEL (loop_566)
DEFLABEL (loop_429)
  DLINK_INTERRUPT_CHECK (25, LABEL_200);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_16])))
    goto label_779;
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  Rvl = ((Wrd47.pObj) [4]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_779)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_201]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_785;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = ((Wrd28.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_785;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_784)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_783;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_782)
  Rdl = (& (Rsp [3]));
  goto loop_429;

DEFLABEL (continuation_428)
  INTERRUPT_CHECK (27, LABEL_201);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_223]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_781;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_780)
  (Wrd26.Obj) = (Rsp [7]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  goto pop_return;

DEFLABEL (continuation_425)
  INTERRUPT_CHECK (27, LABEL_223);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_781)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_224]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 1);

DEFLABEL (label_500)
  (Wrd18.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd18.Obj));
  (* (--Rsp)) = Rvl;
  goto label_780;

DEFLABEL (label_783)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_203]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (label_496)
  (Wrd35.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd35.Obj));
  (* (--Rsp)) = Rvl;
  goto label_782;

DEFLABEL (label_785)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_202]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_495)
  (Wrd16.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd16.Obj));
  (* (--Rsp)) = Rvl;
  goto label_784;

DEFLABEL (lambda_564)
  CLOSURE_HEADER (LABEL_188);

DEFLABEL (lambda_317)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  goto finish_322;

DEFLABEL (process_567)
DEFLABEL (process_397)
  DLINK_INTERRUPT_CHECK (25, LABEL_205);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_792;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_792;
  if (! ((Wrd5.Obj) == (Wrd9.Obj)))
    goto label_787;

DEFLABEL (label_786)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_212]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd86.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_214);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_213])));
  Rhp += 4;
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd86.pObj)));
  Wrd99 = Wrd86;
  (Wrd100.Obj) = (Rsp [5]);
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [7]);
  ((Wrd99.pObj) [2]) = (Wrd102.Obj);
  (Wrd98.Obj) = ((Wrd101.pObj) [6]);
  ((Wrd99.pObj) [3]) = (Wrd98.Obj);
  (Wrd94.Obj) = ((Wrd101.pObj) [4]);
  ((Wrd99.pObj) [4]) = (Wrd94.Obj);
  (Wrd90.Obj) = ((Wrd101.pObj) [3]);
  ((Wrd99.pObj) [5]) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd108.Obj) = ((Wrd101.pObj) [8]);
  (* (--Rsp)) = (Wrd108.Obj);
  (Wrd111.Obj) = ((Wrd101.pObj) [5]);
  (Wrd112.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd113.Obj) = ((Wrd112.pObj) [3]);
  (* (--Rsp)) = (Wrd113.Obj);
  goto expression_simplify_232;

DEFLABEL (label_787)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_207]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [5]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd40.Obj) = (Rsp [5]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_791;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_791;
  (Wrd45.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_790)
  (Wrd57.Obj) = (Rsp [5]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_789;
  (Wrd59.Obj) = (Rsp [7]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [2]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 26))
    goto label_789;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd63.Lng) = ((Wrd65.Lng) + (Wrd69.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd63.Lng)))
    goto label_789;
  (Wrd70.Obj) = (LONG_TO_FIXNUM (Wrd63.Lng));
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_788)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_210]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [10]);
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [2]);
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_211]));

DEFLABEL (continuation_392)
  INTERRUPT_CHECK (27, LABEL_210);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [4]));
  goto process_397;

DEFLABEL (continuation_395)
  INTERRUPT_CHECK (27, LABEL_207);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_226]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_227]));

DEFLABEL (continuation_391)
  INTERRUPT_CHECK (27, LABEL_226);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [0]) = Rvl;
  goto do_chunk_432;

DEFLABEL (label_789)
  (Wrd50.Obj) = (Rsp [5]);
  (Wrd52.Obj) = (Rsp [7]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [2]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_209]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_499)
  (Wrd46.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd46.Obj));
  (* (--Rsp)) = Rvl;
  goto label_788;

DEFLABEL (label_791)
  (Wrd36.Obj) = (Rsp [5]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_208]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_498)
  (Wrd32.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd32.Obj));
  (* (--Rsp)) = Rvl;
  goto label_790;

DEFLABEL (label_792)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_206]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_497)
  (Wrd11.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd11.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_787;
  goto label_786;

DEFLABEL (continuation_396)
  INTERRUPT_CHECK (27, LABEL_212);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [2]) = Rvl;
  goto do_chunk_432;

DEFLABEL (lambda_565)
  CLOSURE_HEADER (LABEL_195);

DEFLABEL (lambda_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_219);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_218])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  goto locative_dereference_356;

DEFLABEL (define_expression_method_570)
DEFLABEL (define_expression_method_365)
  DLINK_INTERRUPT_CHECK (25, LABEL_220);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_221]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_222]));

DEFLABEL (continuation_364)
  INTERRUPT_CHECK (27, LABEL_221);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = (Rsp [0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (lambda_568)
  CLOSURE_HEADER (LABEL_213);

DEFLABEL (lambda_420)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_797;
  Wrd5 = Wrd9;

DEFLABEL (label_796)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_793;
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [5]);
  (Wrd71.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (Wrd75.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (Wrd79.Obj) = (current_block [OBJECT_52]);
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd82.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_230);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_229])));
  Rhp += 4;
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd82.pObj)));
  Wrd95 = Wrd82;
  (Wrd98.Obj) = ((Wrd69.pObj) [2]);
  ((Wrd95.pObj) [2]) = (Wrd98.Obj);
  (Wrd94.Obj) = ((Wrd69.pObj) [3]);
  ((Wrd95.pObj) [3]) = (Wrd94.Obj);
  (Wrd90.Obj) = ((Wrd69.pObj) [4]);
  ((Wrd95.pObj) [4]) = (Wrd90.Obj);
  ((Wrd95.pObj) [5]) = (Wrd70.Obj);
  (Rsp [2]) = (Wrd81.Obj);
  (Rsp [1]) = (Wrd98.Obj);
  goto assign_to_temporary_247;

DEFLABEL (label_793)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_795;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = (0 - (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_795;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));

DEFLABEL (label_794)
  (Wrd34.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [5]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd52.Obj) = (current_block [OBJECT_45]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd55.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_233);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_232])));
  Rhp += 2;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd55.pObj)));
  Wrd58 = Wrd55;
  (Wrd61.Obj) = ((Wrd47.pObj) [3]);
  ((Wrd58.pObj) [2]) = (Wrd61.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  ((Wrd58.pObj) [3]) = (Wrd57.Obj);
  (Rsp [2]) = (Wrd54.Obj);
  (Wrd62.Obj) = ((Wrd47.pObj) [2]);
  (Rsp [1]) = (Wrd62.Obj);
  goto assign_to_temporary_247;

DEFLABEL (label_795)
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [4]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_231]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_502)
  (Wrd19.Obj) = Rvl;
  goto label_794;

DEFLABEL (label_797)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_228])), (Wrd6.pObj));

DEFLABEL (label_501)
  (Wrd5.Obj) = Rvl;
  goto label_796;

DEFLABEL (lambda_575)
DEFLABEL (lambda_62)
  INTERRUPT_CHECK (26, LABEL_217);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_241);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_240])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Wrd10 = Wrd6;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_798)
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_243);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_242])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd15 = Wrd14;
  (Wrd16.Obj) = (Rsp [4]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Rsp [3]) = (Wrd13.Obj);
  (Rsp [1]) = (Wrd16.Obj);
  (Rsp [4]) = (Wrd10.Obj);
  goto locative_dereference_356;

DEFLABEL (address_method_578)
DEFLABEL (address_method_369)
  INTERRUPT_CHECK (26, LABEL_244);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_246);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_245])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_569)
  CLOSURE_HEADER (LABEL_218);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_247]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto make_offset_264;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_247);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (do_chunk_580)
DEFLABEL (do_chunk_432)
  DLINK_INTERRUPT_CHECK (25, LABEL_248);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_249);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_185])));
  Rhp += 4;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd15 = Wrd6;
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [7]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd17.pObj) [1]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [5]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd17.pObj) [5]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [4]));
    SCHEME_OBJECT * MFUp2 = Rdl;
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  goto simplify_expressions_242;

DEFLABEL (lambda_572)
  CLOSURE_HEADER (LABEL_232);

DEFLABEL (lambda_419)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_52]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd20.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [0]) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_571)
  CLOSURE_HEADER (LABEL_229);

DEFLABEL (lambda_409)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_250]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_408)
  INTERRUPT_CHECK (27, LABEL_250);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_256]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (Wrd15.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd29.Obj) = ((Wrd13.pObj) [5]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_45]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_193]));

DEFLABEL (continuation_407)
  INTERRUPT_CHECK (27, LABEL_256);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_573)
  CLOSURE_HEADER (LABEL_236);

DEFLABEL (lambda_81)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_239);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_238])));
  Rhp += 3;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd25 = Wrd20;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  ((Wrd25.pObj) [2]) = (Wrd28.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [4]) = (Wrd22.Obj);
  Wrd10 = Wrd19;
  Rsp = (& (Rsp [3]));
  goto label_798;

DEFLABEL (lambda_576)
  CLOSURE_HEADER (LABEL_240);

DEFLABEL (lambda_61)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_254]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  if ((Wrd8.Obj) == (current_block [OBJECT_24]))
    goto label_804;
  if ((Wrd8.Obj) == (current_block [OBJECT_40]))
    goto label_803;
  if ((Wrd8.Obj) == (current_block [OBJECT_42]))
    goto label_799;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (label_799)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd29.Obj);

DEFLABEL (label_802)
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));

DEFLABEL (label_801)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_800)
  (Rsp [3]) = (Wrd34.Obj);
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [2]);
  (Rsp [2]) = (Wrd38.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_803)
  (Wrd45.Obj) = (Rsp [3]);
  (Wrd46.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd50.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd58.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (Wrd62.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  goto label_802;

DEFLABEL (label_804)
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 26))
    goto label_807;
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if ((Wrd93.Lng) == 0)
    goto label_806;

DEFLABEL (label_805)
  (Wrd73.Obj) = (Rsp [3]);
  (Wrd74.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (Wrd78.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (Wrd86.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd86.Obj);
  (* (Rhp++)) = (Wrd79.Obj);
  (Wrd85.pObj) = (& (Rhp [-2]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd85.pObj)));
  (Wrd90.Obj) = (current_block [OBJECT_45]);
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd83.Obj);
  goto label_802;

DEFLABEL (label_806)
  (Wrd34.Obj) = (Rsp [2]);
  goto label_801;

DEFLABEL (label_807)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_255]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_503)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_805;
  goto label_806;

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_254);
  (Wrd34.Obj) = Rvl;
  goto label_800;

DEFLABEL (lambda_577)
  CLOSURE_HEADER (LABEL_242);

DEFLABEL (lambda_366)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (lambda_579)
  CLOSURE_HEADER (LABEL_245);

DEFLABEL (lambda_368)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto pop_return;

DEFLABEL (lambda_581)
  CLOSURE_HEADER (LABEL_252);

DEFLABEL (lambda_89)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_261);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_260])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Rsp [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto expression_simplify_232;

DEFLABEL (lambda_574)
  CLOSURE_HEADER (LABEL_238);

DEFLABEL (lambda_80)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == (current_block [OBJECT_24]))
    goto label_811;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_262]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_262);

DEFLABEL (label_811)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_264);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_263])));
  Rhp += 3;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd22 = Wrd13;
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd24.pObj) [3]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd24.pObj) [4]);
  ((Wrd22.pObj) [4]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_810;
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if ((Wrd63.Lng) == 0)
    goto label_809;

DEFLABEL (label_808)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd49.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Wrd53.Obj) = (current_block [OBJECT_45]);
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Rsp [2]) = (Wrd50.Obj);
  (Wrd54.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd54.Obj);
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [3]);
  (Rsp [3]) = (Wrd55.Obj);
  Rsp = (& (Rsp [2]));
  goto assign_to_temporary_247;

DEFLABEL (label_809)
  (Wrd59.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd60.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_72;

DEFLABEL (label_810)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_265]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_504)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_808;
  goto label_809;

DEFLABEL (lambda_582)
  CLOSURE_HEADER (LABEL_258);

DEFLABEL (lambda_96)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_270);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_269])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Rsp [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto expression_simplify_232;

DEFLABEL (lambda_583)
  CLOSURE_HEADER (LABEL_260);

DEFLABEL (lambda_88)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_272);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_271])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd19.Obj) = ((Wrd6.pObj) [5]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd20.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [2]) = (Wrd20.Obj);
  goto expression_simplify_232;

DEFLABEL (lambda_584)
  CLOSURE_HEADER (LABEL_263);

DEFLABEL (lambda_72)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_52]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = ((Wrd27.pObj) [4]);
  (Rsp [3]) = (Wrd29.Obj);
  (Wrd32.Obj) = ((Wrd27.pObj) [3]);
  (Rsp [2]) = (Wrd32.Obj);
  goto expression_simplify_232;

DEFLABEL (lambda_585)
  CLOSURE_HEADER (LABEL_267);

DEFLABEL (lambda_101)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_62]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [3]) = (Wrd20.Obj);
  goto typed_cons_436;

DEFLABEL (lambda_586)
  CLOSURE_HEADER (LABEL_269);

DEFLABEL (lambda_95)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_277);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_276])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd19.Obj) = ((Wrd6.pObj) [5]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd20.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [2]) = (Wrd20.Obj);
  goto expression_simplify_232;

DEFLABEL (lambda_587)
  CLOSURE_HEADER (LABEL_271);

DEFLABEL (lambda_87)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_52]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd20.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [0]) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_588)
  CLOSURE_HEADER (LABEL_274);

DEFLABEL (lambda_105)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [5]) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [2]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd19.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  goto typed_cons_436;

DEFLABEL (lambda_589)
  CLOSURE_HEADER (LABEL_276);

DEFLABEL (lambda_94)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_57]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd20.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [0]) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_590)
  CLOSURE_HEADER (LABEL_279);

DEFLABEL (lambda_117)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_285]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96]));

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_285);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_57]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [2]);
  (Rsp [1]) = (Wrd34.Obj);
  (Wrd41.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Rsp [5]) = (Wrd37.Obj);
  Rsp = (& (Rsp [1]));
  goto typed_cons_436;

DEFLABEL (lambda_561)
  CLOSURE_HEADER (LABEL_172);

DEFLABEL (lambda_125)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_815;
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_818;
  Wrd22 = Wrd26;

DEFLABEL (label_817)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  if ((Wrd32.Obj) == (Wrd22.Obj))
    goto label_816;

DEFLABEL (label_815)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_814;
  Wrd33 = Wrd37;

DEFLABEL (label_813)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [3]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  ((Wrd42.pObj) [0]) = (Wrd33.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_176]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd55.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_177]));

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_175);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96]));

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_171);
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [2]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  ((Wrd65.pObj) [0]) = Rvl;
  (Wrd5.Obj) = ((Wrd65.pObj) [0]);

DEFLABEL (label_812)
  Rsp = (& (Rsp [2]));
  goto label_737;

DEFLABEL (label_814)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_174])), (Wrd34.pObj));

DEFLABEL (label_506)
  (Wrd33.Obj) = Rvl;
  goto label_813;

DEFLABEL (label_816)
  (Wrd59.Obj) = ((Wrd29.pObj) [2]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd5.Obj) = ((Wrd60.pObj) [0]);
  goto label_812;

DEFLABEL (label_818)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_173])), (Wrd23.pObj));

DEFLABEL (label_505)
  (Wrd22.Obj) = Rvl;
  goto label_817;

DEFLABEL (lambda_591)
  CLOSURE_HEADER (LABEL_283);

DEFLABEL (lambda_133)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_290);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_289])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd9.Obj);
  goto expression_simplify_232;

DEFLABEL (lambda_594)
DEFLABEL (lambda_122)
  INTERRUPT_CHECK (26, LABEL_176);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_291]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_292]));

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_291);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_820;
  Wrd6 = Wrd10;

DEFLABEL (label_819)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_299]));

DEFLABEL (label_820)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_298])), (Wrd7.pObj));

DEFLABEL (label_507)
  (Wrd6.Obj) = Rvl;
  goto label_819;

DEFLABEL (lambda_592)
  CLOSURE_HEADER (LABEL_287);

DEFLABEL (lambda_140)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_297);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_296])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Rsp [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto expression_simplify_232;

DEFLABEL (lambda_593)
  CLOSURE_HEADER (LABEL_289);

DEFLABEL (lambda_132)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_65]);
  (Wrd12.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd20.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_52]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Rsp [1]) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_595)
  CLOSURE_HEADER (LABEL_294);

DEFLABEL (lambda_147)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_303);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_302])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Rsp [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto expression_simplify_232;

DEFLABEL (lambda_596)
  CLOSURE_HEADER (LABEL_296);

DEFLABEL (lambda_139)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_305);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_304])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd19.Obj) = ((Wrd6.pObj) [5]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd20.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [2]) = (Wrd20.Obj);
  goto expression_simplify_232;

DEFLABEL (lambda_599)
DEFLABEL (lambda_151)
  INTERRUPT_CHECK (26, LABEL_301);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_66]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_597)
  CLOSURE_HEADER (LABEL_302);

DEFLABEL (lambda_146)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_309);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_308])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd19.Obj) = ((Wrd6.pObj) [5]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd20.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [2]) = (Wrd20.Obj);
  goto expression_simplify_232;

DEFLABEL (lambda_598)
  CLOSURE_HEADER (LABEL_304);

DEFLABEL (lambda_138)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd20.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [0]) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_601)
DEFLABEL (lambda_155)
  INTERRUPT_CHECK (26, LABEL_307);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_67]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_600)
  CLOSURE_HEADER (LABEL_308);

DEFLABEL (lambda_145)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd20.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [0]) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_602)
DEFLABEL (lambda_162)
  INTERRUPT_CHECK (26, LABEL_311);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_68]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [5]) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd26.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_603)
DEFLABEL (lambda_168)
  INTERRUPT_CHECK (26, LABEL_313);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_69]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [4]) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd22.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (object_selector_604)
DEFLABEL (object_selector_440)
  INTERRUPT_CHECK (26, LABEL_320);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_322);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_321])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_605)
  CLOSURE_HEADER (LABEL_321);

DEFLABEL (lambda_439)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_327);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_326])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [0]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  goto expression_simplify_232;

DEFLABEL (lambda_606)
  CLOSURE_HEADER (LABEL_326);

DEFLABEL (lambda_438)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_331]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_437)
  INTERRUPT_CHECK (27, LABEL_331);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_607)
  CLOSURE_HEADER (LABEL_351);

DEFLABEL (lambda_197)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_357);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_356])));
  Rhp += 6;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [5]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [6]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [7]) = (Wrd9.Obj);
  (Rsp [6]) = (Wrd6.Obj);
  (Rsp [3]) = (Wrd21.Obj);
  (Rsp [5]) = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));
  goto expression_simplify_232;

DEFLABEL (lambda_608)
  CLOSURE_HEADER (LABEL_354);

DEFLABEL (lambda_204)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_362);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_361])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [5]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd15.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [2]);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  goto expression_simplify_232;

DEFLABEL (lambda_609)
  CLOSURE_HEADER (LABEL_356);

DEFLABEL (lambda_196)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_364);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_363])));
  Rhp += 4;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd24 = Wrd13;
  (Wrd27.Obj) = ((Wrd6.pObj) [3]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd6.pObj) [5]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd6.pObj) [7]);
  ((Wrd24.pObj) [4]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd24.pObj) [5]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd28.Obj) = ((Wrd6.pObj) [6]);
  (Rsp [2]) = (Wrd28.Obj);
  goto expression_simplify_232;

DEFLABEL (lambda_610)
  CLOSURE_HEADER (LABEL_359);

DEFLABEL (lambda_211)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_368);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_367])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [5]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd15.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [2]);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  goto expression_simplify_232;

DEFLABEL (lambda_611)
  CLOSURE_HEADER (LABEL_361);

DEFLABEL (lambda_203)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd21.Obj) = ((Wrd9.pObj) [3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_80]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd26.Obj) = ((Wrd9.pObj) [4]);
  (Rsp [0]) = (Wrd26.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_612)
  CLOSURE_HEADER (LABEL_363);

DEFLABEL (lambda_195)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd21.Obj) = ((Wrd9.pObj) [5]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd27.Obj) = ((Wrd9.pObj) [3]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_78]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd32.Obj) = ((Wrd9.pObj) [4]);
  (Rsp [0]) = (Wrd32.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_613)
  CLOSURE_HEADER (LABEL_365);

DEFLABEL (lambda_220)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_370);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_369])));
  Rhp += 6;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [5]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [6]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [7]) = (Wrd9.Obj);
  (Rsp [6]) = (Wrd6.Obj);
  (Rsp [3]) = (Wrd21.Obj);
  (Rsp [5]) = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));
  goto expression_simplify_232;

DEFLABEL (lambda_614)
  CLOSURE_HEADER (LABEL_367);

DEFLABEL (lambda_210)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd21.Obj) = ((Wrd9.pObj) [3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_81]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd26.Obj) = ((Wrd9.pObj) [4]);
  (Rsp [0]) = (Wrd26.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_615)
  CLOSURE_HEADER (LABEL_369);

DEFLABEL (lambda_219)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_372);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_371])));
  Rhp += 4;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd24 = Wrd13;
  (Wrd27.Obj) = ((Wrd6.pObj) [3]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd6.pObj) [5]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd6.pObj) [7]);
  ((Wrd24.pObj) [4]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd24.pObj) [5]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd28.Obj) = ((Wrd6.pObj) [6]);
  (Rsp [2]) = (Wrd28.Obj);
  goto expression_simplify_232;

DEFLABEL (lambda_616)
  CLOSURE_HEADER (LABEL_371);

DEFLABEL (lambda_218)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd21.Obj) = ((Wrd9.pObj) [5]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd27.Obj) = ((Wrd9.pObj) [3]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_82]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd32.Obj) = ((Wrd9.pObj) [4]);
  (Rsp [0]) = (Wrd32.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rtlcon_so_455992bcaaeb7039 [25] =
  {
    { "rtlcon_so_code_1", 4, rtlcon_so_code_1 },
    { "rtlcon_so_code_2", 18, rtlcon_so_code_2 },
    { "rtlcon_so_code_3", 4, rtlcon_so_code_3 },
    { "rtlcon_so_code_4", 4, rtlcon_so_code_4 },
    { "rtlcon_so_code_5", 7, rtlcon_so_code_5 },
    { "rtlcon_so_code_6", 2, rtlcon_so_code_6 },
    { "rtlcon_so_code_7", 2, rtlcon_so_code_7 },
    { "rtlcon_so_code_8", 6, rtlcon_so_code_8 },
    { "rtlcon_so_code_9", 6, rtlcon_so_code_9 },
    { "rtlcon_so_code_10", 7, rtlcon_so_code_10 },
    { "rtlcon_so_code_11", 1, rtlcon_so_code_11 },
    { "rtlcon_so_code_12", 6, rtlcon_so_code_12 },
    { "rtlcon_so_code_13", 7, rtlcon_so_code_13 },
    { "rtlcon_so_code_14", 6, rtlcon_so_code_14 },
    { "rtlcon_so_code_15", 7, rtlcon_so_code_15 },
    { "rtlcon_so_code_16", 1, rtlcon_so_code_16 },
    { "rtlcon_so_code_17", 1, rtlcon_so_code_17 },
    { "rtlcon_so_code_18", 3, rtlcon_so_code_18 },
    { "rtlcon_so_code_19", 1, rtlcon_so_code_19 },
    { "rtlcon_so_code_20", 1, rtlcon_so_code_20 },
    { "rtlcon_so_code_21", 2, rtlcon_so_code_21 },
    { "rtlcon_so_code_22", 5, rtlcon_so_code_22 },
    { "rtlcon_so_code_23", 6, rtlcon_so_code_23 },
    { "rtlcon_so_code_24", 5, rtlcon_so_code_24 },
    { "rtlcon_so_code_25", 5, rtlcon_so_code_25 }
  };

int
decl_rtlcon_so_455992bcaaeb7039 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rtlcon_so_455992bcaaeb7039);
  return (0);
}

DECLARE_COMPILED_CODE ("rtlcon.so", 273, decl_rtlcon_so_455992bcaaeb7039, rtlcon_so_455992bcaaeb7039)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rtlcon_so_data_455992bcaaeb7039 [7646] =
  "\xbd\x05\x38\x98\x0c\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9"
  "\x28\x0d\x28\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x82\x88\x0d\x08\x0d\xbe"
  "\x0d\xbf\xc1\x1c\x0d\x1c\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x83\x88\x0d\x1c\x08\xc2\x1c\x81\x0d\x1c\x24\x28\xb1"
  "\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x84\x88\x0d\x08\x87\x1b\x81\x1b\x24\x28\xb3\x28\xb2\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0d"
  "\x08\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x1b"
  "\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x08\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x08\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x80\x0d\x1c\x08\x02\x28\x1b\x23\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x1b\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x1b\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x08\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x08\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x1b\x08\x02\x28\x0d\x1c\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x08\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d"
  "\x1c\x1b\x08\x1b\x81\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x1b\x28"
  "\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x1b\x02"
  "\x0d\x1c\x08\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x08\x1b\x24\x28\xb3\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x08\x1b\x24\x28\xb3\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x08\x1b\x24\x28\xb3\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x08\x1b\x24\x28\xb3\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x1b\x02\x0d\x0d\x02\x0d\x02\x0d\x0c\x1b\x0c\x0c\x1b\x0d\x1b\x1b"
  "\x1b\x81\x86\x0d\x0d\x0d\x0c\x0d\x0d\x0d\x0d\xb4\x82\x1b\x1b\x0c"
  "\xc2\x1b\x0c\x0c\x0c\x0c\x0d\x1b\xc1\xb6\x0d\x80\x1b\x06\x07\x85"
  "\xc2\x02\x08\xb7\x1b\xb3\x0d\x1c\xb1\x0d\x1c\x0d\x1c\xb4\x1b\xb3"
  "\xb1\x0d\x0d\x0d\x0d\x9f\x1e\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x9f\x0d\x1c\xc3\x0d\x1c\x1b\x1b\x99\x1e\x1e\x99\x1b\x1b"
  "\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x1b\x1b\x1b\x0d\xb2\x1b\x17\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\xb5\x2a\x17\x28\x0d\x26\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x24\x28\xb3"
  "\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\xb2\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5c\x2f\x55"
  "\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72"
  "\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c"
  "\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c\x62\x61\x73\x65\x2f\x72"
  "\x74\x6c\x63\x6f\x6e\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04"
  "\x23\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x64\x65\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x66\x6f\x72\x2d\x73\x74\x61\x74\x65\x6d"
  "\x65\x6e\x74\x03\x20\x72\x74\x6c\x3a\x70\x73\x65\x75\x64\x6f\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x3f\x04\x1d\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x69\x6e\x74\x65\x72\x6e"
  "\x61\x6c\x04\x22\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x73"
  "\x69\x6d\x70\x6c\x69\x66\x79\x2d\x66\x6f\x72\x2d\x73\x74\x61\x74"
  "\x65\x6d\x65\x6e\x74\x04\x2a\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x2d\x73\x69\x6d\x70\x6c\x69\x66\x79\x2d\x66\x6f\x72\x2d\x70"
  "\x73\x65\x75\x64\x6f\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x06\x95\x02\x0a\x81\x87\x02\x94\x02\x08\x81\x85\x02\x93\x02\x06"
  "\x81\x85\x02\x92\x02\x04\x84\x06\x09\x17\x02\x07\x61\x73\x73\x69"
  "\x67\x6e\x07\x6f\x66\x66\x73\x65\x74\x09\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x04\x63\x61\x72\x09\x15\x73\x65\x74\x2d\x73\x6e\x6f\x64"
  "\x65\x2d\x6e\x65\x78\x74\x2d\x65\x64\x67\x65\x21\x0a\x02\x04\x07"
  "\x65\x71\x75\x61\x6c\x3f\x03\x15\x6d\x61\x6b\x65\x2d\x72\x74\x6c"
  "\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x0b\x02\x19\x72"
  "\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x0c\x04\x0b\x6e\x6f\x64\x65\x2d\x3e"
  "\x73\x63\x66\x67\x0d\x03\x0c\x6d\x61\x6b\x65\x2d\x73\x62\x6c\x6f"
  "\x63\x6b\x0e\x04\x11\x73\x63\x66\x67\x2a\x73\x63\x66\x67\x2d\x3e"
  "\x73\x63\x66\x67\x21\x0f\x07\xa7\x02\x26\x81\x8f\x02\xa6\x02\x24"
  "\x81\x8d\x02\xa5\x02\x22\x81\x89\x02\xa4\x02\x20\x81\x8d\x02\xa3"
  "\x02\x1e\x81\x8b\x02\xa2\x02\x1c\x81\x8b\x02\xa1\x02\x1a\x81\x87"
  "\x02\xa0\x02\x18\x81\x87\x02\x9f\x02\x16\x81\x85\x02\x9e\x02\x14"
  "\x81\x85\x02\x9d\x02\x12\x81\x89\x02\x9c\x02\x10\x81\x85\x02\x9b"
  "\x02\x0e\x81\x85\x02\x9a\x02\x0c\x81\x85\x02\x99\x02\x0a\x81\x85"
  "\x02\x98\x02\x08\x81\x85\x02\x97\x02\x06\x84\x06\x96\x02\x04\x81"
  "\x85\x02\x25\x3c\x10\x02\x0f\x70\x6f\x73\x74\x2d\x69\x6e\x63\x72"
  "\x65\x6d\x65\x6e\x74\x11\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65"
  "\x66\x12\x17\x2a\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x2d\x6d\x61\x70\x2a\x13\x02\x04\x04\x03\xab\x02"
  "\x0a\x81\x85\x02\xaa\x02\x08\x81\x85\x02\xa9\x02\x06\x83\x04\xa8"
  "\x02\x04\x83\x04\x09\x17\x14\x02\x0e\x70\x72\x65\x2d\x69\x6e\x63"
  "\x72\x65\x6d\x65\x6e\x74\x12\x13\x02\x04\x04\x03\xaf\x02\x0a\x81"
  "\x83\x02\xae\x02\x08\x81\x83\x02\xad\x02\x06\x83\x04\xac\x02\x04"
  "\x83\x04\x09\x18\x15\x02\x08\x65\x71\x2d\x74\x65\x73\x74\x1c\x73"
  "\x65\x74\x2d\x70\x6e\x6f\x64\x65\x2d\x61\x6c\x74\x65\x72\x6e\x61"
  "\x74\x69\x76\x65\x2d\x65\x64\x67\x65\x21\x16\x1b\x73\x65\x74\x2d"
  "\x70\x6e\x6f\x64\x65\x2d\x63\x6f\x6e\x73\x65\x71\x75\x65\x6e\x74"
  "\x2d\x65\x64\x67\x65\x21\x17\x03\x04\x22\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x2d\x73\x69\x6d\x70\x6c\x69\x66\x79\x2d\x66\x6f"
  "\x72\x2d\x70\x72\x65\x64\x69\x63\x61\x74\x65\x18\x03\x0b\x05\x0b"
  "\x6e\x6f\x64\x65\x2d\x3e\x70\x63\x66\x67\x19\x03\x0c\x6d\x61\x6b"
  "\x65\x2d\x70\x62\x6c\x6f\x63\x6b\x1a\x05\xb6\x02\x10\x81\x87\x02"
  "\xb5\x02\x0e\x81\x87\x02\xb4\x02\x0c\x81\x87\x02\xb3\x02\x0a\x81"
  "\x85\x02\xb2\x02\x08\x81\x85\x02\xb1\x02\x06\x81\x85\x02\xb0\x02"
  "\x04\x84\x06\x0f\x20\x1b\x02\x03\x12\x72\x74\x6c\x3a\x6d\x61\x6b"
  "\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x1c\x04\x11\x72\x74\x6c"
  "\x3a\x6d\x61\x6b\x65\x2d\x65\x71\x2d\x74\x65\x73\x74\x1d\x03\xb8"
  "\x02\x06\x81\x85\x02\xb7\x02\x04\x83\x04\x05\x0d\x1e\x02\x08\x03"
  "\x14\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x66\x61\x6c\x73\x65\x2d"
  "\x74\x65\x73\x74\x1f\x03\x0c\x70\x63\x66\x67\x2d\x69\x6e\x76\x65"
  "\x72\x74\x03\xba\x02\x06\x81\x83\x02\xb9\x02\x04\x83\x04\x05\x0d"
  "\x20\x02\x09\x0a\x74\x79\x70\x65\x2d\x74\x65\x73\x74\x16\x17\x03"
  "\x04\x18\x03\x0b\x05\x19\x03\x1a\x05\xc0\x02\x0e\x81\x87\x02\xbf"
  "\x02\x0c\x81\x87\x02\xbe\x02\x0a\x81\x87\x02\xbd\x02\x08\x81\x85"
  "\x02\xbc\x02\x06\x81\x85\x02\xbb\x02\x04\x84\x06\x0d\x1e\x21\x02"
  "\x0a\x0b\x70\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x16\x17\x03\x04"
  "\x18\x03\x0b\x05\x19\x03\x1a\x05\xc6\x02\x0e\x81\x87\x02\xc5\x02"
  "\x0c\x81\x87\x02\xc4\x02\x0a\x81\x87\x02\xc3\x02\x08\x81\x85\x02"
  "\xc2\x02\x06\x81\x85\x02\xc1\x02\x04\x84\x06\x0d\x1e\x22\x02\x0b"
  "\x0c\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x16\x17\x03\x04"
  "\x18\x03\x0b\x05\x19\x03\x1a\x05\xcd\x02\x10\x81\x87\x02\xcc\x02"
  "\x0e\x81\x87\x02\xcb\x02\x0c\x81\x87\x02\xca\x02\x0a\x81\x85\x02"
  "\xc9\x02\x08\x81\x85\x02\xc8\x02\x06\x81\x85\x02\xc7\x02\x04\x85"
  "\x08\x0f\x20\x23\x02\x0c\x11\x63\x6f\x6e\x73\x2d\x6e\x6f\x6e\x2d"
  "\x70\x6f\x69\x6e\x74\x65\x72\x24\x11\x6d\x61\x63\x68\x69\x6e\x65"
  "\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x25\x33\x04\x1d\x02\xce\x02"
  "\x04\x83\x04\x03\x0e\x26\x02\x0d\x12\x66\x69\x78\x6e\x75\x6d\x2d"
  "\x70\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x16\x17\x03\x04\x18\x03"
  "\x0b\x05\x19\x03\x1a\x05\xd4\x02\x0e\x81\x87\x02\xd3\x02\x0c\x81"
  "\x87\x02\xd2\x02\x0a\x81\x87\x02\xd1\x02\x08\x81\x85\x02\xd0\x02"
  "\x06\x81\x85\x02\xcf\x02\x04\x84\x06\x0d\x1e\x27\x02\x0e\x13\x66"
  "\x69\x78\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67"
  "\x73\x16\x17\x03\x04\x18\x03\x0b\x05\x19\x03\x1a\x05\xdb\x02\x10"
  "\x81\x87\x02\xda\x02\x0e\x81\x87\x02\xd9\x02\x0c\x81\x87\x02\xd8"
  "\x02\x0a\x81\x85\x02\xd7\x02\x08\x81\x85\x02\xd6\x02\x06\x81\x85"
  "\x02\xd5\x02\x04\x85\x08\x0f\x20\x28\x02\x0f\x12\x66\x6c\x6f\x6e"
  "\x75\x6d\x2d\x70\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x16\x17\x03"
  "\x04\x18\x03\x0b\x05\x19\x03\x1a\x05\xe1\x02\x0e\x81\x87\x02\xe0"
  "\x02\x0c\x81\x87\x02\xdf\x02\x0a\x81\x87\x02\xde\x02\x08\x81\x85"
  "\x02\xdd\x02\x06\x81\x85\x02\xdc\x02\x04\x84\x06\x0d\x1e\x29\x02"
  "\x10\x13\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d"
  "\x61\x72\x67\x73\x16\x17\x03\x04\x18\x03\x0b\x05\x19\x03\x1a\x05"
  "\xe8\x02\x10\x81\x87\x02\xe7\x02\x0e\x81\x87\x02\xe6\x02\x0c\x81"
  "\x87\x02\xe5\x02\x0a\x81\x85\x02\xe4\x02\x08\x81\x85\x02\xe3\x02"
  "\x06\x81\x85\x02\xe2\x02\x04\x85\x08\x0f\x20\x1a\x02\x11\x0d\x63"
  "\x6f\x6e\x73\x2d\x70\x6f\x69\x6e\x74\x65\x72\x19\x13\x65\x6e\x74"
  "\x72\x79\x3a\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x17"
  "\x25\x29\x03\x0e\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x75\x73"
  "\x68\x16\x02\xe9\x02\x04\x83\x04\x03\x0e\x2a\x02\x12\x0c\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2b\x06\x66\x65\x74\x63\x68"
  "\x2c\x0d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x2d\x03"
  "\x16\x02\xea\x02\x04\x82\x02\x03\x0d\x2e\x02\x13\x2d\x10\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x3e\x61\x64\x64\x72\x65\x73\x73\x2f\x11\x12"
  "\x13\x02\x04\x14\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x30\x02\xed\x02\x08\x81\x81\x02\xec"
  "\x02\x06\x81\x81\x02\xeb\x02\x04\x82\x02\x07\x15\x31\x02\x14\x2d"
  "\x2c\x0e\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e\x74\x65\x72\x32"
  "\x04\x30\x02\xee\x02\x04\x82\x02\x03\x0d\x33\x02\x15\x32\x2c\x2d"
  "\x04\x30\x02\xef\x02\x04\x82\x02\x03\x0d\x32\x02\x16\x24\x25\x33"
  "\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x03\x1b\x75\x6e\x61\x73"
  "\x73\x69\x67\x6e\x65\x64\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x2d\x74\x72\x61\x70\x3f\x02\xf1\x02\x06\x81\x83\x02\xf0\x02\x04"
  "\x83\x04\x05\x11\x34\x02\x17\x18\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x6c\x6f\x6f\x6b\x75\x70\x0a"
  "\x02\x04\x03\x0b\x04\x0d\x03\x0e\x05\xf6\x02\x0c\x81\x89\x02\xf5"
  "\x02\x0a\x81\x87\x02\xf4\x02\x08\x81\x85\x02\xf3\x02\x06\x81\x85"
  "\x02\xf2\x02\x04\x86\x0a\x0b\x1b\x35\x02\x18\x22\x69\x6e\x74\x65"
  "\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63"
  "\x68\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0a\x02\x04"
  "\x03\x0b\x04\x0d\x03\x0e\x05\xfc\x02\x0e\x81\x89\x02\xfb\x02\x0c"
  "\x81\x87\x02\xfa\x02\x0a\x81\x85\x02\xf9\x02\x08\x81\x85\x02\xf8"
  "\x02\x06\x81\x85\x02\xf7\x02\x04\x85\x08\x0d\x1d\x36\x02\x19\x21"
  "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c"
  "\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x0a\x02\x04\x03\x0b\x04\x0d\x03\x0e\x05\x81\x03\x0c\x81\x89\x02"
  "\x80\x03\x0a\x81\x87\x02\xff\x02\x08\x81\x85\x02\xfe\x02\x06\x81"
  "\x85\x02\xfd\x02\x04\x85\x08\x0b\x1b\x37\x02\x1a\x23\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61"
  "\x63\x68\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x0a"
  "\x02\x04\x03\x0b\x04\x0d\x03\x0e\x05\x86\x03\x0c\x81\x89\x02\x85"
  "\x03\x0a\x81\x87\x02\x84\x03\x08\x81\x85\x02\x83\x03\x06\x81\x85"
  "\x02\x82\x03\x04\x84\x06\x0b\x1b\x0e\x1a\x0d\x0d\x0e\x66\x6c\x6f"
  "\x6e\x75\x6d\x2d\x32\x2d\x61\x72\x67\x73\x0d\x66\x6c\x6f\x6e\x75"
  "\x6d\x2d\x31\x2d\x61\x72\x67\x0d\x66\x69\x78\x6e\x75\x6d\x2d\x31"
  "\x2d\x61\x72\x67\x0e\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x66\x6c\x6f"
  "\x61\x74\x0e\x66\x69\x78\x6e\x75\x6d\x2d\x32\x2d\x61\x72\x67\x73"
  "\x0e\x66\x6c\x6f\x61\x74\x2d\x3e\x6f\x62\x6a\x65\x63\x74\x0f\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x10\x61\x64"
  "\x64\x72\x65\x73\x73\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x10\x66\x69"
  "\x78\x6e\x75\x6d\x2d\x3e\x61\x64\x64\x72\x65\x73\x73\x0f\x66\x69"
  "\x78\x6e\x75\x6d\x2d\x3e\x6f\x62\x6a\x65\x63\x74\x0e\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x3e\x64\x61\x74\x75\x6d\x0c\x63\x68\x61\x72\x2d"
  "\x3e\x61\x73\x63\x69\x69\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x74"
  "\x79\x70\x65\x12\x63\x6f\x6e\x73\x2d\x6d\x75\x6c\x74\x69\x63\x6c"
  "\x6f\x73\x75\x72\x65\x0d\x63\x6f\x6e\x73\x2d\x63\x6c\x6f\x73\x75"
  "\x72\x65\x10\x65\x6e\x74\x72\x79\x3a\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x17\x29\x15\x74\x79\x70\x65\x64\x2d\x63\x6f\x6e\x73\x3a"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x12\x74\x79\x70\x65\x64\x2d"
  "\x63\x6f\x6e\x73\x3a\x76\x65\x63\x74\x6f\x72\x37\x10\x74\x79\x70"
  "\x65\x64\x2d\x63\x6f\x6e\x73\x3a\x70\x61\x69\x72\x3c\x0a\x63\x65"
  "\x6c\x6c\x2d\x63\x6f\x6e\x73\x28\x63\x61\x6e\x27\x74\x20\x74\x61"
  "\x6b\x65\x20\x61\x64\x64\x72\x65\x73\x73\x20\x6f\x66\x20\x6e\x6f"
  "\x6e\x2d\x6f\x62\x6a\x65\x63\x74\x20\x6f\x66\x66\x73\x65\x74\x24"
  "\x21\x43\x61\x6e\x27\x74\x20\x74\x61\x6b\x65\x20\x41\x44\x44\x52"
  "\x45\x53\x53\x20\x6f\x66\x20\x61\x20\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x1d\x41\x44\x44\x52\x45\x53\x53\x3a\x20\x55\x6e\x6b\x6e\x6f"
  "\x77\x6e\x20\x67\x72\x61\x6e\x75\x6c\x61\x72\x69\x74\x79\x2b\x08"
  "\x61\x64\x64\x72\x65\x73\x73\x19\x2f\x11\x15\x66\x6c\x6f\x61\x74"
  "\x2d\x6f\x66\x66\x73\x65\x74\x2d\x61\x64\x64\x72\x65\x73\x73\x14"
  "\x62\x79\x74\x65\x2d\x6f\x66\x66\x73\x65\x74\x2d\x61\x64\x64\x72"
  "\x65\x73\x73\x0f\x6f\x66\x66\x73\x65\x74\x2d\x61\x64\x64\x72\x65"
  "\x73\x73\x1b\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x6f\x66\x66\x73\x65"
  "\x74\x20\x67\x72\x61\x6e\x75\x6c\x61\x72\x69\x74\x79\x0d\x66\x6c"
  "\x6f\x61\x74\x2d\x6f\x66\x66\x73\x65\x74\x06\x66\x6c\x6f\x61\x74"
  "\x0c\x62\x79\x74\x65\x2d\x6f\x66\x66\x73\x65\x74\x05\x62\x79\x74"
  "\x65\x12\x25\x0f\x43\x61\x6e\x27\x74\x20\x62\x65\x20\x61\x20\x72"
  "\x65\x67\x06\x61\x70\x70\x6c\x79\x18\x11\x69\x6c\x6c\x65\x67\x61"
  "\x6c\x20\x6c\x6f\x63\x61\x74\x69\x76\x65\x10\x75\x6e\x6b\x6e\x6f"
  "\x77\x6e\x20\x6b\x65\x79\x77\x6f\x72\x64\x15\x6f\x66\x66\x73\x65"
  "\x74\x20\x62\x61\x73\x65\x20\x6e\x6f\x74\x20\x70\x61\x69\x72\x14"
  "\x69\x6c\x6c\x65\x67\x61\x6c\x20\x6f\x66\x66\x73\x65\x74\x20\x62"
  "\x61\x73\x65\x06\x69\x6e\x64\x65\x78\x2d\x04\x63\x64\x72\x07\x6f"
  "\x62\x6a\x65\x63\x74\x2c\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79"
  "\x70\x65\x3f\x1e\x09\x1f\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x69"
  "\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a"
  "\x73\x65\x74\x21\x2f\x23\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x69"
  "\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a"
  "\x75\x6e\x62\x6f\x75\x6e\x64\x3f\x2d\x21\x72\x74\x6c\x3a\x6d\x61"
  "\x6b\x65\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63"
  "\x61\x6c\x6c\x3a\x64\x65\x66\x69\x6e\x65\x2c\x18\x2c\x72\x74\x6c"
  "\x3a\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65"
  "\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d\x75\x6e\x61"
  "\x73\x73\x69\x67\x6e\x65\x64\x3f\x2a\x72\x74\x6c\x3a\x6d\x61\x6b"
  "\x65\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61"
  "\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2b\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65"
  "\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63"
  "\x68\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x21\x72\x74"
  "\x6c\x3a\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74"
  "\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x6c\x6f\x6f\x6b\x75\x70\x0e\x04"
  "\x37\x04\x36\x04\x35\x04\x26\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d"
  "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c"
  "\x3a\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x37\x13\x6c\x65"
  "\x78\x69\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x21\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x70"
  "\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x61\x63\x63\x65\x73"
  "\x73\x36\x2f\x2c\x2d\x37\x36\x1c\x1d\x72\x74\x6c\x3a\x6d\x61\x6b"
  "\x65\x2d\x6c\x69\x6e\x6b\x2d\x3e\x73\x74\x61\x63\x6b\x2d\x70\x6f"
  "\x69\x6e\x74\x65\x72\x1d\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x73"
  "\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x3e\x6c\x69"
  "\x6e\x6b\x12\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x6f\x70\x2d"
  "\x6c\x69\x6e\x6b\x13\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x75"
  "\x73\x68\x2d\x6c\x69\x6e\x6b\x15\x72\x74\x6c\x3a\x6d\x61\x6b\x65"
  "\x2d\x70\x75\x73\x68\x2d\x72\x65\x74\x75\x72\x6e\x1c\x72\x74\x6c"
  "\x3a\x6d\x61\x6b\x65\x2d\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x72\x65"
  "\x64\x2d\x32\x2d\x61\x72\x67\x73\x1b\x72\x74\x6c\x3a\x6d\x61\x6b"
  "\x65\x2d\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x31\x2d"
  "\x61\x72\x67\x1c\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x66\x69\x78"
  "\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x1b"
  "\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x66\x69\x78\x6e\x75\x6d\x2d"
  "\x70\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x19\x72\x74\x6c\x3a\x6d"
  "\x61\x6b\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x74"
  "\x65\x73\x74\x15\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x72\x65"
  "\x64\x2d\x32\x2d\x61\x72\x67\x73\x14\x72\x74\x6c\x3a\x6d\x61\x6b"
  "\x65\x2d\x70\x72\x65\x64\x2d\x31\x2d\x61\x72\x67\x13\x72\x74\x6c"
  "\x3a\x6d\x61\x6b\x65\x2d\x74\x79\x70\x65\x2d\x74\x65\x73\x74\x13"
  "\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x74\x72\x75\x65\x2d\x74\x65"
  "\x73\x74\x1f\x1d\x16\x0d\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70"
  "\x6f\x70\x30\x19\x34\x04\x32\x04\x33\x04\x31\x04\x2e\x04\x2a\x04"
  "\x1a\x04\x29\x04\x28\x04\x27\x04\x26\x04\x23\x04\x22\x04\x21\x04"
  "\x20\x04\x1e\x04\x1b\x04\x15\x04\x14\x04\x10\x06\x04\x19\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02"
  "\x1e\x25\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74"
  "\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x61\x63\x63\x65\x73\x73\x23\x25"
  "\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72"
  "\x2d\x63\x61\x6c\x6c\x3a\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64"
  "\x3f\x1e\x25\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x64\x65\x66\x69\x6e\x65\x20"
  "\x25\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65"
  "\x72\x2d\x63\x61\x6c\x6c\x3a\x75\x6e\x62\x6f\x75\x6e\x64\x3f\x1c"
  "\x25\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65"
  "\x72\x2d\x63\x61\x6c\x6c\x3a\x73\x65\x74\x21\x0f\x13\x11\x73\x63"
  "\x66\x67\x2a\x70\x63\x66\x67\x2d\x3e\x70\x63\x66\x67\x21\x18\x75"
  "\x73\x65\x2d\x70\x72\x65\x2f\x70\x6f\x73\x74\x2d\x69\x6e\x63\x72"
  "\x65\x6d\x65\x6e\x74\x3f\x1c\x61\x76\x61\x69\x6c\x61\x62\x6c\x65"
  "\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x73\x11\x76\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x3d\x77"
  "\x6f\x72\x64\x16\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x3e\x74\x79\x70\x65\x15\x72\x74\x6c\x3a\x6d\x61"
  "\x6b\x65\x2d\x63\x68\x61\x72\x2d\x3e\x61\x73\x63\x69\x69\x17\x72"
  "\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x3e"
  "\x64\x61\x74\x75\x6d\x19\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x3e\x61\x64\x64\x72\x65\x73\x73\x18\x72"
  "\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x66\x69\x78\x6e\x75\x6d\x2d\x3e"
  "\x6f\x62\x6a\x65\x63\x74\x19\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d"
  "\x66\x69\x78\x6e\x75\x6d\x2d\x3e\x61\x64\x64\x72\x65\x73\x73\x19"
  "\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x61\x64\x64\x72\x65\x73\x73"
  "\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x18\x72\x74\x6c\x3a\x6d\x61\x6b"
  "\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x66\x69\x78\x6e\x75\x6d"
  "\x17\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x66\x6c\x6f\x61\x74\x2d"
  "\x3e\x6f\x62\x6a\x65\x63\x74\x17\x72\x74\x6c\x3a\x6d\x61\x6b\x65"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x66\x6c\x6f\x61\x74\x16\x04"
  "\x05\x0f\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x67\x65\x74"
  "\x04\x06\x65\x72\x72\x6f\x72\x37\x05\x37\x03\x16\x72\x74\x6c\x3a"
  "\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x3f\x03\x07\x6c\x65\x6e\x67\x74\x68\x03\x09\x72\x65\x76\x65\x72"
  "\x73\x65\x21\x03\x21\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72"
  "\x65\x74\x65\x72\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x3e\x6f"
  "\x66\x66\x73\x65\x74\x02\x0c\x04\x10\x67\x65\x6e\x65\x72\x61\x6c"
  "\x2d\x63\x61\x72\x2d\x63\x64\x72\x04\x18\x6c\x69\x73\x74\x2d\x74"
  "\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x70\x6f\x73\x69\x74\x69\x76"
  "\x65\x04\x04\x6d\x61\x78\x02\x1a\x6d\x61\x6b\x65\x2d\x73\x74\x72"
  "\x6f\x6e\x67\x2d\x65\x71\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c"
  "\x65\x03\x1e\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x76\x61\x6c\x75"
  "\x65\x2d\x63\x6c\x61\x73\x73\x3d\x61\x64\x64\x72\x65\x73\x73\x3f"
  "\x04\x04\x0a\x6c\x69\x73\x74\x2d\x74\x61\x69\x6c\x05\x10\x68\x61"
  "\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x70\x75\x74\x21\x04\x0a\x6c"
  "\x69\x73\x74\x2d\x68\x65\x61\x64\x03\x1d\x6d\x61\x63\x68\x69\x6e"
  "\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x76\x61\x6c\x75\x65"
  "\x2d\x63\x6c\x61\x73\x73\x04\x1e\x76\x61\x6c\x75\x65\x2d\x63\x6c"
  "\x61\x73\x73\x2f\x61\x6e\x63\x65\x73\x74\x6f\x72\x2d\x6f\x72\x2d"
  "\x73\x65\x6c\x66\x3f\x15\x91\x02\xa4\x04\x80\x80\x04\x90\x02\xa2"
  "\x04\x81\x81\x02\x8f\x02\xa0\x04\x81\x81\x02\x8e\x02\x9e\x04\x81"
  "\x85\x02\x8d\x02\x9c\x04\x81\x85\x02\x8c\x02\x9a\x04\x81\x85\x02"
  "\x8b\x02\x98\x04\x81\x8f\x02\x8a\x02\x96\x04\x81\x85\x02\x89\x02"
  "\x94\x04\x81\x85\x02\x88\x02\x92\x04\x81\x8d\x02\x87\x02\x90\x04"
  "\x81\x8f\x02\x86\x02\x8e\x04\x81\x85\x02\x85\x02\x8c\x04\x81\x8d"
  "\x02\x84\x02\x8a\x04\x81\x8f\x02\x83\x02\x88\x04\x81\x8f\x02\x82"
  "\x02\x86\x04\x81\x8f\x02\x81\x02\x84\x04\x81\x93\x02\x80\x02\x82"
  "\x04\x81\x8f\x02\xff\x01\x80\x04\x81\x93\x02\xfe\x01\xfe\x03\x81"
  "\x97\x02\xfd\x01\xfc\x03\x81\x8f\x02\xfc\x01\xfa\x03\x81\x93\x02"
  "\xfb\x01\xf8\x03\x81\x97\x02\xfa\x01\xf6\x03\x81\x8f\x02\xf9\x01"
  "\xf4\x03\x81\x93\x02\xf8\x01\xf2\x03\x81\x97\x02\xf7\x01\xf0\x03"
  "\x81\x8f\x02\xf6\x01\xee\x03\x81\x93\x02\xf5\x01\xec\x03\x81\x97"
  "\x02\xf4\x01\xea\x03\x81\x8f\x02\xf3\x01\xe8\x03\x81\x93\x02\xf2"
  "\x01\xe6\x03\x81\x97\x02\xf1\x01\xe4\x03\x81\x8f\x02\xf0\x01\xe2"
  "\x03\x81\x85\x02\xef\x01\xe0\x03\x81\x93\x02\xee\x01\xde\x03\x81"
  "\x97\x02\xed\x01\xdc\x03\x81\x8f\x02\xec\x01\xda\x03\x81\x85\x02"
  "\xeb\x01\xd8\x03\x81\x93\x02\xea\x01\xd6\x03\x81\x97\x02\xe9\x01"
  "\xd4\x03\x81\x8f\x02\xe8\x01\xd2\x03\x81\x89\x02\xe7\x01\xd0\x03"
  "\x81\x93\x02\xe6\x01\xce\x03\x81\x97\x02\xe5\x01\xcc\x03\x81\x8f"
  "\x02\xe4\x01\xca\x03\x81\x85\x02\xe3\x01\xc8\x03\x81\x93\x02\xe2"
  "\x01\xc6\x03\x81\x97\x02\xe1\x01\xc4\x03\x81\x8f\x02\xe0\x01\xc2"
  "\x03\x87\x0c\xdf\x01\xc0\x03\x81\x97\x02\xde\x01\xbe\x03\x81\x8f"
  "\x02\xdd\x01\xbc\x03\x88\x0e\xdc\x01\xba\x03\x81\x8f\x02\xdb\x01"
  "\xb8\x03\x81\x85\x02\xda\x01\xb6\x03\x85\x08\xd9\x01\xb4\x03\x81"
  "\x8f\x02\xd8\x01\xb2\x03\x81\x85\x02\xd7\x01\xb0\x03\x81\x85\x02"
  "\xd6\x01\xae\x03\x85\x08\xd5\x01\xac\x03\x81\x8f\x02\xd4\x01\xaa"
  "\x03\x81\x85\x02\xd3\x01\xa8\x03\x81\x8b\x02\xd2\x01\xa6\x03\x81"
  "\x8f\x02\xd1\x01\xa4\x03\x81\x85\x02\xd0\x01\xa2\x03\x81\x83\x02"
  "\xcf\x01\xa0\x03\x81\x85\x02\xce\x01\x9e\x03\x81\x8b\x02\xcd\x01"
  "\x9c\x03\x81\x8f\x02\xcc\x01\x9a\x03\x83\x04\xcb\x01\x98\x03\x81"
  "\x85\x02\xca\x01\x96\x03\x81\x8b\x02\xc9\x01\x94\x03\x81\x89\x02"
  "\xc8\x01\x92\x03\x81\x8f\x02\xc7\x01\x90\x03\x81\x8b\x02\xc6\x01"
  "\x8e\x03\x81\x8f\x02\xc5\x01\x8c\x03\x81\x85\x02\xc4\x01\x8a\x03"
  "\x81\x8d\x02\xc3\x01\x88\x03\x81\x8f\x02\xc2\x01\x86\x03\x81\x85"
  "\x02\xc1\x01\x84\x03\x81\x85\x02\xc0\x01\x82\x03\x81\x89\x02\xbf"
  "\x01\x80\x03\x81\x8f\x02\xbe\x01\xfe\x02\x81\x85\x02\xbd\x01\xfc"
  "\x02\x81\x85\x02\xbc\x01\xfa\x02\x81\x8b\x02\xbb\x01\xf8\x02\x81"
  "\x8f\x02\xba\x01\xf6\x02\x81\x87\x02\xb9\x01\xf4\x02\x81\x8b\x02"
  "\xb8\x01\xf2\x02\x81\x89\x02\xb7\x01\xf0\x02\x81\x89\x02\xb6\x01"
  "\xee\x02\x81\x8b\x02\xb5\x01\xec\x02\x81\x8f\x02\xb4\x01\xea\x02"
  "\x81\x87\x02\xb3\x01\xe8\x02\x81\x89\x02\xb2\x01\xe6\x02\x81\x89"
  "\x02\xb1\x01\xe4\x02\x81\x85\x02\xb0\x01\xe2\x02\x81\x81\x02\xaf"
  "\x01\xe0\x02\x81\x89\x02\xae\x01\xde\x02\x81\x89\x02\xad\x01\xdc"
  "\x02\x81\x93\x02\xac\x01\xda\x02\x81\x8f\x02\xab\x01\xd8\x02\x81"
  "\x85\x02\xaa\x01\xd6\x02\x81\x85\x02\xa9\x01\xd4\x02\xff\xff\x03"
  "\xa8\x01\xd2\x02\xfd\xff\x03\xa7\x01\xd0\x02\x81\x89\x02\xa6\x01"
  "\xce\x02\xfd\xff\x03\xa5\x01\xcc\x02\xfd\xff\x03\xa4\x01\xca\x02"
  "\x81\x89\x02\xa3\x01\xc8\x02\x81\x85\x02\xa2\x01\xc6\x02\x84\x06"
  "\xa1\x01\xc4\x02\x81\x91\x02\xa0\x01\xc2\x02\x81\x93\x02\x9f\x01"
  "\xc0\x02\x81\x8f\x02\x9e\x01\xbe\x02\x81\x85\x02\x9d\x01\xbc\x02"
  "\x81\x85\x02\x9c\x01\xba\x02\x81\x85\x02\x9b\x01\xb8\x02\xfd\xff"
  "\x03\x9a\x01\xb6\x02\xfd\xff\x03\x99\x01\xb4\x02\xfd\xff\x03\x98"
  "\x01\xb2\x02\x81\x89\x02\x97\x01\xb0\x02\xfd\xff\x03\x96\x01\xae"
  "\x02\xfd\xff\x03\x95\x01\xac\x02\x81\x89\x02\x94\x01\xaa\x02\xff"
  "\xff\x03\x93\x01\xa8\x02\x81\x89\x02\x92\x01\xa6\x02\x81\x8f\x02"
  "\x91\x01\xa4\x02\xfd\xff\x03\x90\x01\xa2\x02\xfd\xff\x03\x8f\x01"
  "\xa0\x02\xfd\xff\x03\x8e\x01\x9e\x02\xff\xff\x03\x8d\x01\x9c\x02"
  "\x81\x85\x02\x8c\x01\x9a\x02\x81\x87\x02\x8b\x01\x98\x02\xfd\xff"
  "\x03\x8a\x01\x96\x02\xfd\xff\x03\x89\x01\x94\x02\xff\xff\x03\x88"
  "\x01\x92\x02\x81\x89\x02\x87\x01\x90\x02\x81\x8b\x02\x86\x01\x8e"
  "\x02\x81\x89\x02\x85\x01\x8c\x02\x81\x87\x02\x84\x01\x8a\x02\x81"
  "\x8f\x02\x83\x01\x88\x02\x81\x87\x02\x82\x01\x86\x02\x81\x93\x02"
  "\x81\x01\x84\x02\x81\x87\x02\x80\x01\x82\x02\x81\x89\x02\x7f\x80"
  "\x02\x81\x87\x02\x7e\xfe\x01\x81\x85\x02\x7d\xfc\x01\x81\x87\x02"
  "\x7c\xfa\x01\x81\x85\x02\x7b\xf8\x01\x81\x85\x02\x7a\xf6\x01\x81"
  "\x89\x02\x79\xf4\x01\x81\x87\x02\x78\xf2\x01\x81\x85\x02\x77\xf0"
  "\x01\x81\x85\x02\x76\xee\x01\x81\x87\x02\x75\xec\x01\x81\x8b\x02"
  "\x74\xea\x01\x81\x87\x02\x73\xe8\x01\x81\x8f\x02\x72\xe6\x01\x81"
  "\x91\x02\x71\xe4\x01\x81\x91\x02\x70\xe2\x01\x81\x83\x02\x6f\xe0"
  "\x01\x81\x83\x02\x6e\xde\x01\x81\x83\x02\x6d\xdc\x01\x81\x83\x02"
  "\x6c\xda\x01\x81\x97\x02\x6b\xd8\x01\x81\x97\x02\x6a\xd6\x01\x81"
  "\x91\x02\x69\xd4\x01\x81\x8f\x02\x68\xd2\x01\x81\x8d\x02\x67\xd0"
  "\x01\x81\x89\x02\x66\xce\x01\x81\x85\x02\x65\xcc\x01\x81\x85\x02"
  "\x64\xca\x01\x81\x85\x02\x63\xc8\x01\x81\x89\x02\x62\xc6\x01\x81"
  "\x87\x02\x61\xc4\x01\x81\x87\x02\x60\xc2\x01\x81\x85\x02\x5f\xc0"
  "\x01\x81\x89\x02\x5e\xbe\x01\x81\x89\x02\x5d\xbc\x01\x81\x85\x02"
  "\x5c\xba\x01\x81\x87\x02\x5b\xb8\x01\x81\x87\x02\x5a\xb6\x01\x81"
  "\x85\x02\x59\xb4\x01\x81\x87\x02\x58\xb2\x01\x81\x85\x02\x57\xb0"
  "\x01\x81\x85\x02\x56\xae\x01\x81\x87\x02\x55\xac\x01\x81\x89\x02"
  "\x54\xaa\x01\x81\x89\x02\x53\xa8\x01\x81\x87\x02\x52\xa6\x01\x81"
  "\x8f\x02\x51\xa4\x01\x81\x85\x02\x50\xa2\x01\x81\x8d\x02\x4f\xa0"
  "\x01\x81\x8d\x02\x4e\x9e\x01\x81\x8b\x02\x4d\x9c\x01\x81\x8d\x02"
  "\x4c\x9a\x01\x81\x8d\x02\x4b\x98\x01\x81\x8b\x02\x4a\x96\x01\x81"
  "\x95\x02\x49\x94\x01\x81\x95\x02\x48\x92\x01\x81\x91\x02\x47\x90"
  "\x01\x81\x89\x02\x46\x8e\x01\x81\x85\x02\x45\x8c\x01\x81\x89\x02"
  "\x44\x8a\x01\x81\x85\x02\x43\x88\x01\x81\x87\x02\x42\x86\x01\x81"
  "\x85\x02\x41\x84\x01\x81\x91\x02\x40\x82\x01\x81\x8b\x02\x3f\x80"
  "\x01\x81\x87\x02\x3e\x7e\x81\x8b\x02\x3d\x7c\x81\x89\x02\x3c\x7a"
  "\x81\x89\x02\x3b\x78\x81\x89\x02\x3a\x76\x81\x87\x02\x39\x74\x81"
  "\x8f\x02\x38\x72\x81\x85\x02\x37\x70\x81\x8b\x02\x36\x6e\x81\x91"
  "\x02\x35\x6c\x81\x91\x02\x34\x6a\x81\x91\x02\x33\x68\x81\x91\x02"
  "\x32\x66\x81\x8f\x02\x31\x64\x81\x8f\x02\x30\x62\x81\x8d\x02\x2f"
  "\x60\x81\x8d\x02\x2e\x5e\x81\x8d\x02\x2d\x5c\x81\x91\x02\x2c\x5a"
  "\x81\x91\x02\x2b\x58\x81\x91\x02\x2a\x56\x81\x91\x02\x29\x54\x81"
  "\x91\x02\x28\x52\x81\x8f\x02\x27\x50\x81\x8f\x02\x26\x4e\x81\x8d"
  "\x02\x25\x4c\x81\x8d\x02\x24\x4a\x81\x8d\x02\x23\x48\x81\x8b\x02"
  "\x22\x46\x81\x83\x02\x21\x44\x81\x8b\x02\x20\x42\x81\x8b\x02\x1f"
  "\x40\x81\x91\x02\x1e\x3e\x81\x89\x02\x1d\x3c\x81\x8d\x02\x1c\x3a"
  "\x81\x89\x02\x1b\x38\x81\x89\x02\x1a\x36\x81\x8b\x02\x19\x34\x81"
  "\x87\x02\x18\x32\x81\x8f\x02\x17\x30\x81\x8b\x02\x16\x2e\x81\x81"
  "\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x85\x02\x13\x28\x81\x81\x02"
  "\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81\x83\x02\x0f"
  "\x20\x81\x81\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x89\x02\x0c\x1a"
  "\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x81\x02\x09\x14\x81"
  "\x85\x02\x08\x12\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83"
  "\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x81\x02\x03\x08\x81\x83\x02"
  "\x02\x06\x81\x85\x02\x01\x04\x81\x83\x02\xa3\x04\xbd\x05";

SCHEME_OBJECT *
rtlcon_so_data_455992bcaaeb7039 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rtlcon_so_data_455992bcaaeb7039 [0]))), (sizeof (prog_rtlcon_so_data_455992bcaaeb7039)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_375]));
}

DECLARE_COMPILED_DATA_NS ("rtlcon.so", rtlcon_so_data_455992bcaaeb7039)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rtlcon.so", "da843c57e3487288")
