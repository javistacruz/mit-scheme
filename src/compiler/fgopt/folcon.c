/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:15-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define LABEL_1_11 13
#define LABEL_1_13 15
#define TAG_1_14 6
#define ENVIRONMENT_LABEL_1_3 28
#define DEBUGGING_LABEL_1_2 27
#define EXECUTE_CACHE_1_15 17
#define EXECUTE_CACHE_1_12 19
#define EXECUTE_CACHE_1_10 21
#define EXECUTE_CACHE_1_7 23
#define FREE_REFERENCE_1_0 26
#define FREE_REFERENCES_LABEL_1_0 16
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
folcon_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_1_4);
      goto fold_constants_8;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto loop_6;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fold_constants_12)
DEFLABEL (fold_constants_8)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [1]) = Rvl;
  goto loop_6;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd9.pObj));

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_15;

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_1_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_1_13);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (label_17)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define LABEL_2_8 7
#define LABEL_2_9 9
#define LABEL_2_12 11
#define LABEL_2_5 13
#define LABEL_2_14 15
#define LABEL_2_10 17
#define LABEL_2_16 19
#define LABEL_2_17 21
#define LABEL_2_18 23
#define LABEL_2_19 25
#define LABEL_2_20 27
#define LABEL_2_21 29
#define LABEL_2_22 31
#define ENVIRONMENT_LABEL_2_3 57
#define DEBUGGING_LABEL_2_2 56
#define OBJECT_2_11 55
#define OBJECT_2_10 54
#define OBJECT_2_9 53
#define OBJECT_2_8 52
#define OBJECT_2_7 51
#define OBJECT_2_6 50
#define OBJECT_2_5 49
#define OBJECT_2_4 48
#define OBJECT_2_3 47
#define OBJECT_2_2 46
#define OBJECT_2_1 45
#define OBJECT_2_0 44
#define EXECUTE_CACHE_2_15 33
#define EXECUTE_CACHE_2_13 35
#define EXECUTE_CACHE_2_11 37
#define EXECUTE_CACHE_2_6 39
#define FREE_REFERENCE_2_1 42
#define FREE_REFERENCE_2_0 43
#define FREE_REFERENCES_LABEL_2_0 32
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
folcon_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd78;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd44;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd53;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd50;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_2_4);
      goto eliminate_known_nodes_19;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_2_12);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_18;

    case 6:
      current_block = (Rpc - LABEL_2_14);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_2_16);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_2_17);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_2_18);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_2_19);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_2_20);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_2_21);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_2_22);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eliminate_known_nodes_32)
DEFLABEL (eliminate_known_nodes_19)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (lambda_33)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_2_5);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_60;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd20.Lng))))
    goto label_60;
  (Wrd7.Obj) = ((Wrd18.pObj) [12]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;

DEFLABEL (label_34)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_55;

DEFLABEL (label_54)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_2_2]))
    goto label_37;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_53;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_52)
  if ((Wrd7.Obj) == (current_block [OBJECT_2_2]))
    goto label_38;

DEFLABEL (label_37)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_36)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_51;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_50)
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_49;
  Wrd28 = Wrd32;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_47;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd42.Lng))))
    goto label_47;
  (Wrd34.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_46)
  (Wrd50.Obj) = (* (Rsp++));
  if ((Wrd34.Obj) == (Wrd50.Obj))
    goto label_41;
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_45;
  Wrd51 = Wrd55;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 10))
    goto label_43;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd65.Lng))))
    goto label_43;
  (Wrd57.Obj) = ((Wrd63.pObj) [1]);

DEFLABEL (label_42)
  (Wrd73.Obj) = (* (Rsp++));
  if (! ((Wrd57.Obj) == (Wrd73.Obj)))
    goto label_37;

DEFLABEL (label_41)
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 10))
    goto label_40;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd84.Lng))))
    goto label_40;
  (Wrd78.Obj) = (Rsp [0]);
  ((Wrd82.pObj) [10]) = (Wrd78.Obj);

DEFLABEL (label_39)
  Rvl = (current_block [OBJECT_2_11]);
  goto label_36;

DEFLABEL (label_40)
  (Wrd87.Obj) = (Rsp [1]);
  (Wrd88.Obj) = (current_block [OBJECT_2_9]);
  (Wrd89.Obj) = (Rsp [0]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_10]), 3);

DEFLABEL (label_30)
  goto label_39;

DEFLABEL (label_43)
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.Obj) = (current_block [OBJECT_2_8]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_29)
  (Wrd57.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_20])), (Wrd52.pObj));

