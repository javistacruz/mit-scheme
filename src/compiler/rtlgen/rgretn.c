/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:23-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define LABEL_1_11 15
#define LABEL_1_12 17
#define LABEL_1_15 19
#define LABEL_1_16 21
#define LABEL_1_14 23
#define LABEL_1_18 25
#define LABEL_1_19 27
#define LABEL_1_10 29
#define ENVIRONMENT_LABEL_1_3 50
#define DEBUGGING_LABEL_1_2 49
#define OBJECT_1_8 48
#define OBJECT_1_7 47
#define OBJECT_1_6 46
#define OBJECT_1_5 45
#define OBJECT_1_4 44
#define OBJECT_1_3 43
#define OBJECT_1_2 42
#define OBJECT_1_1 41
#define OBJECT_1_0 40
#define EXECUTE_CACHE_1_20 31
#define EXECUTE_CACHE_1_17 33
#define EXECUTE_CACHE_1_13 35
#define FREE_REFERENCE_1_1 38
#define FREE_REFERENCE_1_0 39
#define FREE_REFERENCES_LABEL_1_0 30
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd98;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd76;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd57;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_1_4);
      goto generate_return_16;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto loop_14;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_1_15);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_1_18);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_1_19);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_return_29)
DEFLABEL (generate_return_16)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd13.Lng))))
    goto label_32;
  (Wrd7.Obj) = ((Wrd11.pObj) [16]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_31)
  goto loop_14;

DEFLABEL (label_32)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (loop_30)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_1_6);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_1_2]))
    goto label_42;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_41;
  Wrd10 = Wrd14;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_39;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_37;
  Wrd8 = Wrd12;

DEFLABEL (label_36)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (Wrd8.Obj))
    goto label_33;
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_35;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_34)
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_14;

DEFLABEL (label_35)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_8]), 1);

DEFLABEL (label_27)
  (Wrd17.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_18])), (Wrd9.pObj));

DEFLABEL (label_26)
  (Wrd8.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd11.pObj));

DEFLABEL (label_19)
  (Wrd10.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_52;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd33.Lng))))
    goto label_52;
  (Wrd27.Obj) = ((Wrd31.pObj) [10]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_51)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_50;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd49.Lng))))
    goto label_50;
  (Wrd43.Obj) = ((Wrd47.pObj) [9]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_49)
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 10))
    goto label_48;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd65.Lng))))
    goto label_48;
  (Wrd57.Obj) = ((Wrd63.pObj) [15]);

DEFLABEL (label_47)
  (Rsp [2]) = (Wrd57.Obj);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd85.Obj) = (Rsp [4]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 10))
    goto label_46;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd84.Lng))))
    goto label_46;
  (Wrd76.Obj) = ((Wrd82.pObj) [11]);

DEFLABEL (label_45)
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_44;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [0]);
  (* (--Rsp)) = (Wrd93.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (label_44)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd87.Obj) = (Rsp [4]);
  (Wrd88.Obj) = (current_block [OBJECT_1_6]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_24)
  (Wrd76.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd68.Obj) = (Rsp [3]);
  (Wrd69.Obj) = (current_block [OBJECT_1_5]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_23)
  (Wrd57.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.Obj) = (current_block [OBJECT_1_4]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_1_3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_51;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 12
#define DEBUGGING_LABEL_2_2 11
#define EXECUTE_CACHE_2_7 7
#define EXECUTE_CACHE_2_6 9
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_2_4);
      goto generate_trivial_return_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_trivial_return_4)
DEFLABEL (generate_trivial_return_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [3]) = Rvl;
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_12 7
#define LABEL_3_7 9
#define TAG_3_8 3
#define LABEL_3_16 11
#define LABEL_3_9 13
#define LABEL_3_10 15
#define LABEL_3_14 17
#define TAG_3_15 7
#define LABEL_3_18 19
#define ENVIRONMENT_LABEL_3_3 32
#define DEBUGGING_LABEL_3_2 31
#define EXECUTE_CACHE_3_19 21
#define EXECUTE_CACHE_3_17 23
#define EXECUTE_CACHE_3_13 25
#define EXECUTE_CACHE_3_11 27
#define FREE_REFERENCE_3_0 30
#define FREE_REFERENCES_LABEL_3_0 20
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_3_4);
      goto trivial_return_operand_6;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_3_12);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto lambda_13;

    case 4:
      current_block = (Rpc - LABEL_3_16);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_3_9);
      goto lambda_0;

    case 6:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_3_14);
      goto lambda_14;

    case 8:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trivial_return_operand_11)
DEFLABEL (trivial_return_operand_6)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_17;
  Wrd9 = Wrd13;

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_12])), (Wrd10.pObj));

DEFLABEL (label_8)
  (Wrd9.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_14])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_19;
  Wrd14 = Wrd18;

DEFLABEL (label_18)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_16])), (Wrd15.pObj));

DEFLABEL (label_9)
  (Wrd14.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_15)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_3_9);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_3_14);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_18);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 7
#define DEBUGGING_LABEL_4_2 6
#define OBJECT_4_1 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto return_operand_effect_generator_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (return_operand_effect_generator_3)
DEFLABEL (return_operand_effect_generator_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

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

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 7
#define DEBUGGING_LABEL_5_2 6
#define OBJECT_5_1 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto return_operand_predicate_generator_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (return_operand_predicate_generator_3)
DEFLABEL (return_operand_predicate_generator_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

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

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto return_operand_value_generator_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (return_operand_value_generator_3)
DEFLABEL (return_operand_value_generator_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
rgretn_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto return_operand_known_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (return_operand_known_value_3)
DEFLABEL (return_operand_known_value_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define ENVIRONMENT_LABEL_8_3 17
#define DEBUGGING_LABEL_8_2 16
#define OBJECT_8_3 15
#define OBJECT_8_2 14
#define OBJECT_8_1 13
#define OBJECT_8_0 12
#define FREE_REFERENCE_8_0 11
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_8_4);
      goto return_operandP_4;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (return_operandP_10)
DEFLABEL (return_operandP_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 62))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_18)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd29.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_14)
  (Wrd46.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd46.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_8_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_8_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 9
#define DEBUGGING_LABEL_9_2 8
#define OBJECT_9_1 7
#define OBJECT_9_0 6
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_9_4);
      goto effect_prefix_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (effect_prefix_5)
