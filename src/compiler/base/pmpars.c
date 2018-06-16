/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:12-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define TAG_1_8 2
#define LABEL_1_9 9
#define TAG_1_10 3
#define LABEL_1_11 11
#define LABEL_1_13 13
#define LABEL_1_15 15
#define LABEL_1_17 17
#define TAG_1_18 7
#define ENVIRONMENT_LABEL_1_3 28
#define DEBUGGING_LABEL_1_2 27
#define EXECUTE_CACHE_1_16 19
#define EXECUTE_CACHE_1_14 21
#define EXECUTE_CACHE_1_12 23
#define EXECUTE_CACHE_1_6 25
#define FREE_REFERENCES_LABEL_1_0 18
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmpars_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd6;
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
      goto parse_rule_9;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_13;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_1_17);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_rule_12)
DEFLABEL (parse_rule_9)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_9])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_1_9);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_17])));
  Rhp += 4;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd18 = Wrd11;
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  ((Wrd18.pObj) [4]) = Rvl;
  ((Wrd18.pObj) [5]) = (Wrd5.Obj);
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_1_17);

DEFLABEL (lambda_2)
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
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_8 7
#define TAG_2_9 2
#define LABEL_2_5 9
#define LABEL_2_11 11
#define LABEL_2_14 13
#define LABEL_2_15 15
#define LABEL_2_13 17
#define LABEL_2_17 19
#define LABEL_2_18 21
#define LABEL_2_19 23
#define LABEL_2_20 25
#define LABEL_2_21 27
#define LABEL_2_22 29
#define LABEL_2_23 31
#define LABEL_2_10 33
#define LABEL_2_24 35
#define TAG_2_25 16
#define LABEL_2_26 37
#define TAG_2_27 17
#define LABEL_2_31 39
#define LABEL_2_28 41
#define TAG_2_29 19
#define LABEL_2_30 43
#define LABEL_2_32 45
#define LABEL_2_34 47
#define TAG_2_35 22
#define ENVIRONMENT_LABEL_2_3 62
#define DEBUGGING_LABEL_2_2 61
#define OBJECT_2_3 60
#define OBJECT_2_2 59
#define OBJECT_2_1 58
#define OBJECT_2_0 57
#define EXECUTE_CACHE_2_33 49
#define EXECUTE_CACHE_2_16 51
#define EXECUTE_CACHE_2_12 53
#define EXECUTE_CACHE_2_7 55
#define FREE_REFERENCES_LABEL_2_0 48
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmpars_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_2_4);
      goto extract_variables_32;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_34;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto lambda_48;

    case 3:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto label_37;

    case 5:
      current_block = (Rpc - LABEL_2_14);
      goto label_35;

    case 6:
      current_block = (Rpc - LABEL_2_15);
      goto label_36;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_17;

    case 8:
      current_block = (Rpc - LABEL_2_17);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_2_18);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_2_19);
      goto label_40;

    case 11:
      current_block = (Rpc - LABEL_2_20);
      goto label_41;

    case 12:
      current_block = (Rpc - LABEL_2_21);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_2_22);
      goto label_43;

    case 14:
      current_block = (Rpc - LABEL_2_23);
      goto label_44;

    case 15:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_2_24);
      goto lambda_49;

    case 17:
      current_block = (Rpc - LABEL_2_26);
      goto lambda_50;

    case 18:
      current_block = (Rpc - LABEL_2_31);
      goto label_45;

    case 19:
      current_block = (Rpc - LABEL_2_28);
      goto lambda_51;

    case 20:
      current_block = (Rpc - LABEL_2_30);
      goto continuation_11;

    case 21:
      current_block = (Rpc - LABEL_2_32);
      goto continuation_6;

    case 22:
      current_block = (Rpc - LABEL_2_34);
      goto lambda_52;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (extract_variables_47)
DEFLABEL (extract_variables_32)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_53;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_8])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = (Wrd5.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_78;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_77)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_73;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_72)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_71;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_70)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_69;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_68)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_67;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_66)
  (Wrd21.Obj) = (current_block [OBJECT_2_2]);
  if ((Wrd14.Obj) == (Wrd21.Obj))
    goto label_65;
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_64;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_63)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_62;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_61)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_60;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_59)
  (Wrd47.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (Wrd54.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_58)
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_57;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_56)
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_55;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd64.Obj) = ((Wrd65.pObj) [0]);

DEFLABEL (label_54)
  (Wrd71.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (Wrd78.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (Rsp [1]) = (Wrd75.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd81.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_24])));
  Rhp += 2;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd81.pObj)));
  Wrd84 = Wrd81;
  ((Wrd84.pObj) [2]) = (Wrd75.Obj);
  (Wrd83.Obj) = (Rsp [0]);
  ((Wrd84.pObj) [3]) = (Wrd83.Obj);
  Rvl = (Wrd80.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_44)
  (Wrd64.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_43)
  (Wrd55.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_60)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_42)
  (Wrd38.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_40)
  (Wrd22.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_58;

DEFLABEL (label_67)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_39)
  (Wrd14.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_38)
  (Wrd5.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_35)
  (Wrd10.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_74)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_76;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_75)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_26])));
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

DEFLABEL (label_76)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_2_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_2]);
  (Rsp [2]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_2_24);

