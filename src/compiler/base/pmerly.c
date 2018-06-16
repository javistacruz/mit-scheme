/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:12-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_1_4);
      goto early_make_rule_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (early_make_rule_5)
DEFLABEL (early_make_rule_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 8
#define DEBUGGING_LABEL_2_2 7
#define EXECUTE_CACHE_2_5 5
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto early_parse_rule_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (early_parse_rule_3)
DEFLABEL (early_parse_rule_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define LABEL_3_10 13
#define LABEL_3_11 15
#define LABEL_3_12 17
#define LABEL_3_13 19
#define LABEL_3_14 21
#define LABEL_3_16 23
#define LABEL_3_17 25
#define LABEL_3_21 27
#define LABEL_3_19 29
#define TAG_3_20 13
#define LABEL_3_25 31
#define LABEL_3_15 33
#define LABEL_3_23 35
#define TAG_3_24 16
#define LABEL_3_26 37
#define ENVIRONMENT_LABEL_3_3 54
#define DEBUGGING_LABEL_3_2 53
#define OBJECT_3_5 52
#define OBJECT_3_4 51
#define OBJECT_3_3 50
#define OBJECT_3_2 49
#define OBJECT_3_1 48
#define OBJECT_3_0 47
#define EXECUTE_CACHE_3_27 39
#define EXECUTE_CACHE_3_22 41
#define EXECUTE_CACHE_3_18 43
#define EXECUTE_CACHE_3_6 45
#define FREE_REFERENCES_LABEL_3_0 38
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd138;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd123;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd122;
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd119;
  machine_word Wrd113;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd105;
  machine_word Wrd106;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto extract_variables_26;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_29;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto label_32;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto label_33;

    case 6:
      current_block = (Rpc - LABEL_3_11);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_3_12);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_3_13);
      goto label_36;

    case 9:
      current_block = (Rpc - LABEL_3_14);
      goto label_37;

    case 10:
      current_block = (Rpc - LABEL_3_16);
      goto label_38;

    case 11:
      current_block = (Rpc - LABEL_3_17);
      goto label_39;

    case 12:
      current_block = (Rpc - LABEL_3_21);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_3_19);
      goto lambda_43;

    case 14:
      current_block = (Rpc - LABEL_3_25);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_3_23);
      goto lambda_44;

    case 17:
      current_block = (Rpc - LABEL_3_26);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (extract_variables_42)
DEFLABEL (extract_variables_26)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_45;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_5]);
  (Rsp [2]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_45)
  if (! ((Wrd6.uLng) == 1))
    goto label_73;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_72)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_3_1])))
    goto label_46;
  (Wrd140.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd140.Obj);
  (Wrd141.Obj) = (current_block [OBJECT_3_2]);
  (Rsp [0]) = (Wrd141.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (label_46)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_71;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_70)
  if ((Wrd19.Obj) == (current_block [OBJECT_3_3]))
    goto label_49;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_19])));
  Rhp += 2;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd34 = Wrd31;
  (Wrd35.Obj) = (Rsp [1]);
  ((Wrd34.pObj) [2]) = (Wrd35.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  ((Wrd34.pObj) [3]) = (Wrd33.Obj);
  (Rsp [1]) = (Wrd30.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_48;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_47)
  (Rsp [0]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_22]));

DEFLABEL (label_48)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_30)
  (Wrd36.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd45.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_69;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_68)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_67;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd55.Obj) = ((Wrd56.pObj) [1]);

DEFLABEL (label_66)
  (Wrd62.Obj) = (current_block [OBJECT_3_5]);
  if ((Wrd55.Obj) == (Wrd62.Obj))
    goto label_65;
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_64;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [1]);

DEFLABEL (label_63)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_62;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [1]);
  (* (--Rsp)) = (Wrd73.Obj);

DEFLABEL (label_61)
  (Wrd82.Obj) = (Rsp [2]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_60;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd79.Obj) = ((Wrd81.pObj) [0]);

DEFLABEL (label_59)
  (Wrd88.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd88.Obj);
  (Wrd91.pObj) = (& (Rhp [-2]));
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd91.pObj)));
  (Wrd95.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd95.Obj);
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (* (--Rsp)) = (Wrd94.Obj);

DEFLABEL (label_58)
  (Wrd99.Obj) = (Rsp [2]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 1))
    goto label_57;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd96.Obj) = ((Wrd98.pObj) [1]);

DEFLABEL (label_56)
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd107.uLng) == 1))
    goto label_55;
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd105.Obj) = ((Wrd106.pObj) [0]);

DEFLABEL (label_54)
  (Wrd112.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd105.Obj);
  (* (Rhp++)) = (Wrd112.Obj);
  (Wrd115.pObj) = (& (Rhp [-2]));
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd115.pObj)));
  (Wrd119.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = (Wrd113.Obj);
  (* (Rhp++)) = (Wrd119.Obj);
  (Wrd118.pObj) = (& (Rhp [-2]));
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd118.pObj)));
  (Rsp [2]) = (Wrd116.Obj);
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd126.Obj) = (Rsp [2]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 1))
    goto label_53;
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd123.Obj) = ((Wrd125.pObj) [1]);

DEFLABEL (label_52)
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd134.uLng) == 1))
    goto label_51;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd133.Obj) = ((Wrd132.pObj) [0]);
  (* (--Rsp)) = (Wrd133.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_51)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_38)
  (Wrd123.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_37)
  (Wrd105.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_36)
  (Wrd96.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_60)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_35)
  (Wrd79.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_33)
  (Wrd63.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd62.Obj);
  goto label_58;

DEFLABEL (label_67)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_32)
  (Wrd55.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_31)
  (Wrd46.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_29)
  (Wrd19.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_28)
  (Wrd9.Obj) = Rvl;
  goto label_72;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_3_19);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_23])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd23.Obj) = ((Wrd14.pObj) [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_75;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd16.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_74)
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_22]));

DEFLABEL (label_75)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_40)
  (Wrd16.Obj) = Rvl;
  goto label_74;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_3_23);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_26);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_6 5
#define LABEL_4_7 7
#define LABEL_4_5 9
#define LABEL_4_10 11
#define LABEL_4_12 13
#define LABEL_4_13 15
#define LABEL_4_9 17
#define LABEL_4_15 19
#define ENVIRONMENT_LABEL_4_3 32
#define DEBUGGING_LABEL_4_2 31
#define OBJECT_4_3 30
#define OBJECT_4_2 29
#define OBJECT_4_1 28
#define OBJECT_4_0 27
#define EXECUTE_CACHE_4_14 21
#define EXECUTE_CACHE_4_11 23
#define EXECUTE_CACHE_4_8 25
#define FREE_REFERENCES_LABEL_4_0 20
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_4_4);
      goto merge_variables_lists_13;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_4_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_4_15);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_variables_lists_22)
DEFLABEL (merge_variables_lists_13)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_38;
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_36;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_35;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_34)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_33;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_26;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_25)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_24;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_23)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Rsp [2]) = (Wrd28.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_4_3]);
  (Rsp [1]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (label_24)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_18)
  (Wrd16.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_31;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_29;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_28)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_15)
  (Wrd13.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  Rvl = (Wrd5.Obj);

DEFLABEL (label_37)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  Rvl = (Rsp [1]);
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_8 7
#define TAG_5_9 2
#define LABEL_5_6 9
#define TAG_5_7 3
#define LABEL_5_11 11
#define LABEL_5_21 13
#define LABEL_5_14 15
#define TAG_5_15 6
#define LABEL_5_12 17
#define TAG_5_13 7
#define LABEL_5_25 19
#define LABEL_5_26 21
#define LABEL_5_27 23
#define LABEL_5_28 25
#define LABEL_5_29 27
#define LABEL_5_30 29
#define LABEL_5_31 31
#define LABEL_5_19 33
#define TAG_5_20 15
#define LABEL_5_22 35
#define LABEL_5_33 37
#define ENVIRONMENT_LABEL_5_3 73
#define DEBUGGING_LABEL_5_2 72
#define OBJECT_5_9 71
#define OBJECT_5_8 70
#define OBJECT_5_7 69
#define OBJECT_5_6 68
#define OBJECT_5_5 67
#define OBJECT_5_4 66
#define OBJECT_5_3 65
#define OBJECT_5_2 64
#define OBJECT_5_1 63
#define OBJECT_5_0 62
#define EXECUTE_CACHE_5_34 39
#define EXECUTE_CACHE_5_32 41
#define EXECUTE_CACHE_5_24 43
#define EXECUTE_CACHE_5_23 45
#define EXECUTE_CACHE_5_18 47
#define EXECUTE_CACHE_5_17 49
#define EXECUTE_CACHE_5_16 51
#define EXECUTE_CACHE_5_10 53
#define FREE_REFERENCE_5_2 56
#define FREE_REFERENCE_5_1 57
#define FREE_REFERENCE_5_0 58
#define FREE_ASSIGNMENT_5_1 60
#define FREE_ASSIGNMENT_5_0 61
#define FREE_REFERENCES_LABEL_5_0 38
#define NUMBER_OF_LINKER_SECTIONS_5_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd50;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd54;
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd7;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd53;
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
      goto early_pattern_lookup_32;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_34;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto lambda_45;

    case 3:
      current_block = (Rpc - LABEL_5_6);
      goto lambda_44;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_5_21);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_5_14);
      goto lambda_47;

    case 7:
      current_block = (Rpc - LABEL_5_12);
      goto swapB_46;

    case 8:
      current_block = (Rpc - LABEL_5_25);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_5_26);
      goto label_36;

    case 10:
      current_block = (Rpc - LABEL_5_27);
      goto label_37;

    case 11:
      current_block = (Rpc - LABEL_5_28);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_5_29);
      goto label_39;

    case 13:
      current_block = (Rpc - LABEL_5_30);
      goto label_40;

    case 14:
      current_block = (Rpc - LABEL_5_31);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_5_19);
      goto lambda_48;

    case 16:
      current_block = (Rpc - LABEL_5_22);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_5_33);
      goto label_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (early_pattern_lookup_43)
DEFLABEL (early_pattern_lookup_32)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd53.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd51.pObj) = (& (Rhp [-1]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd51.pObj)));
  (Rsp [4]) = (Wrd52.Obj);
  (Wrd57.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd55.pObj) = (& (Rhp [-1]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd55.pObj)));
  (Rsp [5]) = (Wrd56.Obj);
  (Wrd7.Obj) = ((Wrd55.pObj) [0]);
  if ((Wrd7.Obj) == (current_block [OBJECT_5_0]))
    goto label_52;

DEFLABEL (label_51)
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  if ((Wrd11.Obj) == (current_block [OBJECT_5_0]))
    goto label_50;
  if (! ((Wrd11.Obj) == (current_block [OBJECT_5_1])))
    goto label_49;

DEFLABEL (label_50)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_6])));
  Rhp += 2;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  Wrd38 = Wrd35;
  (Wrd39.Obj) = (Rsp [5]);
  ((Wrd38.pObj) [2]) = (Wrd39.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  ((Wrd38.pObj) [3]) = (Wrd37.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  ((Wrd41.pObj) [0]) = (Wrd34.Obj);

DEFLABEL (label_49)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_8])));
  Rhp += 6;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd30 = Wrd19;
  (Wrd31.Obj) = (Rsp [5]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  ((Wrd30.pObj) [4]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [5]) = (Wrd25.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [6]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  ((Wrd30.pObj) [7]) = (Wrd21.Obj);
  (Rsp [5]) = (Wrd18.Obj);
  (Rsp [4]) = (Wrd23.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (label_52)
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_54;
  Wrd42 = Wrd46;

DEFLABEL (label_53)
  (Wrd48.Obj) = (Rsp [5]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  ((Wrd49.pObj) [0]) = (Wrd42.Obj);
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd43.pObj));

DEFLABEL (label_34)
  (Wrd42.Obj) = Rvl;
  goto label_53;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_5_8);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  if ((Wrd10.Obj) == (current_block [OBJECT_5_0]))
    goto label_56;
  (* (--Rsp)) = (Wrd10.Obj);
  goto label_55;

DEFLABEL (label_56)
  (Wrd54.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_55)
DEFLABEL (label_57)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd52.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_12])));
  Rhp += 2;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd52.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd49.pObj) = (& (Rhp [-1]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd49.pObj)));
  (Rsp [2]) = (Wrd50.Obj);
  Wrd46 = Wrd52;
  ((Wrd46.pObj) [2]) = (Wrd50.Obj);
  ((Wrd46.pObj) [3]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd53.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_14])));
  Rhp += 4;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd38 = Wrd27;
  (Wrd41.Obj) = ((Wrd19.pObj) [4]);
  ((Wrd38.pObj) [2]) = (Wrd41.Obj);
  (Wrd37.Obj) = ((Wrd19.pObj) [6]);
  ((Wrd38.pObj) [3]) = (Wrd37.Obj);
  (Wrd33.Obj) = ((Wrd19.pObj) [7]);
  ((Wrd38.pObj) [4]) = (Wrd33.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  ((Wrd38.pObj) [5]) = (Wrd29.Obj);
  (Rsp [1]) = (Wrd26.Obj);
  (Rsp [0]) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_19])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_5]), 2);

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_5_6);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_58;
  (Wrd20.Obj) = (current_block [OBJECT_5_2]);
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [3]);
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (label_58)
  if ((Wrd5.Obj) == (current_block [OBJECT_5_3]))
    goto label_59;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd15.pObj) [0]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd16.Obj) = ((Wrd13.pObj) [3]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_5_4]);
  (Rsp [0]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_5_14);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  if (! ((Wrd13.Obj) == (current_block [OBJECT_5_0])))
    goto label_64;

DEFLABEL (label_63)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_5_21);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_62)
  (Wrd23.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_24]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_61;
  Wrd12 = Wrd16;

DEFLABEL (label_60)
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_34]));

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_33])), (Wrd13.pObj));

DEFLABEL (label_41)
  (Wrd12.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_64)
  if ((Wrd13.Obj) == (current_block [OBJECT_5_1]))
    goto label_63;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_62;

DEFLABEL (swapB_46)
  CLOSURE_HEADER (LABEL_5_12);

DEFLABEL (swapB_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  Wrd5 = Wrd9;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_77)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_76;

DEFLABEL (label_75)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_74)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  Wrd57 = Wrd61;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_68)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_65)
  Rvl = (current_block [OBJECT_5_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_67)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_30])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_40)
  goto label_65;

DEFLABEL (label_70)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_69;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_29])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_39)
  goto label_68;

DEFLABEL (label_73)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_72;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_28])), (Wrd58.pObj));

DEFLABEL (label_38)
  (Wrd57.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_76)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_75;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_27])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_37)
  goto label_74;

DEFLABEL (label_79)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_78;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_26])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_36)
  goto label_77;

DEFLABEL (label_82)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_25])), (Wrd6.pObj));

DEFLABEL (label_35)
  (Wrd5.Obj) = Rvl;
  goto label_80;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_5_19);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_5_7])))
    goto label_85;

DEFLABEL (label_84)
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_31);
  (Wrd13.Obj) = Rvl;

DEFLABEL (label_83)
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd18.pObj) [0]);
  (Rsp [0]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_85)
  if ((Wrd8.Obj) == (current_block [OBJECT_5_8]))
    goto label_84;
  (Wrd13.Obj) = (current_block [OBJECT_5_9]);
  Rsp = (& (Rsp [1]));
  goto label_83;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_7 9
#define LABEL_6_10 11
#define LABEL_6_14 13
#define LABEL_6_12 15
#define TAG_6_13 6
#define LABEL_6_18 17
#define LABEL_6_8 19
#define LABEL_6_21 21
#define LABEL_6_16 23
#define TAG_6_17 10
#define LABEL_6_19 25
#define LABEL_6_22 27
#define LABEL_6_24 29
#define LABEL_6_26 31
#define ENVIRONMENT_LABEL_6_3 55
#define DEBUGGING_LABEL_6_2 54
#define OBJECT_6_6 53
#define OBJECT_6_5 52
#define OBJECT_6_4 51
#define OBJECT_6_3 50
#define OBJECT_6_2 49
#define OBJECT_6_1 48
#define OBJECT_6_0 47
#define EXECUTE_CACHE_6_25 33
#define EXECUTE_CACHE_6_23 35
#define EXECUTE_CACHE_6_20 37
#define EXECUTE_CACHE_6_15 39
#define EXECUTE_CACHE_6_11 41
#define EXECUTE_CACHE_6_9 43
#define FREE_REFERENCE_6_0 46
#define FREE_REFERENCES_LABEL_6_0 32
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto parse_instance_22;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_6_14);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_6_12);
      goto lambda_34;

    case 7:
      current_block = (Rpc - LABEL_6_18);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_6_21);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_6_16);
      goto lambda_35;

    case 11:
      current_block = (Rpc - LABEL_6_19);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_6_22);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_6_24);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_6_26);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_instance_33)
DEFLABEL (parse_instance_22)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_36;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_5]);
  (Rsp [2]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_36)
  if (! ((Wrd6.uLng) == 1))
    goto label_53;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_52)
  if ((Wrd9.Obj) == (current_block [OBJECT_6_1]))
    goto label_42;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_41;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_40)
  if (! ((Wrd19.Obj) == (current_block [OBJECT_6_3])))
    goto label_37;
  (Wrd45.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_6_4]);
  (Rsp [0]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (label_37)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_12])));
  Rhp += 2;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd34 = Wrd31;
  (Wrd35.Obj) = (Rsp [1]);
  ((Wrd34.pObj) [2]) = (Wrd35.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  ((Wrd34.pObj) [3]) = (Wrd33.Obj);
  (Rsp [1]) = (Wrd30.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_39;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_38)
  (Rsp [0]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (label_39)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_26)
  (Wrd36.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_25)
  (Wrd19.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_51;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_50)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_49;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_48)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd66.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_6_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_45;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_6_6]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_6_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_6_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_44;
  Wrd6 = Wrd10;

DEFLABEL (label_43)
  (Wrd12.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_6_5]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd25.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd25.Obj);
  (Rsp [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_26])), (Wrd7.pObj));

DEFLABEL (label_31)
  (Wrd6.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_47;
  Wrd8 = Wrd12;

DEFLABEL (label_46)
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_6_5]);
  (Rsp [2]) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_21])), (Wrd9.pObj));