DEFLABEL (effect_prefix_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_9_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_7 5
#define LABEL_10_8 7
#define LABEL_10_5 9
#define LABEL_10_15 11
#define LABEL_10_16 13
#define LABEL_10_17 15
#define LABEL_10_13 17
#define LABEL_10_20 19
#define LABEL_10_21 21
#define LABEL_10_22 23
#define LABEL_10_24 25
#define LABEL_10_9 27
#define LABEL_10_25 29
#define LABEL_10_26 31
#define LABEL_10_27 33
#define LABEL_10_28 35
#define LABEL_10_10 37
#define LABEL_10_30 39
#define LABEL_10_19 41
#define LABEL_10_32 43
#define LABEL_10_23 45
#define LABEL_10_29 47
#define LABEL_10_31 49
#define LABEL_10_33 51
#define LABEL_10_34 53
#define ENVIRONMENT_LABEL_10_3 95
#define DEBUGGING_LABEL_10_2 94
#define OBJECT_10_12 93
#define OBJECT_10_11 92
#define OBJECT_10_10 91
#define OBJECT_10_9 90
#define OBJECT_10_8 89
#define OBJECT_10_7 88
#define OBJECT_10_6 87
#define OBJECT_10_5 86
#define OBJECT_10_4 85
#define OBJECT_10_3 84
#define OBJECT_10_2 83
#define OBJECT_10_1 82
#define OBJECT_10_0 81
#define EXECUTE_CACHE_10_40 55
#define EXECUTE_CACHE_10_39 57
#define EXECUTE_CACHE_10_38 59
#define EXECUTE_CACHE_10_37 61
#define EXECUTE_CACHE_10_36 63
#define EXECUTE_CACHE_10_35 65
#define EXECUTE_CACHE_10_18 67
#define EXECUTE_CACHE_10_14 69
#define EXECUTE_CACHE_10_12 71
#define EXECUTE_CACHE_10_11 73
#define EXECUTE_CACHE_10_6 75
#define FREE_REFERENCE_10_2 78
#define FREE_REFERENCE_10_1 79
#define FREE_REFERENCE_10_0 80
#define FREE_REFERENCES_LABEL_10_0 54
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd31;
  machine_word Wrd38;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd62;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd55;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd70;
  machine_word Wrd69;
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
      goto generate_return__29;

    case 1:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_10_15);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_10_16);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_10_17);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_10_20);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_10_21);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_10_22);
      goto label_37;

    case 11:
      current_block = (Rpc - LABEL_10_24);
      goto label_36;

    case 12:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_10_25);
      goto label_38;

    case 14:
      current_block = (Rpc - LABEL_10_26);
      goto label_39;

    case 15:
      current_block = (Rpc - LABEL_10_27);
      goto label_40;

    case 16:
      current_block = (Rpc - LABEL_10_28);
      goto label_41;

    case 17:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_24;

    case 18:
      current_block = (Rpc - LABEL_10_30);
      goto label_42;

    case 19:
      current_block = (Rpc - LABEL_10_19);
      goto continuation_10;

    case 20:
      current_block = (Rpc - LABEL_10_32);
      goto label_43;

    case 21:
      current_block = (Rpc - LABEL_10_23);
      goto lambda_11;

    case 22:
      current_block = (Rpc - LABEL_10_29);
      goto continuation_23;

    case 23:
      current_block = (Rpc - LABEL_10_31);
      goto continuation_18;

    case 24:
      current_block = (Rpc - LABEL_10_33);
      goto continuation_17;

    case 25:
      current_block = (Rpc - LABEL_10_34);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_return__45)
DEFLABEL (generate_return__29)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 10))
    goto label_68;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_68;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_67)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_66;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_66;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);

DEFLABEL (label_65)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_64;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd42.Lng))))
    goto label_64;
  (Wrd37.Obj) = ((Wrd40.pObj) [8]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_63)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd64.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_48)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_47)
  (Wrd72.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [4]);
  if (! ((Wrd70.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_47;
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd78.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_62;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd16.Lng))))
    goto label_62;
  (Wrd8.Obj) = ((Wrd14.pObj) [17]);

DEFLABEL (label_61)
  if ((Wrd8.Obj) == (current_block [OBJECT_10_9]))
    goto label_51;
  (Wrd25.Obj) = (current_block [OBJECT_10_6]);
  (* (--Rsp)) = (Wrd25.Obj);
  goto label_50;

DEFLABEL (label_51)
  (Wrd28.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_50)
DEFLABEL (label_60)
  (Wrd26.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_10_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_37]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_59;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_59;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_58)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_57;
  Wrd25 = Wrd29;

DEFLABEL (label_56)
  Wrd24 = Wrd25;
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_55;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd37.Lng))))
    goto label_55;
  (Wrd31.Obj) = ((Wrd35.pObj) [3]);

DEFLABEL (label_54)
  (Wrd44.Obj) = (* (Rsp++));
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_53;
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd49.uLng) == 26))
    goto label_53;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) (Wrd50.Lng)) < ((unsigned long) (Wrd53.Lng))))
    goto label_53;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd44.Obj));
  (Wrd48.pObj) = (& ((Wrd51.pObj) [(Wrd46.Lng)]));
  (Wrd45.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_52)
  (Rsp [1]) = (Wrd45.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_53)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_28]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

DEFLABEL (label_41)
  (Wrd45.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd40.Obj) = (current_block [OBJECT_10_5]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_27]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 2);

DEFLABEL (label_40)
  (Wrd31.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_26])), (Wrd26.pObj));

DEFLABEL (label_39)
  (Wrd25.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_10_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_25]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_62)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_10_8]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_30]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

DEFLABEL (label_42)
  (Wrd8.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd45.Obj) = (current_block [OBJECT_10_4]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_17]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd32.Obj) = (current_block [OBJECT_10_2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

DEFLABEL (label_32)
  (Wrd23.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_10_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

DEFLABEL (label_31)
  (Wrd7.Obj) = Rvl;
  goto label_67;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_73;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_80;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_80;
  (Wrd13.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_79)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_78;
  Wrd28 = Wrd32;

DEFLABEL (label_77)
  (Wrd34.Obj) = (* (Rsp++));
  if ((Wrd28.Obj) == (Wrd34.Obj))
    goto label_74;

DEFLABEL (label_73)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_23]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd46.Obj) = (Rsp [6]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_72;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd45.Lng))))
    goto label_72;
  (Wrd39.Obj) = ((Wrd43.pObj) [4]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_71)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_10_19);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_31]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_70;
  Wrd9 = Wrd13;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_33]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_34]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_10_10]);
  (Wrd25.Obj) = (current_block [OBJECT_10_11]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_35]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_10_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_40]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_10_33);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_39]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_10_31);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_38]));

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_32])), (Wrd10.pObj));

DEFLABEL (label_43)
  (Wrd9.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd48.Obj) = (Rsp [6]);
  (Wrd49.Obj) = (current_block [OBJECT_10_2]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_24]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd62.Obj) = (Rsp [5]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 62))
    goto label_76;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd61.Lng))))
    goto label_76;
  (Wrd55.Obj) = ((Wrd59.pObj) [2]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_75)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_76)
  (Wrd64.Obj) = (Rsp [5]);
  (Wrd65.Obj) = (current_block [OBJECT_10_6]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_22]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_7]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_21])), (Wrd29.pObj));

DEFLABEL (label_35)
  (Wrd28.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_10_5]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (lambda_46)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_10_23);
  (Wrd5.Obj) = (current_block [OBJECT_10_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_36]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define ENVIRONMENT_LABEL_11_3 14
#define DEBUGGING_LABEL_11_2 13
#define OBJECT_11_2 12
#define OBJECT_11_1 11
#define OBJECT_11_0 10
#define FREE_REFERENCE_11_0 9
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_11_4);
      goto continuation_effectP_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_effectP_6)
DEFLABEL (continuation_effectP_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_13;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_13;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_12)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_11;
  Wrd22 = Wrd26;

DEFLABEL (label_10)
  (Wrd28.Obj) = (* (Rsp++));
  if ((Wrd22.Obj) == (Wrd28.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_11_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_6])), (Wrd23.pObj));

