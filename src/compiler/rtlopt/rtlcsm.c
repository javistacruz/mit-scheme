/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:25-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 12
#define DEBUGGING_LABEL_1_2 11
#define EXECUTE_CACHE_1_6 7
#define FREE_REFERENCE_1_0 10
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto merge_common_suffixesB_0;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_common_suffixesB_4)
DEFLABEL (merge_common_suffixesB_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_9 9
#define LABEL_2_8 11
#define ENVIRONMENT_LABEL_2_3 21
#define DEBUGGING_LABEL_2_2 20
#define OBJECT_2_2 19
#define OBJECT_2_1 18
#define OBJECT_2_0 17
#define EXECUTE_CACHE_2_10 13
#define EXECUTE_CACHE_2_7 15
#define FREE_REFERENCES_LABEL_2_0 12
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_2_4);
      goto merge_suffixes_of_rgraphB_8;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_suffixes_of_rgraphB_12)
DEFLABEL (merge_suffixes_of_rgraphB_8)
  INTERRUPT_CHECK (26, LABEL_2_4);
  goto loop_6;

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_2_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_2_0])))
    goto label_14;
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_15)
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_8);
  Rsp = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (label_16)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_10 7
#define LABEL_3_13 9
#define LABEL_3_14 11
#define LABEL_3_16 13
#define LABEL_3_7 15
#define LABEL_3_8 17
#define LABEL_3_20 19
#define LABEL_3_21 21
#define LABEL_3_22 23
#define LABEL_3_15 25
#define LABEL_3_17 27
#define TAG_3_18 12
#define LABEL_3_11 29
#define LABEL_3_25 31
#define LABEL_3_26 33
#define ENVIRONMENT_LABEL_3_3 52
#define DEBUGGING_LABEL_3_2 51
#define OBJECT_3_5 50
#define OBJECT_3_4 49
#define OBJECT_3_3 48
#define OBJECT_3_2 47
#define OBJECT_3_1 46
#define OBJECT_3_0 45
#define EXECUTE_CACHE_3_24 35
#define EXECUTE_CACHE_3_23 37
#define EXECUTE_CACHE_3_19 39
#define EXECUTE_CACHE_3_12 41
#define EXECUTE_CACHE_3_9 43
#define FREE_REFERENCES_LABEL_3_0 34
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_3_4);
      goto merge_suffixesB_18;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_31;

    case 2:
      current_block = (Rpc - LABEL_3_10);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_3_13);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_3_14);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_3_16);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_17;

    case 7:
      current_block = (Rpc - LABEL_3_8);
      goto lambda_16;

    case 8:
      current_block = (Rpc - LABEL_3_20);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_3_21);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_3_22);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_3_17);
      goto lambda_32;

    case 13:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_2;

    case 14:
      current_block = (Rpc - LABEL_3_25);
      goto label_27;

    case 15:
      current_block = (Rpc - LABEL_3_26);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_suffixesB_30)
DEFLABEL (merge_suffixesB_18)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_3_0]))
    goto label_40;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_39;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_38)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_37;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_36)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_35;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_34)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_17])));
  Rhp += 2;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd39 = Wrd36;
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [2]);
  ((Wrd39.pObj) [2]) = (Wrd42.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  ((Wrd39.pObj) [3]) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (label_35)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_20)
  (Wrd7.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_46;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_45)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [3]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [2]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_44;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_43)
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_42;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_41)
  (Rsp [3]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (label_42)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_28)
  (Wrd17.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_27)
  (Wrd8.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (lambda_33)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_3_8);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_55;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_54)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_53;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd20.Lng))))
    goto label_53;
  (Wrd15.Obj) = ((Wrd18.pObj) [9]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_52)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_51;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_50)
  (Wrd36.Obj) = (* (Rsp++));
  if ((Wrd27.Obj) == (Wrd36.Obj))
    goto label_48;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_47;

DEFLABEL (label_48)
  Rvl = (current_block [OBJECT_3_5]);

DEFLABEL (label_47)
DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_26)
  (Wrd27.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd23.Obj) = (current_block [OBJECT_3_3]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_54;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_3_17);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define LABEL_4_8 7
#define ENVIRONMENT_LABEL_4_3 16
#define DEBUGGING_LABEL_4_2 15
#define EXECUTE_CACHE_4_10 9
#define EXECUTE_CACHE_4_9 11
#define EXECUTE_CACHE_4_7 13
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_4_4);
      goto replace_suffixesB_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (replace_suffixesB_5)
DEFLABEL (replace_suffixesB_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_11 11
#define LABEL_5_9 13
#define LABEL_5_10 15
#define LABEL_5_13 17
#define ENVIRONMENT_LABEL_5_3 34
#define DEBUGGING_LABEL_5_2 33
#define OBJECT_5_5 32
#define OBJECT_5_4 31
#define OBJECT_5_3 30
#define OBJECT_5_2 29
#define OBJECT_5_1 28
#define OBJECT_5_0 27
#define EXECUTE_CACHE_5_15 19
#define EXECUTE_CACHE_5_14 21
#define EXECUTE_CACHE_5_12 23
#define EXECUTE_CACHE_5_8 25
#define FREE_REFERENCES_LABEL_5_0 18
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_5_4);
      goto split_suffix_blockB_9;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (split_suffix_blockB_15)
DEFLABEL (split_suffix_blockB_9)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_21;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_20)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_19;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_18)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_17;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_17;
  (Wrd13.Obj) = ((Wrd17.pObj) [9]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (label_17)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_5_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (Wrd5.Obj) = (current_block [OBJECT_5_2]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_23;

DEFLABEL (label_22)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_5]), 3);

DEFLABEL (label_23)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd18.Lng))))
    goto label_22;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [9]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_5_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_8 9
#define ENVIRONMENT_LABEL_6_3 19
#define DEBUGGING_LABEL_6_2 18
#define OBJECT_6_0 17
#define EXECUTE_CACHE_6_10 11
#define EXECUTE_CACHE_6_9 13
#define EXECUTE_CACHE_6_7 15
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_6_4);
      goto replace_suffix_blockB_4;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (replace_suffix_blockB_8)
DEFLABEL (replace_suffix_blockB_4)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_9)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_8 9
#define ENVIRONMENT_LABEL_7_3 20
#define DEBUGGING_LABEL_7_2 19
#define EXECUTE_CACHE_7_11 11
#define EXECUTE_CACHE_7_10 13
#define EXECUTE_CACHE_7_9 15
#define EXECUTE_CACHE_7_7 17
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_7_4);
      goto rgraph_matching_suffixes_3;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rgraph_matching_suffixes_6)
DEFLABEL (rgraph_matching_suffixes_3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_7_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_5 7
#define LABEL_8_12 9
#define LABEL_8_7 11
#define TAG_8_8 4
#define LABEL_8_10 13
#define LABEL_8_17 15
#define LABEL_8_11 17
#define LABEL_8_18 19
#define LABEL_8_14 21
#define LABEL_8_16 23
#define ENVIRONMENT_LABEL_8_3 43
#define DEBUGGING_LABEL_8_2 42
#define OBJECT_8_4 41
#define OBJECT_8_3 40
#define OBJECT_8_2 39
#define OBJECT_8_1 38
#define OBJECT_8_0 37
#define EXECUTE_CACHE_8_21 25
#define EXECUTE_CACHE_8_20 27
#define EXECUTE_CACHE_8_19 29
#define EXECUTE_CACHE_8_15 31
#define EXECUTE_CACHE_8_13 33
#define EXECUTE_CACHE_8_9 35
#define FREE_REFERENCES_LABEL_8_0 24
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd35;
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
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_8_4);
      goto rgraph_bblock_classes_14;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_8_12);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_8_7);
      goto lambda_22;

    case 5:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_8_17);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_8_11);
      goto lambda_7;

    case 8:
      current_block = (Rpc - LABEL_8_18);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_8_14);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_8_16);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rgraph_bblock_classes_21)
DEFLABEL (rgraph_bblock_classes_14)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd9.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_29;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd26.Lng))))
    goto label_29;
  (Wrd20.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_28)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_7])));
  Rhp += 2;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  Wrd38 = Wrd35;
  (Wrd39.Obj) = (Rsp [3]);
  ((Wrd38.pObj) [2]) = (Wrd39.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  ((Wrd38.pObj) [3]) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_27;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_25;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_8_16);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_21]));

DEFLABEL (label_25)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.Obj) = (current_block [OBJECT_8_1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_8_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

DEFLABEL (label_30)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (lambda_23)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_8_11);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_35;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_34)
  if ((Wrd5.Obj) == (current_block [OBJECT_8_0]))
    goto label_32;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (current_block [OBJECT_8_4]);

DEFLABEL (label_31)
DEFLABEL (label_33)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 1);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define LABEL_9_10 11
#define LABEL_9_11 13
#define LABEL_9_9 15
#define LABEL_9_12 17
#define LABEL_9_13 19
#define ENVIRONMENT_LABEL_9_3 30
#define DEBUGGING_LABEL_9_2 29
#define OBJECT_9_5 28
#define OBJECT_9_4 27
#define OBJECT_9_3 26
#define OBJECT_9_2 25
#define OBJECT_9_1 24
#define OBJECT_9_0 23
#define EXECUTE_CACHE_9_6 21
#define FREE_REFERENCES_LABEL_9_0 20
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_9_4);
      goto add_sblock_to_classesB_16;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto loop_13;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_9_12);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_9_13);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_sblock_to_classesB_24)
DEFLABEL (add_sblock_to_classesB_16)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_27;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_26)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto loop_13;

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (loop_25)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_9_8);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_9_1]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_38;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_37;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_36)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_35;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (Wrd6.Obj) = (Rsp [2]);
  if ((Wrd6.Obj) == Rvl)
    goto label_30;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_29;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_13;

