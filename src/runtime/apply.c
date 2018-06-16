/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:25-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define LABEL_1_10 15
#define LABEL_1_11 17
#define LABEL_1_12 19
#define LABEL_1_13 21
#define LABEL_1_14 23
#define LABEL_1_15 25
#define ENVIRONMENT_LABEL_1_3 35
#define DEBUGGING_LABEL_1_2 34
#define OBJECT_1_4 33
#define OBJECT_1_3 32
#define OBJECT_1_2 31
#define OBJECT_1_1 30
#define OBJECT_1_0 29
#define EXECUTE_CACHE_1_16 27
#define FREE_REFERENCES_LABEL_1_0 26
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
apply_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd34;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd127;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_1_4);
      goto apply_2_29;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_31;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_33;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_34;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_35;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto label_36;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto label_37;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_1_13);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_1_14);
      goto label_40;

    case 11:
      current_block = (Rpc - LABEL_1_15);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_2_42)
DEFLABEL (apply_2_29)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_46;
  if ((Wrd5.Obj) == (current_block [OBJECT_1_3]))
    goto label_45;

DEFLABEL (label_44)
  goto lambda_0;

DEFLABEL (label_45)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_46)
  if (! ((Wrd6.uLng) == 1))
    goto label_76;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_75)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_74;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_73)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 1)
    goto label_48;
  if (! ((Wrd29.Obj) == (current_block [OBJECT_1_3])))
    goto label_47;
  (Wrd34.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd34.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_47)
  Rsp = (& (Rsp [2]));
  goto label_44;

DEFLABEL (label_48)
  if (! ((Wrd30.uLng) == 1))
    goto label_72;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_71)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_70;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_69)
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 1)
    goto label_50;
  if (! ((Wrd54.Obj) == (current_block [OBJECT_1_3])))
    goto label_49;
  (Wrd59.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd61.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_49)
  Rsp = (& (Rsp [4]));
  goto label_44;

DEFLABEL (label_50)
  if (! ((Wrd55.uLng) == 1))
    goto label_68;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [1]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_67)
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_66;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_65)
  (Wrd81.Obj) = (Rsp [1]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if ((Wrd82.uLng) == 1)
    goto label_52;
  if (! ((Wrd81.Obj) == (current_block [OBJECT_1_3])))
    goto label_51;
  (Wrd86.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd86.Obj);
  (Wrd87.Obj) = (Rsp [0]);
  (Rsp [7]) = (Wrd87.Obj);
  (Wrd88.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [2]);
  (Rsp [6]) = (Wrd89.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_51)
  Rsp = (& (Rsp [6]));
  goto label_44;

DEFLABEL (label_52)
  if (! ((Wrd82.uLng) == 1))
    goto label_64;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [1]);
  (* (--Rsp)) = (Wrd93.Obj);

DEFLABEL (label_63)
  (Wrd103.Obj) = (Rsp [2]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 1))
    goto label_62;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);

DEFLABEL (label_61)
  (Wrd109.Obj) = (Rsp [1]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if ((Wrd110.uLng) == 1)
    goto label_54;
  if (! ((Wrd109.Obj) == (current_block [OBJECT_1_3])))
    goto label_53;
  (Wrd114.Obj) = (Rsp [8]);
  (Rsp [5]) = (Wrd114.Obj);
  (Wrd115.Obj) = (Rsp [4]);
  (Rsp [7]) = (Wrd115.Obj);
  (Wrd116.Obj) = (Rsp [0]);
  (Rsp [9]) = (Wrd116.Obj);
  (Wrd117.Obj) = (Rsp [2]);
  (Rsp [8]) = (Wrd117.Obj);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_53)
  Rsp = (& (Rsp [8]));
  goto label_44;

DEFLABEL (label_54)
  if (! ((Wrd110.uLng) == 1))
    goto label_60;
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd121.Obj) = ((Wrd120.pObj) [1]);
  (* (--Rsp)) = (Wrd121.Obj);

DEFLABEL (label_59)
  (Wrd131.Obj) = (Rsp [2]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd132.uLng) == 1))
    goto label_58;
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd130.Obj) = ((Wrd129.pObj) [0]);
  (* (--Rsp)) = (Wrd130.Obj);