DEFLABEL (lambda_30)
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

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_2_26);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_28])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_80;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_79)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_30);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_80)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_31]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_2_28);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_33]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_32);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_34])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_2_34);

DEFLABEL (lambda_7)
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

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_7 7
#define LABEL_3_5 9
#define LABEL_3_10 11
#define LABEL_3_12 13
#define LABEL_3_16 15
#define LABEL_3_17 17
#define LABEL_3_13 19
#define LABEL_3_19 21
#define LABEL_3_9 23
#define LABEL_3_20 25
#define LABEL_3_15 27
#define ENVIRONMENT_LABEL_3_3 41
#define DEBUGGING_LABEL_3_2 40
#define OBJECT_3_2 39
#define OBJECT_3_1 38
#define OBJECT_3_0 37
#define EXECUTE_CACHE_3_18 29
#define EXECUTE_CACHE_3_14 31
#define EXECUTE_CACHE_3_11 33
#define EXECUTE_CACHE_3_8 35
#define FREE_REFERENCES_LABEL_3_0 28
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmpars_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto merge_variables_lists_15;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_3_16);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_3_17);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_3_19);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_3_20);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_variables_lists_25)
DEFLABEL (merge_variables_lists_15)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_43;
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_41;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_40;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_39)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_38;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_31;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_3_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_29;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_28)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_27;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_36;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_34;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_33)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_17)
  (Wrd13.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  Rvl = (Wrd5.Obj);

DEFLABEL (label_42)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_43)
  Rvl = (Rsp [1]);
  goto label_42;

INVOKE_INTERFACE_TARGET_1
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
#define TAG_4_14 7
#define LABEL_4_11 19
#define TAG_4_12 8
#define ENVIRONMENT_LABEL_4_3 25
#define DEBUGGING_LABEL_4_2 24
#define OBJECT_4_3 23
#define OBJECT_4_2 22
#define OBJECT_4_1 21
#define OBJECT_4_0 20
#define FREE_REFERENCES_LABEL_4_0 20
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmpars_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd63;
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
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_4_4);
      goto extract_qualifiers_12;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_4_10);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_4_13);
      goto lambda_23;

    case 8:
      current_block = (Rpc - LABEL_4_11);
      goto lambda_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (extract_qualifiers_21)
DEFLABEL (extract_qualifiers_12)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_37;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_36)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_25;

DEFLABEL (label_24)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_13])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_35;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_34)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_33;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd29.Obj) = ((Wrd30.pObj) [0]);

DEFLABEL (label_32)
  if (! ((Wrd29.Obj) == (current_block [OBJECT_4_1])))
    goto label_24;
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_31;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);

DEFLABEL (label_30)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_29;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_28)
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_27;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [1]) = (Wrd53.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd64.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_11])));
  Rhp += 2;
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd64.pObj)));
  Wrd67 = Wrd64;
  ((Wrd67.pObj) [2]) = (Wrd53.Obj);
  (Wrd66.Obj) = (Rsp [0]);
  ((Wrd67.pObj) [3]) = (Wrd66.Obj);
  Rvl = (Wrd63.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_19)
  (Wrd53.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_17)
  (Wrd37.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_16)
  (Wrd29.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_15)
  (Wrd20.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_36;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_4_13);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_4_11);

DEFLABEL (lambda_10)
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

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define ENVIRONMENT_LABEL_5_3 12
#define DEBUGGING_LABEL_5_2 11
#define EXECUTE_CACHE_5_8 7
#define EXECUTE_CACHE_5_7 9
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmpars_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_5_4);
      goto reorder_variables_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reorder_variables_4)
DEFLABEL (reorder_variables_1)
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
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_9 7
#define LABEL_6_10 9
#define LABEL_6_7 11
#define TAG_6_8 4
#define LABEL_6_13 13
#define LABEL_6_14 15
#define LABEL_6_11 17
#define LABEL_6_12 19
#define LABEL_6_17 21
#define TAG_6_18 9
#define ENVIRONMENT_LABEL_6_3 36
#define DEBUGGING_LABEL_6_2 35
#define OBJECT_6_3 34
#define OBJECT_6_2 33
#define OBJECT_6_1 32
#define OBJECT_6_0 31
#define EXECUTE_CACHE_6_19 23
#define EXECUTE_CACHE_6_16 25
#define EXECUTE_CACHE_6_15 27
#define EXECUTE_CACHE_6_6 29
#define FREE_REFERENCES_LABEL_6_0 22
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmpars_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd56;
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
      goto rule__matcher_11;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_6_7);
      goto lambda_17;

    case 5:
      current_block = (Rpc - LABEL_6_13);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_6_14);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_6_17);
      goto lambda_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rule__matcher_16)
DEFLABEL (rule__matcher_11)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_6_7);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [9]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_21;

DEFLABEL (label_20)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [6]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (Wrd56.Obj) = (Rsp [9]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_19)
  (Wrd49.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_17])));
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

DEFLABEL (label_21)
  if (! ((Wrd21.uLng) == 1))
    goto label_25;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_24)
  if (! ((Wrd29.Obj) == (current_block [OBJECT_6_1])))
    goto label_20;
  (Wrd43.Obj) = (Rsp [9]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_23;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd40.Obj);
  goto label_19;

DEFLABEL (label_23)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_14)
  (Wrd40.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_13)
  (Wrd29.Obj) = Rvl;
  goto label_24;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_6_17);