DEFLABEL (label_4)
  (Wrd22.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_7 5
#define LABEL_12_5 7
#define LABEL_12_10 9
#define LABEL_12_6 11
#define LABEL_12_9 13
#define ENVIRONMENT_LABEL_12_3 26
#define DEBUGGING_LABEL_12_2 25
#define OBJECT_12_3 24
#define OBJECT_12_2 23
#define OBJECT_12_1 22
#define OBJECT_12_0 21
#define EXECUTE_CACHE_12_12 15
#define EXECUTE_CACHE_12_11 17
#define EXECUTE_CACHE_12_8 19
#define FREE_REFERENCES_LABEL_12_0 14
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_12_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_12_7);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_12_10);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_14;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd19.Lng))))
    goto label_14;
  (Wrd13.Obj) = ((Wrd17.pObj) [11]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_12;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_12;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (label_12)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_12_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_12_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_8 7
#define LABEL_13_5 9
#define LABEL_13_12 11
#define LABEL_13_6 13
#define LABEL_13_16 15
#define LABEL_13_17 17
#define LABEL_13_10 19
#define LABEL_13_11 21
#define LABEL_13_14 23
#define TAG_13_15 10
#define LABEL_13_20 25
#define ENVIRONMENT_LABEL_13_3 47
#define DEBUGGING_LABEL_13_2 46
#define OBJECT_13_6 45
#define OBJECT_13_5 44
#define OBJECT_13_4 43
#define OBJECT_13_3 42
#define OBJECT_13_2 41
#define OBJECT_13_1 40
#define OBJECT_13_0 39
#define EXECUTE_CACHE_13_22 27
#define EXECUTE_CACHE_13_21 29
#define EXECUTE_CACHE_13_19 31
#define EXECUTE_CACHE_13_18 33
#define EXECUTE_CACHE_13_13 35
#define EXECUTE_CACHE_13_9 37
#define FREE_REFERENCES_LABEL_13_0 26
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_11;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_13_8);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_13_12);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_13_16);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_13_17);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_13_11);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_13_14);
      goto lambda_20;

    case 11:
      current_block = (Rpc - LABEL_13_20);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_31;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd19.Lng))))
    goto label_31;
  (Wrd11.Obj) = ((Wrd17.pObj) [12]);

DEFLABEL (label_30)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_29;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_24;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_24;
  (Wrd9.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_23)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_22;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd20.Lng))))
    goto label_22;
  (Wrd14.Obj) = ((Wrd18.pObj) [11]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_18]));

DEFLABEL (label_22)
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.Obj) = (current_block [OBJECT_13_3]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_13_6]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_5]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_14])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd25 = Wrd24;
  (Wrd26.Obj) = (Rsp [3]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_27;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd35.Lng))))
    goto label_27;
  (Wrd29.Obj) = ((Wrd33.pObj) [4]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_26)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_27)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.Obj) = (current_block [OBJECT_13_4]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_5]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_13_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_13)
  (Wrd11.Obj) = Rvl;
  goto label_30;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_13_14);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_20);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_6 5
#define LABEL_14_7 7
#define LABEL_14_8 9
#define LABEL_14_5 11
#define LABEL_14_12 13
#define LABEL_14_10 15
#define LABEL_14_11 17
#define ENVIRONMENT_LABEL_14_3 34
#define DEBUGGING_LABEL_14_2 33
#define OBJECT_14_3 32
#define OBJECT_14_2 31
#define OBJECT_14_1 30
#define OBJECT_14_0 29
#define EXECUTE_CACHE_14_15 19
#define EXECUTE_CACHE_14_14 21
#define EXECUTE_CACHE_14_13 23
#define EXECUTE_CACHE_14_9 25
#define FREE_REFERENCE_14_0 28
#define FREE_REFERENCES_LABEL_14_0 18
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
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
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_14_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_14_12);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_12)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_16;
  Wrd10 = Wrd14;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_14;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd20.Lng))))
    goto label_14;
  (Wrd14.Obj) = ((Wrd18.pObj) [11]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.Obj) = (current_block [OBJECT_14_2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_8])), (Wrd11.pObj));

DEFLABEL (label_7)
  (Wrd10.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_17)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_21;
  Wrd18 = Wrd22;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_19;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_19;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_18)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_19)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_14_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_6])), (Wrd19.pObj));

DEFLABEL (label_8)
  (Wrd18.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_6 9
#define LABEL_15_11 11
#define LABEL_15_17 13
#define LABEL_15_18 15
#define LABEL_15_19 17
#define LABEL_15_20 19
#define LABEL_15_21 21
#define LABEL_15_15 23
#define LABEL_15_23 25
#define LABEL_15_16 27
#define LABEL_15_9 29
#define TAG_15_10 13
#define LABEL_15_27 31
#define LABEL_15_12 33
#define TAG_15_13 15
#define LABEL_15_22 35
#define LABEL_15_25 37
#define LABEL_15_33 39
#define LABEL_15_26 41
#define LABEL_15_28 43
#define LABEL_15_31 45
#define LABEL_15_32 47
#define ENVIRONMENT_LABEL_15_3 73
#define DEBUGGING_LABEL_15_2 72
#define OBJECT_15_8 71
#define OBJECT_15_7 70
#define OBJECT_15_6 69
#define OBJECT_15_5 68
#define OBJECT_15_4 67
#define OBJECT_15_3 66
#define OBJECT_15_2 65
#define OBJECT_15_1 64
#define OBJECT_15_0 63
#define EXECUTE_CACHE_15_34 49
#define EXECUTE_CACHE_15_30 51
#define EXECUTE_CACHE_15_29 53
#define EXECUTE_CACHE_15_24 55
#define EXECUTE_CACHE_15_14 57
#define EXECUTE_CACHE_15_8 59
#define FREE_REFERENCE_15_0 62
#define FREE_REFERENCES_LABEL_15_0 48
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd58;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd54;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd99;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd95;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd101;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd91;
  machine_word Wrd87;
  machine_word Wrd88;
  machine_word Wrd5;
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
      goto lambda_24;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_15_11);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_15_17);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_15_18);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_15_19);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_15_20);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_15_21);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_15_15);
      goto continuation_22;

    case 11:
      current_block = (Rpc - LABEL_15_23);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_15_16);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_15_9);
      goto lambda_39;

    case 14:
      current_block = (Rpc - LABEL_15_27);
      goto label_35;

    case 15:
      current_block = (Rpc - LABEL_15_12);
      goto lambda_40;

    case 16:
      current_block = (Rpc - LABEL_15_22);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_15_25);
      goto continuation_8;

    case 18:
      current_block = (Rpc - LABEL_15_33);
      goto label_36;

    case 19:
      current_block = (Rpc - LABEL_15_26);
      goto continuation_7;

    case 20:
      current_block = (Rpc - LABEL_15_28);
      goto continuation_10;

    case 21:
      current_block = (Rpc - LABEL_15_31);
      goto continuation_5;

    case 22:
      current_block = (Rpc - LABEL_15_32);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_38)
DEFLABEL (lambda_24)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_62;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_62;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_61)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_60;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd32.Lng))))
    goto label_60;
  (Wrd26.Obj) = ((Wrd30.pObj) [11]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_54;
  Wrd13 = Wrd17;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_52;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd27.Lng))))
    goto label_52;
  (Wrd19.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_51)
  (Wrd35.Obj) = (* (Rsp++));
  if ((Wrd19.Obj) == (Wrd35.Obj))
    goto label_47;