DEFLABEL (label_30)
  (Wrd8.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_27)
  (Wrd47.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_24)
  (Wrd9.Obj) = Rvl;
  goto label_52;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_6_12);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_16])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd23.Obj) = ((Wrd14.pObj) [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_55;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd16.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (label_55)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_29)
  (Wrd16.Obj) = Rvl;
  goto label_54;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_6_16);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_22);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
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
#define TAG_7_6 1
#define LABEL_7_7 7
#define LABEL_7_8 9
#define LABEL_7_9 11
#define LABEL_7_10 13
#define LABEL_7_11 15
#define LABEL_7_12 17
#define LABEL_7_19 19
#define LABEL_7_17 21
#define TAG_7_18 9
#define LABEL_7_21 23
#define LABEL_7_13 25
#define LABEL_7_14 27
#define LABEL_7_15 29
#define LABEL_7_26 31
#define LABEL_7_22 33
#define LABEL_7_25 35
#define LABEL_7_31 37
#define LABEL_7_28 39
#define LABEL_7_32 41
#define LABEL_7_33 43
#define LABEL_7_29 45
#define ENVIRONMENT_LABEL_7_3 72
#define DEBUGGING_LABEL_7_2 71
#define OBJECT_7_7 70
#define OBJECT_7_6 69
#define OBJECT_7_5 68
#define OBJECT_7_4 67
#define OBJECT_7_3 66
#define OBJECT_7_2 65
#define OBJECT_7_1 64
#define OBJECT_7_0 63
#define EXECUTE_CACHE_7_34 47
#define EXECUTE_CACHE_7_30 49
#define EXECUTE_CACHE_7_27 51
#define EXECUTE_CACHE_7_24 53
#define EXECUTE_CACHE_7_23 55
#define EXECUTE_CACHE_7_20 57
#define EXECUTE_CACHE_7_16 59
#define FREE_REFERENCE_7_0 62
#define FREE_REFERENCES_LABEL_7_0 46
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd72;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd106;
  machine_word Wrd62;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_7_4);
      goto try_rules_27;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto loop_26;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_29;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_7_10);
      goto label_33;

    case 6:
      current_block = (Rpc - LABEL_7_11);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_7_12);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_7_19);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_7_17);
      goto lambda_44;

    case 10:
      current_block = (Rpc - LABEL_7_21);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_7_15);
      goto lambda_9;

    case 14:
      current_block = (Rpc - LABEL_7_26);
      goto label_37;

    case 15:
      current_block = (Rpc - LABEL_7_22);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_7_25);
      goto continuation_8;

    case 17:
      current_block = (Rpc - LABEL_7_31);
      goto label_38;

    case 18:
      current_block = (Rpc - LABEL_7_28);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_7_32);
      goto label_39;

    case 20:
      current_block = (Rpc - LABEL_7_33);
      goto label_40;

    case 21:
      current_block = (Rpc - LABEL_7_29);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (try_rules_42)
DEFLABEL (try_rules_27)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  Wrd12 = Wrd14;
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd10.Obj);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_7_1]);
  (Rsp [4]) = (Wrd7.Obj);
  goto loop_26;

DEFLABEL (loop_43)
DEFLABEL (loop_26)
  INTERRUPT_CHECK (26, LABEL_7_5);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_64;
  Wrd6 = Wrd10;

DEFLABEL (label_63)
  if ((Wrd6.Obj) == (current_block [OBJECT_7_0]))
    goto label_58;
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_62;
  Wrd14 = Wrd18;

DEFLABEL (label_61)
  Wrd13 = Wrd14;
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_60;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_60;
  (Wrd118.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if ((Wrd118.Lng) > (Wrd119.Lng))
    goto label_59;

DEFLABEL (label_58)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (current_block [OBJECT_7_0]);
  if ((Wrd29.Obj) == (Wrd30.Obj))
    goto label_48;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_17])));
  Rhp += 6;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  Wrd46 = Wrd33;
  (Wrd47.Obj) = (Rsp [0]);
  ((Wrd46.pObj) [2]) = (Wrd47.Obj);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [2]);
  ((Wrd46.pObj) [3]) = (Wrd45.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  ((Wrd46.pObj) [4]) = (Wrd41.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  ((Wrd46.pObj) [5]) = (Wrd39.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  ((Wrd46.pObj) [6]) = (Wrd37.Obj);
  ((Wrd46.pObj) [7]) = (Wrd29.Obj);
  (Rsp [4]) = (Wrd32.Obj);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_47;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [0]);

DEFLABEL (label_46)
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd57.Obj);
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [3]);
  (Rsp [2]) = (Wrd58.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_20]));

DEFLABEL (label_47)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_32)
  (Wrd48.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_48)
  (Wrd62.Obj) = (Rsp [3]);
  if ((Wrd62.Obj) == (Wrd30.Obj))
    goto label_57;
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_56;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd64.Obj) = ((Wrd66.pObj) [1]);

DEFLABEL (label_55)
  if ((Wrd64.Obj) == (current_block [OBJECT_7_0]))
    goto label_49;
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd83.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_24]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (Rsp [4]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_4]);
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_49)
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd84.Obj) = ((Wrd86.pObj) [2]);
  (Rsp [2]) = (Wrd84.Obj);
  (Wrd90.Obj) = (Rsp [3]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_54;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd87.Obj) = ((Wrd89.pObj) [0]);

DEFLABEL (label_53)
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd98.uLng) == 1))
    goto label_52;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd96.Obj) = ((Wrd97.pObj) [1]);

DEFLABEL (label_51)
  (Rsp [4]) = (Wrd96.Obj);
  (Wrd103.Obj) = (current_block [OBJECT_7_4]);
  (Rsp [3]) = (Wrd103.Obj);

DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_52)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_35)
  (Wrd96.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_34)
  (Wrd87.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_33)
  (Wrd64.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_57)
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  (Wrd106.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd106.Obj);
  (Wrd108.Obj) = (Rsp [0]);
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [2]);
  (Rsp [2]) = (Wrd107.Obj);
  goto label_50;

DEFLABEL (label_59)
  (Wrd112.Obj) = (Rsp [0]);
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd111.Obj) = ((Wrd113.pObj) [2]);
  (Rsp [2]) = (Wrd111.Obj);
  (Wrd114.Obj) = (current_block [OBJECT_7_5]);
  (Rsp [3]) = (Wrd114.Obj);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  goto label_50;

DEFLABEL (label_60)
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_8])), (Wrd15.pObj));

DEFLABEL (label_30)
  (Wrd14.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_7])), (Wrd7.pObj));

DEFLABEL (label_29)
  (Wrd6.Obj) = Rvl;
  goto label_63;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_7_17);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_70;
  if ((Wrd5.Obj) == (current_block [OBJECT_7_4]))
    goto label_65;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [3]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_7_7]);
  (Rsp [1]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_65)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_7_6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_23]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_7_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd18.Obj) = ((Wrd6.pObj) [5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Rsp [3]) = (Wrd13.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_28]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_29]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_30]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_7_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_34]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_7_28);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [7]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_69;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_68)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [4]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_67;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd31.Lng) = ((Wrd35.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd31.Lng)))
    goto label_67;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));

DEFLABEL (label_66)
  (Rsp [5]) = (Wrd26.Obj);
  (Wrd36.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd36.Obj);
  goto loop_26;

DEFLABEL (label_67)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [4]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_33]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_40)
  (Wrd26.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_32]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_39)
  (Wrd5.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_70)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [7]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_72;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_71)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = ((Wrd33.pObj) [5]);
  (Rsp [3]) = (Wrd35.Obj);
  (Wrd38.Obj) = ((Wrd33.pObj) [4]);
  (Rsp [4]) = (Wrd38.Obj);
  (Wrd41.Obj) = ((Wrd33.pObj) [6]);
  (Rsp [2]) = (Wrd41.Obj);
  goto loop_26;

DEFLABEL (label_72)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (lambda_45)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_7_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_76;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_75)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_25);
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
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_31]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_38)
  (Wrd5.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_75;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_9 5
#define LABEL_8_7 7
#define TAG_8_8 2
#define LABEL_8_10 9
#define LABEL_8_11 11
#define LABEL_8_12 13
#define LABEL_8_13 15
#define LABEL_8_14 17
#define LABEL_8_5 19
#define TAG_8_6 8
#define LABEL_8_16 21
#define LABEL_8_20 23
#define LABEL_8_18 25
#define LABEL_8_24 27
#define LABEL_8_25 29
#define LABEL_8_26 31
#define LABEL_8_22 33
#define TAG_8_23 15
#define LABEL_8_30 35
#define LABEL_8_31 37
#define LABEL_8_28 39
#define TAG_8_29 18
#define LABEL_8_32 41
#define LABEL_8_34 43
#define ENVIRONMENT_LABEL_8_3 61
#define DEBUGGING_LABEL_8_2 60
#define OBJECT_8_2 59
#define OBJECT_8_1 58
#define OBJECT_8_0 57
#define EXECUTE_CACHE_8_33 45
#define EXECUTE_CACHE_8_27 47
#define EXECUTE_CACHE_8_21 49
#define EXECUTE_CACHE_8_19 51
#define EXECUTE_CACHE_8_17 53
#define EXECUTE_CACHE_8_15 55
#define FREE_REFERENCES_LABEL_8_0 44
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd6;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd23;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
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
      goto try_rule_26;

    case 1:
      current_block = (Rpc - LABEL_8_9);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto lambda_41;

    case 3:
      current_block = (Rpc - LABEL_8_10);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_8_11);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_8_12);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_8_13);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_8_14);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_8_5);
      goto try_25;

    case 9:
      current_block = (Rpc - LABEL_8_16);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_8_20);
      goto continuation_22;

    case 11:
      current_block = (Rpc - LABEL_8_18);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_8_24);
      goto label_34;

    case 13:
      current_block = (Rpc - LABEL_8_25);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_8_26);
      goto continuation_19;

    case 15:
      current_block = (Rpc - LABEL_8_22);
      goto lambda_42;

    case 16:
      current_block = (Rpc - LABEL_8_30);
      goto label_36;

    case 17:
      current_block = (Rpc - LABEL_8_31);
      goto label_37;

    case 18:
      current_block = (Rpc - LABEL_8_28);
      goto lambda_43;

    case 19:
      current_block = (Rpc - LABEL_8_32);
      goto continuation_15;

    case 20:
      current_block = (Rpc - LABEL_8_34);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (try_rule_39)
DEFLABEL (try_rule_26)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_5])));
  Rhp += 2;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  Wrd31 = Wrd33;
  (Wrd32.Obj) = (Rsp [4]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  ((Wrd31.pObj) [3]) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_7])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  ((Wrd13.pObj) [2]) = (Wrd32.Obj);
  ((Wrd13.pObj) [3]) = (Wrd29.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [5]) = (Wrd7.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd15.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_45;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_44)
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd25.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  goto try_25;

DEFLABEL (label_45)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_28)
  (Wrd16.Obj) = Rvl;
  goto label_44;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_8_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_55;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_54)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_53;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_52)
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [3]);
  (Rsp [4]) = (Wrd29.Obj);
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (Rsp [5]) = (Wrd32.Obj);
  (Wrd42.Obj) = ((Wrd31.pObj) [4]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_51;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd35.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_50)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_49;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd50.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_48)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_47;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd57.Obj) = ((Wrd58.pObj) [0]);

DEFLABEL (label_46)
  (Rsp [3]) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (label_47)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_33)
  (Wrd57.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_32)
  (Wrd50.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_31)
  (Wrd35.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_54;

DEFLABEL (try_40)
DEFLABEL (try_25)
  INTERRUPT_CHECK (26, LABEL_8_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_8_2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd17.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 1)
    goto label_58;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_21]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_8_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_2]);
  (Rsp [2]) = (Wrd8.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = ((Wrd13.pObj) [3]);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_58)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_8_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_27]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_8_26);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_8_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_60;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = ((Wrd15.pObj) [3]);
  (Rsp [3]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_60)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_22])));
  Rhp += 4;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd30 = Wrd23;
  (Wrd31.Obj) = (Rsp [0]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  ((Wrd30.pObj) [4]) = (Wrd11.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [5]) = (Wrd25.Obj);
  (Rsp [3]) = (Wrd22.Obj);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_64;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [0]);

DEFLABEL (label_63)
  (Rsp [1]) = (Wrd33.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_62;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [0]);

DEFLABEL (label_61)
  (Rsp [2]) = (Wrd42.Obj);
  goto try_25;

DEFLABEL (label_62)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_25]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_35)
  (Wrd42.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_24]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_34)
  (Wrd33.Obj) = Rvl;
  goto label_63;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_8_22);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_28])));
  Rhp += 3;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  (Wrd18.Obj) = ((Wrd6.pObj) [3]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd26.Obj) = ((Wrd6.pObj) [4]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_68;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd19.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_67)
  (Rsp [2]) = (Wrd19.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [5]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_66;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd34.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_65)
  (Rsp [1]) = (Wrd34.Obj);
  goto try_25;

DEFLABEL (label_66)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_31]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_37)
  (Wrd34.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_30]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_36)
  (Wrd19.Obj) = Rvl;
  goto label_67;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_8_28);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_33]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_8_32);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_34]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_33]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_8_34);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_8 7
#define TAG_9_9 2
#define LABEL_9_13 9
#define LABEL_9_11 11
#define TAG_9_12 4
#define LABEL_9_15 13
#define LABEL_9_17 15
#define LABEL_9_19 17
#define ENVIRONMENT_LABEL_9_3 34
#define DEBUGGING_LABEL_9_2 33
#define OBJECT_9_3 32
#define OBJECT_9_2 31
#define OBJECT_9_1 30
#define OBJECT_9_0 29
#define EXECUTE_CACHE_9_18 19
#define EXECUTE_CACHE_9_16 21
#define EXECUTE_CACHE_9_14 23
#define EXECUTE_CACHE_9_10 25
#define EXECUTE_CACHE_9_7 27
#define FREE_REFERENCES_LABEL_9_0 18
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_9_4);
      goto match_bind_8;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_9_8);
      goto find_early_bindings_6;

    case 3:
      current_block = (Rpc - LABEL_9_13);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto lambda_16;

    case 5:
      current_block = (Rpc - LABEL_9_15);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_9_17);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_9_19);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_bind_13)
DEFLABEL (match_bind_8)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [3]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd41.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_8])));
  Rhp += 5;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  Wrd37 = Wrd41;
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [2]);
  ((Wrd37.pObj) [2]) = (Wrd40.Obj);
  (Wrd35.Obj) = ((Wrd39.pObj) [3]);
  ((Wrd37.pObj) [3]) = (Wrd35.Obj);
  (Wrd30.Obj) = ((Wrd39.pObj) [4]);
  ((Wrd37.pObj) [4]) = (Wrd30.Obj);
  (Wrd25.Obj) = ((Wrd39.pObj) [5]);
  ((Wrd37.pObj) [5]) = (Wrd25.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd37.pObj) [6]) = (Wrd20.Obj);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_1]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [2]) = (Wrd9.Obj);
  goto find_early_bindings_6;

DEFLABEL (label_17)
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Rsp [3]) = (Wrd35.Obj);
  (Rsp [1]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (find_early_bindings_15)
DEFLABEL (find_early_bindings_6)
  INTERRUPT_CHECK (26, LABEL_9_8);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_9_1])))
    goto label_18;
  (Wrd39.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [6]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = ((Wrd41.pObj) [4]);
  (Rsp [3]) = (Wrd43.Obj);
  (Wrd46.Obj) = ((Wrd41.pObj) [3]);
  (Rsp [4]) = (Wrd46.Obj);
  (Wrd49.Obj) = ((Wrd41.pObj) [2]);
  (Wrd52.Obj) = (Rsp [5]);
  (Rsp [2]) = (Wrd52.Obj);
  (Rsp [5]) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (label_18)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_11])));
  Rhp += 6;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd22 = Wrd9;
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd24.pObj) [3]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  ((Wrd22.pObj) [4]) = (Wrd23.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [5]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [6]) = (Wrd13.Obj);
  ((Wrd22.pObj) [7]) = (Wrd5.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_20;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [5]);
  (Rsp [2]) = (Wrd35.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (label_20)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_10)
  (Wrd26.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_9_11);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [3]);
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (Rsp [0]) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_21)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd8.pObj) [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_15);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_17);
  (Rsp [3]) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [7]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_23;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd6.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd6.Obj);
  goto find_early_bindings_6;

DEFLABEL (label_23)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_8 7
#define LABEL_10_9 9
#define LABEL_10_10 11
#define LABEL_10_6 13
#define TAG_10_7 5
#define LABEL_10_12 15
#define LABEL_10_13 17
#define LABEL_10_15 19
#define ENVIRONMENT_LABEL_10_3 33
#define DEBUGGING_LABEL_10_2 32
#define OBJECT_10_2 31
#define OBJECT_10_1 30
#define OBJECT_10_0 29
#define EXECUTE_CACHE_10_17 21
#define EXECUTE_CACHE_10_16 23
#define EXECUTE_CACHE_10_14 25
#define EXECUTE_CACHE_10_11 27
#define FREE_REFERENCES_LABEL_10_0 20
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
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
      goto process_evaluations_10;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_10_6);
      goto lambda_19;

    case 6:
      current_block = (Rpc - LABEL_10_12);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_10_15);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_evaluations_18)
DEFLABEL (process_evaluations_10)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_10_0])))
    goto label_20;
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd55.Obj);
  (Rsp [1]) = (Wrd53.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_20)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_28;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_27)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_6])));
  Rhp += 4;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd25 = Wrd18;
  (Wrd26.Obj) = (Rsp [4]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  ((Wrd25.pObj) [4]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [5]) = (Wrd20.Obj);
  (Rsp [4]) = (Wrd17.Obj);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_26;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_25)
  (Rsp [2]) = (Wrd27.Obj);
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_24;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_23)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_22;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd45.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_21)
  (Rsp [3]) = (Wrd45.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (label_22)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_15)
  (Wrd45.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_14)
  (Wrd36.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_13)
  (Wrd27.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_10_6);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_30;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_29)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_15);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd9.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (label_30)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_9 9