DEFLABEL (label_29)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd17.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd17.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_33;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_32)
  (Wrd30.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Rsp [4]) = (Wrd27.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_31;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = (Rsp [1]);
  ((Wrd33.pObj) [0]) = (Wrd34.Obj);
  Rvl = (current_block [OBJECT_9_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 2);

DEFLABEL (label_33)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 1);

DEFLABEL (label_22)
  (Wrd18.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 1);

DEFLABEL (label_19)
  (Wrd10.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd26.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Rsp [4]) = (Wrd32.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_39;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = (Rsp [1]);
  ((Wrd38.pObj) [1]) = (Wrd39.Obj);
  Rvl = (current_block [OBJECT_9_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_39)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define LABEL_10_9 9
#define LABEL_10_10 11
#define LABEL_10_11 13
#define LABEL_10_12 15
#define LABEL_10_14 17
#define LABEL_10_15 19
#define LABEL_10_13 21
#define LABEL_10_16 23
#define ENVIRONMENT_LABEL_10_3 38
#define DEBUGGING_LABEL_10_2 37
#define OBJECT_10_7 36
#define OBJECT_10_6 35
#define OBJECT_10_5 34
#define OBJECT_10_4 33
#define OBJECT_10_3 32
#define OBJECT_10_2 31
#define OBJECT_10_1 30
#define OBJECT_10_0 29
#define EXECUTE_CACHE_10_8 25
#define EXECUTE_CACHE_10_6 27
#define FREE_REFERENCES_LABEL_10_0 24
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_10_4);
      goto add_pblock_to_classesB_20;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto loop_17;

    case 5:
      current_block = (Rpc - LABEL_10_11);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_10_12);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_10_14);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_10_15);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_10_16);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_pblock_to_classesB_28)
DEFLABEL (add_pblock_to_classesB_20)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_31;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_30)
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto loop_17;

DEFLABEL (label_31)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (loop_29)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_10_10);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_10_1]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_46;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_45;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_44)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_43;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_42)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (Wrd6.Obj) = (Rsp [3]);
  if (! ((Wrd6.Obj) == Rvl))
    goto label_41;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_10_14);
  (Wrd25.Obj) = (Rsp [4]);
  if ((Wrd25.Obj) == Rvl)
    goto label_33;
  (Wrd24.Obj) = (current_block [OBJECT_10_6]);
  goto label_32;

DEFLABEL (label_33)
  (Wrd24.Obj) = (current_block [OBJECT_10_5]);

DEFLABEL (label_32)
DEFLABEL (label_40)
  Rsp = (& (Rsp [1]));
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd27.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd27.Obj);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_36;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);

DEFLABEL (label_35)
  (Wrd40.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Rsp [5]) = (Wrd37.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_34;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = (Rsp [1]);
  ((Wrd43.pObj) [0]) = (Wrd44.Obj);
  Rvl = (current_block [OBJECT_10_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 2);

DEFLABEL (label_36)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 1);

DEFLABEL (label_26)
  (Wrd28.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_39;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd9.Obj);
  goto loop_17;

DEFLABEL (label_39)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_25)
  (Wrd9.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  Rsp = (& (Rsp [1]));
  goto label_37;

DEFLABEL (label_43)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 1);

DEFLABEL (label_23)
  (Wrd7.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd27.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Rsp [5]) = (Wrd33.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_47;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = (Rsp [1]);
  ((Wrd39.pObj) [1]) = (Wrd40.Obj);
  Rvl = (current_block [OBJECT_10_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_47)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_8 9
#define LABEL_11_6 11
#define LABEL_11_10 13
#define LABEL_11_12 15
#define LABEL_11_11 17
#define ENVIRONMENT_LABEL_11_3 27
#define DEBUGGING_LABEL_11_2 26
#define OBJECT_11_2 25
#define OBJECT_11_1 24
#define OBJECT_11_0 23
#define EXECUTE_CACHE_11_13 19
#define EXECUTE_CACHE_11_9 21
#define FREE_REFERENCES_LABEL_11_0 18
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd30;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_11_4);
      goto initial_bblock_matches_12;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto loop_10;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_11_10);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_11_12);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initial_bblock_matches_19)
DEFLABEL (initial_bblock_matches_12)
  INTERRUPT_CHECK (26, LABEL_11_4);
  goto loop_10;

DEFLABEL (loop_20)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_11_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_21;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_30;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_29)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_28;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [2]));
  if (Rvl == (current_block [OBJECT_11_0]))
    goto label_24;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_23;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_22)
  goto loop_10;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_16)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_26;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_25)
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  goto label_22;

DEFLABEL (label_26)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_17)
  (Wrd30.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd30.Obj));
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define TAG_12_7 2
#define LABEL_12_9 9
#define LABEL_12_19 11
#define LABEL_12_10 13
#define LABEL_12_20 15
#define LABEL_12_21 17
#define LABEL_12_11 19
#define LABEL_12_12 21
#define LABEL_12_24 23
#define LABEL_12_25 25
#define LABEL_12_27 27
#define LABEL_12_28 29
#define LABEL_12_29 31
#define LABEL_12_30 33
#define LABEL_12_31 35
#define LABEL_12_32 37
#define LABEL_12_33 39
#define LABEL_12_34 41
#define LABEL_12_14 43
#define LABEL_12_15 45
#define LABEL_12_37 47
#define LABEL_12_16 49
#define TAG_12_17 23
#define LABEL_12_38 51
#define LABEL_12_23 53
#define LABEL_12_39 55
#define LABEL_12_35 57
#define TAG_12_36 27
#define LABEL_12_42 59
#define LABEL_12_40 61
#define TAG_12_41 29
#define LABEL_12_43 63
#define LABEL_12_44 65
#define LABEL_12_45 67
#define LABEL_12_46 69
#define ENVIRONMENT_LABEL_12_3 90
#define DEBUGGING_LABEL_12_2 89
#define OBJECT_12_5 88
#define OBJECT_12_4 87
#define OBJECT_12_3 86
#define OBJECT_12_2 85
#define OBJECT_12_1 84
#define OBJECT_12_0 83
#define EXECUTE_CACHE_12_26 71
#define EXECUTE_CACHE_12_22 73
#define EXECUTE_CACHE_12_18 75
#define EXECUTE_CACHE_12_13 77
#define EXECUTE_CACHE_12_8 79
#define FREE_REFERENCE_12_0 82
#define FREE_REFERENCES_LABEL_12_0 70
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd67;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_12_4);
      goto suffix_classes_41;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_30;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto lambda_63;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_39;

    case 4:
      current_block = (Rpc - LABEL_12_19);
      goto label_43;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto lambda_38;

    case 6:
      current_block = (Rpc - LABEL_12_20);
      goto label_44;

    case 7:
      current_block = (Rpc - LABEL_12_21);
      goto label_45;

    case 8:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_35;

    case 9:
      current_block = (Rpc - LABEL_12_12);
      goto lambda_34;

    case 10:
      current_block = (Rpc - LABEL_12_24);
      goto label_46;

    case 11:
      current_block = (Rpc - LABEL_12_25);
      goto label_47;

    case 12:
      current_block = (Rpc - LABEL_12_27);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_12_28);
      goto label_54;

    case 14:
      current_block = (Rpc - LABEL_12_29);
      goto label_55;

    case 15:
      current_block = (Rpc - LABEL_12_30);
      goto label_52;

    case 16:
      current_block = (Rpc - LABEL_12_31);
      goto label_53;

    case 17:
      current_block = (Rpc - LABEL_12_32);
      goto continuation_24;

    case 18:
      current_block = (Rpc - LABEL_12_33);
      goto label_50;

    case 19:
      current_block = (Rpc - LABEL_12_34);
      goto label_51;

    case 20:
      current_block = (Rpc - LABEL_12_14);
      goto continuation_10;

    case 21:
      current_block = (Rpc - LABEL_12_15);
      goto continuation_9;

    case 22:
      current_block = (Rpc - LABEL_12_37);
      goto label_48;

    case 23:
      current_block = (Rpc - LABEL_12_16);
      goto lambda_64;

    case 24:
      current_block = (Rpc - LABEL_12_38);
      goto label_49;

    case 25:
      current_block = (Rpc - LABEL_12_23);
      goto continuation_33;

    case 26:
      current_block = (Rpc - LABEL_12_39);
      goto lambda_6;

    case 27:
      current_block = (Rpc - LABEL_12_35);
      goto lambda_67;

    case 28:
      current_block = (Rpc - LABEL_12_42);
      goto label_56;

    case 29:
      current_block = (Rpc - LABEL_12_40);
      goto lambda_69;

    case 30:
      current_block = (Rpc - LABEL_12_43);
      goto label_57;

    case 31:
      current_block = (Rpc - LABEL_12_44);
      goto label_58;

    case 32:
      current_block = (Rpc - LABEL_12_45);
      goto label_59;

    case 33:
      current_block = (Rpc - LABEL_12_46);
      goto label_60;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (suffix_classes_62)
DEFLABEL (suffix_classes_41)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_6])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  ((Wrd14.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_22]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_71;
  Wrd7 = Wrd11;

DEFLABEL (label_70)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_19])), (Wrd8.pObj));

DEFLABEL (label_43)
  (Wrd7.Obj) = Rvl;
  goto label_70;

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_12_6);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_16])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_12_15);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_86;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_27]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_35])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd25 = Wrd24;
  (Wrd26.Obj) = (Rsp [4]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_12_27);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  (* (--Rsp)) = Rvl;
  (Wrd47.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd47.uLng) == 1))
    goto label_79;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_78)
  (Wrd55.Obj) = (Rsp [5]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_77;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd52.Obj) = ((Wrd54.pObj) [0]);

DEFLABEL (label_76)
  (Wrd61.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (Rsp [1]) = (Wrd62.Obj);
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 1)
    goto label_73;

DEFLABEL (label_72)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 2);

DEFLABEL (label_73)
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  ((Wrd67.pObj) [1]) = (Wrd62.Obj);

DEFLABEL (label_75)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_74)
  Rvl = (current_block [OBJECT_12_5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_31]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_53)
  (Wrd52.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_30]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_80)
  (Wrd74.Obj) = (Rsp [3]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_85;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [1]);