DEFLABEL (label_46)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_44;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd44.Lng))))
    goto label_44;
  (Wrd38.Obj) = ((Wrd42.pObj) [7]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_15_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_24]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_15_15);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_42;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_42;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_41)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_15_22);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_30]));

DEFLABEL (label_42)
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.Obj) = (current_block [OBJECT_15_8]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.Obj) = (current_block [OBJECT_15_7]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_21]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_30)
DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_47)
  (Wrd78.Obj) = (Rsp [3]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_50;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd77.Lng))))
    goto label_50;
  (Wrd54.Obj) = ((Wrd75.pObj) [3]);
  if (! ((Wrd54.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_46;

DEFLABEL (label_49)
  (Wrd65.Obj) = (Rsp [2]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 10))
    goto label_48;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd64.Lng))))
    goto label_48;
  (Wrd58.Obj) = ((Wrd62.pObj) [8]);
  (* (--Rsp)) = (Wrd58.Obj);
  goto label_43;

DEFLABEL (label_48)
  (Wrd67.Obj) = (Rsp [2]);
  (Wrd68.Obj) = (current_block [OBJECT_15_6]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_20]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_31)
  goto label_45;

DEFLABEL (label_50)
  (Wrd80.Obj) = (Rsp [3]);
  (Wrd81.Obj) = (current_block [OBJECT_15_4]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_46;

DEFLABEL (label_52)
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.Obj) = (current_block [OBJECT_15_5]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_18]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_29)
  (Wrd19.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_17])), (Wrd14.pObj));

DEFLABEL (label_28)
  (Wrd13.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd88.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_9])));
  Rhp += 1;
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd88.pObj)));
  ((Wrd88.pObj) [2]) = Rvl;
  (Rsp [1]) = (Wrd87.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd91.Obj) = (Rsp [1]);
  if ((Wrd91.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd95.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_12])));
  Rhp += 1;
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd95.pObj)));
  Wrd96 = Wrd95;
  (Wrd97.Obj) = (Rsp [0]);
  ((Wrd96.pObj) [2]) = (Wrd97.Obj);
  (Rsp [3]) = (Wrd94.Obj);
  (Wrd99.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd99.Obj);
  (Rsp [2]) = (Wrd91.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_14]));

DEFLABEL (label_56)
  (Wrd110.Obj) = (Rsp [2]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 62))
    goto label_58;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd109.Lng))))
    goto label_58;
  (Wrd101.Obj) = ((Wrd107.pObj) [3]);

DEFLABEL (label_57)
  (Rsp [2]) = (Wrd101.Obj);
  (Wrd117.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd117.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_58)
  (Wrd112.Obj) = (Rsp [2]);
  (Wrd113.Obj) = (current_block [OBJECT_15_4]);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_33)
  (Wrd101.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_15_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_15_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_15_9);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_25]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_26]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_66;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd24.Lng))))
    goto label_66;
  (Wrd16.Obj) = ((Wrd22.pObj) [8]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_65)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15_25);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_31]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_32]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_64;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd24.Lng))))
    goto label_64;
  (Wrd16.Obj) = ((Wrd22.pObj) [7]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_63)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_32);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_24]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15_31);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_34]));

DEFLABEL (label_64)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [2]);
  (Wrd32.Obj) = (current_block [OBJECT_15_7]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_33]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [2]);
  (Wrd32.Obj) = (current_block [OBJECT_15_6]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_27]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_15_12);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_29]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15_28);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  goto lambda_9;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_10 7
#define LABEL_16_7 9
#define LABEL_16_8 11
#define TAG_16_9 4
#define LABEL_16_11 13
#define ENVIRONMENT_LABEL_16_3 26
#define DEBUGGING_LABEL_16_2 25
#define OBJECT_16_3 24
#define OBJECT_16_2 23
#define OBJECT_16_1 22
#define OBJECT_16_0 21
#define EXECUTE_CACHE_16_13 15
#define EXECUTE_CACHE_16_12 17
#define EXECUTE_CACHE_16_6 19
#define FREE_REFERENCES_LABEL_16_0 14
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_16_4);
      goto use_temporary_register_9;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_10);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_16_8);
      goto lambda_14;

    case 5:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (use_temporary_register_13)
DEFLABEL (use_temporary_register_9)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_8])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_16;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_16;
  (Wrd14.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_15)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (current_block [OBJECT_16_2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_16_3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_11);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_13]));

DEFLABEL (label_16)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_16_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_16_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_5 3
#define LABEL_17_4 5
#define LABEL_17_6 7
#define LABEL_17_9 9
#define LABEL_17_7 11
#define LABEL_17_12 13
#define LABEL_17_13 15
#define LABEL_17_16 17
#define LABEL_17_17 19
#define LABEL_17_18 21
#define LABEL_17_10 23
#define LABEL_17_19 25
#define LABEL_17_20 27
#define LABEL_17_21 29
#define LABEL_17_24 31
#define LABEL_17_25 33
#define LABEL_17_14 35
#define LABEL_17_27 37
#define LABEL_17_22 39
#define LABEL_17_30 41
#define ENVIRONMENT_LABEL_17_3 75
#define DEBUGGING_LABEL_17_2 74
#define OBJECT_17_12 73
#define OBJECT_17_11 72
#define OBJECT_17_10 71
#define OBJECT_17_9 70
#define OBJECT_17_8 69
#define OBJECT_17_7 68
#define OBJECT_17_6 67
#define OBJECT_17_5 66
#define OBJECT_17_4 65
#define OBJECT_17_3 64
#define OBJECT_17_2 63
#define OBJECT_17_1 62
#define OBJECT_17_0 61
#define EXECUTE_CACHE_17_31 43
#define EXECUTE_CACHE_17_29 45
#define EXECUTE_CACHE_17_28 47
#define EXECUTE_CACHE_17_26 49
#define EXECUTE_CACHE_17_23 51
#define EXECUTE_CACHE_17_15 53
#define EXECUTE_CACHE_17_11 55
#define EXECUTE_CACHE_17_8 57
#define FREE_REFERENCE_17_0 60
#define FREE_REFERENCES_LABEL_17_0 42
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgretn_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd85;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd59;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd50;
  machine_word Wrd88;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd101;
  machine_word Wrd106;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd107;
  machine_word Wrd90;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd54;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd49;
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_17_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_17_4);
      goto return_operator_pop_frames_28;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_31;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_17_12);
      goto lambda_6;

    case 6:
      current_block = (Rpc - LABEL_17_13);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_17_16);
      goto continuation_18;

    case 8:
      current_block = (Rpc - LABEL_17_17);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_17_18);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_17_19);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_17_20);
      goto label_34;

    case 13:
      current_block = (Rpc - LABEL_17_21);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_17_24);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_17_25);
      goto label_37;

    case 16:
      current_block = (Rpc - LABEL_17_14);
      goto continuation_3;

    case 17:
      current_block = (Rpc - LABEL_17_27);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_17_22);
      goto continuation_22;

    case 19:
      current_block = (Rpc - LABEL_17_30);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (return_operator_pop_frames_41)