DEFLABEL (lambda_7)
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

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_10 9
#define LABEL_7_8 11
#define LABEL_7_12 13
#define LABEL_7_13 15
#define LABEL_7_14 17
#define LABEL_7_15 19
#define LABEL_7_16 21
#define LABEL_7_17 23
#define ENVIRONMENT_LABEL_7_3 40
#define DEBUGGING_LABEL_7_2 39
#define OBJECT_7_5 38
#define OBJECT_7_4 37
#define OBJECT_7_3 36
#define OBJECT_7_2 35
#define OBJECT_7_1 34
#define OBJECT_7_0 33
#define EXECUTE_CACHE_7_11 25
#define EXECUTE_CACHE_7_9 27
#define EXECUTE_CACHE_7_6 29
#define FREE_REFERENCE_7_0 32
#define FREE_REFERENCES_LABEL_7_0 24
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmpars_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      goto make_rule_matcher_29;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_31;

    case 3:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_18;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_17;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_16;

    case 8:
      current_block = (Rpc - LABEL_7_15);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_7_17);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_rule_matcher_33)
DEFLABEL (make_rule_matcher_29)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_34)
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (label_35)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_38;
  Wrd12 = Wrd16;

DEFLABEL (label_37)
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (label_36)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_34;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_7])), (Wrd13.pObj));

DEFLABEL (label_31)
  (Wrd12.Obj) = Rvl;
  goto label_37;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_7_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_16);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_7_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd27.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd34.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd46.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_17);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_7_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd27.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd34.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd46.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define TAG_8_6 1
#define LABEL_8_7 7
#define LABEL_8_11 9
#define LABEL_8_12 11
#define LABEL_8_9 13
#define LABEL_8_15 15
#define LABEL_8_17 17
#define LABEL_8_18 19
#define LABEL_8_14 21
#define LABEL_8_13 23
#define ENVIRONMENT_LABEL_8_3 43
#define DEBUGGING_LABEL_8_2 42
#define OBJECT_8_6 41
#define OBJECT_8_5 40
#define OBJECT_8_4 39
#define OBJECT_8_3 38
#define OBJECT_8_2 37
#define OBJECT_8_1 36
#define OBJECT_8_0 35
#define EXECUTE_CACHE_8_19 25
#define EXECUTE_CACHE_8_16 27
#define EXECUTE_CACHE_8_10 29
#define EXECUTE_CACHE_8_8 31
#define FREE_REFERENCE_8_0 34
#define FREE_REFERENCES_LABEL_8_0 24
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmpars_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd61;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd81;
  machine_word Wrd69;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_8_4);
      goto rule_result_expression_32;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto lambda_37;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_31;

    case 3:
      current_block = (Rpc - LABEL_8_11);
      goto continuation_21;

    case 4:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_8_15);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_8_17);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_8_18);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_8_14);
      goto continuation_22;

    case 10:
      current_block = (Rpc - LABEL_8_13);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rule_result_expression_36)
DEFLABEL (rule_result_expression_32)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_5])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_8_5);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.Obj) = (current_block [OBJECT_8_1]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_45;

DEFLABEL (label_44)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [3]);
  (Wrd19.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = ((Wrd17.pObj) [4]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_8_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_8_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_12);
  (Wrd81.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd81.Obj);

DEFLABEL (label_43)
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd54.Obj) = (Rsp [4]);
  (Wrd55.Obj) = (current_block [OBJECT_8_1]);
  if ((Wrd54.Obj) == (Wrd55.Obj))
    goto label_42;

DEFLABEL (label_41)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd65.Obj) = ((Wrd62.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_40;
  Wrd61 = Wrd65;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_16]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_8_14);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_8_4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_8_11);
  (Wrd86.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd86.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));

DEFLABEL (label_38)
  (Wrd73.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [4]);
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [2]);
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_8_13);
  (Wrd8.Obj) = (current_block [OBJECT_8_5]);
  (Wrd9.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_8_6]);
  (Wrd14.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd22.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_15])), (Wrd62.pObj));

DEFLABEL (label_34)
  (Wrd61.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd67.Obj) = (Rsp [5]);
  if (! ((Wrd67.Obj) == (Wrd55.Obj)))
    goto label_41;
  (Wrd69.Obj) = (Rsp [0]);
  goto label_38;

DEFLABEL (label_45)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [4]);
  if (! ((Wrd37.Obj) == (Wrd6.Obj)))
    goto label_44;
  (Wrd44.Obj) = ((Wrd36.pObj) [3]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd46.Obj);
  goto label_43;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_9 7