DEFLABEL (label_84)
  (Wrd83.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = (Wrd71.Obj);
  (* (Rhp++)) = (Wrd83.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd87.Obj) = (Rsp [4]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_83;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd84.Obj) = ((Wrd86.pObj) [0]);

DEFLABEL (label_82)
  (Wrd93.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd84.Obj);
  (* (Rhp++)) = (Wrd93.Obj);
  (Wrd96.pObj) = (& (Rhp [-2]));
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd96.pObj)));
  (Wrd100.Obj) = (Rsp [2]);
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [2]);
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd104.Obj) = ((Wrd103.pObj) [0]);
  (* (Rhp++)) = (Wrd94.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  (Wrd99.pObj) = (& (Rhp [-2]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd99.pObj)));
  ((Wrd103.pObj) [0]) = (Wrd97.Obj);

DEFLABEL (label_81)
  Rsp = (& (Rsp [2]));
  goto label_74;

DEFLABEL (label_83)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_29]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_55)
  (Wrd84.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_28]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 1);

DEFLABEL (label_54)
  (Wrd71.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_86)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_92;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_91)
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto lambda_6;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_12_32);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_81;
  (Wrd10.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_90;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_89)
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_88;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_87)
  (Wrd29.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Rsp [1]) = (Wrd30.Obj);
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_72;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  ((Wrd35.pObj) [1]) = (Wrd30.Obj);
  goto label_75;

DEFLABEL (label_88)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_34]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 1);

DEFLABEL (label_51)
  (Wrd20.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_33]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_37]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_12_14);
  goto label_74;

DEFLABEL (lambda_65)
DEFLABEL (lambda_38)
  INTERRUPT_CHECK (26, LABEL_12_10);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_101;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_100)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_99;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_98)
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 26)
    goto label_94;

DEFLABEL (label_93)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_94)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_93;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if ((Wrd29.Lng) < (Wrd31.Lng))
    goto label_96;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_95;

DEFLABEL (label_96)
  Rvl = (current_block [OBJECT_12_2]);

DEFLABEL (label_95)
DEFLABEL (label_97)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_99)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_45)
  (Wrd14.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_44)
  (Wrd5.Obj) = Rvl;
  goto label_100;

DEFLABEL (lambda_66)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_12_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_105;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_104)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_103;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_102)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_26]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_12_23);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_103)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_25]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_46)
  (Wrd8.Obj) = Rvl;
  goto label_104;

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_12_16);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_107;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_106)
  (Wrd20.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  goto lambda_6;

DEFLABEL (label_107)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_38]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_49)
  (Wrd5.Obj) = Rvl;
  goto label_106;

DEFLABEL (lambda_68)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_12_39);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_41);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_40])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_18]));

DEFLABEL (lambda_67)
  CLOSURE_HEADER (LABEL_12_35);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_109;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_108)
  (Wrd20.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  goto lambda_6;

DEFLABEL (label_109)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_42]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 1);

DEFLABEL (label_56)
  (Wrd5.Obj) = Rvl;
  goto label_108;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_12_40);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_120;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_119)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_118;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd14.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_117)
  (Wrd29.Obj) = (* (Rsp++));
  if ((Wrd14.Obj) == (Wrd29.Obj))
    goto label_112;

DEFLABEL (label_111)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_110)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_112)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_116;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_115)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_114;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd41.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_113)
  (Wrd56.Obj) = (* (Rsp++));
  if (! ((Wrd41.Obj) == (Wrd56.Obj)))
    goto label_111;
  Rvl = (current_block [OBJECT_12_2]);
  goto label_110;

DEFLABEL (label_114)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_46]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 1);

DEFLABEL (label_60)
  (Wrd41.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_45]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_44]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_58)
  (Wrd14.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_43]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_119;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define TAG_13_6 1
#define LABEL_13_10 7
#define LABEL_13_7 9
#define TAG_13_8 3
#define LABEL_13_9 11
#define LABEL_13_14 13
#define LABEL_13_15 15
#define LABEL_13_12 17
#define LABEL_13_16 19
#define LABEL_13_17 21
#define LABEL_13_21 23
#define LABEL_13_18 25
#define LABEL_13_20 27
#define LABEL_13_22 29
#define ENVIRONMENT_LABEL_13_3 41
#define DEBUGGING_LABEL_13_2 40
#define OBJECT_13_2 39
#define OBJECT_13_1 38
#define OBJECT_13_0 37
#define EXECUTE_CACHE_13_19 31
#define EXECUTE_CACHE_13_13 33
#define EXECUTE_CACHE_13_11 35
#define FREE_REFERENCES_LABEL_13_0 30
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd51;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_13_4);
      goto find_matching_bblocks_19;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto loop_17;

    case 2:
      current_block = (Rpc - LABEL_13_10);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto lambda_29;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_16;

    case 5:
      current_block = (Rpc - LABEL_13_14);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_13_15);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_13_16);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_13_17);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_13_21);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_13_18);
      goto lambda_6;

    case 12:
      current_block = (Rpc - LABEL_13_20);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_13_22);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_matching_bblocks_27)
DEFLABEL (find_matching_bblocks_19)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_5])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  Wrd8 = Wrd10;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd11.Obj);
  goto loop_17;

DEFLABEL (loop_28)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_13_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_31;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_7])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  ((Wrd13.pObj) [3]) = (Wrd14.Obj);
  ((Wrd13.pObj) [4]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_33;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_32)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_33)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_13_7);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;

DEFLABEL (label_38)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_36)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  goto loop_17;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_13_20);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_35;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_34)
  (Wrd23.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd34.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_22]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_43;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_38;
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [3]);
  (Rsp [2]) = (Wrd34.Obj);
  (Wrd44.Obj) = ((Wrd36.pObj) [4]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_41;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd37.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_40)
  (Rsp [3]) = (Wrd37.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_17;

DEFLABEL (label_41)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_24)
  (Wrd37.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (lambda_30)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_13_18);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_8 9
#define LABEL_14_7 11
#define LABEL_14_11 13
#define LABEL_14_12 15
#define LABEL_14_13 17
#define LABEL_14_16 19
#define LABEL_14_17 21
#define ENVIRONMENT_LABEL_14_3 44
#define DEBUGGING_LABEL_14_2 43
#define OBJECT_14_9 42
#define OBJECT_14_8 41
#define OBJECT_14_7 40
#define OBJECT_14_6 39
#define OBJECT_14_5 38
#define OBJECT_14_4 37
#define OBJECT_14_3 36
#define OBJECT_14_2 35
#define OBJECT_14_1 34
#define OBJECT_14_0 33
#define EXECUTE_CACHE_14_15 23
#define EXECUTE_CACHE_14_14 25
#define EXECUTE_CACHE_14_10 27
#define EXECUTE_CACHE_14_9 29
#define FREE_REFERENCE_14_0 32
#define FREE_REFERENCES_LABEL_14_0 22
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd43;
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
      current_block = (Rpc - LABEL_14_4);
      goto interesting_suffixP_16;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_14_11);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_14_12);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_14_16);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_14_17);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interesting_suffixP_24)
DEFLABEL (interesting_suffixP_16)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_25;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_47;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_47;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_46)
  (Wrd23.Obj) = (Rsp [0]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rvl = (Wrd23.Obj);

DEFLABEL (label_26)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_45;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd35.Lng))))
    goto label_45;
  (Wrd27.Obj) = ((Wrd33.pObj) [9]);

DEFLABEL (label_44)
  (Wrd43.Obj) = (Rsp [2]);
  if ((Wrd43.Obj) == (Wrd27.Obj))
    goto label_43;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd46.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_41)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_40;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd18.Lng))))
    goto label_40;
  (Wrd10.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_38;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_37)
  (Wrd35.Obj) = (Rsp [0]);
  if ((Wrd35.Obj) == (current_block [OBJECT_14_6]))
    goto label_29;
  (Wrd37.Obj) = (current_block [OBJECT_14_8]);
  (Rsp [1]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (label_29)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_14_7]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_13);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_36;
  Wrd7 = Wrd11;

DEFLABEL (label_35)
  (Wrd13.Obj) = (Rsp [0]);
  if (! ((Wrd7.Obj) == (Wrd13.Obj)))
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_9]), 1);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14_17);
  (Rsp [0]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_31;
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_31)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd10.Lng) < 0)
    goto label_33;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_32;

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_14_3]);

DEFLABEL (label_32)
DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_16])), (Wrd8.pObj));

DEFLABEL (label_22)
  (Wrd7.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_5]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_14_4]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_20)
  (Wrd10.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_41;

DEFLABEL (label_43)
  Rvl = (current_block [OBJECT_14_3]);
  goto label_26;

DEFLABEL (label_45)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_14_2]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_19)
  (Wrd27.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_14_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_6 5
#define LABEL_15_5 7
#define LABEL_15_9 9
#define LABEL_15_8 11
#define LABEL_15_10 13
#define LABEL_15_14 15
#define LABEL_15_15 17
#define LABEL_15_16 19
#define LABEL_15_17 21
#define LABEL_15_13 23
#define LABEL_15_11 25
#define TAG_15_12 11
#define LABEL_15_19 27
#define TAG_15_20 12
#define LABEL_15_23 29
#define LABEL_15_26 31
#define LABEL_15_27 33
#define LABEL_15_28 35
#define LABEL_15_29 37
#define LABEL_15_30 39
#define LABEL_15_31 41
#define LABEL_15_24 43
#define LABEL_15_32 45
#define LABEL_15_33 47
#define LABEL_15_21 49
#define TAG_15_22 23
#define ENVIRONMENT_LABEL_15_3 67
#define DEBUGGING_LABEL_15_2 66
#define OBJECT_15_6 65
#define OBJECT_15_5 64
#define OBJECT_15_4 63
#define OBJECT_15_3 62
#define OBJECT_15_2 61
#define OBJECT_15_1 60
#define OBJECT_15_0 59
#define EXECUTE_CACHE_15_34 51
#define EXECUTE_CACHE_15_25 53
#define EXECUTE_CACHE_15_18 55
#define EXECUTE_CACHE_15_7 57
#define FREE_REFERENCES_LABEL_15_0 50
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd59;
  machine_word Wrd52;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd30;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd82;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd24;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd8;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_15_4);
      goto matching_suffixes_32;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto label_34;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto label_35;

    case 4:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_15_10);
      goto loop_30;

    case 6:
      current_block = (Rpc - LABEL_15_14);
      goto label_36;

    case 7:
      current_block = (Rpc - LABEL_15_15);
      goto label_37;

    case 8:
      current_block = (Rpc - LABEL_15_16);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_15_17);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_15_13);
      goto continuation_27;

    case 11:
      current_block = (Rpc - LABEL_15_11);
      goto lambda_51;

    case 12:
      current_block = (Rpc - LABEL_15_19);
      goto lambda_52;

    case 13:
      current_block = (Rpc - LABEL_15_23);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_15_26);
      goto label_44;

    case 15:
      current_block = (Rpc - LABEL_15_27);
      goto label_45;

    case 16:
      current_block = (Rpc - LABEL_15_28);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_15_29);
      goto label_41;

    case 18:
      current_block = (Rpc - LABEL_15_30);
      goto label_42;

    case 19:
      current_block = (Rpc - LABEL_15_31);
      goto label_43;

    case 20:
      current_block = (Rpc - LABEL_15_24);
      goto lambda_11;

    case 21:
      current_block = (Rpc - LABEL_15_32);
      goto label_46;

    case 22:
      current_block = (Rpc - LABEL_15_33);
      goto label_47;

    case 23:
      current_block = (Rpc - LABEL_15_21);
      goto lambda_53;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (matching_suffixes_49)