#define LABEL_11_10 11
#define LABEL_11_7 13
#define LABEL_11_12 15
#define LABEL_11_15 17
#define LABEL_11_16 19
#define LABEL_11_17 21
#define LABEL_11_18 23
#define LABEL_11_19 25
#define LABEL_11_20 27
#define LABEL_11_21 29
#define LABEL_11_22 31
#define LABEL_11_23 33
#define LABEL_11_24 35
#define LABEL_11_25 37
#define LABEL_11_26 39
#define LABEL_11_27 41
#define LABEL_11_28 43
#define LABEL_11_29 45
#define LABEL_11_30 47
#define LABEL_11_13 49
#define LABEL_11_33 51
#define LABEL_11_34 53
#define ENVIRONMENT_LABEL_11_3 79
#define DEBUGGING_LABEL_11_2 78
#define OBJECT_11_6 77
#define OBJECT_11_5 76
#define OBJECT_11_4 75
#define OBJECT_11_3 74
#define OBJECT_11_2 73
#define OBJECT_11_1 72
#define OBJECT_11_0 71
#define EXECUTE_CACHE_11_37 55
#define EXECUTE_CACHE_11_36 57
#define EXECUTE_CACHE_11_35 59
#define EXECUTE_CACHE_11_31 61
#define EXECUTE_CACHE_11_14 63
#define EXECUTE_CACHE_11_32 65
#define EXECUTE_CACHE_11_11 67
#define EXECUTE_CACHE_11_8 69
#define FREE_REFERENCES_LABEL_11_0 54
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd147;
  machine_word Wrd142;
  machine_word Wrd143;
  machine_word Wrd139;
  machine_word Wrd133;
  machine_word Wrd134;
  machine_word Wrd135;
  machine_word Wrd132;
  machine_word Wrd126;
  machine_word Wrd127;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd120;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd108;
  machine_word Wrd102;
  machine_word Wrd103;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd71;
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
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd11;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd141;
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
      current_block = (Rpc - LABEL_11_4);
      goto bind_variable_early_32;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_34;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_35;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_19;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_11_12);
      goto label_36;

    case 7:
      current_block = (Rpc - LABEL_11_15);
      goto label_37;

    case 8:
      current_block = (Rpc - LABEL_11_16);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_11_17);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_11_18);
      goto label_40;

    case 11:
      current_block = (Rpc - LABEL_11_19);
      goto label_41;

    case 12:
      current_block = (Rpc - LABEL_11_20);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_11_21);
      goto label_43;

    case 14:
      current_block = (Rpc - LABEL_11_22);
      goto label_44;

    case 15:
      current_block = (Rpc - LABEL_11_23);
      goto label_45;

    case 16:
      current_block = (Rpc - LABEL_11_24);
      goto label_46;

    case 17:
      current_block = (Rpc - LABEL_11_25);
      goto label_47;

    case 18:
      current_block = (Rpc - LABEL_11_26);
      goto label_48;

    case 19:
      current_block = (Rpc - LABEL_11_27);
      goto label_49;

    case 20:
      current_block = (Rpc - LABEL_11_28);
      goto label_50;

    case 21:
      current_block = (Rpc - LABEL_11_29);
      goto label_51;

    case 22:
      current_block = (Rpc - LABEL_11_30);
      goto label_52;

    case 23:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_25;

    case 24:
      current_block = (Rpc - LABEL_11_33);
      goto continuation_27;

    case 25:
      current_block = (Rpc - LABEL_11_34);
      goto continuation_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_variable_early_54)
DEFLABEL (bind_variable_early_32)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_98;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_97)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_96;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_95)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_55;
  (Wrd158.Obj) = (current_block [OBJECT_11_2]);
  (Rsp [3]) = (Wrd158.Obj);
  (Wrd159.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd159.Obj);
  (Wrd160.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd160.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (label_55)
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_94;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_93)
  if (! ((Wrd7.Obj) == (current_block [OBJECT_11_3])))
    goto label_57;
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (Wrd157.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd157.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_11_6]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_34]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_35]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_11_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_37]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_11_33);
  (Wrd9.Obj) = (current_block [OBJECT_11_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_56)
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_36]));

DEFLABEL (label_57)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_92;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_91)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_90;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_89)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_88;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd33.Obj) = ((Wrd34.pObj) [0]);

DEFLABEL (label_87)
  if ((Wrd33.Obj) == (current_block [OBJECT_11_4]))
    goto label_86;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_11_5]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_32]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_10);

DEFLABEL (label_86)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_85;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_84)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_83;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd55.Obj) = ((Wrd56.pObj) [0]);

DEFLABEL (label_82)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_81;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd62.Obj) = ((Wrd63.pObj) [1]);

DEFLABEL (label_80)
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_79;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_78)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_77;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd79.Obj) = ((Wrd81.pObj) [1]);

DEFLABEL (label_76)
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_75;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd88.Obj) = ((Wrd89.pObj) [0]);

DEFLABEL (label_74)
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_73;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd95.Obj) = ((Wrd96.pObj) [1]);

DEFLABEL (label_72)
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd104.uLng) == 1))
    goto label_71;
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd103.pObj) [1]);

DEFLABEL (label_70)
  if ((Wrd102.Obj) == (current_block [OBJECT_11_3]))
    goto label_69;
  (Wrd113.Obj) = (Rsp [2]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 1))
    goto label_68;
  (Wrd112.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd110.Obj) = ((Wrd112.pObj) [1]);

DEFLABEL (label_67)
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd121.uLng) == 1))
    goto label_66;
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd119.Obj) = ((Wrd120.pObj) [0]);

DEFLABEL (label_65)
  (Wrd128.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if (! ((Wrd128.uLng) == 1))
    goto label_64;
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd126.Obj) = ((Wrd127.pObj) [1]);

DEFLABEL (label_63)
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd135.uLng) == 1))
    goto label_62;
  (Wrd134.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd133.Obj) = ((Wrd134.pObj) [1]);

DEFLABEL (label_61)
  (Wrd143.uLng) = (OBJECT_TYPE (Wrd133.Obj));
  if (! ((Wrd143.uLng) == 1))
    goto label_60;
  (Wrd142.pObj) = (OBJECT_ADDRESS (Wrd133.Obj));
  (Wrd141.Obj) = ((Wrd142.pObj) [0]);

DEFLABEL (label_59)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_58)
  (Rsp [1]) = (Wrd141.Obj);
  (Rsp [4]) = (Wrd141.Obj);
  (Wrd149.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd149.Obj);
  (Wrd150.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd150.Obj);
  (Wrd151.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd151.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_31]));

DEFLABEL (label_60)
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_30]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_52)
  (Wrd141.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_29]))));
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_51)
  (Wrd133.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_28]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_50)
  (Wrd126.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_27]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_49)
  (Wrd119.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_26]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_48)
  (Wrd110.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_69)
  (Wrd141.Obj) = (Rsp [3]);
  goto label_59;

DEFLABEL (label_71)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_25]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_47)
  (Wrd102.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_46)
  (Wrd95.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_45)
  (Wrd88.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_44)
  (Wrd79.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_42)
  (Wrd62.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_41)
  (Wrd55.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_40)
  (Wrd46.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_88)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_39)
  (Wrd33.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_38)
  (Wrd26.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_37)
  (Wrd17.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_36)
  (Wrd7.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (Wrd141.Obj) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_9 7
#define LABEL_12_8 9
#define LABEL_12_12 11
#define LABEL_12_11 13
#define LABEL_12_15 15
#define LABEL_12_13 17
#define LABEL_12_16 19
#define LABEL_12_19 21
#define ENVIRONMENT_LABEL_12_3 40
#define DEBUGGING_LABEL_12_2 39
#define OBJECT_12_3 38
#define OBJECT_12_2 37
#define OBJECT_12_1 36
#define OBJECT_12_0 35
#define EXECUTE_CACHE_12_18 23
#define EXECUTE_CACHE_12_17 25
#define EXECUTE_CACHE_12_14 27
#define EXECUTE_CACHE_12_10 29
#define EXECUTE_CACHE_12_7 31
#define EXECUTE_CACHE_12_6 33
#define FREE_REFERENCES_LABEL_12_0 22
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_12_4);
      goto unevaluate_14;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_12_9);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_12_12);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_12_15);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_12_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_12_16);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_12_19);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unevaluate_19)
DEFLABEL (unevaluate_14)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_20;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_21;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  Rvl = ((Wrd9.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_22)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_28;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_26;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;

DEFLABEL (label_23)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Obj) = (current_block [OBJECT_12_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_12_3]);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_18]));

DEFLABEL (label_24)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_12_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_12_19);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (label_26)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_12 7
#define LABEL_13_13 9
#define LABEL_13_14 11
#define LABEL_13_15 13
#define LABEL_13_16 15
#define LABEL_13_18 17
#define LABEL_13_20 19
#define LABEL_13_21 21
#define LABEL_13_22 23
#define LABEL_13_23 25
#define LABEL_13_24 27
#define LABEL_13_26 29
#define LABEL_13_17 31
#define LABEL_13_27 33
#define LABEL_13_29 35
#define LABEL_13_6 37
#define LABEL_13_7 39
#define LABEL_13_8 41
#define LABEL_13_9 43
#define LABEL_13_10 45
#define LABEL_13_30 47
#define ENVIRONMENT_LABEL_13_3 69
#define DEBUGGING_LABEL_13_2 68
#define OBJECT_13_8 67
#define OBJECT_13_7 66
#define OBJECT_13_6 65
#define OBJECT_13_5 64
#define OBJECT_13_4 63
#define OBJECT_13_3 62
#define OBJECT_13_2 61
#define OBJECT_13_1 60
#define OBJECT_13_0 59
#define EXECUTE_CACHE_13_31 49
#define EXECUTE_CACHE_13_28 51
#define EXECUTE_CACHE_13_25 53
#define EXECUTE_CACHE_13_19 55
#define EXECUTE_CACHE_13_11 57
#define FREE_REFERENCES_LABEL_13_0 48
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd28;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd131;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd127;
  machine_word Wrd122;
  machine_word Wrd115;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd114;
  machine_word Wrd106;
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd39;
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
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_13_4);
      goto generate_match_code_37;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto collect_bindings_36;

    case 2:
      current_block = (Rpc - LABEL_13_12);
      goto label_39;

    case 3:
      current_block = (Rpc - LABEL_13_13);
      goto label_40;

    case 4:
      current_block = (Rpc - LABEL_13_14);
      goto label_41;

    case 5:
      current_block = (Rpc - LABEL_13_15);
      goto label_42;

    case 6:
      current_block = (Rpc - LABEL_13_16);
      goto label_48;

    case 7:
      current_block = (Rpc - LABEL_13_18);
      goto label_49;

    case 8:
      current_block = (Rpc - LABEL_13_20);
      goto label_47;

    case 9:
      current_block = (Rpc - LABEL_13_21);
      goto label_45;

    case 10:
      current_block = (Rpc - LABEL_13_22);
      goto label_46;

    case 11:
      current_block = (Rpc - LABEL_13_23);
      goto label_43;

    case 12:
      current_block = (Rpc - LABEL_13_24);
      goto label_44;

    case 13:
      current_block = (Rpc - LABEL_13_26);
      goto continuation_23;

    case 14:
      current_block = (Rpc - LABEL_13_17);
      goto continuation_21;

    case 15:
      current_block = (Rpc - LABEL_13_27);
      goto label_51;

    case 16:
      current_block = (Rpc - LABEL_13_29);
      goto label_50;

    case 17:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_35;

    case 18:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_34;

    case 19:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_33;

    case 20:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_32;

    case 21:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_31;

    case 22:
      current_block = (Rpc - LABEL_13_30);
      goto scode_make_test_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_match_code_53)
DEFLABEL (generate_match_code_37)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto collect_bindings_36;

DEFLABEL (collect_bindings_54)
DEFLABEL (collect_bindings_36)
  INTERRUPT_CHECK (26, LABEL_13_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_13_0])))
    goto label_59;
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (Wrd135.pObj) = (& (Rsp [7]));
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd135.pObj)));
  (* (--Rsp)) = (Wrd137.Obj);
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (Wrd147.pObj) = (& (Rsp [11]));
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd147.pObj)));
  (* (--Rsp)) = (Wrd149.Obj);
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd152.Obj);
  (Wrd153.Obj) = (Rsp [16]);
  (* (--Rsp)) = (Wrd153.Obj);
  (Wrd154.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd154.Obj);
  (Wrd155.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd155.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto scode_make_test_1;

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto scode_make_test_1;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (Wrd9.Obj) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (Wrd6.Obj) = (current_block [OBJECT_13_7]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_58;

DEFLABEL (label_57)
  (Wrd7.Obj) = (current_block [OBJECT_13_8]);

DEFLABEL (label_56)
  (Rsp [10]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [11]);
  (Rsp [9]) = (Wrd8.Obj);
  (Rsp [11]) = (Wrd9.Obj);
  Rsp = (& (Rsp [9]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_58)
  (Wrd11.Obj) = (Rsp [7]);
  if (! ((Wrd11.Obj) == (Wrd6.Obj)))
    goto label_57;
  Wrd7 = Wrd6;
  goto label_56;

DEFLABEL (label_59)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_92;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_91)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_90;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_89)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_88;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_87)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_86;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_85)
  (Wrd39.Obj) = (Rsp [0]);
  if ((Wrd39.Obj) == (current_block [OBJECT_13_3]))
    goto label_73;
  if ((Wrd39.Obj) == (current_block [OBJECT_13_4]))
    goto label_70;
  if ((Wrd39.Obj) == (current_block [OBJECT_13_5]))
    goto label_64;
  (Wrd45.Obj) = (current_block [OBJECT_13_6]);
  (Rsp [12]) = (Wrd45.Obj);
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_63;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [0]);

DEFLABEL (label_62)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_61;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd55.Obj) = ((Wrd56.pObj) [0]);

DEFLABEL (label_60)
  (Rsp [13]) = (Wrd55.Obj);
  Rsp = (& (Rsp [12]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_25]));

DEFLABEL (label_61)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_24]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_44)
  (Wrd55.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_23]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_43)
  (Wrd46.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_64)
  (Wrd66.Obj) = (Rsp [2]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_69;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [1]);

DEFLABEL (label_68)
  (Rsp [2]) = (Wrd63.Obj);
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd76.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (Rsp [5]) = (Wrd72.Obj);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_67;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd77.Obj) = ((Wrd79.pObj) [0]);

DEFLABEL (label_66)
  (Wrd89.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd77.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (Wrd88.pObj) = (& (Rhp [-2]));
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd88.pObj)));
  (Rsp [7]) = (Wrd86.Obj);

DEFLABEL (label_65)
  Rsp = (& (Rsp [2]));
  goto collect_bindings_36;

DEFLABEL (label_67)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_22]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_46)
  (Wrd77.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_45)
  (Wrd63.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_70)
  (Wrd94.Obj) = (Rsp [2]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_72;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd91.Obj) = ((Wrd93.pObj) [1]);

DEFLABEL (label_71)
  (Rsp [2]) = (Wrd91.Obj);
  (Wrd103.Obj) = (Rsp [1]);
  (Wrd104.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd103.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  (Wrd102.pObj) = (& (Rhp [-2]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd102.pObj)));
  (Rsp [4]) = (Wrd100.Obj);
  goto label_65;

DEFLABEL (label_72)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_47)
  (Wrd91.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_73)
  (Wrd109.Obj) = (Rsp [2]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 1))
    goto label_84;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd106.Obj) = ((Wrd108.pObj) [1]);

DEFLABEL (label_83)
  (Rsp [2]) = (Wrd106.Obj);
  (Wrd118.Obj) = (Rsp [1]);
  (Wrd119.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd118.Obj);
  (* (Rhp++)) = (Wrd119.Obj);
  (Wrd117.pObj) = (& (Rhp [-2]));
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd117.pObj)));
  (Rsp [3]) = (Wrd115.Obj);
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd127.uLng) == 1))
    goto label_82;
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd125.Obj) = ((Wrd124.pObj) [1]);
  (* (--Rsp)) = (Wrd125.Obj);

DEFLABEL (label_81)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_19]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_13_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_78;

DEFLABEL (label_77)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_76;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_75)
  (Wrd19.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));

DEFLABEL (label_74)
  (Rsp [6]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  goto collect_bindings_36;

DEFLABEL (label_76)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_29]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_50)
  (Wrd7.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_26]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_80;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_79)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_28]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_13_26);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_77;
  (Wrd16.Obj) = (Rsp [6]);
  goto label_74;

DEFLABEL (label_80)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_27]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_48)
  (Wrd106.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_41)
  (Wrd23.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_39)
  (Wrd7.Obj) = Rvl;
  goto label_91;

DEFLABEL (scode_make_test_55)
DEFLABEL (scode_make_test_1)
  INTERRUPT_CHECK (26, LABEL_13_30);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_13_7]))
    goto label_93;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [4]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_31]));

DEFLABEL (label_93)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define TAG_14_6 1
#define ENVIRONMENT_LABEL_14_3 7
#define DEBUGGING_LABEL_14_2 6
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_14_4);
      goto make_binding_procedure_2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_binding_procedure_5)
DEFLABEL (make_binding_procedure_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [2]);
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
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define LABEL_15_7 7
#define LABEL_15_10 9
#define LABEL_15_11 11
#define LABEL_15_14 13
#define LABEL_15_8 15
#define LABEL_15_12 17
#define LABEL_15_19 19
#define LABEL_15_20 21
#define LABEL_15_16 23
#define TAG_15_17 10
#define LABEL_15_23 25
#define LABEL_15_21 27
#define LABEL_15_24 29
#define TAG_15_25 13
#define LABEL_15_26 31
#define TAG_15_27 14
#define LABEL_15_28 33
#define LABEL_15_29 35
#define TAG_15_30 16
#define LABEL_15_31 37
#define LABEL_15_32 39
#define LABEL_15_33 41
#define ENVIRONMENT_LABEL_15_3 67
#define DEBUGGING_LABEL_15_2 66
#define OBJECT_15_6 65
#define OBJECT_15_5 64
#define OBJECT_15_4 63
#define OBJECT_15_3 62
#define OBJECT_15_2 61
#define OBJECT_15_1 60
#define OBJECT_15_0 59
#define EXECUTE_CACHE_15_35 43
#define EXECUTE_CACHE_15_34 45
#define EXECUTE_CACHE_15_22 47
#define EXECUTE_CACHE_15_18 49
#define EXECUTE_CACHE_15_15 51
#define EXECUTE_CACHE_15_13 53
#define EXECUTE_CACHE_15_9 55
#define FREE_REFERENCE_15_0 58
#define FREE_REFERENCES_LABEL_15_0 42
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_15_4);
      goto build_comparison_28;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_35;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto walk_27;

    case 3:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_26;

    case 4:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_23;

    case 5:
      current_block = (Rpc - LABEL_15_14);
      goto merge_path_3;

    case 6:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_15_12);
      goto continuation_22;

    case 8:
      current_block = (Rpc - LABEL_15_19);
      goto continuation_18;

    case 9:
      current_block = (Rpc - LABEL_15_20);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_15_16);
      goto lambda_38;

    case 11:
      current_block = (Rpc - LABEL_15_23);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_15_21);
      goto continuation_17;

    case 13:
      current_block = (Rpc - LABEL_15_24);
      goto lambda_39;

    case 14:
      current_block = (Rpc - LABEL_15_26);
      goto lambda_40;

    case 15:
      current_block = (Rpc - LABEL_15_28);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_15_29);
      goto lambda_41;

    case 17:
      current_block = (Rpc - LABEL_15_31);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_15_32);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_15_33);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_comparison_34)
DEFLABEL (build_comparison_28)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  goto walk_27;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (walk_36)
DEFLABEL (walk_27)
  INTERRUPT_CHECK (26, LABEL_15_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_42;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto merge_path_3;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_15_11);
  (Wrd9.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_13]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_15_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_15_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_1]);
  (Rsp [1]) = (Wrd8.Obj);
  goto pop_return;

DEFLABEL (label_42)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_16])));
  Rhp += 4;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd21 = Wrd14;
  (Wrd22.Obj) = (Rsp [3]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd21.pObj) [4]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd21.pObj) [5]) = (Wrd16.Obj);
  (Rsp [3]) = (Wrd13.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_15_2]);
  (Rsp [0]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_18]));