DEFLABEL (return_operator_pop_frames_28)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_17_0]);
  (Wrd49.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd49.Lng))))
    goto label_72;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd46.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_71;

DEFLABEL (label_70)
  (Wrd13.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_43;
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_43)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_45;
  (Wrd15.Obj) = (current_block [OBJECT_17_4]);
  goto label_44;

DEFLABEL (label_45)
  (Wrd15.Obj) = (current_block [OBJECT_17_3]);

DEFLABEL (label_44)
DEFLABEL (label_69)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_66;

DEFLABEL (label_65)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_17_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;

DEFLABEL (label_46)
  Rsp = (& (Rsp [3]));
  goto lambda_6;

DEFLABEL (label_47)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_64;
  Wrd8 = Wrd12;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_62;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_62;
  (Wrd14.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_61)
  (Wrd30.Obj) = (* (Rsp++));
  if ((Wrd14.Obj) == (Wrd30.Obj))
    goto label_46;
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_60;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd39.Lng))))
    goto label_60;
  (Wrd33.Obj) = ((Wrd37.pObj) [20]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_59)
  (Wrd47.Obj) = (Rsp [0]);
  if (! ((Wrd47.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_48;
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_22]))));
  (* (--Rsp)) = (Wrd88.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_23]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_17_22);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_30]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_6;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_17_30);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_31]));

DEFLABEL (label_48)
  (Wrd50.Obj) = (Rsp [1]);
  if ((Wrd47.Obj) == (Wrd50.Obj))
    goto label_50;

DEFLABEL (label_49)
  (Wrd51.Obj) = (current_block [OBJECT_17_5]);
  (Rsp [3]) = (Wrd51.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_27]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_17_8]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_28]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_17_27);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_29]));

DEFLABEL (label_50)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd69.uLng) == 10))
    goto label_58;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd67.Lng))))
    goto label_58;
  (Wrd59.Obj) = ((Wrd65.pObj) [7]);

DEFLABEL (label_57)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd75.uLng) == 26))
    goto label_56;
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! ((Wrd85.Lng) == 0))
    goto label_49;

DEFLABEL (label_55)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd84.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_26]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_17_16);
  (Wrd90.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd90.uLng) == 26))
    goto label_54;
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd107.Lng) == 0))
    goto label_49;

DEFLABEL (label_53)
  (Wrd96.Obj) = (Rsp [4]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 26))
    goto label_52;
  (Wrd106.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  if (! ((Wrd106.Lng) == 0))
    goto label_49;

DEFLABEL (label_51)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_51;

DEFLABEL (label_54)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_53;

DEFLABEL (label_56)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_25]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_55;

DEFLABEL (label_58)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.Obj) = (current_block [OBJECT_17_11]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_24]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_9]), 2);

DEFLABEL (label_36)
  (Wrd59.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (current_block [OBJECT_17_10]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_21]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_9]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.Obj) = (current_block [OBJECT_17_8]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_20]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_9]), 2);

DEFLABEL (label_34)
  (Wrd14.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_19])), (Wrd9.pObj));

DEFLABEL (label_33)
  (Wrd8.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_68;
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_68;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd39.Lng) = ((Wrd41.Lng) + (Wrd43.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd39.Lng)))
    goto label_68;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));

DEFLABEL (label_67)
  (Rsp [2]) = (Wrd34.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_6;

DEFLABEL (label_68)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_30)
  (Wrd34.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_71)
  Rsp = (& (Rsp [2]));
  goto label_66;

DEFLABEL (label_72)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  goto label_71;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  goto label_66;

DEFLABEL (lambda_42)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_17_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_75;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd29.Lng) == 0))
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd12.Obj) = (current_block [OBJECT_17_5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_17_6]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_17_7]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_14);
  (Wrd9.Obj) = (current_block [OBJECT_17_6]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_17_12]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_29]));

DEFLABEL (label_75)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  goto label_73;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_13 15
#define LABEL_18 17
#define LABEL_14 19
#define TAG_15 8
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_19 25
#define LABEL_22 27
#define LABEL_20 29
#define LABEL_25 31
#define LABEL_21 33
#define LABEL_24 35
#define LABEL_28 37
#define LABEL_27 39
#define LABEL_31 41
#define LABEL_30 43
#define LABEL_33 45
#define LABEL_32 47
#define LABEL_34 49
#define LABEL_35 51
#define LABEL_36 53
#define ENVIRONMENT_LABEL_3 99
#define DEBUGGING_LABEL_2 98
#define PURIFICATION_ROOT 97
#define OBJECT_24 96
#define OBJECT_23 95
#define OBJECT_22 94
#define OBJECT_21 93
#define OBJECT_20 92
#define OBJECT_19 91
#define OBJECT_18 90
#define OBJECT_17 89
#define OBJECT_16 88
#define OBJECT_15 87
#define OBJECT_14 86
#define OBJECT_13 85
#define OBJECT_12 84
#define OBJECT_11 83
#define OBJECT_10 82
#define OBJECT_9 81
#define OBJECT_8 80
#define OBJECT_7 79
#define OBJECT_6 78
#define OBJECT_5 77
#define OBJECT_4 76
#define OBJECT_3 75
#define OBJECT_2 74
#define OBJECT_1 73
#define OBJECT_0 72
#define EXECUTE_CACHE_29 55
#define EXECUTE_CACHE_26 57
#define EXECUTE_CACHE_23 59
#define FREE_REFERENCE_2 62
#define FREE_REFERENCE_1 63
#define FREE_REFERENCE_0 64
#define GLOBAL_EXECUTE_CACHE_12 66
#define GLOBAL_EXECUTE_CACHE_8 68
#define GLOBAL_EXECUTE_CACHE_5 70
#define FREE_REFERENCES_LABEL_0 54
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rgretn_so_f5fd8f391c838fbc (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_6);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto make_return_operand_32;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_22);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_25);
      goto label_27;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_18;

    case 17:
      current_block = (Rpc - LABEL_28);
      goto label_28;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_31);
      goto label_29;

    case 20:
      current_block = (Rpc - LABEL_30);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_33);
      goto label_30;

    case 22:
      current_block = (Rpc - LABEL_32);
      goto continuation_21;

    case 23:
      current_block = (Rpc - LABEL_34);
      goto label_34;

    case 24:
      current_block = (Rpc - LABEL_35);
      goto label_35;

    case 25:
      current_block = (Rpc - LABEL_36);
      goto expression_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_23)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_35])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_35)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_34)
  {
    static const short sections [] =
      {
	0,
	2,
	1,
	2,
	2,
	1,
	1,
	1,
	2,
	0,
	1,
	0,
	0,
	0,
	0,
	2,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 17)
      goto label_33;
    blocks = (current_block [OBJECT_24]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_34])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_33)
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
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_49;
  Wrd11 = Wrd15;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_47;
  Wrd11 = Wrd15;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_45;
  Wrd12 = Wrd16;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_43;
  Wrd9 = Wrd13;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_41;
  Wrd9 = Wrd13;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_39;
  Wrd9 = Wrd13;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_37;
  Wrd9 = Wrd13;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd5.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_23]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd10.pObj));

DEFLABEL (label_30)
  (Wrd9.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd10.pObj));