DEFLABEL (matching_suffixes_32)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_58;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd18.Lng))))
    goto label_58;
  (Wrd12.Obj) = ((Wrd16.pObj) [9]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_56;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_56;
  (Wrd10.Obj) = ((Wrd14.pObj) [9]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_55)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15_2]);
  (Rsp [4]) = (Wrd5.Obj);
  (Rsp [5]) = (Wrd5.Obj);
  goto loop_30;

DEFLABEL (label_56)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_15_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.Obj) = (current_block [OBJECT_15_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (loop_50)
DEFLABEL (loop_30)
  INTERRUPT_CHECK (26, LABEL_15_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_15_2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_60;

DEFLABEL (label_59)
  (Wrd57.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd58.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd61.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_11])));
  Rhp += 3;
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd61.pObj)));
  Wrd66 = Wrd61;
  (Wrd67.Obj) = (Rsp [2]);
  ((Wrd66.pObj) [2]) = (Wrd67.Obj);
  (Wrd65.Obj) = (Rsp [1]);
  ((Wrd66.pObj) [3]) = (Wrd65.Obj);
  (Wrd63.Obj) = (Rsp [0]);
  ((Wrd66.pObj) [4]) = (Wrd63.Obj);
  Rvl = (Wrd60.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_59;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_68;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_67)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_66;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd28.Lng))))
    goto label_66;
  (Wrd23.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_65)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_64;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_63)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_62;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd50.Lng))))
    goto label_62;
  (Wrd45.Obj) = ((Wrd48.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_18]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_15_13);
  (Rsp [4]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_19])));
  Rhp += 5;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd17 = Wrd8;
  (Wrd18.Obj) = (Rsp [5]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [4]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [5]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [6]) = (Wrd10.Obj);
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_62)
  (Wrd53.Obj) = (current_block [OBJECT_15_4]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_17]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_38)
  (Wrd35.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd31.Obj) = (current_block [OBJECT_15_4]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_36)
  (Wrd13.Obj) = Rvl;
  goto label_67;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_15_11);

DEFLABEL (lambda_28)
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

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_15_19);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_15_5])))
    goto label_69;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [3]);
  (Rsp [1]) = (Wrd25.Obj);
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (Rsp [2]) = (Wrd28.Obj);
  (Wrd31.Obj) = ((Wrd27.pObj) [4]);
  (Rsp [0]) = (Wrd31.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_21])));
  Rhp += 3;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd41 = Wrd36;
  ((Wrd41.pObj) [2]) = (Wrd28.Obj);
  ((Wrd41.pObj) [3]) = (Wrd25.Obj);
  ((Wrd41.pObj) [4]) = (Wrd31.Obj);
  Rvl = (Wrd35.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_70;

DEFLABEL (label_71)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_70)
DEFLABEL (label_85)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_15_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [5]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_79;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_78)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [6]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_77;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_76)
  (Wrd37.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd37.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [6]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_75;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd38.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_74)
  (Rsp [2]) = (Wrd38.Obj);
  (Wrd58.Obj) = (Rsp [3]);
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [5]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_73;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd53.Obj) = ((Wrd57.pObj) [0]);

DEFLABEL (label_72)
  (Rsp [3]) = (Wrd53.Obj);
  goto loop_30;

DEFLABEL (label_73)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_31]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_43)
  (Wrd53.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_30]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_42)
  (Wrd38.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_29]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_6]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_28]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_6]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_80)
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [5]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_84;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [1]);
  (* (--Rsp)) = (Wrd72.Obj);

DEFLABEL (label_83)
  (Wrd88.Obj) = (Rsp [2]);
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [6]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_82;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [1]);
  (* (--Rsp)) = (Wrd87.Obj);

DEFLABEL (label_81)
  (Wrd98.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd98.Obj);
  (Wrd100.Obj) = (Rsp [3]);
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd99.Obj) = ((Wrd101.pObj) [4]);
  (Rsp [2]) = (Wrd99.Obj);
  (Wrd102.Obj) = ((Wrd101.pObj) [3]);
  (Rsp [3]) = (Wrd102.Obj);
  goto loop_30;

DEFLABEL (label_82)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_27]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_6]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_26]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_6]), 1);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (lambda_54)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_15_24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_89;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_88)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_87;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_86)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_34]));

DEFLABEL (label_87)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_33]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_6]), 1);

DEFLABEL (label_47)
  (Wrd14.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_32]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_15_21);

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
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_7 9
#define LABEL_16_13 11
#define LABEL_16_14 13
#define LABEL_16_16 15
#define LABEL_16_11 17
#define LABEL_16_20 19
#define LABEL_16_21 21
#define LABEL_16_22 23
#define LABEL_16_23 25
#define LABEL_16_24 27
#define LABEL_16_25 29
#define LABEL_16_27 31
#define LABEL_16_8 33
#define LABEL_16_9 35
#define LABEL_16_18 37
#define LABEL_16_29 39
#define TAG_16_30 18
#define LABEL_16_31 41
#define LABEL_16_15 43
#define LABEL_16_35 45
#define LABEL_16_32 47
#define TAG_16_33 22
#define LABEL_16_28 49
#define LABEL_16_34 51
#define LABEL_16_39 53
#define LABEL_16_40 55
#define LABEL_16_41 57
#define LABEL_16_42 59
#define LABEL_16_43 61
#define LABEL_16_44 63
#define LABEL_16_36 65
#define LABEL_16_49 67
#define LABEL_16_37 69
#define LABEL_16_45 71
#define TAG_16_46 34
#define LABEL_16_51 73
#define LABEL_16_52 75
#define LABEL_16_53 77
#define LABEL_16_54 79
#define LABEL_16_55 81
#define LABEL_16_47 83
#define LABEL_16_48 85
#define LABEL_16_56 87
#define TAG_16_57 42
#define ENVIRONMENT_LABEL_16_3 115
#define DEBUGGING_LABEL_16_2 114
#define OBJECT_16_8 113
#define OBJECT_16_7 112
#define OBJECT_16_6 111
#define OBJECT_16_5 110
#define OBJECT_16_4 109
#define OBJECT_16_3 108
#define OBJECT_16_2 107
#define OBJECT_16_1 106
#define OBJECT_16_0 105
#define EXECUTE_CACHE_16_50 89
#define EXECUTE_CACHE_16_38 91
#define EXECUTE_CACHE_16_26 93
#define EXECUTE_CACHE_16_19 95
#define EXECUTE_CACHE_16_17 97
#define EXECUTE_CACHE_16_12 99
#define EXECUTE_CACHE_16_10 101
#define FREE_REFERENCE_16_0 104
#define FREE_REFERENCES_LABEL_16_0 88
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd34;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd56;
  machine_word Wrd24;
  machine_word Wrd64;
  machine_word Wrd57;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd5;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_16_4);
      goto match_rtl_51;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_53;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_54;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto label_55;

    case 4:
      current_block = (Rpc - LABEL_16_13);
      goto lambda_49;

    case 5:
      current_block = (Rpc - LABEL_16_14);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_16_16);
      goto label_62;

    case 7:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_16_20);
      goto label_56;

    case 9:
      current_block = (Rpc - LABEL_16_21);
      goto label_57;

    case 10:
      current_block = (Rpc - LABEL_16_22);
      goto label_58;

    case 11:
      current_block = (Rpc - LABEL_16_23);
      goto label_59;

    case 12:
      current_block = (Rpc - LABEL_16_24);
      goto label_60;

    case 13:
      current_block = (Rpc - LABEL_16_25);
      goto label_61;

    case 14:
      current_block = (Rpc - LABEL_16_27);
      goto continuation_37;

    case 15:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_35;

    case 16:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_34;

    case 17:
      current_block = (Rpc - LABEL_16_18);
      goto continuation_13;

    case 18:
      current_block = (Rpc - LABEL_16_29);
      goto lambda_78;

    case 19:
      current_block = (Rpc - LABEL_16_31);
      goto continuation_36;

    case 20:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_17;

    case 21:
      current_block = (Rpc - LABEL_16_35);
      goto label_63;

    case 22:
      current_block = (Rpc - LABEL_16_32);
      goto lambda_79;

    case 23:
      current_block = (Rpc - LABEL_16_28);
      goto continuation_39;

    case 24:
      current_block = (Rpc - LABEL_16_34);
      goto continuation_16;

    case 25:
      current_block = (Rpc - LABEL_16_39);
      goto label_64;

    case 26:
      current_block = (Rpc - LABEL_16_40);
      goto label_65;

    case 27:
      current_block = (Rpc - LABEL_16_41);
      goto label_69;

    case 28:
      current_block = (Rpc - LABEL_16_42);
      goto label_66;

    case 29:
      current_block = (Rpc - LABEL_16_43);
      goto label_67;

    case 30:
      current_block = (Rpc - LABEL_16_44);
      goto label_68;

    case 31:
      current_block = (Rpc - LABEL_16_36);
      goto continuation_44;

    case 32:
      current_block = (Rpc - LABEL_16_49);
      goto continuation_43;

    case 33:
      current_block = (Rpc - LABEL_16_37);
      goto continuation_41;

    case 34:
      current_block = (Rpc - LABEL_16_45);
      goto lambda_80;

    case 35:
      current_block = (Rpc - LABEL_16_51);
      goto label_70;

    case 36:
      current_block = (Rpc - LABEL_16_52);
      goto label_71;

    case 37:
      current_block = (Rpc - LABEL_16_53);
      goto label_74;

    case 38:
      current_block = (Rpc - LABEL_16_54);
      goto label_72;

    case 39:
      current_block = (Rpc - LABEL_16_55);
      goto label_73;

    case 40:
      current_block = (Rpc - LABEL_16_47);
      goto continuation_24;

    case 41:
      current_block = (Rpc - LABEL_16_48);
      goto continuation_40;

    case 42:
      current_block = (Rpc - LABEL_16_56);
      goto lambda_81;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_rtl_76)