DEFLABEL (label_28)
  (Wrd51.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.Obj) = (current_block [OBJECT_2_8]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_27)
  (Wrd34.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_18])), (Wrd29.pObj));

DEFLABEL (label_26)
  (Wrd28.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_7]), 1);

DEFLABEL (label_25)
  (Wrd19.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 1);

DEFLABEL (label_24)
  (Wrd7.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_59;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd39.Lng))))
    goto label_59;
  (Wrd31.Obj) = ((Wrd37.pObj) [17]);

DEFLABEL (label_58)
  if ((Wrd31.Obj) == (current_block [OBJECT_2_2]))
    goto label_54;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_57;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd59.Lng))))
    goto label_57;
  (Wrd53.Obj) = ((Wrd57.pObj) [20]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_56)
  (Wrd67.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_54;

DEFLABEL (label_57)
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.Obj) = (current_block [OBJECT_2_3]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (current_block [OBJECT_2_0]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_22)
  (Wrd31.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_2_5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_34;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_12 9
#define LABEL_3_13 11
#define LABEL_3_7 13
#define TAG_3_8 5
#define LABEL_3_10 15
#define LABEL_3_15 17
#define LABEL_3_17 19
#define LABEL_3_16 21
#define LABEL_3_19 23
#define LABEL_3_20 25
#define ENVIRONMENT_LABEL_3_3 43
#define DEBUGGING_LABEL_3_2 42
#define OBJECT_3_6 41
#define OBJECT_3_5 40
#define OBJECT_3_4 39
#define OBJECT_3_3 38
#define OBJECT_3_2 37
#define OBJECT_3_1 36
#define OBJECT_3_0 35
#define EXECUTE_CACHE_3_18 27
#define EXECUTE_CACHE_3_14 29
#define EXECUTE_CACHE_3_11 31
#define EXECUTE_CACHE_3_9 33
#define FREE_REFERENCES_LABEL_3_0 26
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
folcon_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_3_4);
      goto fold_combinations_21;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto restart_loop_17;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_3_12);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_3_13);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_3_7);
      goto lambda_31;

    case 6:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_19;

    case 7:
      current_block = (Rpc - LABEL_3_15);
      goto fold_loop_9;

    case 8:
      current_block = (Rpc - LABEL_3_17);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_3_19);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_3_20);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fold_combinations_29)
DEFLABEL (fold_combinations_21)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [2]) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd15.pObj) = (& (Rhp [-1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd15.pObj)));
  (Rsp [2]) = (Wrd16.Obj);
  goto restart_loop_17;

DEFLABEL (restart_loop_30)
DEFLABEL (restart_loop_17)
  INTERRUPT_CHECK (26, LABEL_3_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_3_0])))
    goto label_33;
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [0]);
  (Rsp [1]) = (Wrd49.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [3]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (label_33)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_37;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_36)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  ((Wrd28.pObj) [0]) = (Wrd24.Obj);
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_35;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd32.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_34)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  ((Wrd48.pObj) [0]) = (Wrd32.Obj);
  goto restart_loop_17;

DEFLABEL (label_35)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_24)
  (Wrd32.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_23)
  (Wrd9.Obj) = Rvl;
  goto label_36;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  goto fold_loop_9;

DEFLABEL (fold_loop_32)
DEFLABEL (fold_loop_9)
  INTERRUPT_CHECK (26, LABEL_3_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_3_0])))
    goto label_38;
  Rvl = (current_block [OBJECT_3_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_46;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_3_6]);
  ((Wrd10.pObj) [0]) = (Wrd11.Obj);

DEFLABEL (label_41)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [4]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_40;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd12.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_39)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  ((Wrd36.pObj) [0]) = (Wrd12.Obj);
  goto fold_loop_9;

DEFLABEL (label_40)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_26)
  (Wrd12.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [4]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_44;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd37.Obj) = ((Wrd43.pObj) [0]);

DEFLABEL (label_43)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [2]);
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  ((Wrd64.pObj) [0]) = (Wrd58.Obj);
  goto label_41;