#define LABEL_9_10 9
#define LABEL_9_11 11
#define LABEL_9_12 13
#define LABEL_9_6 15
#define TAG_9_7 6
#define LABEL_9_13 17
#define LABEL_9_14 19
#define LABEL_9_15 21
#define LABEL_9_16 23
#define LABEL_9_17 25
#define LABEL_9_18 27
#define LABEL_9_19 29
#define LABEL_9_20 31
#define LABEL_9_21 33
#define LABEL_9_22 35
#define LABEL_9_23 37
#define LABEL_9_24 39
#define LABEL_9_25 41
#define LABEL_9_26 43
#define LABEL_9_31 45
#define LABEL_9_8 47
#define LABEL_9_33 49
#define TAG_9_34 23
#define LABEL_9_29 51
#define LABEL_9_27 53
#define TAG_9_28 25
#define LABEL_9_35 55
#define LABEL_9_36 57
#define LABEL_9_37 59
#define TAG_9_38 28
#define ENVIRONMENT_LABEL_9_3 74
#define DEBUGGING_LABEL_9_2 73
#define OBJECT_9_7 72
#define OBJECT_9_6 71
#define OBJECT_9_5 70
#define OBJECT_9_4 69
#define OBJECT_9_3 68
#define OBJECT_9_2 67
#define OBJECT_9_1 66
#define OBJECT_9_0 65
#define EXECUTE_CACHE_9_32 61
#define EXECUTE_CACHE_9_30 63
#define FREE_REFERENCES_LABEL_9_0 60
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmpars_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd89;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd159;
  machine_word Wrd161;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd154;
  machine_word Wrd156;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd203;
  machine_word Wrd205;
  machine_word Wrd207;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd200;
  machine_word Wrd201;
  machine_word Wrd194;
  machine_word Wrd196;
  machine_word Wrd198;
  machine_word Wrd190;
  machine_word Wrd192;
  machine_word Wrd193;
  machine_word Wrd186;
  machine_word Wrd188;
  machine_word Wrd189;
  machine_word Wrd181;
  machine_word Wrd183;
  machine_word Wrd185;
  machine_word Wrd176;
  machine_word Wrd178;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd171;
  machine_word Wrd173;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd152;
  machine_word Wrd144;
  machine_word Wrd146;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd143;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd139;
  machine_word Wrd136;
  machine_word Wrd128;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd127;
  machine_word Wrd234;
  machine_word Wrd228;
  machine_word Wrd229;
  machine_word Wrd230;
  machine_word Wrd226;
  machine_word Wrd220;
  machine_word Wrd221;
  machine_word Wrd222;
  machine_word Wrd219;
  machine_word Wrd211;
  machine_word Wrd213;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd118;
  machine_word Wrd119;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd108;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd31;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_9_4);
      goto process_transformations_58;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto loop_56;

    case 2:
      current_block = (Rpc - LABEL_9_9);
      goto label_60;

    case 3:
      current_block = (Rpc - LABEL_9_10);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_22;

    case 5:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_16;

    case 6:
      current_block = (Rpc - LABEL_9_6);
      goto lambda_79;

    case 7:
      current_block = (Rpc - LABEL_9_13);
      goto label_61;

    case 8:
      current_block = (Rpc - LABEL_9_14);
      goto label_62;

    case 9:
      current_block = (Rpc - LABEL_9_15);
      goto label_63;

    case 10:
      current_block = (Rpc - LABEL_9_16);
      goto label_64;

    case 11:
      current_block = (Rpc - LABEL_9_17);
      goto label_65;

    case 12:
      current_block = (Rpc - LABEL_9_18);
      goto label_66;

    case 13:
      current_block = (Rpc - LABEL_9_19);
      goto label_68;

    case 14:
      current_block = (Rpc - LABEL_9_20);
      goto label_69;

    case 15:
      current_block = (Rpc - LABEL_9_21);
      goto label_73;

    case 16:
      current_block = (Rpc - LABEL_9_22);
      goto label_74;

    case 17:
      current_block = (Rpc - LABEL_9_23);
      goto label_75;

    case 18:
      current_block = (Rpc - LABEL_9_24);
      goto label_70;

    case 19:
      current_block = (Rpc - LABEL_9_25);
      goto label_71;

    case 20:
      current_block = (Rpc - LABEL_9_26);
      goto label_72;

    case 21:
      current_block = (Rpc - LABEL_9_31);
      goto label_67;

    case 22:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_55;

    case 23:
      current_block = (Rpc - LABEL_9_33);
      goto lambda_82;

    case 24:
      current_block = (Rpc - LABEL_9_29);
      goto continuation_29;

    case 25:
      current_block = (Rpc - LABEL_9_27);
      goto lambda_81;

    case 26:
      current_block = (Rpc - LABEL_9_35);
      goto continuation_35;

    case 27:
      current_block = (Rpc - LABEL_9_36);
      goto continuation_34;

    case 28:
      current_block = (Rpc - LABEL_9_37);
      goto lambda_83;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_transformations_77)
DEFLABEL (process_transformations_58)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_56;

DEFLABEL (loop_78)
DEFLABEL (loop_56)
  DLINK_INTERRUPT_CHECK (25, LABEL_9_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_84;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_84)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_6])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  ((Wrd13.pObj) [3]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_86;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_85)
  Rdl = (& (Rsp [2]));
  goto loop_56;

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_9_8);
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

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_60)
  (Wrd31.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd31.Obj));
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (lambda_80)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_9_10);
  (Wrd5.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Rsp [4]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (lambda_79)
  CLOSURE_HEADER (LABEL_9_6);

DEFLABEL (lambda_53)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_122;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_121)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_120;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_119)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_118;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd27.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_117)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_116;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_115)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 1)
    goto label_88;
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Rsp [3]) = (Wrd51.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd58.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_33])));
  Rhp += 4;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd58.pObj)));
  Wrd65 = Wrd58;
  (Wrd66.Obj) = (Rsp [3]);
  ((Wrd65.pObj) [2]) = (Wrd66.Obj);
  (Wrd64.Obj) = (Rsp [2]);
  ((Wrd65.pObj) [3]) = (Wrd64.Obj);
  (Wrd62.Obj) = (Rsp [1]);
  ((Wrd65.pObj) [4]) = (Wrd62.Obj);
  (Wrd60.Obj) = (Rsp [0]);
  ((Wrd65.pObj) [5]) = (Wrd60.Obj);
  Rvl = (Wrd57.Obj);