DEFLABEL (label_43)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto merge_path_3;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_15_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_45;
  Wrd6 = Wrd10;

DEFLABEL (label_44)
  (Wrd12.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_21]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_22]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_15_21);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_15_1]);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Rsp [0]) = (Wrd16.Obj);
  (Rsp [3]) = (Wrd10.Obj);
  goto pop_return;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_20])), (Wrd7.pObj));

DEFLABEL (label_30)
  (Wrd6.Obj) = Rvl;
  goto label_44;

DEFLABEL (merge_path_37)
DEFLABEL (merge_path_3)
  INTERRUPT_CHECK (26, LABEL_15_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_46;
  (Wrd10.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (label_46)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_15_16);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_48;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_47)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd21.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_24])));
  Rhp += 4;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd37 = Wrd24;
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [2]);
  ((Wrd37.pObj) [2]) = (Wrd40.Obj);
  (Wrd36.Obj) = ((Wrd39.pObj) [3]);
  ((Wrd37.pObj) [3]) = (Wrd36.Obj);
  (Wrd32.Obj) = ((Wrd39.pObj) [4]);
  ((Wrd37.pObj) [4]) = (Wrd32.Obj);
  (Wrd28.Obj) = ((Wrd39.pObj) [5]);
  ((Wrd37.pObj) [5]) = (Wrd28.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd20.Obj);
  goto walk_27;

DEFLABEL (label_48)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_15_24);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_26])));
  Rhp += 7;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd26 = Wrd7;
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  ((Wrd26.pObj) [2]) = (Wrd29.Obj);
  (Wrd25.Obj) = ((Wrd28.pObj) [3]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd28.pObj) [4]);
  ((Wrd26.pObj) [4]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd28.pObj) [5]);
  ((Wrd26.pObj) [5]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd26.pObj) [6]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [7]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd26.pObj) [8]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_15_5]);
  (Rsp [1]) = (Wrd21.Obj);
  (Rsp [2]) = (Wrd25.Obj);
  (Rsp [0]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_18]));

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_15_26);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_50;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_49)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd21.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_29])));
  Rhp += 6;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd45 = Wrd24;
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [2]);
  ((Wrd45.pObj) [2]) = (Wrd48.Obj);
  (Wrd44.Obj) = ((Wrd47.pObj) [3]);
  ((Wrd45.pObj) [3]) = (Wrd44.Obj);
  (Wrd40.Obj) = ((Wrd47.pObj) [4]);
  ((Wrd45.pObj) [4]) = (Wrd40.Obj);
  (Wrd36.Obj) = ((Wrd47.pObj) [6]);
  ((Wrd45.pObj) [5]) = (Wrd36.Obj);
  (Wrd32.Obj) = ((Wrd47.pObj) [7]);
  ((Wrd45.pObj) [6]) = (Wrd32.Obj);
  (Wrd28.Obj) = ((Wrd47.pObj) [8]);
  ((Wrd45.pObj) [7]) = (Wrd28.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd20.Obj);
  goto walk_27;

DEFLABEL (label_50)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_28]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_6]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_15_29);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [7]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_51;

DEFLABEL (label_52)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_51)
DEFLABEL (label_53)
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_31]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto merge_path_3;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_15_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_35]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15_31);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_33]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_34]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15_33);
  (Rsp [4]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_7 5
#define TAG_16_8 1
#define LABEL_16_5 7
#define LABEL_16_10 9
#define TAG_16_11 3
#define LABEL_16_16 11
#define LABEL_16_12 13
#define LABEL_16_14 15
#define LABEL_16_15 17
#define LABEL_16_19 19
#define LABEL_16_18 21
#define ENVIRONMENT_LABEL_16_3 38
#define DEBUGGING_LABEL_16_2 37
#define OBJECT_16_3 36
#define OBJECT_16_2 35
#define OBJECT_16_1 34
#define OBJECT_16_0 33
#define EXECUTE_CACHE_16_20 23
#define EXECUTE_CACHE_16_17 25
#define EXECUTE_CACHE_16_13 27
#define EXECUTE_CACHE_16_9 29
#define EXECUTE_CACHE_16_6 31
#define FREE_REFERENCES_LABEL_16_0 22
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_16_4);
      goto build_pair_test_13;

    case 1:
      current_block = (Rpc - LABEL_16_7);
      goto lambda_19;

    case 2:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_16_10);
      goto lambda_20;

    case 4:
      current_block = (Rpc - LABEL_16_16);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_16_12);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_16_14);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_16_19);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_16_18);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_pair_test_18)
DEFLABEL (build_pair_test_13)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_7])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (label_21)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.Obj) = (current_block [OBJECT_16_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_16_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16_12);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_16_7);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_10])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd16.Obj) = ((Wrd7.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_16_10);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_16_2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_25;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_18);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_14);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.Obj) = (current_block [OBJECT_16_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_13]));

DEFLABEL (label_23)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_19]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_6 5
#define LABEL_17_8 7
#define LABEL_17_5 9
#define LABEL_17_9 11
#define LABEL_17_10 13
#define LABEL_17_13 15
#define LABEL_17_14 17
#define LABEL_17_15 19
#define LABEL_17_16 21
#define LABEL_17_17 23
#define LABEL_17_18 25
#define LABEL_17_11 27
#define ENVIRONMENT_LABEL_17_3 40
#define DEBUGGING_LABEL_17_2 39
#define OBJECT_17_3 38
#define OBJECT_17_2 37
#define OBJECT_17_1 36
#define OBJECT_17_0 35
#define EXECUTE_CACHE_17_12 29
#define EXECUTE_CACHE_17_7 31
#define FREE_REFERENCE_17_0 34
#define FREE_REFERENCES_LABEL_17_0 28
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd48;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_17_4);
      goto path_step_13;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_17_9);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_17_10);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_17_13);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_17_14);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_17_15);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_17_16);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_17_17);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_17_18);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (path_step_25)
DEFLABEL (path_step_13)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_48;
  Wrd8 = Wrd12;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_45;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_44)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_43;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_42)
  (Wrd23.Obj) = (current_block [OBJECT_17_2]);
  if (! ((Wrd16.Obj) == (Wrd23.Obj)))
    goto label_26;
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd85.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd87.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd87.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_17_11);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_26)
  (Wrd24.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  if ((Wrd29.Obj) == (current_block [OBJECT_17_3]))
    goto label_36;
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_35;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [1]);

DEFLABEL (label_34)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_33;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd40.Obj) = ((Wrd41.pObj) [0]);

DEFLABEL (label_32)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_30;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd48.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_29)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_28)
  (Rsp [3]) = (Wrd48.Obj);

DEFLABEL (label_27)
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_30)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_20)
DEFLABEL (label_31)
  (Wrd48.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_33)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_19)
  (Wrd40.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_18)
  (Wrd31.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_41;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_40)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_39;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd65.Obj) = ((Wrd66.pObj) [0]);

DEFLABEL (label_38)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_37;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd48.Obj) = ((Wrd73.pObj) [0]);
  goto label_29;

DEFLABEL (label_37)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_23)
  goto label_31;

DEFLABEL (label_39)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_22)
  (Wrd65.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_21)
  (Wrd56.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_17)
  (Wrd16.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_16)
  (Wrd7.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd88.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd89.Obj);
  (Wrd90.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd90.Obj);
  goto label_27;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_6])), (Wrd9.pObj));

DEFLABEL (label_15)
  (Wrd8.Obj) = Rvl;
  goto label_47;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (Wrd48.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 12
#define DEBUGGING_LABEL_18_2 11
#define EXECUTE_CACHE_18_7 7
#define EXECUTE_CACHE_18_6 9
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto apply_transformer_early_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_transformer_early_5)
DEFLABEL (apply_transformer_early_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define TAG_19_7 2
#define LABEL_19_8 9
#define LABEL_19_10 11
#define LABEL_19_12 13
#define ENVIRONMENT_LABEL_19_3 25
#define DEBUGGING_LABEL_19_2 24
#define OBJECT_19_0 23
#define EXECUTE_CACHE_19_14 15
#define EXECUTE_CACHE_19_13 17
#define EXECUTE_CACHE_19_11 19
#define EXECUTE_CACHE_19_9 21
#define FREE_REFERENCES_LABEL_19_0 14
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_19_4);
      goto apply_transformer_6;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_19_10);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_19_12);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_transformer_9)
DEFLABEL (apply_transformer_6)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_10);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_19_6);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_12);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (current_block [OBJECT_19_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_7 5
#define LABEL_20_8 7
#define LABEL_20_9 9
#define LABEL_20_5 11
#define LABEL_20_6 13
#define LABEL_20_11 15
#define ENVIRONMENT_LABEL_20_3 25
#define DEBUGGING_LABEL_20_2 24
#define OBJECT_20_0 23
#define EXECUTE_CACHE_20_13 17
#define EXECUTE_CACHE_20_12 19
#define EXECUTE_CACHE_20_10 21
#define FREE_REFERENCES_LABEL_20_0 16
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_20_4);
      goto transformer_bindings_8;

    case 1:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_20_11);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transformer_bindings_11)
DEFLABEL (transformer_bindings_8)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_12;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (Wrd9.Obj) = (current_block [OBJECT_20_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Wrd10.Obj) = (current_block [OBJECT_20_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_5 3
#define LABEL_21_4 5
#define LABEL_21_6 7
#define LABEL_21_8 9
#define LABEL_21_7 11
#define ENVIRONMENT_LABEL_21_3 24
#define DEBUGGING_LABEL_21_2 23
#define OBJECT_21_5 22
#define OBJECT_21_4 21
#define OBJECT_21_3 20
#define OBJECT_21_2 19
#define OBJECT_21_1 18
#define OBJECT_21_0 17
#define EXECUTE_CACHE_21_9 13
#define FREE_REFERENCE_21_0 16
#define FREE_REFERENCES_LABEL_21_0 12
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd46;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd41;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_21_4);
      goto find_transformer_5;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_transformer_10)
DEFLABEL (find_transformer_5)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_21_0]);
  (Wrd41.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd41.Lng))))
    goto label_24;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_23;

DEFLABEL (label_22)
  (Wrd13.Obj) = (current_block [OBJECT_21_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_11;
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_11)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_13;
  (Wrd15.Obj) = (current_block [OBJECT_21_4]);
  goto label_12;

DEFLABEL (label_13)
  (Wrd15.Obj) = (current_block [OBJECT_21_3]);

DEFLABEL (label_12)
DEFLABEL (label_21)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_20;
  Wrd30 = Wrd34;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd13.uLng) == 1)
    goto label_16;
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_5]), 1);

DEFLABEL (label_16)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  Rvl = ((Wrd10.pObj) [1]);

DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_8])), (Wrd31.pObj));

DEFLABEL (label_7)
  (Wrd30.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_23)
  Rsp = (& (Rsp [2]));
  goto label_15;

DEFLABEL (label_24)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define TAG_22_6 1
#define LABEL_22_7 7
#define LABEL_22_8 9
#define LABEL_22_10 11
#define TAG_22_11 4
#define LABEL_22_15 13
#define LABEL_22_20 15
#define LABEL_22_22 17
#define LABEL_22_23 19
#define LABEL_22_16 21
#define LABEL_22_17 23
#define LABEL_22_18 25
#define LABEL_22_25 27
#define LABEL_22_26 29
#define LABEL_22_28 31
#define LABEL_22_27 33
#define ENVIRONMENT_LABEL_22_3 63
#define DEBUGGING_LABEL_22_2 62
#define OBJECT_22_6 61
#define OBJECT_22_5 60
#define OBJECT_22_4 59
#define OBJECT_22_3 58
#define OBJECT_22_2 57
#define OBJECT_22_1 56
#define OBJECT_22_0 55
#define EXECUTE_CACHE_22_29 35
#define EXECUTE_CACHE_22_24 37
#define EXECUTE_CACHE_22_21 39
#define EXECUTE_CACHE_22_19 41
#define EXECUTE_CACHE_22_14 43
#define EXECUTE_CACHE_22_13 45
#define EXECUTE_CACHE_22_12 47
#define EXECUTE_CACHE_22_9 49
#define FREE_REFERENCE_22_2 52
#define FREE_REFERENCE_22_1 53
#define FREE_REFERENCE_22_0 54
#define FREE_REFERENCES_LABEL_22_0 34
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_22_4);
      goto make_database_transformer_21;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto lambda_28;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_22_10);
      goto lambda_29;

    case 5:
      current_block = (Rpc - LABEL_22_15);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_22_20);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_22_22);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_22_23);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_22_16);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_22_17);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_22_18);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_22_25);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_22_26);
      goto possible_17;

    case 14:
      current_block = (Rpc - LABEL_22_28);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_22_27);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_database_transformer_27)
DEFLABEL (make_database_transformer_21)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_22_5);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_10])));
  Rhp += 6;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [6]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [5]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [6]) = (Wrd11.Obj);
  ((Wrd18.pObj) [7]) = Rvl;
  (Rsp [6]) = (Wrd6.Obj);
  (Rsp [4]) = (Wrd17.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [2]);
  (Rsp [3]) = (Wrd21.Obj);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_22_10);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_31;
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [2]);
  (Rsp [0]) = (Wrd48.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_31)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_22_1])))
    goto label_32;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [5]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = ((Wrd34.pObj) [6]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd34.pObj) [3]);
  (Rsp [3]) = (Wrd39.Obj);
  (Wrd42.Obj) = ((Wrd34.pObj) [2]);
  (Rsp [4]) = (Wrd42.Obj);
  (Wrd45.Obj) = ((Wrd34.pObj) [4]);
  (Rsp [2]) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (label_32)
  if ((Wrd5.Obj) == (current_block [OBJECT_22_2]))
    goto label_39;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_35;
  Wrd7 = Wrd11;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_33)
  (Wrd20.Obj) = (current_block [OBJECT_22_3]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto possible_17;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_23])), (Wrd8.pObj));

DEFLABEL (label_24)
  (Wrd7.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_38;
  Wrd14 = Wrd18;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_33;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_22])), (Wrd15.pObj));

DEFLABEL (label_25)
  (Wrd14.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_41;
  Wrd15 = Wrd19;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_16]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_17]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [5]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_18);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [7]);
  (Wrd11.Obj) = (current_block [OBJECT_22_4]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_22_6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_22_17);
  (Wrd9.Obj) = (current_block [OBJECT_22_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_22_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_22_16);
  (* (--Rsp)) = Rvl;
  goto possible_17;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_15])), (Wrd16.pObj));

DEFLABEL (label_23)
  (Wrd15.Obj) = Rvl;
  goto label_40;

DEFLABEL (possible_30)
DEFLABEL (possible_17)
  INTERRUPT_CHECK (26, LABEL_22_26);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [5]);
  (Wrd11.Obj) = ((Wrd7.pObj) [4]);
  if ((Wrd8.Obj) == (Wrd11.Obj))
    goto label_43;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_25]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_28]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_29]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_22_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_22_25);
  (Wrd34.Obj) = (current_block [OBJECT_22_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_42)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_27]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd29.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_22_27);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_43)
  (Wrd21.Obj) = (current_block [OBJECT_22_4]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_42;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_9 9
#define LABEL_23_11 11
#define LABEL_23_12 13
#define LABEL_23_15 15
#define LABEL_23_14 17
#define LABEL_23_17 19
#define ENVIRONMENT_LABEL_23_3 37
#define DEBUGGING_LABEL_23_2 36
#define OBJECT_23_4 35
#define OBJECT_23_3 34
#define OBJECT_23_2 33
#define OBJECT_23_1 32
#define OBJECT_23_0 31
#define EXECUTE_CACHE_23_16 21
#define EXECUTE_CACHE_23_13 23
#define EXECUTE_CACHE_23_10 25
#define EXECUTE_CACHE_23_8 27
#define EXECUTE_CACHE_23_6 29
#define FREE_REFERENCES_LABEL_23_0 20
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_23_4);
      goto can_integrateP_15;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto lambda_14;

    case 3:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_23_11);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_23_12);
      goto loop_10;

    case 6:
      current_block = (Rpc - LABEL_23_15);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_23_14);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_23_17);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (can_integrateP_21)
DEFLABEL (can_integrateP_15)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (label_24)
  Rvl = (current_block [OBJECT_23_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_22)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_23_7);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_23_1])))
    goto label_25;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_23_1])))
    goto label_26;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_28;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_10;

DEFLABEL (label_28)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_27;

DEFLABEL (loop_23)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_23_12);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_23_1])))
    goto label_29;
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_13]));

DEFLABEL (label_29)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_34;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_23_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_32;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_31)
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_10;

DEFLABEL (label_32)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_19)
  (Wrd7.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_4]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define ENVIRONMENT_LABEL_24_3 17
#define DEBUGGING_LABEL_24_2 16
#define OBJECT_24_2 15
#define OBJECT_24_1 14
#define OBJECT_24_0 13
#define EXECUTE_CACHE_24_8 9
#define EXECUTE_CACHE_24_7 11
#define FREE_REFERENCES_LABEL_24_0 8
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_24_4);
      goto make_simple_transformer_test_5;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_simple_transformer_test_8)
DEFLABEL (make_simple_transformer_test_5)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_6);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_24_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd9.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_24_1]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 5
#define DEBUGGING_LABEL_25_2 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_25_4);
      goto transformer_fail_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transformer_fail_3)
DEFLABEL (transformer_fail_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_5 3
#define LABEL_26_4 5
#define LABEL_26_8 7
#define LABEL_26_6 9
#define LABEL_26_7 11
#define ENVIRONMENT_LABEL_26_3 20
#define DEBUGGING_LABEL_26_2 19
#define OBJECT_26_1 18
#define OBJECT_26_0 17
#define EXECUTE_CACHE_26_10 13
#define EXECUTE_CACHE_26_9 15
#define FREE_REFERENCES_LABEL_26_0 12
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_26_4);
      goto transformer_result_7;

    case 2:
      current_block = (Rpc - LABEL_26_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transformer_result_10)