DEFLABEL (label_44)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_27)
  (Wrd37.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define LABEL_4_8 11
#define LABEL_4_9 13
#define LABEL_4_10 15
#define LABEL_4_13 17
#define LABEL_4_12 19
#define LABEL_4_15 21
#define LABEL_4_17 23
#define LABEL_4_25 25
#define LABEL_4_18 27
#define LABEL_4_22 29
#define LABEL_4_23 31
#define LABEL_4_24 33
#define LABEL_4_20 35
#define LABEL_4_21 37
#define LABEL_4_28 39
#define LABEL_4_32 41
#define LABEL_4_33 43
#define LABEL_4_35 45
#define TAG_4_36 21
#define LABEL_4_38 47
#define LABEL_4_40 49
#define LABEL_4_41 51
#define ENVIRONMENT_LABEL_4_3 93
#define DEBUGGING_LABEL_4_2 92
#define OBJECT_4_9 91
#define OBJECT_4_8 90
#define OBJECT_4_7 89
#define OBJECT_4_6 88
#define OBJECT_4_5 87
#define OBJECT_4_4 86
#define OBJECT_4_3 85
#define OBJECT_4_2 84
#define OBJECT_4_1 83
#define OBJECT_4_0 82
#define EXECUTE_CACHE_4_42 53
#define EXECUTE_CACHE_4_39 55
#define EXECUTE_CACHE_4_37 57
#define EXECUTE_CACHE_4_34 59
#define EXECUTE_CACHE_4_31 61
#define EXECUTE_CACHE_4_30 63
#define EXECUTE_CACHE_4_29 65
#define EXECUTE_CACHE_4_27 67
#define EXECUTE_CACHE_4_26 69
#define EXECUTE_CACHE_4_19 71
#define EXECUTE_CACHE_4_16 73
#define EXECUTE_CACHE_4_14 75
#define EXECUTE_CACHE_4_11 77
#define FREE_REFERENCE_4_1 80
#define FREE_REFERENCE_4_0 81
#define FREE_REFERENCES_LABEL_4_0 52
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
folcon_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd53;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
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
      goto fold_combination_25;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_4_13);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_4_25);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_4_22);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_4_23);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_4_24);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_11;

    case 17:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_4_28);
      goto continuation_15;

    case 19:
      current_block = (Rpc - LABEL_4_32);
      goto continuation_21;

    case 20:
      current_block = (Rpc - LABEL_4_33);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_4_35);
      goto lambda_38;

    case 22:
      current_block = (Rpc - LABEL_4_38);
      goto continuation_16;

    case 23:
      current_block = (Rpc - LABEL_4_40);
      goto label_34;

    case 24:
      current_block = (Rpc - LABEL_4_41);
      goto label_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fold_combination_37)
DEFLABEL (fold_combination_25)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_55;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_55;
  (Wrd5.Obj) = ((Wrd11.pObj) [11]);

DEFLABEL (label_54)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_53;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_52)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_51;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd36.Lng))))
    goto label_51;
  (Wrd28.Obj) = ((Wrd34.pObj) [11]);

DEFLABEL (label_50)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_49;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_48)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_47;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd59.Lng))))
    goto label_47;
  (Wrd53.Obj) = ((Wrd57.pObj) [10]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_46)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_45;
  Wrd10 = Wrd14;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_27]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_41;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_6]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_31]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_20);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_43;
  Wrd17 = Wrd21;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 2);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_4_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_30]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_22);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_29]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_34]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_4_33);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_35])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [2]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_37]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_4_32);
  Rvl = (current_block [OBJECT_4_7]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_25])), (Wrd18.pObj));

DEFLABEL (label_33)
  (Wrd17.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_13])), (Wrd11.pObj));

DEFLABEL (label_32)
  (Wrd10.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.Obj) = (current_block [OBJECT_4_4]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_4_0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_29)
  (Wrd28.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_54;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_4_35);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_39]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_4_38);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_56;
  Rvl = (current_block [OBJECT_4_8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_60;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd18.Lng))))
    goto label_60;
  (Wrd10.Obj) = ((Wrd16.pObj) [12]);

DEFLABEL (label_59)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_58;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_57)
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd33.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_42]));

DEFLABEL (label_58)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_41]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 1);

DEFLABEL (label_35)
  (Wrd26.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_4_9]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_40]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_34)
  (Wrd10.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_9 9
#define LABEL_5_11 11
#define LABEL_5_12 13
#define LABEL_5_13 15
#define LABEL_5_15 17
#define LABEL_5_16 19
#define LABEL_5_18 21
#define ENVIRONMENT_LABEL_5_3 41
#define DEBUGGING_LABEL_5_2 40
#define OBJECT_5_6 39
#define OBJECT_5_5 38
#define OBJECT_5_4 37
#define OBJECT_5_3 36
#define OBJECT_5_2 35
#define OBJECT_5_1 34
#define OBJECT_5_0 33
#define EXECUTE_CACHE_5_17 23
#define EXECUTE_CACHE_5_14 25
#define EXECUTE_CACHE_5_10 27
#define EXECUTE_CACHE_5_8 29
#define EXECUTE_CACHE_5_6 31
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
folcon_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd63;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_5_4);
      goto maybe_fold_lvalueB_13;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_5_12);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_5_15);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_5_16);
      goto lambda_9;

    case 9:
      current_block = (Rpc - LABEL_5_18);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_fold_lvalueB_21)