DEFLABEL (label_29)
  (Wrd9.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd10.pObj));

DEFLABEL (label_28)
  (Wrd9.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd10.pObj));

DEFLABEL (label_27)
  (Wrd9.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd13.pObj));

DEFLABEL (label_26)
  (Wrd12.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_25)
  (Wrd11.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_24)
  (Wrd11.Obj) = Rvl;
  goto label_48;

DEFLABEL (make_return_operand_32)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (make_return_operand_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rgretn_so_f5fd8f391c838fbc [17] =
  {
    { "rgretn_so_code_1", 14, rgretn_so_code_1 },
    { "rgretn_so_code_2", 2, rgretn_so_code_2 },
    { "rgretn_so_code_3", 9, rgretn_so_code_3 },
    { "rgretn_so_code_4", 1, rgretn_so_code_4 },
    { "rgretn_so_code_5", 1, rgretn_so_code_5 },
    { "rgretn_so_code_6", 1, rgretn_so_code_6 },
    { "rgretn_so_code_7", 1, rgretn_so_code_7 },
    { "rgretn_so_code_8", 4, rgretn_so_code_8 },
    { "rgretn_so_code_9", 2, rgretn_so_code_9 },
    { "rgretn_so_code_10", 26, rgretn_so_code_10 },
    { "rgretn_so_code_11", 3, rgretn_so_code_11 },
    { "rgretn_so_code_12", 6, rgretn_so_code_12 },
    { "rgretn_so_code_13", 12, rgretn_so_code_13 },
    { "rgretn_so_code_14", 8, rgretn_so_code_14 },
    { "rgretn_so_code_15", 23, rgretn_so_code_15 },
    { "rgretn_so_code_16", 6, rgretn_so_code_16 },
    { "rgretn_so_code_17", 20, rgretn_so_code_17 }
  };

int
decl_rgretn_so_f5fd8f391c838fbc (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rgretn_so_f5fd8f391c838fbc);
  return (0);
}