DEFLABEL (match_rtl_51)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_123;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_122)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_121;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_120)
  (Wrd23.Obj) = (* (Rsp++));
  if ((Wrd14.Obj) == (Wrd23.Obj))
    goto label_82;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_119;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_118)
  if ((Wrd27.Obj) == (current_block [OBJECT_16_1]))
    goto label_113;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_84;

DEFLABEL (label_83)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_16_18);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_32])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_112;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_111)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_110;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_109)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_108;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_107)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_106;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_105)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_104;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd42.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_103)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_102;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_101)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_26]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_83;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd68.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd71.Obj) = ((Wrd68.pObj) [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd72.uLng) == 50)
    goto label_100;
  Wrd67 = Wrd71;

DEFLABEL (label_99)
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd73.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_17]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_98;
  Wrd8 = Wrd12;

DEFLABEL (label_97)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_17]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16_34);
  (* (--Rsp)) = Rvl;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd9.uLng) == 1))
    goto label_96;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_95)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_94;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_93)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_92;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  ((Wrd57.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_91)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_90;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_89)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_88;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_87)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_86;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  ((Wrd49.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_85)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd38.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_46);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_45])));
  Rhp += 2;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd38.pObj)));
  Wrd41 = Wrd38;
  (Wrd42.Obj) = (Rsp [3]);
  ((Wrd41.pObj) [2]) = (Wrd42.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  ((Wrd41.pObj) [3]) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_47]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_16_47);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_57);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_56])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_44]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 2);

DEFLABEL (label_68)
  goto label_85;

DEFLABEL (label_88)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_43]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_67)
  (Wrd30.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_42]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_66)
  (Wrd21.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_41]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 2);

DEFLABEL (label_69)
  goto label_91;

DEFLABEL (label_94)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_40]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_65)
  (Wrd14.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_39]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_64)
  (Wrd5.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_35])), (Wrd9.pObj));

DEFLABEL (label_63)
  (Wrd8.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_16])), (Wrd68.pObj));

DEFLABEL (label_62)
  (Wrd67.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_25]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_24]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_60)
  (Wrd42.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_23]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_59)
  (Wrd33.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_22]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_57)
  (Wrd19.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_56)
  (Wrd10.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_113)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (current_block [OBJECT_16_2]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_16_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_16_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_16_27);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (current_block [OBJECT_16_3]);
  if (Rvl == (Wrd13.Obj))
    goto label_116;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_28]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_16_5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_16_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_37]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_38]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_16_37);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_115;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_49]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_16_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_16_49);
  (Wrd18.Obj) = (current_block [OBJECT_16_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_114)
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_50]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_16_36);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_48]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_16_48);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (label_115)
  (Wrd12.Obj) = (current_block [OBJECT_16_7]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_114;

DEFLABEL (label_116)
  Wrd5 = Wrd13;
  Rsp = (& (Rsp [3]));

DEFLABEL (label_117)
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_29])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_119)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_55)
  (Wrd27.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_54)
  (Wrd14.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_122;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_16_8);
  (Wrd5.Obj) = Rvl;
  goto label_117;

DEFLABEL (lambda_77)
DEFLABEL (lambda_49)
  INTERRUPT_CHECK (26, LABEL_16_13);
  (Wrd5.Obj) = (current_block [OBJECT_16_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_78)
  CLOSURE_HEADER (LABEL_16_29);

DEFLABEL (lambda_47)
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

DEFLABEL (lambda_79)
  CLOSURE_HEADER (LABEL_16_32);

DEFLABEL (lambda_14)
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

DEFLABEL (lambda_80)
  CLOSURE_HEADER (LABEL_16_45);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_134;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_133)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_132;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_131)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_130;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  ((Wrd57.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_129)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_128;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd27.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_127)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_126;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_125)
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_124;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  ((Wrd52.pObj) [0]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_16_8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_124)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 2);

DEFLABEL (label_126)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_55]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_54]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_72)
  (Wrd27.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_53]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 2);

DEFLABEL (label_74)
  goto label_129;

DEFLABEL (label_132)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_52]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_71)
  (Wrd20.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_51]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_70)
  (Wrd5.Obj) = Rvl;
  goto label_133;

DEFLABEL (lambda_81)
  CLOSURE_HEADER (LABEL_16_56);

DEFLABEL (lambda_31)
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

#define LABEL_17_4 3
#define LABEL_17_6 5
#define LABEL_17_5 7
#define LABEL_17_8 9
#define ENVIRONMENT_LABEL_17_3 19
#define DEBUGGING_LABEL_17_2 18
#define OBJECT_17_2 17
#define OBJECT_17_1 16
#define OBJECT_17_0 15
#define EXECUTE_CACHE_17_9 11
#define EXECUTE_CACHE_17_7 13
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_17_4);
      goto remove_from_environmentB_4;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (remove_from_environmentB_9)
DEFLABEL (remove_from_environmentB_4)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_17_0])))
    goto label_10;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_14;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_12;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (label_12)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_8 9
#define LABEL_18_9 11
#define LABEL_18_10 13
#define LABEL_18_11 15
#define LABEL_18_12 17
#define LABEL_18_13 19
#define LABEL_18_14 21
#define LABEL_18_15 23
#define LABEL_18_16 25
#define LABEL_18_17 27
#define LABEL_18_20 29
#define LABEL_18_22 31
#define LABEL_18_23 33
#define LABEL_18_24 35
#define LABEL_18_26 37
#define LABEL_18_28 39
#define LABEL_18_29 41
#define LABEL_18_18 43
#define LABEL_18_33 45
#define LABEL_18_21 47
#define LABEL_18_7 49
#define LABEL_18_31 51
#define LABEL_18_27 53
#define LABEL_18_34 55
#define LABEL_18_35 57
#define LABEL_18_32 59
#define ENVIRONMENT_LABEL_18_3 74
#define DEBUGGING_LABEL_18_2 73
#define OBJECT_18_5 72
#define OBJECT_18_4 71
#define OBJECT_18_3 70
#define OBJECT_18_2 69
#define OBJECT_18_1 68
#define OBJECT_18_0 67
#define EXECUTE_CACHE_18_30 61
#define EXECUTE_CACHE_18_25 63
#define EXECUTE_CACHE_18_19 65
#define FREE_REFERENCES_LABEL_18_0 60
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlcsm_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd118;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd99;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd136;
  machine_word Wrd133;
  machine_word Wrd93;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd172;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd168;
  machine_word Wrd165;
  machine_word Wrd157;
  machine_word Wrd159;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd156;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd143;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd140;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_18_4);
      goto match_44;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_46;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_47;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto label_57;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto label_58;

    case 5:
      current_block = (Rpc - LABEL_18_10);
      goto label_59;

    case 6:
      current_block = (Rpc - LABEL_18_11);
      goto label_60;

    case 7:
      current_block = (Rpc - LABEL_18_12);
      goto label_50;

    case 8:
      current_block = (Rpc - LABEL_18_13);
      goto label_51;

    case 9:
      current_block = (Rpc - LABEL_18_14);
      goto label_52;

    case 10:
      current_block = (Rpc - LABEL_18_15);
      goto label_53;

    case 11:
      current_block = (Rpc - LABEL_18_16);
      goto label_56;

    case 12:
      current_block = (Rpc - LABEL_18_17);
      goto label_54;

    case 13:
      current_block = (Rpc - LABEL_18_20);
      goto label_55;

    case 14:
      current_block = (Rpc - LABEL_18_22);
      goto label_48;

    case 15:
      current_block = (Rpc - LABEL_18_23);
      goto label_49;

    case 16:
      current_block = (Rpc - LABEL_18_24);
      goto continuation_1;

    case 17:
      current_block = (Rpc - LABEL_18_26);
      goto loop_21;

    case 18:
      current_block = (Rpc - LABEL_18_28);
      goto label_61;

    case 19:
      current_block = (Rpc - LABEL_18_29);
      goto label_62;

    case 20:
      current_block = (Rpc - LABEL_18_18);
      goto continuation_31;

    case 21:
      current_block = (Rpc - LABEL_18_33);
      goto label_63;

    case 22:
      current_block = (Rpc - LABEL_18_21);
      goto continuation_29;

    case 23:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_41;

    case 24:
      current_block = (Rpc - LABEL_18_31);
      goto continuation_12;

    case 25:
      current_block = (Rpc - LABEL_18_27);
      goto continuation_16;

    case 26:
      current_block = (Rpc - LABEL_18_34);
      goto label_64;

    case 27:
      current_block = (Rpc - LABEL_18_35);
      goto label_65;

    case 28:
      current_block = (Rpc - LABEL_18_32);
      goto continuation_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_67)
DEFLABEL (match_44)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_70;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_69)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_25]));

DEFLABEL (label_70)
  if (! ((Wrd6.uLng) == 1))
    goto label_111;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_110)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rvl = (current_block [OBJECT_18_5]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_72)
  if (! ((Wrd22.uLng) == 1))
    goto label_109;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_108)
  (Wrd34.Obj) = (Rsp [0]);
  if (! ((Wrd34.Obj) == (Wrd25.Obj)))
    goto label_71;
  if ((Wrd34.Obj) == (current_block [OBJECT_18_1]))
    goto label_100;
  if ((Wrd34.Obj) == (current_block [OBJECT_18_3]))
    goto label_77;
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_76;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_75)
  (Rsp [1]) = (Wrd39.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_74;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_73)
  (Rsp [2]) = (Wrd48.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_21;

DEFLABEL (label_74)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_23]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_49)
  (Wrd48.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_22]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_48)
  (Wrd39.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_99;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_98)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_97;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_96)
  (Wrd77.Obj) = (Rsp [3]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_95;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd74.Obj) = ((Wrd76.pObj) [1]);