DEFLABEL (transformer_result_7)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_12;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_11)
  (Wrd21.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (label_12)
  (Wrd14.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_13)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  goto label_11;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Wrd26.Obj) = (current_block [OBJECT_26_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  goto label_13;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_6);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_26_1]);
  (Rsp [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_7 5
#define LABEL_27_5 7
#define TAG_27_6 2
#define LABEL_27_8 9
#define LABEL_27_9 11
#define LABEL_27_15 13
#define LABEL_27_11 15
#define LABEL_27_18 17
#define LABEL_27_13 19
#define LABEL_27_24 21
#define LABEL_27_19 23
#define LABEL_27_16 25
#define LABEL_27_17 27
#define LABEL_27_21 29
#define LABEL_27_22 31
#define TAG_27_23 14
#define LABEL_27_27 33
#define LABEL_27_28 35
#define LABEL_27_29 37
#define LABEL_27_32 39
#define ENVIRONMENT_LABEL_27_3 70
#define DEBUGGING_LABEL_27_2 69
#define OBJECT_27_9 68
#define OBJECT_27_8 67
#define OBJECT_27_7 66
#define OBJECT_27_6 65
#define OBJECT_27_5 64
#define OBJECT_27_4 63
#define OBJECT_27_3 62
#define OBJECT_27_2 61
#define OBJECT_27_1 60
#define OBJECT_27_0 59
#define EXECUTE_CACHE_27_33 41
#define EXECUTE_CACHE_27_31 43
#define EXECUTE_CACHE_27_30 45
#define EXECUTE_CACHE_27_26 47
#define EXECUTE_CACHE_27_25 49
#define EXECUTE_CACHE_27_20 51
#define EXECUTE_CACHE_27_14 53
#define EXECUTE_CACHE_27_12 55
#define EXECUTE_CACHE_27_10 57
#define FREE_REFERENCES_LABEL_27_0 40
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd40;
  machine_word Wrd10;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd49;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd51;
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
      current_block = (Rpc - LABEL_27_4);
      goto make_symbol_transformer_28;

    case 1:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_27_5);
      goto lambda_35;

    case 3:
      current_block = (Rpc - LABEL_27_8);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_27_15);
      goto continuation_24;

    case 6:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_17;

    case 7:
      current_block = (Rpc - LABEL_27_18);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_27_13);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_27_24);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_27_19);
      goto continuation_23;

    case 11:
      current_block = (Rpc - LABEL_27_16);
      goto continuation_20;

    case 12:
      current_block = (Rpc - LABEL_27_17);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_27_21);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_27_22);
      goto lambda_36;

    case 15:
      current_block = (Rpc - LABEL_27_27);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_27_28);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_27_29);
      goto continuation_7;

    case 18:
      current_block = (Rpc - LABEL_27_32);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_symbol_transformer_34)
DEFLABEL (make_symbol_transformer_28)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_27_5);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_27_0])))
    goto label_37;
  (Wrd51.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd51.Obj);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_37)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_27_1]);
  (Wrd44.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd44.Lng))))
    goto label_54;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_53;

DEFLABEL (label_52)
  (Wrd17.Obj) = (current_block [OBJECT_27_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd27.Lng)))
    goto label_38;
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_38)
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd21.Obj) == (Wrd23.Obj))
    goto label_40;
  (Wrd19.Obj) = (current_block [OBJECT_27_5]);
  goto label_39;

DEFLABEL (label_40)
  (Wrd19.Obj) = (current_block [OBJECT_27_4]);

DEFLABEL (label_39)
DEFLABEL (label_51)
  Rsp = (& (Rsp [3]));
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;

DEFLABEL (label_46)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_12]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_27_11);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_41;
  (Wrd32.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd32.Obj);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  (Rsp [6]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_41)
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Obj) = (Rsp [4]);
  if ((Wrd7.Obj) == (Wrd8.Obj))
    goto label_43;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_20]));

DEFLABEL (label_43)
  (Wrd16.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_45)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_44;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  goto label_42;

DEFLABEL (label_44)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_7]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_47)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_27_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_48;
  (Wrd11.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd11.Obj);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_48)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_27_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_27_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_22])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.Obj) = (Rsp [7]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_50;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_49)
  (Wrd25.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_27_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_29]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_27_29);
  (Wrd9.Obj) = (current_block [OBJECT_27_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_32]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_33]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_27_32);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_27_9]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_31]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_27_28);
  (Wrd9.Obj) = (current_block [OBJECT_27_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_27_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_31]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_27_27);
  (Rsp [6]) = Rvl;
  (Wrd6.Obj) = (Rsp [7]);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd7.Obj) = (* (Rsp++));
  (Rsp [6]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_50)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_24]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_7]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_53)
  Rsp = (& (Rsp [2]));
  goto label_46;

DEFLABEL (label_54)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_53;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_26]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_27_15);
  (Wrd40.Obj) = (current_block [OBJECT_27_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  goto label_45;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_27_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_26]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_27_16);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (current_block [OBJECT_27_4]);
  (Rsp [5]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd11.Obj);
  (Rsp [6]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_46;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_27_22);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_30]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define LABEL_28_8 9
#define LABEL_28_9 11
#define LABEL_28_11 13
#define LABEL_28_12 15
#define LABEL_28_19 17
#define LABEL_28_15 19
#define LABEL_28_16 21
#define LABEL_28_17 23
#define LABEL_28_18 25
#define LABEL_28_22 27
#define ENVIRONMENT_LABEL_28_3 48
#define DEBUGGING_LABEL_28_2 47
#define OBJECT_28_5 46
#define OBJECT_28_4 45
#define OBJECT_28_3 44
#define OBJECT_28_2 43
#define OBJECT_28_1 42
#define OBJECT_28_0 41
#define EXECUTE_CACHE_28_21 29
#define EXECUTE_CACHE_28_20 31
#define EXECUTE_CACHE_28_14 33
#define EXECUTE_CACHE_28_13 35
#define EXECUTE_CACHE_28_10 37
#define EXECUTE_CACHE_28_6 39
#define FREE_REFERENCES_LABEL_28_0 28
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd31;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_28_4);
      goto runtime_symbol_lookup_18;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_16;

    case 4:
      current_block = (Rpc - LABEL_28_9);
      goto continuation_15;

    case 5:
      current_block = (Rpc - LABEL_28_11);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_28_12);
      goto lambda_8;

    case 7:
      current_block = (Rpc - LABEL_28_19);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_28_15);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_28_16);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_28_17);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_28_18);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_28_22);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (runtime_symbol_lookup_24)
DEFLABEL (runtime_symbol_lookup_18)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_28;
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd7.Lng) < 4L)
    goto label_27;

DEFLABEL (label_26)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_28_1]);
  (Wrd20.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_28_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_28_16);
  (Wrd9.Obj) = (current_block [OBJECT_28_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_28_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_28_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_20]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_28_8);
  (Wrd9.Obj) = (current_block [OBJECT_28_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_28_2]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_14]));

DEFLABEL (label_27)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_28_11);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_17);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_21]));

DEFLABEL (label_28)
  (Wrd28.Obj) = (current_block [OBJECT_28_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

DEFLABEL (lambda_25)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_28_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_32;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_28_18);
  (Wrd9.Obj) = (current_block [OBJECT_28_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_30;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_29)
  (Wrd22.Obj) = (current_block [OBJECT_28_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd23.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_22]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_5]), 1);

DEFLABEL (label_22)
  (Wrd10.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_19]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define TAG_29_6 1
#define LABEL_29_7 7
#define LABEL_29_9 9
#define LABEL_29_11 11
#define LABEL_29_12 13
#define LABEL_29_13 15
#define LABEL_29_18 17
#define LABEL_29_19 19
#define LABEL_29_21 21
#define LABEL_29_20 23
#define LABEL_29_24 25
#define LABEL_29_17 27
#define LABEL_29_14 29
#define LABEL_29_15 31
#define LABEL_29_23 33
#define LABEL_29_26 35
#define ENVIRONMENT_LABEL_29_3 58
#define DEBUGGING_LABEL_29_2 57
#define OBJECT_29_9 56
#define OBJECT_29_8 55
#define OBJECT_29_7 54
#define OBJECT_29_6 53
#define OBJECT_29_5 52
#define OBJECT_29_4 51
#define OBJECT_29_3 50
#define OBJECT_29_2 49
#define OBJECT_29_1 48
#define OBJECT_29_0 47
#define EXECUTE_CACHE_29_25 37
#define EXECUTE_CACHE_29_22 39
#define EXECUTE_CACHE_29_16 41
#define EXECUTE_CACHE_29_10 43
#define EXECUTE_CACHE_29_8 45
#define FREE_REFERENCES_LABEL_29_0 36
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_29_4);
      goto make_bit_mask_transformer_25;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto lambda_34;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_20;

    case 5:
      current_block = (Rpc - LABEL_29_12);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_29_13);
      goto loop_22;

    case 7:
      current_block = (Rpc - LABEL_29_18);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_29_19);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_29_21);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_29_20);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_29_24);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_29_17);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_29_14);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_29_15);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_29_23);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_29_26);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_bit_mask_transformer_33)
DEFLABEL (make_bit_mask_transformer_25)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_29_5);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_29_0])))
    goto label_36;
  (Wrd13.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd13.Obj);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_36)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (label_37)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_22;

DEFLABEL (loop_35)
DEFLABEL (loop_22)
  INTERRUPT_CHECK (26, LABEL_29_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_29_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_57;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_38;
  (Wrd9.Obj) = (Rsp [7]);
  (Rsp [5]) = (Wrd9.Obj);
  (Rsp [6]) = ((SCHEME_OBJECT) 0);
  (Rsp [7]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_38)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  if (! ((Wrd8.uLng) == 1))
    goto label_56;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_55)
  (Wrd58.Obj) = (current_block [OBJECT_29_3]);
  (Wrd61.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd61.Lng))))
    goto label_54;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd58.Obj));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd26.Obj) == (Wrd28.Obj))
    goto label_53;

DEFLABEL (label_52)
  (Wrd29.Obj) = (current_block [OBJECT_29_5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd39.Lng)))
    goto label_39;
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_39)
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd33.Obj) == (Wrd35.Obj))
    goto label_41;
  (Wrd31.Obj) = (current_block [OBJECT_29_7]);
  goto label_40;

DEFLABEL (label_41)
  (Wrd31.Obj) = (current_block [OBJECT_29_6]);

DEFLABEL (label_40)
DEFLABEL (label_51)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd31.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_43;

DEFLABEL (label_42)
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (label_43)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_20]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [3]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [2]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_50;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_29_20);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;
  (Wrd20.Obj) = (Rsp [8]);
  (Rsp [6]) = (Wrd20.Obj);
  (Rsp [7]) = ((SCHEME_OBJECT) 0);
  (Rsp [8]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_44)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_47)
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_9]), 2);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_29_23);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_46;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_45)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_22;

DEFLABEL (label_46)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_8]), 1);

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_24]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_8]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_21]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_53)
  Rsp = (& (Rsp [2]));
  goto label_43;

DEFLABEL (label_54)
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_19]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_4]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_53;

DEFLABEL (label_56)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_18]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_57)
  (Wrd68.Obj) = (Rsp [4]);
  (Wrd69.Obj) = (Rsp [5]);
  if ((Wrd68.Obj) == (Wrd69.Obj))
    goto label_59;
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_17]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd76.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_16]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_29_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_25]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_29_11);
  (Wrd91.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd91.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));
  (* (--Rsp)) = (Wrd90.Obj);

DEFLABEL (label_58)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_14]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_15]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd84.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_16]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_29_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_29_14);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (current_block [OBJECT_29_6]);
  (Rsp [6]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (Rsp [5]) = (Wrd11.Obj);
  (Rsp [7]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd6.Obj);
  goto label_58;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_29_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_43;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 12
#define DEBUGGING_LABEL_30_2 11
#define EXECUTE_CACHE_30_7 7
#define EXECUTE_CACHE_30_6 9
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_30_4);
      goto scode_make_conjunction_1;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_make_conjunction_4)
DEFLABEL (scode_make_conjunction_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 13
#define DEBUGGING_LABEL_31_2 12
#define OBJECT_31_0 11
#define EXECUTE_CACHE_31_7 7
#define EXECUTE_CACHE_31_6 9
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_31_4);
      goto scode_merge_tests_3;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_merge_tests_6)
DEFLABEL (scode_merge_tests_3)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_31_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_9;
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_7;
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (label_7)
  Rvl = (Wrd5.Obj);

DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  Rvl = (Rsp [1]);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 10
#define DEBUGGING_LABEL_32_2 9
#define OBJECT_32_1 8
#define OBJECT_32_0 7
#define EXECUTE_CACHE_32_5 5
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_32_4);
      goto scode_make_thunk_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_make_thunk_3)
DEFLABEL (scode_make_thunk_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define LABEL_33_9 9
#define LABEL_33_11 11
#define LABEL_33_13 13
#define ENVIRONMENT_LABEL_33_3 27
#define DEBUGGING_LABEL_33_2 26
#define OBJECT_33_0 25
#define EXECUTE_CACHE_33_12 15
#define EXECUTE_CACHE_33_10 17
#define EXECUTE_CACHE_33_8 19
#define EXECUTE_CACHE_33_6 21
#define FREE_REFERENCE_33_0 24
#define FREE_REFERENCES_LABEL_33_0 14
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_33_4);
      goto scode_letP_4;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto lambda_3;

    case 3:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_33_11);
      goto lambda_2;

    case 5:
      current_block = (Rpc - LABEL_33_13);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_letP_8)
DEFLABEL (scode_letP_4)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_33_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_10)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_33_11);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_17;
  Wrd6 = Wrd10;

DEFLABEL (label_16)
  (Wrd13.Obj) = (Rsp [0]);
  if ((Wrd13.Obj) == (Wrd6.Obj))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_33_0]);

DEFLABEL (label_13)
DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_13])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_6 5
#define LABEL_34_5 7
#define ENVIRONMENT_LABEL_34_3 17
#define DEBUGGING_LABEL_34_2 16
#define OBJECT_34_0 15
#define EXECUTE_CACHE_34_8 9
#define EXECUTE_CACHE_34_7 11
#define FREE_REFERENCE_34_0 14
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_34_4);
      goto scode_make_let_1;

    case 1:
      current_block = (Rpc - LABEL_34_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_make_let_5)
DEFLABEL (scode_make_let_1)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_7;
  Wrd14 = Wrd18;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_6])), (Wrd15.pObj));

DEFLABEL (label_3)
  (Wrd14.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define TAG_35_6 1
#define LABEL_35_8 7
#define TAG_35_9 2
#define ENVIRONMENT_LABEL_35_3 14
#define DEBUGGING_LABEL_35_2 13
#define EXECUTE_CACHE_35_10 9
#define EXECUTE_CACHE_35_7 11
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_35_4);
      goto scode_let_components_2;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_35_8);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_let_components_5)
DEFLABEL (scode_let_components_2)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_35_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x808, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_35_8);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [5]) = (Wrd9.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_6 5
#define LABEL_36_5 7
#define LABEL_36_9 9
#define LABEL_36_8 11
#define ENVIRONMENT_LABEL_36_3 23
#define DEBUGGING_LABEL_36_2 22
#define OBJECT_36_1 21
#define OBJECT_36_0 20
#define EXECUTE_CACHE_36_10 13
#define EXECUTE_CACHE_36_7 15
#define FREE_REFERENCE_36_1 18
#define FREE_REFERENCE_36_0 19
#define FREE_REFERENCES_LABEL_36_0 12
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_36_4);
      goto scode_make_block_6;

    case 1:
      current_block = (Rpc - LABEL_36_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_36_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_make_block_11)
DEFLABEL (scode_make_block_6)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_36_0])))
    goto label_12;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_19;
  Wrd11 = Wrd15;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_17;
  Wrd9 = Wrd13;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_8);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.Obj) = (current_block [OBJECT_36_0]);
  if ((Wrd6.Obj) == (Wrd7.Obj))
    goto label_14;
  (Wrd11.Obj) = (current_block [OBJECT_36_1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  goto label_13;

DEFLABEL (label_14)
  Wrd13 = Wrd7;

DEFLABEL (label_13)
DEFLABEL (label_15)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_9])), (Wrd10.pObj));

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_6])), (Wrd12.pObj));

DEFLABEL (label_8)
  (Wrd11.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_9 7
#define LABEL_37_6 9
#define LABEL_37_8 11
#define LABEL_37_11 13
#define LABEL_37_13 15
#define LABEL_37_14 17
#define LABEL_37_15 19
#define LABEL_37_20 21
#define LABEL_37_21 23
#define ENVIRONMENT_LABEL_37_3 47
#define DEBUGGING_LABEL_37_2 46
#define OBJECT_37_2 45
#define OBJECT_37_1 44
#define OBJECT_37_0 43
#define EXECUTE_CACHE_37_22 25
#define EXECUTE_CACHE_37_19 27
#define EXECUTE_CACHE_37_18 29
#define EXECUTE_CACHE_37_17 31
#define EXECUTE_CACHE_37_16 33
#define EXECUTE_CACHE_37_12 35
#define EXECUTE_CACHE_37_10 37
#define EXECUTE_CACHE_37_7 39
#define FREE_REFERENCE_37_0 42
#define FREE_REFERENCES_LABEL_37_0 24
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_37_4);
      goto scode_make_letrec_9;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_37_9);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_37_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_37_11);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_37_13);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_37_14);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_37_15);
      goto lambda_6;

    case 9:
      current_block = (Rpc - LABEL_37_20);
      goto label_12;

    case 10:
      current_block = (Rpc - LABEL_37_21);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_make_letrec_15)
DEFLABEL (scode_make_letrec_9)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_18;
  Wrd9 = Wrd13;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_37_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_37_13);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_37_0]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_18]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_9])), (Wrd10.pObj));

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_17;

DEFLABEL (lambda_16)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_37_15);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_20;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_22]));

DEFLABEL (label_20)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_21]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_13)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_9 7
#define LABEL_38_7 9
#define LABEL_38_13 11
#define LABEL_38_14 13
#define LABEL_38_15 15
#define LABEL_38_17 17
#define LABEL_38_10 19
#define LABEL_38_11 21
#define LABEL_38_16 23
#define LABEL_38_19 25
#define LABEL_38_20 27
#define LABEL_38_21 29
#define LABEL_38_23 31
#define LABEL_38_25 33
#define LABEL_38_22 35
#define LABEL_38_26 37
#define LABEL_38_24 39
#define ENVIRONMENT_LABEL_38_3 62
#define DEBUGGING_LABEL_38_2 61
#define OBJECT_38_5 60
#define OBJECT_38_4 59
#define OBJECT_38_3 58
#define OBJECT_38_2 57
#define OBJECT_38_1 56
#define OBJECT_38_0 55
#define EXECUTE_CACHE_38_29 41
#define EXECUTE_CACHE_38_28 43
#define EXECUTE_CACHE_38_27 45
#define EXECUTE_CACHE_38_18 47
#define EXECUTE_CACHE_38_12 49
#define EXECUTE_CACHE_38_8 51
#define EXECUTE_CACHE_38_6 53
#define FREE_REFERENCES_LABEL_38_0 40
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd77;
  machine_word Wrd84;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd59;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd10;
  machine_word Wrd45;
  machine_word Wrd52;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_38_4);
      goto scode_make_case_expression_28;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_38_9);
      goto kernel_27;

    case 3:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_38_13);
      goto process_26;

    case 5:
      current_block = (Rpc - LABEL_38_14);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_38_15);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_38_17);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_38_10);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_38_11);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_38_16);
      goto continuation_24;

    case 11:
      current_block = (Rpc - LABEL_38_19);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_38_20);
      goto label_34;

    case 13:
      current_block = (Rpc - LABEL_38_21);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_38_23);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_38_25);
      goto label_37;

    case 16:
      current_block = (Rpc - LABEL_38_22);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_38_26);
      goto continuation_13;

    case 18:
      current_block = (Rpc - LABEL_38_24);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_make_case_expression_39)