DEFLABEL (maybe_fold_lvalueB_13)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_36;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd13.Lng))))
    goto label_36;
  (Wrd7.Obj) = ((Wrd11.pObj) [12]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_35)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_24;

DEFLABEL (label_23)
  (Wrd64.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd64.Obj);
  (Wrd65.Obj) = (current_block [OBJECT_5_3]);
  (Rsp [1]) = (Wrd65.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (label_24)
  if ((Wrd21.Obj) == (current_block [OBJECT_5_2]))
    goto label_23;
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_34;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd32.Lng) = ((Wrd34.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_34;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_33)
  (Rsp [0]) = (Wrd29.Obj);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_32;
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! ((Wrd63.Lng) == 0))
    goto label_29;

DEFLABEL (label_28)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  Rvl = (current_block [OBJECT_5_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_27;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_27;
  (Wrd7.Obj) = ((Wrd13.pObj) [6]);

DEFLABEL (label_26)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (label_27)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_5_6]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_18)
  (Wrd7.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd42.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd44.Obj);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd57.uLng) == 10)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_5]), 3);

DEFLABEL (label_31)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd55.Lng))))
    goto label_30;
  ((Wrd53.pObj) [12]) = (Wrd42.Obj);
  Rvl = (current_block [OBJECT_5_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_28;

DEFLABEL (label_34)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_16)
  (Wrd29.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_22)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_5_16);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_39;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd13.Lng))))
    goto label_39;
  (Wrd5.Obj) = ((Wrd11.pObj) [12]);

DEFLABEL (label_38)
  if ((Wrd5.Obj) == (current_block [OBJECT_5_2]))
    goto label_37;
  Rvl = (current_block [OBJECT_5_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (label_39)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_8 9
#define LABEL_6_6 11
#define LABEL_6_10 13
#define ENVIRONMENT_LABEL_6_3 26
#define DEBUGGING_LABEL_6_2 25
#define OBJECT_6_5 24
#define OBJECT_6_4 23
#define OBJECT_6_3 22
#define OBJECT_6_2 21
#define OBJECT_6_1 20
#define OBJECT_6_0 19
#define EXECUTE_CACHE_6_9 15
#define FREE_REFERENCE_6_0 18
#define FREE_REFERENCES_LABEL_6_0 14
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
folcon_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
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
      goto recompute_lvalue_passed_inB_4;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (recompute_lvalue_passed_inB_11)
DEFLABEL (recompute_lvalue_passed_inB_4)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_21;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd38.Lng))))
    goto label_21;
  ((Wrd36.pObj) [12]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_20)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_17;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd22.Lng))))
    goto label_17;
  (Wrd16.Obj) = ((Wrd20.pObj) [7]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_14;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd17.Lng))))
    goto label_14;
  (Wrd11.Obj) = (current_block [OBJECT_6_5]);
  ((Wrd15.pObj) [12]) = (Wrd11.Obj);

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_6_0]);
  (Wrd22.Obj) = (current_block [OBJECT_6_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 3);

DEFLABEL (label_9)
  goto label_13;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_6_4]);
  goto label_12;

DEFLABEL (label_17)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_6_2]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_7])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_6_0]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 3);

DEFLABEL (label_8)
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_8 5
#define LABEL_7_9 7
#define LABEL_7_6 9
#define LABEL_7_5 11
#define LABEL_7_13 13
#define LABEL_7_14 15
#define LABEL_7_15 17
#define LABEL_7_17 19
#define LABEL_7_19 21
#define LABEL_7_11 23
#define LABEL_7_18 25
#define LABEL_7_21 27
#define LABEL_7_22 29
#define ENVIRONMENT_LABEL_7_3 54
#define DEBUGGING_LABEL_7_2 53
#define OBJECT_7_5 52
#define OBJECT_7_4 51
#define OBJECT_7_3 50
#define OBJECT_7_2 49
#define OBJECT_7_1 48
#define OBJECT_7_0 47
#define EXECUTE_CACHE_7_23 31
#define EXECUTE_CACHE_7_20 33
#define EXECUTE_CACHE_7_16 35
#define EXECUTE_CACHE_7_12 37
#define EXECUTE_CACHE_7_10 39
#define EXECUTE_CACHE_7_7 41
#define FREE_REFERENCE_7_2 44
#define FREE_REFERENCE_7_1 45
#define FREE_REFERENCE_7_0 46
#define FREE_REFERENCES_LABEL_7_0 30
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
folcon_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd48;
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
      current_block = (Rpc - LABEL_7_4);
      goto constant_foldable_operatorP_14;

    case 1:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_7_9);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_7_13);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_7_14);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_7_15);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_7_17);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_7_19);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_7_21);
      goto label_20;

    case 13:
      current_block = (Rpc - LABEL_7_22);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constant_foldable_operatorP_24)