DECLARE_COMPILED_CODE ("rgretn.so", 26, decl_rgretn_so_f5fd8f391c838fbc, rgretn_so_f5fd8f391c838fbc)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rgretn_so_data_f5fd8f391c838fbc [3381] =
  "\x6c\x20\xa0\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xc1\xb9\x02"
  "\x02\x02\x02\x08\xc2\xba\x02\x0d\x0d\x24\x28\x0d\xbb\x28\x0d\x28"
  "\x0d\xbc\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbd\x1d\xb0\x82\x88\x28\xb3\x28\xb4\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\xbe\x1d\xb0\x83\x88\x0d\xbf\x24\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84"
  "\x88\xc2\x1c\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x85\x88\x1b\x82"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x86\x88\x1b\x83\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x1b\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\x0d\x0d\x02\x1b\x81\x82"
  "\x02\xb2\x83\x80\x0d\x0d\x1c\x0d\x1c\x0d\x24\x28\x1b\x28\x0d\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\xb7\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\xb2\x82\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x81\xb2\x02\x28\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x81\x1b\x83\x02\xb1\xb2\x02\x28\x0d\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\xb2\x02\x1b\x83\x0d\x24\x28"
  "\x0d\x1c\x28\x1b\x28\xb7\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x81\x86\x02\x80\x82\xb2\x02\x1b\x84\x0d\x24\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x08\x1b\x83\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x86\x02\xb2\x80\x1b\x08\x0d\x06\x07\x02\xc2\x02\x0d\x24\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\xb7\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b"
  "\x2a\x1b\x2a\x99\x1b\x1b\x99\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x08"
  "\x89\xb1\x2a\x1b\x0d\x1b\x2a\x1b\x0d\xb4\x0d\x0d\x9b\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x9b\x1b\x0d\x0d\x0d\x0d\x9b\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x9b\xc3\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x08\x8b\x08"
  "\xb3\x0d\x0d\x9a\x1b\x2a\xb6\x2a\xb5\x2a\x9a\x28\x0d\x28\x0d\x28"
  "\x0d\x26\x1b\x0d\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x5b\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74"
  "\x6c\x67\x65\x6e\x2f\x72\x67\x72\x65\x74\x6e\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x04\x63\x64\x72\x04\x63\x61\x72\x0b\x0f\x09"
  "\x0a\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x10\x10\x6d\x65"
  "\x6d\x6f\x69\x7a\x61\x74\x69\x6f\x6e\x2d\x74\x61\x67\x18\x6c\x6f"
  "\x6f\x70\x2d\x6d\x65\x6d\x6f\x69\x7a\x61\x74\x69\x6f\x6e\x2d\x6d"
  "\x61\x72\x6b\x65\x72\x03\x03\x17\x74\x72\x69\x76\x69\x61\x6c\x2d"
  "\x72\x65\x74\x75\x72\x6e\x2d\x6f\x70\x65\x72\x61\x6e\x64\x04\x0d"
  "\x63\x66\x67\x2d\x6e\x6f\x64\x65\x2d\x67\x65\x74\x06\x11\x67\x65"
  "\x6e\x65\x72\x61\x74\x65\x2f\x72\x65\x74\x75\x72\x6e\x2a\x04\x28"
  "\x1e\x81\x89\x02\x27\x1c\x81\x87\x02\x26\x1a\x81\x87\x02\x25\x18"
  "\x81\x85\x02\x24\x16\x81\x89\x02\x23\x14\x81\x87\x02\x22\x12\x81"
  "\x8b\x02\x21\x10\x81\x8b\x02\x20\x0e\x81\x89\x02\x1f\x0c\x81\x87"
  "\x02\x1e\x0a\x81\x85\x02\x1d\x08\x81\x85\x02\x1c\x06\x81\x83\x02"
  "\x1b\x04\x83\x04\x1d\x33\x02\x03\x06\x03\x2a\x06\x81\x89\x02\x29"
  "\x04\x85\x08\x05\x0d\x02\x11\x73\x63\x66\x67\x2a\x73\x63\x66\x67"
  "\x2d\x3e\x73\x63\x66\x67\x21\x02\x03\x13\x72\x76\x61\x6c\x75\x65"
  "\x2d\x6b\x6e\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65\x09\x05\x10\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2f\x72\x76\x61\x6c\x75\x65\x06\x14"
  "\x6d\x61\x6b\x65\x2d\x72\x65\x74\x75\x72\x6e\x2d\x6f\x70\x65\x72"
  "\x61\x6e\x64\x0a\x03\x13\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x74"
  "\x72\x75\x65\x2d\x74\x65\x73\x74\x0b\x05\x33\x14\x81\x85\x02\x32"
  "\x12\x81\x85\x02\x31\x10\x81\x89\x02\x30\x0e\x82\x02\x2f\x0c\x81"
  "\x87\x02\x2e\x0a\x81\x85\x02\x2d\x08\x81\x87\x02\x2c\x06\x81\x85"
  "\x02\x2b\x04\x83\x04\x13\x21\x0c\x02\x0c\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x72\x65\x66\x0d\x34\x04\x83\x04\x03\x0e\x02\x0d\x35\x04"
  "\x83\x04\x03\x0f\x02\x0d\x36\x04\x83\x04\x03\x10\x02\x08\x0d\x37"
  "\x04\x83\x04\x03\x11\x02\x09\x0d\x0f\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x12\x02"
  "\x3b\x0a\x81\x85\x02\x3a\x08\x81\x83\x02\x39\x06\x81\x83\x02\x38"
  "\x04\x83\x04\x09\x12\x13\x02\x0a\x0d\x3d\x06\x81\x83\x02\x3c\x04"
  "\x83\x04\x05\x0a\x14\x02\x0b\x06\x76\x61\x6c\x75\x65\x15\x0b\x70"
  "\x6f\x70\x2d\x72\x65\x74\x75\x72\x6e\x07\x61\x6c\x77\x61\x79\x73"
  "\x11\x0d\x08\x0b\x73\x69\x6d\x70\x6c\x69\x66\x69\x65\x64\x19\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x2f\x65\x66\x66\x65\x63\x74\x16\x0f\x73\x69\x6d\x70\x6c\x65\x2d"
  "\x6d\x65\x74\x68\x6f\x64\x73\x17\x15\x73\x65\x74\x2d\x73\x6e\x6f"
  "\x64\x65\x2d\x6e\x65\x78\x74\x2d\x65\x64\x67\x65\x21\x04\x03\x09"
  "\x03\x26\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x65\x6e\x74\x72\x79\x2f\x70\x6f"
  "\x70\x2d\x65\x78\x74\x72\x61\x04\x0e\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x67\x65\x74\x05\x1b\x72\x65\x74\x75\x72\x6e\x2d\x6f"
  "\x70\x65\x72\x61\x74\x6f\x72\x2f\x70\x6f\x70\x2d\x66\x72\x61\x6d"
  "\x65\x73\x09\x03\x0b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x03"
  "\x15\x6d\x61\x6b\x65\x2d\x72\x74\x6c\x2d\x69\x6e\x73\x74\x72\x75"
  "\x63\x74\x69\x6f\x6e\x04\x14\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d"
  "\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x18\x04\x05\x0d\x73\x63"
  "\x66\x67\x2d\x61\x70\x70\x65\x6e\x64\x21\x19\x04\x0b\x6e\x6f\x64"
  "\x65\x2d\x3e\x73\x63\x66\x67\x03\x0c\x6d\x61\x6b\x65\x2d\x73\x62"
  "\x6c\x6f\x63\x6b\x0c\x57\x36\x81\x91\x02\x56\x34\x81\x8f\x02\x55"
  "\x32\x81\x8b\x02\x54\x30\x81\x8f\x02\x53\x2e\x83\x04\x52\x2c\x81"
  "\x8d\x02\x51\x2a\x81\x8b\x02\x50\x28\x81\x91\x02\x4f\x26\x81\x8d"
  "\x02\x4e\x24\x81\x8b\x02\x4d\x22\x81\x8d\x02\x4c\x20\x81\x8d\x02"
  "\x4b\x1e\x81\x8b\x02\x4a\x1c\x81\x8b\x02\x49\x1a\x81\x8f\x02\x48"
  "\x18\x81\x8d\x02\x47\x16\x81\x8f\x02\x46\x14\x81\x8d\x02\x45\x12"
  "\x81\x8b\x02\x44\x10\x81\x8b\x02\x43\x0e\x81\x8b\x02\x42\x0c\x81"
  "\x8b\x02\x41\x0a\x81\x89\x02\x40\x08\x81\x8d\x02\x3f\x06\x81\x8d"
  "\x02\x3e\x04\x86\x0a\x35\x60\x1a\x02\x0c\x16\x02\x5a\x08\x81\x85"
  "\x02\x59\x06\x81\x83\x02\x58\x04\x83\x04\x07\x0f\x16\x02\x0d\x0d"
  "\x0b\x03\x0f\x65\x64\x67\x65\x2d\x6e\x65\x78\x74\x2d\x6e\x6f\x64"
  "\x65\x1b\x03\x0e\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x6e\x6f\x64"
  "\x65\x1c\x05\x19\x04\x60\x0e\x81\x89\x02\x5f\x0c\x81\x89\x02\x5e"
  "\x0a\x81\x8b\x02\x5d\x08\x81\x87\x02\x5c\x06\x81\x8b\x02\x5b\x04"
  "\x85\x08\x0d\x1b\x1d\x02\x0e\x0d\x0b\x0c\x03\x13\x6c\x76\x61\x6c"
  "\x75\x65\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x3f\x03\x1b"
  "\x05\x19\x03\x1c\x03\x16\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x2f\x72\x65\x67\x69\x73\x74\x65\x72\x04\x18\x07\x6c\x1a"
  "\x81\x85\x02\x6b\x18\x81\x85\x02\x6a\x16\x81\x8b\x02\x69\x14\x81"
  "\x89\x02\x68\x12\x81\x89\x02\x67\x10\x81\x8b\x02\x66\x0e\x81\x89"
  "\x02\x65\x0c\x81\x8d\x02\x64\x0a\x81\x87\x02\x63\x08\x81\x8b\x02"
  "\x62\x06\x81\x8b\x02\x61\x04\x85\x08\x19\x30\x02\x0f\x0b\x0d\x0e"
  "\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x75\x73\x68\x02\x05\x17"
  "\x75\x73\x65\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x1e\x03\x1b\x04\x03\x1c\x05\x74\x12\x81"
  "\x89\x02\x73\x10\x81\x87\x02\x72\x0e\x81\x8b\x02\x71\x0c\x81\x87"
  "\x02\x70\x0a\x81\x89\x02\x6f\x08\x81\x8b\x02\x6e\x06\x81\x89\x02"
  "\x6d\x04\x85\x08\x11\x23\x1f\x02\x10\x08\x0b\x0d\x0d\x63\x6f\x6e"
  "\x73\x74\x61\x6e\x74\x2d\x74\x61\x67\x02\x03\x1b\x05\x1e\x03\x1c"
  "\x03\x0b\x05\x19\x05\x11\x70\x63\x66\x67\x2a\x73\x63\x66\x67\x2d"
  "\x3e\x73\x63\x66\x67\x21\x07\x8b\x01\x30\x81\x89\x02\x8a\x01\x2e"
  "\x81\x87\x02\x89\x01\x2c\x81\x85\x02\x88\x01\x2a\x81\x89\x02\x87"
  "\x01\x28\x81\x8b\x02\x86\x01\x26\x81\x87\x02\x85\x01\x24\x81\x8d"
  "\x02\x84\x01\x22\x81\x85\x02\x83\x01\x20\x81\x8b\x02\x82\x01\x1e"
  "\x81\x85\x02\x81\x01\x1c\x81\x8d\x02\x80\x01\x1a\x81\x8f\x02\x7f"
  "\x18\x81\x8b\x02\x7e\x16\x81\x8f\x02\x7d\x14\x81\x8f\x02\x7c\x12"
  "\x81\x8f\x02\x7b\x10\x81\x91\x02\x7a\x0e\x81\x8f\x02\x79\x0c\x81"
  "\x89\x02\x78\x0a\x81\x89\x02\x77\x08\x81\x8b\x02\x76\x06\x81\x87"
  "\x02\x75\x04\x85\x08\x2f\x4a\x1c\x02\x11\x06\x66\x65\x74\x63\x68"
  "\x1b\x0d\x02\x19\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x73\x65"
  "\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x04\x18\x05\x19"
  "\x04\x91\x01\x0e\x81\x8b\x02\x90\x01\x0c\x81\x85\x02\x8f\x01\x0a"
  "\x81\x89\x02\x8e\x01\x08\x81\x8d\x02\x8d\x01\x06\x81\x87\x02\x8c"
  "\x01\x04\x85\x08\x0d\x1b\x19\x02\x12\x08\x61\x64\x64\x72\x65\x73"
  "\x73\x14\x1b\x0e\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e\x74\x65"
  "\x72\x0f\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1b"
  "\x0e\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x61\x67\x02\x03"
  "\x18\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65"
  "\x78\x74\x2f\x62\x6c\x6f\x63\x6b\x03\x0a\x69\x63\x2d\x62\x6c\x6f"
  "\x63\x6b\x3f\x04\x1b\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76"
  "\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x6f\x66\x66\x73\x65\x74\x02"
  "\x1d\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x6c\x69\x6e\x6b\x2d\x3e"
  "\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e\x74\x65\x72\x03\x19\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\x2f\x6f\x66\x66\x73\x65\x74\x06\x17\x70\x6f\x70\x70\x69\x6e\x67"
  "\x2d\x6c\x69\x6d\x69\x74\x2f\x6c\x6f\x63\x61\x74\x69\x76\x65\x04"
  "\x18\x04\x09\xa5\x01\x2a\x81\x8b\x02\xa4\x01\x28\x81\x8b\x02\xa3"
  "\x01\x26\x81\x8b\x02\xa2\x01\x24\x81\x85\x02\xa1\x01\x22\x81\x8b"
  "\x02\xa0\x01\x20\x81\x8b\x02\x9f\x01\x1e\x81\x89\x02\x9e\x01\x1c"
  "\x81\x8b\x02\x9d\x01\x1a\x81\x89\x02\x9c\x01\x18\x81\x89\x02\x9b"
  "\x01\x16\x81\x8b\x02\x9a\x01\x14\x81\x8b\x02\x99\x01\x12\x81\x8b"
  "\x02\x98\x01\x10\x81\x83\x02\x97\x01\x0e\x81\x83\x02\x96\x01\x0c"
  "\x81\x87\x02\x95\x01\x0a\x81\x87\x02\x94\x01\x08\x81\x83\x02\x93"
  "\x01\x06\x85\x08\x92\x01\x04\x81\x87\x02\x29\x4c\x1b\x12\x18\x18"
  "\x1b\x06\x19\x04\x09\x1e\x0a\x70\x72\x65\x64\x69\x63\x61\x74\x65"
  "\x1c\x04\x05\x70\x75\x73\x68\x1f\x04\x09\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x15\x04\x17\x07\x65\x66\x66\x65\x63\x74\x1d\x04\x12\x15"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x65\x66\x66"
  "\x65\x63\x74\x3f\x0e\x65\x66\x66\x65\x63\x74\x2d\x70\x72\x65\x66"
  "\x69\x78\x10\x72\x65\x74\x75\x72\x6e\x2d\x6f\x70\x65\x72\x61\x6e"
  "\x64\x3f\x16\x04\x1a\x04\x14\x04\x13\x04\x0a\x1b\x72\x65\x74\x75"
  "\x72\x6e\x2d\x6f\x70\x65\x72\x61\x6e\x64\x2f\x6b\x6e\x6f\x77\x6e"
  "\x2d\x76\x61\x6c\x75\x65\x1f\x72\x65\x74\x75\x72\x6e\x2d\x6f\x70"
  "\x65\x72\x61\x6e\x64\x2f\x76\x61\x6c\x75\x65\x2d\x67\x65\x6e\x65"
  "\x72\x61\x74\x6f\x72\x23\x72\x65\x74\x75\x72\x6e\x2d\x6f\x70\x65"
  "\x72\x61\x6e\x64\x2f\x70\x72\x65\x64\x69\x63\x61\x74\x65\x2d\x67"
  "\x65\x6e\x65\x72\x61\x74\x6f\x72\x20\x72\x65\x74\x75\x72\x6e\x2d"
  "\x6f\x70\x65\x72\x61\x6e\x64\x2f\x65\x66\x66\x65\x63\x74\x2d\x67"
  "\x65\x6e\x65\x72\x61\x74\x6f\x72\x11\x04\x10\x04\x0f\x04\x0e\x04"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x13\x72\x74\x64\x3a\x72\x65\x74\x75\x72\x6e\x2d\x6f\x70\x65"
  "\x72\x61\x6e\x64\x1f\x0f\x72\x65\x74\x75\x72\x6e\x2d\x6f\x70\x65"
  "\x72\x61\x6e\x64\x11\x65\x66\x66\x65\x63\x74\x2d\x67\x65\x6e\x65"
  "\x72\x61\x74\x6f\x72\x14\x70\x72\x65\x64\x69\x63\x61\x74\x65\x2d"
  "\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x10\x76\x61\x6c\x75\x65\x2d"
  "\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x0c\x6b\x6e\x6f\x77\x6e\x2d"
  "\x76\x61\x6c\x75\x65\x18\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x74"
  "\x72\x69\x76\x69\x61\x6c\x2d\x72\x65\x74\x75\x72\x6e\x10\x67\x65"
  "\x6e\x65\x72\x61\x74\x65\x2f\x72\x65\x74\x75\x72\x6e\x0c\x04\x04"
  "\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d"
  "\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\x1f"
  "\x13\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x73\x17\x04\x04\x12\x6d\x61\x6b\x65\x2d\x6d\x65\x74\x68"
  "\x6f\x64\x2d\x74\x61\x62\x6c\x65\x05\x1a\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x65\x74\x68\x6f\x64\x2d\x74\x61\x62\x6c\x65\x2d\x65\x6e"
  "\x74\x72\x79\x05\x1c\x64\x65\x66\x69\x6e\x65\x2d\x6d\x65\x74\x68"
  "\x6f\x64\x2d\x74\x61\x62\x6c\x65\x2d\x65\x6e\x74\x72\x69\x65\x73"
  "\x04\x1a\x36\x80\x80\x04\x19\x34\x81\x81\x02\x18\x32\x81\x81\x02"
  "\x17\x30\x81\x83\x02\x16\x2e\x81\x87\x02\x15\x2c\x81\x83\x02\x14"
  "\x2a\x81\x87\x02\x13\x28\x81\x83\x02\x12\x26\x81\x87\x02\x11\x24"
  "\x81\x83\x02\x10\x22\x81\x85\x02\x0f\x20\x81\x87\x02\x0e\x1e\x81"
  "\x83\x02\x0d\x1c\x81\x89\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x85"
  "\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x8b\x02\x08\x12\x81\x87\x02"
  "\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02\x04"
  "\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81\x83\x02\x01\x04"
  "\x81\x83\x02\x35\x64";

SCHEME_OBJECT *
rgretn_so_data_f5fd8f391c838fbc (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rgretn_so_data_f5fd8f391c838fbc [0]))), (sizeof (prog_rgretn_so_data_f5fd8f391c838fbc)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_36]));
}

DECLARE_COMPILED_DATA_NS ("rgretn.so", rgretn_so_data_f5fd8f391c838fbc)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rgretn.so", "3957e21f53d6f1a2")