DEFLABEL (scode_make_case_expression_28)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  Rdl = (& (Rsp [5]));
  goto kernel_27;

DEFLABEL (label_42)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_7);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_38_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.pObj) = (& (Rsp [2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_38_11);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [2]));
  goto kernel_27;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_38_10);
  (Rsp [3]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_38_1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_18]));

DEFLABEL (kernel_40)
DEFLABEL (kernel_27)
  DLINK_INTERRUPT_CHECK (25, LABEL_38_9);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto process_26;

DEFLABEL (process_41)
DEFLABEL (process_26)
  DLINK_INTERRUPT_CHECK (25, LABEL_38_13);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_38_1])))
    goto label_43;
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [1]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  Rvl = ((Wrd57.pObj) [1]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_43)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_60;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_59)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_58;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_57)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_16]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (Rsp [4]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_56;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [1]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_55)
  Rdl = (& (Rsp [2]));
  goto process_26;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_38_16);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_54;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_53)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_52;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_51)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_50;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_49)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_22]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd50.Obj) = (Rsp [4]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_48;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_47)
  if ((Wrd47.Obj) == (current_block [OBJECT_38_1]))
    goto label_45;
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_26]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd66.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_27]));

DEFLABEL (label_45)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_24]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd75.Obj) = (Rsp [6]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_46;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (* (--Rsp)) = (Wrd74.Obj);
  goto label_44;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_25]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 1);

DEFLABEL (label_37)
  (Wrd77.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd77.Obj));
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_23]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_3]), 1);

DEFLABEL (label_36)
  (Wrd52.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd47.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_21]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 1);

DEFLABEL (label_35)
  (Wrd34.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd34.Obj));
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_20]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_3]), 1);

DEFLABEL (label_34)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_19]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 1);

DEFLABEL (label_33)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_17]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_3]), 1);

DEFLABEL (label_32)
  (Wrd45.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd45.Obj));
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_15]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 1);

DEFLABEL (label_31)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 1);

DEFLABEL (label_30)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_59;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_38_26);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_38_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd15.Obj) = (Rsp [6]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_38_4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_29]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_38_22);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_28]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_38_24);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_38_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd15.Obj) = (Rsp [6]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_38_5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_29]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define ENVIRONMENT_LABEL_39_3 13
#define DEBUGGING_LABEL_39_2 12
#define OBJECT_39_1 11
#define OBJECT_39_0 10
#define FREE_REFERENCE_39_0 9
#define FREE_REFERENCES_LABEL_39_0 8
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_39_4);
      goto evaluationP_2;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (evaluationP_7)
DEFLABEL (evaluationP_2)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_10;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_12;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_11)
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd15.Obj) == (Wrd24.Obj)))
    goto label_9;
  Rvl = (current_block [OBJECT_39_1]);
  goto label_8;

DEFLABEL (label_12)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 1);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_5])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define ENVIRONMENT_LABEL_40_3 9
#define DEBUGGING_LABEL_40_2 8
#define FREE_REFERENCE_40_0 7
#define FREE_REFERENCES_LABEL_40_0 6
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_40_4);
      goto make_evaluation_0;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_evaluation_4)
DEFLABEL (make_evaluation_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Wrd16.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 6
#define DEBUGGING_LABEL_41_2 5
#define OBJECT_41_0 4
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmerly_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_41_4);
      goto evaluation_expression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (evaluation_expression_3)
DEFLABEL (evaluation_expression_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_9 9
#define LABEL_10 11
#define LABEL_11 13
#define LABEL_12 15
#define LABEL_13 17
#define LABEL_15 19
#define LABEL_14 21
#define LABEL_17 23
#define LABEL_16 25
#define LABEL_19 27
#define LABEL_18 29
#define LABEL_20 31
#define LABEL_22 33
#define LABEL_21 35
#define LABEL_23 37
#define LABEL_24 39
#define LABEL_25 41
#define LABEL_26 43
#define ENVIRONMENT_LABEL_3 80
#define DEBUGGING_LABEL_2 79
#define PURIFICATION_ROOT 78
#define OBJECT_22 77
#define OBJECT_21 76
#define OBJECT_20 75
#define OBJECT_19 74
#define OBJECT_18 73
#define OBJECT_17 72
#define OBJECT_16 71
#define OBJECT_15 70
#define OBJECT_14 69
#define OBJECT_13 68
#define OBJECT_12 67
#define OBJECT_11 66
#define OBJECT_10 65
#define OBJECT_9 64
#define OBJECT_8 63
#define OBJECT_7 62
#define OBJECT_6 61
#define OBJECT_5 60
#define OBJECT_4 59
#define OBJECT_3 58
#define OBJECT_2 57
#define OBJECT_1 56
#define OBJECT_0 55
#define EXECUTE_CACHE_8 45
#define FREE_REFERENCE_3 48
#define FREE_REFERENCE_2 49
#define FREE_REFERENCE_1 50
#define FREE_REFERENCE_0 51
#define GLOBAL_EXECUTE_CACHE_5 53
#define FREE_REFERENCES_LABEL_0 44
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
pmerly_so_2bbd3e40143348d2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto label_18;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto label_19;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto label_20;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_24);
      goto label_23;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto label_24;

    case 20:
      current_block = (Rpc - LABEL_26);
      goto expression_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_16)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_25])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_24)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_23)
  {
    static const short sections [] =
      {
	0,
	0,
	1,
	1,
	1,
	2,
	2,
	1,
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
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
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	3,
	1,
	1,
	1,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 41)
      goto label_22;
    blocks = (current_block [OBJECT_22]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_24])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_22)
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
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_32;
  Wrd8 = Wrd12;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_30;
  Wrd8 = Wrd12;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_28;
  Wrd8 = Wrd12;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_26;
  Wrd8 = Wrd12;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17]);
  (Wrd12.Obj) = (current_block [OBJECT_18]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_21]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd9.pObj));

DEFLABEL (label_20)
  (Wrd8.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd9.pObj));

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd9.pObj));

DEFLABEL (label_18)
  (Wrd8.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd9.pObj));

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_pmerly_so_2bbd3e40143348d2 [41] =
  {
    { "pmerly_so_code_1", 1, pmerly_so_code_1 },
    { "pmerly_so_code_2", 1, pmerly_so_code_2 },
    { "pmerly_so_code_3", 18, pmerly_so_code_3 },
    { "pmerly_so_code_4", 9, pmerly_so_code_4 },
    { "pmerly_so_code_5", 18, pmerly_so_code_5 },
    { "pmerly_so_code_6", 15, pmerly_so_code_6 },
    { "pmerly_so_code_7", 22, pmerly_so_code_7 },
    { "pmerly_so_code_8", 21, pmerly_so_code_8 },
    { "pmerly_so_code_9", 8, pmerly_so_code_9 },
    { "pmerly_so_code_10", 9, pmerly_so_code_10 },
    { "pmerly_so_code_11", 26, pmerly_so_code_11 },
    { "pmerly_so_code_12", 10, pmerly_so_code_12 },
    { "pmerly_so_code_13", 23, pmerly_so_code_13 },
    { "pmerly_so_code_14", 2, pmerly_so_code_14 },
    { "pmerly_so_code_15", 20, pmerly_so_code_15 },
    { "pmerly_so_code_16", 10, pmerly_so_code_16 },
    { "pmerly_so_code_17", 13, pmerly_so_code_17 },
    { "pmerly_so_code_18", 2, pmerly_so_code_18 },
    { "pmerly_so_code_19", 6, pmerly_so_code_19 },
    { "pmerly_so_code_20", 7, pmerly_so_code_20 },
    { "pmerly_so_code_21", 5, pmerly_so_code_21 },
    { "pmerly_so_code_22", 16, pmerly_so_code_22 },
    { "pmerly_so_code_23", 9, pmerly_so_code_23 },
    { "pmerly_so_code_24", 3, pmerly_so_code_24 },
    { "pmerly_so_code_25", 1, pmerly_so_code_25 },
    { "pmerly_so_code_26", 5, pmerly_so_code_26 },
    { "pmerly_so_code_27", 19, pmerly_so_code_27 },
    { "pmerly_so_code_28", 13, pmerly_so_code_28 },
    { "pmerly_so_code_29", 17, pmerly_so_code_29 },
    { "pmerly_so_code_30", 2, pmerly_so_code_30 },
    { "pmerly_so_code_31", 2, pmerly_so_code_31 },
    { "pmerly_so_code_32", 1, pmerly_so_code_32 },
    { "pmerly_so_code_33", 6, pmerly_so_code_33 },
    { "pmerly_so_code_34", 3, pmerly_so_code_34 },
    { "pmerly_so_code_35", 3, pmerly_so_code_35 },
    { "pmerly_so_code_36", 5, pmerly_so_code_36 },
    { "pmerly_so_code_37", 11, pmerly_so_code_37 },
    { "pmerly_so_code_38", 19, pmerly_so_code_38 },
    { "pmerly_so_code_39", 3, pmerly_so_code_39 },
    { "pmerly_so_code_40", 2, pmerly_so_code_40 },
    { "pmerly_so_code_41", 1, pmerly_so_code_41 }
  };

int
decl_pmerly_so_2bbd3e40143348d2 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_pmerly_so_2bbd3e40143348d2);
  return (0);
}