DEFLABEL (label_87)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_88)
  if (! ((Wrd50.uLng) == 1))
    goto label_114;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_113)
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_112;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd77.Obj) = ((Wrd79.pObj) [1]);

DEFLABEL (label_111)
  if ((Wrd77.Obj) == (current_block [OBJECT_9_1]))
    goto label_108;
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd95.Obj) = (Rsp [4]);
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd97.Obj) = ((Wrd96.pObj) [3]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 1))
    goto label_110;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd94.Obj) = ((Wrd93.pObj) [0]);
  (* (--Rsp)) = (Wrd94.Obj);

DEFLABEL (label_109)
  (Wrd105.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd105.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_32]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_9_12);

DEFLABEL (label_108)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (Wrd112.Obj) = (Rsp [1]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd113.uLng) == 1))
    goto label_107;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd109.Obj) = ((Wrd111.pObj) [1]);

DEFLABEL (label_106)
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd120.uLng) == 1))
    goto label_105;
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd118.Obj) = ((Wrd119.pObj) [1]);

DEFLABEL (label_104)
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if ((Wrd125.uLng) == 1)
    goto label_97;
  (Wrd127.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd127.Obj);

DEFLABEL (label_96)
  (Wrd131.Obj) = (Rsp [1]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd132.uLng) == 1))
    goto label_95;
  (Wrd130.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd128.Obj) = ((Wrd130.pObj) [1]);

DEFLABEL (label_94)
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd139.uLng) == 1))
    goto label_93;
  (Wrd137.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd138.Obj) = ((Wrd137.pObj) [0]);
  (* (--Rsp)) = (Wrd138.Obj);

DEFLABEL (label_92)
  (Wrd147.Obj) = (Rsp [2]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd148.uLng) == 1))
    goto label_91;
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd144.Obj) = ((Wrd146.pObj) [0]);

DEFLABEL (label_90)
  if ((Wrd144.Obj) == (current_block [OBJECT_9_3]))
    goto label_89;
  (Wrd157.Obj) = (Rsp [1]);
  (Wrd158.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd157.Obj);
  (* (Rhp++)) = (Wrd158.Obj);
  (Wrd156.pObj) = (& (Rhp [-2]));
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd156.pObj)));
  (Rsp [6]) = (Wrd154.Obj);
  (Wrd162.Obj) = (Rsp [3]);
  (Wrd163.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd162.Obj);
  (* (Rhp++)) = (Wrd163.Obj);
  (Wrd161.pObj) = (& (Rhp [-2]));
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd161.pObj)));
  (Rsp [7]) = (Wrd159.Obj);
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_29]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (Wrd167.Obj) = (Rsp [6]);
  (Wrd168.pObj) = (OBJECT_ADDRESS (Wrd167.Obj));
  (Wrd169.Obj) = ((Wrd168.pObj) [2]);
  (* (--Rsp)) = (Wrd169.Obj);
  (Wrd170.Obj) = (current_block [OBJECT_9_4]);
  (* (--Rsp)) = (Wrd170.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_30]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_9_29);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_9_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (Rsp [8]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [8]) = (Wrd18.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_35]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [6]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_30]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_9_35);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_9_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_36]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_9_7]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_30]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_9_36);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (Rsp [9]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [9]) = (Wrd10.Obj);
  Rsp = (& (Rsp [6]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_37])));
  Rhp += 4;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd23 = Wrd16;
  (Wrd24.Obj) = (Rsp [3]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [4]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd23.pObj) [5]) = (Wrd18.Obj);
  Rvl = (Wrd15.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_89)
  (Wrd174.Obj) = (Rsp [1]);
  (Wrd175.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd174.Obj);
  (* (Rhp++)) = (Wrd175.Obj);
  (Wrd173.pObj) = (& (Rhp [-2]));
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd173.pObj)));
  (Rsp [6]) = (Wrd171.Obj);
  (Wrd179.Obj) = (Rsp [3]);
  (Wrd180.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd179.Obj);
  (* (Rhp++)) = (Wrd180.Obj);
  (Wrd178.pObj) = (& (Rhp [-2]));
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd178.pObj)));
  (Rsp [7]) = (Wrd176.Obj);
  (Wrd185.Obj) = (current_block [OBJECT_9_1]);
  (* (Rhp++)) = (Wrd174.Obj);
  (* (Rhp++)) = (Wrd185.Obj);
  (Wrd183.pObj) = (& (Rhp [-2]));
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd183.pObj)));
  (Wrd189.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd189.Obj);
  (* (Rhp++)) = (Wrd181.Obj);
  (Wrd188.pObj) = (& (Rhp [-2]));
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd188.pObj)));
  (Wrd193.Obj) = (Rsp [8]);
  (* (Rhp++)) = (Wrd186.Obj);
  (* (Rhp++)) = (Wrd193.Obj);
  (Wrd192.pObj) = (& (Rhp [-2]));
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd192.pObj)));
  (Rsp [8]) = (Wrd190.Obj);
  (Wrd198.Obj) = (Rsp [9]);
  (* (Rhp++)) = (Wrd179.Obj);
  (* (Rhp++)) = (Wrd198.Obj);
  (Wrd196.pObj) = (& (Rhp [-2]));
  (Wrd194.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd196.pObj)));
  (Rsp [9]) = (Wrd194.Obj);
  Rsp = (& (Rsp [6]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd201.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_27])));
  Rhp += 4;
  (Wrd200.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd201.pObj)));
  Wrd208 = Wrd201;
  (Wrd209.Obj) = (Rsp [3]);
  ((Wrd208.pObj) [2]) = (Wrd209.Obj);
  (Wrd207.Obj) = (Rsp [2]);
  ((Wrd208.pObj) [3]) = (Wrd207.Obj);
  (Wrd205.Obj) = (Rsp [1]);
  ((Wrd208.pObj) [4]) = (Wrd205.Obj);
  (Wrd203.Obj) = (Rsp [0]);
  ((Wrd208.pObj) [5]) = (Wrd203.Obj);
  Rvl = (Wrd200.Obj);
  goto label_87;