DEFLABEL (constant_foldable_operatorP_14)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd48.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_26;
  Wrd50 = Wrd54;

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_9])), (Wrd51.pObj));

DEFLABEL (label_22)
  (Wrd50.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_46)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_45)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;
  Rvl = (Wrd5.Obj);

DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_44;
  Wrd9 = Wrd13;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_42;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd23.Lng))))
    goto label_42;
  (Wrd15.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_41)
  (Wrd31.Obj) = (* (Rsp++));
  if (! ((Wrd15.Obj) == (Wrd31.Obj)))
    goto label_40;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_39;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_39;
  (Wrd9.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_37;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd36.Lng))))
    goto label_37;
  (Wrd30.Obj) = ((Wrd34.pObj) [20]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_36)
  (Wrd44.Obj) = (current_block [OBJECT_7_4]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_7_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_35;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd15.Lng))))
    goto label_35;
  (Wrd9.Obj) = ((Wrd13.pObj) [16]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_34)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_2]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_33;
  Wrd24 = Wrd28;

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_23]));

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_22])), (Wrd25.pObj));

DEFLABEL (label_21)
  (Wrd24.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_7_5]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_7_3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_7_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_18)
  (Wrd9.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_28;

DEFLABEL (label_42)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (current_block [OBJECT_7_0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_17)
  (Wrd15.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_13])), (Wrd10.pObj));

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_47)
  Rsp = (& (Rsp [1]));
  goto label_46;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_8 11
#define ENVIRONMENT_LABEL_8_3 24
#define DEBUGGING_LABEL_8_2 23
#define OBJECT_8_3 22
#define OBJECT_8_2 21
#define OBJECT_8_1 20
#define OBJECT_8_0 19
#define EXECUTE_CACHE_8_10 13
#define EXECUTE_CACHE_8_9 15
#define FREE_REFERENCE_8_0 18
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
folcon_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_8_4);
      goto constant_foldable_operator_value_4;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_8_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constant_foldable_operator_value_11)
DEFLABEL (constant_foldable_operator_value_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_20;
  Wrd5 = Wrd9;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_18;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_18;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_17)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_12;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (label_12)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_16;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd36.Lng))))
    goto label_16;
  (Wrd28.Obj) = ((Wrd34.pObj) [4]);

DEFLABEL (label_15)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_14;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd50.Lng))))
    goto label_14;
  (Wrd44.Obj) = ((Wrd48.pObj) [16]);

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (label_14)
  (Wrd53.Obj) = (current_block [OBJECT_8_3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_9)
  (Wrd44.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_8_2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_8)
  (Wrd28.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_8_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define LABEL_9_9 11
#define LABEL_9_10 13
#define LABEL_9_11 15
#define ENVIRONMENT_LABEL_9_3 24
#define DEBUGGING_LABEL_9_2 23
#define OBJECT_9_3 22
#define OBJECT_9_2 21
#define OBJECT_9_1 20
#define OBJECT_9_0 19
#define EXECUTE_CACHE_9_6 17
#define FREE_REFERENCES_LABEL_9_0 16
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
folcon_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_9_4);
      goto arity_correctP_8;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_9_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_9_11);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (arity_correctP_16)
DEFLABEL (arity_correctP_8)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd9.uLng) == 1))
    goto label_29;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_28)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_27;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_27;
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd59.Lng) < (Wrd60.Lng))
    goto label_18;

DEFLABEL (label_26)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_25;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_24)
  if ((Wrd23.Obj) == (current_block [OBJECT_9_2]))
    goto label_19;
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_23;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_22)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_21;
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_21;
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if ((Wrd56.Lng) > (Wrd57.Lng))
    goto label_18;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_9_3]);
  goto label_17;

DEFLABEL (label_18)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_17)
DEFLABEL (label_20)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_18;