DEFLABEL (label_94)
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_93;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd83.Obj) = ((Wrd84.pObj) [0]);

DEFLABEL (label_92)
  (Rsp [1]) = (Wrd83.Obj);
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 26))
    goto label_91;
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  if ((Wrd93.Lng) < 5L)
    goto label_88;

DEFLABEL (label_87)
  (Wrd96.Obj) = (Rsp [1]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 26))
    goto label_86;
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  if (! ((Wrd99.Lng) < 5L))
    goto label_79;

DEFLABEL (label_78)
  Rvl = (current_block [OBJECT_18_5]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_18]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd105.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd106.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd106.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_19]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_18_18);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_80;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd29.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 1))
    goto label_85;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_84)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_25]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_18_32);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  Rvl = (Rsp [5]);
  goto label_81;

DEFLABEL (label_82)
  Rvl = (current_block [OBJECT_18_5]);

DEFLABEL (label_81)
DEFLABEL (label_83)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_33]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_86)
  (Wrd110.Obj) = (current_block [OBJECT_18_4]);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_54)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;
  goto label_78;

DEFLABEL (label_88)
  (Wrd115.Obj) = (Rsp [1]);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd116.uLng) == 26))
    goto label_90;
  (Wrd118.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  if (! ((Wrd118.Lng) < 5L))
    goto label_78;

DEFLABEL (label_89)
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_21]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (Wrd124.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd125.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd125.Obj);
  goto label_69;

DEFLABEL (label_90)
  (Wrd127.Obj) = (current_block [OBJECT_18_4]);
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_20]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_55)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_78;
  goto label_89;

DEFLABEL (label_91)
  (Wrd133.Obj) = (current_block [OBJECT_18_4]);
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_16]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_56)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_87;
  goto label_88;

DEFLABEL (label_93)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_53)
  (Wrd83.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_52)
  (Wrd74.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_50)
  (Wrd58.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_100)
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (Wrd144.Obj) = (Rsp [3]);
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd144.Obj));
  if (! ((Wrd145.uLng) == 1))
    goto label_107;
  (Wrd143.pObj) = (OBJECT_ADDRESS (Wrd144.Obj));
  (Wrd141.Obj) = ((Wrd143.pObj) [1]);

DEFLABEL (label_106)
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd152.uLng) == 1))
    goto label_105;
  (Wrd150.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd151.Obj) = ((Wrd150.pObj) [0]);
  (* (--Rsp)) = (Wrd151.Obj);

DEFLABEL (label_104)
  (Wrd160.Obj) = (Rsp [3]);
  (Wrd161.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if (! ((Wrd161.uLng) == 1))
    goto label_103;
  (Wrd159.pObj) = (OBJECT_ADDRESS (Wrd160.Obj));
  (Wrd157.Obj) = ((Wrd159.pObj) [1]);

DEFLABEL (label_102)
  (Wrd168.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if (! ((Wrd168.uLng) == 1))
    goto label_101;
  (Wrd166.pObj) = (OBJECT_ADDRESS (Wrd157.Obj));
  (Wrd167.Obj) = ((Wrd166.pObj) [0]);
  (* (--Rsp)) = (Wrd167.Obj);
  goto label_69;

DEFLABEL (label_101)
  (Wrd172.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd172.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_103)
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (* (--Rsp)) = (Wrd160.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_59)
  (Wrd157.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_57)
  (Wrd141.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_47)
  (Wrd25.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_113;
  Rvl = (Rsp [2]);
  goto label_112;

DEFLABEL (label_113)
  Rvl = (current_block [OBJECT_18_5]);

DEFLABEL (label_112)
DEFLABEL (label_114)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_18_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_116;
  Rvl = (Rsp [4]);
  goto label_115;

DEFLABEL (label_116)
  Rvl = (current_block [OBJECT_18_5]);

DEFLABEL (label_115)
DEFLABEL (label_117)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_18_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_119;
  Rvl = (Rsp [3]);
  goto label_118;

DEFLABEL (label_119)
  Rvl = (current_block [OBJECT_18_5]);

DEFLABEL (label_118)
DEFLABEL (label_120)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (loop_68)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_18_26);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_124;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_31]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_18_31);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_122;
  Rvl = (Rsp [2]);
  goto label_121;

DEFLABEL (label_122)
  Rvl = (current_block [OBJECT_18_5]);

DEFLABEL (label_121)
DEFLABEL (label_123)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_124)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_125;
  Rvl = (current_block [OBJECT_18_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_125)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_27]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  if (! ((Wrd13.uLng) == 1))
    goto label_134;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_133)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_132;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_131)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_30]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_18_27);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_18_5]);
  if (! (Rvl == (Wrd6.Obj)))
    goto label_126;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_126)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_130;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_129)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_128;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_127)
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_21;

DEFLABEL (label_128)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_35]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_65)
  (Wrd16.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_34]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_64)
  (Wrd7.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_29]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_28]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_133;

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
rtlcsm_so_a6e34d48e380ed66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
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
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 18)
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

static const struct liarc_code_S arr_decl_rtlcsm_so_a6e34d48e380ed66 [18] =
  {
    { "rtlcsm_so_code_1", 2, rtlcsm_so_code_1 },
    { "rtlcsm_so_code_2", 5, rtlcsm_so_code_2 },
    { "rtlcsm_so_code_3", 16, rtlcsm_so_code_3 },
    { "rtlcsm_so_code_4", 3, rtlcsm_so_code_4 },
    { "rtlcsm_so_code_5", 8, rtlcsm_so_code_5 },
    { "rtlcsm_so_code_6", 4, rtlcsm_so_code_6 },
    { "rtlcsm_so_code_7", 4, rtlcsm_so_code_7 },
    { "rtlcsm_so_code_8", 11, rtlcsm_so_code_8 },
    { "rtlcsm_so_code_9", 9, rtlcsm_so_code_9 },
    { "rtlcsm_so_code_10", 11, rtlcsm_so_code_10 },
    { "rtlcsm_so_code_11", 8, rtlcsm_so_code_11 },
    { "rtlcsm_so_code_12", 34, rtlcsm_so_code_12 },
    { "rtlcsm_so_code_13", 14, rtlcsm_so_code_13 },
    { "rtlcsm_so_code_14", 10, rtlcsm_so_code_14 },
    { "rtlcsm_so_code_15", 24, rtlcsm_so_code_15 },
    { "rtlcsm_so_code_16", 43, rtlcsm_so_code_16 },
    { "rtlcsm_so_code_17", 4, rtlcsm_so_code_17 },
    { "rtlcsm_so_code_18", 29, rtlcsm_so_code_18 }
  };

int
decl_rtlcsm_so_a6e34d48e380ed66 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rtlcsm_so_a6e34d48e380ed66);
  return (0);
}