DEFLABEL (label_91)
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_26]))));
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_72)
  (Wrd144.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_25]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_24]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_70)
  (Wrd128.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd214.Obj) = (Rsp [1]);
  (Wrd215.uLng) = (OBJECT_TYPE (Wrd214.Obj));
  if (! ((Wrd215.uLng) == 1))
    goto label_103;
  (Wrd213.pObj) = (OBJECT_ADDRESS (Wrd214.Obj));
  (Wrd211.Obj) = ((Wrd213.pObj) [1]);

DEFLABEL (label_102)
  (Wrd222.uLng) = (OBJECT_TYPE (Wrd211.Obj));
  if (! ((Wrd222.uLng) == 1))
    goto label_101;
  (Wrd221.pObj) = (OBJECT_ADDRESS (Wrd211.Obj));
  (Wrd220.Obj) = ((Wrd221.pObj) [1]);

DEFLABEL (label_100)
  (Wrd230.uLng) = (OBJECT_TYPE (Wrd220.Obj));
  if (! ((Wrd230.uLng) == 1))
    goto label_99;
  (Wrd229.pObj) = (OBJECT_ADDRESS (Wrd220.Obj));
  (Wrd228.Obj) = ((Wrd229.pObj) [0]);

DEFLABEL (label_98)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd228.Obj);
  goto label_96;

DEFLABEL (label_99)
  (Wrd234.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_23]))));
  (* (--Rsp)) = (Wrd234.Obj);
  (* (--Rsp)) = (Wrd220.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_75)
  (Wrd228.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd226.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd226.Obj);
  (* (--Rsp)) = (Wrd211.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_74)
  (Wrd220.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd219.Obj);
  (* (--Rsp)) = (Wrd214.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_73)
  (Wrd211.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_69)
  (Wrd118.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_68)
  (Wrd109.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_110)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_31]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_66)
  (Wrd77.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_63)
  (Wrd27.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_61)
  (Wrd5.Obj) = Rvl;
  goto label_121;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (lambda_82)
  CLOSURE_HEADER (LABEL_9_33);

DEFLABEL (lambda_10)
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

DEFLABEL (lambda_81)
  CLOSURE_HEADER (LABEL_9_27);

DEFLABEL (lambda_48)
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

DEFLABEL (lambda_83)
  CLOSURE_HEADER (LABEL_9_37);

DEFLABEL (lambda_40)
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
pmpars_so_cf05a19cccdecaa7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
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

static const struct liarc_code_S arr_decl_pmpars_so_cf05a19cccdecaa7 [9] =
  {
    { "pmpars_so_code_1", 8, pmpars_so_code_1 },
    { "pmpars_so_code_2", 23, pmpars_so_code_2 },
    { "pmpars_so_code_3", 13, pmpars_so_code_3 },
    { "pmpars_so_code_4", 9, pmpars_so_code_4 },
    { "pmpars_so_code_5", 2, pmpars_so_code_5 },
    { "pmpars_so_code_6", 10, pmpars_so_code_6 },
    { "pmpars_so_code_7", 11, pmpars_so_code_7 },
    { "pmpars_so_code_8", 11, pmpars_so_code_8 },
    { "pmpars_so_code_9", 29, pmpars_so_code_9 }
  };

int
decl_pmpars_so_cf05a19cccdecaa7 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_pmpars_so_cf05a19cccdecaa7);
  return (0);
}