DEFLABEL (label_23)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_13)
  (Wrd33.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_12)
  (Wrd23.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_18;

DEFLABEL (label_29)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_28;

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
folcon_so_8aa2580651c9fd26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2,
	2,
	1,
	2,
	1,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 9)
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

static const struct liarc_code_S arr_decl_folcon_so_8aa2580651c9fd26 [9] =
  {
    { "folcon_so_code_1", 7, folcon_so_code_1 },
    { "folcon_so_code_2", 15, folcon_so_code_2 },
    { "folcon_so_code_3", 12, folcon_so_code_3 },
    { "folcon_so_code_4", 25, folcon_so_code_4 },
    { "folcon_so_code_5", 10, folcon_so_code_5 },
    { "folcon_so_code_6", 6, folcon_so_code_6 },
    { "folcon_so_code_7", 14, folcon_so_code_7 },
    { "folcon_so_code_8", 5, folcon_so_code_8 },
    { "folcon_so_code_9", 7, folcon_so_code_9 }
  };

int
decl_folcon_so_8aa2580651c9fd26 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_folcon_so_8aa2580651c9fd26);
  return (0);
}

DECLARE_COMPILED_CODE ("folcon.so", 3, decl_folcon_so_8aa2580651c9fd26, folcon_so_8aa2580651c9fd26)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_folcon_so_data_8aa2580651c9fd26 [2256] =
  "\x64\x17\xf7\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x24\x28\x0d"
  "\x28\x0d\xb9\x28\x0d\xba\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88\x07"
  "\xc3\xbc\x02\x80\xc1\xbd\xc1\xbe\x02\x0d\x02\x08\xc2\xbf\x02\x0d"
  "\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x83\x88\x07\x1d\xb6\xb5\x0d\x0c\x08\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x84\x88\x02\x1d\x07\x0c\xc2\x02\xb5\xb6\xb7\x02\x0d\x1c\x0d"
  "\x1c\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x85\xb4\x1d"
  "\x0c\x0d\x1c\xb7\x02\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1b\x07\xb7"
  "\x86\xb4\x02\x0d\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x0d\x02\x83"
  "\xb7\x80\x0d\x0d\xbc\x0d\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x83\xb7\x80\xb4\x24\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x08\xb6\xb5\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xbf"
  "\x88\xb7\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\xb3\x2a\x17\x1b\x1b\x1b\x1b\x1b\x1b\xb2\xb1\x0d\x17\x28"
  "\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5a\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x2f\x66\x67\x6f\x70\x74\x2f\x66\x6f\x6c\x63\x6f"
  "\x6e\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x19\x61\x70\x70\x6c"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74"
  "\x69\x6f\x6e\x3f\x02\x04\x18\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e"
  "\x73\x66\x6f\x72\x6d\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x03\x16"
  "\x65\x6c\x69\x6d\x69\x6e\x61\x74\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d"
  "\x6e\x6f\x64\x65\x73\x03\x12\x66\x6f\x6c\x64\x2d\x63\x6f\x6d\x62"
  "\x69\x6e\x61\x74\x69\x6f\x6e\x73\x04\x10\x74\x72\x61\x6e\x73\x6d"
  "\x69\x74\x2d\x76\x61\x6c\x75\x65\x73\x05\x0a\x10\x81\x87\x02\x09"
  "\x0e\x81\x87\x02\x08\x0c\x81\x85\x02\x07\x0a\x81\x85\x02\x06\x08"
  "\x81\x85\x02\x05\x06\x81\x87\x02\x04\x04\x84\x06\x0f\x1d\x02\x0c"
  "\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x0a\x04\x63\x61\x72"
  "\x04\x63\x64\x72\x0c\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74\x14\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x11\x0e\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x74\x61\x67\x0d\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x2d\x74\x61\x67\x03\x04\x18\x6c\x69\x73\x74\x2d\x74\x72"
  "\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x6e\x65\x67\x61\x74\x69\x76\x65"
  "\x03\x0e\x6c\x76\x61\x6c\x75\x65\x2d\x76\x61\x6c\x75\x65\x73\x04"
  "\x05\x6d\x65\x6d\x71\x09\x03\x0a\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x3f\x05\x19\x20\x81\x85\x02\x18\x1e\x81\x87\x02\x17\x1c\x81\x85"
  "\x02\x16\x1a\x81\x87\x02\x15\x18\x81\x85\x02\x14\x16\x81\x85\x02"
  "\x13\x14\x81\x85\x02\x12\x12\x81\x83\x02\x11\x10\x81\x83\x02\x10"
  "\x0e\x83\x04\x0f\x0c\x81\x85\x02\x0e\x0a\x81\x83\x02\x0d\x08\x81"
  "\x83\x02\x0c\x06\x81\x83\x02\x0b\x04\x83\x04\x1f\x3a\x0a\x02\x02"
  "\x09\x63\x6f\x6e\x74\x69\x6e\x75\x65\x25\x53\x6b\x69\x70\x20\x74"
  "\x68\x69\x73\x20\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x66\x6f\x6c"
  "\x64\x69\x6e\x67\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x05\x14"
  "\x77\x69\x74\x68\x2d\x73\x69\x6d\x70\x6c\x65\x2d\x72\x65\x73\x74"
  "\x61\x72\x74\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x04\x09\x72"
  "\x65\x74\x75\x72\x6e\x2d\x32\x03\x11\x66\x6f\x6c\x64\x2d\x63\x6f"
  "\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x0b\x05\x25\x1a\x81\x83\x02"
  "\x24\x18\x81\x83\x02\x23\x16\x81\x83\x02\x22\x14\x81\x85\x02\x21"
  "\x12\x81\x83\x02\x20\x10\x81\x87\x02\x1f\x0e\x81\x83\x02\x1e\x0c"
  "\x81\x87\x02\x1d\x0a\x81\x87\x02\x1c\x08\x81\x87\x02\x1b\x06\x81"
  "\x87\x02\x1a\x04\x83\x04\x19\x2c\x0c\x02\x0c\x02\x2c\x66\x6f\x6c"
  "\x64\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x3a\x20\x57"
  "\x72\x6f\x6e\x67\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x61"
  "\x72\x67\x75\x6d\x65\x6e\x74\x73\x06\x61\x70\x70\x6c\x79\x0a\x0b"
  "\x17\x72\x76\x61\x6c\x75\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d\x63\x6f"
  "\x6e\x73\x74\x61\x6e\x74\x3f\x0d\x16\x72\x76\x61\x6c\x75\x65\x2d"
  "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x76\x61\x6c\x75\x65\x0e\x03"
  "\x03\x1c\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x66\x6f\x6c\x64\x61"
  "\x62\x6c\x65\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x3f\x0f\x04\x09"
  "\x66\x6f\x72\x2d\x61\x6c\x6c\x3f\x03\x21\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x2d\x66\x6f\x6c\x64\x61\x62\x6c\x65\x2d\x6f\x70\x65\x72"
  "\x61\x74\x6f\x72\x2d\x76\x61\x6c\x75\x65\x10\x03\x07\x6c\x65\x6e"
  "\x67\x74\x68\x04\x04\x6d\x61\x70\x04\x0f\x61\x72\x69\x74\x79\x2d"
  "\x63\x6f\x72\x72\x65\x63\x74\x3f\x11\x04\x16\x63\x6f\x6d\x62\x69"
  "\x6e\x61\x74\x69\x6f\x6e\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x21"
  "\x03\x0e\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x05"
  "\x06\x65\x72\x72\x6f\x72\x12\x03\x0e\x72\x76\x61\x6c\x75\x65\x2d"
  "\x76\x61\x6c\x75\x65\x73\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68"
  "\x13\x03\x12\x75\x6e\x69\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x3f\x04\x13\x6d\x61\x79\x62\x65\x2d\x66\x6f\x6c\x64"
  "\x2d\x6c\x76\x61\x6c\x75\x65\x21\x14\x0e\x3e\x34\x81\x87\x02\x3d"
  "\x32\x81\x87\x02\x3c\x30\x81\x85\x02\x3b\x2e\x81\x85\x02\x3a\x2c"
  "\x81\x8d\x02\x39\x2a\x81\x8b\x02\x38\x28\x81\x8b\x02\x37\x26\x81"
  "\x8d\x02\x36\x24\x81\x8b\x02\x35\x22\x81\x8f\x02\x34\x20\x81\x8d"
  "\x02\x33\x1e\x81\x8b\x02\x32\x1c\x81\x8d\x02\x31\x1a\x81\x93\x02"
  "\x30\x18\x81\x8b\x02\x2f\x16\x81\x89\x02\x2e\x14\x81\x89\x02\x2d"
  "\x12\x81\x8b\x02\x2c\x10\x81\x89\x02\x2b\x0e\x81\x87\x02\x2a\x0c"
  "\x81\x85\x02\x29\x0a\x81\x85\x02\x28\x08\x81\x83\x02\x27\x06\x81"
  "\x83\x02\x26\x04\x83\x04\x33\x5e\x15\x02\x02\x2a\x6d\x61\x79\x62"
  "\x65\x2d\x66\x6f\x6c\x64\x2d\x6c\x76\x61\x6c\x75\x65\x21\x3a\x20"
  "\x46\x6f\x6c\x64\x69\x6e\x67\x20\x61\x20\x6e\x6f\x6e\x20\x73\x6f"
  "\x75\x72\x63\x65\x21\x0a\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x16"
  "\x0c\x04\x17\x6c\x76\x61\x6c\x75\x65\x2d\x63\x6f\x6e\x6e\x65\x63"
  "\x74\x21\x3a\x72\x76\x61\x6c\x75\x65\x03\x14\x72\x65\x73\x65\x74"
  "\x2d\x6c\x76\x61\x6c\x75\x65\x2d\x63\x61\x63\x68\x65\x21\x04\x12"
  "\x03\x1c\x72\x65\x63\x6f\x6d\x70\x75\x74\x65\x2d\x6c\x76\x61\x6c"
  "\x75\x65\x2d\x70\x61\x73\x73\x65\x64\x2d\x69\x6e\x21\x12\x04\x13"
  "\x06\x48\x16\x81\x83\x02\x47\x14\x83\x04\x46\x12\x81\x87\x02\x45"
  "\x10\x81\x87\x02\x44\x0e\x81\x87\x02\x43\x0c\x81\x87\x02\x42\x0a"
  "\x81\x85\x02\x41\x08\x81\x85\x02\x40\x06\x81\x85\x02\x3f\x04\x84"
  "\x06\x15\x2a\x13\x02\x16\x0c\x12\x6c\x76\x61\x6c\x75\x65\x2d\x70"
  "\x61\x73\x73\x65\x64\x2d\x69\x6e\x3f\x02\x04\x0e\x74\x68\x65\x72"
  "\x65\x2d\x65\x78\x69\x73\x74\x73\x3f\x02\x4e\x0e\x81\x83\x02\x4d"
  "\x0c\x81\x83\x02\x4c\x0a\x81\x87\x02\x4b\x08\x81\x85\x02\x4a\x06"
  "\x81\x83\x02\x49\x04\x83\x04\x0d\x1b\x16\x02\x08\x10\x11\x75\x73"
  "\x75\x61\x6c\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x14\x14"
  "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x73\x0e\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x61"
  "\x67\x13\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x73\x04\x03\x0d\x04\x09\x03\x0e\x03\x1d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x74\x6f\x2d\x6b\x6e\x6f\x77\x6e\x2d"
  "\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x3f\x03\x15\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x04"
  "\x05\x61\x73\x73\x71\x07\x5c\x1e\x81\x85\x02\x5b\x1c\x81\x83\x02"
  "\x5a\x1a\x81\x83\x02\x59\x18\x81\x85\x02\x58\x16\x81\x85\x02\x57"
  "\x14\x81\x85\x02\x56\x12\x81\x85\x02\x55\x10\x81\x87\x02\x54\x0e"
  "\x81\x85\x02\x53\x0c\x81\x83\x02\x52\x0a\x81\x85\x02\x51\x08\x81"
  "\x85\x02\x50\x06\x81\x83\x02\x4f\x04\x83\x04\x1d\x37\x0d\x02\x09"
  "\x10\x02\x03\x1a\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x75\x73\x75"
  "\x61\x6c\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x03\x0e\x03"
  "\x61\x0c\x81\x83\x02\x60\x0a\x81\x83\x02\x5f\x08\x81\x85\x02\x5e"
  "\x06\x81\x83\x02\x5d\x04\x83\x04\x0b\x19\x0e\x02\x0a\x03\x10\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x02\x68"
  "\x10\x81\x87\x02\x67\x0e\x81\x87\x02\x66\x0c\x81\x87\x02\x65\x0a"
  "\x81\x87\x02\x64\x08\x81\x87\x02\x63\x06\x81\x85\x02\x62\x04\x84"
  "\x06\x0f\x19\x09\x0a\x09\x04\x0e\x04\x0d\x04\x16\x04\x13\x04\x15"
  "\x04\x0c\x04\x0a\x04\x04\x0a\x11\x10\x0f\x12\x14\x0b\x0f\x66\x6f"
  "\x6c\x64\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x73\x0a\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03"
  "\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
folcon_so_data_8aa2580651c9fd26 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_folcon_so_data_8aa2580651c9fd26 [0]))), (sizeof (prog_folcon_so_data_8aa2580651c9fd26)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("folcon.so", folcon_so_data_8aa2580651c9fd26)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("folcon.so", "25554cd76fd3cdae")