DEFLABEL (label_57)
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if (! ((Wrd138.uLng) == 1))
    goto label_55;
  Rsp = (& (Rsp [10]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_55)
  if (! ((Wrd137.Obj) == (current_block [OBJECT_1_3])))
    goto label_56;
  (Wrd142.Obj) = (Rsp [8]);
  (Rsp [7]) = (Wrd142.Obj);
  (Wrd143.Obj) = (Rsp [4]);
  (Rsp [9]) = (Wrd143.Obj);
  (Wrd144.Obj) = (Rsp [0]);
  (Rsp [11]) = (Wrd144.Obj);
  (Wrd145.Obj) = (Rsp [10]);
  (Wrd146.Obj) = (Rsp [2]);
  (Rsp [10]) = (Wrd146.Obj);
  (Wrd147.Obj) = (Rsp [6]);
  (Rsp [8]) = (Wrd147.Obj);
  (Rsp [6]) = (Wrd145.Obj);
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (label_56)
  Rsp = (& (Rsp [10]));
  goto label_44;

DEFLABEL (label_58)
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (lambda_43)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_1_15);
  (Wrd5.Obj) = (current_block [OBJECT_1_4]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_6 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_9 11
#define LABEL_2_10 13
#define LABEL_2_4 15
#define LABEL_2_11 17
#define LABEL_2_12 19
#define LABEL_2_13 21
#define ENVIRONMENT_LABEL_2_3 30
#define DEBUGGING_LABEL_2_2 29
#define OBJECT_2_3 28
#define OBJECT_2_2 27
#define OBJECT_2_1 26
#define OBJECT_2_0 25
#define EXECUTE_CACHE_2_14 23
#define FREE_REFERENCES_LABEL_2_0 22
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
apply_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd67;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd71;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
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
      goto loop_11;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_2_4);
      goto apply_entity_procedure_13;

    case 7:
      current_block = (Rpc - LABEL_2_11);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_2_12);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_2_13);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_entity_procedure_23)
DEFLABEL (apply_entity_procedure_13)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 1)
    goto label_26;
  (Wrd11.Obj) = (current_block [OBJECT_2_3]);

DEFLABEL (label_25)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_24)
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (label_26)
  if (! ((Wrd9.uLng) == 1))
    goto label_33;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_32)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_28;
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_27;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd11.Obj) = ((Wrd25.pObj) [0]);
  goto label_25;

DEFLABEL (label_27)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_16)
  (Wrd11.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_31;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [1]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_30)
  (Wrd44.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd44.Obj);
  goto loop_11;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_9);

DEFLABEL (label_29)
  (Wrd11.Obj) = (Rsp [3]);
  goto label_25;

DEFLABEL (label_31)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_15)
  (Wrd13.Obj) = Rvl;
  goto label_32;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (Wrd11.Obj) = Rvl;
  goto label_24;

DEFLABEL (loop_22)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_2_5);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_41;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_40)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd55.uLng) == 1)
    goto label_37;
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_36;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [0]);

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd56.Obj);
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 1)
    goto label_34;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_34)
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  ((Wrd67.pObj) [1]) = (Wrd56.Obj);
  Rsp = (& (Rsp [3]));
  goto label_29;

DEFLABEL (label_36)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_19)
  (Wrd56.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd71.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd71.Obj);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_39;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd72.Obj) = ((Wrd74.pObj) [1]);

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd72.Obj);
  goto loop_11;

DEFLABEL (label_39)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_20)
  (Wrd72.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_18)
  (Wrd46.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_5 7
#define LABEL_3_9 9
#define LABEL_3_7 11
#define LABEL_3_12 13
#define LABEL_3_10 15
#define LABEL_3_14 17
#define LABEL_3_11 19
#define ENVIRONMENT_LABEL_3_3 38
#define DEBUGGING_LABEL_3_2 37
#define OBJECT_3_3 36
#define OBJECT_3_2 35
#define OBJECT_3_1 34
#define OBJECT_3_0 33
#define EXECUTE_CACHE_3_15 21
#define EXECUTE_CACHE_3_13 23
#define EXECUTE_CACHE_3_8 25
#define FREE_REFERENCE_3_2 28
#define FREE_REFERENCE_3_1 29
#define FREE_REFERENCE_3_0 30
#define FREE_ASSIGNMENT_3_0 32
#define FREE_REFERENCES_LABEL_3_0 20
#define NUMBER_OF_LINKER_SECTIONS_3_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
apply_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_3_4);
      goto initialize_packageB_5;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_3_10);
      goto lambda_1;

    case 7:
      current_block = (Rpc - LABEL_3_14);
      goto label_10;

    case 8:
      current_block = (Rpc - LABEL_3_11);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_12)
DEFLABEL (initialize_packageB_5)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_21;
  Wrd8 = Wrd12;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (Wrd9.Obj) = (* (Rsp++));
  (Wrd16.Obj) = (MAKE_OBJECT (0, 4));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.pObj) = (& (Rhp [-5]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_19;
  Wrd21 = Wrd25;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_3_1]);
  goto pop_return;

DEFLABEL (label_17)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_8)
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_12])), (Wrd22.pObj));