DECLARE_COMPILED_CODE ("pmerly.so", 21, decl_pmerly_so_2bbd3e40143348d2, pmerly_so_2bbd3e40143348d2)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_pmerly_so_data_2bbd3e40143348d2 [7727] =
  "\x67\x5e\xea\x10\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x22\x29\x21"
  "\x9d\x2b\xb9\x1d\xb0\x82\x88\x28\x0d\xba\x23\x22\x29\x21\x9f\x2b"
  "\xbb\x1d\xb0\x83\x88\x08\xc1\xbc\x0d\xbd\x0c\x0d\xc1\xbe\x28\x0d"
  "\xbf\x28\x0d\x28\xb2\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\x0c\xb4\xb6\x08\x28\x0d\x1c\x28\x1b\x28\xb7"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x06\x0d\x1c\x07\x1d"
  "\xc2\x0c\x0d\x1c\x0c\x08\x1d\x0d\x1c\x0d\x1c\x25\x1b\x1b\x0d\x24"
  "\x28\x0d\x1c\x28\x0d\x28\xb7\x28\xb7\x28\x0d\x1c\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86"
  "\x88\x0d\x08\x0c\x0d\xb4\x0d\xb6\x0d\x1c\x24\x28\x0d\x1c\x28\xb7"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x0d\x1b\x1b\xb6\xb4\x80\x08\x1b\x24\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x08\xb4\xb6\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\xb6\x08\x07\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb4\xb6\x08\x28\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0c\xb5\x08"
  "\x0c\xb6\xb4\x28\x1b\x28\xb7\x28\xb7\x28\x0d\xbd\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\xb4\xb6\x28\x1b\x28\x1b\x28\xb5"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x07\x0c\x0d\x1c\x0d\x1c\x0d\x1c\xb4\xb6"
  "\x08\x28\x1b\x28\x1b\x28\xb7\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d"
  "\xb0\x02\x88\x22\x29\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4"
  "\x0d\x1c\xb6\x0d\x1c\x0d\x1c\x07\x08\x1b\x24\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x0d\x0d\x08"
  "\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\xb6\xb4\x0d\x1c\x24\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\xb5\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb4\x06\x07\x85\xc2\x1c\x02\x1b\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0d\x1c\x08\x07\x1b\x1b\x0d\x1c\x1b\x1b\x1b"
  "\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\xb4\x0d\x1c"
  "\x08\x07\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x07\x08\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\xb4\x1b\x06\x07\x85\x1b\x02\x08\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6"
  "\x1b\xb4\x1b\x08\x84\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\xb4\x06\x07\x85\x1b\x02\xb6\xc2\x08"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x28\x0d\x1c\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x24\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x24\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x08\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb4\xb6\x08\x1b\x24\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x0d"
  "\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\xb4\xb6\x08\x0d\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb6\x1b\x24\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x22\x29\x21\x9d\x2b\x1c\x17"
  "\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x0d\x0d\x1b\x9a\x1b\x08"
  "\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x17\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d"
  "\x0d\x0d\x1b\x0d\x1b\x0d\x0d\x0d\x0d\x1b\x0d\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x0d\x1c\x0d\x1c\x88\x1b\x08\x8a\x1b\x0d\x1c\x0d\x1c\x88\x1b"
  "\x08\x8a\x1b\x0d\x1c\x0d\x1c\x88\x1b\x1b\x08\x8b\x1b\x0d\x1c\x0d"
  "\x1c\x88\x1b\x1b\x08\x8b\x1b\x0d\x1c\x0d\x1c\x88\x1b\x1b\x08\x8b"
  "\x1b\x0d\x1c\x0d\x1c\x88\x1b\x1b\x08\x8b\x1b\x0d\x1c\x0d\x1c\x88"
  "\x1b\x1b\x08\x8b\x1b\x0d\x1c\x0d\x1c\x88\x1b\x1b\x08\x8b\x1b\x0d"
  "\x1c\x0d\x1c\x88\x1b\x1b\x08\x8b\x1b\x0d\x1c\x0d\x1c\x88\x1b\x1b"
  "\x08\x8b\x1b\x0d\x1c\x0d\x1c\x88\x1b\x1b\x08\x8b\x1b\x0d\x1c\x0d"
  "\x1c\x88\x1b\x1b\x08\x8b\x1b\x0d\x1c\x0d\x1c\x88\x1b\x1b\x08\x8b"
  "\x1b\x0d\x1c\x0d\x1c\x88\x1b\x1b\x08\x8b\x1b\x08\x1b\x1b\x08\x8b"
  "\x1b\x08\x1b\x1b\x08\x8b\x1b\x08\x1b\x1b\x08\x8b\x1b\x08\x1b\x1b"
  "\x08\x8b\x1b\x08\x1b\x1b\x08\x8b\x1b\x08\x1b\x1b\x08\x8b\x1b\x08"
  "\x1b\x1b\x08\x8b\x1b\x08\x1b\x1b\x08\x8b\x1b\x08\x1b\x1b\x08\x8b"
  "\x1b\x08\x1b\x1b\x08\x8b\x1b\x08\x1b\x1b\x08\x8b\x1b\x08\x1b\x1b"
  "\x08\x8b\x1b\x08\x1b\x1b\x08\x8b\x1b\x08\x1b\x1b\x08\x8b\x1b\x08"
  "\x1b\x1b\x08\x8b\x1b\x08\x1b\x1b\x08\x8b\x08\x14\x1b\x2a\x1b\x2a"
  "\x17\x1b\x1b\xc3\x1b\x1b\x1b\x0d\x1c\x1b\xb5\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x0d\x1b\xb2\x0d\x0d\x17\x1b\x2a\xb7\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x08\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\xb3\x2a\xb1\x2a\x17\x28\x0d\x26\x1b\x1b\x1b\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x59\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61\x73\x65\x2f\x70\x6d\x65"
  "\x72\x6c\x79\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x16\x04\x85"
  "\x08\x03\x02\x04\x12\x65\x78\x74\x72\x61\x63\x74\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x73\x02\x17\x04\x84\x06\x03\x02\x04\x63\x64"
  "\x72\x02\x3f\x33\x65\x61\x72\x6c\x79\x2d\x70\x61\x72\x73\x65\x2d"
  "\x72\x75\x6c\x65\x3a\x20\x3f\x40\x20\x69\x73\x20\x6e\x6f\x74\x20"
  "\x61\x6e\x20\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64\x20\x70"
  "\x61\x74\x74\x65\x72\x6e\x02\x40\x04\x63\x61\x72\x04\x06\x65\x72"
  "\x72\x6f\x72\x03\x16\x6d\x61\x6b\x65\x2d\x70\x61\x74\x74\x65\x72"
  "\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x04\x04\x16\x6d\x65\x72"
  "\x67\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x2d\x6c\x69\x73"
  "\x74\x73\x09\x05\x29\x26\x81\x87\x02\x28\x24\x81\x87\x02\x27\x22"
  "\x81\x87\x02\x26\x20\x81\x87\x02\x25\x1e\x81\x87\x02\x24\x1c\x81"
  "\x85\x02\x23\x1a\x81\x89\x02\x22\x18\x81\x89\x02\x21\x16\x81\x89"
  "\x02\x20\x14\x81\x89\x02\x1f\x12\x81\x89\x02\x1e\x10\x81\x87\x02"
  "\x1d\x0e\x81\x87\x02\x1c\x0c\x81\x87\x02\x1b\x0a\x81\x87\x02\x1a"
  "\x08\x81\x85\x02\x19\x06\x81\x85\x02\x18\x04\x84\x06\x25\x37\x0a"
  "\x02\x33\x65\x61\x72\x6c\x79\x2d\x70\x61\x72\x73\x65\x2d\x72\x75"
  "\x6c\x65\x3a\x20\x72\x65\x70\x65\x61\x74\x65\x64\x20\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f"
  "\x72\x74\x65\x64\x04\x05\x61\x73\x73\x71\x0b\x04\x09\x04\x04\x32"
  "\x14\x81\x89\x02\x31\x12\x81\x87\x02\x30\x10\x81\x87\x02\x2f\x0e"
  "\x81\x87\x02\x2e\x0c\x81\x8b\x02\x2d\x0a\x81\x85\x02\x2c\x08\x81"
  "\x89\x02\x2b\x06\x81\x89\x02\x2a\x04\x84\x06\x13\x21\x0c\x02\x06"
  "\x6d\x61\x79\x62\x65\x0d\x02\x06\x61\x70\x70\x6c\x79\x2e\x65\x61"
  "\x72\x6c\x79\x2d\x70\x61\x74\x74\x65\x72\x6e\x2d\x6c\x6f\x6f\x6b"
  "\x75\x70\x3a\x20\x54\x6f\x6f\x20\x6d\x61\x6e\x79\x20\x70\x61\x74"
  "\x74\x65\x72\x6e\x73\x20\x6d\x61\x74\x63\x68\x09\x74\x6f\x6f\x2d"
  "\x6d\x61\x6e\x79\x0e\x29\x65\x61\x72\x6c\x79\x2d\x70\x61\x74\x74"
  "\x65\x72\x6e\x2d\x6c\x6f\x6f\x6b\x75\x70\x3a\x20\x4e\x6f\x20\x70"
  "\x61\x74\x74\x65\x72\x6e\x20\x6d\x61\x74\x63\x68\x65\x73\x08\x0d"
  "\x2a\x72\x75\x6c\x65\x2d\x6c\x69\x6d\x69\x74\x2a\x0f\x0f\x2a\x74"
  "\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x73\x2a\x10\x03\x0f\x10"
  "\x05\x6c\x69\x73\x74\x04\x04\x0f\x70\x61\x72\x73\x65\x2d\x69\x6e"
  "\x73\x74\x61\x6e\x63\x65\x11\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77"
  "\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x04\x05\x03\x14\x73"
  "\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x12\x04\x1d\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d"
  "\x65\x72\x72\x6f\x72\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x05\x11\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x62\x6c"
  "\x6f\x63\x6b\x13\x06\x0a\x74\x72\x79\x2d\x72\x75\x6c\x65\x73\x14"
  "\x09\x44\x26\x81\x89\x02\x43\x24\x81\x83\x02\x42\x22\x81\x87\x02"
  "\x41\x20\x81\x87\x02\x40\x1e\x81\x83\x02\x3f\x1c\x81\x85\x02\x3e"
  "\x1a\x81\x83\x02\x3d\x18\x81\x83\x02\x3c\x16\x81\x85\x02\x3b\x14"
  "\x81\x83\x02\x3a\x12\x81\x83\x02\x39\x10\x81\x83\x02\x38\x0e\x81"
  "\x85\x02\x37\x0c\x81\x87\x02\x36\x0a\x81\x87\x02\x35\x08\x81\x87"
  "\x02\x34\x06\x81\x8d\x02\x33\x04\x88\x06\x25\x4a\x15\x02\x07\x72"
  "\x65\x73\x75\x6c\x74\x2f\x70\x61\x72\x73\x65\x2d\x69\x6e\x73\x74"
  "\x61\x6e\x63\x65\x3a\x20\x75\x6e\x71\x75\x6f\x74\x65\x2d\x73\x70"
  "\x6c\x69\x63\x69\x6e\x67\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f"
  "\x72\x74\x65\x64\x11\x75\x6e\x71\x75\x6f\x74\x65\x2d\x73\x70\x6c"
  "\x69\x63\x69\x6e\x67\x08\x75\x6e\x71\x75\x6f\x74\x65\x0f\x65\x76"
  "\x61\x6c\x75\x61\x74\x69\x6f\x6e\x2d\x74\x61\x67\x16\x02\x03\x10"
  "\x73\x63\x6f\x64\x65\x2f\x76\x61\x72\x69\x61\x62\x6c\x65\x3f\x17"
  "\x04\x04\x11\x03\x13\x6d\x61\x6b\x65\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x2d\x6e\x61\x6d\x65\x18\x04\x07\x61\x70\x70\x65\x6e\x64"
  "\x19\x03\x14\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x1a\x07\x53\x20\x81\x8b\x02\x52\x1e\x81"
  "\x89\x02\x51\x1c\x81\x87\x02\x50\x1a\x81\x87\x02\x4f\x18\x81\x87"
  "\x02\x4e\x16\x81\x87\x02\x4d\x14\x81\x87\x02\x4c\x12\x81\x87\x02"
  "\x4b\x10\x81\x87\x02\x4a\x0e\x81\x85\x02\x49\x0c\x81\x85\x02\x48"
  "\x0a\x81\x85\x02\x47\x08\x81\x85\x02\x46\x06\x81\x85\x02\x45\x04"
  "\x84\x06\x1f\x38\x1b\x02\x08\x0f\x74\x72\x79\x2d\x6e\x65\x78\x74"
  "\x2d\x72\x75\x6c\x65\x2d\x0e\x0d\x0f\x02\x04\x04\x6d\x61\x70\x1c"
  "\x06\x09\x74\x72\x79\x2d\x72\x75\x6c\x65\x1d\x03\x18\x04\x12\x73"
  "\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x6c\x65\x74\x72\x65\x63"
  "\x1e\x03\x11\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x74\x68"
  "\x75\x6e\x6b\x1f\x03\x1a\x04\x17\x73\x63\x6f\x64\x65\x2f\x6d\x61"
  "\x6b\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x20\x08"
  "\x69\x2e\x81\x8f\x02\x68\x2c\x81\x8d\x02\x67\x2a\x81\x8d\x02\x66"
  "\x28\x81\x8b\x02\x65\x26\x81\x85\x02\x64\x24\x81\x83\x02\x63\x22"
  "\x81\x87\x02\x62\x20\x81\x85\x02\x61\x1e\x83\x04\x60\x1c\x81\x8f"
  "\x02\x5f\x1a\x81\x8b\x02\x5e\x18\x81\x87\x02\x5d\x16\x81\x87\x02"
  "\x5c\x14\x81\x8b\x02\x5b\x12\x81\x8b\x02\x5a\x10\x81\x8b\x02\x59"
  "\x0e\x81\x8b\x02\x58\x0c\x81\x8b\x02\x57\x0a\x81\x8b\x02\x56\x08"
  "\x81\x8b\x02\x55\x06\x81\x8b\x02\x54\x04\x86\x0a\x2d\x49\x21\x02"
  "\x09\x08\x0b\x6d\x61\x74\x63\x68\x2d\x62\x69\x6e\x64\x22\x03\x0c"
  "\x65\x76\x61\x6c\x75\x61\x74\x69\x6f\x6e\x3f\x23\x03\x12\x70\x61"
  "\x74\x74\x65\x72\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x3f\x24"
  "\x04\x05\x65\x71\x76\x3f\x03\x16\x70\x61\x74\x74\x65\x72\x6e\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x6e\x61\x6d\x65\x25\x04\x19"
  "\x07\x7e\x2c\x81\x87\x02\x7d\x2a\x81\x87\x02\x7c\x28\x81\x87\x02"
  "\x7b\x26\x81\x89\x02\x7a\x24\x81\x89\x02\x79\x22\x81\x87\x02\x78"
  "\x20\x81\x89\x02\x77\x1e\x81\x89\x02\x76\x1c\x81\x89\x02\x75\x1a"
  "\x81\x89\x02\x74\x18\x81\x89\x02\x73\x16\x81\x89\x02\x72\x14\x81"
  "\x89\x02\x71\x12\x81\x8d\x02\x70\x10\x81\x8d\x02\x6f\x0e\x81\x8d"
  "\x02\x6e\x0c\x81\x87\x02\x6d\x0a\x81\x87\x02\x6c\x08\x81\x87\x02"
  "\x6b\x06\x81\x8d\x02\x6a\x04\x86\x0a\x2b\x3e\x26\x02\x0a\x06\x14"
  "\x70\x72\x6f\x63\x65\x73\x73\x2d\x65\x76\x61\x6c\x75\x61\x74\x69"
  "\x6f\x6e\x73\x27\x08\x14\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x6d"
  "\x61\x74\x63\x68\x2d\x63\x6f\x64\x65\x28\x05\x14\x62\x69\x6e\x64"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x65\x61\x72\x6c\x79\x29"
  "\x04\x12\x73\x63\x6f\x64\x65\x2f\x6d\x65\x72\x67\x65\x2d\x74\x65"
  "\x73\x74\x73\x2a\x04\x19\x06\x86\x01\x12\x81\x89\x02\x85\x01\x10"
  "\x81\x89\x02\x84\x01\x0e\x81\x89\x02\x83\x01\x0c\x81\x87\x02\x82"
  "\x01\x0a\x81\x89\x02\x81\x01\x08\x81\x89\x02\x80\x01\x06\x81\x89"
  "\x02\x7f\x04\x88\x0e\x11\x23\x2b\x02\x0b\x05\x11\x62\x75\x69\x6c"
  "\x64\x2d\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x2c\x04\x2a\x04"
  "\x19\x06\x27\x05\x8f\x01\x14\x81\x8b\x02\x8e\x01\x12\x81\x89\x02"
  "\x8d\x01\x10\x81\x87\x02\x8c\x01\x0e\x81\x87\x02\x8b\x01\x0c\x81"
  "\x8b\x02\x8a\x01\x0a\x81\x8b\x02\x89\x01\x08\x81\x8b\x02\x88\x01"
  "\x06\x81\x89\x02\x87\x01\x04\x86\x0a\x13\x22\x2d\x02\x0c\x1d\x6d"
  "\x61\x74\x63\x68\x2d\x62\x69\x6e\x64\x3a\x20\x3f\x40\x20\x75\x6e"
  "\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64\x21\x6d\x61\x74\x63"
  "\x68\x2d\x62\x69\x6e\x64\x3a\x20\x6e\x6f\x6e\x65\x78\x69\x73\x74"
  "\x65\x6e\x74\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x04\x0b\x05\x04"
  "\x03\x0b\x75\x6e\x65\x76\x61\x6c\x75\x61\x74\x65\x07\x18\x61\x70"
  "\x70\x6c\x79\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d"
  "\x65\x61\x72\x6c\x79\x2e\x03\x10\x73\x63\x6f\x64\x65\x2f\x63\x6f"
  "\x6e\x73\x74\x61\x6e\x74\x3f\x2f\x04\x13\x6d\x61\x6b\x65\x2d\x6f"
  "\x75\x74\x65\x72\x2d\x62\x69\x6e\x64\x69\x6e\x67\x30\x04\x13\x6d"
  "\x61\x6b\x65\x2d\x65\x61\x72\x6c\x79\x2d\x62\x69\x6e\x64\x69\x6e"
  "\x67\x31\x09\xa9\x01\x36\x81\x8f\x02\xa8\x01\x34\x81\x8d\x02\xa7"
  "\x01\x32\x81\x8d\x02\xa6\x01\x30\x81\x91\x02\xa5\x01\x2e\x81\x91"
  "\x02\xa4\x01\x2c\x81\x91\x02\xa3\x01\x2a\x81\x91\x02\xa2\x01\x28"
  "\x81\x91\x02\xa1\x01\x26\x81\x91\x02\xa0\x01\x24\x81\x91\x02\x9f"
  "\x01\x22\x81\x91\x02\x9e\x01\x20\x81\x91\x02\x9d\x01\x1e\x81\x8d"
  "\x02\x9c\x01\x1c\x81\x8d\x02\x9b\x01\x1a\x81\x8d\x02\x9a\x01\x18"
  "\x81\x8d\x02\x99\x01\x16\x81\x8d\x02\x98\x01\x14\x81\x8d\x02\x97"
  "\x01\x12\x81\x8d\x02\x96\x01\x10\x81\x8d\x02\x95\x01\x0e\x81\x8b"
  "\x02\x94\x01\x0c\x81\x8d\x02\x93\x01\x0a\x81\x8f\x02\x92\x01\x08"
  "\x81\x89\x02\x91\x01\x06\x81\x87\x02\x90\x01\x04\x85\x08\x35\x50"
  "\x32\x02\x0d\x05\x63\x6f\x6e\x73\x33\x03\x23\x03\x12\x03\x03\x2f"
  "\x03\x15\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x2d\x76\x61\x6c\x75\x65\x34\x04\x20\x73\x63\x6f\x64\x65\x2f\x6d"
  "\x61\x6b\x65\x2d\x61\x62\x73\x6f\x6c\x75\x74\x65\x2d\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x35\x07\xb3\x01\x16\x81\x87\x02"
  "\xb2\x01\x14\x81\x85\x02\xb1\x01\x12\x81\x85\x02\xb0\x01\x10\x81"
  "\x85\x02\xaf\x01\x0e\x81\x85\x02\xae\x01\x0c\x81\x87\x02\xad\x01"
  "\x0a\x81\x83\x02\xac\x01\x08\x81\x85\x02\xab\x01\x06\x81\x83\x02"
  "\xaa\x01\x04\x83\x04\x15\x29\x36\x02\x0e\x0d\x2a\x63\x6f\x6c\x6c"
  "\x65\x63\x74\x20\x62\x69\x6e\x64\x69\x6e\x67\x73\x3a\x20\x55\x6e"
  "\x6b\x6e\x6f\x77\x6e\x20\x74\x79\x70\x65\x20\x6f\x66\x20\x62\x69"
  "\x6e\x64\x69\x6e\x67\x06\x65\x61\x72\x6c\x79\x37\x05\x6c\x61\x74"
  "\x65\x38\x06\x6f\x75\x74\x65\x72\x39\x05\x13\x03\x2f\x04\x03\x17"
  "\x05\x17\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x61\x6c\x2f\x06\xca\x01\x30\x81\x87\x02"
  "\xc9\x01\x2e\x81\xa5\x02\xc8\x01\x2c\x81\xa1\x02\xc7\x01\x2a\x81"
  "\x9f\x02\xc6\x01\x28\x81\x9d\x02\xc5\x01\x26\x81\x99\x02\xc4\x01"
  "\x24\x81\x9d\x02\xc3\x01\x22\x81\x9f\x02\xc2\x01\x20\x81\x9d\x02"
  "\xc1\x01\x1e\x81\x9d\x02\xc0\x01\x1c\x81\x9d\x02\xbf\x01\x1a\x81"
  "\x9d\x02\xbe\x01\x18\x81\x9d\x02\xbd\x01\x16\x81\x9d\x02\xbc\x01"
  "\x14\x81\x9d\x02\xbb\x01\x12\x81\x9f\x02\xba\x01\x10\x81\x9d\x02"
  "\xb9\x01\x0e\x81\x9b\x02\xb8\x01\x0c\x81\x9b\x02\xb7\x01\x0a\x81"
  "\x99\x02\xb6\x01\x08\x81\x99\x02\xb5\x01\x06\x81\x99\x02\xb4\x01"
  "\x04\x88\x0e\x2f\x46\x02\x0f\xcc\x01\x06\x81\x87\x02\xcb\x01\x04"
  "\x83\x04\x05\x3a\x02\x10\x04\x63\x64\x72\x3b\x04\x65\x71\x3f\x3c"
  "\x04\x63\x61\x72\x3d\x16\x02\x03\x24\x03\x12\x04\x35\x06\x0a\x70"
  "\x61\x74\x68\x2d\x73\x74\x65\x70\x24\x03\x25\x04\x19\x06\x10\x62"
  "\x75\x69\x6c\x64\x2d\x70\x61\x69\x72\x2d\x74\x65\x73\x74\x25\x08"
  "\xe0\x01\x2a\x81\x8b\x02\xdf\x01\x28\x81\x8d\x02\xde\x01\x26\x81"
  "\x8b\x02\xdd\x01\x24\x81\x89\x02\xdc\x01\x22\x81\x87\x02\xdb\x01"
  "\x20\x81\x87\x02\xda\x01\x1e\x81\x89\x02\xd9\x01\x1c\x81\x8b\x02"
  "\xd8\x01\x1a\x81\x87\x02\xd7\x01\x18\x81\x87\x02\xd6\x01\x16\x81"
  "\x8b\x02\xd5\x01\x14\x81\x89\x02\xd4\x01\x12\x81\x8d\x02\xd3\x01"
  "\x10\x81\x89\x02\xd2\x01\x0e\x81\x85\x02\xd1\x01\x0c\x81\x8b\x02"
  "\xd0\x01\x0a\x81\x89\x02\xcf\x01\x08\x81\x89\x02\xce\x01\x06\x81"
  "\x89\x02\xcd\x01\x04\x85\x08\x29\x44\x19\x02\x11\x07\x65\x71\x75"
  "\x61\x6c\x3f\x06\x70\x61\x69\x72\x3f\x04\x2a\x04\x17\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x63\x6f\x6d\x70\x6f\x6e\x65"
  "\x6e\x74\x73\x04\x35\x03\x34\x03\x12\x06\xea\x01\x16\x81\x8b\x02"
  "\xe9\x01\x14\x81\x8d\x02\xe8\x01\x12\x81\x89\x02\xe7\x01\x10\x81"
  "\x87\x02\xe6\x01\x0e\x81\x8b\x02\xe5\x01\x0c\x81\x8b\x02\xe4\x01"
  "\x0a\x81\x87\x02\xe3\x01\x08\x81\x89\x02\xe2\x01\x06\x81\x87\x02"
  "\xe1\x01\x04\x86\x0a\x15\x27\x34\x02\x12\x3d\x12\x70\x61\x74\x68"
  "\x2d\x63\x6f\x6d\x70\x72\x65\x73\x73\x69\x6f\x6e\x73\x3e\x02\x04"
  "\x0b\x04\x35\x03\xf7\x01\x1c\x81\x8b\x02\xf6\x01\x1a\x81\x8d\x02"
  "\xf5\x01\x18\x81\x8d\x02\xf4\x01\x16\x81\x8d\x02\xf3\x01\x14\x81"
  "\x8d\x02\xf2\x01\x12\x81\x8d\x02\xf1\x01\x10\x81\x8d\x02\xf0\x01"
  "\x0e\x81\x8b\x02\xef\x01\x0c\x81\x8b\x02\xee\x01\x0a\x81\x89\x02"
  "\xed\x01\x08\x81\x8b\x02\xec\x01\x06\x81\x8b\x02\xeb\x01\x04\x86"
  "\x0a\x1b\x29\x3f\x02\x13\x03\x11\x66\x69\x6e\x64\x2d\x74\x72\x61"
  "\x6e\x73\x66\x6f\x72\x6d\x65\x72\x40\x07\x12\x61\x70\x70\x6c\x79"
  "\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x41\x03\xf9\x01"
  "\x06\x81\x8b\x02\xf8\x01\x04\x87\x0c\x05\x0d\x42\x02\x14\x03\x03"
  "\x1a\x06\x15\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x62"
  "\x69\x6e\x64\x69\x6e\x67\x73\x43\x04\x20\x05\xff\x01\x0e\x81\x85"
  "\x02\xfe\x01\x0c\x81\x8d\x02\xfd\x01\x0a\x81\x8f\x02\xfc\x01\x08"
  "\x81\x85\x02\xfb\x01\x06\x81\x8b\x02\xfa\x01\x04\x87\x0c\x0d\x1a"
  "\x44\x02\x15\x03\x1a\x04\x30\x04\x12\x6d\x61\x6b\x65\x2d\x6c\x61"
  "\x74\x65\x2d\x62\x69\x6e\x64\x69\x6e\x67\x45\x04\x86\x02\x10\x81"
  "\x8b\x02\x85\x02\x0e\x81\x8b\x02\x84\x02\x0c\x81\x89\x02\x83\x02"
  "\x0a\x81\x8d\x02\x82\x02\x08\x81\x8b\x02\x81\x02\x06\x81\x89\x02"
  "\x80\x02\x04\x86\x0a\x0f\x1a\x46\x02\x16\x0d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x74\x79\x70\x65\x3f\x47\x1e\x10\x02\x04\x0b\x02\x8b\x02"
  "\x0c\x81\x83\x02\x8a\x02\x0a\x81\x85\x02\x89\x02\x08\x81\x83\x02"
  "\x88\x02\x06\x83\x04\x87\x02\x04\x81\x83\x02\x0b\x19\x48\x02\x17"
  "\x3c\x04\x6e\x6f\x74\x49\x0d\x0e\x0b\x6e\x6f\x74\x2d\x66\x6f\x75"
  "\x6e\x64\x2d\x0e\x30\x45\x31\x04\x03\x1b\x67\x65\x6e\x65\x72\x61"
  "\x74\x65\x2d\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79"
  "\x6d\x62\x6f\x6c\x0d\x06\x14\x03\x12\x07\x41\x03\x1a\x03\x0f\x63"
  "\x61\x6e\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x3f\x4a\x04\x35"
  "\x03\x09\x9b\x02\x22\x81\x8d\x02\x9a\x02\x20\x81\x8d\x02\x99\x02"
  "\x1e\x81\x8b\x02\x98\x02\x1c\x81\x8b\x02\x97\x02\x1a\x81\x8d\x02"
  "\x96\x02\x18\x81\x8b\x02\x95\x02\x16\x81\x89\x02\x94\x02\x14\x81"
  "\x87\x02\x93\x02\x12\x81\x87\x02\x92\x02\x10\x81\x87\x02\x91\x02"
  "\x0e\x81\x87\x02\x90\x02\x0c\x81\x87\x02\x8f\x02\x0a\x81\x8f\x02"
  "\x8e\x02\x08\x81\x8d\x02\x8d\x02\x06\x81\x8d\x02\x8c\x02\x04\x83"
  "\x04\x21\x40\x4b\x02\x18\x0a\x69\x6e\x74\x65\x67\x72\x61\x74\x65"
  "\x4c\x03\x0b\x73\x63\x6f\x64\x65\x2f\x6c\x65\x74\x3f\x4d\x04\x15"
  "\x73\x63\x6f\x64\x65\x2f\x6c\x65\x74\x2d\x63\x6f\x6d\x70\x6f\x6e"
  "\x65\x6e\x74\x73\x4e\x04\x0b\x03\x4a\x04\x05\x6d\x65\x6d\x71\x4f"
  "\x06\xa4\x02\x14\x81\x8d\x02\xa3\x02\x12\x81\x8d\x02\xa2\x02\x10"
  "\x81\x91\x02\xa1\x02\x0e\x81\x8d\x02\xa0\x02\x0c\x81\x8b\x02\x9f"
  "\x02\x0a\x81\x89\x02\x9e\x02\x08\x86\x0a\x9d\x02\x06\x81\x83\x02"
  "\x9c\x02\x04\x83\x04\x13\x26\x50\x02\x19\x3c\x49\x03\x1a\x04\x35"
  "\x03\xa7\x02\x08\x81\x87\x02\xa6\x02\x06\x81\x85\x02\xa5\x02\x04"
  "\x84\x06\x07\x12\x51\x02\x1a\xa8\x02\x04\x83\x04\x03\x52\x02\x1b"
  "\x03\x12\x04\x31\x03\xad\x02\x0c\x81\x8f\x02\xac\x02\x0a\x81\x8d"
  "\x02\xab\x02\x08\x81\x8d\x02\xaa\x02\x06\x87\x0c\xa9\x02\x04\x81"
  "\x8b\x02\x0b\x15\x53\x02\x1c\x3c\x49\x0e\x47\x1e\x03\x23\x04\x0b"
  "\x03\x0d\x03\x12\x06\x43\x04\x31\x05\x16\x72\x75\x6e\x74\x69\x6d"
  "\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x2d\x6c\x6f\x6f\x6b\x75\x70\x49"
  "\x04\x35\x03\x1a\x0a\xc0\x02\x28\x81\x97\x02\xbf\x02\x26\x81\x95"
  "\x02\xbe\x02\x24\x81\x93\x02\xbd\x02\x22\x81\x91\x02\xbc\x02\x20"
  "\x81\x85\x02\xbb\x02\x1e\x81\x8f\x02\xba\x02\x1c\x81\x93\x02\xb9"
  "\x02\x1a\x81\x91\x02\xb8\x02\x18\x81\x91\x02\xb7\x02\x16\x81\x93"
  "\x02\xb6\x02\x14\x81\x8d\x02\xb5\x02\x12\x81\x95\x02\xb4\x02\x10"
  "\x81\x8d\x02\xb3\x02\x0e\x81\x8f\x02\xb2\x02\x0c\x81\x8d\x02\xb1"
  "\x02\x0a\x81\x83\x02\xb0\x02\x08\x81\x8d\x02\xaf\x02\x06\x81\x8d"
  "\x02\xae\x02\x04\x83\x04\x27\x47\x0e\x02\x1d\x0b\x3b\x03\x07\x6c"
  "\x65\x6e\x67\x74\x68\x54\x03\x12\x04\x1c\x04\x35\x04\x17\x73\x63"
  "\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x64\x69\x73\x6a\x75\x6e\x63"
  "\x74\x69\x6f\x6e\x05\x1b\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65"
  "\x2d\x63\x61\x73\x65\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x55\x07\xcd\x02\x1c\x81\x85\x02\xcc\x02\x1a\x81\x83\x02\xcb\x02"
  "\x18\x81\x87\x02\xca\x02\x16\x81\x8d\x02\xc9\x02\x14\x81\x8b\x02"
  "\xc8\x02\x12\x81\x85\x02\xc7\x02\x10\x83\x04\xc6\x02\x0e\x81\x87"
  "\x02\xc5\x02\x0c\x81\x89\x02\xc4\x02\x0a\x81\x87\x02\xc3\x02\x08"
  "\x81\x87\x02\xc2\x02\x06\x81\x87\x02\xc1\x02\x04\x85\x08\x1b\x31"
  "\x56\x02\x1e\x10\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x73"
  "\x65\x74\x21\x47\x1e\x10\x6d\x61\x6b\x65\x2d\x62\x69\x74\x2d\x73"
  "\x74\x72\x69\x6e\x67\x03\x23\x07\x41\x03\x12\x04\x0b\x04\x31\x06"
  "\xde\x02\x24\x81\x93\x02\xdd\x02\x22\x81\x93\x02\xdc\x02\x20\x81"
  "\x95\x02\xdb\x02\x1e\x81\x93\x02\xda\x02\x1c\x81\x93\x02\xd9\x02"
  "\x1a\x81\x95\x02\xd8\x02\x18\x81\x91\x02\xd7\x02\x16\x81\x95\x02"
  "\xd6\x02\x14\x81\x83\x02\xd5\x02\x12\x81\x93\x02\xd4\x02\x10\x81"
  "\x91\x02\xd3\x02\x0e\x81\x91\x02\xd2\x02\x0c\x81\x91\x02\xd1\x02"
  "\x0a\x81\x8d\x02\xd0\x02\x08\x81\x8d\x02\xcf\x02\x06\x81\x8d\x02"
  "\xce\x02\x04\x84\x06\x23\x3b\x47\x02\x1f\x03\x12\x05\x2f\x03\xe0"
  "\x02\x06\x81\x87\x02\xdf\x02\x04\x84\x06\x05\x0d\x0b\x02\x20\x03"
  "\x12\x05\x2f\x03\xe2\x02\x06\x81\x87\x02\xe1\x02\x04\x84\x06\x05"
  "\x0e\x57\x02\x21\x15\x23\x5b\x75\x6e\x6e\x61\x6d\x65\x64\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x5d\x09\x12\x73\x63\x6f\x64\x65"
  "\x2f\x6d\x61\x6b\x65\x2d\x6c\x61\x6d\x62\x64\x61\x58\x02\xe3\x02"
  "\x04\x83\x04\x03\x0b\x59\x02\x22\x0f\x6c\x61\x6d\x62\x64\x61\x2d"
  "\x74\x61\x67\x3a\x6c\x65\x74\x5a\x02\x03\x13\x73\x63\x6f\x64\x65"
  "\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x3f\x04\x1d\x73"
  "\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x5b\x03\x0e\x73\x63"
  "\x6f\x64\x65\x2f\x6c\x61\x6d\x62\x64\x61\x3f\x04\x18\x73\x63\x6f"
  "\x64\x65\x2f\x6c\x61\x6d\x62\x64\x61\x2d\x63\x6f\x6d\x70\x6f\x6e"
  "\x65\x6e\x74\x73\x5c\x05\xe9\x02\x0e\x81\x85\x02\xe8\x02\x0c\xfe"
  "\x05\xe7\x02\x0a\x81\x85\x02\xe6\x02\x08\x84\x06\xe5\x02\x06\x81"
  "\x83\x02\xe4\x02\x04\x83\x04\x0d\x1c\x5d\x02\x23\x5a\x02\x09\x58"
  "\x04\x20\x03\xec\x02\x08\x81\x89\x02\xeb\x02\x06\x81\x97\x02\xea"
  "\x02\x04\x86\x0a\x07\x12\x5a\x02\x24\x04\x5b\x04\x5c\x03\xef\x02"
  "\x08\x81\x91\x02\xee\x02\x06\x81\x87\x02\xed\x02\x04\x84\x06\x07"
  "\x0f\x5c\x02\x25\x4c\x3d\x3b\x03\x04\x1c\x06\x0f\x73\x63\x6f\x64"
  "\x65\x2f\x6d\x61\x6b\x65\x2d\x6c\x65\x74\x5b\x03\xf4\x02\x0c\x81"
  "\x89\x02\xf3\x02\x0a\x81\x8d\x02\xf2\x02\x08\x81\x87\x02\xf1\x02"
  "\x06\x81\x8b\x02\xf0\x02\x04\x85\x08\x0b\x18\x58\x02\x26\x3d\x02"
  "\x02\x1f\x6d\x61\x6b\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65"
  "\x64\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70"
  "\x04\x1c\x03\x54\x05\x05\x6d\x61\x70\x2a\x04\x0a\x6d\x61\x6b\x65"
  "\x2d\x6c\x69\x73\x74\x06\x5b\x03\x14\x73\x63\x6f\x64\x65\x2f\x6d"
  "\x61\x6b\x65\x2d\x73\x65\x71\x75\x65\x6e\x63\x65\x04\x16\x73\x63"
  "\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x09\xff\x02\x18\x81\x85\x02\xfe\x02\x16\x81\x83\x02"
  "\xfd\x02\x14\x83\x04\xfc\x02\x12\x81\x8b\x02\xfb\x02\x10\x81\x89"
  "\x02\xfa\x02\x0e\x81\x89\x02\xf9\x02\x0c\x81\x87\x02\xf8\x02\x0a"
  "\x81\x87\x02\xf7\x02\x08\x81\x8b\x02\xf6\x02\x06\x81\x85\x02\xf5"
  "\x02\x04\x84\x06\x17\x30\x54\x02\x27\x3c\x4f\x0f\x63\x61\x73\x65"
  "\x2d\x73\x65\x6c\x65\x63\x74\x6f\x72\x2d\x03\x17\x03\x18\x03\x1a"
  "\x06\x5b\x03\x12\x05\x2f\x04\x35\x08\x92\x03\x28\xfd\xff\x03\x91"
  "\x03\x26\xfd\xff\x03\x90\x03\x24\xfd\xff\x03\x8f\x03\x22\xfd\xff"
  "\x03\x8e\x03\x20\xfd\xff\x03\x8d\x03\x1e\xfd\xff\x03\x8c\x03\x1c"
  "\xfd\xff\x03\x8b\x03\x1a\xfd\xff\x03\x8a\x03\x18\xfd\xff\x03\x89"
  "\x03\x16\x81\x8d\x02\x88\x03\x14\x81\x89\x02\x87\x03\x12\xfd\xff"
  "\x03\x86\x03\x10\xfd\xff\x03\x85\x03\x0e\xfd\xff\x03\x84\x03\x0c"
  "\xff\xff\x03\x83\x03\x0a\x81\x87\x02\x82\x03\x08\xff\xff\x03\x81"
  "\x03\x06\x81\x87\x02\x80\x03\x04\x85\x08\x27\x3f\x4f\x02\x28\x16"
  "\x02\x95\x03\x08\x81\x85\x02\x94\x03\x06\x81\x83\x02\x93\x03\x04"
  "\x83\x04\x07\x0e\x4c\x02\x29\x16\x02\x97\x03\x06\x81\x83\x02\x96"
  "\x03\x04\x83\x04\x05\x0a\x3c\x02\x2a\x98\x03\x04\x83\x04\x03\x35"
  "\x2a\x2f\x2f\x35\x04\x3c\x04\x4c\x04\x16\x65\x76\x61\x6c\x75\x61"
  "\x74\x69\x6f\x6e\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x10"
  "\x6d\x61\x6b\x65\x2d\x65\x76\x61\x6c\x75\x61\x74\x69\x6f\x6e\x23"
  "\x16\x0d\x2a\x65\x76\x61\x6c\x75\x61\x74\x69\x6f\x6e\x2a\x18\x55"
  "\x1e\x13\x4e\x5b\x4d\x1f\x2a\x17\x73\x63\x6f\x64\x65\x2f\x6d\x61"
  "\x6b\x65\x2d\x63\x6f\x6e\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x0a\x4f"
  "\x04\x54\x04\x58\x04\x5c\x04\x5a\x04\x5d\x04\x59\x04\x57\x04\x0b"
  "\x04\x0a\x14\x73\x63\x6f\x64\x65\x2f\x62\x69\x6e\x64\x69\x6e\x67"
  "\x2d\x76\x61\x6c\x75\x65\x17\x73\x63\x6f\x64\x65\x2f\x62\x69\x6e"
  "\x64\x69\x6e\x67\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x13\x73\x63"
  "\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x62\x69\x6e\x64\x69\x6e\x67"
  "\x30\x1a\x6d\x61\x6b\x65\x2d\x62\x69\x74\x2d\x6d\x61\x73\x6b\x2d"
  "\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x49\x18\x6d\x61\x6b"
  "\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x2d\x74\x72\x61\x6e\x73\x66\x6f"
  "\x72\x6d\x65\x72\x13\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72"
  "\x2d\x72\x65\x73\x75\x6c\x74\x11\x74\x72\x61\x6e\x73\x66\x6f\x72"
  "\x6d\x65\x72\x2d\x66\x61\x69\x6c\x1d\x6d\x61\x6b\x65\x2d\x73\x69"
  "\x6d\x70\x6c\x65\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72"
  "\x2d\x74\x65\x73\x74\x4a\x1a\x6d\x61\x6b\x65\x2d\x64\x61\x74\x61"
  "\x62\x61\x73\x65\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72"
  "\x40\x10\x43\x41\x2e\x24\x3e\x25\x2c\x12\x47\x04\x56\x04\x0e\x04"
  "\x53\x06\x52\x04\x51\x04\x50\x04\x4b\x04\x48\x06\x46\x04\x44\x04"
  "\x42\x04\x3f\x04\x3d\x05\x63\x61\x61\x72\x5d\x05\x63\x64\x61\x72"
  "\x5c\x3d\x3b\x05\x63\x61\x64\x72\x5b\x05\x63\x64\x64\x72\x5a\x3b"
  "\x5d\x06\x63\x61\x61\x61\x72\x59\x06\x63\x64\x61\x61\x72\x58\x3d"
  "\x3d\x5b\x06\x63\x61\x61\x64\x72\x57\x06\x63\x64\x61\x64\x72\x56"
  "\x3d\x3b\x5c\x06\x63\x61\x64\x61\x72\x55\x06\x63\x64\x64\x61\x72"
  "\x54\x3b\x3d\x5a\x06\x63\x61\x64\x64\x72\x53\x06\x63\x64\x64\x64"
  "\x72\x52\x3b\x3b\x59\x07\x63\x61\x61\x61\x61\x72\x51\x07\x63\x64"
  "\x61\x61\x61\x72\x50\x3d\x5d\x57\x07\x63\x61\x61\x61\x64\x72\x4f"
  "\x07\x63\x64\x61\x61\x64\x72\x4e\x3d\x5b\x55\x07\x63\x61\x61\x64"
  "\x61\x72\x4d\x07\x63\x64\x61\x64\x61\x72\x4c\x3d\x5c\x53\x07\x63"
  "\x61\x61\x64\x64\x72\x4b\x07\x63\x64\x61\x64\x64\x72\x4a\x3d\x5a"
  "\x58\x07\x63\x61\x64\x61\x61\x72\x49\x07\x63\x64\x64\x61\x61\x72"
  "\x48\x3b\x5d\x56\x07\x63\x61\x64\x61\x64\x72\x5d\x07\x63\x64\x64"
  "\x61\x64\x72\x47\x3b\x5b\x54\x07\x63\x61\x64\x64\x61\x72\x5b\x07"
  "\x63\x64\x64\x64\x61\x72\x46\x3b\x5c\x52\x07\x63\x61\x64\x64\x64"
  "\x72\x5c\x07\x63\x64\x64\x64\x64\x72\x44\x3b\x5a\x51\x3d\x59\x4f"
  "\x3d\x57\x4d\x3d\x55\x4b\x3d\x53\x49\x3d\x58\x5d\x3d\x56\x5b\x3d"
  "\x54\x5c\x3d\x52\x50\x3b\x59\x4e\x3b\x57\x4c\x3b\x55\x4a\x3b\x53"
  "\x48\x3b\x58\x47\x3b\x56\x46\x3b\x54\x44\x3b\x52\x1e\x34\x04\x19"
  "\x04\x12\x45\x39\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x31\x38\x37\x17\x6d\x61\x6b\x65\x2d\x62\x69"
  "\x6e\x64\x69\x6e\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x5d"
  "\x28\x29\x27\x22\x1d\x14\x0f\x11\x15\x65\x61\x72\x6c\x79\x2d\x70"
  "\x61\x74\x74\x65\x72\x6e\x2d\x6c\x6f\x6f\x6b\x75\x70\x09\x11\x65"
  "\x61\x72\x6c\x79\x2d\x70\x61\x72\x73\x65\x2d\x72\x75\x6c\x65\x10"
  "\x65\x61\x72\x6c\x79\x2d\x6d\x61\x6b\x65\x2d\x72\x75\x6c\x65\x10"
  "\x3a\x04\x04\x36\x04\x32\x04\x2d\x04\x2b\x04\x26\x04\x21\x04\x1b"
  "\x04\x15\x04\x0c\x04\x0a\x04\x04\x04\x10\x05\x10\x64\x65\x66\x69"
  "\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x33\x3d\x3b\x0d"
  "\x05\x03\x5d\x02\x15\x2c\x80\x80\x04\x14\x2a\x81\x81\x02\x13\x28"
  "\x81\x81\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81"
  "\x85\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x85"
  "\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02"
  "\x09\x14\x81\x85\x02\x08\x12\x81\x83\x02\x07\x10\x81\x85\x02\x06"
  "\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08"
  "\x81\x85\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x2b\x51";

SCHEME_OBJECT *
pmerly_so_data_2bbd3e40143348d2 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_pmerly_so_data_2bbd3e40143348d2 [0]))), (sizeof (prog_pmerly_so_data_2bbd3e40143348d2)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_26]));
}

DECLARE_COMPILED_DATA_NS ("pmerly.so", pmerly_so_data_2bbd3e40143348d2)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("pmerly.so", "3bc83040e986b0a3")