DECLARE_COMPILED_CODE ("pmpars.so", 3, decl_pmpars_so_cf05a19cccdecaa7, pmpars_so_cf05a19cccdecaa7)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_pmpars_so_data_cf05a19cccdecaa7 [1835] =
  "\x56\x18\xde\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9\x28"
  "\x0d\xba\x28\x0d\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x82\x88"
  "\xc1\xbd\x08\xc1\xbe\x0d\xbf\x0d\x08\x89\x28\x0d\x28\xb1\x28\x0d"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xb5\xb6\x08\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x08\xb5\x0d\xb6\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x85\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0d\xb6\x08\xb5\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x0d\x1c\x0d\x0d\x0d\x0d\x1c\x24"
  "\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x08\x88\x0d\x0d\x0d\x0d\x08\x1b\x0d\x24"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x0c\x1b\xb7\xb6\x08\xb5"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x07\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb4\x2a\x17\x1b\x1b\x1b\x1b\x0d"
  "\xb3\xb2\x1b\xb1\x1b\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61\x73\x65"
  "\x2f\x70\x6d\x70\x61\x72\x73\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x03\x12\x65\x78\x74\x72\x61\x63\x74\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x73\x03\x13\x65\x78\x74\x72\x61\x63\x74\x2d\x71\x75"
  "\x61\x6c\x69\x66\x69\x65\x72\x73\x03\x12\x70\x61\x74\x74\x65\x72"
  "\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x04\x12\x72\x65\x6f"
  "\x72\x64\x65\x72\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x05\x0b"
  "\x12\x81\x85\x02\x0a\x10\x81\x89\x02\x09\x0e\x81\x87\x02\x08\x0c"
  "\x81\x87\x02\x07\x0a\x81\x87\x02\x06\x08\x81\x87\x02\x05\x06\x81"
  "\x85\x02\x04\x04\x84\x06\x11\x1d\x02\x04\x63\x64\x72\x04\x63\x61"
  "\x72\x02\x3f\x03\x3f\x40\x04\x05\x6d\x65\x6d\x71\x03\x03\x16\x6d"
  "\x61\x6b\x65\x2d\x70\x61\x74\x74\x65\x72\x6e\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x04\x16\x6d\x65\x72\x67\x65\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x73\x2d\x6c\x69\x73\x74\x73\x09\x05\x22\x30\x81"
  "\x85\x02\x21\x2e\x81\x87\x02\x20\x2c\x81\x87\x02\x1f\x2a\x81\x87"
  "\x02\x1e\x28\x81\x89\x02\x1d\x26\x81\x87\x02\x1c\x24\x81\x85\x02"
  "\x1b\x22\x81\x83\x02\x1a\x20\x81\x87\x02\x19\x1e\x81\x87\x02\x18"
  "\x1c\x81\x87\x02\x17\x1a\x81\x85\x02\x16\x18\x81\x85\x02\x15\x16"
  "\x81\x85\x02\x14\x14\x81\x85\x02\x13\x12\x81\x83\x02\x12\x10\x81"
  "\x85\x02\x11\x0e\x81\x85\x02\x10\x0c\x81\x85\x02\x0f\x0a\x81\x83"
  "\x02\x0e\x08\x81\x85\x02\x0d\x06\x81\x87\x02\x0c\x04\x83\x04\x2f"
  "\x3f\x0a\x02\x04\x05\x61\x73\x73\x71\x0b\x04\x09\x04\x06\x64\x65"
  "\x6c\x71\x21\x04\x08\x61\x70\x70\x65\x6e\x64\x21\x05\x2f\x1c\x81"
  "\x89\x02\x2e\x1a\x81\x89\x02\x2d\x18\x81\x87\x02\x2c\x16\x81\x8b"
  "\x02\x2b\x14\x81\x89\x02\x2a\x12\x81\x8d\x02\x29\x10\x81\x8b\x02"
  "\x28\x0e\x81\x87\x02\x27\x0c\x81\x8b\x02\x26\x0a\x81\x85\x02\x25"
  "\x08\x81\x89\x02\x24\x06\x81\x89\x02\x23\x04\x84\x06\x1b\x2a\x0c"
  "\x02\x0a\x71\x75\x61\x6c\x69\x66\x69\x65\x72\x38\x14\x81\x85\x02"
  "\x37\x12\x81\x85\x02\x36\x10\x81\x85\x02\x35\x0e\x81\x83\x02\x34"
  "\x0c\x81\x83\x02\x33\x0a\x81\x83\x02\x32\x08\x81\x83\x02\x31\x06"
  "\x81\x83\x02\x30\x04\x83\x04\x13\x1a\x0d\x02\x04\x04\x6d\x61\x70"
  "\x0e\x04\x0b\x03\x3a\x06\x81\x85\x02\x39\x04\x84\x06\x05\x0d\x0b"
  "\x02\x06\x62\x65\x67\x69\x6e\x04\x0b\x70\x61\x72\x73\x65\x2d\x72"
  "\x75\x6c\x65\x0f\x06\x17\x72\x75\x6c\x65\x2d\x72\x65\x73\x75\x6c"
  "\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x10\x04\x0d\x63"
  "\x6c\x6f\x73\x65\x2d\x73\x79\x6e\x74\x61\x78\x11\x05\x12\x6d\x61"
  "\x6b\x65\x2d\x72\x75\x6c\x65\x2d\x6d\x61\x74\x63\x68\x65\x72\x12"
  "\x05\x44\x16\x81\x85\x02\x43\x14\x81\x8f\x02\x42\x12\x81\x8b\x02"
  "\x41\x10\x81\x95\x02\x40\x0e\x81\x95\x02\x3f\x0c\x81\x8b\x02\x3e"
  "\x0a\x81\x93\x02\x3d\x08\x81\x95\x02\x3c\x06\x81\x87\x02\x3b\x04"
  "\x85\x08\x15\x25\x13\x02\x08\x09\x69\x6e\x73\x74\x61\x6e\x63\x65"
  "\x07\x6c\x61\x6d\x62\x64\x61\x14\x11\x70\x61\x74\x74\x65\x72\x6e"
  "\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x32\x11\x70\x61\x74\x74\x65\x72"
  "\x6e\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x31\x06\x71\x75\x6f\x74\x65"
  "\x1a\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x70\x61\x74\x74\x65\x72\x6e"
  "\x2d\x6d\x61\x74\x63\x68\x65\x72\x73\x3f\x15\x02\x03\x1d\x70\x61"
  "\x74\x74\x65\x72\x6e\x2d\x63\x6f\x6e\x74\x61\x69\x6e\x73\x2d\x64"
  "\x75\x70\x6c\x69\x63\x61\x74\x65\x73\x3f\x05\x19\x67\x65\x6e\x65"
  "\x72\x61\x74\x65\x2d\x70\x61\x74\x74\x65\x72\x6e\x2d\x6d\x61\x74"
  "\x63\x68\x65\x72\x04\x11\x04\x4f\x18\x81\x8d\x02\x4e\x16\x81\x8d"
  "\x02\x4d\x14\x81\x8b\x02\x4c\x12\x81\x8b\x02\x4b\x10\x81\x89\x02"
  "\x4a\x0e\x81\x89\x02\x49\x0c\x81\x87\x02\x48\x0a\x81\x87\x02\x47"
  "\x08\x81\x87\x02\x46\x06\x81\x87\x02\x45\x04\x85\x08\x17\x29\x16"
  "\x02\x09\x0c\x74\x79\x70\x65\x2d\x63\x68\x65\x63\x6b\x73\x0a\x69"
  "\x6e\x74\x65\x67\x72\x61\x74\x65\x04\x6c\x65\x74\x04\x61\x6e\x64"
  "\x08\x64\x65\x63\x6c\x61\x72\x65\x14\x05\x6c\x69\x73\x74\x02\x04"
  "\x18\x70\x72\x6f\x63\x65\x73\x73\x2d\x74\x72\x61\x6e\x73\x66\x6f"
  "\x72\x6d\x61\x74\x69\x6f\x6e\x73\x14\x04\x11\x05\x0e\x04\x07\x61"
  "\x70\x70\x65\x6e\x64\x05\x5a\x18\x81\x91\x02\x59\x16\x81\x8f\x02"
  "\x58\x14\x81\x8f\x02\x57\x12\x81\x8d\x02\x56\x10\x81\x95\x02\x55"
  "\x0e\x81\x8b\x02\x54\x0c\x81\x8f\x02\x53\x0a\x81\x91\x02\x52\x08"
  "\x81\x8b\x02\x51\x06\x81\x8b\x02\x50\x04\x86\x0a\x17\x2c\x17\x02"
  "\x0a\x06\x61\x70\x70\x6c\x79\x0c\x62\x6f\x6f\x6c\x65\x61\x6e\x2f"
  "\x61\x6e\x64\x1e\x4d\x75\x6c\x74\x69\x70\x6c\x65\x20\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x20\x71\x75\x61\x6c\x69\x66\x69\x65\x72\x73"
  "\x3a\x0e\x04\x11\x04\x06\x65\x72\x72\x6f\x72\x03\x77\x3c\x81\x85"
  "\x02\x76\x3a\x81\x97\x02\x75\x38\x81\x95\x02\x74\x36\x81\x85\x02"
  "\x73\x34\x81\x95\x02\x72\x32\x81\x85\x02\x71\x30\xfd\xff\x03\x70"
  "\x2e\x81\x93\x02\x6f\x2c\x81\x95\x02\x6e\x2a\x81\x93\x02\x6d\x28"
  "\x81\x93\x02\x6c\x26\x81\x93\x02\x6b\x24\x81\x93\x02\x6a\x22\x81"
  "\x93\x02\x69\x20\x81\x93\x02\x68\x1e\x81\x93\x02\x67\x1c\x81\x91"
  "\x02\x66\x1a\x81\x8f\x02\x65\x18\x81\x8d\x02\x64\x16\x81\x8d\x02"
  "\x63\x14\x81\x8b\x02\x62\x12\x81\x8b\x02\x61\x10\x81\x8b\x02\x60"
  "\x0e\x81\x91\x02\x5f\x0c\x81\x91\x02\x5e\x0a\x83\x04\x5d\x08\xfd"
  "\xff\x03\x5c\x06\xff\xff\x03\x5b\x04\x84\x06\x3b\x4b\x11\x0a\x0e"
  "\x0e\x11\x04\x17\x04\x16\x04\x13\x04\x0b\x04\x0d\x04\x0c\x04\x0a"
  "\x04\x04\x0b\x14\x10\x12\x15\x0e\x72\x75\x6c\x65\x2d\x3e\x6d\x61"
  "\x74\x63\x68\x65\x72\x09\x0f\x0b\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02"
  "\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
pmpars_so_data_cf05a19cccdecaa7 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_pmpars_so_data_cf05a19cccdecaa7 [0]))), (sizeof (prog_pmpars_so_data_cf05a19cccdecaa7)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("pmpars.so", pmpars_so_data_cf05a19cccdecaa7)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("pmpars.so", "220d16cb46abeff8")