DEFLABEL (label_9)
  (Wrd21.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_20;

DEFLABEL (lambda_13)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_3_10);
  (Wrd5.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_23;
  Wrd7 = Wrd11;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_14])), (Wrd8.pObj));

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_22;

DEFLABEL (lambda_14)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_3_11);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
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
apply_so_5915020a5cea8f68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	3,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 3)
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

static const struct liarc_code_S arr_decl_apply_so_5915020a5cea8f68 [3] =
  {
    { "apply_so_code_1", 12, apply_so_code_1 },
    { "apply_so_code_2", 10, apply_so_code_2 },
    { "apply_so_code_3", 9, apply_so_code_3 }
  };

int
decl_apply_so_5915020a5cea8f68 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_apply_so_5915020a5cea8f68);
  return (0);
}

DECLARE_COMPILED_CODE ("apply.so", 3, decl_apply_so_5915020a5cea8f68, apply_so_5915020a5cea8f68)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_apply_so_data_5915020a5cea8f68 [673] =
  "\x2c\x07\x9c\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x08\xc2\xc1"
  "\xb9\xc1\xba\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbb\x1d\xb0\x82\x88\x08\xc2\xb1\xb2\x28\x0d\xba\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x83\x88\x81\x06\x88\x08\x1d\x0d"
  "\x0d\xb8\x25\xb2\x0d\xbc\xb0\x24\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xb8\x9a\xbd\x88\xb5\xb0\x2a\xb1\x2a\xb3\x2a\x9a"
  "\x0d\xb4\xb2\x9a\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x54\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x61\x70\x70\x6c\x79"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x1e\x61\x70\x70\x6c\x79"
  "\x3a\x20\x49\x6d\x70\x72\x6f\x70\x65\x72\x20\x61\x72\x67\x75\x6d"
  "\x65\x6e\x74\x20\x6c\x69\x73\x74\x06\x61\x70\x70\x6c\x79\x04\x63"
  "\x61\x72\x04\x63\x64\x72\x04\x06\x65\x72\x72\x6f\x72\x02\x0f\x1a"
  "\x81\x85\x02\x0e\x18\x81\x97\x02\x0d\x16\x81\x95\x02\x0c\x14\x81"
  "\x93\x02\x0b\x12\x81\x91\x02\x0a\x10\x81\x8f\x02\x09\x0e\x81\x8d"
  "\x02\x08\x0c\x81\x8b\x02\x07\x0a\x81\x89\x02\x06\x08\x81\x87\x02"
  "\x05\x06\x81\x85\x02\x04\x04\x84\x06\x19\x24\x02\x09\x73\x65\x74"
  "\x2d\x63\x64\x72\x21\x04\x08\x61\x70\x70\x6c\x79\x2d\x32\x02\x19"
  "\x16\x81\x89\x02\x18\x14\x81\x8b\x02\x17\x12\x81\x89\x02\x16\x10"
  "\xfd\x07\x15\x0e\x81\x87\x02\x14\x0c\x81\x89\x02\x13\x0a\x81\x85"
  "\x02\x12\x08\x81\x85\x02\x11\x06\x81\x85\x02\x10\x04\x81\x85\x02"
  "\x15\x1f\x02\x02\x15\x61\x72\x69\x74\x79\x2d\x64\x69\x73\x70\x61"
  "\x74\x63\x68\x65\x72\x2d\x74\x61\x67\x06\x61\x70\x70\x6c\x79\x02"
  "\x17\x61\x70\x70\x6c\x79\x2d\x65\x6e\x74\x69\x74\x79\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x04\x03\x13\x66\x69\x78\x65\x64\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x73\x2d\x69\x74\x65\x6d\x04\x0c\x6d\x61"
  "\x6b\x65\x2d\x65\x6e\x74\x69\x74\x79\x05\x20\x65\x72\x72\x6f\x72"
  "\x3a\x77\x72\x6f\x6e\x67\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x6f\x66"
  "\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x04\x22\x14\x83\x04\x21"
  "\x12\x81\x85\x02\x20\x10\x82\x02\x1f\x0e\x81\x85\x02\x1e\x0c\x81"
  "\x85\x02\x1d\x0a\x81\x81\x02\x1c\x08\x81\x81\x02\x1b\x06\x81\x83"
  "\x02\x1a\x04\x82\x02\x13\x27\x04\x10\x04\x14\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02"
  "\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07"
  "\x11";

SCHEME_OBJECT *
apply_so_data_5915020a5cea8f68 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_apply_so_data_5915020a5cea8f68 [0]))), (sizeof (prog_apply_so_data_5915020a5cea8f68)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("apply.so", apply_so_data_5915020a5cea8f68)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("apply.so", "8718df96ab445636")