DECLARE_COMPILED_CODE ("rtlcsm.so", 3, decl_rtlcsm_so_a6e34d48e380ed66, rtlcsm_so_a6e34d48e380ed66)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rtlcsm_so_data_a6e34d48e380ed66 [3996] =
  "\x86\x01\x28\xca\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x24"
  "\x28\x0d\xba\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88"
  "\xc1\xbc\x1d\x08\x28\x0d\xbd\x28\x0d\xbe\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x83\x88\x07\xc2\x1c"
  "\x02\xc1\x1c\xb4\x08\x28\x0d\x28\x0d\x1c\x28\xb2\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x28\xb2\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88"
  "\xc3\x1d\x1b\x02\xb4\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x86\x88\xb4\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x82\x08"
  "\x28\xb2\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x1c\xb4\xc2\x1c\x1d\x08\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x06\x07\xb4\x1b\x1d\x08\x1b\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb4\x1b\x08\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x1b\x1b\x07\xb4\x08\x0d\x24\x28\xb2\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\xb4\x08\x28\x0d\x1c\x28\x0d\x1c\x28\xb2\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x02\x88"
  "\xc1\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x14\x02"
  "\x0d\xb4\x80\x07\x02\x1b\x82\x0d\x24\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x0d\x1c\x80\xb4\x08\x1b\x02\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x08\x1b\x02\x1b\x1b"
  "\x86\x0d\xb4\x0d\x24\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\xb4\x08\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x0d\x1b"
  "\x0d\xb4\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\xb2\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb3\x2a\x17"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb5\x1b\x1b\x1b\xb6"
  "\xb1\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5b"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c\x6f\x70\x74\x2f"
  "\x72\x74\x6c\x63\x73\x6d\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x1a\x6d\x65\x72\x67\x65\x2d\x73\x75\x66\x66\x69\x78\x65\x73\x2d"
  "\x6f\x66\x2d\x72\x67\x72\x61\x70\x68\x21\x02\x04\x09\x66\x6f\x72"
  "\x2d\x65\x61\x63\x68\x02\x05\x06\x81\x83\x02\x04\x04\x83\x04\x05"
  "\x0d\x02\x04\x63\x61\x72\x02\x03\x19\x72\x67\x72\x61\x70\x68\x2d"
  "\x6d\x61\x74\x63\x68\x69\x6e\x67\x2d\x73\x75\x66\x66\x69\x78\x65"
  "\x73\x04\x10\x6d\x65\x72\x67\x65\x2d\x73\x75\x66\x66\x69\x78\x65"
  "\x73\x21\x03\x0a\x0c\x81\x85\x02\x09\x0a\x81\x87\x02\x08\x08\x81"
  "\x83\x02\x07\x06\x81\x83\x02\x06\x04\x83\x04\x0b\x16\x02\x0b\x76"
  "\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x09\x09\x04\x63\x64\x72\x0a"
  "\x04\x13\x64\x69\x73\x63\x72\x69\x6d\x69\x6e\x61\x74\x65\x2d\x69"
  "\x74\x65\x6d\x73\x04\x14\x73\x70\x6c\x69\x74\x2d\x73\x75\x66\x66"
  "\x69\x78\x2d\x62\x6c\x6f\x63\x6b\x21\x0b\x04\x05\x12\x72\x65\x70"
  "\x6c\x61\x63\x65\x2d\x73\x75\x66\x66\x69\x78\x65\x73\x21\x0c\x05"
  "\x16\x72\x65\x70\x6c\x61\x63\x65\x2d\x73\x75\x66\x66\x69\x78\x2d"
  "\x62\x6c\x6f\x63\x6b\x21\x0d\x06\x1a\x22\x81\x89\x02\x19\x20\x81"
  "\x89\x02\x18\x1e\x81\x89\x02\x17\x1c\x81\x85\x02\x16\x1a\x81\x89"
  "\x02\x15\x18\x81\x85\x02\x14\x16\x81\x83\x02\x13\x14\x81\x83\x02"
  "\x12\x12\x83\x04\x11\x10\x81\x87\x02\x10\x0e\x81\x8b\x02\x0f\x0c"
  "\x81\x87\x02\x0e\x0a\x81\x87\x02\x0d\x08\x81\x87\x02\x0c\x06\x81"
  "\x87\x02\x0b\x04\x84\x06\x21\x35\x0e\x02\x04\x04\x0b\x05\x0d\x04"
  "\x1d\x08\x81\x85\x02\x1c\x06\x81\x85\x02\x1b\x04\x85\x08\x07\x11"
  "\x0f\x02\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x02\x09"
  "\x09\x0a\x04\x1b\x72\x69\x6e\x73\x74\x2d\x64\x69\x73\x63\x6f\x6e"
  "\x6e\x65\x63\x74\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x21\x03\x0c"
  "\x6d\x61\x6b\x65\x2d\x73\x62\x6c\x6f\x63\x6b\x04\x13\x6e\x6f\x64"
  "\x65\x2d\x69\x6e\x73\x65\x72\x74\x2d\x73\x6e\x6f\x64\x65\x21\x04"
  "\x13\x61\x64\x64\x2d\x72\x67\x72\x61\x70\x68\x2d\x62\x62\x6c\x6f"
  "\x63\x6b\x21\x05\x25\x12\x81\x83\x02\x24\x10\x81\x8b\x02\x23\x0e"
  "\x81\x89\x02\x22\x0c\x81\x8d\x02\x21\x0a\x81\x89\x02\x20\x08\x81"
  "\x87\x02\x1f\x06\x81\x85\x02\x1e\x04\x84\x06\x11\x23\x10\x02\x04"
  "\x17\x6e\x6f\x64\x65\x2d\x72\x65\x70\x6c\x61\x63\x65\x2d\x6f\x6e"
  "\x2d\x72\x69\x67\x68\x74\x21\x03\x19\x6e\x6f\x64\x65\x2d\x64\x69"
  "\x73\x63\x6f\x6e\x6e\x65\x63\x74\x2d\x6f\x6e\x2d\x6c\x65\x66\x74"
  "\x21\x04\x16\x64\x65\x6c\x65\x74\x65\x2d\x72\x67\x72\x61\x70\x68"
  "\x2d\x62\x62\x6c\x6f\x63\x6b\x21\x04\x29\x0a\x81\x89\x02\x28\x08"
  "\x81\x89\x02\x27\x06\x81\x87\x02\x26\x04\x85\x08\x09\x14\x11\x02"
  "\x08\x03\x16\x72\x67\x72\x61\x70\x68\x2f\x62\x62\x6c\x6f\x63\x6b"
  "\x2d\x63\x6c\x61\x73\x73\x65\x73\x12\x03\x17\x69\x6e\x69\x74\x69"
  "\x61\x6c\x2d\x62\x62\x6c\x6f\x63\x6b\x2d\x6d\x61\x74\x63\x68\x65"
  "\x73\x13\x04\x0b\x61\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70\x03\x0f"
  "\x73\x75\x66\x66\x69\x78\x2d\x63\x6c\x61\x73\x73\x65\x73\x14\x05"
  "\x2d\x0a\x81\x83\x02\x2c\x08\x81\x85\x02\x2b\x06\x83\x04\x2a\x04"
  "\x83\x04\x09\x15\x15\x02\x09\x0a\x09\x04\x04\x18\x6c\x69\x73\x74"
  "\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x6e\x65\x67\x61\x74"
  "\x69\x76\x65\x03\x08\x73\x62\x6c\x6f\x63\x6b\x3f\x16\x04\x17\x61"
  "\x64\x64\x2d\x70\x62\x6c\x6f\x63\x6b\x2d\x74\x6f\x2d\x63\x6c\x61"
  "\x73\x73\x65\x73\x21\x17\x04\x17\x61\x64\x64\x2d\x73\x62\x6c\x6f"
  "\x63\x6b\x2d\x74\x6f\x2d\x63\x6c\x61\x73\x73\x65\x73\x21\x18\x04"
  "\x08\x61\x70\x70\x65\x6e\x64\x21\x19\x07\x38\x18\x81\x87\x02\x37"
  "\x16\x81\x85\x02\x36\x14\x81\x83\x02\x35\x12\x83\x04\x34\x10\x81"
  "\x8b\x02\x33\x0e\x81\x87\x02\x32\x0c\x81\x85\x02\x31\x0a\x81\x8b"
  "\x02\x30\x08\x81\x87\x02\x2f\x06\x81\x89\x02\x2e\x04\x83\x04\x17"
  "\x2c\x1a\x02\x0a\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x1b\x09\x73"
  "\x65\x74\x2d\x63\x64\x72\x21\x1c\x02\x0a\x03\x0b\x73\x6e\x6f\x64"
  "\x65\x2d\x6e\x65\x78\x74\x1d\x02\x41\x14\x81\x8b\x02\x40\x12\x81"
  "\x8b\x02\x3f\x10\x81\x8b\x02\x3e\x0e\x81\x8d\x02\x3d\x0c\x81\x8d"
  "\x02\x3c\x0a\x81\x8b\x02\x3b\x08\x81\x87\x02\x3a\x06\x81\x85\x02"
  "\x39\x04\x84\x06\x13\x1f\x1e\x02\x0b\x1b\x1c\x02\x0a\x03\x12\x70"
  "\x6e\x6f\x64\x65\x2d\x61\x6c\x74\x65\x72\x6e\x61\x74\x69\x76\x65"
  "\x03\x11\x70\x6e\x6f\x64\x65\x2d\x63\x6f\x6e\x73\x65\x71\x75\x65"
  "\x6e\x74\x03\x4c\x18\x81\x8d\x02\x4b\x16\x81\x8f\x02\x4a\x14\x81"
  "\x8d\x02\x49\x12\x81\x8f\x02\x48\x10\x81\x8d\x02\x47\x0e\x81\x8d"
  "\x02\x46\x0c\x81\x8d\x02\x45\x0a\x81\x89\x02\x44\x08\x81\x87\x02"
  "\x43\x06\x81\x85\x02\x42\x04\x84\x06\x17\x27\x1f\x02\x0c\x0a\x04"
  "\x16\x66\x69\x6e\x64\x2d\x6d\x61\x74\x63\x68\x69\x6e\x67\x2d\x62"
  "\x62\x6c\x6f\x63\x6b\x73\x20\x04\x19\x03\x54\x12\xfd\xff\x03\x53"
  "\x10\xfd\xff\x03\x52\x0e\xfd\xff\x03\x51\x0c\x81\x83\x02\x50\x0a"
  "\x81\x87\x02\x4f\x08\x81\x85\x02\x4e\x06\x81\x83\x02\x4d\x04\x83"
  "\x04\x11\x1c\x19\x02\x0d\x02\x1c\x0a\x04\x63\x64\x72\x02\x04\x04"
  "\x04\x6d\x61\x70\x04\x15\x6c\x69\x73\x74\x2d\x73\x65\x61\x72\x63"
  "\x68\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x04\x05\x73\x6f\x72\x74"
  "\x03\x0d\x72\x69\x6e\x73\x74\x2d\x6c\x65\x6e\x67\x74\x68\x06\x76"
  "\x46\x81\x87\x02\x75\x44\x81\x85\x02\x74\x42\x81\x87\x02\x73\x40"
  "\x81\x85\x02\x72\x3e\x81\x85\x02\x71\x3c\x81\x85\x02\x70\x3a\x81"
  "\x85\x02\x6f\x38\x81\x85\x02\x6e\x36\x81\x83\x02\x6d\x34\x81\x85"
  "\x02\x6c\x32\x81\x85\x02\x6b\x30\x81\x85\x02\x6a\x2e\x81\x87\x02"
  "\x69\x2c\x81\x85\x02\x68\x2a\x81\x87\x02\x67\x28\x81\x85\x02\x66"
  "\x26\x81\x83\x02\x65\x24\x81\x87\x02\x64\x22\x81\x85\x02\x63\x20"
  "\x81\x85\x02\x62\x1e\x81\x83\x02\x61\x1c\x81\x83\x02\x60\x1a\x81"
  "\x85\x02\x5f\x18\x81\x85\x02\x5e\x16\x83\x04\x5d\x14\x81\x89\x02"
  "\x5c\x12\x81\x85\x02\x5b\x10\x81\x85\x02\x5a\x0e\x84\x06\x59\x0c"
  "\x81\x85\x02\x58\x0a\x81\x85\x02\x57\x08\x81\x85\x02\x56\x06\x81"
  "\x85\x02\x55\x04\x83\x04\x45\x5b\x1c\x02\x0e\x0a\x04\x12\x6d\x61"
  "\x74\x63\x68\x69\x6e\x67\x2d\x73\x75\x66\x66\x69\x78\x65\x73\x21"
  "\x04\x14\x69\x6e\x74\x65\x72\x65\x73\x74\x69\x6e\x67\x2d\x73\x75"
  "\x66\x66\x69\x78\x3f\x22\x04\x04\x84\x01\x1e\x81\x8b\x02\x83\x01"
  "\x1c\x81\x89\x02\x82\x01\x1a\x83\x04\x81\x01\x18\x81\x8b\x02\x80"
  "\x01\x16\x81\x89\x02\x7f\x14\x81\x8d\x02\x7e\x12\x81\x89\x02\x7d"
  "\x10\x81\x89\x02\x7c\x0e\x81\x89\x02\x7b\x0c\x81\x87\x02\x7a\x0a"
  "\x81\x89\x02\x79\x08\x81\x89\x02\x78\x06\x81\x85\x02\x77\x04\x84"
  "\x06\x1d\x2a\x02\x0f\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x18"
  "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c"
  "\x3a\x61\x63\x63\x65\x73\x73\x18\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x64\x65\x66\x69\x6e\x65\x18"
  "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c"
  "\x3a\x6c\x6f\x6f\x6b\x75\x70\x16\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x73\x65\x74\x21\x1d\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x75"
  "\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x19\x69\x6e\x74\x65\x72"
  "\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x75\x6e\x62\x6f"
  "\x75\x6e\x64\x22\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d"
  "\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x21\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65"
  "\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x23\x69\x6e\x74\x65\x72\x70\x72\x65\x74"
  "\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x63\x61\x63\x68\x65\x2d\x75\x6e"
  "\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x1a\x69\x6e\x76\x6f\x63\x61"
  "\x74\x69\x6f\x6e\x3a\x63\x6f\x6d\x70\x75\x74\x65\x64\x2d\x6c\x65"
  "\x78\x70\x72\x1b\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x63"
  "\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x12\x69"
  "\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x6c\x6f\x6f\x6b\x75\x70"
  "\x0c\x19\x15\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x09\x09\x19\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x65\x72\x72\x6f\x72\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x02\x03\x16\x03\x1d\x04\x10\x67\x65\x6e\x65\x72\x61\x6c"
  "\x2d\x63\x61\x72\x2d\x63\x64\x72\x1d\x04\x05\x6d\x65\x6d\x71\x05"
  "\x8e\x01\x16\x81\x83\x02\x8d\x01\x14\x81\x83\x02\x8c\x01\x12\x81"
  "\x85\x02\x8b\x01\x10\x81\x83\x02\x8a\x01\x0e\x81\x87\x02\x89\x01"
  "\x0c\x81\x87\x02\x88\x01\x0a\x81\x89\x02\x87\x01\x08\x81\x87\x02"
  "\x86\x01\x06\x81\x85\x02\x85\x01\x04\x84\x06\x15\x2d\x16\x02\x10"
  "\x0a\x08\x66\x61\x69\x6c\x75\x72\x65\x23\x09\x09\x03\x0f\x72\x69"
  "\x6e\x73\x74\x2d\x72\x65\x76\x65\x72\x73\x65\x64\x05\x0a\x6d\x61"
  "\x74\x63\x68\x2d\x72\x74\x6c\x09\x04\x09\x66\x6f\x72\x2d\x61\x6c"
  "\x6c\x3f\x04\x05\x65\x71\x76\x3f\x24\x05\xa6\x01\x32\x81\x85\x02"
  "\xa5\x01\x30\x81\x85\x02\xa4\x01\x2e\x81\x83\x02\xa3\x01\x2c\x83"
  "\x04\xa2\x01\x2a\x81\x8d\x02\xa1\x01\x28\x81\x8d\x02\xa0\x01\x26"
  "\x81\x8b\x02\x9f\x01\x24\x81\x89\x02\x9e\x01\x22\x81\x8b\x02\x9d"
  "\x01\x20\x81\x89\x02\x9c\x01\x1e\x81\x89\x02\x9b\x01\x1c\x81\x87"
  "\x02\x9a\x01\x1a\x81\x85\x02\x99\x01\x18\x81\x8d\x02\x98\x01\x16"
  "\x81\x93\x02\x97\x01\x14\x81\x93\x02\x96\x01\x12\x81\x91\x02\x95"
  "\x01\x10\x81\x91\x02\x94\x01\x0e\x81\x8d\x02\x93\x01\x0c\x81\x8b"
  "\x02\x92\x01\x0a\x81\x8d\x02\x91\x01\x08\x81\x89\x02\x90\x01\x06"
  "\x81\x8b\x02\x8f\x01\x04\x84\x06\x31\x44\x25\x02\x11\x02\x1b\x0d"
  "\x0a\x23\x07\x61\x73\x73\x69\x67\x6e\x13\x69\x64\x65\x6e\x74\x69"
  "\x74\x79\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x02\x04\x1d\x03"
  "\x10\x72\x74\x6c\x3a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3f"
  "\x04\x17\x72\x74\x6c\x3a\x6d\x61\x70\x2d\x73\x75\x62\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x73\x05\x06\x6d\x61\x74\x63\x68\x1d"
  "\x04\x24\x03\x20\x72\x74\x6c\x3a\x70\x73\x65\x75\x64\x6f\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x3f\x04\x19\x72\x65\x6d\x6f\x76\x65\x2d\x66\x72\x6f\x6d"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x1b\x08\xd1"
  "\x01\x58\x81\x85\x02\xd0\x01\x56\x81\x87\x02\xcf\x01\x54\x81\x8d"
  "\x02\xce\x01\x52\x81\x83\x02\xcd\x01\x50\x81\x83\x02\xcc\x01\x4e"
  "\x81\x83\x02\xcb\x01\x4c\x81\x83\x02\xca\x01\x4a\x81\x83\x02\xc9"
  "\x01\x48\x81\x83\x02\xc8\x01\x46\x81\x89\x02\xc7\x01\x44\x81\x89"
  "\x02\xc6\x01\x42\x81\x87\x02\xc5\x01\x40\x81\x8b\x02\xc4\x01\x3e"
  "\x81\x8b\x02\xc3\x01\x3c\x81\x8b\x02\xc2\x01\x3a\x81\x8b\x02\xc1"
  "\x01\x38\x81\x8b\x02\xc0\x01\x36\x81\x8b\x02\xbf\x01\x34\x81\x89"
  "\x02\xbe\x01\x32\x81\x85\x02\xbd\x01\x30\x81\x85\x02\xbc\x01\x2e"
  "\x81\x8b\x02\xbb\x01\x2c\x81\x87\x02\xba\x01\x2a\x81\x87\x02\xb9"
  "\x01\x28\x81\x85\x02\xb8\x01\x26\x81\x87\x02\xb7\x01\x24\x81\x89"
  "\x02\xb6\x01\x22\x81\x87\x02\xb5\x01\x20\x81\x83\x02\xb4\x01\x1e"
  "\x81\x8b\x02\xb3\x01\x1c\x81\x8b\x02\xb2\x01\x1a\x81\x8b\x02\xb1"
  "\x01\x18\x81\x89\x02\xb0\x01\x16\x81\x89\x02\xaf\x01\x14\x81\x89"
  "\x02\xae\x01\x12\x81\x87\x02\xad\x01\x10\x81\x89\x02\xac\x01\x0e"
  "\x81\x87\x02\xab\x01\x0c\x83\x04\xaa\x01\x0a\x81\x87\x02\xa9\x01"
  "\x08\x81\x89\x02\xa8\x01\x06\x81\x87\x02\xa7\x01\x04\x85\x08\x57"
  "\x74\x26\x02\x12\x0a\x04\x0a\x64\x65\x6c\x2d\x61\x73\x73\x76\x21"
  "\x04\x1b\x03\xd5\x01\x0a\x81\x85\x02\xd4\x01\x08\x81\x85\x02\xd3"
  "\x01\x06\x81\x89\x02\xd2\x01\x04\x84\x06\x09\x14\x27\x02\x13\x23"
  "\x09\x72\x65\x67\x69\x73\x74\x65\x72\x0a\x09\x63\x6f\x6e\x73\x74"
  "\x61\x6e\x74\x04\x05\x61\x73\x73\x76\x04\x24\x05\x1d\x04\xf2\x01"
  "\x3c\x81\x8d\x02\xf1\x01\x3a\x81\x89\x02\xf0\x01\x38\x81\x89\x02"
  "\xef\x01\x36\x81\x87\x02\xee\x01\x34\x81\x87\x02\xed\x01\x32\x81"
  "\x89\x02\xec\x01\x30\x81\x8b\x02\xeb\x01\x2e\x81\x91\x02\xea\x01"
  "\x2c\x81\x8b\x02\xe9\x01\x2a\x81\x8d\x02\xe8\x01\x28\x81\x8b\x02"
  "\xe7\x01\x26\x81\x87\x02\xe6\x01\x24\x81\x87\x02\xe5\x01\x22\x81"
  "\x89\x02\xe4\x01\x20\x81\x89\x02\xe3\x01\x1e\x81\x8b\x02\xe2\x01"
  "\x1c\x81\x8b\x02\xe1\x01\x1a\x81\x8b\x02\xe0\x01\x18\x81\x8b\x02"
  "\xdf\x01\x16\x81\x8b\x02\xde\x01\x14\x81\x89\x02\xdd\x01\x12\x81"
  "\x89\x02\xdc\x01\x10\x81\x8d\x02\xdb\x01\x0e\x81\x8d\x02\xda\x01"
  "\x0c\x81\x8b\x02\xd9\x01\x0a\x81\x8b\x02\xd8\x01\x08\x81\x89\x02"
  "\xd7\x01\x06\x81\x87\x02\xd6\x01\x04\x85\x08\x3b\x4b\x24\x13\x23"
  "\x23\x24\x04\x27\x04\x26\x04\x25\x04\x16\x04\x04\x1c\x04\x19\x04"
  "\x1f\x04\x1e\x04\x1a\x04\x15\x04\x11\x04\x10\x04\x0f\x04\x0e\x04"
  "\x04\x04\x13\x1d\x1b\x09\x21\x22\x20\x14\x13\x17\x18\x12\x0d\x0b"
  "\x0c\x17\x6d\x65\x72\x67\x65\x2d\x63\x6f\x6d\x6d\x6f\x6e\x2d\x73"
  "\x75\x66\x66\x69\x78\x65\x73\x21\x13\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04"
  "\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
rtlcsm_so_data_a6e34d48e380ed66 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rtlcsm_so_data_a6e34d48e380ed66 [0]))), (sizeof (prog_rtlcsm_so_data_a6e34d48e380ed66)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("rtlcsm.so", rtlcsm_so_data_a6e34d48e380ed66)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rtlcsm.so", "357817d5cbbc6a52")
