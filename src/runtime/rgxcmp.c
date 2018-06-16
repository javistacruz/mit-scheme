/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:51-07 by Liar version 4.118. */

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
#define LABEL_1_17 27
#define LABEL_1_19 29
#define LABEL_1_21 31
#define LABEL_1_22 33
#define LABEL_1_20 35
#define LABEL_1_24 37
#define LABEL_1_23 39
#define ENVIRONMENT_LABEL_1_3 57
#define DEBUGGING_LABEL_1_2 56
#define OBJECT_1_8 55
#define OBJECT_1_7 54
#define OBJECT_1_6 53
#define OBJECT_1_5 52
#define OBJECT_1_4 51
#define OBJECT_1_3 50
#define OBJECT_1_2 49
#define OBJECT_1_1 48
#define OBJECT_1_0 47
#define EXECUTE_CACHE_1_25 41
#define EXECUTE_CACHE_1_18 43
#define EXECUTE_CACHE_1_16 45
#define FREE_REFERENCES_LABEL_1_0 40
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd34;
  machine_word Wrd11;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_31;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_33;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_34;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_35;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_36;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_37;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto label_39;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto label_40;

    case 9:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_29;

    case 10:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_23;

    case 11:
      current_block = (Rpc - LABEL_1_15);
      goto lambda_22;

    case 12:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_1_19);
      goto loop_19;

    case 14:
      current_block = (Rpc - LABEL_1_21);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_1_22);
      goto label_42;

    case 16:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_18;

    case 17:
      current_block = (Rpc - LABEL_1_24);
      goto label_43;

    case 18:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_45)
DEFLABEL (lambda_31)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_63;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_62)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_61;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_60)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_59;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_58)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_57;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_56)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_55;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_54)
  (Rsp [2]) = (Wrd37.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_53;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_52)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_51;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd53.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_50)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_49;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd60.Obj) = ((Wrd61.pObj) [0]);

DEFLABEL (label_48)
  (Rsp [1]) = (Wrd60.Obj);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (Wrd9.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_1_5]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.pObj) = (& (Rsp [3]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd33.Obj);
  goto loop_19;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (Wrd10.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_40)
  (Wrd60.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_39)
  (Wrd53.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_38)
  (Wrd44.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_37)
  (Wrd37.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_36)
  (Wrd30.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_35)
  (Wrd21.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_33)
  (Wrd5.Obj) = Rvl;
  goto label_62;

DEFLABEL (lambda_46)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_1_15);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_47)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_1_19);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_64;
  Rvl = (current_block [OBJECT_1_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_70;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_69)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_68;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd31.Lng) = ((Wrd33.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd31.Lng)))
    goto label_68;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_67)
  goto loop_19;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_66;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_65)
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_23);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_69;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define TAG_2_8 2
#define ENVIRONMENT_LABEL_2_3 14
#define DEBUGGING_LABEL_2_2 13
#define EXECUTE_CACHE_2_9 9
#define EXECUTE_CACHE_2_6 11
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_2_4);
      goto cached_procedure_3;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cached_procedure_6)
DEFLABEL (cached_procedure_3)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_2_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_10 9
#define LABEL_3_11 11
#define LABEL_3_8 13
#define LABEL_3_12 15
#define ENVIRONMENT_LABEL_3_3 27
#define DEBUGGING_LABEL_3_2 26
#define OBJECT_3_4 25
#define OBJECT_3_3 24
#define OBJECT_3_2 23
#define OBJECT_3_1 22
#define OBJECT_3_0 21
#define EXECUTE_CACHE_3_9 17
#define EXECUTE_CACHE_3_6 19
#define FREE_REFERENCES_LABEL_3_0 16
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd38;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_3_4);
      goto make_cache_13;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto do_loop_8;

    case 3:
      current_block = (Rpc - LABEL_3_10);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_3_11);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_3_12);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_cache_19)
DEFLABEL (make_cache_13)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  (* (--Rsp)) = Rvl;
  goto do_loop_8;

DEFLABEL (do_loop_20)
DEFLABEL (do_loop_8)
  INTERRUPT_CHECK (26, LABEL_3_7);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_3_0])))
    goto label_23;
  Rsp = (& (Rsp [1]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_22;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [1]) = (Wrd13.Obj);

DEFLABEL (label_21)
  (Wrd10.Obj) = (current_block [OBJECT_3_4]);
  (Wrd11.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_17)
  goto label_21;

DEFLABEL (label_23)
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_27;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  ((Wrd26.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_26)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_25;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_24)
  (Rsp [0]) = (Wrd16.Obj);
  goto do_loop_8;

DEFLABEL (label_25)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_15)
  (Wrd16.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_16)
  goto label_26;

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
#define LABEL_4_11 17
#define LABEL_4_12 19
#define LABEL_4_13 21
#define LABEL_4_14 23
#define LABEL_4_19 25
#define LABEL_4_18 27
#define LABEL_4_15 29
#define TAG_4_16 13
#define LABEL_4_23 31
#define LABEL_4_24 33
#define LABEL_4_25 35
#define LABEL_4_20 37
#define LABEL_4_21 39
#define TAG_4_22 18
#define LABEL_4_26 41
#define LABEL_4_27 43
#define LABEL_4_28 45
#define LABEL_4_29 47
#define LABEL_4_30 49
#define ENVIRONMENT_LABEL_4_3 59
#define DEBUGGING_LABEL_4_2 58
#define OBJECT_4_4 57
#define OBJECT_4_3 56
#define OBJECT_4_2 55
#define OBJECT_4_1 54
#define OBJECT_4_0 53
#define EXECUTE_CACHE_4_17 51
#define FREE_REFERENCES_LABEL_4_0 50
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd62;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd76;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd91;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd28;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd79;
  machine_word Wrd82;
  machine_word Wrd74;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd87;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd84;
  machine_word Wrd69;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_4_4);
      goto cache_result_33;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_35;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_36;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_27;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto loop_29;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto label_37;

    case 6:
      current_block = (Rpc - LABEL_4_10);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_4_11);
      goto label_39;

    case 8:
      current_block = (Rpc - LABEL_4_12);
      goto label_41;

    case 9:
      current_block = (Rpc - LABEL_4_13);
      goto label_42;

    case 10:
      current_block = (Rpc - LABEL_4_14);
      goto label_43;

    case 11:
      current_block = (Rpc - LABEL_4_19);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_4_15);
      goto lambda_55;

    case 14:
      current_block = (Rpc - LABEL_4_23);
      goto label_44;

    case 15:
      current_block = (Rpc - LABEL_4_24);
      goto label_46;

    case 16:
      current_block = (Rpc - LABEL_4_25);
      goto label_45;

    case 17:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_19;

    case 18:
      current_block = (Rpc - LABEL_4_21);
      goto lambda_56;

    case 19:
      current_block = (Rpc - LABEL_4_26);
      goto label_47;

    case 20:
      current_block = (Rpc - LABEL_4_27);
      goto label_51;

    case 21:
      current_block = (Rpc - LABEL_4_28);
      goto label_48;

    case 22:
      current_block = (Rpc - LABEL_4_29);
      goto label_50;

    case 23:
      current_block = (Rpc - LABEL_4_30);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cache_result_53)
DEFLABEL (cache_result_33)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_60;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_59)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_58;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_57)
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto loop_29;

DEFLABEL (label_58)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (loop_54)
DEFLABEL (loop_29)
  INTERRUPT_CHECK (26, LABEL_4_8);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_79;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_78)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_77;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_76)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_75;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_74)
  (Wrd30.Obj) = (Rsp [7]);
  if ((Wrd30.Obj) == (Wrd23.Obj))
    goto label_65;

DEFLABEL (label_64)
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.Obj) = (Rsp [1]);
  if (! ((Wrd31.Obj) == (Wrd32.Obj)))
    goto label_61;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd49.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_21])));
  Rhp += 6;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd20 = Wrd9;
  (Wrd21.Obj) = (Rsp [10]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [9]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd20.pObj) [5]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [6]) = (Wrd13.Obj);
  ((Wrd20.pObj) [7]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_20);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_61)
  (Rsp [2]) = (Wrd32.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_63;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_62)
  (Rsp [1]) = (Wrd34.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_29;

DEFLABEL (label_63)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_40)
  (Wrd34.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_73;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [0]);

DEFLABEL (label_72)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_71;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd59.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_70)
  (Wrd66.Obj) = (Rsp [8]);
  if (! ((Wrd66.Obj) == (Wrd59.Obj)))
    goto label_64;
  (Wrd67.Obj) = (Rsp [4]);
  (Wrd68.Obj) = (Rsp [1]);
  if ((Wrd67.Obj) == (Wrd68.Obj))
    goto label_68;
  (Wrd69.Obj) = (Rsp [3]);
  if ((Wrd69.Obj) == (Wrd68.Obj))
    goto label_67;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd75.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_15])));
  Rhp += 4;
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd75.pObj)));
  Wrd82 = Wrd75;
  ((Wrd82.pObj) [2]) = (Wrd67.Obj);
  ((Wrd82.pObj) [3]) = (Wrd69.Obj);
  (Wrd79.Obj) = (Rsp [3]);
  ((Wrd82.pObj) [4]) = (Wrd79.Obj);
  ((Wrd82.pObj) [5]) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_4_7);

DEFLABEL (label_67)
  (Wrd84.Obj) = (Rsp [0]);
  (Rsp [8]) = (Wrd84.Obj);
  Rsp = (& (Rsp [8]));
  (Wrd89.Obj) = (Rsp [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_66;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  Rvl = ((Wrd87.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_66)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_68)
  (Wrd95.Obj) = (Rsp [5]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd96.uLng) == 1))
    goto label_69;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd94.Obj) = (Rsp [2]);
  ((Wrd93.pObj) [1]) = (Wrd94.Obj);
  goto label_67;

DEFLABEL (label_69)
  (Wrd98.Obj) = (Rsp [2]);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_43)
  goto label_67;

DEFLABEL (label_71)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_42)
  (Wrd59.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_41)
  (Wrd50.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_39)
  (Wrd23.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_38)
  (Wrd14.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (lambda_55)
  CLOSURE_HEADER (LABEL_4_15);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_86;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_85)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [4]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_84;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  ((Wrd56.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_83)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [5]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_82;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [3]);
  ((Wrd36.pObj) [1]) = (Wrd39.Obj);

DEFLABEL (label_81)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = ((Wrd21.pObj) [5]);
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_80;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  ((Wrd28.pObj) [1]) = (Wrd23.Obj);
  Rvl = (current_block [OBJECT_4_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_80)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_82)
  (Wrd47.Obj) = ((Wrd41.pObj) [3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_45)
  goto label_81;

DEFLABEL (label_84)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_46)
  goto label_83;

DEFLABEL (label_86)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_44)
  (Wrd5.Obj) = Rvl;
  goto label_85;

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_4_21);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [6]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_97;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_96)
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_95;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [3]);
  ((Wrd80.pObj) [0]) = (Wrd83.Obj);

DEFLABEL (label_94)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [6]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_93;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd20.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_92)
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_91;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [2]);
  ((Wrd68.pObj) [1]) = (Wrd71.Obj);

DEFLABEL (label_90)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [6]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_89;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd54.Obj) = ((Wrd56.pObj) [7]);
  ((Wrd51.pObj) [1]) = (Wrd54.Obj);

DEFLABEL (label_88)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [4]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = ((Wrd36.pObj) [5]);
  (Rsp [1]) = (Wrd38.Obj);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_87;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  ((Wrd43.pObj) [1]) = (Wrd38.Obj);
  Rvl = (current_block [OBJECT_4_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_87)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_89)
  (Wrd62.Obj) = ((Wrd56.pObj) [7]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_49)
  goto label_88;

DEFLABEL (label_91)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd74.Obj) = ((Wrd76.pObj) [2]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_29]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_50)
  goto label_90;

DEFLABEL (label_93)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_48)
  (Wrd20.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd86.Obj) = ((Wrd88.pObj) [3]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 2);

DEFLABEL (label_51)
  goto label_94;

DEFLABEL (label_97)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_47)
  (Wrd5.Obj) = Rvl;
  goto label_96;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_5 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define ENVIRONMENT_LABEL_5_3 24
#define DEBUGGING_LABEL_5_2 23
#define OBJECT_5_5 22
#define OBJECT_5_4 21
#define OBJECT_5_3 20
#define OBJECT_5_2 19
#define OBJECT_5_1 18
#define OBJECT_5_0 17
#define EXECUTE_CACHE_5_10 13
#define EXECUTE_CACHE_5_9 15
#define FREE_REFERENCES_LABEL_5_0 12
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
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
      current_block = (Rpc - LABEL_5_4);
      goto re_compile_char_5;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (re_compile_char_10)
DEFLABEL (re_compile_char_5)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (Wrd43.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd43.uLng) == 30))
    goto label_16;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd41.Lng))))
    goto label_16;
  (Wrd35.Obj) = (current_block [OBJECT_5_2]);
  ((Wrd39.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd35.uLng));

DEFLABEL (label_15)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (Wrd12.Obj) = Rvl;

DEFLABEL (label_13)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 30))
    goto label_12;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd24.Lng))))
    goto label_12;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd18.uLng) == 2))
    goto label_12;
  ((Wrd22.pChr) [(1 + (ADDRESS_UNITS_PER_OBJECT * 2))]) = ((char) (CHAR_TO_ASCII (Wrd12.Obj)));

DEFLABEL (label_11)
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (label_12)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_5_2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_5]), 3);

DEFLABEL (label_7)
  goto label_11;

DEFLABEL (label_14)
  (Wrd12.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  goto label_13;

DEFLABEL (label_16)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.Obj) = (current_block [OBJECT_5_3]);
  (Wrd46.Obj) = (current_block [OBJECT_5_2]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 3);

DEFLABEL (label_8)
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_5 3
#define LABEL_6_4 5
#define LABEL_6_6 7
#define LABEL_6_8 9
#define LABEL_6_9 11
#define LABEL_6_14 13
#define LABEL_6_15 15
#define LABEL_6_16 17
#define LABEL_6_17 19
#define LABEL_6_18 21
#define LABEL_6_19 23
#define LABEL_6_22 25
#define LABEL_6_23 27
#define LABEL_6_12 29
#define LABEL_6_24 31
#define LABEL_6_20 33
#define LABEL_6_25 35
#define ENVIRONMENT_LABEL_6_3 58
#define DEBUGGING_LABEL_6_2 57
#define OBJECT_6_7 56
#define OBJECT_6_6 55
#define OBJECT_6_5 54
#define OBJECT_6_4 53
#define OBJECT_6_3 52
#define OBJECT_6_2 51
#define OBJECT_6_1 50
#define OBJECT_6_0 49
#define EXECUTE_CACHE_6_26 37
#define EXECUTE_CACHE_6_21 39
#define EXECUTE_CACHE_6_13 41
#define EXECUTE_CACHE_6_11 43
#define EXECUTE_CACHE_6_10 45
#define EXECUTE_CACHE_6_7 47
#define FREE_REFERENCES_LABEL_6_0 36
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd112;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd75;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd139;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd127;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd167;
  machine_word Wrd187;
  machine_word Wrd182;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd173;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd163;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd162;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd140;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd151;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd209;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd192;
  machine_word Wrd189;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd197;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_6_4);
      goto lambda_41;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_43;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_13;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_6_14);
      goto loop_36;

    case 6:
      current_block = (Rpc - LABEL_6_15);
      goto label_50;

    case 7:
      current_block = (Rpc - LABEL_6_16);
      goto label_48;

    case 8:
      current_block = (Rpc - LABEL_6_17);
      goto label_49;

    case 9:
      current_block = (Rpc - LABEL_6_18);
      goto label_47;

    case 10:
      current_block = (Rpc - LABEL_6_19);
      goto label_46;

    case 11:
      current_block = (Rpc - LABEL_6_22);
      goto label_45;

    case 12:
      current_block = (Rpc - LABEL_6_23);
      goto label_44;

    case 13:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_6_24);
      goto continuation_22;

    case 15:
      current_block = (Rpc - LABEL_6_20);
      goto continuation_31;

    case 16:
      current_block = (Rpc - LABEL_6_25);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_52)
DEFLABEL (lambda_41)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_61)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 30))
    goto label_60;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_59)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! ((Wrd25.Lng) == 0))
    goto label_54;
  (Wrd34.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd34.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (label_54)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (* (--Rsp)) = Rvl;
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd6.Lng) == 0)
    goto label_58;
  if (Rvl == (current_block [OBJECT_6_3]))
    goto label_56;
  (Wrd15.Lng) = ((Wrd6.Lng) + 2L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);
  goto label_55;

DEFLABEL (label_56)
  (Wrd21.Obj) = (current_block [OBJECT_6_6]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_55)
DEFLABEL (label_57)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_26]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_25);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = ((Wrd9.Lng) * 257L);
  (Wrd11.Obj) = (* (Rsp++));
  Wrd14 = Wrd10;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd16.Lng) = ((Wrd14.Lng) + (Wrd15.Lng));
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_36;

DEFLABEL (label_58)
  (Wrd23.Obj) = (current_block [OBJECT_6_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd23.Obj);
  goto label_57;

DEFLABEL (label_60)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd12.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_61;

DEFLABEL (loop_53)
DEFLABEL (loop_36)
  INTERRUPT_CHECK (26, LABEL_6_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_6_3]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_72;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 256L)
    goto label_67;
  (Wrd67.Obj) = (Rsp [3]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 30))
    goto label_66;
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_66;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [1]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) (Wrd62.Lng)) < ((unsigned long) (Wrd66.Lng))))
    goto label_66;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd59.Obj));
  (Wrd57.pChr) = (& ((Wrd64.pChr) [(Wrd54.Lng)]));
  (Wrd58.Obj) = (current_block [OBJECT_6_6]);
  ((Wrd57.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd58.uLng));

DEFLABEL (label_65)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (Wrd45.Obj) = (Rsp [3]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 30))
    goto label_64;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_64;
  Wrd40 = Wrd14;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) (Wrd40.Lng)) < ((unsigned long) (Wrd44.Lng))))
    goto label_64;
  (Wrd34.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd37.pChr) = (& ((Wrd42.pChr) [(Wrd34.Lng)]));
  (Wrd38.Obj) = (current_block [OBJECT_6_1]);
  ((Wrd37.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd38.uLng));

DEFLABEL (label_63)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd19.Lng) = ((Wrd16.Lng) + 255L);
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd28.Lng) = ((Wrd25.Lng) + 2L);
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd33.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_21]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_6_24);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) - 255L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd17.Lng) = ((Wrd14.Lng) + 257L);
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_36;

DEFLABEL (label_64)
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd49.Obj) = (current_block [OBJECT_6_1]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 3);

DEFLABEL (label_44)
  goto label_63;

DEFLABEL (label_66)
  (Wrd69.Obj) = (Rsp [3]);
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.Obj) = (current_block [OBJECT_6_6]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 3);

DEFLABEL (label_45)
  goto label_65;

DEFLABEL (label_67)
  (Wrd132.Obj) = (Rsp [3]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if (! ((Wrd133.uLng) == 30))
    goto label_71;
  (Wrd124.Obj) = (Rsp [2]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd125.uLng) == 26))
    goto label_71;
  (Wrd127.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd132.Obj));
  (Wrd130.Obj) = ((Wrd129.pObj) [1]);
  (Wrd131.Lng) = (FIXNUM_TO_LONG (Wrd130.Obj));
  if (! (((unsigned long) (Wrd127.Lng)) < ((unsigned long) (Wrd131.Lng))))
    goto label_71;
  (Wrd119.uLng) = (OBJECT_DATUM (Wrd124.Obj));
  (Wrd122.pChr) = (& ((Wrd129.pChr) [(Wrd119.Lng)]));
  (Wrd123.Obj) = (current_block [OBJECT_6_6]);
  ((Wrd122.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd123.uLng));

DEFLABEL (label_70)
  (Wrd76.Obj) = (Rsp [2]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  (Wrd78.Lng) = ((Wrd77.Lng) + 1L);
  (Wrd75.Obj) = (LONG_TO_FIXNUM (Wrd78.Lng));
  (Wrd110.Obj) = (Rsp [3]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 30))
    goto label_69;
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd104.uLng) == 26))
    goto label_69;
  Wrd105 = Wrd78;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [1]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) (Wrd105.Lng)) < ((unsigned long) (Wrd109.Lng))))
    goto label_69;
  (Wrd102.Obj) = (Rsp [0]);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd103.uLng) == 26))
    goto label_69;
  (Wrd97.uLng) = (OBJECT_DATUM (Wrd75.Obj));
  (Wrd100.pChr) = (& ((Wrd107.pChr) [(Wrd97.Lng)]));
  ((Wrd100.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd102.uLng));

DEFLABEL (label_68)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [3]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  (Wrd86.Lng) = ((Wrd83.Lng) + 2L);
  (Wrd87.Obj) = (LONG_TO_FIXNUM (Wrd86.Lng));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd88.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [4]);
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  (Wrd91.Obj) = (Rsp [3]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  (Wrd93.Lng) = ((Wrd90.Lng) + (Wrd92.Lng));
  (Wrd94.Obj) = (LONG_TO_FIXNUM (Wrd93.Lng));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd96.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd96.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_21]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_6_20);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [6]) = (Wrd5.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (label_69)
  (Wrd112.Obj) = (Rsp [3]);
  (Wrd114.Obj) = (Rsp [0]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 3);

DEFLABEL (label_46)
  goto label_68;

DEFLABEL (label_71)
  (Wrd134.Obj) = (Rsp [3]);
  (Wrd135.Obj) = (Rsp [2]);
  (Wrd136.Obj) = (current_block [OBJECT_6_6]);
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 3);

DEFLABEL (label_47)
  goto label_70;

DEFLABEL (label_72)
  (Wrd202.Obj) = (Rsp [3]);
  (Wrd203.uLng) = (OBJECT_TYPE (Wrd202.Obj));
  if (! ((Wrd203.uLng) == 30))
    goto label_78;
  (Wrd194.Obj) = (Rsp [2]);
  (Wrd195.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if (! ((Wrd195.uLng) == 26))
    goto label_78;
  (Wrd197.Lng) = (FIXNUM_TO_LONG (Wrd194.Obj));
  (Wrd199.pObj) = (OBJECT_ADDRESS (Wrd202.Obj));
  (Wrd200.Obj) = ((Wrd199.pObj) [1]);
  (Wrd201.Lng) = (FIXNUM_TO_LONG (Wrd200.Obj));
  if (! (((unsigned long) (Wrd197.Lng)) < ((unsigned long) (Wrd201.Lng))))
    goto label_78;
  (Wrd189.uLng) = (OBJECT_DATUM (Wrd194.Obj));
  (Wrd192.pChr) = (& ((Wrd199.pChr) [(Wrd189.Lng)]));
  ((Wrd192.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd6.uLng));

DEFLABEL (label_77)
  (Wrd156.Obj) = (Rsp [5]);
  (Wrd157.uLng) = (OBJECT_TYPE (Wrd156.Obj));
  if (! ((Wrd157.uLng) == 30))
    goto label_76;
  (Wrd148.Obj) = (Rsp [1]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if (! ((Wrd149.uLng) == 26))
    goto label_76;
  (Wrd151.Lng) = (FIXNUM_TO_LONG (Wrd148.Obj));
  (Wrd153.pObj) = (OBJECT_ADDRESS (Wrd156.Obj));
  (Wrd154.Obj) = ((Wrd153.pObj) [1]);
  (Wrd155.Lng) = (FIXNUM_TO_LONG (Wrd154.Obj));
  if (! (((unsigned long) (Wrd151.Lng)) < ((unsigned long) (Wrd155.Lng))))
    goto label_76;
  (Wrd143.uLng) = (OBJECT_DATUM (Wrd148.Obj));
  (Wrd146.pChr) = (& ((Wrd153.pChr) [(Wrd143.Lng)]));
  (Wrd147.uLng) = ((unsigned long) (((unsigned char *) (Wrd146.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd140.Obj) = (MAKE_OBJECT (26, (Wrd147.uLng)));

DEFLABEL (label_75)
  (Wrd164.Obj) = (Rsp [2]);
  (Wrd165.Lng) = (FIXNUM_TO_LONG (Wrd164.Obj));
  (Wrd166.Lng) = ((Wrd165.Lng) + 1L);
  (Wrd163.Obj) = (LONG_TO_FIXNUM (Wrd166.Lng));
  (Wrd180.Obj) = (Rsp [3]);
  (Wrd181.uLng) = (OBJECT_TYPE (Wrd180.Obj));
  if (! ((Wrd181.uLng) == 30))
    goto label_74;
  (Wrd174.uLng) = (OBJECT_TYPE (Wrd163.Obj));
  if (! ((Wrd174.uLng) == 26))
    goto label_74;
  Wrd175 = Wrd166;
  (Wrd177.pObj) = (OBJECT_ADDRESS (Wrd180.Obj));
  (Wrd178.Obj) = ((Wrd177.pObj) [1]);
  (Wrd179.Lng) = (FIXNUM_TO_LONG (Wrd178.Obj));
  if (! (((unsigned long) (Wrd175.Lng)) < ((unsigned long) (Wrd179.Lng))))
    goto label_74;
  (Wrd173.uLng) = (OBJECT_TYPE (Wrd140.Obj));
  if (! ((Wrd173.uLng) == 26))
    goto label_74;
  (Wrd169.uLng) = (OBJECT_DATUM (Wrd163.Obj));
  (Wrd172.pChr) = (& ((Wrd177.pChr) [(Wrd169.Lng)]));
  ((Wrd172.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd140.uLng));

DEFLABEL (label_73)
  (Wrd167.Obj) = (Rsp [3]);
  (Rsp [6]) = (Wrd167.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (label_74)
  (Wrd182.Obj) = (Rsp [3]);
  (Wrd187.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd187.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  (* (--Rsp)) = (Wrd182.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 3);

DEFLABEL (label_49)
  goto label_73;

DEFLABEL (label_76)
  (Wrd158.Obj) = (Rsp [5]);
  (Wrd159.Obj) = (Rsp [1]);
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd158.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 2);

DEFLABEL (label_48)
  (Wrd140.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd204.Obj) = (Rsp [3]);
  (Wrd205.Obj) = (Rsp [2]);
  (Wrd206.Obj) = (current_block [OBJECT_6_3]);
  (Wrd209.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd209.Obj);
  (* (--Rsp)) = (Wrd206.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  (* (--Rsp)) = (Wrd204.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 3);

DEFLABEL (label_50)
  goto label_77;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_8 9
#define LABEL_7_7 11
#define LABEL_7_10 13
#define LABEL_7_12 15
#define LABEL_7_13 17
#define LABEL_7_14 19
#define LABEL_7_11 21
#define LABEL_7_15 23
#define LABEL_7_16 25
#define LABEL_7_18 27
#define LABEL_7_17 29
#define LABEL_7_20 31
#define LABEL_7_21 33
#define LABEL_7_22 35
#define LABEL_7_23 37
#define LABEL_7_24 39
#define LABEL_7_25 41
#define LABEL_7_26 43
#define LABEL_7_27 45
#define LABEL_7_28 47
#define ENVIRONMENT_LABEL_7_3 63
#define DEBUGGING_LABEL_7_2 62
#define OBJECT_7_6 61
#define OBJECT_7_5 60
#define OBJECT_7_4 59
#define OBJECT_7_3 58
#define OBJECT_7_2 57
#define OBJECT_7_1 56
#define OBJECT_7_0 55
#define EXECUTE_CACHE_7_19 49
#define EXECUTE_CACHE_7_9 51
#define FREE_REFERENCE_7_0 54
#define FREE_REFERENCES_LABEL_7_0 48
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd82;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd110;
  machine_word Wrd105;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd96;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd58;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_7_4);
      goto re_quote_string_31;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_33;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto label_34;

    case 4:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_7_10);
      goto label_37;

    case 6:
      current_block = (Rpc - LABEL_7_12);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_7_13);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_7_14);
      goto label_36;

    case 9:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_7_15);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_7_16);
      goto loop_26;

    case 12:
      current_block = (Rpc - LABEL_7_18);
      goto label_39;

    case 13:
      current_block = (Rpc - LABEL_7_17);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_7_20);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_7_21);
      goto label_40;

    case 16:
      current_block = (Rpc - LABEL_7_22);
      goto label_41;

    case 17:
      current_block = (Rpc - LABEL_7_23);
      goto label_47;

    case 18:
      current_block = (Rpc - LABEL_7_24);
      goto label_42;

    case 19:
      current_block = (Rpc - LABEL_7_25);
      goto label_43;

    case 20:
      current_block = (Rpc - LABEL_7_26);
      goto label_46;

    case 21:
      current_block = (Rpc - LABEL_7_27);
      goto label_44;

    case 22:
      current_block = (Rpc - LABEL_7_28);
      goto label_45;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (re_quote_string_49)
DEFLABEL (re_quote_string_31)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_53;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_52)
  (Wrd16.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_7;

DEFLABEL (label_53)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (loop_50)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_7_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_65;
  Wrd8 = Wrd12;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_57;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_57;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_56)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_55;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_55;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));

DEFLABEL (label_54)
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_7;

DEFLABEL (label_55)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_36)
  (Wrd21.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_35)
  (Wrd11.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd29.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_63;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! ((Wrd58.Lng) == 0))
    goto label_60;

DEFLABEL (label_59)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_62;
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_62;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd49.Lng) = ((Wrd51.Lng) + (Wrd53.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd49.Lng)))
    goto label_62;
  (Wrd54.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_61)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  goto loop_26;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_7_15);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_63)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  goto label_59;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_8])), (Wrd9.pObj));

DEFLABEL (label_34)
  (Wrd8.Obj) = Rvl;
  goto label_64;

DEFLABEL (loop_51)
DEFLABEL (loop_26)
  INTERRUPT_CHECK (26, LABEL_7_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_84;
  Wrd8 = Wrd12;

DEFLABEL (label_83)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7_17);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_66;
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (Rsp [3]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (label_66)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_20);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_82;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_82;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) - (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_82;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_81)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_80;
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_80;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd28.Lng) = ((Wrd30.Lng) + (Wrd31.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_80;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_79)
  (Wrd126.Obj) = (Rsp [5]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 30))
    goto label_78;
  (Wrd118.Obj) = (Rsp [0]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 26))
    goto label_78;
  (Wrd121.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd124.Obj) = ((Wrd123.pObj) [1]);
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  if (! (((unsigned long) (Wrd121.Lng)) < ((unsigned long) (Wrd125.Lng))))
    goto label_78;
  (Wrd112.uLng) = (OBJECT_DATUM (Wrd118.Obj));
  (Wrd115.pChr) = (& ((Wrd123.pChr) [(Wrd112.Lng)]));
  (Wrd116.Obj) = (current_block [OBJECT_7_3]);
  ((Wrd115.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd116.Obj)));

DEFLABEL (label_77)
  (Wrd49.Obj) = (Rsp [7]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 30))
    goto label_76;
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_76;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [1]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) (Wrd44.Lng)) < ((unsigned long) (Wrd48.Lng))))
    goto label_76;
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd38.pChr) = (& ((Wrd46.pChr) [(Wrd35.Lng)]));
  (Wrd39.uLng) = ((unsigned long) (((unsigned char *) (Wrd38.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd40.Obj) = (MAKE_OBJECT (2, (Wrd39.uLng)));
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_75)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 26))
    goto label_74;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd63.Lng) = ((Wrd65.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd63.Lng)))
    goto label_74;
  (Wrd60.Obj) = (LONG_TO_FIXNUM (Wrd63.Lng));

DEFLABEL (label_73)
  (Wrd66.Obj) = (* (Rsp++));
  (Wrd103.Obj) = (Rsp [5]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 30))
    goto label_72;
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd97.uLng) == 26))
    goto label_72;
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [1]);
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd101.Obj));
  if (! (((unsigned long) (Wrd98.Lng)) < ((unsigned long) (Wrd102.Lng))))
    goto label_72;
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd96.uLng) == 2))
    goto label_72;
  (Wrd91.uLng) = (OBJECT_DATUM (Wrd60.Obj));
  (Wrd94.pChr) = (& ((Wrd100.pChr) [(Wrd91.Lng)]));
  ((Wrd94.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd66.Obj)));

DEFLABEL (label_71)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 26))
    goto label_70;
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  (Wrd74.Lng) = ((Wrd76.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd74.Lng)))
    goto label_70;
  (Wrd71.Obj) = (LONG_TO_FIXNUM (Wrd74.Lng));

DEFLABEL (label_69)
  (Rsp [2]) = (Wrd71.Obj);
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 26))
    goto label_68;
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  (Wrd85.Lng) = ((Wrd87.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd85.Lng)))
    goto label_68;
  (Wrd82.Obj) = (LONG_TO_FIXNUM (Wrd85.Lng));

DEFLABEL (label_67)
  (Rsp [3]) = (Wrd82.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_26;

DEFLABEL (label_68)
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd78.Obj) = (current_block [OBJECT_7_6]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_28]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_45)
  (Wrd82.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_27]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_44)
  (Wrd71.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd105.Obj) = (Rsp [5]);
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_26]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 3);

DEFLABEL (label_46)
  goto label_71;

DEFLABEL (label_74)
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_43)
  (Wrd60.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd51.Obj) = (Rsp [7]);
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_24]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_5]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd128.Obj) = (Rsp [5]);
  (Wrd129.Obj) = (Rsp [0]);
  (Wrd130.Obj) = (current_block [OBJECT_7_3]);
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_23]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 3);

DEFLABEL (label_47)
  goto label_77;

DEFLABEL (label_80)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_40)
  (Wrd10.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_18])), (Wrd9.pObj));

DEFLABEL (label_39)
  (Wrd8.Obj) = Rvl;
  goto label_83;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define TAG_8_8 2
#define LABEL_8_9 9
#define ENVIRONMENT_LABEL_8_3 18
#define DEBUGGING_LABEL_8_2 17
#define EXECUTE_CACHE_8_11 11
#define EXECUTE_CACHE_8_10 13
#define EXECUTE_CACHE_8_6 15
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_8_4);
      goto re_compile_char_set_4;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (re_compile_char_set_7)
DEFLABEL (re_compile_char_set_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_7])));
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

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_8_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_9)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (label_11)
  (Wrd15.Obj) = (Rsp [3]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_9 9
#define LABEL_9_10 11
#define LABEL_9_13 13
#define LABEL_9_14 15
#define LABEL_9_15 17
#define LABEL_9_16 19
#define LABEL_9_17 21
#define LABEL_9_18 23
#define LABEL_9_19 25
#define LABEL_9_20 27
#define LABEL_9_21 29
#define LABEL_9_22 31
#define LABEL_9_23 33
#define LABEL_9_24 35
#define LABEL_9_25 37
#define LABEL_9_26 39
#define LABEL_9_27 41
#define LABEL_9_28 43
#define LABEL_9_29 45
#define LABEL_9_30 47
#define LABEL_9_8 49
#define LABEL_9_11 51
#define TAG_9_12 24
#define LABEL_9_31 53
#define TAG_9_32 25
#define ENVIRONMENT_LABEL_9_3 65
#define DEBUGGING_LABEL_9_2 64
#define OBJECT_9_6 63
#define OBJECT_9_5 62
#define OBJECT_9_4 61
#define OBJECT_9_3 60
#define OBJECT_9_2 59
#define OBJECT_9_1 58
#define OBJECT_9_0 57
#define EXECUTE_CACHE_9_6 55
#define FREE_REFERENCES_LABEL_9_0 54
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd164;
  machine_word Wrd158;
  machine_word Wrd159;
  machine_word Wrd160;
  machine_word Wrd157;
  machine_word Wrd151;
  machine_word Wrd152;
  machine_word Wrd153;
  machine_word Wrd150;
  machine_word Wrd142;
  machine_word Wrd144;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd138;
  machine_word Wrd140;
  machine_word Wrd141;
  machine_word Wrd135;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd127;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd92;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
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
      goto re_char_pattern__scalar_values_38;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_40;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto label_41;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_9_13);
      goto loop_37;

    case 6:
      current_block = (Rpc - LABEL_9_14);
      goto label_42;

    case 7:
      current_block = (Rpc - LABEL_9_15);
      goto label_46;

    case 8:
      current_block = (Rpc - LABEL_9_16);
      goto label_47;

    case 9:
      current_block = (Rpc - LABEL_9_17);
      goto label_48;

    case 10:
      current_block = (Rpc - LABEL_9_18);
      goto label_49;

    case 11:
      current_block = (Rpc - LABEL_9_19);
      goto label_50;

    case 12:
      current_block = (Rpc - LABEL_9_20);
      goto label_51;

    case 13:
      current_block = (Rpc - LABEL_9_21);
      goto label_52;

    case 14:
      current_block = (Rpc - LABEL_9_22);
      goto label_53;

    case 15:
      current_block = (Rpc - LABEL_9_23);
      goto label_54;

    case 16:
      current_block = (Rpc - LABEL_9_24);
      goto label_55;

    case 17:
      current_block = (Rpc - LABEL_9_25);
      goto label_56;

    case 18:
      current_block = (Rpc - LABEL_9_26);
      goto label_57;

    case 19:
      current_block = (Rpc - LABEL_9_27);
      goto label_58;

    case 20:
      current_block = (Rpc - LABEL_9_28);
      goto label_43;

    case 21:
      current_block = (Rpc - LABEL_9_29);
      goto label_44;

    case 22:
      current_block = (Rpc - LABEL_9_30);
      goto label_45;

    case 23:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_8;

    case 24:
      current_block = (Rpc - LABEL_9_11);
      goto lambda_61;

    case 25:
      current_block = (Rpc - LABEL_9_31);
      goto lambda_63;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (re_char_pattern__scalar_values_60)
DEFLABEL (re_char_pattern__scalar_values_38)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_66;

DEFLABEL (label_65)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_64)
  goto loop_37;

DEFLABEL (label_66)
  if (! ((Wrd7.uLng) == 1))
    goto label_69;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_68)
  if (! ((Wrd13.Obj) == (current_block [OBJECT_9_1])))
    goto label_65;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_67;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  goto label_64;

DEFLABEL (label_67)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_69)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_40)
  (Wrd13.Obj) = Rvl;
  goto label_68;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_11])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_31])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_62)
DEFLABEL (loop_37)
  INTERRUPT_CHECK (26, LABEL_9_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_70;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_70)
  if (! ((Wrd6.uLng) == 1))
    goto label_106;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_105)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd18.uLng) == 1)
    goto label_78;

DEFLABEL (label_77)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_76;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_75)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 2))
    goto label_74;
  (Wrd31.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd29.Obj) = (MAKE_OBJECT (26, (Wrd31.uLng)));

DEFLABEL (label_73)
  (Wrd39.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Rsp [1]) = (Wrd36.Obj);
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_72;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_71)
  (Rsp [0]) = (Wrd40.Obj);
  goto loop_37;

DEFLABEL (label_72)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_30]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_45)
  (Wrd40.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_29]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 1);

DEFLABEL (label_44)
  (Wrd29.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_28]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_43)
  (Wrd19.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_104;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_103)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_102;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd58.Obj) = ((Wrd59.pObj) [0]);

DEFLABEL (label_101)
  if (! ((Wrd58.Obj) == (current_block [OBJECT_9_4])))
    goto label_77;
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_100;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd66.Obj) = ((Wrd68.pObj) [1]);

DEFLABEL (label_99)
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_98;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd75.Obj) = ((Wrd76.pObj) [1]);

DEFLABEL (label_97)
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd82.uLng) == 1))
    goto label_77;
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_96;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd83.Obj) = ((Wrd85.pObj) [1]);

DEFLABEL (label_95)
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_94;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd92.Obj) = ((Wrd93.pObj) [1]);

DEFLABEL (label_93)
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_92;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd99.Obj) = ((Wrd100.pObj) [0]);

DEFLABEL (label_91)
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd106.uLng) == 2))
    goto label_90;
  (Wrd109.uLng) = (OBJECT_DATUM (Wrd99.Obj));
  (Wrd107.Obj) = (MAKE_OBJECT (26, (Wrd109.uLng)));

DEFLABEL (label_89)
  (Wrd114.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  (Wrd115.Lng) = ((Wrd114.Lng) + 1L);
  (Wrd116.Obj) = (LONG_TO_FIXNUM (Wrd115.Lng));
  (* (--Rsp)) = (Wrd116.Obj);
  (Wrd120.Obj) = (Rsp [1]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if (! ((Wrd121.uLng) == 1))
    goto label_88;
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd120.Obj));
  (Wrd117.Obj) = ((Wrd119.pObj) [0]);

DEFLABEL (label_87)
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd126.uLng) == 2))
    goto label_86;
  (Wrd129.uLng) = (OBJECT_DATUM (Wrd117.Obj));
  (Wrd127.Obj) = (MAKE_OBJECT (26, (Wrd129.uLng)));

DEFLABEL (label_85)
  (Wrd134.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd127.Obj);
  (* (Rhp++)) = (Wrd134.Obj);
  (Wrd137.pObj) = (& (Rhp [-2]));
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd137.pObj)));
  (Wrd141.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd135.Obj);
  (* (Rhp++)) = (Wrd141.Obj);
  (Wrd140.pObj) = (& (Rhp [-2]));
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd140.pObj)));
  (Rsp [1]) = (Wrd138.Obj);
  (Wrd145.Obj) = (Rsp [0]);
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if (! ((Wrd146.uLng) == 1))
    goto label_84;
  (Wrd144.pObj) = (OBJECT_ADDRESS (Wrd145.Obj));
  (Wrd142.Obj) = ((Wrd144.pObj) [1]);

DEFLABEL (label_83)
  (Wrd153.uLng) = (OBJECT_TYPE (Wrd142.Obj));
  if (! ((Wrd153.uLng) == 1))
    goto label_82;
  (Wrd152.pObj) = (OBJECT_ADDRESS (Wrd142.Obj));
  (Wrd151.Obj) = ((Wrd152.pObj) [1]);

DEFLABEL (label_81)
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if (! ((Wrd160.uLng) == 1))
    goto label_80;
  (Wrd159.pObj) = (OBJECT_ADDRESS (Wrd151.Obj));
  (Wrd158.Obj) = ((Wrd159.pObj) [1]);

DEFLABEL (label_79)
  (Rsp [0]) = (Wrd158.Obj);
  goto loop_37;

DEFLABEL (label_80)
  (Wrd164.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_27]))));
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_58)
  (Wrd158.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_26]))));
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_57)
  (Wrd151.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_25]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_56)
  (Wrd142.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_24]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 1);

DEFLABEL (label_55)
  (Wrd127.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_23]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_54)
  (Wrd117.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 1);

DEFLABEL (label_53)
  (Wrd107.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_52)
  (Wrd99.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_51)
  (Wrd92.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_50)
  (Wrd83.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_49)
  (Wrd75.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_48)
  (Wrd66.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_47)
  (Wrd58.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_46)
  (Wrd49.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_42)
  (Wrd9.Obj) = Rvl;
  goto label_105;

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_9_11);

DEFLABEL (lambda_5)
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

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_9_31);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_6]);
  (Rsp [2]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define ENVIRONMENT_LABEL_10_3 16
#define DEBUGGING_LABEL_10_2 15
#define OBJECT_10_1 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_8 9
#define EXECUTE_CACHE_10_6 11
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto compiled_regexp_byte_stream_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_regexp_byte_stream_3)
DEFLABEL (compiled_regexp_byte_stream_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

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

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 7
#define DEBUGGING_LABEL_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto compiled_regexp_translation_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_regexp_translation_table_3)
DEFLABEL (compiled_regexp_translation_table_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

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

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_7 9
#define ENVIRONMENT_LABEL_13_3 17
#define DEBUGGING_LABEL_13_2 16
#define OBJECT_13_3 15
#define OBJECT_13_2 14
#define OBJECT_13_1 13
#define OBJECT_13_0 12
#define FREE_REFERENCE_13_0 11
#define FREE_REFERENCES_LABEL_13_0 10
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto compiled_regexpP_4;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_regexpP_10)
DEFLABEL (compiled_regexpP_4)
  INTERRUPT_CHECK (26, LABEL_13_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
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
  Rvl = (current_block [OBJECT_13_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_13_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 12
#define DEBUGGING_LABEL_14_2 11
#define EXECUTE_CACHE_14_7 7
#define EXECUTE_CACHE_14_6 9
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto make_compiled_regexp_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_compiled_regexp_4)
DEFLABEL (make_compiled_regexp_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_8 9
#define LABEL_15_15 11
#define LABEL_15_12 13
#define TAG_15_13 5
#define LABEL_15_17 15
#define LABEL_15_18 17
#define LABEL_15_19 19
#define LABEL_15_10 21
#define TAG_15_11 9
#define LABEL_15_20 23
#define LABEL_15_21 25
#define LABEL_15_22 27
#define LABEL_15_23 29
#define LABEL_15_24 31
#define LABEL_15_25 33
#define LABEL_15_26 35
#define LABEL_15_27 37
#define LABEL_15_28 39
#define LABEL_15_29 41
#define LABEL_15_30 43
#define LABEL_15_31 45
#define LABEL_15_32 47
#define LABEL_15_33 49
#define LABEL_15_34 51
#define LABEL_15_35 53
#define LABEL_15_36 55
#define LABEL_15_37 57
#define LABEL_15_38 59
#define LABEL_15_39 61
#define LABEL_15_40 63
#define LABEL_15_41 65
#define LABEL_15_42 67
#define LABEL_15_43 69
#define LABEL_15_44 71
#define LABEL_15_45 73
#define LABEL_15_46 75
#define LABEL_15_47 77
#define LABEL_15_48 79
#define LABEL_15_49 81
#define LABEL_15_50 83
#define LABEL_15_51 85
#define LABEL_15_52 87
#define LABEL_15_53 89
#define LABEL_15_54 91
#define LABEL_15_55 93
#define LABEL_15_56 95
#define LABEL_15_57 97
#define LABEL_15_58 99
#define LABEL_15_59 101
#define LABEL_15_60 103
#define LABEL_15_61 105
#define LABEL_15_64 107
#define LABEL_15_65 109
#define LABEL_15_66 111
#define LABEL_15_68 113
#define LABEL_15_69 115
#define LABEL_15_71 117
#define LABEL_15_72 119
#define LABEL_15_73 121
#define LABEL_15_74 123
#define LABEL_15_75 125
#define LABEL_15_76 127
#define LABEL_15_77 129
#define LABEL_15_78 131
#define LABEL_15_80 133
#define LABEL_15_81 135
#define LABEL_15_82 137
#define LABEL_15_79 139
#define LABEL_15_62 141
#define LABEL_15_63 143
#define ENVIRONMENT_LABEL_15_3 202
#define DEBUGGING_LABEL_15_2 201
#define OBJECT_15_10 200
#define OBJECT_15_9 199
#define OBJECT_15_8 198
#define OBJECT_15_7 197
#define OBJECT_15_6 196
#define OBJECT_15_5 195
#define OBJECT_15_4 194
#define OBJECT_15_3 193
#define OBJECT_15_2 192
#define OBJECT_15_1 191
#define OBJECT_15_0 190
#define EXECUTE_CACHE_15_84 145
#define EXECUTE_CACHE_15_83 147
#define EXECUTE_CACHE_15_70 149
#define EXECUTE_CACHE_15_67 151
#define EXECUTE_CACHE_15_16 153
#define EXECUTE_CACHE_15_14 155
#define EXECUTE_CACHE_15_9 157
#define EXECUTE_CACHE_15_6 159
#define FREE_REFERENCE_15_14 162
#define FREE_REFERENCE_15_13 163
#define FREE_REFERENCE_15_12 164
#define FREE_REFERENCE_15_11 165
#define FREE_REFERENCE_15_10 166
#define FREE_REFERENCE_15_9 167
#define FREE_REFERENCE_15_8 168
#define FREE_REFERENCE_15_7 169
#define FREE_REFERENCE_15_6 170
#define FREE_REFERENCE_15_5 171
#define FREE_REFERENCE_15_4 172
#define FREE_REFERENCE_15_3 173
#define FREE_REFERENCE_15_2 174
#define FREE_REFERENCE_15_1 175
#define FREE_REFERENCE_15_0 176
#define FREE_ASSIGNMENT_15_11 178
#define FREE_ASSIGNMENT_15_10 179
#define FREE_ASSIGNMENT_15_9 180
#define FREE_ASSIGNMENT_15_8 181
#define FREE_ASSIGNMENT_15_7 182
#define FREE_ASSIGNMENT_15_6 183
#define FREE_ASSIGNMENT_15_5 184
#define FREE_ASSIGNMENT_15_4 185
#define FREE_ASSIGNMENT_15_3 186
#define FREE_ASSIGNMENT_15_2 187
#define FREE_ASSIGNMENT_15_1 188
#define FREE_ASSIGNMENT_15_0 189
#define FREE_REFERENCES_LABEL_15_0 144
#define NUMBER_OF_LINKER_SECTIONS_15_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd107;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd116;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd93;
  machine_word Wrd98;
  machine_word Wrd94;
  machine_word Wrd92;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd133;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd177;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd176;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd172;
  machine_word Wrd164;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd159;
  machine_word Wrd146;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd147;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd626;
  machine_word Wrd625;
  machine_word Wrd617;
  machine_word Wrd609;
  machine_word Wrd608;
  machine_word Wrd607;
  machine_word Wrd606;
  machine_word Wrd605;
  machine_word Wrd604;
  machine_word Wrd600;
  machine_word Wrd599;
  machine_word Wrd590;
  machine_word Wrd589;
  machine_word Wrd577;
  machine_word Wrd582;
  machine_word Wrd581;
  machine_word Wrd578;
  machine_word Wrd574;
  machine_word Wrd573;
  machine_word Wrd565;
  machine_word Wrd557;
  machine_word Wrd556;
  machine_word Wrd555;
  machine_word Wrd554;
  machine_word Wrd553;
  machine_word Wrd552;
  machine_word Wrd548;
  machine_word Wrd547;
  machine_word Wrd538;
  machine_word Wrd537;
  machine_word Wrd525;
  machine_word Wrd530;
  machine_word Wrd529;
  machine_word Wrd526;
  machine_word Wrd522;
  machine_word Wrd521;
  machine_word Wrd513;
  machine_word Wrd505;
  machine_word Wrd504;
  machine_word Wrd503;
  machine_word Wrd502;
  machine_word Wrd501;
  machine_word Wrd500;
  machine_word Wrd496;
  machine_word Wrd495;
  machine_word Wrd486;
  machine_word Wrd485;
  machine_word Wrd473;
  machine_word Wrd478;
  machine_word Wrd477;
  machine_word Wrd474;
  machine_word Wrd470;
  machine_word Wrd469;
  machine_word Wrd461;
  machine_word Wrd453;
  machine_word Wrd452;
  machine_word Wrd451;
  machine_word Wrd450;
  machine_word Wrd449;
  machine_word Wrd448;
  machine_word Wrd444;
  machine_word Wrd443;
  machine_word Wrd434;
  machine_word Wrd433;
  machine_word Wrd421;
  machine_word Wrd426;
  machine_word Wrd425;
  machine_word Wrd422;
  machine_word Wrd418;
  machine_word Wrd417;
  machine_word Wrd409;
  machine_word Wrd401;
  machine_word Wrd400;
  machine_word Wrd399;
  machine_word Wrd398;
  machine_word Wrd397;
  machine_word Wrd396;
  machine_word Wrd392;
  machine_word Wrd391;
  machine_word Wrd382;
  machine_word Wrd381;
  machine_word Wrd369;
  machine_word Wrd374;
  machine_word Wrd373;
  machine_word Wrd370;
  machine_word Wrd366;
  machine_word Wrd365;
  machine_word Wrd357;
  machine_word Wrd349;
  machine_word Wrd348;
  machine_word Wrd347;
  machine_word Wrd346;
  machine_word Wrd345;
  machine_word Wrd344;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd330;
  machine_word Wrd329;
  machine_word Wrd317;
  machine_word Wrd322;
  machine_word Wrd321;
  machine_word Wrd318;
  machine_word Wrd314;
  machine_word Wrd313;
  machine_word Wrd305;
  machine_word Wrd297;
  machine_word Wrd296;
  machine_word Wrd295;
  machine_word Wrd294;
  machine_word Wrd293;
  machine_word Wrd292;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd265;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd266;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd253;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd213;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd214;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd201;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd161;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
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
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_15_4);
      goto lambda_96;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_15_15);
      goto label_98;

    case 5:
      current_block = (Rpc - LABEL_15_12);
      goto lambda_160;

    case 6:
      current_block = (Rpc - LABEL_15_17);
      goto label_99;

    case 7:
      current_block = (Rpc - LABEL_15_18);
      goto label_100;

    case 8:
      current_block = (Rpc - LABEL_15_19);
      goto label_101;

    case 9:
      current_block = (Rpc - LABEL_15_10);
      goto swapB_159;

    case 10:
      current_block = (Rpc - LABEL_15_20);
      goto label_102;

    case 11:
      current_block = (Rpc - LABEL_15_21);
      goto label_103;

    case 12:
      current_block = (Rpc - LABEL_15_22);
      goto label_104;

    case 13:
      current_block = (Rpc - LABEL_15_23);
      goto label_105;

    case 14:
      current_block = (Rpc - LABEL_15_24);
      goto label_106;

    case 15:
      current_block = (Rpc - LABEL_15_25);
      goto label_107;

    case 16:
      current_block = (Rpc - LABEL_15_26);
      goto label_108;

    case 17:
      current_block = (Rpc - LABEL_15_27);
      goto label_109;

    case 18:
      current_block = (Rpc - LABEL_15_28);
      goto label_110;

    case 19:
      current_block = (Rpc - LABEL_15_29);
      goto label_111;

    case 20:
      current_block = (Rpc - LABEL_15_30);
      goto label_112;

    case 21:
      current_block = (Rpc - LABEL_15_31);
      goto label_113;

    case 22:
      current_block = (Rpc - LABEL_15_32);
      goto label_114;

    case 23:
      current_block = (Rpc - LABEL_15_33);
      goto label_115;

    case 24:
      current_block = (Rpc - LABEL_15_34);
      goto label_116;

    case 25:
      current_block = (Rpc - LABEL_15_35);
      goto label_117;

    case 26:
      current_block = (Rpc - LABEL_15_36);
      goto label_118;

    case 27:
      current_block = (Rpc - LABEL_15_37);
      goto label_119;

    case 28:
      current_block = (Rpc - LABEL_15_38);
      goto label_120;

    case 29:
      current_block = (Rpc - LABEL_15_39);
      goto label_121;

    case 30:
      current_block = (Rpc - LABEL_15_40);
      goto label_122;

    case 31:
      current_block = (Rpc - LABEL_15_41);
      goto label_123;

    case 32:
      current_block = (Rpc - LABEL_15_42);
      goto label_124;

    case 33:
      current_block = (Rpc - LABEL_15_43);
      goto label_125;

    case 34:
      current_block = (Rpc - LABEL_15_44);
      goto label_126;

    case 35:
      current_block = (Rpc - LABEL_15_45);
      goto label_127;

    case 36:
      current_block = (Rpc - LABEL_15_46);
      goto label_128;

    case 37:
      current_block = (Rpc - LABEL_15_47);
      goto label_129;

    case 38:
      current_block = (Rpc - LABEL_15_48);
      goto label_130;

    case 39:
      current_block = (Rpc - LABEL_15_49);
      goto label_131;

    case 40:
      current_block = (Rpc - LABEL_15_50);
      goto label_132;

    case 41:
      current_block = (Rpc - LABEL_15_51);
      goto label_133;

    case 42:
      current_block = (Rpc - LABEL_15_52);
      goto label_134;

    case 43:
      current_block = (Rpc - LABEL_15_53);
      goto label_135;

    case 44:
      current_block = (Rpc - LABEL_15_54);
      goto label_136;

    case 45:
      current_block = (Rpc - LABEL_15_55);
      goto label_137;

    case 46:
      current_block = (Rpc - LABEL_15_56);
      goto continuation_14;

    case 47:
      current_block = (Rpc - LABEL_15_57);
      goto continuation_12;

    case 48:
      current_block = (Rpc - LABEL_15_58);
      goto loop_18;

    case 49:
      current_block = (Rpc - LABEL_15_59);
      goto label_138;

    case 50:
      current_block = (Rpc - LABEL_15_60);
      goto label_150;

    case 51:
      current_block = (Rpc - LABEL_15_61);
      goto label_153;

    case 52:
      current_block = (Rpc - LABEL_15_64);
      goto label_154;

    case 53:
      current_block = (Rpc - LABEL_15_65);
      goto label_155;

    case 54:
      current_block = (Rpc - LABEL_15_66);
      goto label_156;

    case 55:
      current_block = (Rpc - LABEL_15_68);
      goto label_151;

    case 56:
      current_block = (Rpc - LABEL_15_69);
      goto label_152;

    case 57:
      current_block = (Rpc - LABEL_15_71);
      goto label_139;

    case 58:
      current_block = (Rpc - LABEL_15_72);
      goto label_140;

    case 59:
      current_block = (Rpc - LABEL_15_73);
      goto label_141;

    case 60:
      current_block = (Rpc - LABEL_15_74);
      goto label_142;

    case 61:
      current_block = (Rpc - LABEL_15_75);
      goto label_143;

    case 62:
      current_block = (Rpc - LABEL_15_76);
      goto label_144;

    case 63:
      current_block = (Rpc - LABEL_15_77);
      goto label_145;

    case 64:
      current_block = (Rpc - LABEL_15_78);
      goto label_146;

    case 65:
      current_block = (Rpc - LABEL_15_80);
      goto label_147;

    case 66:
      current_block = (Rpc - LABEL_15_81);
      goto label_148;

    case 67:
      current_block = (Rpc - LABEL_15_82);
      goto label_149;

    case 68:
      current_block = (Rpc - LABEL_15_79);
      goto continuation_10;

    case 69:
      current_block = (Rpc - LABEL_15_62);
      goto continuation_17;

    case 70:
      current_block = (Rpc - LABEL_15_63);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_158)
DEFLABEL (lambda_96)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (Wrd9.Obj) = (current_block [OBJECT_15_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd11.pObj) = (& (Rhp [-1]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd19.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd15.pObj) = (& (Rhp [-1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_15_2]);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd21.pObj) = (& (Rhp [-1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd25.pObj) = (& (Rhp [-1]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd29.pObj) = (& (Rhp [-1]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_15_3]);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd33.pObj) = (& (Rhp [-1]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd37.pObj) = (& (Rhp [-1]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd41.pObj) = (& (Rhp [-1]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_163;
  Wrd5 = Wrd9;

DEFLABEL (label_162)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (* (--Rsp)) = Rvl;
  (Rsp [11]) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 15));
  (Wrd62.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_10])));
  Rhp += 12;
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd62.pObj)));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd51.pObj) = (& (Rhp [-1]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd51.pObj)));
  (Rsp [1]) = (Wrd52.Obj);
  (Wrd57.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd55.pObj) = (& (Rhp [-1]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd55.pObj)));
  (Rsp [3]) = (Wrd56.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd59.pObj) = (& (Rhp [-1]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd59.pObj)));
  (Rsp [12]) = (Wrd60.Obj);
  Wrd48 = Wrd62;
  ((Wrd48.pObj) [2]) = (Wrd60.Obj);
  (Wrd46.Obj) = (Rsp [11]);
  ((Wrd48.pObj) [3]) = (Wrd46.Obj);
  (Wrd43.Obj) = (Rsp [10]);
  ((Wrd48.pObj) [4]) = (Wrd43.Obj);
  (Wrd40.Obj) = (Rsp [9]);
  ((Wrd48.pObj) [5]) = (Wrd40.Obj);
  (Wrd37.Obj) = (Rsp [8]);
  ((Wrd48.pObj) [6]) = (Wrd37.Obj);
  (Wrd34.Obj) = (Rsp [7]);
  ((Wrd48.pObj) [7]) = (Wrd34.Obj);
  (Wrd31.Obj) = (Rsp [6]);
  ((Wrd48.pObj) [8]) = (Wrd31.Obj);
  (Wrd28.Obj) = (Rsp [5]);
  ((Wrd48.pObj) [9]) = (Wrd28.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  ((Wrd48.pObj) [10]) = (Wrd25.Obj);
  ((Wrd48.pObj) [11]) = (Wrd56.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd48.pObj) [12]) = (Wrd19.Obj);
  ((Wrd48.pObj) [13]) = (Wrd52.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_12])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [14]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [13]) = (Wrd7.Obj);
  (Rsp [14]) = (Wrd63.Obj);
  (Rsp [12]) = (Wrd63.Obj);
  Rsp = (& (Rsp [12]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_14]));

DEFLABEL (label_163)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_15])), (Wrd6.pObj));

DEFLABEL (label_98)
  (Wrd5.Obj) = Rvl;
  goto label_162;

DEFLABEL (lambda_160)
  CLOSURE_HEADER (LABEL_15_12);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_170;
  Wrd5 = Wrd9;

DEFLABEL (label_169)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_168;
  Wrd12 = Wrd16;

DEFLABEL (label_167)
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_0]));
  (Wrd30.Obj) = ((Wrd22.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_166;

DEFLABEL (label_165)
  ((Wrd22.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_164)
  goto loop_18;

DEFLABEL (label_166)
  if ((Wrd30.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_165;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_19])), (Wrd22.pObj), (Wrd19.Obj));

DEFLABEL (label_101)
  goto label_164;

DEFLABEL (label_168)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_18])), (Wrd13.pObj));

DEFLABEL (label_100)
  (Wrd12.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_17])), (Wrd6.pObj));

DEFLABEL (label_99)
  (Wrd5.Obj) = Rvl;
  goto label_169;

DEFLABEL (swapB_159)
  CLOSURE_HEADER (LABEL_15_10);

DEFLABEL (swapB_93)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_278;

DEFLABEL (label_277)
  Wrd5 = Wrd9;

DEFLABEL (label_276)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_1]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_275;

DEFLABEL (label_274)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_273)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [13]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_1]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_272;

DEFLABEL (label_271)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_270)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_4]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_269;

DEFLABEL (label_268)
  Wrd57 = Wrd61;

DEFLABEL (label_267)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_2]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_266;

DEFLABEL (label_265)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_264)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [12]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_2]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_263;

DEFLABEL (label_262)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_261)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_5]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_260;

DEFLABEL (label_259)
  Wrd109 = Wrd113;

DEFLABEL (label_258)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_3]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_257;

DEFLABEL (label_256)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_255)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [11]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_3]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_254;

DEFLABEL (label_253)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_252)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_6]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_251;

DEFLABEL (label_250)
  Wrd161 = Wrd165;

DEFLABEL (label_249)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_4]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_248;

DEFLABEL (label_247)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_246)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [10]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_4]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_245;

DEFLABEL (label_244)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_243)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_1]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_242;

DEFLABEL (label_241)
  Wrd213 = Wrd217;

DEFLABEL (label_240)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_5]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_239;

DEFLABEL (label_238)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_237)
  (Wrd240.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd243.Obj) = ((Wrd242.pObj) [9]);
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd245.Obj);
  ((Wrd244.pObj) [0]) = (Wrd240.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_5]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_236;

DEFLABEL (label_235)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_234)
  (Wrd266.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_2]));
  (Wrd269.Obj) = ((Wrd266.pObj) [0]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if ((Wrd270.uLng) == 50)
    goto label_233;

DEFLABEL (label_232)
  Wrd265 = Wrd269;

DEFLABEL (label_231)
  (* (--Rsp)) = (Wrd265.Obj);
  (Wrd277.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_6]));
  (Wrd278.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd287.Obj) = ((Wrd277.pObj) [0]);
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if ((Wrd288.uLng) == 50)
    goto label_230;

DEFLABEL (label_229)
  ((Wrd277.pObj) [0]) = (Wrd278.Obj);

DEFLABEL (label_228)
  (Wrd292.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd293.Obj) = (Rsp [1]);
  (Wrd294.pObj) = (OBJECT_ADDRESS (Wrd293.Obj));
  (Wrd295.Obj) = ((Wrd294.pObj) [8]);
  (Wrd296.pObj) = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd297.Obj) = ((Wrd296.pObj) [0]);
  (* (--Rsp)) = (Wrd297.Obj);
  ((Wrd296.pObj) [0]) = (Wrd292.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd305.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_6]));
  (Wrd313.Obj) = ((Wrd305.pObj) [0]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if ((Wrd314.uLng) == 50)
    goto label_227;

DEFLABEL (label_226)
  ((Wrd305.pObj) [0]) = (Wrd297.Obj);

DEFLABEL (label_225)
  (Wrd318.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_7]));
  (Wrd321.Obj) = ((Wrd318.pObj) [0]);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if ((Wrd322.uLng) == 50)
    goto label_224;

DEFLABEL (label_223)
  Wrd317 = Wrd321;

DEFLABEL (label_222)
  (* (--Rsp)) = (Wrd317.Obj);
  (Wrd329.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_7]));
  (Wrd330.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd339.Obj) = ((Wrd329.pObj) [0]);
  (Wrd340.uLng) = (OBJECT_TYPE (Wrd339.Obj));
  if ((Wrd340.uLng) == 50)
    goto label_221;

DEFLABEL (label_220)
  ((Wrd329.pObj) [0]) = (Wrd330.Obj);

DEFLABEL (label_219)
  (Wrd344.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd344.Obj);
  (Wrd345.Obj) = (Rsp [1]);
  (Wrd346.pObj) = (OBJECT_ADDRESS (Wrd345.Obj));
  (Wrd347.Obj) = ((Wrd346.pObj) [7]);
  (Wrd348.pObj) = (OBJECT_ADDRESS (Wrd347.Obj));
  (Wrd349.Obj) = ((Wrd348.pObj) [0]);
  (* (--Rsp)) = (Wrd349.Obj);
  ((Wrd348.pObj) [0]) = (Wrd344.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd357.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_7]));
  (Wrd365.Obj) = ((Wrd357.pObj) [0]);
  (Wrd366.uLng) = (OBJECT_TYPE (Wrd365.Obj));
  if ((Wrd366.uLng) == 50)
    goto label_218;

DEFLABEL (label_217)
  ((Wrd357.pObj) [0]) = (Wrd349.Obj);

DEFLABEL (label_216)
  (Wrd370.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_8]));
  (Wrd373.Obj) = ((Wrd370.pObj) [0]);
  (Wrd374.uLng) = (OBJECT_TYPE (Wrd373.Obj));
  if ((Wrd374.uLng) == 50)
    goto label_215;

DEFLABEL (label_214)
  Wrd369 = Wrd373;

DEFLABEL (label_213)
  (* (--Rsp)) = (Wrd369.Obj);
  (Wrd381.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_8]));
  (Wrd382.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd391.Obj) = ((Wrd381.pObj) [0]);
  (Wrd392.uLng) = (OBJECT_TYPE (Wrd391.Obj));
  if ((Wrd392.uLng) == 50)
    goto label_212;

DEFLABEL (label_211)
  ((Wrd381.pObj) [0]) = (Wrd382.Obj);

DEFLABEL (label_210)
  (Wrd396.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd396.Obj);
  (Wrd397.Obj) = (Rsp [1]);
  (Wrd398.pObj) = (OBJECT_ADDRESS (Wrd397.Obj));
  (Wrd399.Obj) = ((Wrd398.pObj) [6]);
  (Wrd400.pObj) = (OBJECT_ADDRESS (Wrd399.Obj));
  (Wrd401.Obj) = ((Wrd400.pObj) [0]);
  (* (--Rsp)) = (Wrd401.Obj);
  ((Wrd400.pObj) [0]) = (Wrd396.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd409.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_8]));
  (Wrd417.Obj) = ((Wrd409.pObj) [0]);
  (Wrd418.uLng) = (OBJECT_TYPE (Wrd417.Obj));
  if ((Wrd418.uLng) == 50)
    goto label_209;

DEFLABEL (label_208)
  ((Wrd409.pObj) [0]) = (Wrd401.Obj);

DEFLABEL (label_207)
  (Wrd422.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_9]));
  (Wrd425.Obj) = ((Wrd422.pObj) [0]);
  (Wrd426.uLng) = (OBJECT_TYPE (Wrd425.Obj));
  if ((Wrd426.uLng) == 50)
    goto label_206;

DEFLABEL (label_205)
  Wrd421 = Wrd425;

DEFLABEL (label_204)
  (* (--Rsp)) = (Wrd421.Obj);
  (Wrd433.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_9]));
  (Wrd434.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd443.Obj) = ((Wrd433.pObj) [0]);
  (Wrd444.uLng) = (OBJECT_TYPE (Wrd443.Obj));
  if ((Wrd444.uLng) == 50)
    goto label_203;

DEFLABEL (label_202)
  ((Wrd433.pObj) [0]) = (Wrd434.Obj);

DEFLABEL (label_201)
  (Wrd448.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd448.Obj);
  (Wrd449.Obj) = (Rsp [1]);
  (Wrd450.pObj) = (OBJECT_ADDRESS (Wrd449.Obj));
  (Wrd451.Obj) = ((Wrd450.pObj) [5]);
  (Wrd452.pObj) = (OBJECT_ADDRESS (Wrd451.Obj));
  (Wrd453.Obj) = ((Wrd452.pObj) [0]);
  (* (--Rsp)) = (Wrd453.Obj);
  ((Wrd452.pObj) [0]) = (Wrd448.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd461.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_9]));
  (Wrd469.Obj) = ((Wrd461.pObj) [0]);
  (Wrd470.uLng) = (OBJECT_TYPE (Wrd469.Obj));
  if ((Wrd470.uLng) == 50)
    goto label_200;

DEFLABEL (label_199)
  ((Wrd461.pObj) [0]) = (Wrd453.Obj);

DEFLABEL (label_198)
  (Wrd474.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_10]));
  (Wrd477.Obj) = ((Wrd474.pObj) [0]);
  (Wrd478.uLng) = (OBJECT_TYPE (Wrd477.Obj));
  if ((Wrd478.uLng) == 50)
    goto label_197;

DEFLABEL (label_196)
  Wrd473 = Wrd477;

DEFLABEL (label_195)
  (* (--Rsp)) = (Wrd473.Obj);
  (Wrd485.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_0]));
  (Wrd486.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd495.Obj) = ((Wrd485.pObj) [0]);
  (Wrd496.uLng) = (OBJECT_TYPE (Wrd495.Obj));
  if ((Wrd496.uLng) == 50)
    goto label_194;

DEFLABEL (label_193)
  ((Wrd485.pObj) [0]) = (Wrd486.Obj);

DEFLABEL (label_192)
  (Wrd500.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd500.Obj);
  (Wrd501.Obj) = (Rsp [1]);
  (Wrd502.pObj) = (OBJECT_ADDRESS (Wrd501.Obj));
  (Wrd503.Obj) = ((Wrd502.pObj) [4]);
  (Wrd504.pObj) = (OBJECT_ADDRESS (Wrd503.Obj));
  (Wrd505.Obj) = ((Wrd504.pObj) [0]);
  (* (--Rsp)) = (Wrd505.Obj);
  ((Wrd504.pObj) [0]) = (Wrd500.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd513.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_0]));
  (Wrd521.Obj) = ((Wrd513.pObj) [0]);
  (Wrd522.uLng) = (OBJECT_TYPE (Wrd521.Obj));
  if ((Wrd522.uLng) == 50)
    goto label_191;

DEFLABEL (label_190)
  ((Wrd513.pObj) [0]) = (Wrd505.Obj);

DEFLABEL (label_189)
  (Wrd526.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_11]));
  (Wrd529.Obj) = ((Wrd526.pObj) [0]);
  (Wrd530.uLng) = (OBJECT_TYPE (Wrd529.Obj));
  if ((Wrd530.uLng) == 50)
    goto label_188;

DEFLABEL (label_187)
  Wrd525 = Wrd529;

DEFLABEL (label_186)
  (* (--Rsp)) = (Wrd525.Obj);
  (Wrd537.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_10]));
  (Wrd538.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd547.Obj) = ((Wrd537.pObj) [0]);
  (Wrd548.uLng) = (OBJECT_TYPE (Wrd547.Obj));
  if ((Wrd548.uLng) == 50)
    goto label_185;

DEFLABEL (label_184)
  ((Wrd537.pObj) [0]) = (Wrd538.Obj);

DEFLABEL (label_183)
  (Wrd552.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd552.Obj);
  (Wrd553.Obj) = (Rsp [1]);
  (Wrd554.pObj) = (OBJECT_ADDRESS (Wrd553.Obj));
  (Wrd555.Obj) = ((Wrd554.pObj) [3]);
  (Wrd556.pObj) = (OBJECT_ADDRESS (Wrd555.Obj));
  (Wrd557.Obj) = ((Wrd556.pObj) [0]);
  (* (--Rsp)) = (Wrd557.Obj);
  ((Wrd556.pObj) [0]) = (Wrd552.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd565.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_10]));
  (Wrd573.Obj) = ((Wrd565.pObj) [0]);
  (Wrd574.uLng) = (OBJECT_TYPE (Wrd573.Obj));
  if ((Wrd574.uLng) == 50)
    goto label_182;

DEFLABEL (label_181)
  ((Wrd565.pObj) [0]) = (Wrd557.Obj);

DEFLABEL (label_180)
  (Wrd578.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_12]));
  (Wrd581.Obj) = ((Wrd578.pObj) [0]);
  (Wrd582.uLng) = (OBJECT_TYPE (Wrd581.Obj));
  if ((Wrd582.uLng) == 50)
    goto label_179;

DEFLABEL (label_178)
  Wrd577 = Wrd581;

DEFLABEL (label_177)
  (* (--Rsp)) = (Wrd577.Obj);
  (Wrd589.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_11]));
  (Wrd590.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd599.Obj) = ((Wrd589.pObj) [0]);
  (Wrd600.uLng) = (OBJECT_TYPE (Wrd599.Obj));
  if ((Wrd600.uLng) == 50)
    goto label_176;

DEFLABEL (label_175)
  ((Wrd589.pObj) [0]) = (Wrd590.Obj);

DEFLABEL (label_174)
  (Wrd604.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd604.Obj);
  (Wrd605.Obj) = (Rsp [1]);
  (Wrd606.pObj) = (OBJECT_ADDRESS (Wrd605.Obj));
  (Wrd607.Obj) = ((Wrd606.pObj) [2]);
  (Wrd608.pObj) = (OBJECT_ADDRESS (Wrd607.Obj));
  (Wrd609.Obj) = ((Wrd608.pObj) [0]);
  (* (--Rsp)) = (Wrd609.Obj);
  ((Wrd608.pObj) [0]) = (Wrd604.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd617.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_11]));
  (Wrd625.Obj) = ((Wrd617.pObj) [0]);
  (Wrd626.uLng) = (OBJECT_TYPE (Wrd625.Obj));
  if ((Wrd626.uLng) == 50)
    goto label_173;

DEFLABEL (label_172)
  ((Wrd617.pObj) [0]) = (Wrd609.Obj);

DEFLABEL (label_171)
  Rvl = (current_block [OBJECT_15_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_173)
  if ((Wrd625.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_172;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_55])), (Wrd617.pObj), (Wrd609.Obj));

DEFLABEL (label_137)
  goto label_171;

DEFLABEL (label_176)
  if ((Wrd599.Obj) == (Wrd590.Obj))
    goto label_175;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_54])), (Wrd589.pObj), (Wrd590.Obj));

DEFLABEL (label_136)
  goto label_174;

DEFLABEL (label_179)
  if ((Wrd581.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_178;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_15_53])), (Wrd578.pObj));

DEFLABEL (label_135)
  (Wrd577.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_182)
  if ((Wrd573.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_181;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_52])), (Wrd565.pObj), (Wrd557.Obj));

DEFLABEL (label_134)
  goto label_180;

DEFLABEL (label_185)
  if ((Wrd547.Obj) == (Wrd538.Obj))
    goto label_184;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_51])), (Wrd537.pObj), (Wrd538.Obj));

DEFLABEL (label_133)
  goto label_183;

DEFLABEL (label_188)
  if ((Wrd529.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_187;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_15_50])), (Wrd526.pObj));

DEFLABEL (label_132)
  (Wrd525.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_191)
  if ((Wrd521.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_190;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_49])), (Wrd513.pObj), (Wrd505.Obj));

DEFLABEL (label_131)
  goto label_189;

DEFLABEL (label_194)
  if ((Wrd495.Obj) == (Wrd486.Obj))
    goto label_193;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_48])), (Wrd485.pObj), (Wrd486.Obj));

DEFLABEL (label_130)
  goto label_192;

DEFLABEL (label_197)
  if ((Wrd477.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_196;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_15_47])), (Wrd474.pObj));

DEFLABEL (label_129)
  (Wrd473.Obj) = Rvl;
  goto label_195;

DEFLABEL (label_200)
  if ((Wrd469.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_199;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_46])), (Wrd461.pObj), (Wrd453.Obj));

DEFLABEL (label_128)
  goto label_198;

DEFLABEL (label_203)
  if ((Wrd443.Obj) == (Wrd434.Obj))
    goto label_202;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_45])), (Wrd433.pObj), (Wrd434.Obj));

DEFLABEL (label_127)
  goto label_201;

DEFLABEL (label_206)
  if ((Wrd425.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_205;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_15_44])), (Wrd422.pObj));

DEFLABEL (label_126)
  (Wrd421.Obj) = Rvl;
  goto label_204;

DEFLABEL (label_209)
  if ((Wrd417.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_208;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_43])), (Wrd409.pObj), (Wrd401.Obj));

DEFLABEL (label_125)
  goto label_207;

DEFLABEL (label_212)
  if ((Wrd391.Obj) == (Wrd382.Obj))
    goto label_211;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_42])), (Wrd381.pObj), (Wrd382.Obj));

DEFLABEL (label_124)
  goto label_210;

DEFLABEL (label_215)
  if ((Wrd373.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_214;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_15_41])), (Wrd370.pObj));

DEFLABEL (label_123)
  (Wrd369.Obj) = Rvl;
  goto label_213;

DEFLABEL (label_218)
  if ((Wrd365.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_217;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_40])), (Wrd357.pObj), (Wrd349.Obj));

DEFLABEL (label_122)
  goto label_216;

DEFLABEL (label_221)
  if ((Wrd339.Obj) == (Wrd330.Obj))
    goto label_220;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_39])), (Wrd329.pObj), (Wrd330.Obj));

DEFLABEL (label_121)
  goto label_219;

DEFLABEL (label_224)
  if ((Wrd321.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_223;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_15_38])), (Wrd318.pObj));

DEFLABEL (label_120)
  (Wrd317.Obj) = Rvl;
  goto label_222;

DEFLABEL (label_227)
  if ((Wrd313.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_226;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_37])), (Wrd305.pObj), (Wrd297.Obj));

DEFLABEL (label_119)
  goto label_225;

DEFLABEL (label_230)
  if ((Wrd287.Obj) == (Wrd278.Obj))
    goto label_229;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_36])), (Wrd277.pObj), (Wrd278.Obj));

DEFLABEL (label_118)
  goto label_228;

DEFLABEL (label_233)
  if ((Wrd269.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_232;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_15_35])), (Wrd266.pObj));

DEFLABEL (label_117)
  (Wrd265.Obj) = Rvl;
  goto label_231;

DEFLABEL (label_236)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_235;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_34])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_116)
  goto label_234;

DEFLABEL (label_239)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_238;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_33])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_115)
  goto label_237;

DEFLABEL (label_242)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_241;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_15_32])), (Wrd214.pObj));

DEFLABEL (label_114)
  (Wrd213.Obj) = Rvl;
  goto label_240;

DEFLABEL (label_245)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_244;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_31])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_113)
  goto label_243;

DEFLABEL (label_248)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_247;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_30])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_112)
  goto label_246;

DEFLABEL (label_251)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_250;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_15_29])), (Wrd162.pObj));

DEFLABEL (label_111)
  (Wrd161.Obj) = Rvl;
  goto label_249;

DEFLABEL (label_254)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_253;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_28])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_110)
  goto label_252;

DEFLABEL (label_257)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_256;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_27])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_109)
  goto label_255;

DEFLABEL (label_260)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_259;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_15_26])), (Wrd110.pObj));

DEFLABEL (label_108)
  (Wrd109.Obj) = Rvl;
  goto label_258;

DEFLABEL (label_263)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_262;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_25])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_107)
  goto label_261;

DEFLABEL (label_266)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_265;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_24])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_106)
  goto label_264;

DEFLABEL (label_269)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_268;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_15_23])), (Wrd58.pObj));

DEFLABEL (label_105)
  (Wrd57.Obj) = Rvl;
  goto label_267;

DEFLABEL (label_272)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_271;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_22])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_104)
  goto label_270;

DEFLABEL (label_275)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_274;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_21])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_103)
  goto label_273;

DEFLABEL (label_278)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_277;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_15_20])), (Wrd6.pObj));

DEFLABEL (label_102)
  (Wrd5.Obj) = Rvl;
  goto label_276;

DEFLABEL (loop_161)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_15_58);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_3]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_321;
  Wrd6 = Wrd10;

DEFLABEL (label_320)
  if ((Wrd6.Obj) == (current_block [OBJECT_15_1]))
    goto label_303;
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_3]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_302;
  Wrd14 = Wrd18;

DEFLABEL (label_301)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_300;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_299)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_5]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_298;
  Wrd28 = Wrd32;

DEFLABEL (label_297)
  Wrd27 = Wrd28;
  (Wrd34.Obj) = (* (Rsp++));
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd46.uLng) == 30))
    goto label_296;
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_296;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) (Wrd42.Lng)) < ((unsigned long) (Wrd45.Lng))))
    goto label_296;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd39.pChr) = (& ((Wrd43.pChr) [(Wrd37.Lng)]));
  (Wrd40.uLng) = ((unsigned long) (((unsigned char *) (Wrd39.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd35.Obj) = (MAKE_OBJECT (26, (Wrd40.uLng)));

DEFLABEL (label_295)
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_2]));
  (Wrd60.Obj) = ((Wrd52.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_294;

DEFLABEL (label_293)
  ((Wrd52.pObj) [0]) = (Wrd35.Obj);

DEFLABEL (label_292)
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_3]));
  (Wrd69.Obj) = ((Wrd66.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_291;
  Wrd65 = Wrd69;

DEFLABEL (label_290)
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_289;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd71.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_288)
  (Wrd78.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_1]));
  (Wrd86.Obj) = ((Wrd78.pObj) [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd87.uLng) == 50)
    goto label_287;

DEFLABEL (label_286)
  ((Wrd78.pObj) [0]) = (Wrd71.Obj);

DEFLABEL (label_285)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_79]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd94.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_4]));
  (Wrd97.Obj) = ((Wrd94.pObj) [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if ((Wrd98.uLng) == 50)
    goto label_284;
  Wrd93 = Wrd97;

DEFLABEL (label_283)
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd101.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_14]));
  (Wrd104.Obj) = ((Wrd101.pObj) [0]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd105.uLng) == 50)
    goto label_282;
  Wrd100 = Wrd104;

DEFLABEL (label_281)
  Wrd99 = Wrd100;
  (Wrd106.Obj) = (* (Rsp++));
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd116.uLng) == 10))
    goto label_280;
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd111.uLng) == 26))
    goto label_280;
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd114.Obj) = ((Wrd113.pObj) [0]);
  (Wrd115.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  if (! (((unsigned long) (Wrd112.Lng)) < ((unsigned long) (Wrd115.Lng))))
    goto label_280;
  (Wrd107.uLng) = (OBJECT_DATUM (Wrd106.Obj));
  (Wrd109.pObj) = (& ((Wrd113.pObj) [(Wrd107.Lng)]));
  (Wrd110.Obj) = ((Wrd109.pObj) [1]);
  (* (--Rsp)) = (Wrd110.Obj);

DEFLABEL (label_279)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15_79);
  goto loop_18;

DEFLABEL (label_280)
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_82]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_10]), 2);

DEFLABEL (label_149)
  (* (--Rsp)) = Rvl;
  goto label_279;

DEFLABEL (label_282)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_81])), (Wrd101.pObj));

DEFLABEL (label_148)
  (Wrd100.Obj) = Rvl;
  goto label_281;

DEFLABEL (label_284)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_80])), (Wrd94.pObj));

DEFLABEL (label_147)
  (Wrd93.Obj) = Rvl;
  goto label_283;

DEFLABEL (label_287)
  if ((Wrd86.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_286;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_78])), (Wrd78.pObj), (Wrd71.Obj));

DEFLABEL (label_146)
  goto label_285;

DEFLABEL (label_289)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_77]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_145)
  (Wrd71.Obj) = Rvl;
  goto label_288;

DEFLABEL (label_291)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_76])), (Wrd66.pObj));

DEFLABEL (label_144)
  (Wrd65.Obj) = Rvl;
  goto label_290;

DEFLABEL (label_294)
  if ((Wrd60.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_293;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_75])), (Wrd52.pObj), (Wrd35.Obj));

DEFLABEL (label_143)
  goto label_292;

DEFLABEL (label_296)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_74]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_9]), 2);

DEFLABEL (label_142)
  (Wrd35.Obj) = Rvl;
  goto label_295;

DEFLABEL (label_298)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_73])), (Wrd29.pObj));

DEFLABEL (label_141)
  (Wrd28.Obj) = Rvl;
  goto label_297;

DEFLABEL (label_300)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_72]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_8]), 1);

DEFLABEL (label_140)
  (* (--Rsp)) = Rvl;
  goto label_299;

DEFLABEL (label_302)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_71])), (Wrd15.pObj));

DEFLABEL (label_139)
  (Wrd14.Obj) = Rvl;
  goto label_301;

DEFLABEL (label_303)
  (Wrd123.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_8]));
  (Wrd126.Obj) = ((Wrd123.pObj) [0]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if ((Wrd127.uLng) == 50)
    goto label_319;
  Wrd122 = Wrd126;

DEFLABEL (label_318)
  if ((Wrd122.Obj) == ((SCHEME_OBJECT) 0))
    goto label_313;
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_57]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (Wrd133.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_2]));
  (Wrd136.Obj) = ((Wrd133.pObj) [0]);
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd136.Obj));
  if ((Wrd137.uLng) == 50)
    goto label_317;
  Wrd132 = Wrd136;

DEFLABEL (label_316)
  (* (--Rsp)) = (Wrd132.Obj);
  (Wrd138.Obj) = (current_block [OBJECT_15_7]);
  (* (--Rsp)) = (Wrd138.Obj);
  (Wrd140.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_8]));
  (Wrd143.Obj) = ((Wrd140.pObj) [0]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if ((Wrd144.uLng) == 50)
    goto label_315;
  Wrd139 = Wrd143;

DEFLABEL (label_314)
  (* (--Rsp)) = (Wrd139.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_70]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_15_57);

DEFLABEL (label_313)
  (Wrd147.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_7]));
  (Wrd150.Obj) = ((Wrd147.pObj) [0]);
  (Wrd151.uLng) = (OBJECT_TYPE (Wrd150.Obj));
  if ((Wrd151.uLng) == 50)
    goto label_312;
  Wrd146 = Wrd150;

DEFLABEL (label_311)
  if ((Wrd146.Obj) == (current_block [OBJECT_15_1]))
    goto label_310;
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_56]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (Wrd156.Obj) = (current_block [OBJECT_15_6]);
  (* (--Rsp)) = (Wrd156.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_67]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_15_56);

DEFLABEL (label_310)
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_62]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_63]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (Wrd165.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_6]));
  (Wrd168.Obj) = ((Wrd165.pObj) [0]);
  (Wrd169.uLng) = (OBJECT_TYPE (Wrd168.Obj));
  if ((Wrd169.uLng) == 50)
    goto label_309;
  Wrd164 = Wrd168;

DEFLABEL (label_308)
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd164.Obj));
  if (! ((Wrd172.uLng) == 1))
    goto label_307;
  (Wrd170.pObj) = (OBJECT_ADDRESS (Wrd164.Obj));
  (Wrd171.Obj) = ((Wrd170.pObj) [1]);
  (* (--Rsp)) = (Wrd171.Obj);

DEFLABEL (label_306)
  (Wrd178.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_13]));
  (Wrd181.Obj) = ((Wrd178.pObj) [0]);
  (Wrd182.uLng) = (OBJECT_TYPE (Wrd181.Obj));
  if ((Wrd182.uLng) == 50)
    goto label_305;
  Wrd177 = Wrd181;

DEFLABEL (label_304)
  (* (--Rsp)) = (Wrd177.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_15_63);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_84]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_15_62);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_83]));

DEFLABEL (label_305)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_66])), (Wrd178.pObj));

DEFLABEL (label_156)
  (Wrd177.Obj) = Rvl;
  goto label_304;

DEFLABEL (label_307)
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_65]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_155)
  (* (--Rsp)) = Rvl;
  goto label_306;

DEFLABEL (label_309)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_64])), (Wrd165.pObj));

DEFLABEL (label_154)
  (Wrd164.Obj) = Rvl;
  goto label_308;

DEFLABEL (label_312)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_61])), (Wrd147.pObj));

DEFLABEL (label_153)
  (Wrd146.Obj) = Rvl;
  goto label_311;

DEFLABEL (label_315)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_69])), (Wrd140.pObj));

DEFLABEL (label_152)
  (Wrd139.Obj) = Rvl;
  goto label_314;

DEFLABEL (label_317)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_68])), (Wrd133.pObj));

DEFLABEL (label_151)
  (Wrd132.Obj) = Rvl;
  goto label_316;

DEFLABEL (label_319)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_60])), (Wrd123.pObj));

DEFLABEL (label_150)
  (Wrd122.Obj) = Rvl;
  goto label_318;

DEFLABEL (label_321)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_59])), (Wrd7.pObj));

DEFLABEL (label_138)
  (Wrd6.Obj) = Rvl;
  goto label_320;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 11
#define DEBUGGING_LABEL_16_2 10
#define OBJECT_16_1 9
#define OBJECT_16_0 8
#define FREE_REFERENCE_16_0 7
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_16_4);
      goto input_endP_0;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_endP_4)
DEFLABEL (input_endP_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_9;
  Wrd6 = Wrd10;

DEFLABEL (label_8)
  if ((Wrd6.Obj) == (current_block [OBJECT_16_0]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_16_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define ENVIRONMENT_LABEL_17_3 14
#define DEBUGGING_LABEL_17_2 13
#define OBJECT_17_2 12
#define OBJECT_17_1 11
#define OBJECT_17_0 10
#define FREE_REFERENCE_17_0 9
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_17_4);
      goto input_end_1P_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_end_1P_6)
DEFLABEL (input_end_1P_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_13;
  Wrd6 = Wrd10;

DEFLABEL (label_12)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_11;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd12.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_10)
  if ((Wrd12.Obj) == (current_block [OBJECT_17_1]))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_17_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define ENVIRONMENT_LABEL_18_3 16
#define DEBUGGING_LABEL_18_2 15
#define OBJECT_18_1 14
#define OBJECT_18_0 13
#define FREE_REFERENCE_18_1 11
#define FREE_REFERENCE_18_0 12
#define FREE_REFERENCES_LABEL_18_0 10
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd43;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
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
      goto input_peek_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_peek_7)
DEFLABEL (input_peek_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_15;
  Wrd6 = Wrd10;

DEFLABEL (label_14)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_13;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_12)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_11;
  Wrd19 = Wrd23;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd43.uLng) == 30)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_9)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_8;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd37.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_8;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd31.pChr) = (& ((Wrd39.pChr) [(Wrd28.Lng)]));
  (Wrd32.uLng) = ((unsigned long) (((unsigned char *) (Wrd31.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  Rvl = (MAKE_OBJECT (26, (Wrd32.uLng)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_7])), (Wrd20.pObj));

DEFLABEL (label_5)
  (Wrd19.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_7 9
#define LABEL_19_8 11
#define ENVIRONMENT_LABEL_19_3 19
#define DEBUGGING_LABEL_19_2 18
#define OBJECT_19_2 17
#define OBJECT_19_1 16
#define OBJECT_19_0 15
#define FREE_REFERENCE_19_1 13
#define FREE_REFERENCE_19_0 14
#define FREE_REFERENCES_LABEL_19_0 12
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd50;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_19_4);
      goto input_peek_1_2;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_peek_1_9)
DEFLABEL (input_peek_1_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_19;
  Wrd6 = Wrd10;

DEFLABEL (label_18)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_17;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd12.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_16)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_15;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_14)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_13;
  Wrd26 = Wrd30;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd50.uLng) == 30)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_11)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_10;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [1]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) (Wrd44.Lng)) < ((unsigned long) (Wrd48.Lng))))
    goto label_10;
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd38.pChr) = (& ((Wrd46.pChr) [(Wrd35.Lng)]));
  (Wrd39.uLng) = ((unsigned long) (((unsigned char *) (Wrd38.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  Rvl = (MAKE_OBJECT (26, (Wrd39.uLng)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_8])), (Wrd27.pObj));

DEFLABEL (label_7)
  (Wrd26.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define ENVIRONMENT_LABEL_20_3 17
#define DEBUGGING_LABEL_20_2 16
#define OBJECT_20_1 15
#define OBJECT_20_0 14
#define FREE_REFERENCE_20_0 11
#define FREE_ASSIGNMENT_20_0 13
#define FREE_REFERENCES_LABEL_20_0 10
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_20_4);
      goto input_discardB_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_discardB_7)
DEFLABEL (input_discardB_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_14;
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_12;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd12.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_11)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_0]));
  (Wrd27.Obj) = ((Wrd19.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd19.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_20_1]);
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd27.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_7])), (Wrd19.pObj), (Wrd12.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_12)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define LABEL_21_8 11
#define LABEL_21_9 13
#define LABEL_21_10 15
#define LABEL_21_11 17
#define LABEL_21_12 19
#define ENVIRONMENT_LABEL_21_3 31
#define DEBUGGING_LABEL_21_2 30
#define OBJECT_21_3 29
#define OBJECT_21_2 28
#define OBJECT_21_1 27
#define OBJECT_21_0 26
#define FREE_REFERENCE_21_1 21
#define FREE_REFERENCE_21_0 22
#define FREE_ASSIGNMENT_21_1 24
#define FREE_ASSIGNMENT_21_0 25
#define FREE_REFERENCES_LABEL_21_0 20
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_21_4);
      goto inputB_3;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_21_8);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_21_9);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_21_10);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_21_11);
      goto label_11;

    case 8:
      current_block = (Rpc - LABEL_21_12);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inputB_14)
DEFLABEL (inputB_3)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_32;
  Wrd6 = Wrd10;

DEFLABEL (label_31)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_30;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_29)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_28;
  Wrd20 = Wrd24;

DEFLABEL (label_27)
  Wrd19 = Wrd20;
  (Wrd26.Obj) = (* (Rsp++));
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd38.uLng) == 30))
    goto label_26;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_26;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd34.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_26;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd31.pChr) = (& ((Wrd35.pChr) [(Wrd29.Lng)]));
  (Wrd32.uLng) = ((unsigned long) (((unsigned char *) (Wrd31.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd27.Obj) = (MAKE_OBJECT (26, (Wrd32.uLng)));

DEFLABEL (label_25)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_0]));
  (Wrd52.Obj) = ((Wrd44.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd44.pObj) [0]) = (Wrd27.Obj);

DEFLABEL (label_22)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_21;
  Wrd57 = Wrd61;

DEFLABEL (label_20)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_19;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd63.Obj) = ((Wrd64.pObj) [1]);

DEFLABEL (label_18)
  (Wrd70.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_1]));
  (Wrd78.Obj) = ((Wrd70.pObj) [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if ((Wrd79.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  ((Wrd70.pObj) [0]) = (Wrd63.Obj);

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_21_3]);
  goto pop_return;

DEFLABEL (label_17)
  if ((Wrd78.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_12])), (Wrd70.pObj), (Wrd63.Obj));

DEFLABEL (label_12)
  goto label_15;

DEFLABEL (label_19)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_11)
  (Wrd63.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_10])), (Wrd58.pObj));

DEFLABEL (label_10)
  (Wrd57.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_24)
  if ((Wrd52.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_9])), (Wrd44.pObj), (Wrd27.Obj));

DEFLABEL (label_9)
  goto label_22;

DEFLABEL (label_26)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_8)
  (Wrd27.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_7])), (Wrd21.pObj));

DEFLABEL (label_7)
  (Wrd20.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define LABEL_22_8 11
#define LABEL_22_9 13
#define LABEL_22_10 15
#define ENVIRONMENT_LABEL_22_3 25
#define DEBUGGING_LABEL_22_2 24
#define OBJECT_22_2 23
#define OBJECT_22_1 22
#define OBJECT_22_0 21
#define FREE_REFERENCE_22_0 17
#define FREE_ASSIGNMENT_22_1 19
#define FREE_ASSIGNMENT_22_0 20
#define FREE_REFERENCES_LABEL_22_0 16
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_22_4);
      goto input_rawB_2;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_22_8);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_22_9);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_22_10);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_rawB_11)
DEFLABEL (input_rawB_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_25;
  Wrd6 = Wrd10;

DEFLABEL (label_24)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_23;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd12.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_22)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_22_0]));
  (Wrd27.Obj) = ((Wrd19.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd19.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_19)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_18;
  Wrd32 = Wrd36;

DEFLABEL (label_17)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_16;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd38.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_15)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_22_1]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_14;

DEFLABEL (label_13)
  ((Wrd45.pObj) [0]) = (Wrd38.Obj);

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_22_2]);
  goto pop_return;

DEFLABEL (label_14)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_13;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_22_10])), (Wrd45.pObj), (Wrd38.Obj));

DEFLABEL (label_9)
  goto label_12;

DEFLABEL (label_16)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

DEFLABEL (label_8)
  (Wrd38.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_8])), (Wrd33.pObj));

DEFLABEL (label_7)
  (Wrd32.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_21)
  if ((Wrd27.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_22_7])), (Wrd19.pObj), (Wrd12.Obj));

DEFLABEL (label_6)
  goto label_19;

DEFLABEL (label_23)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 9
#define DEBUGGING_LABEL_23_2 8
#define FREE_REFERENCE_23_0 7
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto input_peek_1_0;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_peek_1_4)
DEFLABEL (input_peek_1_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define LABEL_24_10 13
#define LABEL_24_11 15
#define LABEL_24_12 17
#define LABEL_24_13 19
#define ENVIRONMENT_LABEL_24_3 33
#define DEBUGGING_LABEL_24_2 32
#define OBJECT_24_3 31
#define OBJECT_24_2 30
#define OBJECT_24_1 29
#define OBJECT_24_0 28
#define EXECUTE_CACHE_24_6 21
#define FREE_REFERENCE_24_1 24
#define FREE_REFERENCE_24_0 25
#define FREE_ASSIGNMENT_24_0 27
#define FREE_REFERENCES_LABEL_24_0 20
#define NUMBER_OF_LINKER_SECTIONS_24_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_24_4);
      goto input_readB_5;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_24_10);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_24_11);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_24_12);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_24_13);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_readB_16)
DEFLABEL (input_readB_5)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_34;
  Wrd6 = Wrd10;

DEFLABEL (label_33)
  if (! ((Wrd6.Obj) == (current_block [OBJECT_24_0])))
    goto label_17;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (label_17)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_32;
  Wrd14 = Wrd18;

DEFLABEL (label_31)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_30;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_29)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_28;
  Wrd28 = Wrd32;

DEFLABEL (label_27)
  Wrd27 = Wrd28;
  (Wrd34.Obj) = (* (Rsp++));
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd46.uLng) == 30))
    goto label_26;
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_26;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) (Wrd42.Lng)) < ((unsigned long) (Wrd45.Lng))))
    goto label_26;
  (Wrd36.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd38.pChr) = (& ((Wrd43.pChr) [(Wrd36.Lng)]));
  (Wrd39.uLng) = ((unsigned long) (((unsigned char *) (Wrd38.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd40.Obj) = (MAKE_OBJECT (26, (Wrd39.uLng)));
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_25)
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_24;
  Wrd53 = Wrd57;

DEFLABEL (label_23)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_22;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd59.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_21)
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_24_0]));
  (Wrd74.Obj) = ((Wrd66.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_20;

DEFLABEL (label_19)
  ((Wrd66.pObj) [0]) = (Wrd59.Obj);

DEFLABEL (label_18)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  if ((Wrd74.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_19;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_24_13])), (Wrd66.pObj), (Wrd59.Obj));

DEFLABEL (label_14)
  goto label_18;

DEFLABEL (label_22)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 1);

DEFLABEL (label_13)
  (Wrd59.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_11])), (Wrd54.pObj));

DEFLABEL (label_12)
  (Wrd53.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_9])), (Wrd29.pObj));

DEFLABEL (label_10)
  (Wrd28.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_7])), (Wrd15.pObj));

DEFLABEL (label_8)
  (Wrd14.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_5])), (Wrd7.pObj));

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define ENVIRONMENT_LABEL_25_3 12
#define DEBUGGING_LABEL_25_2 11
#define EXECUTE_CACHE_25_7 7
#define EXECUTE_CACHE_25_6 9
#define FREE_REFERENCES_LABEL_25_0 6
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto input_matchP_1;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_matchP_4)
DEFLABEL (input_matchP_1)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define LABEL_26_8 11
#define LABEL_26_9 13
#define ENVIRONMENT_LABEL_26_3 24
#define DEBUGGING_LABEL_26_2 23
#define OBJECT_26_2 22
#define OBJECT_26_1 21
#define OBJECT_26_0 20
#define FREE_REFERENCE_26_1 15
#define FREE_REFERENCE_26_0 16
#define FREE_ASSIGNMENT_26_1 18
#define FREE_ASSIGNMENT_26_0 19
#define FREE_REFERENCES_LABEL_26_0 14
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_26_4);
      goto outputB_5;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_26_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_26_9);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (outputB_13)
DEFLABEL (outputB_5)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_26_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_25;
  Wrd11 = Wrd15;

DEFLABEL (label_24)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_23;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd55.Obj) = (Rsp [0]);
  ((Wrd54.pObj) [1]) = (Wrd55.Obj);

DEFLABEL (label_22)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_26_0]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_1]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_18;
  Wrd31 = Wrd35;

DEFLABEL (label_17)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_26_1]));
  (Wrd48.Obj) = ((Wrd40.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_16;

DEFLABEL (label_15)
  ((Wrd40.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_26_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  if ((Wrd48.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_15;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_26_9])), (Wrd40.pObj), (Wrd37.Obj));

DEFLABEL (label_10)
  goto label_14;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_8])), (Wrd32.pObj));

DEFLABEL (label_9)
  (Wrd31.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_21)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_26_7])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_8)
  goto label_19;

DEFLABEL (label_23)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_11)
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd12.pObj));

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define LABEL_27_7 9
#define LABEL_27_8 11
#define LABEL_27_9 13
#define LABEL_27_10 15
#define ENVIRONMENT_LABEL_27_3 28
#define DEBUGGING_LABEL_27_2 27
#define OBJECT_27_3 26
#define OBJECT_27_2 25
#define OBJECT_27_1 24
#define OBJECT_27_0 23
#define FREE_REFERENCE_27_1 17
#define FREE_REFERENCE_27_0 18
#define FREE_ASSIGNMENT_27_2 20
#define FREE_ASSIGNMENT_27_1 21
#define FREE_ASSIGNMENT_27_0 22
#define FREE_REFERENCES_LABEL_27_0 16
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_27_4);
      goto output_re_codeB_5;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_27_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_27_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_27_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_27_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_re_codeB_14)
DEFLABEL (output_re_codeB_5)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_0]));
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_27)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_27_1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_26;
  Wrd23 = Wrd27;

DEFLABEL (label_25)
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_24;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd67.Obj) = (Rsp [0]);
  ((Wrd66.pObj) [1]) = (Wrd67.Obj);

DEFLABEL (label_23)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_1]));
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_22;

DEFLABEL (label_21)
  ((Wrd29.pObj) [0]) = (Wrd30.Obj);

DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_19;
  Wrd43 = Wrd47;

DEFLABEL (label_18)
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd51.Lng) = ((Wrd50.Lng) + 1L);
  (Wrd49.Obj) = (LONG_TO_FIXNUM (Wrd51.Lng));
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_27_2]));
  (Wrd60.Obj) = ((Wrd52.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  ((Wrd52.pObj) [0]) = (Wrd49.Obj);

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_27_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  if ((Wrd60.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_10])), (Wrd52.pObj), (Wrd49.Obj));

DEFLABEL (label_11)
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_9])), (Wrd44.pObj));

DEFLABEL (label_10)
  (Wrd43.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_22)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_21;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_8])), (Wrd29.pObj), (Wrd30.Obj));

DEFLABEL (label_9)
  goto label_20;

DEFLABEL (label_24)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_12)
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_6])), (Wrd24.pObj));

DEFLABEL (label_8)
  (Wrd23.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_27_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_7)
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_6 7
#define LABEL_28_7 9
#define LABEL_28_8 11
#define LABEL_28_9 13
#define LABEL_28_10 15
#define LABEL_28_11 17
#define LABEL_28_12 19
#define LABEL_28_13 21
#define ENVIRONMENT_LABEL_28_3 35
#define DEBUGGING_LABEL_28_2 34
#define OBJECT_28_3 33
#define OBJECT_28_2 32
#define OBJECT_28_1 31
#define OBJECT_28_0 30
#define FREE_REFERENCE_28_1 23
#define FREE_REFERENCE_28_0 24
#define FREE_ASSIGNMENT_28_3 26
#define FREE_ASSIGNMENT_28_2 27
#define FREE_ASSIGNMENT_28_1 28
#define FREE_ASSIGNMENT_28_0 29
#define FREE_REFERENCES_LABEL_28_0 22
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd72;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_28_4);
      goto output_startB_6;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_28_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_28_9);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_28_10);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_28_11);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_28_12);
      goto label_14;

    case 9:
      current_block = (Rpc - LABEL_28_13);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_startB_18)
DEFLABEL (output_startB_6)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_40;
  Wrd5 = Wrd9;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_38;
  Wrd12 = Wrd16;

DEFLABEL (label_37)
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_0]));
  (Wrd30.Obj) = ((Wrd22.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd22.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_34)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_1]));
  (Wrd35.Obj) = (current_block [OBJECT_28_0]);
  (Wrd42.Obj) = ((Wrd34.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd34.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_31)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_28_1]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_30;
  Wrd52 = Wrd56;

DEFLABEL (label_29)
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_28;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd96.Obj) = (Rsp [0]);
  ((Wrd95.pObj) [1]) = (Wrd96.Obj);

DEFLABEL (label_27)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_2]));
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd66.Obj) = ((Wrd58.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd58.pObj) [0]) = (Wrd59.Obj);

DEFLABEL (label_24)
  Rsp = (& (Rsp [1]));
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_1]));
  (Wrd76.Obj) = ((Wrd73.pObj) [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if ((Wrd77.uLng) == 50)
    goto label_23;
  Wrd72 = Wrd76;

DEFLABEL (label_22)
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  (Wrd80.Lng) = ((Wrd79.Lng) + 1L);
  (Wrd78.Obj) = (LONG_TO_FIXNUM (Wrd80.Lng));
  (Wrd81.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_3]));
  (Wrd89.Obj) = ((Wrd81.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd81.pObj) [0]) = (Wrd78.Obj);

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_28_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  if ((Wrd89.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_13])), (Wrd81.pObj), (Wrd78.Obj));

DEFLABEL (label_15)
  goto label_19;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_12])), (Wrd73.pObj));

DEFLABEL (label_14)
  (Wrd72.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_26)
  if ((Wrd66.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_11])), (Wrd58.pObj), (Wrd59.Obj));

DEFLABEL (label_13)
  goto label_24;

DEFLABEL (label_28)
  (Wrd99.Obj) = (Rsp [0]);
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (label_16)
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_9])), (Wrd53.pObj));

DEFLABEL (label_12)
  (Wrd52.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_33)
  if ((Wrd42.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_8])), (Wrd34.pObj), (Wrd35.Obj));

DEFLABEL (label_11)
  goto label_31;

DEFLABEL (label_36)
  if ((Wrd30.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_7])), (Wrd22.pObj), (Wrd19.Obj));

DEFLABEL (label_10)
  goto label_34;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_6])), (Wrd13.pObj));

DEFLABEL (label_9)
  (Wrd12.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_5])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define ENVIRONMENT_LABEL_29_3 9
#define DEBUGGING_LABEL_29_2 8
#define FREE_REFERENCE_29_0 7
#define FREE_REFERENCES_LABEL_29_0 6
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto output_position_0;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_position_4)
DEFLABEL (output_position_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define ENVIRONMENT_LABEL_30_3 12
#define DEBUGGING_LABEL_30_2 11
#define FREE_REFERENCE_30_1 9
#define FREE_REFERENCE_30_0 10
#define FREE_REFERENCES_LABEL_30_0 8
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_30_4);
      goto output_pointer_0;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_pointer_5)
DEFLABEL (output_pointer_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_7;
  Wrd12 = Wrd16;

DEFLABEL (label_6)
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_6])), (Wrd13.pObj));

DEFLABEL (label_3)
  (Wrd12.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 6
#define DEBUGGING_LABEL_31_2 5
#define OBJECT_31_0 4
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto pointer_position_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pointer_position_3)
DEFLABEL (pointer_position_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define ENVIRONMENT_LABEL_32_3 11
#define DEBUGGING_LABEL_32_2 10
#define OBJECT_32_1 9
#define OBJECT_32_0 8
#define FREE_REFERENCES_LABEL_32_0 8
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_32_4);
      goto pointer_ref_2;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pointer_ref_7)
DEFLABEL (pointer_ref_2)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_12;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_11)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_10;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_8;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  Rvl = ((Wrd23.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_10)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_5)
  (Wrd14.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_6 5
#define LABEL_33_7 7
#define LABEL_33_8 9
#define LABEL_33_5 11
#define LABEL_33_9 13
#define LABEL_33_10 15
#define LABEL_33_11 17
#define ENVIRONMENT_LABEL_33_3 23
#define DEBUGGING_LABEL_33_2 22
#define OBJECT_33_3 21
#define OBJECT_33_2 20
#define OBJECT_33_1 19
#define OBJECT_33_0 18
#define FREE_REFERENCES_LABEL_33_0 18
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_33_4);
      goto pointer_operateB_7;

    case 1:
      current_block = (Rpc - LABEL_33_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_33_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_33_9);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_33_10);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_33_11);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pointer_operateB_16)
DEFLABEL (pointer_operateB_7)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_28;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_27)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_26;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_25)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_24;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_23)
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_21)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_19)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_18;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  ((Wrd24.pObj) [0]) = (Wrd21.Obj);

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_33_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 2);

DEFLABEL (label_14)
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_13)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_10)
  (Wrd17.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define LABEL_34_7 9
#define LABEL_34_8 11
#define LABEL_34_9 13
#define TAG_34_10 5
#define LABEL_34_12 15
#define LABEL_34_13 17
#define LABEL_34_14 19
#define LABEL_34_15 21
#define LABEL_34_16 23
#define ENVIRONMENT_LABEL_34_3 32
#define DEBUGGING_LABEL_34_2 31
#define OBJECT_34_3 30
#define OBJECT_34_2 29
#define OBJECT_34_1 28
#define OBJECT_34_0 27
#define EXECUTE_CACHE_34_11 25
#define FREE_REFERENCES_LABEL_34_0 24
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_34_4);
      goto store_jumpB_11;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_34_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_34_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_34_9);
      goto lambda_24;

    case 6:
      current_block = (Rpc - LABEL_34_12);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_34_13);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_34_14);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_34_15);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_34_16);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (store_jumpB_23)
DEFLABEL (store_jumpB_11)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_32;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_31)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_30;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_29)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_28;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = (Rsp [2]);
  ((Wrd38.pObj) [0]) = (Wrd39.Obj);

DEFLABEL (label_27)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_26;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd30.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_9])));
  Rhp += 1;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  Wrd34 = Wrd33;
  (Wrd35.Obj) = (Rsp [0]);
  ((Wrd34.pObj) [2]) = (Wrd35.Obj);
  (Rsp [3]) = (Wrd32.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

DEFLABEL (label_26)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 1);

DEFLABEL (label_15)
  (Wrd21.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_16)
  goto label_27;

DEFLABEL (label_30)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_34_9);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_42;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_41)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_40;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd53.Obj) = (Rsp [1]);
  ((Wrd52.pObj) [0]) = (Wrd53.Obj);

DEFLABEL (label_39)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_38;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd20.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_37)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_36;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd35.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_35)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_34;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd45.Obj) = (Rsp [2]);
  ((Wrd44.pObj) [0]) = (Wrd45.Obj);

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_34_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_16]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_20)
  goto label_33;

DEFLABEL (label_36)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_15]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_19)
  (Wrd35.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_14]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_18)
  (Wrd20.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_13]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_21)
  goto label_39;

DEFLABEL (label_42)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_7 5
#define LABEL_35_5 7
#define TAG_35_6 2
#define LABEL_35_9 9
#define LABEL_35_10 11
#define LABEL_35_11 13
#define LABEL_35_12 15
#define LABEL_35_13 17
#define LABEL_35_14 19
#define ENVIRONMENT_LABEL_35_3 32
#define DEBUGGING_LABEL_35_2 31
#define OBJECT_35_3 30
#define OBJECT_35_2 29
#define OBJECT_35_1 28
#define OBJECT_35_0 27
#define EXECUTE_CACHE_35_8 21
#define FREE_REFERENCE_35_0 24
#define FREE_ASSIGNMENT_35_0 26
#define FREE_REFERENCES_LABEL_35_0 20
#define NUMBER_OF_LINKER_SECTIONS_35_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd69;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd89;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_35_4);
      goto insert_jumpB_10;

    case 1:
      current_block = (Rpc - LABEL_35_7);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_35_5);
      goto lambda_21;

    case 3:
      current_block = (Rpc - LABEL_35_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_35_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_35_11);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_35_12);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_35_13);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_35_14);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insert_jumpB_20)
DEFLABEL (insert_jumpB_10)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_5])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_23;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd21.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (label_23)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_12)
  (Wrd12.Obj) = Rvl;
  goto label_22;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_35_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_36;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_35)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_34;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_33)
  (Wrd30.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [2]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd48.Obj) = ((Wrd39.pObj) [3]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_32;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd41.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_31)
  (Wrd56.Obj) = (* (Rsp++));
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_30;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  ((Wrd83.pObj) [1]) = (Wrd56.Obj);

DEFLABEL (label_29)
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_28;
  Wrd58 = Wrd62;

DEFLABEL (label_27)
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd68.Lng) = ((Wrd65.Lng) + 3L);
  (Wrd64.Obj) = (LONG_TO_FIXNUM (Wrd68.Lng));
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_35_0]));
  (Wrd77.Obj) = ((Wrd69.pObj) [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd78.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd69.pObj) [0]) = (Wrd64.Obj);

DEFLABEL (label_24)
  Rvl = (current_block [OBJECT_35_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  if ((Wrd77.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35_14])), (Wrd69.pObj), (Wrd64.Obj));

DEFLABEL (label_17)
  goto label_24;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_13])), (Wrd59.pObj));

DEFLABEL (label_16)
  (Wrd58.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_12]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 2);

DEFLABEL (label_18)
  goto label_29;

DEFLABEL (label_32)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_15)
  (Wrd41.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_14)
  (Wrd20.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 1);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define LABEL_36_9 9
#define ENVIRONMENT_LABEL_36_3 19
#define DEBUGGING_LABEL_36_2 18
#define OBJECT_36_0 17
#define EXECUTE_CACHE_36_10 11
#define EXECUTE_CACHE_36_8 13
#define EXECUTE_CACHE_36_6 15
#define FREE_REFERENCES_LABEL_36_0 10
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_36_4);
      goto compute_jump_9;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_jump_12)
DEFLABEL (compute_jump_9)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) + 3L);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd14.Lng) = ((Wrd12.Lng) - (Wrd10.Lng));
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  Wrd21 = Wrd14;
  if ((Wrd21.Lng) < 0)
    goto label_14;
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_13;

DEFLABEL (label_14)
  (Wrd27.Lng) = ((Wrd21.Lng) + 65536L);
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_13)
DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_36_7);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_36_9);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 11
#define DEBUGGING_LABEL_37_2 10
#define OBJECT_37_1 9
#define OBJECT_37_0 8
#define FREE_REFERENCE_37_0 7
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_37_4);
      goto stack_emptyP_0;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_emptyP_4)
DEFLABEL (stack_emptyP_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_9;
  Wrd6 = Wrd10;

DEFLABEL (label_8)
  if ((Wrd6.Obj) == (current_block [OBJECT_37_0]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_37_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_7 7
#define LABEL_38_6 9
#define ENVIRONMENT_LABEL_38_3 18
#define DEBUGGING_LABEL_38_2 17
#define OBJECT_38_0 16
#define EXECUTE_CACHE_38_8 11
#define FREE_REFERENCE_38_1 14
#define FREE_REFERENCE_38_0 15
#define FREE_REFERENCES_LABEL_38_0 10
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_38_4);
      goto stack_fullP_2;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_fullP_7)
DEFLABEL (stack_fullP_2)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_10;
  Wrd14 = Wrd18;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_6);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd7.Lng) < (Wrd8.Lng))
    goto label_8;
  Rvl = (current_block [OBJECT_38_0]);
  goto pop_return;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_7])), (Wrd15.pObj));

DEFLABEL (label_5)
  (Wrd14.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define ENVIRONMENT_LABEL_39_3 12
#define DEBUGGING_LABEL_39_2 11
#define EXECUTE_CACHE_39_6 7
#define FREE_REFERENCE_39_0 10
#define FREE_REFERENCES_LABEL_39_0 6
#define NUMBER_OF_LINKER_SECTIONS_39_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto stack_length_0;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_length_4)
DEFLABEL (stack_length_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_6 7
#define ENVIRONMENT_LABEL_40_3 14
#define DEBUGGING_LABEL_40_2 13
#define OBJECT_40_0 12
#define FREE_REFERENCE_40_0 9
#define FREE_ASSIGNMENT_40_0 11
#define FREE_REFERENCES_LABEL_40_0 8
#define NUMBER_OF_LINKER_SECTIONS_40_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd15;
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
      goto stack_pushB_1;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_40_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_pushB_6)
DEFLABEL (stack_pushB_1)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_11;
  Wrd6 = Wrd10;

DEFLABEL (label_10)
  (Wrd15.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_40_0]));
  (Wrd24.Obj) = ((Wrd16.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd16.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_40_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd24.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_40_6])), (Wrd16.pObj), (Wrd12.Obj));

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define LABEL_41_7 9
#define LABEL_41_8 11
#define LABEL_41_9 13
#define ENVIRONMENT_LABEL_41_3 22
#define DEBUGGING_LABEL_41_2 21
#define OBJECT_41_2 20
#define OBJECT_41_1 19
#define OBJECT_41_0 18
#define FREE_REFERENCE_41_0 15
#define FREE_ASSIGNMENT_41_0 17
#define FREE_REFERENCES_LABEL_41_0 14
#define NUMBER_OF_LINKER_SECTIONS_41_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_41_4);
      goto stack_popB_3;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_41_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_41_8);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_41_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_popB_11)
DEFLABEL (stack_popB_3)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_22;
  Wrd6 = Wrd10;

DEFLABEL (label_21)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_20;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_19)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_18;
  Wrd20 = Wrd24;

DEFLABEL (label_17)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_16;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_15)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_41_0]));
  (Wrd41.Obj) = ((Wrd33.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_14;

DEFLABEL (label_13)
  ((Wrd33.pObj) [0]) = (Wrd26.Obj);

DEFLABEL (label_12)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd46.Obj);
  (Rsp [1]) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 2);

DEFLABEL (label_14)
  if ((Wrd41.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_13;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_41_9])), (Wrd33.pObj), (Wrd26.Obj));

DEFLABEL (label_9)
  goto label_12;

DEFLABEL (label_16)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 1);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_7])), (Wrd21.pObj));

DEFLABEL (label_7)
  (Wrd20.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_5])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_6 5
#define LABEL_42_5 7
#define LABEL_42_8 9
#define LABEL_42_9 11
#define ENVIRONMENT_LABEL_42_3 20
#define DEBUGGING_LABEL_42_2 19
#define OBJECT_42_1 18
#define OBJECT_42_0 17
#define EXECUTE_CACHE_42_7 13
#define FREE_REFERENCE_42_0 16
#define FREE_REFERENCES_LABEL_42_0 12
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_42_4);
      goto stack_ref_register_number_3;

    case 1:
      current_block = (Rpc - LABEL_42_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_42_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_42_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_ref_register_number_9)
DEFLABEL (stack_ref_register_number_3)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;
  Wrd9 = Wrd13;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_14;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_13)
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_10;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  Rvl = ((Wrd22.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (label_12)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_7)
  (Wrd13.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_6])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_6 7
#define ENVIRONMENT_LABEL_43_3 15
#define DEBUGGING_LABEL_43_2 14
#define OBJECT_43_0 13
#define EXECUTE_CACHE_43_8 9
#define EXECUTE_CACHE_43_7 11
#define FREE_REFERENCES_LABEL_43_0 8
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_43_4);
      goto ascii__syntax_entry_2;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ascii__syntax_entry_5)
DEFLABEL (ascii__syntax_entry_2)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_6 7
#define LABEL_44_7 9
#define LABEL_44_8 11
#define LABEL_44_9 13
#define LABEL_44_10 15
#define LABEL_44_11 17
#define LABEL_44_12 19
#define LABEL_44_13 21
#define LABEL_44_14 23
#define LABEL_44_15 25
#define ENVIRONMENT_LABEL_44_3 39
#define DEBUGGING_LABEL_44_2 38
#define OBJECT_44_3 37
#define OBJECT_44_2 36
#define OBJECT_44_1 35
#define OBJECT_44_0 34
#define FREE_REFERENCE_44_3 27
#define FREE_REFERENCE_44_2 28
#define FREE_REFERENCE_44_1 29
#define FREE_REFERENCE_44_0 30
#define FREE_ASSIGNMENT_44_1 32
#define FREE_ASSIGNMENT_44_0 33
#define FREE_REFERENCES_LABEL_44_0 26
#define NUMBER_OF_LINKER_SECTIONS_44_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd110;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd96;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd105;
  machine_word Wrd95;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd82;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_44_4);
      goto compile_pattern_char_4;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_44_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_44_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_44_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_44_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_44_10);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_44_11);
      goto label_12;

    case 8:
      current_block = (Rpc - LABEL_44_12);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_44_13);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_44_14);
      goto label_15;

    case 11:
      current_block = (Rpc - LABEL_44_15);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_pattern_char_18)
DEFLABEL (compile_pattern_char_4)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_42;
  Wrd6 = Wrd10;

DEFLABEL (label_41)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_40;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_39)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_38;
  Wrd20 = Wrd24;

DEFLABEL (label_37)
  Wrd19 = Wrd20;
  (Wrd26.Obj) = (* (Rsp++));
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd38.uLng) == 30))
    goto label_36;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_36;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd34.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_36;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd31.pChr) = (& ((Wrd35.pChr) [(Wrd29.Lng)]));
  (Wrd32.uLng) = ((unsigned long) (((unsigned char *) (Wrd31.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd27.Obj) = (MAKE_OBJECT (26, (Wrd32.uLng)));

DEFLABEL (label_35)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_44_0]));
  (Wrd52.Obj) = ((Wrd44.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd44.pObj) [0]) = (Wrd27.Obj);

DEFLABEL (label_32)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_31;
  Wrd57 = Wrd61;

DEFLABEL (label_30)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_29;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd63.Obj) = ((Wrd64.pObj) [1]);

DEFLABEL (label_28)
  (Wrd70.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_44_1]));
  (Wrd78.Obj) = ((Wrd70.pObj) [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if ((Wrd79.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd70.pObj) [0]) = (Wrd63.Obj);

DEFLABEL (label_25)
  (Wrd83.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_2]));
  (Wrd86.Obj) = ((Wrd83.pObj) [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd87.uLng) == 50)
    goto label_24;
  Wrd82 = Wrd86;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd90.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_3]));
  (Wrd93.Obj) = ((Wrd90.pObj) [0]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if ((Wrd94.uLng) == 50)
    goto label_22;
  Wrd89 = Wrd93;

DEFLABEL (label_21)
  Wrd88 = Wrd89;
  (Wrd95.Obj) = (* (Rsp++));
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd105.uLng) == 10))
    goto label_20;
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd100.uLng) == 26))
    goto label_20;
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if (! (((unsigned long) (Wrd101.Lng)) < ((unsigned long) (Wrd104.Lng))))
    goto label_20;
  (Wrd96.uLng) = (OBJECT_DATUM (Wrd95.Obj));
  (Wrd98.pObj) = (& ((Wrd102.pObj) [(Wrd96.Lng)]));
  (Wrd99.Obj) = ((Wrd98.pObj) [1]);
  (* (--Rsp)) = (Wrd99.Obj);

DEFLABEL (label_19)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_20)
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_3]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_14])), (Wrd90.pObj));

DEFLABEL (label_15)
  (Wrd89.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_13])), (Wrd83.pObj));

DEFLABEL (label_14)
  (Wrd82.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_27)
  if ((Wrd78.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_44_12])), (Wrd70.pObj), (Wrd63.Obj));

DEFLABEL (label_13)
  goto label_25;

DEFLABEL (label_29)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_12)
  (Wrd63.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_10])), (Wrd58.pObj));

DEFLABEL (label_11)
  (Wrd57.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_34)
  if ((Wrd52.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_44_9])), (Wrd44.pObj), (Wrd27.Obj));

DEFLABEL (label_10)
  goto label_32;

DEFLABEL (label_36)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_9)
  (Wrd27.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_7])), (Wrd21.pObj));

DEFLABEL (label_8)
  (Wrd20.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_5])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 9
#define DEBUGGING_LABEL_45_2 8
#define OBJECT_45_0 7
#define EXECUTE_CACHE_45_5 5
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_45_4);
      goto premature_end_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (premature_end_3)
DEFLABEL (premature_end_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_5 3
#define LABEL_46_4 5
#define LABEL_46_6 7
#define LABEL_46_7 9
#define LABEL_46_8 11
#define LABEL_46_9 13
#define LABEL_46_10 15
#define LABEL_46_11 17
#define LABEL_46_12 19
#define LABEL_46_13 21
#define LABEL_46_14 23
#define LABEL_46_15 25
#define LABEL_46_16 27
#define LABEL_46_17 29
#define LABEL_46_18 31
#define LABEL_46_19 33
#define LABEL_46_20 35
#define LABEL_46_21 37
#define LABEL_46_22 39
#define LABEL_46_23 41
#define LABEL_46_24 43
#define LABEL_46_25 45
#define LABEL_46_26 47
#define LABEL_46_27 49
#define LABEL_46_28 51
#define LABEL_46_29 53
#define LABEL_46_30 55
#define LABEL_46_31 57
#define LABEL_46_32 59
#define LABEL_46_33 61
#define LABEL_46_34 63
#define LABEL_46_35 65
#define LABEL_46_36 67
#define LABEL_46_37 69
#define LABEL_46_38 71
#define LABEL_46_39 73
#define LABEL_46_40 75
#define LABEL_46_41 77
#define LABEL_46_42 79
#define LABEL_46_43 81
#define LABEL_46_44 83
#define LABEL_46_45 85
#define LABEL_46_46 87
#define LABEL_46_47 89
#define LABEL_46_48 91
#define LABEL_46_49 93
#define LABEL_46_50 95
#define LABEL_46_51 97
#define LABEL_46_52 99
#define LABEL_46_53 101
#define LABEL_46_54 103
#define LABEL_46_55 105
#define LABEL_46_56 107
#define LABEL_46_57 109
#define LABEL_46_58 111
#define LABEL_46_59 113
#define LABEL_46_60 115
#define LABEL_46_61 117
#define LABEL_46_62 119
#define ENVIRONMENT_LABEL_46_3 152
#define DEBUGGING_LABEL_46_2 151
#define OBJECT_46_15 150
#define OBJECT_46_14 149
#define OBJECT_46_13 148
#define OBJECT_46_12 147
#define OBJECT_46_11 146
#define OBJECT_46_10 145
#define OBJECT_46_9 144
#define OBJECT_46_8 143
#define OBJECT_46_7 142
#define OBJECT_46_6 141
#define OBJECT_46_5 140
#define OBJECT_46_4 139
#define OBJECT_46_3 138
#define OBJECT_46_2 137
#define OBJECT_46_1 136
#define OBJECT_46_0 135
#define EXECUTE_CACHE_46_63 121
#define FREE_REFERENCE_46_5 124
#define FREE_REFERENCE_46_4 125
#define FREE_REFERENCE_46_3 126
#define FREE_REFERENCE_46_2 127
#define FREE_REFERENCE_46_1 128
#define FREE_REFERENCE_46_0 129
#define FREE_ASSIGNMENT_46_3 131
#define FREE_ASSIGNMENT_46_2 132
#define FREE_ASSIGNMENT_46_1 133
#define FREE_ASSIGNMENT_46_0 134
#define FREE_REFERENCES_LABEL_46_0 120
#define NUMBER_OF_LINKER_SECTIONS_46_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd220;
  machine_word Wrd214;
  machine_word Wrd215;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd205;
  machine_word Wrd206;
  machine_word Wrd207;
  machine_word Wrd204;
  machine_word Wrd198;
  machine_word Wrd199;
  machine_word Wrd200;
  machine_word Wrd192;
  machine_word Wrd197;
  machine_word Wrd196;
  machine_word Wrd193;
  machine_word Wrd186;
  machine_word Wrd190;
  machine_word Wrd188;
  machine_word Wrd189;
  machine_word Wrd187;
  machine_word Wrd182;
  machine_word Wrd176;
  machine_word Wrd177;
  machine_word Wrd178;
  machine_word Wrd175;
  machine_word Wrd169;
  machine_word Wrd170;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd162;
  machine_word Wrd163;
  machine_word Wrd164;
  machine_word Wrd156;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd157;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd134;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd228;
  machine_word Wrd225;
  machine_word Wrd222;
  machine_word Wrd221;
  machine_word Wrd223;
  machine_word Wrd114;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd103;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd378;
  machine_word Wrd377;
  machine_word Wrd369;
  machine_word Wrd366;
  machine_word Wrd368;
  machine_word Wrd367;
  machine_word Wrd360;
  machine_word Wrd365;
  machine_word Wrd364;
  machine_word Wrd361;
  machine_word Wrd355;
  machine_word Wrd354;
  machine_word Wrd347;
  machine_word Wrd346;
  machine_word Wrd388;
  machine_word Wrd385;
  machine_word Wrd382;
  machine_word Wrd381;
  machine_word Wrd383;
  machine_word Wrd340;
  machine_word Wrd345;
  machine_word Wrd344;
  machine_word Wrd341;
  machine_word Wrd336;
  machine_word Wrd335;
  machine_word Wrd338;
  machine_word Wrd337;
  machine_word Wrd331;
  machine_word Wrd330;
  machine_word Wrd322;
  machine_word Wrd319;
  machine_word Wrd321;
  machine_word Wrd318;
  machine_word Wrd312;
  machine_word Wrd317;
  machine_word Wrd316;
  machine_word Wrd313;
  machine_word Wrd305;
  machine_word Wrd310;
  machine_word Wrd309;
  machine_word Wrd306;
  machine_word Wrd302;
  machine_word Wrd301;
  machine_word Wrd293;
  machine_word Wrd290;
  machine_word Wrd292;
  machine_word Wrd291;
  machine_word Wrd284;
  machine_word Wrd289;
  machine_word Wrd288;
  machine_word Wrd285;
  machine_word Wrd279;
  machine_word Wrd278;
  machine_word Wrd271;
  machine_word Wrd270;
  machine_word Wrd396;
  machine_word Wrd393;
  machine_word Wrd390;
  machine_word Wrd389;
  machine_word Wrd391;
  machine_word Wrd264;
  machine_word Wrd269;
  machine_word Wrd268;
  machine_word Wrd265;
  machine_word Wrd260;
  machine_word Wrd259;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd255;
  machine_word Wrd254;
  machine_word Wrd246;
  machine_word Wrd243;
  machine_word Wrd245;
  machine_word Wrd242;
  machine_word Wrd236;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd237;
  machine_word Wrd229;
  machine_word Wrd234;
  machine_word Wrd233;
  machine_word Wrd230;
  machine_word Wrd100;
  machine_word Wrd94;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd74;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd66;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd535;
  machine_word Wrd534;
  machine_word Wrd526;
  machine_word Wrd523;
  machine_word Wrd525;
  machine_word Wrd524;
  machine_word Wrd517;
  machine_word Wrd522;
  machine_word Wrd521;
  machine_word Wrd518;
  machine_word Wrd512;
  machine_word Wrd511;
  machine_word Wrd504;
  machine_word Wrd503;
  machine_word Wrd545;
  machine_word Wrd542;
  machine_word Wrd539;
  machine_word Wrd538;
  machine_word Wrd540;
  machine_word Wrd497;
  machine_word Wrd502;
  machine_word Wrd501;
  machine_word Wrd498;
  machine_word Wrd494;
  machine_word Wrd493;
  machine_word Wrd495;
  machine_word Wrd486;
  machine_word Wrd491;
  machine_word Wrd490;
  machine_word Wrd487;
  machine_word Wrd482;
  machine_word Wrd481;
  machine_word Wrd473;
  machine_word Wrd470;
  machine_word Wrd472;
  machine_word Wrd471;
  machine_word Wrd464;
  machine_word Wrd469;
  machine_word Wrd468;
  machine_word Wrd465;
  machine_word Wrd459;
  machine_word Wrd458;
  machine_word Wrd451;
  machine_word Wrd450;
  machine_word Wrd553;
  machine_word Wrd550;
  machine_word Wrd547;
  machine_word Wrd546;
  machine_word Wrd548;
  machine_word Wrd444;
  machine_word Wrd449;
  machine_word Wrd448;
  machine_word Wrd445;
  machine_word Wrd440;
  machine_word Wrd439;
  machine_word Wrd442;
  machine_word Wrd441;
  machine_word Wrd435;
  machine_word Wrd434;
  machine_word Wrd427;
  machine_word Wrd426;
  machine_word Wrd423;
  machine_word Wrd422;
  machine_word Wrd414;
  machine_word Wrd411;
  machine_word Wrd413;
  machine_word Wrd410;
  machine_word Wrd404;
  machine_word Wrd409;
  machine_word Wrd408;
  machine_word Wrd405;
  machine_word Wrd397;
  machine_word Wrd402;
  machine_word Wrd401;
  machine_word Wrd398;
  machine_word Wrd59;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
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
      current_block = (Rpc - LABEL_46_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_46_4);
      goto normal_char_43;

    case 2:
      current_block = (Rpc - LABEL_46_6);
      goto label_45;

    case 3:
      current_block = (Rpc - LABEL_46_7);
      goto label_50;

    case 4:
      current_block = (Rpc - LABEL_46_8);
      goto label_87;

    case 5:
      current_block = (Rpc - LABEL_46_9);
      goto label_88;

    case 6:
      current_block = (Rpc - LABEL_46_10);
      goto label_89;

    case 7:
      current_block = (Rpc - LABEL_46_11);
      goto label_90;

    case 8:
      current_block = (Rpc - LABEL_46_12);
      goto label_91;

    case 9:
      current_block = (Rpc - LABEL_46_13);
      goto label_101;

    case 10:
      current_block = (Rpc - LABEL_46_14);
      goto label_92;

    case 11:
      current_block = (Rpc - LABEL_46_15);
      goto label_93;

    case 12:
      current_block = (Rpc - LABEL_46_16);
      goto label_94;

    case 13:
      current_block = (Rpc - LABEL_46_17);
      goto label_95;

    case 14:
      current_block = (Rpc - LABEL_46_18);
      goto label_96;

    case 15:
      current_block = (Rpc - LABEL_46_19);
      goto label_100;

    case 16:
      current_block = (Rpc - LABEL_46_20);
      goto label_97;

    case 17:
      current_block = (Rpc - LABEL_46_21);
      goto label_98;

    case 18:
      current_block = (Rpc - LABEL_46_22);
      goto label_99;

    case 19:
      current_block = (Rpc - LABEL_46_23);
      goto label_51;

    case 20:
      current_block = (Rpc - LABEL_46_24);
      goto label_52;

    case 21:
      current_block = (Rpc - LABEL_46_25);
      goto label_53;

    case 22:
      current_block = (Rpc - LABEL_46_26);
      goto label_54;

    case 23:
      current_block = (Rpc - LABEL_46_27);
      goto label_55;

    case 24:
      current_block = (Rpc - LABEL_46_28);
      goto label_71;

    case 25:
      current_block = (Rpc - LABEL_46_29);
      goto label_72;

    case 26:
      current_block = (Rpc - LABEL_46_30);
      goto label_73;

    case 27:
      current_block = (Rpc - LABEL_46_31);
      goto label_74;

    case 28:
      current_block = (Rpc - LABEL_46_32);
      goto label_86;

    case 29:
      current_block = (Rpc - LABEL_46_33);
      goto label_75;

    case 30:
      current_block = (Rpc - LABEL_46_34);
      goto label_76;

    case 31:
      current_block = (Rpc - LABEL_46_35);
      goto label_77;

    case 32:
      current_block = (Rpc - LABEL_46_36);
      goto label_78;

    case 33:
      current_block = (Rpc - LABEL_46_37);
      goto label_79;

    case 34:
      current_block = (Rpc - LABEL_46_38);
      goto label_80;

    case 35:
      current_block = (Rpc - LABEL_46_39);
      goto label_81;

    case 36:
      current_block = (Rpc - LABEL_46_40);
      goto label_85;

    case 37:
      current_block = (Rpc - LABEL_46_41);
      goto label_82;

    case 38:
      current_block = (Rpc - LABEL_46_42);
      goto label_83;

    case 39:
      current_block = (Rpc - LABEL_46_43);
      goto label_84;

    case 40:
      current_block = (Rpc - LABEL_46_44);
      goto label_56;

    case 41:
      current_block = (Rpc - LABEL_46_45);
      goto label_57;

    case 42:
      current_block = (Rpc - LABEL_46_46);
      goto label_70;

    case 43:
      current_block = (Rpc - LABEL_46_47);
      goto label_58;

    case 44:
      current_block = (Rpc - LABEL_46_48);
      goto label_59;

    case 45:
      current_block = (Rpc - LABEL_46_49);
      goto label_60;

    case 46:
      current_block = (Rpc - LABEL_46_50);
      goto label_61;

    case 47:
      current_block = (Rpc - LABEL_46_51);
      goto label_62;

    case 48:
      current_block = (Rpc - LABEL_46_52);
      goto label_63;

    case 49:
      current_block = (Rpc - LABEL_46_53);
      goto label_64;

    case 50:
      current_block = (Rpc - LABEL_46_54);
      goto label_65;

    case 51:
      current_block = (Rpc - LABEL_46_55);
      goto label_66;

    case 52:
      current_block = (Rpc - LABEL_46_56);
      goto label_67;

    case 53:
      current_block = (Rpc - LABEL_46_57);
      goto label_68;

    case 54:
      current_block = (Rpc - LABEL_46_58);
      goto label_69;

    case 55:
      current_block = (Rpc - LABEL_46_59);
      goto label_46;

    case 56:
      current_block = (Rpc - LABEL_46_60);
      goto label_47;

    case 57:
      current_block = (Rpc - LABEL_46_61);
      goto label_48;

    case 58:
      current_block = (Rpc - LABEL_46_62);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (normal_char_103)
DEFLABEL (normal_char_43)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_234;
  Wrd6 = Wrd10;

DEFLABEL (label_233)
  if ((Wrd6.Obj) == (current_block [OBJECT_46_0]))
    goto label_230;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_46_11]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_46_12]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_46_13]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_46_14]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_229;
  Wrd21 = Wrd25;

DEFLABEL (label_228)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_227;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_226)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_5]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_225;
  Wrd35 = Wrd39;

DEFLABEL (label_224)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd53.uLng) == 30))
    goto label_223;
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_223;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) (Wrd49.Lng)) < ((unsigned long) (Wrd52.Lng))))
    goto label_223;
  (Wrd43.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd45.pChr) = (& ((Wrd50.pChr) [(Wrd43.Lng)]));
  (Wrd46.uLng) = ((unsigned long) (((unsigned char *) (Wrd45.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd47.Obj) = (MAKE_OBJECT (26, (Wrd46.uLng)));
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_222)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_63]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_141;

DEFLABEL (label_140)
  (Wrd398.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_2]));
  (Wrd401.Obj) = ((Wrd398.pObj) [0]);
  (Wrd402.uLng) = (OBJECT_TYPE (Wrd401.Obj));
  if ((Wrd402.uLng) == 50)
    goto label_139;
  Wrd397 = Wrd401;

DEFLABEL (label_138)
  (* (--Rsp)) = (Wrd397.Obj);
  (Wrd405.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_3]));
  (Wrd408.Obj) = ((Wrd405.pObj) [0]);
  (Wrd409.uLng) = (OBJECT_TYPE (Wrd408.Obj));
  if ((Wrd409.uLng) == 50)
    goto label_137;
  Wrd404 = Wrd408;

DEFLABEL (label_136)
  (Wrd410.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd404.Obj);
  (* (Rhp++)) = (Wrd410.Obj);
  (Wrd413.pObj) = (& (Rhp [-2]));
  (Wrd411.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd413.pObj)));
  (Wrd414.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_0]));
  (Wrd422.Obj) = ((Wrd414.pObj) [0]);
  (Wrd423.uLng) = (OBJECT_TYPE (Wrd422.Obj));
  if ((Wrd423.uLng) == 50)
    goto label_135;

DEFLABEL (label_134)
  ((Wrd414.pObj) [0]) = (Wrd411.Obj);

DEFLABEL (label_133)
  (Wrd426.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_1]));
  (Wrd427.Obj) = (current_block [OBJECT_46_1]);
  (Wrd434.Obj) = ((Wrd426.pObj) [0]);
  (Wrd435.uLng) = (OBJECT_TYPE (Wrd434.Obj));
  if ((Wrd435.uLng) == 50)
    goto label_132;

DEFLABEL (label_131)
  ((Wrd426.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_130)
  (Wrd441.Obj) = (current_block [OBJECT_46_2]);
  (Wrd442.Obj) = (current_block [OBJECT_46_0]);
  (* (Rhp++)) = (Wrd441.Obj);
  (* (Rhp++)) = (Wrd442.Obj);
  (Wrd439.pObj) = (& (Rhp [-2]));
  (Wrd440.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd439.pObj)));
  (* (--Rsp)) = (Wrd440.Obj);
  (Wrd445.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_2]));
  (Wrd448.Obj) = ((Wrd445.pObj) [0]);
  (Wrd449.uLng) = (OBJECT_TYPE (Wrd448.Obj));
  if ((Wrd449.uLng) == 50)
    goto label_129;
  Wrd444 = Wrd448;

DEFLABEL (label_128)
  (Wrd548.uLng) = (OBJECT_TYPE (Wrd444.Obj));
  if (! ((Wrd548.uLng) == 1))
    goto label_127;
  (Wrd546.pObj) = (OBJECT_ADDRESS (Wrd444.Obj));
  (Wrd547.Obj) = (Rsp [0]);
  ((Wrd546.pObj) [1]) = (Wrd547.Obj);

DEFLABEL (label_126)
  (Wrd450.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_2]));
  (Wrd451.Obj) = (Rsp [0]);
  (Wrd458.Obj) = ((Wrd450.pObj) [0]);
  (Wrd459.uLng) = (OBJECT_TYPE (Wrd458.Obj));
  if ((Wrd459.uLng) == 50)
    goto label_125;

DEFLABEL (label_124)
  ((Wrd450.pObj) [0]) = (Wrd451.Obj);

DEFLABEL (label_123)
  Rsp = (& (Rsp [1]));
  (Wrd465.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_3]));
  (Wrd468.Obj) = ((Wrd465.pObj) [0]);
  (Wrd469.uLng) = (OBJECT_TYPE (Wrd468.Obj));
  if ((Wrd469.uLng) == 50)
    goto label_122;
  Wrd464 = Wrd468;

DEFLABEL (label_121)
  (Wrd471.Lng) = (FIXNUM_TO_LONG (Wrd464.Obj));
  (Wrd472.Lng) = ((Wrd471.Lng) + 1L);
  (Wrd470.Obj) = (LONG_TO_FIXNUM (Wrd472.Lng));
  (Wrd473.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_3]));
  (Wrd481.Obj) = ((Wrd473.pObj) [0]);
  (Wrd482.uLng) = (OBJECT_TYPE (Wrd481.Obj));
  if ((Wrd482.uLng) == 50)
    goto label_120;

DEFLABEL (label_119)
  ((Wrd473.pObj) [0]) = (Wrd470.Obj);

DEFLABEL (label_118)
  (Wrd487.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_4]));
  (Wrd490.Obj) = ((Wrd487.pObj) [0]);
  (Wrd491.uLng) = (OBJECT_TYPE (Wrd490.Obj));
  if ((Wrd491.uLng) == 50)
    goto label_117;
  Wrd486 = Wrd490;

DEFLABEL (label_116)
  (Wrd495.Obj) = (current_block [OBJECT_46_0]);
  (* (Rhp++)) = (Wrd486.Obj);
  (* (Rhp++)) = (Wrd495.Obj);
  (Wrd493.pObj) = (& (Rhp [-2]));
  (Wrd494.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd493.pObj)));
  (* (--Rsp)) = (Wrd494.Obj);
  (Wrd498.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_2]));
  (Wrd501.Obj) = ((Wrd498.pObj) [0]);
  (Wrd502.uLng) = (OBJECT_TYPE (Wrd501.Obj));
  if ((Wrd502.uLng) == 50)
    goto label_115;
  Wrd497 = Wrd501;

DEFLABEL (label_114)
  (Wrd540.uLng) = (OBJECT_TYPE (Wrd497.Obj));
  if (! ((Wrd540.uLng) == 1))
    goto label_113;
  (Wrd538.pObj) = (OBJECT_ADDRESS (Wrd497.Obj));
  (Wrd539.Obj) = (Rsp [0]);
  ((Wrd538.pObj) [1]) = (Wrd539.Obj);

DEFLABEL (label_112)
  (Wrd503.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_2]));
  (Wrd504.Obj) = (Rsp [0]);
  (Wrd511.Obj) = ((Wrd503.pObj) [0]);
  (Wrd512.uLng) = (OBJECT_TYPE (Wrd511.Obj));
  if ((Wrd512.uLng) == 50)
    goto label_111;

DEFLABEL (label_110)
  ((Wrd503.pObj) [0]) = (Wrd504.Obj);

DEFLABEL (label_109)
  Rsp = (& (Rsp [1]));
  (Wrd518.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_3]));
  (Wrd521.Obj) = ((Wrd518.pObj) [0]);
  (Wrd522.uLng) = (OBJECT_TYPE (Wrd521.Obj));
  if ((Wrd522.uLng) == 50)
    goto label_108;
  Wrd517 = Wrd521;

DEFLABEL (label_107)
  (Wrd524.Lng) = (FIXNUM_TO_LONG (Wrd517.Obj));
  (Wrd525.Lng) = ((Wrd524.Lng) + 1L);
  (Wrd523.Obj) = (LONG_TO_FIXNUM (Wrd525.Lng));
  (Wrd526.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_3]));
  (Wrd534.Obj) = ((Wrd526.pObj) [0]);
  (Wrd535.uLng) = (OBJECT_TYPE (Wrd534.Obj));
  if ((Wrd535.uLng) == 50)
    goto label_106;

DEFLABEL (label_105)
  ((Wrd526.pObj) [0]) = (Wrd523.Obj);

DEFLABEL (label_104)
  Rvl = (current_block [OBJECT_46_10]);
  goto pop_return;

DEFLABEL (label_106)
  if ((Wrd534.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_105;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_22])), (Wrd526.pObj), (Wrd523.Obj));

DEFLABEL (label_99)
  goto label_104;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_21])), (Wrd518.pObj));

DEFLABEL (label_98)
  (Wrd517.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_111)
  if ((Wrd511.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_110;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_20])), (Wrd503.pObj), (Wrd504.Obj));

DEFLABEL (label_97)
  goto label_109;

DEFLABEL (label_113)
  (Wrd542.Obj) = (Rsp [0]);
  (Wrd545.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_19]))));
  (* (--Rsp)) = (Wrd545.Obj);
  (* (--Rsp)) = (Wrd542.Obj);
  (* (--Rsp)) = (Wrd497.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 2);

DEFLABEL (label_100)
  goto label_112;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_18])), (Wrd498.pObj));

DEFLABEL (label_96)
  (Wrd497.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_17])), (Wrd487.pObj));

DEFLABEL (label_95)
  (Wrd486.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_120)
  if ((Wrd481.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_119;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_16])), (Wrd473.pObj), (Wrd470.Obj));

DEFLABEL (label_94)
  goto label_118;

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_15])), (Wrd465.pObj));

DEFLABEL (label_93)
  (Wrd464.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_125)
  if ((Wrd458.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_124;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_14])), (Wrd450.pObj), (Wrd451.Obj));

DEFLABEL (label_92)
  goto label_123;

DEFLABEL (label_127)
  (Wrd550.Obj) = (Rsp [0]);
  (Wrd553.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd553.Obj);
  (* (--Rsp)) = (Wrd550.Obj);
  (* (--Rsp)) = (Wrd444.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 2);

DEFLABEL (label_101)
  goto label_126;

DEFLABEL (label_129)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_12])), (Wrd445.pObj));

DEFLABEL (label_91)
  (Wrd444.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_132)
  if ((Wrd434.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_131;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_11])), (Wrd426.pObj), (Wrd427.Obj));

DEFLABEL (label_90)
  goto label_130;

DEFLABEL (label_135)
  if ((Wrd422.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_134;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_10])), (Wrd414.pObj), (Wrd411.Obj));

DEFLABEL (label_89)
  goto label_133;

DEFLABEL (label_137)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_9])), (Wrd405.pObj));

DEFLABEL (label_88)
  (Wrd404.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_8])), (Wrd398.pObj));

DEFLABEL (label_87)
  (Wrd397.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_1]));
  (Wrd70.Obj) = ((Wrd67.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_221;
  Wrd66 = Wrd70;

DEFLABEL (label_220)
  if ((Wrd66.Obj) == ((SCHEME_OBJECT) 0))
    goto label_174;
  (Wrd75.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_1]));
  (Wrd78.Obj) = ((Wrd75.pObj) [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if ((Wrd79.uLng) == 50)
    goto label_219;
  Wrd74 = Wrd78;

DEFLABEL (label_218)
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd82.uLng) == 1))
    goto label_217;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd80.Obj) = ((Wrd81.pObj) [1]);

DEFLABEL (label_216)
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd89.uLng) == 1))
    goto label_215;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd87.Obj) = ((Wrd88.pObj) [1]);

DEFLABEL (label_214)
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd96.uLng) == 1))
    goto label_213;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd94.Obj) = ((Wrd95.pObj) [0]);

DEFLABEL (label_212)
  if ((Wrd94.Obj) == (current_block [OBJECT_46_6]))
    goto label_174;

DEFLABEL (label_173)
  (Wrd104.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_4]));
  (Wrd107.Obj) = ((Wrd104.pObj) [0]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if ((Wrd108.uLng) == 50)
    goto label_172;
  Wrd103 = Wrd107;

DEFLABEL (label_171)
  (Wrd112.Obj) = (current_block [OBJECT_46_0]);
  (* (Rhp++)) = (Wrd103.Obj);
  (* (Rhp++)) = (Wrd112.Obj);
  (Wrd110.pObj) = (& (Rhp [-2]));
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd110.pObj)));
  (* (--Rsp)) = (Wrd111.Obj);
  (Wrd115.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_2]));
  (Wrd118.Obj) = ((Wrd115.pObj) [0]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if ((Wrd119.uLng) == 50)
    goto label_170;
  Wrd114 = Wrd118;

DEFLABEL (label_169)
  (Wrd223.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd223.uLng) == 1))
    goto label_168;
  (Wrd221.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd222.Obj) = (Rsp [0]);
  ((Wrd221.pObj) [1]) = (Wrd222.Obj);

DEFLABEL (label_167)
  (Wrd120.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_2]));
  (Wrd121.Obj) = (Rsp [0]);
  (Wrd128.Obj) = ((Wrd120.pObj) [0]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if ((Wrd129.uLng) == 50)
    goto label_166;

DEFLABEL (label_165)
  ((Wrd120.pObj) [0]) = (Wrd121.Obj);

DEFLABEL (label_164)
  Rsp = (& (Rsp [1]));
  (Wrd135.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_3]));
  (Wrd138.Obj) = ((Wrd135.pObj) [0]);
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if ((Wrd139.uLng) == 50)
    goto label_163;
  Wrd134 = Wrd138;

DEFLABEL (label_162)
  (Wrd141.Lng) = (FIXNUM_TO_LONG (Wrd134.Obj));
  (Wrd142.Lng) = ((Wrd141.Lng) + 1L);
  (Wrd140.Obj) = (LONG_TO_FIXNUM (Wrd142.Lng));
  (Wrd143.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_3]));
  (Wrd151.Obj) = ((Wrd143.pObj) [0]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if ((Wrd152.uLng) == 50)
    goto label_161;

DEFLABEL (label_160)
  ((Wrd143.pObj) [0]) = (Wrd140.Obj);

DEFLABEL (label_159)
  (Wrd157.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_1]));
  (Wrd160.Obj) = ((Wrd157.pObj) [0]);
  (Wrd161.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if ((Wrd161.uLng) == 50)
    goto label_158;
  Wrd156 = Wrd160;

DEFLABEL (label_157)
  (Wrd164.uLng) = (OBJECT_TYPE (Wrd156.Obj));
  if (! ((Wrd164.uLng) == 1))
    goto label_156;
  (Wrd163.pObj) = (OBJECT_ADDRESS (Wrd156.Obj));
  (Wrd162.Obj) = ((Wrd163.pObj) [1]);

DEFLABEL (label_155)
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd162.Obj));
  if (! ((Wrd171.uLng) == 1))
    goto label_154;
  (Wrd170.pObj) = (OBJECT_ADDRESS (Wrd162.Obj));
  (Wrd169.Obj) = ((Wrd170.pObj) [1]);

DEFLABEL (label_153)
  (Wrd178.uLng) = (OBJECT_TYPE (Wrd169.Obj));
  if (! ((Wrd178.uLng) == 1))
    goto label_152;
  (Wrd177.pObj) = (OBJECT_ADDRESS (Wrd169.Obj));
  (Wrd176.Obj) = ((Wrd177.pObj) [0]);

DEFLABEL (label_151)
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd176.Obj));
  if (! ((Wrd187.uLng) == 26))
    goto label_150;
  (Wrd189.Lng) = (FIXNUM_TO_LONG (Wrd176.Obj));
  (Wrd188.Lng) = ((Wrd189.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd188.Lng)))
    goto label_150;
  (Wrd190.Obj) = (LONG_TO_FIXNUM (Wrd188.Lng));
  (* (--Rsp)) = (Wrd190.Obj);

DEFLABEL (label_149)
  (Wrd193.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_1]));
  (Wrd196.Obj) = ((Wrd193.pObj) [0]);
  (Wrd197.uLng) = (OBJECT_TYPE (Wrd196.Obj));
  if ((Wrd197.uLng) == 50)
    goto label_148;
  Wrd192 = Wrd196;

DEFLABEL (label_147)
  (Wrd200.uLng) = (OBJECT_TYPE (Wrd192.Obj));
  if (! ((Wrd200.uLng) == 1))
    goto label_146;
  (Wrd199.pObj) = (OBJECT_ADDRESS (Wrd192.Obj));
  (Wrd198.Obj) = ((Wrd199.pObj) [1]);

DEFLABEL (label_145)
  (Wrd207.uLng) = (OBJECT_TYPE (Wrd198.Obj));
  if (! ((Wrd207.uLng) == 1))
    goto label_144;
  (Wrd206.pObj) = (OBJECT_ADDRESS (Wrd198.Obj));
  (Wrd205.Obj) = ((Wrd206.pObj) [1]);

DEFLABEL (label_143)
  (Wrd212.Obj) = (* (Rsp++));
  (Wrd215.uLng) = (OBJECT_TYPE (Wrd205.Obj));
  if (! ((Wrd215.uLng) == 1))
    goto label_142;
  (Wrd214.pObj) = (OBJECT_ADDRESS (Wrd205.Obj));
  ((Wrd214.pObj) [0]) = (Wrd212.Obj);
  goto label_104;

DEFLABEL (label_142)
  (Wrd220.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_58]))));
  (* (--Rsp)) = (Wrd220.Obj);
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 2);

DEFLABEL (label_69)
  goto label_104;

DEFLABEL (label_144)
  (Wrd211.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_57]))));
  (* (--Rsp)) = (Wrd211.Obj);
  (* (--Rsp)) = (Wrd198.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 1);

DEFLABEL (label_68)
  (Wrd205.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  (Wrd204.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_56]))));
  (* (--Rsp)) = (Wrd204.Obj);
  (* (--Rsp)) = (Wrd192.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 1);

DEFLABEL (label_67)
  (Wrd198.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_55])), (Wrd193.pObj));

DEFLABEL (label_66)
  (Wrd192.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_54]))));
  (* (--Rsp)) = (Wrd186.Obj);
  (* (--Rsp)) = (Wrd176.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  (Wrd182.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_53]))));
  (* (--Rsp)) = (Wrd182.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_5]), 1);

DEFLABEL (label_64)
  (Wrd176.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_52]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 1);

DEFLABEL (label_63)
  (Wrd169.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  (Wrd168.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_51]))));
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 1);

DEFLABEL (label_62)
  (Wrd162.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_50])), (Wrd157.pObj));

DEFLABEL (label_61)
  (Wrd156.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_161)
  if ((Wrd151.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_160;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_49])), (Wrd143.pObj), (Wrd140.Obj));

DEFLABEL (label_60)
  goto label_159;

DEFLABEL (label_163)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_48])), (Wrd135.pObj));

DEFLABEL (label_59)
  (Wrd134.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_166)
  if ((Wrd128.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_165;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_47])), (Wrd120.pObj), (Wrd121.Obj));

DEFLABEL (label_58)
  goto label_164;

DEFLABEL (label_168)
  (Wrd225.Obj) = (Rsp [0]);
  (Wrd228.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_46]))));
  (* (--Rsp)) = (Wrd228.Obj);
  (* (--Rsp)) = (Wrd225.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 2);

DEFLABEL (label_70)
  goto label_167;

DEFLABEL (label_170)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_45])), (Wrd115.pObj));

DEFLABEL (label_57)
  (Wrd114.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_44])), (Wrd104.pObj));

DEFLABEL (label_56)
  (Wrd103.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  (Wrd230.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_2]));
  (Wrd233.Obj) = ((Wrd230.pObj) [0]);
  (Wrd234.uLng) = (OBJECT_TYPE (Wrd233.Obj));
  if ((Wrd234.uLng) == 50)
    goto label_211;
  Wrd229 = Wrd233;

DEFLABEL (label_210)
  (* (--Rsp)) = (Wrd229.Obj);
  (Wrd237.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_3]));
  (Wrd240.Obj) = ((Wrd237.pObj) [0]);
  (Wrd241.uLng) = (OBJECT_TYPE (Wrd240.Obj));
  if ((Wrd241.uLng) == 50)
    goto label_209;
  Wrd236 = Wrd240;

DEFLABEL (label_208)
  (Wrd242.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd236.Obj);
  (* (Rhp++)) = (Wrd242.Obj);
  (Wrd245.pObj) = (& (Rhp [-2]));
  (Wrd243.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd245.pObj)));
  (Wrd246.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_0]));
  (Wrd254.Obj) = ((Wrd246.pObj) [0]);
  (Wrd255.uLng) = (OBJECT_TYPE (Wrd254.Obj));
  if ((Wrd255.uLng) == 50)
    goto label_207;

DEFLABEL (label_206)
  ((Wrd246.pObj) [0]) = (Wrd243.Obj);

DEFLABEL (label_205)
  (Wrd261.Obj) = (current_block [OBJECT_46_7]);
  (Wrd262.Obj) = (current_block [OBJECT_46_0]);
  (* (Rhp++)) = (Wrd261.Obj);
  (* (Rhp++)) = (Wrd262.Obj);
  (Wrd259.pObj) = (& (Rhp [-2]));
  (Wrd260.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd259.pObj)));
  (* (--Rsp)) = (Wrd260.Obj);
  (Wrd265.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_2]));
  (Wrd268.Obj) = ((Wrd265.pObj) [0]);
  (Wrd269.uLng) = (OBJECT_TYPE (Wrd268.Obj));
  if ((Wrd269.uLng) == 50)
    goto label_204;
  Wrd264 = Wrd268;

DEFLABEL (label_203)
  (Wrd391.uLng) = (OBJECT_TYPE (Wrd264.Obj));
  if (! ((Wrd391.uLng) == 1))
    goto label_202;
  (Wrd389.pObj) = (OBJECT_ADDRESS (Wrd264.Obj));
  (Wrd390.Obj) = (Rsp [0]);
  ((Wrd389.pObj) [1]) = (Wrd390.Obj);

DEFLABEL (label_201)
  (Wrd270.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_2]));
  (Wrd271.Obj) = (Rsp [0]);
  (Wrd278.Obj) = ((Wrd270.pObj) [0]);
  (Wrd279.uLng) = (OBJECT_TYPE (Wrd278.Obj));
  if ((Wrd279.uLng) == 50)
    goto label_200;

DEFLABEL (label_199)
  ((Wrd270.pObj) [0]) = (Wrd271.Obj);

DEFLABEL (label_198)
  Rsp = (& (Rsp [1]));
  (Wrd285.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_3]));
  (Wrd288.Obj) = ((Wrd285.pObj) [0]);
  (Wrd289.uLng) = (OBJECT_TYPE (Wrd288.Obj));
  if ((Wrd289.uLng) == 50)
    goto label_197;
  Wrd284 = Wrd288;

DEFLABEL (label_196)
  (Wrd291.Lng) = (FIXNUM_TO_LONG (Wrd284.Obj));
  (Wrd292.Lng) = ((Wrd291.Lng) + 1L);
  (Wrd290.Obj) = (LONG_TO_FIXNUM (Wrd292.Lng));
  (Wrd293.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_3]));
  (Wrd301.Obj) = ((Wrd293.pObj) [0]);
  (Wrd302.uLng) = (OBJECT_TYPE (Wrd301.Obj));
  if ((Wrd302.uLng) == 50)
    goto label_195;

DEFLABEL (label_194)
  ((Wrd293.pObj) [0]) = (Wrd290.Obj);

DEFLABEL (label_193)
  (Wrd306.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_2]));
  (Wrd309.Obj) = ((Wrd306.pObj) [0]);
  (Wrd310.uLng) = (OBJECT_TYPE (Wrd309.Obj));
  if ((Wrd310.uLng) == 50)
    goto label_192;
  Wrd305 = Wrd309;

DEFLABEL (label_191)
  (* (--Rsp)) = (Wrd305.Obj);
  (Wrd313.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_3]));
  (Wrd316.Obj) = ((Wrd313.pObj) [0]);
  (Wrd317.uLng) = (OBJECT_TYPE (Wrd316.Obj));
  if ((Wrd317.uLng) == 50)
    goto label_190;
  Wrd312 = Wrd316;

DEFLABEL (label_189)
  (Wrd318.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd312.Obj);
  (* (Rhp++)) = (Wrd318.Obj);
  (Wrd321.pObj) = (& (Rhp [-2]));
  (Wrd319.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd321.pObj)));
  (Wrd322.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_1]));
  (Wrd330.Obj) = ((Wrd322.pObj) [0]);
  (Wrd331.uLng) = (OBJECT_TYPE (Wrd330.Obj));
  if ((Wrd331.uLng) == 50)
    goto label_188;

DEFLABEL (label_187)
  ((Wrd322.pObj) [0]) = (Wrd319.Obj);

DEFLABEL (label_186)
  (Wrd337.Obj) = (current_block [OBJECT_46_8]);
  (Wrd338.Obj) = (current_block [OBJECT_46_0]);
  (* (Rhp++)) = (Wrd337.Obj);
  (* (Rhp++)) = (Wrd338.Obj);
  (Wrd335.pObj) = (& (Rhp [-2]));
  (Wrd336.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd335.pObj)));
  (* (--Rsp)) = (Wrd336.Obj);
  (Wrd341.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_2]));
  (Wrd344.Obj) = ((Wrd341.pObj) [0]);
  (Wrd345.uLng) = (OBJECT_TYPE (Wrd344.Obj));
  if ((Wrd345.uLng) == 50)
    goto label_185;
  Wrd340 = Wrd344;

DEFLABEL (label_184)
  (Wrd383.uLng) = (OBJECT_TYPE (Wrd340.Obj));
  if (! ((Wrd383.uLng) == 1))
    goto label_183;
  (Wrd381.pObj) = (OBJECT_ADDRESS (Wrd340.Obj));
  (Wrd382.Obj) = (Rsp [0]);
  ((Wrd381.pObj) [1]) = (Wrd382.Obj);

DEFLABEL (label_182)
  (Wrd346.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_2]));
  (Wrd347.Obj) = (Rsp [0]);
  (Wrd354.Obj) = ((Wrd346.pObj) [0]);
  (Wrd355.uLng) = (OBJECT_TYPE (Wrd354.Obj));
  if ((Wrd355.uLng) == 50)
    goto label_181;

DEFLABEL (label_180)
  ((Wrd346.pObj) [0]) = (Wrd347.Obj);

DEFLABEL (label_179)
  Rsp = (& (Rsp [1]));
  (Wrd361.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_3]));
  (Wrd364.Obj) = ((Wrd361.pObj) [0]);
  (Wrd365.uLng) = (OBJECT_TYPE (Wrd364.Obj));
  if ((Wrd365.uLng) == 50)
    goto label_178;
  Wrd360 = Wrd364;

DEFLABEL (label_177)
  (Wrd367.Lng) = (FIXNUM_TO_LONG (Wrd360.Obj));
  (Wrd368.Lng) = ((Wrd367.Lng) + 1L);
  (Wrd366.Obj) = (LONG_TO_FIXNUM (Wrd368.Lng));
  (Wrd369.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_3]));
  (Wrd377.Obj) = ((Wrd369.pObj) [0]);
  (Wrd378.uLng) = (OBJECT_TYPE (Wrd377.Obj));
  if ((Wrd378.uLng) == 50)
    goto label_176;

DEFLABEL (label_175)
  ((Wrd369.pObj) [0]) = (Wrd366.Obj);
  goto label_173;

DEFLABEL (label_176)
  if ((Wrd377.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_175;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_43])), (Wrd369.pObj), (Wrd366.Obj));

DEFLABEL (label_84)
  goto label_173;

DEFLABEL (label_178)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_42])), (Wrd361.pObj));

DEFLABEL (label_83)
  (Wrd360.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_181)
  if ((Wrd354.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_180;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_41])), (Wrd346.pObj), (Wrd347.Obj));

DEFLABEL (label_82)
  goto label_179;

DEFLABEL (label_183)
  (Wrd385.Obj) = (Rsp [0]);
  (Wrd388.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_40]))));
  (* (--Rsp)) = (Wrd388.Obj);
  (* (--Rsp)) = (Wrd385.Obj);
  (* (--Rsp)) = (Wrd340.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 2);

DEFLABEL (label_85)
  goto label_182;

DEFLABEL (label_185)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_39])), (Wrd341.pObj));

DEFLABEL (label_81)
  (Wrd340.Obj) = Rvl;
  goto label_184;

DEFLABEL (label_188)
  if ((Wrd330.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_187;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_38])), (Wrd322.pObj), (Wrd319.Obj));

DEFLABEL (label_80)
  goto label_186;

DEFLABEL (label_190)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_37])), (Wrd313.pObj));

DEFLABEL (label_79)
  (Wrd312.Obj) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_36])), (Wrd306.pObj));

DEFLABEL (label_78)
  (Wrd305.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_195)
  if ((Wrd301.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_194;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_35])), (Wrd293.pObj), (Wrd290.Obj));

DEFLABEL (label_77)
  goto label_193;

DEFLABEL (label_197)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_34])), (Wrd285.pObj));

DEFLABEL (label_76)
  (Wrd284.Obj) = Rvl;
  goto label_196;

DEFLABEL (label_200)
  if ((Wrd278.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_199;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_33])), (Wrd270.pObj), (Wrd271.Obj));

DEFLABEL (label_75)
  goto label_198;

DEFLABEL (label_202)
  (Wrd393.Obj) = (Rsp [0]);
  (Wrd396.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_32]))));
  (* (--Rsp)) = (Wrd396.Obj);
  (* (--Rsp)) = (Wrd393.Obj);
  (* (--Rsp)) = (Wrd264.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 2);

DEFLABEL (label_86)
  goto label_201;

DEFLABEL (label_204)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_31])), (Wrd265.pObj));

DEFLABEL (label_74)
  (Wrd264.Obj) = Rvl;
  goto label_203;

DEFLABEL (label_207)
  if ((Wrd254.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_206;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_30])), (Wrd246.pObj), (Wrd243.Obj));

DEFLABEL (label_73)
  goto label_205;

DEFLABEL (label_209)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_29])), (Wrd237.pObj));

DEFLABEL (label_72)
  (Wrd236.Obj) = Rvl;
  goto label_208;

DEFLABEL (label_211)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_28])), (Wrd230.pObj));

DEFLABEL (label_71)
  (Wrd229.Obj) = Rvl;
  goto label_210;

DEFLABEL (label_213)
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_27]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_5]), 1);

DEFLABEL (label_55)
  (Wrd94.Obj) = Rvl;
  goto label_212;

DEFLABEL (label_215)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_26]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 1);

DEFLABEL (label_54)
  (Wrd87.Obj) = Rvl;
  goto label_214;

DEFLABEL (label_217)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_25]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 1);

DEFLABEL (label_53)
  (Wrd80.Obj) = Rvl;
  goto label_216;

DEFLABEL (label_219)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_24])), (Wrd75.pObj));

DEFLABEL (label_52)
  (Wrd74.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_23])), (Wrd67.pObj));

DEFLABEL (label_51)
  (Wrd66.Obj) = Rvl;
  goto label_220;

DEFLABEL (label_223)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_62]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_15]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_222;

DEFLABEL (label_225)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_61])), (Wrd36.pObj));

DEFLABEL (label_48)
  (Wrd35.Obj) = Rvl;
  goto label_224;

DEFLABEL (label_227)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_60]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_5]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_226;

DEFLABEL (label_229)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_59])), (Wrd22.pObj));

DEFLABEL (label_46)
  (Wrd21.Obj) = Rvl;
  goto label_228;

DEFLABEL (label_230)
  (Wrd60.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_1]));
  (Wrd63.Obj) = ((Wrd60.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 50)
    goto label_232;
  Wrd59 = Wrd63;

DEFLABEL (label_231)
  if ((Wrd59.Obj) == ((SCHEME_OBJECT) 0))
    goto label_140;
  goto label_141;

DEFLABEL (label_232)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_7])), (Wrd60.pObj));

DEFLABEL (label_50)
  (Wrd59.Obj) = Rvl;
  goto label_231;

DEFLABEL (label_234)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_6])), (Wrd7.pObj));

DEFLABEL (label_45)
  (Wrd6.Obj) = Rvl;
  goto label_233;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_7 7
#define LABEL_47_8 9
#define ENVIRONMENT_LABEL_47_3 18
#define DEBUGGING_LABEL_47_2 17
#define OBJECT_47_1 16
#define OBJECT_47_0 15
#define EXECUTE_CACHE_47_6 11
#define FREE_REFERENCE_47_0 14
#define FREE_REFERENCES_LABEL_47_0 10
#define NUMBER_OF_LINKER_SECTIONS_47_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_47_4);
      goto define_pattern_char_2;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_47_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_pattern_char_7)
DEFLABEL (define_pattern_char_2)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_11;
  Wrd6 = Wrd10;

DEFLABEL (label_10)
  Wrd5 = Wrd6;
  (Wrd12.Obj) = (* (Rsp++));
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_9;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_9;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_9;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd17.pObj) = (& ((Wrd21.pObj) [(Wrd15.Lng)]));
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [1]) = (Wrd18.Obj);

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_47_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_0]), 3);

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_7])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define LABEL_48_8 9
#define LABEL_48_9 11
#define LABEL_48_10 13
#define LABEL_48_11 15
#define LABEL_48_12 17
#define LABEL_48_13 19
#define LABEL_48_14 21
#define LABEL_48_15 23
#define ENVIRONMENT_LABEL_48_3 39
#define DEBUGGING_LABEL_48_2 38
#define OBJECT_48_3 37
#define OBJECT_48_2 36
#define OBJECT_48_1 35
#define OBJECT_48_0 34
#define EXECUTE_CACHE_48_6 25
#define FREE_REFERENCE_48_2 28
#define FREE_REFERENCE_48_1 29
#define FREE_REFERENCE_48_0 30
#define FREE_ASSIGNMENT_48_1 32
#define FREE_ASSIGNMENT_48_0 33
#define FREE_REFERENCES_LABEL_48_0 24
#define NUMBER_OF_LINKER_SECTIONS_48_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd93;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd88;
  machine_word Wrd78;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd65;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_48_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_48_9);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_48_10);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_48_11);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_48_12);
      goto label_12;

    case 8:
      current_block = (Rpc - LABEL_48_13);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_48_14);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_48_15);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_17)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_40;
  Wrd6 = Wrd10;

DEFLABEL (label_39)
  if (! ((Wrd6.Obj) == (current_block [OBJECT_48_0])))
    goto label_18;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (label_18)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_38;
  Wrd14 = Wrd18;

DEFLABEL (label_37)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_36;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_35)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_48_0]));
  (Wrd35.Obj) = ((Wrd27.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd27.pObj) [0]) = (Wrd20.Obj);

DEFLABEL (label_32)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_31;
  Wrd40 = Wrd44;

DEFLABEL (label_30)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_29;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_28)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_48_1]));
  (Wrd61.Obj) = ((Wrd53.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd53.pObj) [0]) = (Wrd46.Obj);

DEFLABEL (label_25)
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd69.Obj) = ((Wrd66.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_24;
  Wrd65 = Wrd69;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_2]));
  (Wrd76.Obj) = ((Wrd73.pObj) [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if ((Wrd77.uLng) == 50)
    goto label_22;
  Wrd72 = Wrd76;

DEFLABEL (label_21)
  Wrd71 = Wrd72;
  (Wrd78.Obj) = (* (Rsp++));
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd88.uLng) == 10))
    goto label_20;
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd83.uLng) == 26))
    goto label_20;
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) (Wrd84.Lng)) < ((unsigned long) (Wrd87.Lng))))
    goto label_20;
  (Wrd79.uLng) = (OBJECT_DATUM (Wrd78.Obj));
  (Wrd81.pObj) = (& ((Wrd85.pObj) [(Wrd79.Lng)]));
  (Wrd82.Obj) = ((Wrd81.pObj) [1]);
  (* (--Rsp)) = (Wrd82.Obj);

DEFLABEL (label_19)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_20)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_15]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_3]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_14])), (Wrd73.pObj));

DEFLABEL (label_14)
  (Wrd72.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_13])), (Wrd66.pObj));

DEFLABEL (label_13)
  (Wrd65.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_27)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_48_12])), (Wrd53.pObj), (Wrd46.Obj));

DEFLABEL (label_12)
  goto label_25;

DEFLABEL (label_29)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 1);

DEFLABEL (label_11)
  (Wrd46.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_10])), (Wrd41.pObj));

DEFLABEL (label_10)
  (Wrd40.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_34)
  if ((Wrd35.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_48_9])), (Wrd27.pObj), (Wrd20.Obj));

DEFLABEL (label_9)
  goto label_32;

DEFLABEL (label_36)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_8)
  (Wrd20.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_7])), (Wrd15.pObj));

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_5])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_7 7
#define LABEL_49_8 9
#define ENVIRONMENT_LABEL_49_3 18
#define DEBUGGING_LABEL_49_2 17
#define OBJECT_49_1 16
#define OBJECT_49_0 15
#define EXECUTE_CACHE_49_6 11
#define FREE_REFERENCE_49_0 14
#define FREE_REFERENCES_LABEL_49_0 10
#define NUMBER_OF_LINKER_SECTIONS_49_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_49_4);
      goto define_backslash_char_2;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_49_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_backslash_char_7)
DEFLABEL (define_backslash_char_2)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_11;
  Wrd6 = Wrd10;

DEFLABEL (label_10)
  Wrd5 = Wrd6;
  (Wrd12.Obj) = (* (Rsp++));
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_9;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_9;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_9;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd17.pObj) = (& ((Wrd21.pObj) [(Wrd15.Lng)]));
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [1]) = (Wrd18.Obj);

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_49_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 3);

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_7])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_5 3
#define LABEL_50_6 5
#define LABEL_50_8 7
#define LABEL_50_9 9
#define LABEL_50_10 11
#define LABEL_50_11 13
#define LABEL_50_12 15
#define LABEL_50_4 17
#define LABEL_50_14 19
#define LABEL_50_15 21
#define LABEL_50_16 23
#define LABEL_50_17 25
#define LABEL_50_18 27
#define LABEL_50_19 29
#define LABEL_50_20 31
#define LABEL_50_21 33
#define LABEL_50_22 35
#define LABEL_50_23 37
#define LABEL_50_24 39
#define LABEL_50_25 41
#define LABEL_50_26 43
#define ENVIRONMENT_LABEL_50_3 72
#define DEBUGGING_LABEL_50_2 71
#define OBJECT_50_10 70
#define OBJECT_50_9 69
#define OBJECT_50_8 68
#define OBJECT_50_7 67
#define OBJECT_50_6 66
#define OBJECT_50_5 65
#define OBJECT_50_4 64
#define OBJECT_50_3 63
#define OBJECT_50_2 62
#define OBJECT_50_1 61
#define OBJECT_50_0 60
#define EXECUTE_CACHE_50_27 45
#define EXECUTE_CACHE_50_13 47
#define EXECUTE_CACHE_50_7 49
#define FREE_REFERENCE_50_3 52
#define FREE_REFERENCE_50_2 53
#define FREE_REFERENCE_50_1 54
#define FREE_REFERENCE_50_0 55
#define FREE_ASSIGNMENT_50_2 57
#define FREE_ASSIGNMENT_50_1 58
#define FREE_ASSIGNMENT_50_0 59
#define FREE_REFERENCES_LABEL_50_0 44
#define NUMBER_OF_LINKER_SECTIONS_50_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd70;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd53;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd133;
  machine_word Wrd89;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd191;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd176;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd186;
  machine_word Wrd174;
  machine_word Wrd167;
  machine_word Wrd168;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd166;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd162;
  machine_word Wrd159;
  machine_word Wrd153;
  machine_word Wrd154;
  machine_word Wrd155;
  machine_word Wrd147;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
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
      current_block = (Rpc - LABEL_50_5);
      goto continuation_9;

    case 1:
      current_block = (Rpc - LABEL_50_6);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_50_8);
      goto label_30;

    case 3:
      current_block = (Rpc - LABEL_50_9);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_50_10);
      goto label_32;

    case 5:
      current_block = (Rpc - LABEL_50_11);
      goto label_33;

    case 6:
      current_block = (Rpc - LABEL_50_12);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_50_4);
      goto lambda_15;

    case 8:
      current_block = (Rpc - LABEL_50_14);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_50_15);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_50_16);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_50_17);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_50_18);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_50_19);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_50_20);
      goto label_26;

    case 15:
      current_block = (Rpc - LABEL_50_21);
      goto label_27;

    case 16:
      current_block = (Rpc - LABEL_50_22);
      goto label_28;

    case 17:
      current_block = (Rpc - LABEL_50_23);
      goto label_20;

    case 18:
      current_block = (Rpc - LABEL_50_24);
      goto label_21;

    case 19:
      current_block = (Rpc - LABEL_50_25);
      goto label_22;

    case 20:
      current_block = (Rpc - LABEL_50_26);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_36)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_78;
  Wrd6 = Wrd10;

DEFLABEL (label_77)
  if ((Wrd6.Obj) == (current_block [OBJECT_50_5]))
    goto label_54;
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_76;
  Wrd14 = Wrd18;

DEFLABEL (label_75)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_74;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_73)
  if ((Wrd20.Obj) == (current_block [OBJECT_50_5]))
    goto label_54;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_50_10]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_72;
  Wrd33 = Wrd37;

DEFLABEL (label_71)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_70;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_69)
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_1]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_68;
  Wrd47 = Wrd51;

DEFLABEL (label_67)
  Wrd46 = Wrd47;
  (Wrd53.Obj) = (* (Rsp++));
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd65.uLng) == 30))
    goto label_66;
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_66;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [1]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) (Wrd61.Lng)) < ((unsigned long) (Wrd64.Lng))))
    goto label_66;
  (Wrd55.uLng) = (OBJECT_DATUM (Wrd53.Obj));
  (Wrd57.pChr) = (& ((Wrd62.pChr) [(Wrd55.Lng)]));
  (Wrd58.uLng) = ((unsigned long) (((unsigned char *) (Wrd57.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd59.Obj) = (MAKE_OBJECT (26, (Wrd58.uLng)));
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_65)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_27]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_50_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_38;

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_7]));

DEFLABEL (label_38)
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd144.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd144.Obj);
  (Wrd145.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd145.Obj);
  (Wrd148.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd151.Obj) = ((Wrd148.pObj) [0]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if ((Wrd152.uLng) == 50)
    goto label_64;
  Wrd147 = Wrd151;

DEFLABEL (label_63)
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd155.uLng) == 1))
    goto label_62;
  (Wrd154.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd153.Obj) = ((Wrd154.pObj) [1]);

DEFLABEL (label_61)
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd153.Obj));
  if (! ((Wrd162.uLng) == 1))
    goto label_60;
  (Wrd160.pObj) = (OBJECT_ADDRESS (Wrd153.Obj));
  (Wrd161.Obj) = ((Wrd160.pObj) [0]);
  (* (--Rsp)) = (Wrd161.Obj);

DEFLABEL (label_59)
  (Wrd169.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_1]));
  (Wrd172.Obj) = ((Wrd169.pObj) [0]);
  (Wrd173.uLng) = (OBJECT_TYPE (Wrd172.Obj));
  if ((Wrd173.uLng) == 50)
    goto label_58;
  Wrd168 = Wrd172;

DEFLABEL (label_57)
  Wrd167 = Wrd168;
  (Wrd174.Obj) = (* (Rsp++));
  (Wrd186.uLng) = (OBJECT_TYPE (Wrd168.Obj));
  if (! ((Wrd186.uLng) == 30))
    goto label_56;
  (Wrd181.uLng) = (OBJECT_TYPE (Wrd174.Obj));
  if (! ((Wrd181.uLng) == 26))
    goto label_56;
  (Wrd182.Lng) = (FIXNUM_TO_LONG (Wrd174.Obj));
  (Wrd183.pObj) = (OBJECT_ADDRESS (Wrd168.Obj));
  (Wrd184.Obj) = ((Wrd183.pObj) [1]);
  (Wrd185.Lng) = (FIXNUM_TO_LONG (Wrd184.Obj));
  if (! (((unsigned long) (Wrd182.Lng)) < ((unsigned long) (Wrd185.Lng))))
    goto label_56;
  (Wrd176.uLng) = (OBJECT_DATUM (Wrd174.Obj));
  (Wrd178.pChr) = (& ((Wrd183.pChr) [(Wrd176.Lng)]));
  (Wrd179.uLng) = ((unsigned long) (((unsigned char *) (Wrd178.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd180.Obj) = (MAKE_OBJECT (26, (Wrd179.uLng)));
  (* (--Rsp)) = (Wrd180.Obj);

DEFLABEL (label_55)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_50_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;

DEFLABEL (label_54)
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_50_0]));
  (Wrd72.Obj) = (current_block [OBJECT_50_6]);
  (Wrd79.Obj) = ((Wrd71.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd71.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_51)
  (Wrd86.Obj) = (current_block [OBJECT_50_7]);
  (Wrd87.Obj) = (current_block [OBJECT_50_5]);
  (* (Rhp++)) = (Wrd86.Obj);
  (* (Rhp++)) = (Wrd87.Obj);
  (Wrd84.pObj) = (& (Rhp [-2]));
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd84.pObj)));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd90.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_2]));
  (Wrd93.Obj) = ((Wrd90.pObj) [0]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if ((Wrd94.uLng) == 50)
    goto label_50;
  Wrd89 = Wrd93;

DEFLABEL (label_49)
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd133.uLng) == 1))
    goto label_48;
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd132.Obj) = (Rsp [0]);
  ((Wrd131.pObj) [1]) = (Wrd132.Obj);

DEFLABEL (label_47)
  (Wrd95.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_50_1]));
  (Wrd96.Obj) = (Rsp [0]);
  (Wrd103.Obj) = ((Wrd95.pObj) [0]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if ((Wrd104.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd95.pObj) [0]) = (Wrd96.Obj);

DEFLABEL (label_44)
  Rsp = (& (Rsp [1]));
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_3]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_43;
  Wrd109 = Wrd113;

DEFLABEL (label_42)
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  (Wrd117.Lng) = ((Wrd116.Lng) + 1L);
  (Wrd115.Obj) = (LONG_TO_FIXNUM (Wrd117.Lng));
  (Wrd118.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_50_2]));
  (Wrd126.Obj) = ((Wrd118.pObj) [0]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if ((Wrd127.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd118.pObj) [0]) = (Wrd115.Obj);

DEFLABEL (label_39)
  Rvl = (current_block [OBJECT_50_9]);
  goto pop_return;

DEFLABEL (label_41)
  if ((Wrd126.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_50_22])), (Wrd118.pObj), (Wrd115.Obj));

DEFLABEL (label_28)
  goto label_39;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_21])), (Wrd110.pObj));

DEFLABEL (label_27)
  (Wrd109.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_46)
  if ((Wrd103.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_50_20])), (Wrd95.pObj), (Wrd96.Obj));

DEFLABEL (label_26)
  goto label_44;

DEFLABEL (label_48)
  (Wrd135.Obj) = (Rsp [0]);
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_19]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_8]), 2);

DEFLABEL (label_29)
  goto label_47;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_18])), (Wrd90.pObj));

DEFLABEL (label_25)
  (Wrd89.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_53)
  if ((Wrd79.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_50_17])), (Wrd71.pObj), (Wrd72.Obj));

DEFLABEL (label_24)
  goto label_51;

DEFLABEL (label_56)
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_4]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_11])), (Wrd169.pObj));

DEFLABEL (label_33)
  (Wrd168.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_10]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd153.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 1);

DEFLABEL (label_31)
  (Wrd153.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_8])), (Wrd148.pObj));

DEFLABEL (label_30)
  (Wrd147.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_26]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_4]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_25])), (Wrd48.pObj));

DEFLABEL (label_22)
  (Wrd47.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_24]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_23])), (Wrd34.pObj));

DEFLABEL (label_20)
  (Wrd33.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_16]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 1);

DEFLABEL (label_19)
  (Wrd20.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_15])), (Wrd15.pObj));

DEFLABEL (label_18)
  (Wrd14.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_14])), (Wrd7.pObj));

DEFLABEL (label_17)
  (Wrd6.Obj) = Rvl;
  goto label_77;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_6 7
#define LABEL_51_7 9
#define LABEL_51_8 11
#define LABEL_51_9 13
#define LABEL_51_10 15
#define LABEL_51_11 17
#define ENVIRONMENT_LABEL_51_3 35
#define DEBUGGING_LABEL_51_2 34
#define OBJECT_51_4 33
#define OBJECT_51_3 32
#define OBJECT_51_2 31
#define OBJECT_51_1 30
#define OBJECT_51_0 29
#define EXECUTE_CACHE_51_12 19
#define FREE_REFERENCE_51_2 22
#define FREE_REFERENCE_51_1 23
#define FREE_REFERENCE_51_0 24
#define FREE_ASSIGNMENT_51_2 26
#define FREE_ASSIGNMENT_51_1 27
#define FREE_ASSIGNMENT_51_0 28
#define FREE_REFERENCES_LABEL_51_0 18
#define NUMBER_OF_LINKER_SECTIONS_51_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_51_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_51_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_51_8);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_51_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_51_10);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_51_11);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_33;
  Wrd5 = Wrd9;

DEFLABEL (label_32)
  (Wrd11.Obj) = (current_block [OBJECT_51_0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_12]));

DEFLABEL (label_16)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_0]));
  (Wrd20.Obj) = ((Wrd12.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd12.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_29)
  (Wrd27.Obj) = (current_block [OBJECT_51_1]);
  (Wrd28.Obj) = (current_block [OBJECT_51_2]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_28;
  Wrd30 = Wrd34;

DEFLABEL (label_27)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_26;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd73.Obj) = (Rsp [0]);
  ((Wrd72.pObj) [1]) = (Wrd73.Obj);

DEFLABEL (label_25)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_1]));
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd44.Obj) = ((Wrd36.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd36.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_2]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_21;
  Wrd50 = Wrd54;

DEFLABEL (label_20)
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  (Wrd58.Lng) = ((Wrd57.Lng) + 1L);
  (Wrd56.Obj) = (LONG_TO_FIXNUM (Wrd58.Lng));
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_2]));
  (Wrd67.Obj) = ((Wrd59.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_19;

DEFLABEL (label_18)
  ((Wrd59.pObj) [0]) = (Wrd56.Obj);

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_51_4]);
  goto pop_return;

DEFLABEL (label_19)
  if ((Wrd67.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_18;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_11])), (Wrd59.pObj), (Wrd56.Obj));

DEFLABEL (label_12)
  goto label_17;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_10])), (Wrd51.pObj));

DEFLABEL (label_11)
  (Wrd50.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_24)
  if ((Wrd44.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_9])), (Wrd36.pObj), (Wrd37.Obj));

DEFLABEL (label_10)
  goto label_22;

DEFLABEL (label_26)
  (Wrd76.Obj) = (Rsp [0]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_3]), 2);

DEFLABEL (label_13)
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_7])), (Wrd31.pObj));

DEFLABEL (label_9)
  (Wrd30.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_31)
  if ((Wrd20.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_6])), (Wrd12.pObj), (Wrd11.Obj));

DEFLABEL (label_8)
  goto label_29;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define LABEL_52_7 9
#define LABEL_52_8 11
#define LABEL_52_9 13
#define LABEL_52_10 15
#define LABEL_52_11 17
#define LABEL_52_12 19
#define LABEL_52_13 21
#define ENVIRONMENT_LABEL_52_3 36
#define DEBUGGING_LABEL_52_2 35
#define OBJECT_52_4 34
#define OBJECT_52_3 33
#define OBJECT_52_2 32
#define OBJECT_52_1 31
#define OBJECT_52_0 30
#define FREE_REFERENCE_52_1 23
#define FREE_REFERENCE_52_0 24
#define FREE_ASSIGNMENT_52_3 26
#define FREE_ASSIGNMENT_52_2 27
#define FREE_ASSIGNMENT_52_1 28
#define FREE_ASSIGNMENT_52_0 29
#define FREE_REFERENCES_LABEL_52_0 22
#define NUMBER_OF_LINKER_SECTIONS_52_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd72;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_52_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_52_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_52_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_52_9);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_52_10);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_52_11);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_52_12);
      goto label_14;

    case 9:
      current_block = (Rpc - LABEL_52_13);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_18)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_40;
  Wrd5 = Wrd9;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_38;
  Wrd12 = Wrd16;

DEFLABEL (label_37)
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_0]));
  (Wrd30.Obj) = ((Wrd22.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd22.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_34)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_1]));
  (Wrd35.Obj) = (current_block [OBJECT_52_0]);
  (Wrd42.Obj) = ((Wrd34.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd34.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_31)
  (Wrd49.Obj) = (current_block [OBJECT_52_1]);
  (Wrd50.Obj) = (current_block [OBJECT_52_2]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_30;
  Wrd52 = Wrd56;

DEFLABEL (label_29)
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd96.uLng) == 1))
    goto label_28;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd95.Obj) = (Rsp [0]);
  ((Wrd94.pObj) [1]) = (Wrd95.Obj);

DEFLABEL (label_27)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_2]));
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd66.Obj) = ((Wrd58.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd58.pObj) [0]) = (Wrd59.Obj);

DEFLABEL (label_24)
  Rsp = (& (Rsp [1]));
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_1]));
  (Wrd76.Obj) = ((Wrd73.pObj) [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if ((Wrd77.uLng) == 50)
    goto label_23;
  Wrd72 = Wrd76;

DEFLABEL (label_22)
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  (Wrd80.Lng) = ((Wrd79.Lng) + 1L);
  (Wrd78.Obj) = (LONG_TO_FIXNUM (Wrd80.Lng));
  (Wrd81.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_3]));
  (Wrd89.Obj) = ((Wrd81.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd81.pObj) [0]) = (Wrd78.Obj);

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_52_4]);
  goto pop_return;

DEFLABEL (label_21)
  if ((Wrd89.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_13])), (Wrd81.pObj), (Wrd78.Obj));

DEFLABEL (label_15)
  goto label_19;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_12])), (Wrd73.pObj));

DEFLABEL (label_14)
  (Wrd72.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_26)
  if ((Wrd66.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_11])), (Wrd58.pObj), (Wrd59.Obj));

DEFLABEL (label_13)
  goto label_24;

DEFLABEL (label_28)
  (Wrd98.Obj) = (Rsp [0]);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_10]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_3]), 2);

DEFLABEL (label_16)
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_9])), (Wrd53.pObj));

DEFLABEL (label_12)
  (Wrd52.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_33)
  if ((Wrd42.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_8])), (Wrd34.pObj), (Wrd35.Obj));

DEFLABEL (label_11)
  goto label_31;

DEFLABEL (label_36)
  if ((Wrd30.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_7])), (Wrd22.pObj), (Wrd19.Obj));

DEFLABEL (label_10)
  goto label_34;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_6])), (Wrd13.pObj));

DEFLABEL (label_9)
  (Wrd12.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_5])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define TAG_53_6 1
#define LABEL_53_8 7
#define LABEL_53_9 9
#define LABEL_53_10 11
#define LABEL_53_11 13
#define LABEL_53_12 15
#define LABEL_53_13 17
#define ENVIRONMENT_LABEL_53_3 33
#define DEBUGGING_LABEL_53_2 32
#define OBJECT_53_3 31
#define OBJECT_53_2 30
#define OBJECT_53_1 29
#define OBJECT_53_0 28
#define EXECUTE_CACHE_53_7 19
#define FREE_REFERENCE_53_1 22
#define FREE_REFERENCE_53_0 23
#define FREE_ASSIGNMENT_53_2 25
#define FREE_ASSIGNMENT_53_1 26
#define FREE_ASSIGNMENT_53_0 27
#define FREE_REFERENCES_LABEL_53_0 18
#define NUMBER_OF_LINKER_SECTIONS_53_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_53_4);
      goto define_trivial_backslash_char_6;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_53_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_53_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_53_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_53_11);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_53_12);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_53_13);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_trivial_backslash_char_15)
DEFLABEL (define_trivial_backslash_char_6)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_53_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_53_0]));
  (Wrd6.Obj) = (current_block [OBJECT_53_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_29)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (Wrd23.Obj) = (current_block [OBJECT_53_1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_28;
  Wrd25 = Wrd29;

DEFLABEL (label_27)
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_26;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd69.Obj) = (Rsp [0]);
  ((Wrd68.pObj) [1]) = (Wrd69.Obj);

DEFLABEL (label_25)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_53_1]));
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd39.Obj) = ((Wrd31.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd31.pObj) [0]) = (Wrd32.Obj);

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_1]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_21;
  Wrd45 = Wrd49;

DEFLABEL (label_20)
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd53.Lng) = ((Wrd52.Lng) + 1L);
  (Wrd51.Obj) = (LONG_TO_FIXNUM (Wrd53.Lng));
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_53_2]));
  (Wrd62.Obj) = ((Wrd54.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_19;

DEFLABEL (label_18)
  ((Wrd54.pObj) [0]) = (Wrd51.Obj);

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_53_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  if ((Wrd62.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_18;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_53_13])), (Wrd54.pObj), (Wrd51.Obj));

DEFLABEL (label_12)
  goto label_17;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_12])), (Wrd46.pObj));

DEFLABEL (label_11)
  (Wrd45.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_24)
  if ((Wrd39.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_53_11])), (Wrd31.pObj), (Wrd32.Obj));

DEFLABEL (label_10)
  goto label_22;

DEFLABEL (label_26)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_2]), 2);

DEFLABEL (label_13)
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_9])), (Wrd26.pObj));

DEFLABEL (label_9)
  (Wrd25.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_31)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_53_8])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_8)
  goto label_29;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define TAG_54_6 1
#define LABEL_54_8 7
#define LABEL_54_9 9
#define LABEL_54_10 11
#define LABEL_54_11 13
#define LABEL_54_12 15
#define LABEL_54_13 17
#define LABEL_54_14 19
#define LABEL_54_15 21
#define LABEL_54_16 23
#define ENVIRONMENT_LABEL_54_3 40
#define DEBUGGING_LABEL_54_2 39
#define OBJECT_54_3 38
#define OBJECT_54_2 37
#define OBJECT_54_1 36
#define OBJECT_54_0 35
#define EXECUTE_CACHE_54_7 25
#define FREE_REFERENCE_54_1 28
#define FREE_REFERENCE_54_0 29
#define FREE_ASSIGNMENT_54_3 31
#define FREE_ASSIGNMENT_54_2 32
#define FREE_ASSIGNMENT_54_1 33
#define FREE_ASSIGNMENT_54_0 34
#define FREE_REFERENCES_LABEL_54_0 24
#define NUMBER_OF_LINKER_SECTIONS_54_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd74;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_54_4);
      goto define_starter_backslash_char_7;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto lambda_20;

    case 2:
      current_block = (Rpc - LABEL_54_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_54_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_54_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_54_11);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_54_12);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_54_13);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_54_14);
      goto label_14;

    case 9:
      current_block = (Rpc - LABEL_54_15);
      goto label_15;

    case 10:
      current_block = (Rpc - LABEL_54_16);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_starter_backslash_char_19)
DEFLABEL (define_starter_backslash_char_7)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_7]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_54_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_42;
  Wrd5 = Wrd9;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_40;
  Wrd12 = Wrd16;

DEFLABEL (label_39)
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_54_0]));
  (Wrd30.Obj) = ((Wrd22.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd22.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_36)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_54_1]));
  (Wrd35.Obj) = (current_block [OBJECT_54_0]);
  (Wrd42.Obj) = ((Wrd34.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  ((Wrd34.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_33)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [2]);
  (Wrd52.Obj) = (current_block [OBJECT_54_1]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_32;
  Wrd54 = Wrd58;

DEFLABEL (label_31)
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_30;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd98.Obj) = (Rsp [0]);
  ((Wrd97.pObj) [1]) = (Wrd98.Obj);

DEFLABEL (label_29)
  (Wrd60.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_54_2]));
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd68.Obj) = ((Wrd60.pObj) [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd69.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd60.pObj) [0]) = (Wrd61.Obj);

DEFLABEL (label_26)
  Rsp = (& (Rsp [1]));
  (Wrd75.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_1]));
  (Wrd78.Obj) = ((Wrd75.pObj) [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if ((Wrd79.uLng) == 50)
    goto label_25;
  Wrd74 = Wrd78;

DEFLABEL (label_24)
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd82.Lng) = ((Wrd81.Lng) + 1L);
  (Wrd80.Obj) = (LONG_TO_FIXNUM (Wrd82.Lng));
  (Wrd83.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_54_3]));
  (Wrd91.Obj) = ((Wrd83.pObj) [0]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if ((Wrd92.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd83.pObj) [0]) = (Wrd80.Obj);

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_54_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  if ((Wrd91.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_54_16])), (Wrd83.pObj), (Wrd80.Obj));

DEFLABEL (label_16)
  goto label_21;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_15])), (Wrd75.pObj));

DEFLABEL (label_15)
  (Wrd74.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_28)
  if ((Wrd68.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_54_14])), (Wrd60.pObj), (Wrd61.Obj));

DEFLABEL (label_14)
  goto label_26;

DEFLABEL (label_30)
  (Wrd101.Obj) = (Rsp [0]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_13]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 2);

DEFLABEL (label_17)
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_12])), (Wrd55.pObj));

DEFLABEL (label_13)
  (Wrd54.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_35)
  if ((Wrd42.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_54_11])), (Wrd34.pObj), (Wrd35.Obj));

DEFLABEL (label_12)
  goto label_33;

DEFLABEL (label_38)
  if ((Wrd30.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_54_10])), (Wrd22.pObj), (Wrd19.Obj));

DEFLABEL (label_11)
  goto label_36;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_9])), (Wrd13.pObj));

DEFLABEL (label_10)
  (Wrd12.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_8])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_5 3
#define LABEL_55_4 5
#define LABEL_55_6 7
#define LABEL_55_7 9
#define LABEL_55_8 11
#define LABEL_55_9 13
#define LABEL_55_10 15
#define LABEL_55_11 17
#define LABEL_55_12 19
#define LABEL_55_13 21
#define LABEL_55_14 23
#define LABEL_55_16 25
#define LABEL_55_18 27
#define LABEL_55_19 29
#define LABEL_55_20 31
#define LABEL_55_21 33
#define LABEL_55_22 35
#define LABEL_55_23 37
#define LABEL_55_24 39
#define LABEL_55_15 41
#define LABEL_55_26 43
#define LABEL_55_27 45
#define LABEL_55_28 47
#define LABEL_55_29 49
#define LABEL_55_30 51
#define ENVIRONMENT_LABEL_55_3 77
#define DEBUGGING_LABEL_55_2 76
#define OBJECT_55_7 75
#define OBJECT_55_6 74
#define OBJECT_55_5 73
#define OBJECT_55_4 72
#define OBJECT_55_3 71
#define OBJECT_55_2 70
#define OBJECT_55_1 69
#define OBJECT_55_0 68
#define EXECUTE_CACHE_55_25 53
#define EXECUTE_CACHE_55_17 55
#define FREE_REFERENCE_55_3 58
#define FREE_REFERENCE_55_2 59
#define FREE_REFERENCE_55_1 60
#define FREE_REFERENCE_55_0 61
#define FREE_ASSIGNMENT_55_4 63
#define FREE_ASSIGNMENT_55_3 64
#define FREE_ASSIGNMENT_55_2 65
#define FREE_ASSIGNMENT_55_1 66
#define FREE_ASSIGNMENT_55_0 67
#define FREE_REFERENCES_LABEL_55_0 52
#define NUMBER_OF_LINKER_SECTIONS_55_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd173;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd153;
  machine_word Wrd154;
  machine_word Wrd155;
  machine_word Wrd147;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd145;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd130;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd140;
  machine_word Wrd128;
  machine_word Wrd121;
  machine_word Wrd122;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd108;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd100;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd72;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd176;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_55_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_55_4);
      goto lambda_18;

    case 2:
      current_block = (Rpc - LABEL_55_6);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_55_7);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_55_8);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_55_9);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_55_10);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_55_11);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_55_12);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_55_13);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_55_14);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_55_16);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_55_18);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_55_19);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_55_20);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_55_21);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_55_22);
      goto label_33;

    case 17:
      current_block = (Rpc - LABEL_55_23);
      goto label_34;

    case 18:
      current_block = (Rpc - LABEL_55_24);
      goto label_35;

    case 19:
      current_block = (Rpc - LABEL_55_15);
      goto continuation_12;

    case 20:
      current_block = (Rpc - LABEL_55_26);
      goto label_37;

    case 21:
      current_block = (Rpc - LABEL_55_27);
      goto label_41;

    case 22:
      current_block = (Rpc - LABEL_55_28);
      goto label_38;

    case 23:
      current_block = (Rpc - LABEL_55_29);
      goto label_39;

    case 24:
      current_block = (Rpc - LABEL_55_30);
      goto label_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_43)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_96;
  Wrd5 = Wrd9;

DEFLABEL (label_95)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_94;
  Wrd12 = Wrd16;

DEFLABEL (label_93)
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_55_0]));
  (Wrd30.Obj) = ((Wrd22.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_92;

DEFLABEL (label_91)
  ((Wrd22.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_90)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_55_1]));
  (Wrd35.Obj) = (current_block [OBJECT_55_0]);
  (Wrd42.Obj) = ((Wrd34.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_89;

DEFLABEL (label_88)
  ((Wrd34.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_87)
  (Wrd49.Obj) = (current_block [OBJECT_55_1]);
  (Wrd50.Obj) = (current_block [OBJECT_55_2]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_86;
  Wrd52 = Wrd56;

DEFLABEL (label_85)
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd176.uLng) == 1))
    goto label_84;
  (Wrd174.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd175.Obj) = (Rsp [0]);
  ((Wrd174.pObj) [1]) = (Wrd175.Obj);

DEFLABEL (label_83)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_55_2]));
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd66.Obj) = ((Wrd58.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  ((Wrd58.pObj) [0]) = (Wrd59.Obj);

DEFLABEL (label_80)
  Rsp = (& (Rsp [1]));
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_1]));
  (Wrd76.Obj) = ((Wrd73.pObj) [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if ((Wrd77.uLng) == 50)
    goto label_79;
  Wrd72 = Wrd76;

DEFLABEL (label_78)
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  (Wrd80.Lng) = ((Wrd79.Lng) + 1L);
  (Wrd78.Obj) = (LONG_TO_FIXNUM (Wrd80.Lng));
  (Wrd81.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_55_3]));
  (Wrd89.Obj) = ((Wrd81.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  ((Wrd81.pObj) [0]) = (Wrd78.Obj);

DEFLABEL (label_75)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_15]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd101.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_2]));
  (Wrd104.Obj) = ((Wrd101.pObj) [0]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd105.uLng) == 50)
    goto label_74;
  Wrd100 = Wrd104;

DEFLABEL (label_73)
  if (! ((Wrd100.Obj) == (current_block [OBJECT_55_2])))
    goto label_57;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_56)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_55_15);
  (Wrd9.Obj) = (current_block [OBJECT_55_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_55;
  Wrd11 = Wrd15;

DEFLABEL (label_54)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_53;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd54.Obj) = (Rsp [0]);
  ((Wrd53.pObj) [1]) = (Wrd54.Obj);

DEFLABEL (label_52)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_55_2]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_51;

DEFLABEL (label_50)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_1]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_48;
  Wrd31 = Wrd35;

DEFLABEL (label_47)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_55_3]));
  (Wrd48.Obj) = ((Wrd40.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd40.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_44)
  Rvl = (current_block [OBJECT_55_7]);
  goto pop_return;

DEFLABEL (label_46)
  if ((Wrd48.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_55_30])), (Wrd40.pObj), (Wrd37.Obj));

DEFLABEL (label_40)
  goto label_44;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_29])), (Wrd32.pObj));

DEFLABEL (label_39)
  (Wrd31.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_51)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_50;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_55_28])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_38)
  goto label_49;

DEFLABEL (label_53)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_27]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_3]), 2);

DEFLABEL (label_41)
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_26])), (Wrd12.pObj));

DEFLABEL (label_37)
  (Wrd11.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd109.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_2]));
  (Wrd112.Obj) = ((Wrd109.pObj) [0]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if ((Wrd113.uLng) == 50)
    goto label_72;
  Wrd108 = Wrd112;

DEFLABEL (label_71)
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd116.uLng) == 1))
    goto label_70;
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd115.Obj) = ((Wrd114.pObj) [0]);
  (* (--Rsp)) = (Wrd115.Obj);

DEFLABEL (label_69)
  (Wrd123.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_3]));
  (Wrd126.Obj) = ((Wrd123.pObj) [0]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if ((Wrd127.uLng) == 50)
    goto label_68;
  Wrd122 = Wrd126;

DEFLABEL (label_67)
  Wrd121 = Wrd122;
  (Wrd128.Obj) = (* (Rsp++));
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if (! ((Wrd140.uLng) == 30))
    goto label_66;
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd135.uLng) == 26))
    goto label_66;
  (Wrd136.Lng) = (FIXNUM_TO_LONG (Wrd128.Obj));
  (Wrd137.pObj) = (OBJECT_ADDRESS (Wrd122.Obj));
  (Wrd138.Obj) = ((Wrd137.pObj) [1]);
  (Wrd139.Lng) = (FIXNUM_TO_LONG (Wrd138.Obj));
  if (! (((unsigned long) (Wrd136.Lng)) < ((unsigned long) (Wrd139.Lng))))
    goto label_66;
  (Wrd130.uLng) = (OBJECT_DATUM (Wrd128.Obj));
  (Wrd132.pChr) = (& ((Wrd137.pChr) [(Wrd130.Lng)]));
  (Wrd133.uLng) = ((unsigned long) (((unsigned char *) (Wrd132.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd134.Obj) = (MAKE_OBJECT (26, (Wrd133.uLng)));
  (* (--Rsp)) = (Wrd134.Obj);

DEFLABEL (label_65)
  (Wrd148.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_2]));
  (Wrd151.Obj) = ((Wrd148.pObj) [0]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if ((Wrd152.uLng) == 50)
    goto label_64;
  Wrd147 = Wrd151;

DEFLABEL (label_63)
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd155.uLng) == 1))
    goto label_62;
  (Wrd154.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd153.Obj) = ((Wrd154.pObj) [1]);

DEFLABEL (label_61)
  (Wrd160.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_55_4]));
  (Wrd168.Obj) = ((Wrd160.pObj) [0]);
  (Wrd169.uLng) = (OBJECT_TYPE (Wrd168.Obj));
  if ((Wrd169.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd160.pObj) [0]) = (Wrd153.Obj);

DEFLABEL (label_58)
  (Wrd173.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd173.Obj);
  goto label_56;

DEFLABEL (label_60)
  if ((Wrd168.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_55_24])), (Wrd160.pObj), (Wrd153.Obj));

DEFLABEL (label_35)
  goto label_58;

DEFLABEL (label_62)
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_23]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_6]), 1);

DEFLABEL (label_34)
  (Wrd153.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_22])), (Wrd148.pObj));

DEFLABEL (label_33)
  (Wrd147.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_21]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_5]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_20])), (Wrd123.pObj));

DEFLABEL (label_31)
  (Wrd122.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_19]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_4]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_18])), (Wrd109.pObj));

DEFLABEL (label_29)
  (Wrd108.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_16])), (Wrd101.pObj));

DEFLABEL (label_28)
  (Wrd100.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_77)
  if ((Wrd89.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_76;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_55_14])), (Wrd81.pObj), (Wrd78.Obj));

DEFLABEL (label_27)
  goto label_75;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_13])), (Wrd73.pObj));

DEFLABEL (label_26)
  (Wrd72.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_82)
  if ((Wrd66.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_55_12])), (Wrd58.pObj), (Wrd59.Obj));

DEFLABEL (label_25)
  goto label_80;

DEFLABEL (label_84)
  (Wrd178.Obj) = (Rsp [0]);
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_11]))));
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_3]), 2);

DEFLABEL (label_36)
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_10])), (Wrd53.pObj));

DEFLABEL (label_24)
  (Wrd52.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_89)
  if ((Wrd42.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_88;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_55_9])), (Wrd34.pObj), (Wrd35.Obj));

DEFLABEL (label_23)
  goto label_87;

DEFLABEL (label_92)
  if ((Wrd30.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_91;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_55_8])), (Wrd22.pObj), (Wrd19.Obj));

DEFLABEL (label_22)
  goto label_90;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_7])), (Wrd13.pObj));

DEFLABEL (label_21)
  (Wrd12.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_6])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_95;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_5 3
#define LABEL_56_4 5
#define LABEL_56_6 7
#define LABEL_56_7 9
#define LABEL_56_8 11
#define LABEL_56_9 13
#define LABEL_56_10 15
#define LABEL_56_11 17
#define LABEL_56_12 19
#define LABEL_56_13 21
#define LABEL_56_14 23
#define LABEL_56_16 25
#define LABEL_56_18 27
#define LABEL_56_19 29
#define LABEL_56_20 31
#define LABEL_56_21 33
#define LABEL_56_22 35
#define LABEL_56_23 37
#define LABEL_56_24 39
#define LABEL_56_15 41
#define LABEL_56_26 43
#define LABEL_56_27 45
#define LABEL_56_28 47
#define LABEL_56_29 49
#define LABEL_56_30 51
#define ENVIRONMENT_LABEL_56_3 77
#define DEBUGGING_LABEL_56_2 76
#define OBJECT_56_7 75
#define OBJECT_56_6 74
#define OBJECT_56_5 73
#define OBJECT_56_4 72
#define OBJECT_56_3 71
#define OBJECT_56_2 70
#define OBJECT_56_1 69
#define OBJECT_56_0 68
#define EXECUTE_CACHE_56_25 53
#define EXECUTE_CACHE_56_17 55
#define FREE_REFERENCE_56_3 58
#define FREE_REFERENCE_56_2 59
#define FREE_REFERENCE_56_1 60
#define FREE_REFERENCE_56_0 61
#define FREE_ASSIGNMENT_56_4 63
#define FREE_ASSIGNMENT_56_3 64
#define FREE_ASSIGNMENT_56_2 65
#define FREE_ASSIGNMENT_56_1 66
#define FREE_ASSIGNMENT_56_0 67
#define FREE_REFERENCES_LABEL_56_0 52
#define NUMBER_OF_LINKER_SECTIONS_56_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd173;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd153;
  machine_word Wrd154;
  machine_word Wrd155;
  machine_word Wrd147;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd145;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd130;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd140;
  machine_word Wrd128;
  machine_word Wrd121;
  machine_word Wrd122;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd108;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd100;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd72;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd176;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_56_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_56_4);
      goto lambda_18;

    case 2:
      current_block = (Rpc - LABEL_56_6);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_56_7);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_56_8);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_56_9);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_56_10);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_56_11);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_56_12);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_56_13);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_56_14);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_56_16);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_56_18);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_56_19);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_56_20);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_56_21);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_56_22);
      goto label_33;

    case 17:
      current_block = (Rpc - LABEL_56_23);
      goto label_34;

    case 18:
      current_block = (Rpc - LABEL_56_24);
      goto label_35;

    case 19:
      current_block = (Rpc - LABEL_56_15);
      goto continuation_12;

    case 20:
      current_block = (Rpc - LABEL_56_26);
      goto label_37;

    case 21:
      current_block = (Rpc - LABEL_56_27);
      goto label_41;

    case 22:
      current_block = (Rpc - LABEL_56_28);
      goto label_38;

    case 23:
      current_block = (Rpc - LABEL_56_29);
      goto label_39;

    case 24:
      current_block = (Rpc - LABEL_56_30);
      goto label_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_43)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_96;
  Wrd5 = Wrd9;

DEFLABEL (label_95)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_94;
  Wrd12 = Wrd16;

DEFLABEL (label_93)
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_56_0]));
  (Wrd30.Obj) = ((Wrd22.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_92;

DEFLABEL (label_91)
  ((Wrd22.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_90)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_56_1]));
  (Wrd35.Obj) = (current_block [OBJECT_56_0]);
  (Wrd42.Obj) = ((Wrd34.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_89;

DEFLABEL (label_88)
  ((Wrd34.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_87)
  (Wrd49.Obj) = (current_block [OBJECT_56_1]);
  (Wrd50.Obj) = (current_block [OBJECT_56_2]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_86;
  Wrd52 = Wrd56;

DEFLABEL (label_85)
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd176.uLng) == 1))
    goto label_84;
  (Wrd174.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd175.Obj) = (Rsp [0]);
  ((Wrd174.pObj) [1]) = (Wrd175.Obj);

DEFLABEL (label_83)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_56_2]));
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd66.Obj) = ((Wrd58.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  ((Wrd58.pObj) [0]) = (Wrd59.Obj);

DEFLABEL (label_80)
  Rsp = (& (Rsp [1]));
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_1]));
  (Wrd76.Obj) = ((Wrd73.pObj) [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if ((Wrd77.uLng) == 50)
    goto label_79;
  Wrd72 = Wrd76;

DEFLABEL (label_78)
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  (Wrd80.Lng) = ((Wrd79.Lng) + 1L);
  (Wrd78.Obj) = (LONG_TO_FIXNUM (Wrd80.Lng));
  (Wrd81.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_56_3]));
  (Wrd89.Obj) = ((Wrd81.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  ((Wrd81.pObj) [0]) = (Wrd78.Obj);

DEFLABEL (label_75)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_15]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd101.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_2]));
  (Wrd104.Obj) = ((Wrd101.pObj) [0]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd105.uLng) == 50)
    goto label_74;
  Wrd100 = Wrd104;

DEFLABEL (label_73)
  if (! ((Wrd100.Obj) == (current_block [OBJECT_56_2])))
    goto label_57;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_56_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_56)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_56_15);
  (Wrd9.Obj) = (current_block [OBJECT_56_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_55;
  Wrd11 = Wrd15;

DEFLABEL (label_54)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_53;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd54.Obj) = (Rsp [0]);
  ((Wrd53.pObj) [1]) = (Wrd54.Obj);

DEFLABEL (label_52)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_56_2]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_51;

DEFLABEL (label_50)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_1]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_48;
  Wrd31 = Wrd35;

DEFLABEL (label_47)
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_56_3]));
  (Wrd48.Obj) = ((Wrd40.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd40.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_44)
  Rvl = (current_block [OBJECT_56_7]);
  goto pop_return;

DEFLABEL (label_46)
  if ((Wrd48.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_56_30])), (Wrd40.pObj), (Wrd37.Obj));

DEFLABEL (label_40)
  goto label_44;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_29])), (Wrd32.pObj));

DEFLABEL (label_39)
  (Wrd31.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_51)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_50;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_56_28])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_38)
  goto label_49;

DEFLABEL (label_53)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_27]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_3]), 2);

DEFLABEL (label_41)
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_26])), (Wrd12.pObj));

DEFLABEL (label_37)
  (Wrd11.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd109.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_2]));
  (Wrd112.Obj) = ((Wrd109.pObj) [0]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if ((Wrd113.uLng) == 50)
    goto label_72;
  Wrd108 = Wrd112;

DEFLABEL (label_71)
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd116.uLng) == 1))
    goto label_70;
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd115.Obj) = ((Wrd114.pObj) [0]);
  (* (--Rsp)) = (Wrd115.Obj);

DEFLABEL (label_69)
  (Wrd123.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_3]));
  (Wrd126.Obj) = ((Wrd123.pObj) [0]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if ((Wrd127.uLng) == 50)
    goto label_68;
  Wrd122 = Wrd126;

DEFLABEL (label_67)
  Wrd121 = Wrd122;
  (Wrd128.Obj) = (* (Rsp++));
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if (! ((Wrd140.uLng) == 30))
    goto label_66;
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd135.uLng) == 26))
    goto label_66;
  (Wrd136.Lng) = (FIXNUM_TO_LONG (Wrd128.Obj));
  (Wrd137.pObj) = (OBJECT_ADDRESS (Wrd122.Obj));
  (Wrd138.Obj) = ((Wrd137.pObj) [1]);
  (Wrd139.Lng) = (FIXNUM_TO_LONG (Wrd138.Obj));
  if (! (((unsigned long) (Wrd136.Lng)) < ((unsigned long) (Wrd139.Lng))))
    goto label_66;
  (Wrd130.uLng) = (OBJECT_DATUM (Wrd128.Obj));
  (Wrd132.pChr) = (& ((Wrd137.pChr) [(Wrd130.Lng)]));
  (Wrd133.uLng) = ((unsigned long) (((unsigned char *) (Wrd132.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd134.Obj) = (MAKE_OBJECT (26, (Wrd133.uLng)));
  (* (--Rsp)) = (Wrd134.Obj);

DEFLABEL (label_65)
  (Wrd148.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_2]));
  (Wrd151.Obj) = ((Wrd148.pObj) [0]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if ((Wrd152.uLng) == 50)
    goto label_64;
  Wrd147 = Wrd151;

DEFLABEL (label_63)
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd155.uLng) == 1))
    goto label_62;
  (Wrd154.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd153.Obj) = ((Wrd154.pObj) [1]);

DEFLABEL (label_61)
  (Wrd160.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_56_4]));
  (Wrd168.Obj) = ((Wrd160.pObj) [0]);
  (Wrd169.uLng) = (OBJECT_TYPE (Wrd168.Obj));
  if ((Wrd169.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd160.pObj) [0]) = (Wrd153.Obj);

DEFLABEL (label_58)
  (Wrd173.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd173.Obj);
  goto label_56;

DEFLABEL (label_60)
  if ((Wrd168.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_56_24])), (Wrd160.pObj), (Wrd153.Obj));

DEFLABEL (label_35)
  goto label_58;

DEFLABEL (label_62)
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_23]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_6]), 1);

DEFLABEL (label_34)
  (Wrd153.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_22])), (Wrd148.pObj));

DEFLABEL (label_33)
  (Wrd147.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_21]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_5]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_20])), (Wrd123.pObj));

DEFLABEL (label_31)
  (Wrd122.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_19]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_4]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_18])), (Wrd109.pObj));

DEFLABEL (label_29)
  (Wrd108.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_16])), (Wrd101.pObj));

DEFLABEL (label_28)
  (Wrd100.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_77)
  if ((Wrd89.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_76;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_56_14])), (Wrd81.pObj), (Wrd78.Obj));

DEFLABEL (label_27)
  goto label_75;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_13])), (Wrd73.pObj));

DEFLABEL (label_26)
  (Wrd72.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_82)
  if ((Wrd66.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_56_12])), (Wrd58.pObj), (Wrd59.Obj));

DEFLABEL (label_25)
  goto label_80;

DEFLABEL (label_84)
  (Wrd178.Obj) = (Rsp [0]);
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_11]))));
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_3]), 2);

DEFLABEL (label_36)
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_10])), (Wrd53.pObj));

DEFLABEL (label_24)
  (Wrd52.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_89)
  if ((Wrd42.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_88;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_56_9])), (Wrd34.pObj), (Wrd35.Obj));

DEFLABEL (label_23)
  goto label_87;

DEFLABEL (label_92)
  if ((Wrd30.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_91;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_56_8])), (Wrd22.pObj), (Wrd19.Obj));

DEFLABEL (label_22)
  goto label_90;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_7])), (Wrd13.pObj));

DEFLABEL (label_21)
  (Wrd12.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_6])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_95;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define TAG_57_6 1
#define LABEL_57_8 7
#define ENVIRONMENT_LABEL_57_3 18
#define DEBUGGING_LABEL_57_2 17
#define EXECUTE_CACHE_57_10 9
#define EXECUTE_CACHE_57_9 11
#define EXECUTE_CACHE_57_7 13
#define FREE_REFERENCE_57_0 16
#define FREE_REFERENCES_LABEL_57_0 8
#define NUMBER_OF_LINKER_SECTIONS_57_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_57_4);
      goto define_repeater_char_1;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_57_8);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_repeater_char_5)
DEFLABEL (define_repeater_char_1)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_57_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_9]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_8])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_8 7
#define LABEL_58_9 9
#define LABEL_58_10 11
#define LABEL_58_11 13
#define LABEL_58_7 15
#define LABEL_58_14 17
#define LABEL_58_15 19
#define LABEL_58_16 21
#define LABEL_58_17 23
#define LABEL_58_18 25
#define LABEL_58_19 27
#define LABEL_58_20 29
#define LABEL_58_13 31
#define LABEL_58_23 33
#define LABEL_58_24 35
#define LABEL_58_25 37
#define LABEL_58_26 39
#define LABEL_58_27 41
#define LABEL_58_28 43
#define LABEL_58_29 45
#define LABEL_58_22 47
#define LABEL_58_30 49
#define LABEL_58_31 51
#define LABEL_58_32 53
#define ENVIRONMENT_LABEL_58_3 74
#define DEBUGGING_LABEL_58_2 73
#define OBJECT_58_6 72
#define OBJECT_58_5 71
#define OBJECT_58_4 70
#define OBJECT_58_3 69
#define OBJECT_58_2 68
#define OBJECT_58_1 67
#define OBJECT_58_0 66
#define EXECUTE_CACHE_58_21 55
#define EXECUTE_CACHE_58_12 57
#define EXECUTE_CACHE_58_6 59
#define FREE_REFERENCE_58_1 62
#define FREE_REFERENCE_58_0 63
#define FREE_ASSIGNMENT_58_0 65
#define FREE_REFERENCES_LABEL_58_0 54
#define NUMBER_OF_LINKER_SECTIONS_58_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd76;
  machine_word Wrd61;
  machine_word Wrd71;
  machine_word Wrd59;
  machine_word Wrd54;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd75;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd70;
  machine_word Wrd58;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd55;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_58_4);
      goto repeater_loop_13;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_58_8);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_58_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_58_10);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_58_11);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_58_7);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_58_14);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_58_15);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_58_16);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_58_17);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_58_18);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_58_19);
      goto label_21;

    case 13:
      current_block = (Rpc - LABEL_58_20);
      goto label_22;

    case 14:
      current_block = (Rpc - LABEL_58_13);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_58_23);
      goto label_30;

    case 16:
      current_block = (Rpc - LABEL_58_24);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_58_25);
      goto label_32;

    case 18:
      current_block = (Rpc - LABEL_58_26);
      goto label_33;

    case 19:
      current_block = (Rpc - LABEL_58_27);
      goto label_27;

    case 20:
      current_block = (Rpc - LABEL_58_28);
      goto label_28;

    case 21:
      current_block = (Rpc - LABEL_58_29);
      goto label_29;

    case 22:
      current_block = (Rpc - LABEL_58_22);
      goto continuation_9;

    case 23:
      current_block = (Rpc - LABEL_58_30);
      goto label_34;

    case 24:
      current_block = (Rpc - LABEL_58_31);
      goto label_35;

    case 25:
      current_block = (Rpc - LABEL_58_32);
      goto label_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repeater_loop_38)
DEFLABEL (repeater_loop_13)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_89;
  Wrd6 = Wrd10;

DEFLABEL (label_88)
  if (! ((Wrd6.Obj) == (current_block [OBJECT_58_0])))
    goto label_39;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (label_39)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_58_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_87;
  Wrd18 = Wrd22;

DEFLABEL (label_86)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_85;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_84)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_83;
  Wrd32 = Wrd36;

DEFLABEL (label_82)
  Wrd31 = Wrd32;
  (Wrd38.Obj) = (* (Rsp++));
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd50.uLng) == 30))
    goto label_81;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_81;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) (Wrd46.Lng)) < ((unsigned long) (Wrd49.Lng))))
    goto label_81;
  (Wrd40.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd42.pChr) = (& ((Wrd47.pChr) [(Wrd40.Lng)]));
  (Wrd43.uLng) = ((unsigned long) (((unsigned char *) (Wrd42.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd44.Obj) = (MAKE_OBJECT (26, (Wrd43.uLng)));
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_80)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_58_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_46;
  Wrd8 = Wrd12;

DEFLABEL (label_45)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_44;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_43)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_0]));
  (Wrd29.Obj) = ((Wrd21.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_42;

DEFLABEL (label_41)
  ((Wrd21.pObj) [0]) = (Wrd14.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_21]));

DEFLABEL (label_42)
  if ((Wrd29.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_41;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_20])), (Wrd21.pObj), (Wrd14.Obj));

DEFLABEL (label_22)
  goto label_40;

DEFLABEL (label_44)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_5]), 1);

DEFLABEL (label_21)
  (Wrd14.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_18])), (Wrd9.pObj));

DEFLABEL (label_20)
  (Wrd8.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_13]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_58_4]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_79;
  Wrd38 = Wrd42;

DEFLABEL (label_78)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_77;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_76)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_1]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_75;
  Wrd52 = Wrd56;

DEFLABEL (label_74)
  Wrd51 = Wrd52;
  (Wrd58.Obj) = (* (Rsp++));
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd70.uLng) == 30))
    goto label_73;
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_73;
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [1]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) (Wrd66.Lng)) < ((unsigned long) (Wrd69.Lng))))
    goto label_73;
  (Wrd60.uLng) = (OBJECT_DATUM (Wrd58.Obj));
  (Wrd62.pChr) = (& ((Wrd67.pChr) [(Wrd60.Lng)]));
  (Wrd63.uLng) = ((unsigned long) (((unsigned char *) (Wrd62.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd64.Obj) = (MAKE_OBJECT (26, (Wrd63.uLng)));
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_72)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_58_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_54;
  Wrd8 = Wrd12;

DEFLABEL (label_53)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_52;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_51)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_0]));
  (Wrd29.Obj) = ((Wrd21.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd21.pObj) [0]) = (Wrd14.Obj);

DEFLABEL (label_48)
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_21]));

DEFLABEL (label_50)
  if ((Wrd29.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_29])), (Wrd21.pObj), (Wrd14.Obj));

DEFLABEL (label_29)
  goto label_48;

DEFLABEL (label_52)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_28]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_5]), 1);

DEFLABEL (label_28)
  (Wrd14.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_27])), (Wrd9.pObj));

DEFLABEL (label_27)
  (Wrd8.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_22]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_58_6]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_71;
  Wrd39 = Wrd43;

DEFLABEL (label_70)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_69;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_68)
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_1]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_67;
  Wrd53 = Wrd57;

DEFLABEL (label_66)
  Wrd52 = Wrd53;
  (Wrd59.Obj) = (* (Rsp++));
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd71.uLng) == 30))
    goto label_65;
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd66.uLng) == 26))
    goto label_65;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [1]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) (Wrd67.Lng)) < ((unsigned long) (Wrd70.Lng))))
    goto label_65;
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd59.Obj));
  (Wrd63.pChr) = (& ((Wrd68.pChr) [(Wrd61.Lng)]));
  (Wrd64.uLng) = ((unsigned long) (((unsigned char *) (Wrd63.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd65.Obj) = (MAKE_OBJECT (26, (Wrd64.uLng)));
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_58_22);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_56;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (label_56)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_63;
  Wrd8 = Wrd12;

DEFLABEL (label_62)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_61;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_60)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_0]));
  (Wrd29.Obj) = ((Wrd21.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  ((Wrd21.pObj) [0]) = (Wrd14.Obj);

DEFLABEL (label_57)
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_21]));

DEFLABEL (label_59)
  if ((Wrd29.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_58;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_32])), (Wrd21.pObj), (Wrd14.Obj));

DEFLABEL (label_36)
  goto label_57;

DEFLABEL (label_61)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_5]), 1);

DEFLABEL (label_35)
  (Wrd14.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_30])), (Wrd9.pObj));

DEFLABEL (label_34)
  (Wrd8.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_26]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_3]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_25])), (Wrd54.pObj));

DEFLABEL (label_32)
  (Wrd53.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_24]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_23])), (Wrd40.pObj));

DEFLABEL (label_30)
  (Wrd39.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_17]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_3]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_16])), (Wrd53.pObj));

DEFLABEL (label_25)
  (Wrd52.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_15]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_14])), (Wrd39.pObj));

DEFLABEL (label_23)
  (Wrd38.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_11]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_3]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_10])), (Wrd33.pObj));

DEFLABEL (label_18)
  (Wrd32.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_8])), (Wrd19.pObj));

DEFLABEL (label_16)
  (Wrd18.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_5])), (Wrd7.pObj));

DEFLABEL (label_15)
  (Wrd6.Obj) = Rvl;
  goto label_88;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_5 3
#define LABEL_59_4 5
#define LABEL_59_7 7
#define LABEL_59_8 9
#define LABEL_59_11 11
#define LABEL_59_12 13
#define LABEL_59_13 15
#define LABEL_59_10 17
#define LABEL_59_15 19
#define LABEL_59_16 21
#define LABEL_59_17 23
#define LABEL_59_18 25
#define LABEL_59_19 27
#define LABEL_59_20 29
#define LABEL_59_21 31
#define LABEL_59_22 33
#define LABEL_59_23 35
#define LABEL_59_24 37
#define LABEL_59_25 39
#define LABEL_59_26 41
#define LABEL_59_27 43
#define LABEL_59_28 45
#define LABEL_59_29 47
#define LABEL_59_30 49
#define LABEL_59_6 51
#define LABEL_59_31 53
#define LABEL_59_32 55
#define LABEL_59_33 57
#define ENVIRONMENT_LABEL_59_3 80
#define DEBUGGING_LABEL_59_2 79
#define OBJECT_59_7 78
#define OBJECT_59_6 77
#define OBJECT_59_5 76
#define OBJECT_59_4 75
#define OBJECT_59_3 74
#define OBJECT_59_2 73
#define OBJECT_59_1 72
#define OBJECT_59_0 71
#define EXECUTE_CACHE_59_14 59
#define EXECUTE_CACHE_59_9 61
#define FREE_REFERENCE_59_2 64
#define FREE_REFERENCE_59_1 65
#define FREE_REFERENCE_59_0 66
#define FREE_ASSIGNMENT_59_2 68
#define FREE_ASSIGNMENT_59_1 69
#define FREE_ASSIGNMENT_59_0 70
#define FREE_REFERENCES_LABEL_59_0 58
#define NUMBER_OF_LINKER_SECTIONS_59_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd137;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd167;
  machine_word Wrd164;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd162;
  machine_word Wrd117;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd90;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd175;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd170;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd183;
  machine_word Wrd180;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd178;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_59_5);
      goto continuation_18;

    case 1:
      current_block = (Rpc - LABEL_59_4);
      goto repeater_finish_23;

    case 2:
      current_block = (Rpc - LABEL_59_7);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_59_8);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_59_11);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_59_12);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_59_13);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_59_10);
      goto lambda_17;

    case 8:
      current_block = (Rpc - LABEL_59_15);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_59_16);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_59_17);
      goto label_45;

    case 11:
      current_block = (Rpc - LABEL_59_18);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_59_19);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_59_20);
      goto label_34;

    case 14:
      current_block = (Rpc - LABEL_59_21);
      goto label_35;

    case 15:
      current_block = (Rpc - LABEL_59_22);
      goto label_44;

    case 16:
      current_block = (Rpc - LABEL_59_23);
      goto label_36;

    case 17:
      current_block = (Rpc - LABEL_59_24);
      goto label_37;

    case 18:
      current_block = (Rpc - LABEL_59_25);
      goto label_38;

    case 19:
      current_block = (Rpc - LABEL_59_26);
      goto label_39;

    case 20:
      current_block = (Rpc - LABEL_59_27);
      goto label_43;

    case 21:
      current_block = (Rpc - LABEL_59_28);
      goto label_40;

    case 22:
      current_block = (Rpc - LABEL_59_29);
      goto label_41;

    case 23:
      current_block = (Rpc - LABEL_59_30);
      goto label_42;

    case 24:
      current_block = (Rpc - LABEL_59_6);
      goto continuation_20;

    case 25:
      current_block = (Rpc - LABEL_59_31);
      goto label_46;

    case 26:
      current_block = (Rpc - LABEL_59_32);
      goto label_47;

    case 27:
      current_block = (Rpc - LABEL_59_33);
      goto label_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repeater_finish_50)
DEFLABEL (repeater_finish_23)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_63;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_69;
  Wrd13 = Wrd17;

DEFLABEL (label_68)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_67;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_66)
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd29.Lng) = ((Wrd26.Lng) - 3L);
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_65;
  Wrd31 = Wrd35;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_14]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_59_5);

DEFLABEL (label_63)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_62;
  Wrd41 = Wrd45;

DEFLABEL (label_61)
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd50.Lng) = ((Wrd47.Lng) + 3L);
  (Wrd51.Obj) = (LONG_TO_FIXNUM (Wrd50.Lng));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_59_0]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_60;
  Wrd53 = Wrd57;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_9]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_59_6);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  Rvl = (current_block [OBJECT_59_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_58;
  Wrd9 = Wrd13;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_59_7]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_56;
  Wrd17 = Wrd21;

DEFLABEL (label_55)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_54;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_53)
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd34.Lng) = ((Wrd31.Lng) + 6L);
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));
  (Rsp [2]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_9]));

DEFLABEL (label_54)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_33]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 1);

DEFLABEL (label_48)
  (Wrd23.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_32])), (Wrd18.pObj));

DEFLABEL (label_47)
  (Wrd17.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_31])), (Wrd10.pObj));

DEFLABEL (label_46)
  (Wrd9.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_8])), (Wrd54.pObj));

DEFLABEL (label_29)
  (Wrd53.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_7])), (Wrd42.pObj));

DEFLABEL (label_28)
  (Wrd41.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_13])), (Wrd32.pObj));

DEFLABEL (label_27)
  (Wrd31.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 1);

DEFLABEL (label_26)
  (Wrd19.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_11])), (Wrd14.pObj));

DEFLABEL (label_25)
  (Wrd13.Obj) = Rvl;
  goto label_68;

DEFLABEL (lambda_51)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_59_10);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_59_0]));
  (Wrd6.Obj) = (current_block [OBJECT_59_2]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_108;

DEFLABEL (label_107)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_106)
  (Wrd20.Obj) = (current_block [OBJECT_59_3]);
  (Wrd21.Obj) = (current_block [OBJECT_59_4]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_105;
  Wrd23 = Wrd27;

DEFLABEL (label_104)
  (Wrd178.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd178.uLng) == 1))
    goto label_103;
  (Wrd176.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd177.Obj) = (Rsp [0]);
  ((Wrd176.pObj) [1]) = (Wrd177.Obj);

DEFLABEL (label_102)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_59_1]));
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_101;

DEFLABEL (label_100)
  ((Wrd29.pObj) [0]) = (Wrd30.Obj);

DEFLABEL (label_99)
  Rsp = (& (Rsp [1]));
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_98;
  Wrd43 = Wrd47;

DEFLABEL (label_97)
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd51.Lng) = ((Wrd50.Lng) + 1L);
  (Wrd49.Obj) = (LONG_TO_FIXNUM (Wrd51.Lng));
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_59_2]));
  (Wrd60.Obj) = ((Wrd52.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_96;

DEFLABEL (label_95)
  ((Wrd52.pObj) [0]) = (Wrd49.Obj);

DEFLABEL (label_94)
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.Obj) = (current_block [OBJECT_59_4]);
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd68.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_2]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_93;
  Wrd70 = Wrd74;

DEFLABEL (label_92)
  (Wrd170.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd170.uLng) == 1))
    goto label_91;
  (Wrd168.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd169.Obj) = (Rsp [0]);
  ((Wrd168.pObj) [1]) = (Wrd169.Obj);

DEFLABEL (label_90)
  (Wrd76.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_59_1]));
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd84.Obj) = ((Wrd76.pObj) [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if ((Wrd85.uLng) == 50)
    goto label_89;

DEFLABEL (label_88)
  ((Wrd76.pObj) [0]) = (Wrd77.Obj);

DEFLABEL (label_87)
  Rsp = (& (Rsp [1]));
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd94.Obj) = ((Wrd91.pObj) [0]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd95.uLng) == 50)
    goto label_86;
  Wrd90 = Wrd94;

DEFLABEL (label_85)
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  (Wrd98.Lng) = ((Wrd97.Lng) + 1L);
  (Wrd96.Obj) = (LONG_TO_FIXNUM (Wrd98.Lng));
  (Wrd99.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_59_2]));
  (Wrd107.Obj) = ((Wrd99.pObj) [0]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if ((Wrd108.uLng) == 50)
    goto label_84;

DEFLABEL (label_83)
  ((Wrd99.pObj) [0]) = (Wrd96.Obj);

DEFLABEL (label_82)
  (Wrd114.Obj) = (Rsp [1]);
  (Wrd115.Obj) = (current_block [OBJECT_59_4]);
  (* (Rhp++)) = (Wrd114.Obj);
  (* (Rhp++)) = (Wrd115.Obj);
  (Wrd112.pObj) = (& (Rhp [-2]));
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd112.pObj)));
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd118.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_2]));
  (Wrd121.Obj) = ((Wrd118.pObj) [0]);
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if ((Wrd122.uLng) == 50)
    goto label_81;
  Wrd117 = Wrd121;

DEFLABEL (label_80)
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd162.uLng) == 1))
    goto label_79;
  (Wrd160.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd161.Obj) = (Rsp [0]);
  ((Wrd160.pObj) [1]) = (Wrd161.Obj);

DEFLABEL (label_78)
  (Wrd123.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_59_1]));
  (Wrd124.Obj) = (Rsp [0]);
  (Wrd131.Obj) = ((Wrd123.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  ((Wrd123.pObj) [0]) = (Wrd124.Obj);

DEFLABEL (label_75)
  Rsp = (& (Rsp [1]));
  (Wrd138.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd141.Obj) = ((Wrd138.pObj) [0]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if ((Wrd142.uLng) == 50)
    goto label_74;
  Wrd137 = Wrd141;

DEFLABEL (label_73)
  (Wrd144.Lng) = (FIXNUM_TO_LONG (Wrd137.Obj));
  (Wrd145.Lng) = ((Wrd144.Lng) + 1L);
  (Wrd143.Obj) = (LONG_TO_FIXNUM (Wrd145.Lng));
  (Wrd146.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_59_2]));
  (Wrd154.Obj) = ((Wrd146.pObj) [0]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if ((Wrd155.uLng) == 50)
    goto label_72;

DEFLABEL (label_71)
  ((Wrd146.pObj) [0]) = (Wrd143.Obj);

DEFLABEL (label_70)
  Rvl = (current_block [OBJECT_59_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_72)
  if ((Wrd154.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_71;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_59_30])), (Wrd146.pObj), (Wrd143.Obj));

DEFLABEL (label_42)
  goto label_70;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_29])), (Wrd138.pObj));

DEFLABEL (label_41)
  (Wrd137.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_77)
  if ((Wrd131.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_76;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_59_28])), (Wrd123.pObj), (Wrd124.Obj));

DEFLABEL (label_40)
  goto label_75;

DEFLABEL (label_79)
  (Wrd164.Obj) = (Rsp [0]);
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_27]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_5]), 2);

DEFLABEL (label_43)
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_26])), (Wrd118.pObj));

DEFLABEL (label_39)
  (Wrd117.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_84)
  if ((Wrd107.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_83;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_59_25])), (Wrd99.pObj), (Wrd96.Obj));

DEFLABEL (label_38)
  goto label_82;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_24])), (Wrd91.pObj));

DEFLABEL (label_37)
  (Wrd90.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_89)
  if ((Wrd84.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_88;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_59_23])), (Wrd76.pObj), (Wrd77.Obj));

DEFLABEL (label_36)
  goto label_87;

DEFLABEL (label_91)
  (Wrd172.Obj) = (Rsp [0]);
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_22]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_5]), 2);

DEFLABEL (label_44)
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_21])), (Wrd71.pObj));

DEFLABEL (label_35)
  (Wrd70.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_96)
  if ((Wrd60.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_95;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_59_20])), (Wrd52.pObj), (Wrd49.Obj));

DEFLABEL (label_34)
  goto label_94;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_19])), (Wrd44.pObj));

DEFLABEL (label_33)
  (Wrd43.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_101)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_100;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_59_18])), (Wrd29.pObj), (Wrd30.Obj));

DEFLABEL (label_32)
  goto label_99;

DEFLABEL (label_103)
  (Wrd180.Obj) = (Rsp [0]);
  (Wrd183.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_17]))));
  (* (--Rsp)) = (Wrd183.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_5]), 2);

DEFLABEL (label_45)
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_16])), (Wrd24.pObj));

DEFLABEL (label_31)
  (Wrd23.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_108)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_107;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_59_15])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_30)
  goto label_106;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_5 3
#define LABEL_60_4 5
#define LABEL_60_6 7
#define LABEL_60_8 9
#define LABEL_60_12 11
#define LABEL_60_13 13
#define LABEL_60_14 15
#define LABEL_60_15 17
#define LABEL_60_9 19
#define LABEL_60_18 21
#define LABEL_60_11 23
#define LABEL_60_19 25
#define LABEL_60_20 27
#define LABEL_60_21 29
#define LABEL_60_22 31
#define LABEL_60_25 33
#define LABEL_60_26 35
#define LABEL_60_27 37
#define LABEL_60_28 39
#define LABEL_60_23 41
#define LABEL_60_29 43
#define LABEL_60_30 45
#define LABEL_60_31 47
#define LABEL_60_32 49
#define LABEL_60_33 51
#define LABEL_60_34 53
#define LABEL_60_35 55
#define LABEL_60_36 57
#define LABEL_60_37 59
#define LABEL_60_24 61
#define LABEL_60_38 63
#define LABEL_60_39 65
#define LABEL_60_40 67
#define LABEL_60_41 69
#define LABEL_60_42 71
#define LABEL_60_43 73
#define LABEL_60_44 75
#define LABEL_60_45 77
#define LABEL_60_46 79
#define LABEL_60_47 81
#define LABEL_60_48 83
#define LABEL_60_49 85
#define LABEL_60_50 87
#define LABEL_60_51 89
#define LABEL_60_52 91
#define LABEL_60_53 93
#define LABEL_60_54 95
#define LABEL_60_55 97
#define LABEL_60_56 99
#define LABEL_60_57 101
#define LABEL_60_58 103
#define LABEL_60_59 105
#define LABEL_60_60 107
#define LABEL_60_61 109
#define LABEL_60_62 111
#define LABEL_60_63 113
#define LABEL_60_64 115
#define LABEL_60_66 117
#define LABEL_60_67 119
#define LABEL_60_68 121
#define LABEL_60_69 123
#define LABEL_60_70 125
#define LABEL_60_71 127
#define LABEL_60_72 129
#define LABEL_60_65 131
#define LABEL_60_73 133
#define TAG_60_74 65
#define LABEL_60_75 135
#define LABEL_60_76 137
#define LABEL_60_77 139
#define LABEL_60_78 141
#define LABEL_60_79 143
#define LABEL_60_87 145
#define LABEL_60_81 147
#define ENVIRONMENT_LABEL_60_3 201
#define DEBUGGING_LABEL_60_2 200
#define OBJECT_60_16 199
#define OBJECT_60_15 198
#define OBJECT_60_14 197
#define OBJECT_60_13 196
#define OBJECT_60_12 195
#define OBJECT_60_11 194
#define OBJECT_60_10 193
#define OBJECT_60_9 192
#define OBJECT_60_8 191
#define OBJECT_60_7 190
#define OBJECT_60_6 189
#define OBJECT_60_5 188
#define OBJECT_60_4 187
#define OBJECT_60_3 186
#define OBJECT_60_2 185
#define OBJECT_60_1 184
#define OBJECT_60_0 183
#define EXECUTE_CACHE_60_88 149
#define EXECUTE_CACHE_60_86 151
#define EXECUTE_CACHE_60_85 153
#define EXECUTE_CACHE_60_84 155
#define EXECUTE_CACHE_60_83 157
#define EXECUTE_CACHE_60_82 159
#define EXECUTE_CACHE_60_80 161
#define EXECUTE_CACHE_60_17 163
#define EXECUTE_CACHE_60_16 165
#define EXECUTE_CACHE_60_10 167
#define EXECUTE_CACHE_60_7 169
#define FREE_REFERENCE_60_4 172
#define FREE_REFERENCE_60_3 173
#define FREE_REFERENCE_60_2 174
#define FREE_REFERENCE_60_1 175
#define FREE_REFERENCE_60_0 176
#define FREE_ASSIGNMENT_60_4 178
#define FREE_ASSIGNMENT_60_3 179
#define FREE_ASSIGNMENT_60_2 180
#define FREE_ASSIGNMENT_60_1 181
#define FREE_ASSIGNMENT_60_0 182
#define FREE_REFERENCES_LABEL_60_0 148
#define NUMBER_OF_LINKER_SECTIONS_60_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd88;
  machine_word Wrd94;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd71;
  machine_word Wrd49;
  machine_word Wrd26;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd84;
  machine_word Wrd93;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd120;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd150;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd145;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd89;
  machine_word Wrd27;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd83;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd59;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd31;
  machine_word Wrd87;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd82;
  machine_word Wrd70;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd90;
  machine_word Wrd33;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_60_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_60_4);
      goto lambda_75;

    case 2:
      current_block = (Rpc - LABEL_60_6);
      goto label_77;

    case 3:
      current_block = (Rpc - LABEL_60_8);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_60_12);
      goto label_78;

    case 5:
      current_block = (Rpc - LABEL_60_13);
      goto label_79;

    case 6:
      current_block = (Rpc - LABEL_60_14);
      goto label_80;

    case 7:
      current_block = (Rpc - LABEL_60_15);
      goto label_81;

    case 8:
      current_block = (Rpc - LABEL_60_9);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_60_18);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_60_11);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_60_19);
      goto label_82;

    case 12:
      current_block = (Rpc - LABEL_60_20);
      goto label_83;

    case 13:
      current_block = (Rpc - LABEL_60_21);
      goto label_84;

    case 14:
      current_block = (Rpc - LABEL_60_22);
      goto label_85;

    case 15:
      current_block = (Rpc - LABEL_60_25);
      goto label_86;

    case 16:
      current_block = (Rpc - LABEL_60_26);
      goto label_87;

    case 17:
      current_block = (Rpc - LABEL_60_27);
      goto label_88;

    case 18:
      current_block = (Rpc - LABEL_60_28);
      goto label_89;

    case 19:
      current_block = (Rpc - LABEL_60_23);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_60_29);
      goto label_90;

    case 21:
      current_block = (Rpc - LABEL_60_30);
      goto label_91;

    case 22:
      current_block = (Rpc - LABEL_60_31);
      goto label_92;

    case 23:
      current_block = (Rpc - LABEL_60_32);
      goto label_93;

    case 24:
      current_block = (Rpc - LABEL_60_33);
      goto label_94;

    case 25:
      current_block = (Rpc - LABEL_60_34);
      goto label_98;

    case 26:
      current_block = (Rpc - LABEL_60_35);
      goto label_95;

    case 27:
      current_block = (Rpc - LABEL_60_36);
      goto label_96;

    case 28:
      current_block = (Rpc - LABEL_60_37);
      goto label_97;

    case 29:
      current_block = (Rpc - LABEL_60_24);
      goto continuation_13;

    case 30:
      current_block = (Rpc - LABEL_60_38);
      goto label_99;

    case 31:
      current_block = (Rpc - LABEL_60_39);
      goto label_100;

    case 32:
      current_block = (Rpc - LABEL_60_40);
      goto label_101;

    case 33:
      current_block = (Rpc - LABEL_60_41);
      goto loop_72;

    case 34:
      current_block = (Rpc - LABEL_60_42);
      goto label_102;

    case 35:
      current_block = (Rpc - LABEL_60_43);
      goto label_108;

    case 36:
      current_block = (Rpc - LABEL_60_44);
      goto label_112;

    case 37:
      current_block = (Rpc - LABEL_60_45);
      goto label_109;

    case 38:
      current_block = (Rpc - LABEL_60_46);
      goto label_110;

    case 39:
      current_block = (Rpc - LABEL_60_47);
      goto label_111;

    case 40:
      current_block = (Rpc - LABEL_60_48);
      goto label_103;

    case 41:
      current_block = (Rpc - LABEL_60_49);
      goto label_107;

    case 42:
      current_block = (Rpc - LABEL_60_50);
      goto label_104;

    case 43:
      current_block = (Rpc - LABEL_60_51);
      goto label_105;

    case 44:
      current_block = (Rpc - LABEL_60_52);
      goto label_106;

    case 45:
      current_block = (Rpc - LABEL_60_53);
      goto continuation_19;

    case 46:
      current_block = (Rpc - LABEL_60_54);
      goto continuation_21;

    case 47:
      current_block = (Rpc - LABEL_60_55);
      goto loop_36;

    case 48:
      current_block = (Rpc - LABEL_60_56);
      goto label_113;

    case 49:
      current_block = (Rpc - LABEL_60_57);
      goto label_114;

    case 50:
      current_block = (Rpc - LABEL_60_58);
      goto label_115;

    case 51:
      current_block = (Rpc - LABEL_60_59);
      goto label_116;

    case 52:
      current_block = (Rpc - LABEL_60_60);
      goto label_117;

    case 53:
      current_block = (Rpc - LABEL_60_61);
      goto label_118;

    case 54:
      current_block = (Rpc - LABEL_60_62);
      goto label_119;

    case 55:
      current_block = (Rpc - LABEL_60_63);
      goto label_120;

    case 56:
      current_block = (Rpc - LABEL_60_64);
      goto label_121;

    case 57:
      current_block = (Rpc - LABEL_60_66);
      goto loop_70;

    case 58:
      current_block = (Rpc - LABEL_60_67);
      goto label_122;

    case 59:
      current_block = (Rpc - LABEL_60_68);
      goto label_123;

    case 60:
      current_block = (Rpc - LABEL_60_69);
      goto label_127;

    case 61:
      current_block = (Rpc - LABEL_60_70);
      goto label_124;

    case 62:
      current_block = (Rpc - LABEL_60_71);
      goto label_125;

    case 63:
      current_block = (Rpc - LABEL_60_72);
      goto label_126;

    case 64:
      current_block = (Rpc - LABEL_60_65);
      goto continuation_26;

    case 65:
      current_block = (Rpc - LABEL_60_73);
      goto lambda_134;

    case 66:
      current_block = (Rpc - LABEL_60_75);
      goto continuation_34;

    case 67:
      current_block = (Rpc - LABEL_60_76);
      goto continuation_33;

    case 68:
      current_block = (Rpc - LABEL_60_77);
      goto continuation_32;

    case 69:
      current_block = (Rpc - LABEL_60_78);
      goto continuation_31;

    case 70:
      current_block = (Rpc - LABEL_60_79);
      goto continuation_30;

    case 71:
      current_block = (Rpc - LABEL_60_87);
      goto label_128;

    case 72:
      current_block = (Rpc - LABEL_60_81);
      goto continuation_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_130)
DEFLABEL (lambda_75)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_200;
  Wrd6 = Wrd10;

DEFLABEL (label_199)
  if ((Wrd6.Obj) == (current_block [OBJECT_60_0]))
    goto label_198;

DEFLABEL (label_197)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_60_1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_60_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_60_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_60_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_196;
  Wrd10 = Wrd14;

DEFLABEL (label_195)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_194;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_193)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_192;
  Wrd24 = Wrd28;

DEFLABEL (label_191)
  Wrd23 = Wrd24;
  (Wrd30.Obj) = (* (Rsp++));
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd42.uLng) == 30))
    goto label_190;
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_190;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_190;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd34.pChr) = (& ((Wrd39.pChr) [(Wrd32.Lng)]));
  (Wrd35.uLng) = ((unsigned long) (((unsigned char *) (Wrd34.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd36.Obj) = (MAKE_OBJECT (26, (Wrd35.uLng)));
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_189)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_60_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_188;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_187;
  Wrd8 = Wrd12;

DEFLABEL (label_186)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_185;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_184)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_0]));
  (Wrd29.Obj) = ((Wrd21.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_183;

DEFLABEL (label_182)
  ((Wrd21.pObj) [0]) = (Wrd14.Obj);

DEFLABEL (label_181)
  (Wrd33.Obj) = (current_block [OBJECT_60_7]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_180)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_179;
  Wrd35 = Wrd39;

DEFLABEL (label_178)
  if (! ((Wrd35.Obj) == (current_block [OBJECT_60_0])))
    goto label_177;
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_18]))));
  (* (--Rsp)) = (Wrd90.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_60_18);

DEFLABEL (label_177)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_23]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_24]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_60_8]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_176;
  Wrd50 = Wrd54;

DEFLABEL (label_175)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_174;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_173)
  (Wrd65.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_1]));
  (Wrd68.Obj) = ((Wrd65.pObj) [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd69.uLng) == 50)
    goto label_172;
  Wrd64 = Wrd68;

DEFLABEL (label_171)
  Wrd63 = Wrd64;
  (Wrd70.Obj) = (* (Rsp++));
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd82.uLng) == 30))
    goto label_170;
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd77.uLng) == 26))
    goto label_170;
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [1]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) (Wrd78.Lng)) < ((unsigned long) (Wrd81.Lng))))
    goto label_170;
  (Wrd72.uLng) = (OBJECT_DATUM (Wrd70.Obj));
  (Wrd74.pChr) = (& ((Wrd79.pChr) [(Wrd72.Lng)]));
  (Wrd75.uLng) = ((unsigned long) (((unsigned char *) (Wrd74.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd76.Obj) = (MAKE_OBJECT (26, (Wrd75.uLng)));
  (* (--Rsp)) = (Wrd76.Obj);

DEFLABEL (label_169)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_16]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_60_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_168;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_167;
  Wrd8 = Wrd12;

DEFLABEL (label_166)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_165;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_164)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_0]));
  (Wrd29.Obj) = ((Wrd21.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_163;

DEFLABEL (label_162)
  ((Wrd21.pObj) [0]) = (Wrd14.Obj);

DEFLABEL (label_161)
  (Wrd36.Obj) = (current_block [OBJECT_60_14]);
  (Wrd37.Obj) = (current_block [OBJECT_60_0]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_160)
  goto loop_36;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_60_23);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_159;
  Wrd5 = Wrd9;

DEFLABEL (label_158)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_157;
  Wrd12 = Wrd16;

DEFLABEL (label_156)
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_1]));
  (Wrd30.Obj) = ((Wrd22.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_155;

DEFLABEL (label_154)
  ((Wrd22.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_153)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_2]));
  (Wrd35.Obj) = (current_block [OBJECT_60_9]);
  (Wrd42.Obj) = ((Wrd34.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_152;

DEFLABEL (label_151)
  ((Wrd34.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_150)
  (Wrd46.Obj) = (Rsp [0]);
  if ((Wrd46.Obj) == ((SCHEME_OBJECT) 0))
    goto label_136;
  (Wrd48.Obj) = (current_block [OBJECT_60_11]);
  goto label_135;

DEFLABEL (label_136)
  (Wrd48.Obj) = (current_block [OBJECT_60_10]);

DEFLABEL (label_135)
DEFLABEL (label_149)
  (Wrd52.Obj) = (current_block [OBJECT_60_0]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_2]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_148;
  Wrd54 = Wrd58;

DEFLABEL (label_147)
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd98.uLng) == 1))
    goto label_146;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd97.Obj) = (Rsp [0]);
  ((Wrd96.pObj) [1]) = (Wrd97.Obj);

DEFLABEL (label_145)
  (Wrd60.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_3]));
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd68.Obj) = ((Wrd60.pObj) [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd69.uLng) == 50)
    goto label_144;

DEFLABEL (label_143)
  ((Wrd60.pObj) [0]) = (Wrd61.Obj);

DEFLABEL (label_142)
  Rsp = (& (Rsp [1]));
  (Wrd75.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_3]));
  (Wrd78.Obj) = ((Wrd75.pObj) [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if ((Wrd79.uLng) == 50)
    goto label_141;
  Wrd74 = Wrd78;

DEFLABEL (label_140)
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd82.Lng) = ((Wrd81.Lng) + 1L);
  (Wrd80.Obj) = (LONG_TO_FIXNUM (Wrd82.Lng));
  (Wrd83.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_4]));
  (Wrd91.Obj) = ((Wrd83.pObj) [0]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if ((Wrd92.uLng) == 50)
    goto label_139;

DEFLABEL (label_138)
  ((Wrd83.pObj) [0]) = (Wrd80.Obj);

DEFLABEL (label_137)
  (Wrd95.Obj) = (current_block [OBJECT_60_13]);
  (* (--Rsp)) = (Wrd95.Obj);
  goto loop_72;

DEFLABEL (label_139)
  if ((Wrd91.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_138;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_37])), (Wrd83.pObj), (Wrd80.Obj));

DEFLABEL (label_97)
  goto label_137;

DEFLABEL (label_141)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_36])), (Wrd75.pObj));

DEFLABEL (label_96)
  (Wrd74.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_144)
  if ((Wrd68.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_143;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_35])), (Wrd60.pObj), (Wrd61.Obj));

DEFLABEL (label_95)
  goto label_142;

DEFLABEL (label_146)
  (Wrd100.Obj) = (Rsp [0]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_34]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_12]), 2);

DEFLABEL (label_98)
  goto label_145;

DEFLABEL (label_148)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_33])), (Wrd55.pObj));

DEFLABEL (label_94)
  (Wrd54.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_152)
  if ((Wrd42.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_151;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_32])), (Wrd34.pObj), (Wrd35.Obj));

DEFLABEL (label_93)
  goto label_150;

DEFLABEL (label_155)
  if ((Wrd30.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_154;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_31])), (Wrd22.pObj), (Wrd19.Obj));

DEFLABEL (label_92)
  goto label_153;

DEFLABEL (label_157)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_30])), (Wrd13.pObj));

DEFLABEL (label_91)
  (Wrd12.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_29])), (Wrd6.pObj));

DEFLABEL (label_90)
  (Wrd5.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_163)
  if ((Wrd29.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_162;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_40])), (Wrd21.pObj), (Wrd14.Obj));

DEFLABEL (label_101)
  goto label_161;

DEFLABEL (label_165)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_39]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_6]), 1);

DEFLABEL (label_100)
  (Wrd14.Obj) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_38])), (Wrd9.pObj));

DEFLABEL (label_99)
  (Wrd8.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_168)
  (Wrd38.Obj) = (current_block [OBJECT_60_0]);
  (* (--Rsp)) = (Wrd38.Obj);
  goto label_160;

DEFLABEL (label_170)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_28]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_4]), 2);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_27])), (Wrd65.pObj));

DEFLABEL (label_88)
  (Wrd64.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_26]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_25])), (Wrd51.pObj));

DEFLABEL (label_86)
  (Wrd50.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_179)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_22])), (Wrd36.pObj));

DEFLABEL (label_85)
  (Wrd35.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_183)
  if ((Wrd29.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_182;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_21])), (Wrd21.pObj), (Wrd14.Obj));

DEFLABEL (label_84)
  goto label_181;

DEFLABEL (label_185)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_6]), 1);

DEFLABEL (label_83)
  (Wrd14.Obj) = Rvl;
  goto label_184;

DEFLABEL (label_187)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_19])), (Wrd9.pObj));

DEFLABEL (label_82)
  (Wrd8.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_188)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_180;

DEFLABEL (label_190)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_15]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_4]), 2);

DEFLABEL (label_81)
  (* (--Rsp)) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_14])), (Wrd25.pObj));

DEFLABEL (label_80)
  (Wrd24.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_193;

DEFLABEL (label_196)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_12])), (Wrd11.pObj));

DEFLABEL (label_78)
  (Wrd10.Obj) = Rvl;
  goto label_195;

DEFLABEL (label_198)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_60_5);
  goto label_197;

DEFLABEL (label_200)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_6])), (Wrd7.pObj));

DEFLABEL (label_77)
  (Wrd6.Obj) = Rvl;
  goto label_199;

DEFLABEL (loop_131)
DEFLABEL (loop_72)
  INTERRUPT_CHECK (26, LABEL_60_41);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_228;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_228;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_228;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd11.pChr) = (& ((Wrd18.pChr) [(Wrd8.Lng)]));
  (Wrd12.uLng) = ((unsigned long) (((unsigned char *) (Wrd11.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));

DEFLABEL (label_227)
  (Wrd28.Obj) = (current_block [OBJECT_60_1]);
  if ((Wrd28.Obj) == (Wrd5.Obj))
    goto label_213;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd32.Lng) = ((Wrd31.Lng) + 1L);
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));
  (Wrd36.Obj) = (current_block [OBJECT_60_0]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_2]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_212;
  Wrd38 = Wrd42;

DEFLABEL (label_211)
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd82.uLng) == 1))
    goto label_210;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd81.Obj) = (Rsp [0]);
  ((Wrd80.pObj) [1]) = (Wrd81.Obj);

DEFLABEL (label_209)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_3]));
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd52.Obj) = ((Wrd44.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_208;

DEFLABEL (label_207)
  ((Wrd44.pObj) [0]) = (Wrd45.Obj);

DEFLABEL (label_206)
  Rsp = (& (Rsp [1]));
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_3]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_205;
  Wrd58 = Wrd62;

DEFLABEL (label_204)
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd66.Lng) = ((Wrd65.Lng) + 1L);
  (Wrd64.Obj) = (LONG_TO_FIXNUM (Wrd66.Lng));
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_4]));
  (Wrd75.Obj) = ((Wrd67.pObj) [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 50)
    goto label_203;

DEFLABEL (label_202)
  ((Wrd67.pObj) [0]) = (Wrd64.Obj);

DEFLABEL (label_201)
  (Wrd79.Obj) = (current_block [OBJECT_60_1]);
  (* (--Rsp)) = (Wrd79.Obj);
  goto loop_70;

DEFLABEL (label_203)
  if ((Wrd75.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_202;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_52])), (Wrd67.pObj), (Wrd64.Obj));

DEFLABEL (label_106)
  goto label_201;

DEFLABEL (label_205)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_51])), (Wrd59.pObj));

DEFLABEL (label_105)
  (Wrd58.Obj) = Rvl;
  goto label_204;

DEFLABEL (label_208)
  if ((Wrd52.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_207;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_50])), (Wrd44.pObj), (Wrd45.Obj));

DEFLABEL (label_104)
  goto label_206;

DEFLABEL (label_210)
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_49]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_12]), 2);

DEFLABEL (label_107)
  goto label_209;

DEFLABEL (label_212)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_48])), (Wrd39.pObj));

DEFLABEL (label_103)
  (Wrd38.Obj) = Rvl;
  goto label_211;

DEFLABEL (label_213)
  (Wrd89.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd89.Obj))
    goto label_214;
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  (Wrd93.Lng) = ((Wrd92.Lng) - 1L);
  (Wrd90.Obj) = (LONG_TO_FIXNUM (Wrd93.Lng));
  (Rsp [0]) = (Wrd90.Obj);
  goto loop_72;

DEFLABEL (label_214)
  (Wrd98.Obj) = (current_block [OBJECT_60_0]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd98.Obj);
  (Wrd95.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd95.pObj)));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd101.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_2]));
  (Wrd104.Obj) = ((Wrd101.pObj) [0]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd105.uLng) == 50)
    goto label_226;
  Wrd100 = Wrd104;

DEFLABEL (label_225)
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd145.uLng) == 1))
    goto label_224;
  (Wrd143.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd144.Obj) = (Rsp [0]);
  ((Wrd143.pObj) [1]) = (Wrd144.Obj);

DEFLABEL (label_223)
  (Wrd106.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_3]));
  (Wrd107.Obj) = (Rsp [0]);
  (Wrd114.Obj) = ((Wrd106.pObj) [0]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if ((Wrd115.uLng) == 50)
    goto label_222;

DEFLABEL (label_221)
  ((Wrd106.pObj) [0]) = (Wrd107.Obj);

DEFLABEL (label_220)
  Rsp = (& (Rsp [1]));
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_3]));
  (Wrd124.Obj) = ((Wrd121.pObj) [0]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if ((Wrd125.uLng) == 50)
    goto label_219;
  Wrd120 = Wrd124;

DEFLABEL (label_218)
  (Wrd127.Lng) = (FIXNUM_TO_LONG (Wrd120.Obj));
  (Wrd128.Lng) = ((Wrd127.Lng) + 1L);
  (Wrd126.Obj) = (LONG_TO_FIXNUM (Wrd128.Lng));
  (Wrd129.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_4]));
  (Wrd137.Obj) = ((Wrd129.pObj) [0]);
  (Wrd138.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if ((Wrd138.uLng) == 50)
    goto label_217;

DEFLABEL (label_216)
  ((Wrd129.pObj) [0]) = (Wrd126.Obj);

DEFLABEL (label_215)
  Rvl = (current_block [OBJECT_60_15]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_217)
  if ((Wrd137.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_216;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_47])), (Wrd129.pObj), (Wrd126.Obj));

DEFLABEL (label_111)
  goto label_215;

DEFLABEL (label_219)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_46])), (Wrd121.pObj));

DEFLABEL (label_110)
  (Wrd120.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_222)
  if ((Wrd114.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_221;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_45])), (Wrd106.pObj), (Wrd107.Obj));

DEFLABEL (label_109)
  goto label_220;

DEFLABEL (label_224)
  (Wrd147.Obj) = (Rsp [0]);
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_44]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_12]), 2);

DEFLABEL (label_112)
  goto label_223;

DEFLABEL (label_226)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_43])), (Wrd101.pObj));

DEFLABEL (label_108)
  (Wrd100.Obj) = Rvl;
  goto label_225;

DEFLABEL (label_228)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_42]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_4]), 2);

DEFLABEL (label_102)
  (Wrd5.Obj) = Rvl;
  goto label_227;

DEFLABEL (loop_132)
DEFLABEL (loop_36)
  INTERRUPT_CHECK (26, LABEL_60_55);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_255;
  Wrd6 = Wrd10;

DEFLABEL (label_254)
  if ((Wrd6.Obj) == (current_block [OBJECT_60_0]))
    goto label_253;

DEFLABEL (label_252)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_54]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_251;
  Wrd17 = Wrd21;

DEFLABEL (label_250)
  if (! ((Wrd17.Obj) == (current_block [OBJECT_60_0])))
    goto label_230;

DEFLABEL (label_229)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (label_230)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_249;
  Wrd25 = Wrd29;

DEFLABEL (label_248)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_247;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_246)
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_1]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_245;
  Wrd39 = Wrd43;

DEFLABEL (label_244)
  Wrd38 = Wrd39;
  (Wrd45.Obj) = (* (Rsp++));
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd57.uLng) == 30))
    goto label_243;
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_243;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [1]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) (Wrd53.Lng)) < ((unsigned long) (Wrd56.Lng))))
    goto label_243;
  (Wrd47.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  (Wrd49.pChr) = (& ((Wrd54.pChr) [(Wrd47.Lng)]));
  (Wrd50.uLng) = ((unsigned long) (((unsigned char *) (Wrd49.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd51.Obj) = (MAKE_OBJECT (26, (Wrd50.uLng)));
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_242)
  (Wrd65.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd68.Obj) = ((Wrd65.pObj) [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd69.uLng) == 50)
    goto label_241;
  Wrd64 = Wrd68;

DEFLABEL (label_240)
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_239;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd70.Obj) = ((Wrd71.pObj) [1]);

DEFLABEL (label_238)
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_0]));
  (Wrd85.Obj) = ((Wrd77.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd86.uLng) == 50)
    goto label_237;

DEFLABEL (label_236)
  ((Wrd77.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_235)
  (Wrd90.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd90.Obj);

DEFLABEL (label_234)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_65]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd94.Obj) = (current_block [OBJECT_60_8]);
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd95.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd95.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_16]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_60_65);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_231;
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_36;

DEFLABEL (label_231)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_60_74);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_60_73])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_75]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_76]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_77]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_78]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_79]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_80]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_60_79);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_233;
  Wrd5 = Wrd9;

DEFLABEL (label_232)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_88]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_60_78);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_86]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_60_77);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_85]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_60_76);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_84]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_60_75);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_83]));

DEFLABEL (label_233)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_87])), (Wrd6.pObj));

DEFLABEL (label_128)
  (Wrd5.Obj) = Rvl;
  goto label_232;

DEFLABEL (label_237)
  if ((Wrd85.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_236;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_64])), (Wrd77.pObj), (Wrd70.Obj));

DEFLABEL (label_121)
  goto label_235;

DEFLABEL (label_239)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_63]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_6]), 1);

DEFLABEL (label_120)
  (Wrd70.Obj) = Rvl;
  goto label_238;

DEFLABEL (label_241)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_62])), (Wrd65.pObj));

DEFLABEL (label_119)
  (Wrd64.Obj) = Rvl;
  goto label_240;

DEFLABEL (label_243)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_61]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_4]), 2);

DEFLABEL (label_118)
  (* (--Rsp)) = Rvl;
  goto label_242;

DEFLABEL (label_245)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_60])), (Wrd40.pObj));

DEFLABEL (label_117)
  (Wrd39.Obj) = Rvl;
  goto label_244;

DEFLABEL (label_247)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_59]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_116)
  (* (--Rsp)) = Rvl;
  goto label_246;

DEFLABEL (label_249)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_58])), (Wrd26.pObj));

DEFLABEL (label_115)
  (Wrd25.Obj) = Rvl;
  goto label_248;

DEFLABEL (label_251)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_57])), (Wrd18.pObj));

DEFLABEL (label_114)
  (Wrd17.Obj) = Rvl;
  goto label_250;

DEFLABEL (label_253)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_53]))));
  (* (--Rsp)) = (Wrd98.Obj);
  goto label_229;

DEFLABEL (label_255)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_56])), (Wrd7.pObj));

DEFLABEL (label_113)
  (Wrd6.Obj) = Rvl;
  goto label_254;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_60_54);
  (* (--Rsp)) = Rvl;
  goto label_234;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_60_53);
  goto label_252;

DEFLABEL (loop_133)
DEFLABEL (loop_70)
  INTERRUPT_CHECK (26, LABEL_60_66);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_270;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_270;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_270;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd11.pChr) = (& ((Wrd18.pChr) [(Wrd8.Lng)]));
  (Wrd12.uLng) = ((unsigned long) (((unsigned char *) (Wrd11.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));

DEFLABEL (label_269)
  (Wrd31.Obj) = (current_block [OBJECT_60_0]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_2]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_268;
  Wrd33 = Wrd37;

DEFLABEL (label_267)
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd86.uLng) == 1))
    goto label_266;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd85.Obj) = (Rsp [0]);
  ((Wrd84.pObj) [1]) = (Wrd85.Obj);

DEFLABEL (label_265)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_3]));
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd47.Obj) = ((Wrd39.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_264;

DEFLABEL (label_263)
  ((Wrd39.pObj) [0]) = (Wrd40.Obj);

DEFLABEL (label_262)
  Rsp = (& (Rsp [1]));
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_3]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_261;
  Wrd53 = Wrd57;

DEFLABEL (label_260)
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd61.Lng) = ((Wrd60.Lng) + 1L);
  (Wrd59.Obj) = (LONG_TO_FIXNUM (Wrd61.Lng));
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_4]));
  (Wrd70.Obj) = ((Wrd62.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_259;

DEFLABEL (label_258)
  ((Wrd62.pObj) [0]) = (Wrd59.Obj);

DEFLABEL (label_257)
  (Wrd74.Obj) = (Rsp [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd76.Obj) = (Rsp [1]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if ((Wrd75.Lng) < (Wrd77.Lng))
    goto label_256;
  Rvl = (current_block [OBJECT_60_15]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_256)
  (Wrd83.Lng) = ((Wrd75.Lng) + 1L);
  (Wrd80.Obj) = (LONG_TO_FIXNUM (Wrd83.Lng));
  (Rsp [0]) = (Wrd80.Obj);
  goto loop_70;

DEFLABEL (label_259)
  if ((Wrd70.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_258;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_72])), (Wrd62.pObj), (Wrd59.Obj));

DEFLABEL (label_126)
  goto label_257;

DEFLABEL (label_261)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_71])), (Wrd54.pObj));

DEFLABEL (label_125)
  (Wrd53.Obj) = Rvl;
  goto label_260;

DEFLABEL (label_264)
  if ((Wrd47.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_263;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_70])), (Wrd39.pObj), (Wrd40.Obj));

DEFLABEL (label_124)
  goto label_262;

DEFLABEL (label_266)
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_69]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_12]), 2);

DEFLABEL (label_127)
  goto label_265;

DEFLABEL (label_268)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_68])), (Wrd34.pObj));

DEFLABEL (label_123)
  (Wrd33.Obj) = Rvl;
  goto label_267;

DEFLABEL (label_270)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_67]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_4]), 2);

DEFLABEL (label_122)
  (Wrd5.Obj) = Rvl;
  goto label_269;

DEFLABEL (lambda_134)
  CLOSURE_HEADER (LABEL_60_73);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_82]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_60_81);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_16]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_7 7
#define LABEL_61_9 9
#define LABEL_61_6 11
#define LABEL_61_10 13
#define LABEL_61_11 15
#define LABEL_61_12 17
#define LABEL_61_13 19
#define LABEL_61_14 21
#define LABEL_61_15 23
#define LABEL_61_16 25
#define LABEL_61_17 27
#define LABEL_61_18 29
#define LABEL_61_19 31
#define LABEL_61_20 33
#define LABEL_61_21 35
#define LABEL_61_22 37
#define LABEL_61_23 39
#define LABEL_61_25 41
#define LABEL_61_26 43
#define LABEL_61_27 45
#define LABEL_61_28 47
#define LABEL_61_29 49
#define LABEL_61_24 51
#define LABEL_61_32 53
#define LABEL_61_33 55
#define LABEL_61_34 57
#define LABEL_61_35 59
#define LABEL_61_36 61
#define LABEL_61_37 63
#define LABEL_61_38 65
#define ENVIRONMENT_LABEL_61_3 96
#define DEBUGGING_LABEL_61_2 95
#define OBJECT_61_5 94
#define OBJECT_61_4 93
#define OBJECT_61_3 92
#define OBJECT_61_2 91
#define OBJECT_61_1 90
#define OBJECT_61_0 89
#define EXECUTE_CACHE_61_31 67
#define EXECUTE_CACHE_61_30 69
#define EXECUTE_CACHE_61_8 71
#define FREE_REFERENCE_61_6 74
#define FREE_REFERENCE_61_5 75
#define FREE_REFERENCE_61_4 76
#define FREE_REFERENCE_61_3 77
#define FREE_REFERENCE_61_2 78
#define FREE_REFERENCE_61_1 79
#define FREE_REFERENCE_61_0 80
#define FREE_ASSIGNMENT_61_6 82
#define FREE_ASSIGNMENT_61_5 83
#define FREE_ASSIGNMENT_61_4 84
#define FREE_ASSIGNMENT_61_3 85
#define FREE_ASSIGNMENT_61_2 86
#define FREE_ASSIGNMENT_61_1 87
#define FREE_ASSIGNMENT_61_0 88
#define FREE_REFERENCES_LABEL_61_0 66
#define NUMBER_OF_LINKER_SECTIONS_61_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd77;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd167;
  machine_word Wrd164;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd158;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd159;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd186;
  machine_word Wrd183;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd181;
  machine_word Wrd138;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd136;
  machine_word Wrd127;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd105;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd194;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd189;
  machine_word Wrd85;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_61_4);
      goto lambda_18;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_61_7);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_61_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_61_6);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_61_10);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_61_11);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_61_12);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_61_13);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_61_14);
      goto label_40;

    case 10:
      current_block = (Rpc - LABEL_61_15);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_61_16);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_61_17);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_61_18);
      goto label_34;

    case 14:
      current_block = (Rpc - LABEL_61_19);
      goto label_35;

    case 15:
      current_block = (Rpc - LABEL_61_20);
      goto label_39;

    case 16:
      current_block = (Rpc - LABEL_61_21);
      goto label_36;

    case 17:
      current_block = (Rpc - LABEL_61_22);
      goto label_37;

    case 18:
      current_block = (Rpc - LABEL_61_23);
      goto label_38;

    case 19:
      current_block = (Rpc - LABEL_61_25);
      goto label_24;

    case 20:
      current_block = (Rpc - LABEL_61_26);
      goto label_25;

    case 21:
      current_block = (Rpc - LABEL_61_27);
      goto label_26;

    case 22:
      current_block = (Rpc - LABEL_61_28);
      goto label_27;

    case 23:
      current_block = (Rpc - LABEL_61_29);
      goto label_28;

    case 24:
      current_block = (Rpc - LABEL_61_24);
      goto continuation_15;

    case 25:
      current_block = (Rpc - LABEL_61_32);
      goto label_41;

    case 26:
      current_block = (Rpc - LABEL_61_33);
      goto label_42;

    case 27:
      current_block = (Rpc - LABEL_61_34);
      goto label_43;

    case 28:
      current_block = (Rpc - LABEL_61_35);
      goto label_44;

    case 29:
      current_block = (Rpc - LABEL_61_36);
      goto label_45;

    case 30:
      current_block = (Rpc - LABEL_61_37);
      goto label_46;

    case 31:
      current_block = (Rpc - LABEL_61_38);
      goto label_47;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_49)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_116;
  Wrd5 = Wrd9;

DEFLABEL (label_115)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_114;
  Wrd14 = Wrd18;

DEFLABEL (label_113)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_6);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd7.Lng) < (Wrd8.Lng))
    goto label_112;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_61_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_31]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_61_9);

DEFLABEL (label_112)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_111;
  Wrd13 = Wrd17;

DEFLABEL (label_110)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_2]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_109;
  Wrd20 = Wrd24;

DEFLABEL (label_108)
  (Wrd26.Obj) = (* (Rsp++));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if ((Wrd27.Lng) < (Wrd28.Lng))
    goto label_79;

DEFLABEL (label_78)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_24]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_5]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_77;
  Wrd32 = Wrd36;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_2]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_75;
  Wrd38 = Wrd42;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_6]));
  (Wrd48.Obj) = ((Wrd45.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_73;
  Wrd44 = Wrd48;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_3]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_71;
  Wrd50 = Wrd54;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_4]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_69;
  Wrd57 = Wrd61;

DEFLABEL (label_68)
  (Wrd63.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd63.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (* (--Rsp)) = (Wrd66.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_30]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_61_24);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_3]));
  (Wrd6.Obj) = (current_block [OBJECT_61_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_65)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_4]));
  (Wrd18.Obj) = (current_block [OBJECT_61_0]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd17.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_62)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_2]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_61;
  Wrd30 = Wrd34;

DEFLABEL (label_60)
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd38.Lng) = ((Wrd37.Lng) + 1L);
  (Wrd36.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_5]));
  (Wrd47.Obj) = ((Wrd39.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  ((Wrd39.pObj) [0]) = (Wrd36.Obj);

DEFLABEL (label_57)
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_3]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_56;
  Wrd51 = Wrd55;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_4]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_54;
  Wrd58 = Wrd62;

DEFLABEL (label_53)
  (Wrd64.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (Wrd68.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_6]));
  (Wrd76.Obj) = ((Wrd68.pObj) [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if ((Wrd77.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  ((Wrd68.pObj) [0]) = (Wrd65.Obj);

DEFLABEL (label_50)
  Rvl = (current_block [OBJECT_61_5]);
  goto pop_return;

DEFLABEL (label_52)
  if ((Wrd76.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_38])), (Wrd68.pObj), (Wrd65.Obj));

DEFLABEL (label_47)
  goto label_50;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_37])), (Wrd59.pObj));

DEFLABEL (label_46)
  (Wrd58.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_36])), (Wrd52.pObj));

DEFLABEL (label_45)
  (Wrd51.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_59)
  if ((Wrd47.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_58;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_35])), (Wrd39.pObj), (Wrd36.Obj));

DEFLABEL (label_44)
  goto label_57;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_34])), (Wrd31.pObj));

DEFLABEL (label_43)
  (Wrd30.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_64)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_33])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_42)
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_32])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_41)
  goto label_65;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_29])), (Wrd58.pObj));

DEFLABEL (label_28)
  (Wrd57.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_28])), (Wrd51.pObj));

DEFLABEL (label_27)
  (Wrd50.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_27])), (Wrd45.pObj));

DEFLABEL (label_26)
  (Wrd44.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_26])), (Wrd39.pObj));

DEFLABEL (label_25)
  (Wrd38.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_25])), (Wrd33.pObj));

DEFLABEL (label_24)
  (Wrd32.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_0]));
  (Wrd68.Obj) = (current_block [OBJECT_61_0]);
  (Wrd75.Obj) = ((Wrd67.pObj) [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 50)
    goto label_107;

DEFLABEL (label_106)
  ((Wrd67.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_105)
  (Wrd82.Obj) = (current_block [OBJECT_61_1]);
  (Wrd83.Obj) = (current_block [OBJECT_61_2]);
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd83.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_3]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_104;
  Wrd85 = Wrd89;

DEFLABEL (label_103)
  (Wrd189.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd189.uLng) == 1))
    goto label_102;
  (Wrd187.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd188.Obj) = (Rsp [0]);
  ((Wrd187.pObj) [1]) = (Wrd188.Obj);

DEFLABEL (label_101)
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_1]));
  (Wrd92.Obj) = (Rsp [0]);
  (Wrd99.Obj) = ((Wrd91.pObj) [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd100.uLng) == 50)
    goto label_100;

DEFLABEL (label_99)
  ((Wrd91.pObj) [0]) = (Wrd92.Obj);

DEFLABEL (label_98)
  Rsp = (& (Rsp [1]));
  (Wrd106.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_4]));
  (Wrd109.Obj) = ((Wrd106.pObj) [0]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if ((Wrd110.uLng) == 50)
    goto label_97;
  Wrd105 = Wrd109;

DEFLABEL (label_96)
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd105.Obj));
  (Wrd113.Lng) = ((Wrd112.Lng) + 1L);
  (Wrd111.Obj) = (LONG_TO_FIXNUM (Wrd113.Lng));
  (Wrd114.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_2]));
  (Wrd122.Obj) = ((Wrd114.pObj) [0]);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if ((Wrd123.uLng) == 50)
    goto label_95;

DEFLABEL (label_94)
  ((Wrd114.pObj) [0]) = (Wrd111.Obj);

DEFLABEL (label_93)
  (Wrd128.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_2]));
  (Wrd131.Obj) = ((Wrd128.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_92;
  Wrd127 = Wrd131;

DEFLABEL (label_91)
  (Wrd136.Obj) = (current_block [OBJECT_61_2]);
  (* (Rhp++)) = (Wrd127.Obj);
  (* (Rhp++)) = (Wrd136.Obj);
  (Wrd134.pObj) = (& (Rhp [-2]));
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd134.pObj)));
  (* (--Rsp)) = (Wrd135.Obj);
  (Wrd139.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_3]));
  (Wrd142.Obj) = ((Wrd139.pObj) [0]);
  (Wrd143.uLng) = (OBJECT_TYPE (Wrd142.Obj));
  if ((Wrd143.uLng) == 50)
    goto label_90;
  Wrd138 = Wrd142;

DEFLABEL (label_89)
  (Wrd181.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if (! ((Wrd181.uLng) == 1))
    goto label_88;
  (Wrd179.pObj) = (OBJECT_ADDRESS (Wrd138.Obj));
  (Wrd180.Obj) = (Rsp [0]);
  ((Wrd179.pObj) [1]) = (Wrd180.Obj);

DEFLABEL (label_87)
  (Wrd144.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_1]));
  (Wrd145.Obj) = (Rsp [0]);
  (Wrd152.Obj) = ((Wrd144.pObj) [0]);
  (Wrd153.uLng) = (OBJECT_TYPE (Wrd152.Obj));
  if ((Wrd153.uLng) == 50)
    goto label_86;

DEFLABEL (label_85)
  ((Wrd144.pObj) [0]) = (Wrd145.Obj);

DEFLABEL (label_84)
  Rsp = (& (Rsp [1]));
  (Wrd159.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_4]));
  (Wrd162.Obj) = ((Wrd159.pObj) [0]);
  (Wrd163.uLng) = (OBJECT_TYPE (Wrd162.Obj));
  if ((Wrd163.uLng) == 50)
    goto label_83;
  Wrd158 = Wrd162;

DEFLABEL (label_82)
  (Wrd165.Lng) = (FIXNUM_TO_LONG (Wrd158.Obj));
  (Wrd166.Lng) = ((Wrd165.Lng) + 1L);
  (Wrd164.Obj) = (LONG_TO_FIXNUM (Wrd166.Lng));
  (Wrd167.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_2]));
  (Wrd175.Obj) = ((Wrd167.pObj) [0]);
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if ((Wrd176.uLng) == 50)
    goto label_81;

DEFLABEL (label_80)
  ((Wrd167.pObj) [0]) = (Wrd164.Obj);
  goto label_78;

DEFLABEL (label_81)
  if ((Wrd175.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_80;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_23])), (Wrd167.pObj), (Wrd164.Obj));

DEFLABEL (label_38)
  goto label_78;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_22])), (Wrd159.pObj));

DEFLABEL (label_37)
  (Wrd158.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_86)
  if ((Wrd152.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_85;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_21])), (Wrd144.pObj), (Wrd145.Obj));

DEFLABEL (label_36)
  goto label_84;

DEFLABEL (label_88)
  (Wrd183.Obj) = (Rsp [0]);
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_20]))));
  (* (--Rsp)) = (Wrd186.Obj);
  (* (--Rsp)) = (Wrd183.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_3]), 2);

DEFLABEL (label_39)
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_19])), (Wrd139.pObj));

DEFLABEL (label_35)
  (Wrd138.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_18])), (Wrd128.pObj));

DEFLABEL (label_34)
  (Wrd127.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_95)
  if ((Wrd122.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_94;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_17])), (Wrd114.pObj), (Wrd111.Obj));

DEFLABEL (label_33)
  goto label_93;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_16])), (Wrd106.pObj));

DEFLABEL (label_32)
  (Wrd105.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_100)
  if ((Wrd99.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_99;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_15])), (Wrd91.pObj), (Wrd92.Obj));

DEFLABEL (label_31)
  goto label_98;

DEFLABEL (label_102)
  (Wrd191.Obj) = (Rsp [0]);
  (Wrd194.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_14]))));
  (* (--Rsp)) = (Wrd194.Obj);
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_3]), 2);

DEFLABEL (label_40)
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_13])), (Wrd86.pObj));

DEFLABEL (label_30)
  (Wrd85.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_107)
  if ((Wrd75.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_106;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_12])), (Wrd67.pObj), (Wrd68.Obj));

DEFLABEL (label_29)
  goto label_105;

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_11])), (Wrd21.pObj));

DEFLABEL (label_23)
  (Wrd20.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_10])), (Wrd14.pObj));

DEFLABEL (label_22)
  (Wrd13.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_114)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_7])), (Wrd15.pObj));

DEFLABEL (label_21)
  (Wrd14.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_5])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_115;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_5 3
#define LABEL_62_6 5
#define LABEL_62_4 7
#define LABEL_62_7 9
#define LABEL_62_9 11
#define LABEL_62_12 13
#define LABEL_62_13 15
#define LABEL_62_10 17
#define LABEL_62_15 19
#define LABEL_62_16 21
#define LABEL_62_17 23
#define LABEL_62_18 25
#define LABEL_62_19 27
#define LABEL_62_20 29
#define LABEL_62_21 31
#define LABEL_62_22 33
#define LABEL_62_23 35
#define LABEL_62_24 37
#define LABEL_62_25 39
#define LABEL_62_26 41
#define LABEL_62_27 43
#define LABEL_62_28 45
#define LABEL_62_29 47
#define ENVIRONMENT_LABEL_62_3 76
#define DEBUGGING_LABEL_62_2 75
#define OBJECT_62_6 74
#define OBJECT_62_5 73
#define OBJECT_62_4 72
#define OBJECT_62_3 71
#define OBJECT_62_2 70
#define OBJECT_62_1 69
#define OBJECT_62_0 68
#define EXECUTE_CACHE_62_14 49
#define EXECUTE_CACHE_62_11 51
#define EXECUTE_CACHE_62_8 53
#define FREE_REFERENCE_62_4 56
#define FREE_REFERENCE_62_3 57
#define FREE_REFERENCE_62_2 58
#define FREE_REFERENCE_62_1 59
#define FREE_REFERENCE_62_0 60
#define FREE_ASSIGNMENT_62_5 62
#define FREE_ASSIGNMENT_62_4 63
#define FREE_ASSIGNMENT_62_3 64
#define FREE_ASSIGNMENT_62_2 65
#define FREE_ASSIGNMENT_62_1 66
#define FREE_ASSIGNMENT_62_0 67
#define FREE_REFERENCES_LABEL_62_0 48
#define NUMBER_OF_LINKER_SECTIONS_62_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd138;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd166;
  machine_word Wrd163;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd161;
  machine_word Wrd118;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd91;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd174;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd169;
  machine_word Wrd71;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd37;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd41;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_62_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_62_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_62_4);
      goto lambda_15;

    case 3:
      current_block = (Rpc - LABEL_62_7);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_62_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_62_12);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_62_13);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_62_10);
      goto lambda_14;

    case 8:
      current_block = (Rpc - LABEL_62_15);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_62_16);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_62_17);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_62_18);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_62_19);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_62_20);
      goto label_26;

    case 14:
      current_block = (Rpc - LABEL_62_21);
      goto label_35;

    case 15:
      current_block = (Rpc - LABEL_62_22);
      goto label_27;

    case 16:
      current_block = (Rpc - LABEL_62_23);
      goto label_28;

    case 17:
      current_block = (Rpc - LABEL_62_24);
      goto label_29;

    case 18:
      current_block = (Rpc - LABEL_62_25);
      goto label_30;

    case 19:
      current_block = (Rpc - LABEL_62_26);
      goto label_34;

    case 20:
      current_block = (Rpc - LABEL_62_27);
      goto label_31;

    case 21:
      current_block = (Rpc - LABEL_62_28);
      goto label_32;

    case 22:
      current_block = (Rpc - LABEL_62_29);
      goto label_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_37)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_49;
  Wrd6 = Wrd10;

DEFLABEL (label_48)
  if (! ((Wrd6.Obj) == (current_block [OBJECT_62_0])))
    goto label_47;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_62_1]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_62_5);

DEFLABEL (label_47)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_46;
  Wrd13 = Wrd17;

DEFLABEL (label_45)
  if (! ((Wrd13.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_40;

DEFLABEL (label_39)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_11]));

DEFLABEL (label_40)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_44;
  Wrd23 = Wrd27;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_62_2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_42;
  Wrd30 = Wrd34;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_62_6);
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_13])), (Wrd31.pObj));

DEFLABEL (label_20)
  (Wrd30.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_12])), (Wrd24.pObj));

DEFLABEL (label_19)
  (Wrd23.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_9])), (Wrd14.pObj));

DEFLABEL (label_18)
  (Wrd13.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_7])), (Wrd7.pObj));

DEFLABEL (label_17)
  (Wrd6.Obj) = Rvl;
  goto label_48;

DEFLABEL (lambda_38)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_62_10);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_62_0]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_88;

DEFLABEL (label_87)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_86)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_62_1]));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_85;

DEFLABEL (label_84)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_83)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_62_2]));
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  ((Wrd29.pObj) [0]) = (Wrd30.Obj);

DEFLABEL (label_80)
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_3]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_79;
  Wrd42 = Wrd46;

DEFLABEL (label_78)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if ((Wrd49.Lng) < (Wrd50.Lng))
    goto label_51;

DEFLABEL (label_50)
  Rvl = (current_block [OBJECT_62_6]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_62_3]));
  (Wrd54.Obj) = (current_block [OBJECT_62_3]);
  (Wrd61.Obj) = ((Wrd53.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  ((Wrd53.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_75)
  (Wrd68.Obj) = (current_block [OBJECT_62_4]);
  (Wrd69.Obj) = (current_block [OBJECT_62_0]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd72.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_4]));
  (Wrd75.Obj) = ((Wrd72.pObj) [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 50)
    goto label_74;
  Wrd71 = Wrd75;

DEFLABEL (label_73)
  (Wrd169.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd169.uLng) == 1))
    goto label_72;
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd168.Obj) = (Rsp [0]);
  ((Wrd167.pObj) [1]) = (Wrd168.Obj);

DEFLABEL (label_71)
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_62_4]));
  (Wrd78.Obj) = (Rsp [0]);
  (Wrd85.Obj) = ((Wrd77.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd86.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  ((Wrd77.pObj) [0]) = (Wrd78.Obj);

DEFLABEL (label_68)
  Rsp = (& (Rsp [1]));
  (Wrd92.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_2]));
  (Wrd95.Obj) = ((Wrd92.pObj) [0]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd96.uLng) == 50)
    goto label_67;
  Wrd91 = Wrd95;

DEFLABEL (label_66)
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  (Wrd99.Lng) = ((Wrd98.Lng) + 1L);
  (Wrd97.Obj) = (LONG_TO_FIXNUM (Wrd99.Lng));
  (Wrd100.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_62_5]));
  (Wrd108.Obj) = ((Wrd100.pObj) [0]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if ((Wrd109.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  ((Wrd100.pObj) [0]) = (Wrd97.Obj);

DEFLABEL (label_63)
  (Wrd115.Obj) = (Rsp [2]);
  (Wrd116.Obj) = (current_block [OBJECT_62_0]);
  (* (Rhp++)) = (Wrd115.Obj);
  (* (Rhp++)) = (Wrd116.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd119.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_4]));
  (Wrd122.Obj) = ((Wrd119.pObj) [0]);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if ((Wrd123.uLng) == 50)
    goto label_62;
  Wrd118 = Wrd122;

DEFLABEL (label_61)
  (Wrd161.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd161.uLng) == 1))
    goto label_60;
  (Wrd159.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd160.Obj) = (Rsp [0]);
  ((Wrd159.pObj) [1]) = (Wrd160.Obj);

DEFLABEL (label_59)
  (Wrd124.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_62_4]));
  (Wrd125.Obj) = (Rsp [0]);
  (Wrd132.Obj) = ((Wrd124.pObj) [0]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if ((Wrd133.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  ((Wrd124.pObj) [0]) = (Wrd125.Obj);

DEFLABEL (label_56)
  Rsp = (& (Rsp [1]));
  (Wrd139.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_2]));
  (Wrd142.Obj) = ((Wrd139.pObj) [0]);
  (Wrd143.uLng) = (OBJECT_TYPE (Wrd142.Obj));
  if ((Wrd143.uLng) == 50)
    goto label_55;
  Wrd138 = Wrd142;

DEFLABEL (label_54)
  (Wrd145.Lng) = (FIXNUM_TO_LONG (Wrd138.Obj));
  (Wrd146.Lng) = ((Wrd145.Lng) + 1L);
  (Wrd144.Obj) = (LONG_TO_FIXNUM (Wrd146.Lng));
  (Wrd147.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_62_5]));
  (Wrd155.Obj) = ((Wrd147.pObj) [0]);
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd155.Obj));
  if ((Wrd156.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd147.pObj) [0]) = (Wrd144.Obj);
  goto label_50;

DEFLABEL (label_53)
  if ((Wrd155.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_62_29])), (Wrd147.pObj), (Wrd144.Obj));

DEFLABEL (label_33)
  goto label_50;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_28])), (Wrd139.pObj));

DEFLABEL (label_32)
  (Wrd138.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_58)
  if ((Wrd132.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_57;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_62_27])), (Wrd124.pObj), (Wrd125.Obj));

DEFLABEL (label_31)
  goto label_56;

DEFLABEL (label_60)
  (Wrd163.Obj) = (Rsp [0]);
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_26]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_5]), 2);

DEFLABEL (label_34)
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_25])), (Wrd119.pObj));

DEFLABEL (label_30)
  (Wrd118.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_65)
  if ((Wrd108.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_64;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_62_24])), (Wrd100.pObj), (Wrd97.Obj));

DEFLABEL (label_29)
  goto label_63;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_23])), (Wrd92.pObj));

DEFLABEL (label_28)
  (Wrd91.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_70)
  if ((Wrd85.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_69;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_62_22])), (Wrd77.pObj), (Wrd78.Obj));

DEFLABEL (label_27)
  goto label_68;

DEFLABEL (label_72)
  (Wrd171.Obj) = (Rsp [0]);
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_21]))));
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_5]), 2);

DEFLABEL (label_35)
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_20])), (Wrd72.pObj));

DEFLABEL (label_26)
  (Wrd71.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_77)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_76;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_62_19])), (Wrd53.pObj), (Wrd54.Obj));

DEFLABEL (label_25)
  goto label_75;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_18])), (Wrd43.pObj));

DEFLABEL (label_24)
  (Wrd42.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_82)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_62_17])), (Wrd29.pObj), (Wrd30.Obj));

DEFLABEL (label_23)
  goto label_80;

DEFLABEL (label_85)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_84;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_62_16])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_22)
  goto label_83;

DEFLABEL (label_88)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_87;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_62_15])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_21)
  goto label_86;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_6 5
#define LABEL_63_7 7
#define LABEL_63_9 9
#define LABEL_63_5 11
#define LABEL_63_10 13
#define LABEL_63_11 15
#define LABEL_63_12 17
#define LABEL_63_13 19
#define LABEL_63_14 21
#define LABEL_63_15 23
#define LABEL_63_16 25
#define LABEL_63_17 27
#define LABEL_63_18 29
#define LABEL_63_19 31
#define LABEL_63_20 33
#define LABEL_63_21 35
#define LABEL_63_22 37
#define LABEL_63_23 39
#define LABEL_63_24 41
#define LABEL_63_25 43
#define LABEL_63_26 45
#define LABEL_63_27 47
#define LABEL_63_28 49
#define LABEL_63_29 51
#define LABEL_63_30 53
#define LABEL_63_31 55
#define LABEL_63_32 57
#define LABEL_63_33 59
#define LABEL_63_34 61
#define LABEL_63_35 63
#define ENVIRONMENT_LABEL_63_3 89
#define DEBUGGING_LABEL_63_2 88
#define OBJECT_63_6 87
#define OBJECT_63_5 86
#define OBJECT_63_4 85
#define OBJECT_63_3 84
#define OBJECT_63_2 83
#define OBJECT_63_1 82
#define OBJECT_63_0 81
#define EXECUTE_CACHE_63_36 65
#define EXECUTE_CACHE_63_8 67
#define FREE_REFERENCE_63_3 70
#define FREE_REFERENCE_63_2 71
#define FREE_REFERENCE_63_1 72
#define FREE_REFERENCE_63_0 73
#define FREE_ASSIGNMENT_63_5 75
#define FREE_ASSIGNMENT_63_4 76
#define FREE_ASSIGNMENT_63_3 77
#define FREE_ASSIGNMENT_63_2 78
#define FREE_ASSIGNMENT_63_1 79
#define FREE_ASSIGNMENT_63_0 80
#define FREE_REFERENCES_LABEL_63_0 64
#define NUMBER_OF_LINKER_SECTIONS_63_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd239;
  machine_word Wrd236;
  machine_word Wrd238;
  machine_word Wrd235;
  machine_word Wrd229;
  machine_word Wrd234;
  machine_word Wrd233;
  machine_word Wrd230;
  machine_word Wrd222;
  machine_word Wrd227;
  machine_word Wrd226;
  machine_word Wrd223;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd199;
  machine_word Wrd198;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd186;
  machine_word Wrd183;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd177;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd259;
  machine_word Wrd256;
  machine_word Wrd253;
  machine_word Wrd252;
  machine_word Wrd254;
  machine_word Wrd157;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd158;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd139;
  machine_word Wrd136;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd130;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd267;
  machine_word Wrd264;
  machine_word Wrd261;
  machine_word Wrd260;
  machine_word Wrd262;
  machine_word Wrd110;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd83;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd275;
  machine_word Wrd272;
  machine_word Wrd269;
  machine_word Wrd268;
  machine_word Wrd270;
  machine_word Wrd63;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_63_4);
      goto lambda_20;

    case 1:
      current_block = (Rpc - LABEL_63_6);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_63_7);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_63_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_63_10);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_63_11);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_63_12);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_63_13);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_63_14);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_63_15);
      goto label_49;

    case 11:
      current_block = (Rpc - LABEL_63_16);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_63_17);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_63_18);
      goto label_33;

    case 14:
      current_block = (Rpc - LABEL_63_19);
      goto label_34;

    case 15:
      current_block = (Rpc - LABEL_63_20);
      goto label_48;

    case 16:
      current_block = (Rpc - LABEL_63_21);
      goto label_35;

    case 17:
      current_block = (Rpc - LABEL_63_22);
      goto label_36;

    case 18:
      current_block = (Rpc - LABEL_63_23);
      goto label_37;

    case 19:
      current_block = (Rpc - LABEL_63_24);
      goto label_38;

    case 20:
      current_block = (Rpc - LABEL_63_25);
      goto label_47;

    case 21:
      current_block = (Rpc - LABEL_63_26);
      goto label_39;

    case 22:
      current_block = (Rpc - LABEL_63_27);
      goto label_40;

    case 23:
      current_block = (Rpc - LABEL_63_28);
      goto label_41;

    case 24:
      current_block = (Rpc - LABEL_63_29);
      goto label_42;

    case 25:
      current_block = (Rpc - LABEL_63_30);
      goto label_43;

    case 26:
      current_block = (Rpc - LABEL_63_31);
      goto label_44;

    case 27:
      current_block = (Rpc - LABEL_63_32);
      goto label_45;

    case 28:
      current_block = (Rpc - LABEL_63_33);
      goto label_46;

    case 29:
      current_block = (Rpc - LABEL_63_34);
      goto label_25;

    case 30:
      current_block = (Rpc - LABEL_63_35);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_51)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_118;
  Wrd9 = Wrd13;

DEFLABEL (label_117)
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd16.Obj) = (current_block [OBJECT_63_0]);
  (Wrd18.Lng) = ((Wrd15.Lng) + 6L);
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_116;
  Wrd21 = Wrd25;

DEFLABEL (label_115)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_114;
  Wrd5 = Wrd9;

DEFLABEL (label_113)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_108;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_112;
  Wrd15 = Wrd19;

DEFLABEL (label_111)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_63_6]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_2]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_110;
  Wrd22 = Wrd26;

DEFLABEL (label_109)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_36]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_63_9);

DEFLABEL (label_108)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_3]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_107;
  Wrd28 = Wrd32;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_105;
  Wrd35 = Wrd39;

DEFLABEL (label_104)
  (Wrd41.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_63_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_103;

DEFLABEL (label_102)
  ((Wrd45.pObj) [0]) = (Wrd42.Obj);

DEFLABEL (label_101)
  (Wrd60.Obj) = (current_block [OBJECT_63_1]);
  (Wrd61.Obj) = (current_block [OBJECT_63_2]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd64.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_3]));
  (Wrd67.Obj) = ((Wrd64.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_100;
  Wrd63 = Wrd67;

DEFLABEL (label_99)
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd270.uLng) == 1))
    goto label_98;
  (Wrd268.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd269.Obj) = (Rsp [0]);
  ((Wrd268.pObj) [1]) = (Wrd269.Obj);

DEFLABEL (label_97)
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_63_1]));
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd77.Obj) = ((Wrd69.pObj) [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd78.uLng) == 50)
    goto label_96;

DEFLABEL (label_95)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_94)
  Rsp = (& (Rsp [1]));
  (Wrd84.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd87.Obj) = ((Wrd84.pObj) [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd88.uLng) == 50)
    goto label_93;
  Wrd83 = Wrd87;

DEFLABEL (label_92)
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  (Wrd91.Lng) = ((Wrd90.Lng) + 1L);
  (Wrd89.Obj) = (LONG_TO_FIXNUM (Wrd91.Lng));
  (Wrd92.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_63_2]));
  (Wrd100.Obj) = ((Wrd92.pObj) [0]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if ((Wrd101.uLng) == 50)
    goto label_91;

DEFLABEL (label_90)
  ((Wrd92.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_89)
  (Wrd107.Obj) = (current_block [OBJECT_63_1]);
  (Wrd108.Obj) = (current_block [OBJECT_63_2]);
  (* (Rhp++)) = (Wrd107.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd105.pObj) = (& (Rhp [-2]));
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd105.pObj)));
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd111.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_3]));
  (Wrd114.Obj) = ((Wrd111.pObj) [0]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if ((Wrd115.uLng) == 50)
    goto label_88;
  Wrd110 = Wrd114;

DEFLABEL (label_87)
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd262.uLng) == 1))
    goto label_86;
  (Wrd260.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd261.Obj) = (Rsp [0]);
  ((Wrd260.pObj) [1]) = (Wrd261.Obj);

DEFLABEL (label_85)
  (Wrd116.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_63_1]));
  (Wrd117.Obj) = (Rsp [0]);
  (Wrd124.Obj) = ((Wrd116.pObj) [0]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if ((Wrd125.uLng) == 50)
    goto label_84;

DEFLABEL (label_83)
  ((Wrd116.pObj) [0]) = (Wrd117.Obj);

DEFLABEL (label_82)
  Rsp = (& (Rsp [1]));
  (Wrd131.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd134.Obj) = ((Wrd131.pObj) [0]);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if ((Wrd135.uLng) == 50)
    goto label_81;
  Wrd130 = Wrd134;

DEFLABEL (label_80)
  (Wrd137.Lng) = (FIXNUM_TO_LONG (Wrd130.Obj));
  (Wrd138.Lng) = ((Wrd137.Lng) + 1L);
  (Wrd136.Obj) = (LONG_TO_FIXNUM (Wrd138.Lng));
  (Wrd139.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_63_2]));
  (Wrd147.Obj) = ((Wrd139.pObj) [0]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if ((Wrd148.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  ((Wrd139.pObj) [0]) = (Wrd136.Obj);

DEFLABEL (label_77)
  (Wrd154.Obj) = (current_block [OBJECT_63_1]);
  (Wrd155.Obj) = (current_block [OBJECT_63_2]);
  (* (Rhp++)) = (Wrd154.Obj);
  (* (Rhp++)) = (Wrd155.Obj);
  (Wrd152.pObj) = (& (Rhp [-2]));
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd152.pObj)));
  (* (--Rsp)) = (Wrd153.Obj);
  (Wrd158.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_3]));
  (Wrd161.Obj) = ((Wrd158.pObj) [0]);
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if ((Wrd162.uLng) == 50)
    goto label_76;
  Wrd157 = Wrd161;

DEFLABEL (label_75)
  (Wrd254.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if (! ((Wrd254.uLng) == 1))
    goto label_74;
  (Wrd252.pObj) = (OBJECT_ADDRESS (Wrd157.Obj));
  (Wrd253.Obj) = (Rsp [0]);
  ((Wrd252.pObj) [1]) = (Wrd253.Obj);

DEFLABEL (label_73)
  (Wrd163.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_63_1]));
  (Wrd164.Obj) = (Rsp [0]);
  (Wrd171.Obj) = ((Wrd163.pObj) [0]);
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd171.Obj));
  if ((Wrd172.uLng) == 50)
    goto label_72;

DEFLABEL (label_71)
  ((Wrd163.pObj) [0]) = (Wrd164.Obj);

DEFLABEL (label_70)
  Rsp = (& (Rsp [1]));
  (Wrd178.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd181.Obj) = ((Wrd178.pObj) [0]);
  (Wrd182.uLng) = (OBJECT_TYPE (Wrd181.Obj));
  if ((Wrd182.uLng) == 50)
    goto label_69;
  Wrd177 = Wrd181;

DEFLABEL (label_68)
  (Wrd184.Lng) = (FIXNUM_TO_LONG (Wrd177.Obj));
  (Wrd185.Lng) = ((Wrd184.Lng) + 1L);
  (Wrd183.Obj) = (LONG_TO_FIXNUM (Wrd185.Lng));
  (Wrd186.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_63_2]));
  (Wrd194.Obj) = ((Wrd186.pObj) [0]);
  (Wrd195.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if ((Wrd195.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd186.pObj) [0]) = (Wrd183.Obj);

DEFLABEL (label_65)
  (Wrd198.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_63_3]));
  (Wrd199.Obj) = (current_block [OBJECT_63_4]);
  (Wrd206.Obj) = ((Wrd198.pObj) [0]);
  (Wrd207.uLng) = (OBJECT_TYPE (Wrd206.Obj));
  if ((Wrd207.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd198.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_62)
  (Wrd210.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_63_4]));
  (Wrd211.Obj) = (current_block [OBJECT_63_4]);
  (Wrd218.Obj) = ((Wrd210.pObj) [0]);
  (Wrd219.uLng) = (OBJECT_TYPE (Wrd218.Obj));
  if ((Wrd219.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  ((Wrd210.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_59)
  (Wrd223.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_3]));
  (Wrd226.Obj) = ((Wrd223.pObj) [0]);
  (Wrd227.uLng) = (OBJECT_TYPE (Wrd226.Obj));
  if ((Wrd227.uLng) == 50)
    goto label_58;
  Wrd222 = Wrd226;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd222.Obj);
  (Wrd230.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd233.Obj) = ((Wrd230.pObj) [0]);
  (Wrd234.uLng) = (OBJECT_TYPE (Wrd233.Obj));
  if ((Wrd234.uLng) == 50)
    goto label_56;
  Wrd229 = Wrd233;

DEFLABEL (label_55)
  (Wrd235.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd229.Obj);
  (* (Rhp++)) = (Wrd235.Obj);
  (Wrd238.pObj) = (& (Rhp [-2]));
  (Wrd236.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd238.pObj)));
  (Wrd239.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_63_5]));
  (Wrd247.Obj) = ((Wrd239.pObj) [0]);
  (Wrd248.uLng) = (OBJECT_TYPE (Wrd247.Obj));
  if ((Wrd248.uLng) == 50)
    goto label_54;

DEFLABEL (label_53)
  ((Wrd239.pObj) [0]) = (Wrd236.Obj);

DEFLABEL (label_52)
  Rvl = (current_block [OBJECT_63_5]);
  goto pop_return;

DEFLABEL (label_54)
  if ((Wrd247.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_53;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_63_33])), (Wrd239.pObj), (Wrd236.Obj));

DEFLABEL (label_46)
  goto label_52;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_32])), (Wrd230.pObj));

DEFLABEL (label_45)
  (Wrd229.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_31])), (Wrd223.pObj));

DEFLABEL (label_44)
  (Wrd222.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_61)
  if ((Wrd218.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_60;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_63_30])), (Wrd210.pObj), (Wrd211.Obj));

DEFLABEL (label_43)
  goto label_59;

DEFLABEL (label_64)
  if ((Wrd206.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_63_29])), (Wrd198.pObj), (Wrd199.Obj));

DEFLABEL (label_42)
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd194.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_63_28])), (Wrd186.pObj), (Wrd183.Obj));

DEFLABEL (label_41)
  goto label_65;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_27])), (Wrd178.pObj));

DEFLABEL (label_40)
  (Wrd177.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_72)
  if ((Wrd171.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_71;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_63_26])), (Wrd163.pObj), (Wrd164.Obj));

DEFLABEL (label_39)
  goto label_70;

DEFLABEL (label_74)
  (Wrd256.Obj) = (Rsp [0]);
  (Wrd259.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_25]))));
  (* (--Rsp)) = (Wrd259.Obj);
  (* (--Rsp)) = (Wrd256.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_3]), 2);

DEFLABEL (label_47)
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_24])), (Wrd158.pObj));

DEFLABEL (label_38)
  (Wrd157.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_79)
  if ((Wrd147.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_78;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_63_23])), (Wrd139.pObj), (Wrd136.Obj));

DEFLABEL (label_37)
  goto label_77;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_22])), (Wrd131.pObj));

DEFLABEL (label_36)
  (Wrd130.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_84)
  if ((Wrd124.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_83;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_63_21])), (Wrd116.pObj), (Wrd117.Obj));

DEFLABEL (label_35)
  goto label_82;

DEFLABEL (label_86)
  (Wrd264.Obj) = (Rsp [0]);
  (Wrd267.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_20]))));
  (* (--Rsp)) = (Wrd267.Obj);
  (* (--Rsp)) = (Wrd264.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_3]), 2);

DEFLABEL (label_48)
  goto label_85;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_19])), (Wrd111.pObj));

DEFLABEL (label_34)
  (Wrd110.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_91)
  if ((Wrd100.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_90;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_63_18])), (Wrd92.pObj), (Wrd89.Obj));

DEFLABEL (label_33)
  goto label_89;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_17])), (Wrd84.pObj));

DEFLABEL (label_32)
  (Wrd83.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_96)
  if ((Wrd77.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_95;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_63_16])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_31)
  goto label_94;

DEFLABEL (label_98)
  (Wrd272.Obj) = (Rsp [0]);
  (Wrd275.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_15]))));
  (* (--Rsp)) = (Wrd275.Obj);
  (* (--Rsp)) = (Wrd272.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_3]), 2);

DEFLABEL (label_49)
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_14])), (Wrd64.pObj));

DEFLABEL (label_30)
  (Wrd63.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_103)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_102;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_63_13])), (Wrd45.pObj), (Wrd42.Obj));

DEFLABEL (label_29)
  goto label_101;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_12])), (Wrd36.pObj));

DEFLABEL (label_28)
  (Wrd35.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_11])), (Wrd29.pObj));

DEFLABEL (label_27)
  (Wrd28.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_35])), (Wrd23.pObj));

DEFLABEL (label_26)
  (Wrd22.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_34])), (Wrd16.pObj));

DEFLABEL (label_25)
  (Wrd15.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_10])), (Wrd6.pObj));

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_7])), (Wrd22.pObj));

DEFLABEL (label_23)
  (Wrd21.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_6])), (Wrd10.pObj));

DEFLABEL (label_22)
  (Wrd9.Obj) = Rvl;
  goto label_117;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_7 7
#define TAG_64_8 2
#define LABEL_64_10 9
#define LABEL_64_12 11
#define LABEL_64_11 13
#define LABEL_64_15 15
#define LABEL_64_17 17
#define LABEL_64_19 19
#define LABEL_64_20 21
#define LABEL_64_21 23
#define LABEL_64_22 25
#define LABEL_64_23 27
#define LABEL_64_24 29
#define LABEL_64_25 31
#define LABEL_64_26 33
#define LABEL_64_27 35
#define LABEL_64_28 37
#define LABEL_64_29 39
#define LABEL_64_30 41
#define LABEL_64_31 43
#define LABEL_64_32 45
#define LABEL_64_16 47
#define LABEL_64_33 49
#define LABEL_64_34 51
#define LABEL_64_35 53
#define ENVIRONMENT_LABEL_64_3 84
#define DEBUGGING_LABEL_64_2 83
#define OBJECT_64_7 82
#define OBJECT_64_6 81
#define OBJECT_64_5 80
#define OBJECT_64_4 79
#define OBJECT_64_3 78
#define OBJECT_64_2 77
#define OBJECT_64_1 76
#define OBJECT_64_0 75
#define EXECUTE_CACHE_64_18 55
#define EXECUTE_CACHE_64_14 57
#define EXECUTE_CACHE_64_13 59
#define EXECUTE_CACHE_64_9 61
#define EXECUTE_CACHE_64_6 63
#define FREE_REFERENCE_64_3 66
#define FREE_REFERENCE_64_2 67
#define FREE_REFERENCE_64_1 68
#define FREE_REFERENCE_64_0 69
#define FREE_ASSIGNMENT_64_3 71
#define FREE_ASSIGNMENT_64_2 72
#define FREE_ASSIGNMENT_64_1 73
#define FREE_ASSIGNMENT_64_0 74
#define FREE_REFERENCES_LABEL_64_0 54
#define NUMBER_OF_LINKER_SECTIONS_64_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd125;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd150;
  machine_word Wrd105;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd76;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd163;
  machine_word Wrd160;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd158;
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd168;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd166;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_64_4);
      goto define_digit_char_27;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_64_7);
      goto lambda_51;

    case 3:
      current_block = (Rpc - LABEL_64_10);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_64_12);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_64_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_64_15);
      goto search_stack_22;

    case 7:
      current_block = (Rpc - LABEL_64_17);
      goto label_45;

    case 8:
      current_block = (Rpc - LABEL_64_19);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_64_20);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_64_21);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_64_22);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_64_23);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_64_24);
      goto label_44;

    case 14:
      current_block = (Rpc - LABEL_64_25);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_64_26);
      goto label_37;

    case 16:
      current_block = (Rpc - LABEL_64_27);
      goto label_38;

    case 17:
      current_block = (Rpc - LABEL_64_28);
      goto label_39;

    case 18:
      current_block = (Rpc - LABEL_64_29);
      goto label_43;

    case 19:
      current_block = (Rpc - LABEL_64_30);
      goto label_40;

    case 20:
      current_block = (Rpc - LABEL_64_31);
      goto label_41;

    case 21:
      current_block = (Rpc - LABEL_64_32);
      goto label_42;

    case 22:
      current_block = (Rpc - LABEL_64_16);
      goto continuation_5;

    case 23:
      current_block = (Rpc - LABEL_64_33);
      goto label_46;

    case 24:
      current_block = (Rpc - LABEL_64_34);
      goto label_47;

    case 25:
      current_block = (Rpc - LABEL_64_35);
      goto label_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_digit_char_50)
DEFLABEL (define_digit_char_27)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_64_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_64_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_9]));

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_64_7);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_57;
  Wrd6 = Wrd10;

DEFLABEL (label_56)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd15.Lng) < (Wrd16.Lng))
    goto label_53;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_14]));

DEFLABEL (label_53)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_55;
  Wrd21 = Wrd25;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_64_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_64_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto search_stack_22;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_12])), (Wrd22.pObj));

DEFLABEL (label_30)
  (Wrd21.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_10])), (Wrd7.pObj));

DEFLABEL (label_29)
  (Wrd6.Obj) = Rvl;
  goto label_56;

DEFLABEL (search_stack_52)
DEFLABEL (search_stack_22)
  INTERRUPT_CHECK (26, LABEL_64_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_92;
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_91;
  Wrd9 = Wrd13;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_3]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_89;
  Wrd16 = Wrd20;

DEFLABEL (label_88)
  (Wrd22.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_64_0]));
  (Wrd34.Obj) = ((Wrd26.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_87;

DEFLABEL (label_86)
  ((Wrd26.pObj) [0]) = (Wrd23.Obj);

DEFLABEL (label_85)
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_64_1]));
  (Wrd39.Obj) = (current_block [OBJECT_64_1]);
  (Wrd46.Obj) = ((Wrd38.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_84;

DEFLABEL (label_83)
  ((Wrd38.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_82)
  (Wrd53.Obj) = (current_block [OBJECT_64_2]);
  (Wrd54.Obj) = (current_block [OBJECT_64_3]);
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd57.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_2]));
  (Wrd60.Obj) = ((Wrd57.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_81;
  Wrd56 = Wrd60;

DEFLABEL (label_80)
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd158.uLng) == 1))
    goto label_79;
  (Wrd156.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd157.Obj) = (Rsp [0]);
  ((Wrd156.pObj) [1]) = (Wrd157.Obj);

DEFLABEL (label_78)
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_64_2]));
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd70.Obj) = ((Wrd62.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  ((Wrd62.pObj) [0]) = (Wrd63.Obj);

DEFLABEL (label_75)
  Rsp = (& (Rsp [1]));
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_3]));
  (Wrd80.Obj) = ((Wrd77.pObj) [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd81.uLng) == 50)
    goto label_74;
  Wrd76 = Wrd80;

DEFLABEL (label_73)
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  (Wrd84.Lng) = ((Wrd83.Lng) + 1L);
  (Wrd82.Obj) = (LONG_TO_FIXNUM (Wrd84.Lng));
  (Wrd85.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_64_3]));
  (Wrd93.Obj) = ((Wrd85.pObj) [0]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if ((Wrd94.uLng) == 50)
    goto label_72;

DEFLABEL (label_71)
  ((Wrd85.pObj) [0]) = (Wrd82.Obj);

DEFLABEL (label_70)
  (Wrd100.Obj) = (Rsp [2]);
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [2]);
  (Wrd103.Obj) = (current_block [OBJECT_64_3]);
  (* (Rhp++)) = (Wrd102.Obj);
  (* (Rhp++)) = (Wrd103.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd106.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_2]));
  (Wrd109.Obj) = ((Wrd106.pObj) [0]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if ((Wrd110.uLng) == 50)
    goto label_69;
  Wrd105 = Wrd109;

DEFLABEL (label_68)
  (Wrd150.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd150.uLng) == 1))
    goto label_67;
  (Wrd148.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd149.Obj) = (Rsp [0]);
  ((Wrd148.pObj) [1]) = (Wrd149.Obj);

DEFLABEL (label_66)
  (Wrd111.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_64_2]));
  (Wrd112.Obj) = (Rsp [0]);
  (Wrd119.Obj) = ((Wrd111.pObj) [0]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if ((Wrd120.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  ((Wrd111.pObj) [0]) = (Wrd112.Obj);

DEFLABEL (label_63)
  Rsp = (& (Rsp [1]));
  (Wrd126.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_3]));
  (Wrd129.Obj) = ((Wrd126.pObj) [0]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if ((Wrd130.uLng) == 50)
    goto label_62;
  Wrd125 = Wrd129;

DEFLABEL (label_61)
  (Wrd132.Lng) = (FIXNUM_TO_LONG (Wrd125.Obj));
  (Wrd133.Lng) = ((Wrd132.Lng) + 1L);
  (Wrd131.Obj) = (LONG_TO_FIXNUM (Wrd133.Lng));
  (Wrd134.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_64_3]));
  (Wrd142.Obj) = ((Wrd134.pObj) [0]);
  (Wrd143.uLng) = (OBJECT_TYPE (Wrd142.Obj));
  if ((Wrd143.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd134.pObj) [0]) = (Wrd131.Obj);

DEFLABEL (label_58)
  Rvl = (current_block [OBJECT_64_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_60)
  if ((Wrd142.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_64_32])), (Wrd134.pObj), (Wrd131.Obj));

DEFLABEL (label_42)
  goto label_58;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_31])), (Wrd126.pObj));

DEFLABEL (label_41)
  (Wrd125.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_65)
  if ((Wrd119.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_64;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_64_30])), (Wrd111.pObj), (Wrd112.Obj));

DEFLABEL (label_40)
  goto label_63;

DEFLABEL (label_67)
  (Wrd152.Obj) = (Rsp [0]);
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_29]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_4]), 2);

DEFLABEL (label_43)
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_28])), (Wrd106.pObj));

DEFLABEL (label_39)
  (Wrd105.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_72)
  if ((Wrd93.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_71;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_64_27])), (Wrd85.pObj), (Wrd82.Obj));

DEFLABEL (label_38)
  goto label_70;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_26])), (Wrd77.pObj));

DEFLABEL (label_37)
  (Wrd76.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_77)
  if ((Wrd70.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_76;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_64_25])), (Wrd62.pObj), (Wrd63.Obj));

DEFLABEL (label_36)
  goto label_75;

DEFLABEL (label_79)
  (Wrd160.Obj) = (Rsp [0]);
  (Wrd163.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_24]))));
  (* (--Rsp)) = (Wrd163.Obj);
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_4]), 2);

DEFLABEL (label_44)
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_23])), (Wrd57.pObj));

DEFLABEL (label_35)
  (Wrd56.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_84)
  if ((Wrd46.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_83;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_64_22])), (Wrd38.pObj), (Wrd39.Obj));

DEFLABEL (label_34)
  goto label_82;

DEFLABEL (label_87)
  if ((Wrd34.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_86;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_64_21])), (Wrd26.pObj), (Wrd23.Obj));

DEFLABEL (label_33)
  goto label_85;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_20])), (Wrd17.pObj));

DEFLABEL (label_32)
  (Wrd16.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_19])), (Wrd10.pObj));

DEFLABEL (label_31)
  (Wrd9.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_92)
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_16]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd169.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_1]));
  (Wrd172.Obj) = ((Wrd169.pObj) [0]);
  (Wrd173.uLng) = (OBJECT_TYPE (Wrd172.Obj));
  if ((Wrd173.uLng) == 50)
    goto label_101;
  Wrd168 = Wrd172;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd168.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_64_16);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_99;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_98)
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_97;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_96)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_95;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_94)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  if ((Wrd20.Obj) == (Wrd29.Obj))
    goto label_93;
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd32.Lng) + 1L);
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));
  (Rsp [0]) = (Wrd30.Obj);
  goto search_stack_22;

DEFLABEL (label_93)
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_14]));

DEFLABEL (label_95)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_35]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_7]), 1);

DEFLABEL (label_48)
  (Wrd20.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_34]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_6]), 1);

DEFLABEL (label_47)
  (Wrd13.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_33]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_6]), 1);

DEFLABEL (label_46)
  (Wrd6.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_17])), (Wrd169.pObj));

DEFLABEL (label_45)
  (Wrd168.Obj) = Rvl;
  goto label_100;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_6 7
#define LABEL_65_7 9
#define LABEL_65_8 11
#define LABEL_65_10 13
#define LABEL_65_12 15
#define LABEL_65_14 17
#define LABEL_65_16 19
#define LABEL_65_17 21
#define LABEL_65_18 23
#define LABEL_65_15 25
#define LABEL_65_19 27
#define LABEL_65_20 29
#define LABEL_65_25 31
#define LABEL_65_26 33
#define LABEL_65_27 35
#define LABEL_65_28 37
#define LABEL_65_29 39
#define LABEL_65_32 41
#define LABEL_65_33 43
#define LABEL_65_31 45
#define LABEL_65_35 47
#define LABEL_65_36 49
#define LABEL_65_37 51
#define LABEL_65_30 53
#define LABEL_65_39 55
#define LABEL_65_40 57
#define LABEL_65_41 59
#define LABEL_65_42 61
#define LABEL_65_45 63
#define LABEL_65_24 65
#define LABEL_65_46 67
#define LABEL_65_47 69
#define LABEL_65_48 71
#define LABEL_65_49 73
#define LABEL_65_50 75
#define LABEL_65_51 77
#define LABEL_65_52 79
#define LABEL_65_54 81
#define LABEL_65_55 83
#define LABEL_65_56 85
#define LABEL_65_23 87
#define LABEL_65_57 89
#define LABEL_65_58 91
#define LABEL_65_59 93
#define LABEL_65_60 95
#define LABEL_65_22 97
#define LABEL_65_64 99
#define LABEL_65_67 101
#define LABEL_65_34 103
#define LABEL_65_38 105
#define LABEL_65_43 107
#define LABEL_65_70 109
#define LABEL_65_44 111
#define LABEL_65_72 113
#define LABEL_65_73 115
#define LABEL_65_53 117
#define LABEL_65_61 119
#define LABEL_65_62 121
#define LABEL_65_65 123
#define LABEL_65_66 125
#define LABEL_65_68 127
#define LABEL_65_80 129
#define LABEL_65_69 131
#define LABEL_65_81 133
#define LABEL_65_71 135
#define LABEL_65_82 137
#define LABEL_65_74 139
#define LABEL_65_77 141
#define LABEL_65_78 143
#define LABEL_65_79 145
#define ENVIRONMENT_LABEL_65_3 198
#define DEBUGGING_LABEL_65_2 197
#define OBJECT_65_33 196
#define OBJECT_65_32 195
#define OBJECT_65_31 194
#define OBJECT_65_30 193
#define OBJECT_65_29 192
#define OBJECT_65_28 191
#define OBJECT_65_27 190
#define OBJECT_65_26 189
#define OBJECT_65_25 188
#define OBJECT_65_24 187
#define OBJECT_65_23 186
#define OBJECT_65_22 185
#define OBJECT_65_21 184
#define OBJECT_65_20 183
#define OBJECT_65_19 182
#define OBJECT_65_18 181
#define OBJECT_65_17 180
#define OBJECT_65_16 179
#define OBJECT_65_15 178
#define OBJECT_65_14 177
#define OBJECT_65_13 176
#define OBJECT_65_12 175
#define OBJECT_65_11 174
#define OBJECT_65_10 173
#define OBJECT_65_9 172
#define OBJECT_65_8 171
#define OBJECT_65_7 170
#define OBJECT_65_6 169
#define OBJECT_65_5 168
#define OBJECT_65_4 167
#define OBJECT_65_3 166
#define OBJECT_65_2 165
#define OBJECT_65_1 164
#define OBJECT_65_0 163
#define EXECUTE_CACHE_65_76 147
#define EXECUTE_CACHE_65_75 149
#define EXECUTE_CACHE_65_63 151
#define EXECUTE_CACHE_65_21 153
#define EXECUTE_CACHE_65_13 155
#define EXECUTE_CACHE_65_11 157
#define EXECUTE_CACHE_65_9 159
#define FREE_REFERENCE_65_0 162
#define FREE_REFERENCES_LABEL_65_0 146
#define NUMBER_OF_LINKER_SECTIONS_65_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgxcmp_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd134;
  machine_word Wrd130;
  machine_word Wrd142;
  machine_word Wrd138;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd148;
  machine_word Wrd145;
  machine_word Wrd113;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd91;
  machine_word Wrd80;
  machine_word Wrd66;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd40;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd114;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd90;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd82;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd76;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd51;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_65_4);
      goto re_disassemble_pattern_97;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto label_99;

    case 2:
      current_block = (Rpc - LABEL_65_6);
      goto label_100;

    case 3:
      current_block = (Rpc - LABEL_65_7);
      goto loop_93;

    case 4:
      current_block = (Rpc - LABEL_65_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_65_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_65_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_65_14);
      goto label_101;

    case 8:
      current_block = (Rpc - LABEL_65_16);
      goto label_102;

    case 9:
      current_block = (Rpc - LABEL_65_17);
      goto label_103;

    case 10:
      current_block = (Rpc - LABEL_65_18);
      goto label_104;

    case 11:
      current_block = (Rpc - LABEL_65_15);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_65_19);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_65_20);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_65_25);
      goto label_105;

    case 15:
      current_block = (Rpc - LABEL_65_26);
      goto label_106;

    case 16:
      current_block = (Rpc - LABEL_65_27);
      goto label_107;

    case 17:
      current_block = (Rpc - LABEL_65_28);
      goto label_108;

    case 18:
      current_block = (Rpc - LABEL_65_29);
      goto label_109;

    case 19:
      current_block = (Rpc - LABEL_65_32);
      goto continuation_90;

    case 20:
      current_block = (Rpc - LABEL_65_33);
      goto label_110;

    case 21:
      current_block = (Rpc - LABEL_65_31);
      goto continuation_27;

    case 22:
      current_block = (Rpc - LABEL_65_35);
      goto label_111;

    case 23:
      current_block = (Rpc - LABEL_65_36);
      goto label_112;

    case 24:
      current_block = (Rpc - LABEL_65_37);
      goto label_113;

    case 25:
      current_block = (Rpc - LABEL_65_30);
      goto continuation_34;

    case 26:
      current_block = (Rpc - LABEL_65_39);
      goto label_114;

    case 27:
      current_block = (Rpc - LABEL_65_40);
      goto label_115;

    case 28:
      current_block = (Rpc - LABEL_65_41);
      goto spit_56;

    case 29:
      current_block = (Rpc - LABEL_65_42);
      goto label_116;

    case 30:
      current_block = (Rpc - LABEL_65_45);
      goto continuation_68;

    case 31:
      current_block = (Rpc - LABEL_65_24);
      goto continuation_59;

    case 32:
      current_block = (Rpc - LABEL_65_46);
      goto label_117;

    case 33:
      current_block = (Rpc - LABEL_65_47);
      goto label_118;

    case 34:
      current_block = (Rpc - LABEL_65_48);
      goto label_119;

    case 35:
      current_block = (Rpc - LABEL_65_49);
      goto label_120;

    case 36:
      current_block = (Rpc - LABEL_65_50);
      goto label_121;

    case 37:
      current_block = (Rpc - LABEL_65_51);
      goto label_122;

    case 38:
      current_block = (Rpc - LABEL_65_52);
      goto label_123;

    case 39:
      current_block = (Rpc - LABEL_65_54);
      goto label_126;

    case 40:
      current_block = (Rpc - LABEL_65_55);
      goto label_124;

    case 41:
      current_block = (Rpc - LABEL_65_56);
      goto label_125;

    case 42:
      current_block = (Rpc - LABEL_65_23);
      goto continuation_73;

    case 43:
      current_block = (Rpc - LABEL_65_57);
      goto label_127;

    case 44:
      current_block = (Rpc - LABEL_65_58);
      goto label_128;

    case 45:
      current_block = (Rpc - LABEL_65_59);
      goto label_129;

    case 46:
      current_block = (Rpc - LABEL_65_60);
      goto label_130;

    case 47:
      current_block = (Rpc - LABEL_65_22);
      goto continuation_83;

    case 48:
      current_block = (Rpc - LABEL_65_64);
      goto label_131;

    case 49:
      current_block = (Rpc - LABEL_65_67);
      goto label_132;

    case 50:
      current_block = (Rpc - LABEL_65_34);
      goto continuation_31;

    case 51:
      current_block = (Rpc - LABEL_65_38);
      goto continuation_37;

    case 52:
      current_block = (Rpc - LABEL_65_43);
      goto continuation_47;

    case 53:
      current_block = (Rpc - LABEL_65_70);
      goto continuation_52;

    case 54:
      current_block = (Rpc - LABEL_65_44);
      goto continuation_48;

    case 55:
      current_block = (Rpc - LABEL_65_72);
      goto label_133;

    case 56:
      current_block = (Rpc - LABEL_65_73);
      goto label_134;

    case 57:
      current_block = (Rpc - LABEL_65_53);
      goto continuation_70;

    case 58:
      current_block = (Rpc - LABEL_65_61);
      goto continuation_79;

    case 59:
      current_block = (Rpc - LABEL_65_62);
      goto continuation_78;

    case 60:
      current_block = (Rpc - LABEL_65_65);
      goto continuation_87;

    case 61:
      current_block = (Rpc - LABEL_65_66);
      goto continuation_86;

    case 62:
      current_block = (Rpc - LABEL_65_68);
      goto continuation_32;

    case 63:
      current_block = (Rpc - LABEL_65_80);
      goto label_135;

    case 64:
      current_block = (Rpc - LABEL_65_69);
      goto continuation_38;

    case 65:
      current_block = (Rpc - LABEL_65_81);
      goto label_136;

    case 66:
      current_block = (Rpc - LABEL_65_71);
      goto continuation_50;

    case 67:
      current_block = (Rpc - LABEL_65_82);
      goto label_137;

    case 68:
      current_block = (Rpc - LABEL_65_74);
      goto continuation_53;

    case 69:
      current_block = (Rpc - LABEL_65_77);
      goto continuation_71;

    case 70:
      current_block = (Rpc - LABEL_65_78);
      goto continuation_80;

    case 71:
      current_block = (Rpc - LABEL_65_79);
      goto continuation_88;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (re_disassemble_pattern_139)
DEFLABEL (re_disassemble_pattern_97)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_145;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_145;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_144)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd27.uLng) == 30))
    goto label_143;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (Wrd25.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_142)
  (Wrd32.Obj) = (current_block [OBJECT_65_3]);
  (* (--Rsp)) = (Wrd32.Obj);
  goto loop_93;

DEFLABEL (label_143)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_2]), 1);

DEFLABEL (label_100)
  (* (--Rsp)) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_65_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_99)
  (Wrd5.Obj) = Rvl;
  goto label_144;

DEFLABEL (loop_140)
DEFLABEL (loop_93)
  INTERRUPT_CHECK (26, LABEL_65_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_65_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_65_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_65_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_224;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_224;
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd70.Lng) < (Wrd72.Lng))
    goto label_147;

DEFLABEL (label_146)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_65_5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_65_15);
  (Wrd5.Obj) = (current_block [OBJECT_65_8]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (label_147)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 30))
    goto label_223;
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_223;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) (Wrd30.Lng)) < ((unsigned long) (Wrd34.Lng))))
    goto label_223;
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd27.Obj));
  (Wrd24.pChr) = (& ((Wrd32.pChr) [(Wrd21.Lng)]));
  (Wrd25.uLng) = ((unsigned long) (((unsigned char *) (Wrd24.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd26.Obj) = (MAKE_OBJECT (26, (Wrd25.uLng)));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_222)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_0]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_221;
  Wrd43 = Wrd47;

DEFLABEL (label_220)
  Wrd42 = Wrd43;
  (Wrd49.Obj) = (* (Rsp++));
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_219;
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_219;
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) (Wrd55.Lng)) < ((unsigned long) (Wrd58.Lng))))
    goto label_219;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd49.Obj));
  (Wrd52.pObj) = (& ((Wrd56.pObj) [(Wrd50.Lng)]));
  (Wrd53.Obj) = ((Wrd52.pObj) [1]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_218)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_19]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_65_19);
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_65_9]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_65_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_150;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_65_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_65_32);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_149;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_149;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_148)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_93;

DEFLABEL (label_149)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_33]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_110)
  (Wrd9.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_150)
  (Wrd11.Obj) = (Rsp [0]);
  if (! ((Wrd11.Obj) == (current_block [OBJECT_65_10])))
    goto label_155;
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_22]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (Wrd126.Obj) = (current_block [OBJECT_65_11]);
  (* (--Rsp)) = (Wrd126.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_65_22);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_154;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_154;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_153)
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_65]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_66]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_152;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd31.Lng) = ((Wrd33.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd31.Lng)))
    goto label_152;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_151)
  (Wrd35.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_63]));

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_65_66);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_11]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_65_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_65_79);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_93;

DEFLABEL (label_152)
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_67]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_132)
  (* (--Rsp)) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_65_19]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_64]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_131)
  (Wrd10.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_155)
  if (! ((Wrd11.Obj) == (current_block [OBJECT_65_12])))
    goto label_164;
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_23]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd122.Obj) = (current_block [OBJECT_65_11]);
  (* (--Rsp)) = (Wrd122.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_65_23);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_163;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_163;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_162)
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_161;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = ((Wrd27.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_161;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));

DEFLABEL (label_160)
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 30))
    goto label_159;
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_159;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_159;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd33.pChr) = (& ((Wrd38.pChr) [(Wrd30.Lng)]));
  (Wrd34.uLng) = ((unsigned long) (((unsigned char *) (Wrd33.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd28.Obj) = (MAKE_OBJECT (26, (Wrd34.uLng)));

DEFLABEL (label_158)
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_157;
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd56.uLng) == 26))
    goto label_157;
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd57.Lng) = ((Wrd59.Lng) + (Wrd61.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd57.Lng)))
    goto label_157;
  (Wrd62.Obj) = (LONG_TO_FIXNUM (Wrd57.Lng));
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_156)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_61]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_62]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_63]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_65_62);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_11]));

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_65_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_65_78);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_93;

DEFLABEL (label_157)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_60]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_130)
  (* (--Rsp)) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_59]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 2);

DEFLABEL (label_129)
  (Wrd28.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_58]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_128)
  (Wrd22.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_65_19]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_57]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_127)
  (Wrd10.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_164)
  if (! ((Wrd11.Obj) == (current_block [OBJECT_65_13])))
    goto label_188;

DEFLABEL (label_187)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_24]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd118.Obj) = (current_block [OBJECT_65_11]);
  (* (--Rsp)) = (Wrd118.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_65_24);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_186;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 3L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_186;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_185)
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_184;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = ((Wrd27.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_184;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));

DEFLABEL (label_183)
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 30))
    goto label_182;
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_182;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_182;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd32.pChr) = (& ((Wrd38.pChr) [(Wrd29.Lng)]));
  (Wrd33.uLng) = ((unsigned long) (((unsigned char *) (Wrd32.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd34.Obj) = (MAKE_OBJECT (26, (Wrd33.uLng)));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_181)
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_180;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd56.Lng) = ((Wrd58.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd56.Lng)))
    goto label_180;
  (Wrd53.Obj) = (LONG_TO_FIXNUM (Wrd56.Lng));

DEFLABEL (label_179)
  (Wrd74.Obj) = (Rsp [4]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 30))
    goto label_178;
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_178;
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [1]);
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  if (! (((unsigned long) (Wrd69.Lng)) < ((unsigned long) (Wrd73.Lng))))
    goto label_178;
  (Wrd63.uLng) = (OBJECT_DATUM (Wrd53.Obj));
  (Wrd66.pChr) = (& ((Wrd71.pChr) [(Wrd63.Lng)]));
  (Wrd67.uLng) = ((unsigned long) (((unsigned char *) (Wrd66.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd61.Obj) = (MAKE_OBJECT (26, (Wrd67.uLng)));

DEFLABEL (label_177)
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd87.uLng) == 26))
    goto label_176;
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (multiply_with_overflow ((Wrd91.Lng), 256, (& (Wrd88.Lng))))
    goto label_176;
  (Wrd86.Obj) = (LONG_TO_FIXNUM (Wrd88.Lng));

DEFLABEL (label_175)
  (Wrd92.Obj) = (* (Rsp++));
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd99.uLng) == 26))
    goto label_174;
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd100.uLng) == 26))
    goto label_174;
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  (Wrd101.Lng) = ((Wrd102.Lng) + (Wrd103.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd101.Lng)))
    goto label_174;
  (Wrd98.Obj) = (LONG_TO_FIXNUM (Wrd101.Lng));

DEFLABEL (label_173)
  (Rsp [1]) = (Wrd98.Obj);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_53]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_45]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd111.uLng) == 26))
    goto label_172;
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if ((Wrd113.Lng) < 32768L)
    goto label_171;

DEFLABEL (label_170)
  (Wrd123.Obj) = (Rsp [3]);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd124.uLng) == 26))
    goto label_169;
  (Wrd127.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  (Wrd125.Lng) = ((Wrd127.Lng) - 65536L);
  if (! (LONG_TO_FIXNUM_P (Wrd125.Lng)))
    goto label_169;
  (Wrd122.Obj) = (LONG_TO_FIXNUM (Wrd125.Lng));

DEFLABEL (label_168)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_167)
  (Wrd135.Obj) = (Rsp [1]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if (! ((Wrd136.uLng) == 26))
    goto label_166;
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if (! ((Wrd137.uLng) == 26))
    goto label_166;
  (Wrd140.Lng) = (FIXNUM_TO_LONG (Wrd135.Obj));
  (Wrd141.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  (Wrd138.Lng) = ((Wrd140.Lng) + (Wrd141.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd138.Lng)))
    goto label_166;
  (Wrd142.Obj) = (LONG_TO_FIXNUM (Wrd138.Lng));
  (* (--Rsp)) = (Wrd142.Obj);

DEFLABEL (label_165)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_11]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_65_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_65_77);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_93;

DEFLABEL (label_166)
  (Wrd130.Obj) = (Rsp [1]);
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_56]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_125)
  (* (--Rsp)) = Rvl;
  goto label_165;

DEFLABEL (label_169)
  (Wrd117.Obj) = (Rsp [3]);
  (Wrd118.Obj) = (current_block [OBJECT_65_31]);
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_55]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_124)
  (Wrd122.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  (Wrd122.Obj) = (Rsp [3]);
  goto label_168;

DEFLABEL (label_172)
  (Wrd145.Obj) = (current_block [OBJECT_65_30]);
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_54]))));
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_126)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_170;
  goto label_171;

DEFLABEL (label_174)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_52]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_123)
  (Wrd98.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd81.Obj) = (current_block [OBJECT_65_29]);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_51]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_122)
  (Wrd86.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd76.Obj) = (Rsp [4]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_50]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 2);

DEFLABEL (label_121)
  (Wrd61.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_65_19]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_49]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_120)
  (Wrd53.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_48]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 2);

DEFLABEL (label_119)
  (* (--Rsp)) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_47]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_118)
  (Wrd22.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_186)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_65_28]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_46]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_117)
  (Wrd10.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  if ((Wrd11.Obj) == (current_block [OBJECT_65_14]))
    goto label_187;
  if ((Wrd11.Obj) == (current_block [OBJECT_65_15]))
    goto label_187;
  if ((Wrd11.Obj) == (current_block [OBJECT_65_16]))
    goto label_187;
  if ((Wrd11.Obj) == (current_block [OBJECT_65_17]))
    goto label_207;
  if ((Wrd11.Obj) == (current_block [OBJECT_65_18]))
    goto label_207;
  if (! ((Wrd11.Obj) == (current_block [OBJECT_65_20])))
    goto label_196;

DEFLABEL (label_195)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_30]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_65_11]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_65_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_194;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_194;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_193)
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_192;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_192;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_192;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd22.pChr) = (& ((Wrd28.pChr) [(Wrd19.Lng)]));
  (Wrd23.uLng) = ((unsigned long) (((unsigned char *) (Wrd22.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd24.Obj) = (MAKE_OBJECT (26, (Wrd23.uLng)));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_191)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_11]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_65_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_65_69);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_190;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_190;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_189)
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_93;

DEFLABEL (label_190)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_65_19]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_81]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_136)
  (Wrd10.Obj) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_40]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 2);

DEFLABEL (label_115)
  (* (--Rsp)) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_39]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_114)
  (Wrd12.Obj) = Rvl;
  goto label_193;

DEFLABEL (label_196)
  if ((Wrd11.Obj) == (current_block [OBJECT_65_21]))
    goto label_195;
  if ((Wrd11.Obj) == (current_block [OBJECT_65_22]))
    goto label_195;
  if (! ((Wrd11.Obj) == (current_block [OBJECT_65_23])))
    goto label_206;

DEFLABEL (label_205)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_31]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_65_11]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_65_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_204;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_204;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_203)
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_202;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_202;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_202;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd23.pChr) = (& ((Wrd28.pChr) [(Wrd20.Lng)]));
  (Wrd24.uLng) = ((unsigned long) (((unsigned char *) (Wrd23.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd18.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));

DEFLABEL (label_201)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_200;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd47.Obj) = (current_block [OBJECT_65_26]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [1]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd46.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_200;
  (Wrd39.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd42.pChr) = (& ((Wrd48.pChr) [(Wrd39.Lng)]));
  (Wrd43.uLng) = ((unsigned long) (((unsigned char *) (Wrd42.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd44.Obj) = (MAKE_OBJECT (2, (Wrd43.uLng)));
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_199)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_11]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_65_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_65_68);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_198;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_198;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_197)
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_93;

DEFLABEL (label_198)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_65_19]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_80]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_135)
  (Wrd10.Obj) = Rvl;
  goto label_197;

DEFLABEL (label_200)
  (Wrd51.Obj) = (current_block [OBJECT_65_26]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_37]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_27]), 2);

DEFLABEL (label_113)
  (* (--Rsp)) = Rvl;
  goto label_199;

DEFLABEL (label_202)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_36]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 2);

DEFLABEL (label_112)
  (Wrd18.Obj) = Rvl;
  goto label_201;

DEFLABEL (label_204)
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_35]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_111)
  (Wrd12.Obj) = Rvl;
  goto label_203;

DEFLABEL (label_206)
  if ((Wrd11.Obj) == (current_block [OBJECT_65_24]))
    goto label_205;
  Rvl = (current_block [OBJECT_65_25]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_207)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 26))
    goto label_217;
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd54.Lng) = ((Wrd56.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd54.Lng)))
    goto label_217;
  (Wrd51.Obj) = (LONG_TO_FIXNUM (Wrd54.Lng));

DEFLABEL (label_216)
  (Wrd70.Obj) = (Rsp [3]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 30))
    goto label_215;
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd64.uLng) == 26))
    goto label_215;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [1]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) (Wrd65.Lng)) < ((unsigned long) (Wrd69.Lng))))
    goto label_215;
  (Wrd58.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd61.pChr) = (& ((Wrd67.pChr) [(Wrd58.Lng)]));
  (Wrd62.uLng) = ((unsigned long) (((unsigned char *) (Wrd61.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd63.Obj) = (MAKE_OBJECT (26, (Wrd62.uLng)));
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_214)
  (Wrd83.Obj) = (Rsp [2]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 26))
    goto label_213;
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  (Wrd85.Lng) = ((Wrd87.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd85.Lng)))
    goto label_213;
  (Wrd82.Obj) = (LONG_TO_FIXNUM (Wrd85.Lng));

DEFLABEL (label_212)
  (Wrd90.Obj) = (* (Rsp++));
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd97.uLng) == 26))
    goto label_211;
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd98.uLng) == 26))
    goto label_211;
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  (Wrd99.Lng) = ((Wrd100.Lng) + (Wrd101.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd99.Lng)))
    goto label_211;
  (Wrd96.Obj) = (LONG_TO_FIXNUM (Wrd99.Lng));

DEFLABEL (label_210)
  (Rsp [0]) = (Wrd96.Obj);
  (Wrd107.Obj) = (Rsp [1]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd108.uLng) == 26))
    goto label_209;
  (Wrd111.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  (Wrd109.Lng) = ((Wrd111.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd109.Lng)))
    goto label_209;
  (Wrd114.Obj) = (LONG_TO_FIXNUM (Wrd109.Lng));
  (* (--Rsp)) = (Wrd114.Obj);

DEFLABEL (label_208)
  goto spit_56;

DEFLABEL (label_209)
  (Wrd102.Obj) = (Rsp [1]);
  (Wrd103.Obj) = (current_block [OBJECT_65_19]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_29]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_109)
  (* (--Rsp)) = Rvl;
  goto label_208;

DEFLABEL (label_211)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_28]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_108)
  (Wrd96.Obj) = Rvl;
  goto label_210;

DEFLABEL (label_213)
  (Wrd77.Obj) = (Rsp [2]);
  (Wrd78.Obj) = (current_block [OBJECT_65_19]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_27]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_107)
  (Wrd82.Obj) = Rvl;
  goto label_212;

DEFLABEL (label_215)
  (Wrd72.Obj) = (Rsp [3]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_26]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 2);

DEFLABEL (label_106)
  (* (--Rsp)) = Rvl;
  goto label_214;

DEFLABEL (label_217)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_25]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_105)
  (Wrd51.Obj) = Rvl;
  goto label_216;

DEFLABEL (label_219)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_18]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_7]), 2);

DEFLABEL (label_104)
  (* (--Rsp)) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_17])), (Wrd44.pObj));

DEFLABEL (label_103)
  (Wrd43.Obj) = Rvl;
  goto label_220;

DEFLABEL (label_223)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_16]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 2);

DEFLABEL (label_102)
  (* (--Rsp)) = Rvl;
  goto label_222;

DEFLABEL (label_224)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_101)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_146;
  goto label_147;

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_65_45);
  (Wrd122.Obj) = Rvl;
  goto label_167;

DEFLABEL (spit_141)
DEFLABEL (spit_56)
  INTERRUPT_CHECK (26, LABEL_65_41);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_232;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_232;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd24.Lng) < (Wrd26.Lng))
    goto label_226;

DEFLABEL (label_225)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_43]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_65_8]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_65_43);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_93;

DEFLABEL (label_226)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_44]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_65_11]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_65_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 30))
    goto label_231;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_231;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_231;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd13.pChr) = (& ((Wrd21.pChr) [(Wrd10.Lng)]));
  (Wrd14.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_230)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_229;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if ((Wrd34.Lng) < 16L)
    goto label_228;

DEFLABEL (label_227)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_74]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_65_32]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_75]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_65_74);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_13]));

DEFLABEL (label_228)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_70]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_65_33]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_76]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_65_70);
  goto label_227;

DEFLABEL (label_229)
  (Wrd47.Obj) = (current_block [OBJECT_65_32]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_73]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_134)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_227;
  goto label_228;

DEFLABEL (label_231)
  (Wrd26.Obj) = (Rsp [5]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_72]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 2);

DEFLABEL (label_133)
  (* (--Rsp)) = Rvl;
  goto label_230;

DEFLABEL (label_232)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_42]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_116)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_225;
  goto label_226;

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_65_71);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_234;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_234;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_233)
  (Rsp [0]) = (Wrd9.Obj);
  goto spit_56;

DEFLABEL (label_234)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_82]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_137)
  (Wrd9.Obj) = Rvl;
  goto label_233;

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
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_13 19
#define LABEL_14 21
#define LABEL_15 23
#define LABEL_16 25
#define LABEL_17 27
#define LABEL_18 29
#define LABEL_19 31
#define LABEL_20 33
#define LABEL_21 35
#define LABEL_22 37
#define LABEL_23 39
#define LABEL_24 41
#define LABEL_25 43
#define LABEL_26 45
#define LABEL_27 47
#define LABEL_28 49
#define LABEL_29 51
#define LABEL_30 53
#define LABEL_31 55
#define LABEL_32 57
#define LABEL_33 59
#define LABEL_34 61
#define LABEL_35 63
#define LABEL_36 65
#define LABEL_37 67
#define LABEL_38 69
#define LABEL_39 71
#define LABEL_40 73
#define LABEL_42 75
#define LABEL_43 77
#define LABEL_45 79
#define LABEL_46 81
#define LABEL_47 83
#define LABEL_48 85
#define LABEL_49 87
#define LABEL_50 89
#define LABEL_52 91
#define LABEL_53 93
#define LABEL_54 95
#define LABEL_57 97
#define LABEL_58 99
#define LABEL_51 101
#define LABEL_61 103
#define LABEL_55 105
#define LABEL_59 107
#define LABEL_65 109
#define LABEL_66 111
#define LABEL_60 113
#define LABEL_68 115
#define LABEL_69 117
#define LABEL_72 119
#define LABEL_73 121
#define LABEL_74 123
#define LABEL_63 125
#define LABEL_64 127
#define LABEL_70 129
#define TAG_71 63
#define LABEL_75 131
#define LABEL_80 133
#define LABEL_76 135
#define LABEL_78 137
#define LABEL_79 139
#define LABEL_82 141
#define LABEL_83 143
#define TAG_84 70
#define LABEL_85 145
#define LABEL_88 147
#define LABEL_86 149
#define LABEL_87 151
#define LABEL_89 153
#define LABEL_90 155
#define LABEL_91 157
#define LABEL_92 159
#define LABEL_93 161
#define LABEL_94 163
#define LABEL_95 165
#define LABEL_96 167
#define LABEL_97 169
#define LABEL_98 171
#define LABEL_99 173
#define LABEL_100 175
#define LABEL_101 177
#define LABEL_102 179
#define LABEL_103 181
#define LABEL_104 183
#define LABEL_105 185
#define LABEL_106 187
#define LABEL_107 189
#define LABEL_108 191
#define LABEL_109 193
#define LABEL_110 195
#define LABEL_111 197
#define LABEL_112 199
#define LABEL_113 201
#define LABEL_114 203
#define LABEL_115 205
#define LABEL_116 207
#define LABEL_117 209
#define LABEL_118 211
#define LABEL_119 213
#define LABEL_120 215
#define LABEL_121 217
#define LABEL_122 219
#define LABEL_123 221
#define LABEL_124 223
#define LABEL_125 225
#define LABEL_126 227
#define LABEL_127 229
#define LABEL_128 231
#define LABEL_129 233
#define LABEL_130 235
#define LABEL_131 237
#define LABEL_132 239
#define LABEL_133 241
#define LABEL_134 243
#define LABEL_135 245
#define LABEL_136 247
#define LABEL_139 249
#define LABEL_137 251
#define LABEL_138 253
#define LABEL_141 255
#define LABEL_143 257
#define LABEL_146 259
#define LABEL_144 261
#define LABEL_145 263
#define LABEL_147 265
#define LABEL_148 267
#define LABEL_149 269
#define LABEL_150 271
#define LABEL_151 273
#define LABEL_153 275
#define LABEL_154 277
#define LABEL_155 279
#define LABEL_156 281
#define LABEL_157 283
#define LABEL_158 285
#define LABEL_159 287
#define LABEL_161 289
#define LABEL_162 291
#define LABEL_164 293
#define LABEL_165 295
#define LABEL_166 297
#define LABEL_167 299
#define LABEL_168 301
#define LABEL_170 303
#define LABEL_171 305
#define LABEL_172 307
#define LABEL_173 309
#define LABEL_174 311
#define LABEL_175 313
#define LABEL_176 315
#define LABEL_178 317
#define LABEL_177 319
#define LABEL_180 321
#define LABEL_181 323
#define LABEL_182 325
#define ENVIRONMENT_LABEL_3 627
#define DEBUGGING_LABEL_2 626
#define PURIFICATION_ROOT 625
#define OBJECT_258 624
#define OBJECT_257 623
#define OBJECT_256 622
#define OBJECT_255 621
#define OBJECT_254 620
#define OBJECT_253 619
#define OBJECT_252 618
#define OBJECT_251 617
#define OBJECT_250 616
#define OBJECT_249 615
#define OBJECT_248 614
#define OBJECT_247 613
#define OBJECT_246 612
#define OBJECT_245 611
#define OBJECT_244 610
#define OBJECT_243 609
#define OBJECT_242 608
#define OBJECT_241 607
#define OBJECT_240 606
#define OBJECT_239 605
#define OBJECT_238 604
#define OBJECT_237 603
#define OBJECT_236 602
#define OBJECT_235 601
#define OBJECT_234 600
#define OBJECT_233 599
#define OBJECT_232 598
#define OBJECT_231 597
#define OBJECT_230 596
#define OBJECT_229 595
#define OBJECT_228 594
#define OBJECT_227 593
#define OBJECT_226 592
#define OBJECT_225 591
#define OBJECT_224 590
#define OBJECT_223 589
#define OBJECT_222 588
#define OBJECT_221 587
#define OBJECT_220 586
#define OBJECT_219 585
#define OBJECT_218 584
#define OBJECT_217 583
#define OBJECT_216 582
#define OBJECT_215 581
#define OBJECT_214 580
#define OBJECT_213 579
#define OBJECT_212 578
#define OBJECT_211 577
#define OBJECT_210 576
#define OBJECT_209 575
#define OBJECT_208 574
#define OBJECT_207 573
#define OBJECT_206 572
#define OBJECT_205 571
#define OBJECT_204 570
#define OBJECT_203 569
#define OBJECT_202 568
#define OBJECT_201 567
#define OBJECT_200 566
#define OBJECT_199 565
#define OBJECT_198 564
#define OBJECT_197 563
#define OBJECT_196 562
#define OBJECT_195 561
#define OBJECT_194 560
#define OBJECT_193 559
#define OBJECT_192 558
#define OBJECT_191 557
#define OBJECT_190 556
#define OBJECT_189 555
#define OBJECT_188 554
#define OBJECT_187 553
#define OBJECT_186 552
#define OBJECT_185 551
#define OBJECT_184 550
#define OBJECT_183 549
#define OBJECT_182 548
#define OBJECT_181 547
#define OBJECT_180 546
#define OBJECT_179 545
#define OBJECT_178 544
#define OBJECT_177 543
#define OBJECT_176 542
#define OBJECT_175 541
#define OBJECT_174 540
#define OBJECT_173 539
#define OBJECT_172 538
#define OBJECT_171 537
#define OBJECT_170 536
#define OBJECT_169 535
#define OBJECT_168 534
#define OBJECT_167 533
#define OBJECT_166 532
#define OBJECT_165 531
#define OBJECT_164 530
#define OBJECT_163 529
#define OBJECT_162 528
#define OBJECT_161 527
#define OBJECT_160 526
#define OBJECT_159 525
#define OBJECT_158 524
#define OBJECT_157 523
#define OBJECT_156 522
#define OBJECT_155 521
#define OBJECT_154 520
#define OBJECT_153 519
#define OBJECT_152 518
#define OBJECT_151 517
#define OBJECT_150 516
#define OBJECT_149 515
#define OBJECT_148 514
#define OBJECT_147 513
#define OBJECT_146 512
#define OBJECT_145 511
#define OBJECT_144 510
#define OBJECT_143 509
#define OBJECT_142 508
#define OBJECT_141 507
#define OBJECT_140 506
#define OBJECT_139 505
#define OBJECT_138 504
#define OBJECT_137 503
#define OBJECT_136 502
#define OBJECT_135 501
#define OBJECT_134 500
#define OBJECT_133 499
#define OBJECT_132 498
#define OBJECT_131 497
#define OBJECT_130 496
#define OBJECT_129 495
#define OBJECT_128 494
#define OBJECT_127 493
#define OBJECT_126 492
#define OBJECT_125 491
#define OBJECT_124 490
#define OBJECT_123 489
#define OBJECT_122 488
#define OBJECT_121 487
#define OBJECT_120 486
#define OBJECT_119 485
#define OBJECT_118 484
#define OBJECT_117 483
#define OBJECT_116 482
#define OBJECT_115 481
#define OBJECT_114 480
#define OBJECT_113 479
#define OBJECT_112 478
#define OBJECT_111 477
#define OBJECT_110 476
#define OBJECT_109 475
#define OBJECT_108 474
#define OBJECT_107 473
#define OBJECT_106 472
#define OBJECT_105 471
#define OBJECT_104 470
#define OBJECT_103 469
#define OBJECT_102 468
#define OBJECT_101 467
#define OBJECT_100 466
#define OBJECT_99 465
#define OBJECT_98 464
#define OBJECT_97 463
#define OBJECT_96 462
#define OBJECT_95 461
#define OBJECT_94 460
#define OBJECT_93 459
#define OBJECT_92 458
#define OBJECT_91 457
#define OBJECT_90 456
#define OBJECT_89 455
#define OBJECT_88 454
#define OBJECT_87 453
#define OBJECT_86 452
#define OBJECT_85 451
#define OBJECT_84 450
#define OBJECT_83 449
#define OBJECT_82 448
#define OBJECT_81 447
#define OBJECT_80 446
#define OBJECT_79 445
#define OBJECT_78 444
#define OBJECT_77 443
#define OBJECT_76 442
#define OBJECT_75 441
#define OBJECT_74 440
#define OBJECT_73 439
#define OBJECT_72 438
#define OBJECT_71 437
#define OBJECT_70 436
#define OBJECT_69 435
#define OBJECT_68 434
#define OBJECT_67 433
#define OBJECT_66 432
#define OBJECT_65 431
#define OBJECT_64 430
#define OBJECT_63 429
#define OBJECT_62 428
#define OBJECT_61 427
#define OBJECT_60 426
#define OBJECT_59 425
#define OBJECT_58 424
#define OBJECT_57 423
#define OBJECT_56 422
#define OBJECT_55 421
#define OBJECT_54 420
#define OBJECT_53 419
#define OBJECT_52 418
#define OBJECT_51 417
#define OBJECT_50 416
#define OBJECT_49 415
#define OBJECT_48 414
#define OBJECT_47 413
#define OBJECT_46 412
#define OBJECT_45 411
#define OBJECT_44 410
#define OBJECT_43 409
#define OBJECT_42 408
#define OBJECT_41 407
#define OBJECT_40 406
#define OBJECT_39 405
#define OBJECT_38 404
#define OBJECT_37 403
#define OBJECT_36 402
#define OBJECT_35 401
#define OBJECT_34 400
#define OBJECT_33 399
#define OBJECT_32 398
#define OBJECT_31 397
#define OBJECT_30 396
#define OBJECT_29 395
#define OBJECT_28 394
#define OBJECT_27 393
#define OBJECT_26 392
#define OBJECT_25 391
#define OBJECT_24 390
#define OBJECT_23 389
#define OBJECT_22 388
#define OBJECT_21 387
#define OBJECT_20 386
#define OBJECT_19 385
#define OBJECT_18 384
#define OBJECT_17 383
#define OBJECT_16 382
#define OBJECT_15 381
#define OBJECT_14 380
#define OBJECT_13 379
#define OBJECT_12 378
#define OBJECT_11 377
#define OBJECT_10 376
#define OBJECT_9 375
#define OBJECT_8 374
#define OBJECT_7 373
#define OBJECT_6 372
#define OBJECT_5 371
#define OBJECT_4 370
#define OBJECT_3 369
#define OBJECT_2 368
#define OBJECT_1 367
#define OBJECT_0 366
#define EXECUTE_CACHE_179 327
#define EXECUTE_CACHE_169 329
#define EXECUTE_CACHE_163 331
#define EXECUTE_CACHE_160 333
#define EXECUTE_CACHE_152 335
#define EXECUTE_CACHE_142 337
#define EXECUTE_CACHE_140 339
#define EXECUTE_CACHE_67 341
#define EXECUTE_CACHE_62 343
#define EXECUTE_CACHE_56 345
#define EXECUTE_CACHE_44 347
#define EXECUTE_CACHE_41 349
#define FREE_REFERENCE_6 352
#define FREE_REFERENCE_5 353
#define FREE_REFERENCE_4 354
#define FREE_REFERENCE_3 355
#define FREE_REFERENCE_2 356
#define FREE_REFERENCE_1 357
#define FREE_REFERENCE_0 358
#define GLOBAL_EXECUTE_CACHE_81 360
#define GLOBAL_EXECUTE_CACHE_77 362
#define GLOBAL_EXECUTE_CACHE_7 364
#define FREE_REFERENCES_LABEL_0 326
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rgxcmp_so_b3bc2f845463b00d (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
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
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_17;

    case 17:
      current_block = (Rpc - LABEL_22);
      goto continuation_18;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_20;

    case 20:
      current_block = (Rpc - LABEL_25);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_27);
      goto continuation_23;

    case 23:
      current_block = (Rpc - LABEL_28);
      goto continuation_24;

    case 24:
      current_block = (Rpc - LABEL_29);
      goto continuation_25;

    case 25:
      current_block = (Rpc - LABEL_30);
      goto continuation_26;

    case 26:
      current_block = (Rpc - LABEL_31);
      goto continuation_27;

    case 27:
      current_block = (Rpc - LABEL_32);
      goto continuation_28;

    case 28:
      current_block = (Rpc - LABEL_33);
      goto continuation_29;

    case 29:
      current_block = (Rpc - LABEL_34);
      goto continuation_31;

    case 30:
      current_block = (Rpc - LABEL_35);
      goto continuation_32;

    case 31:
      current_block = (Rpc - LABEL_36);
      goto continuation_33;

    case 32:
      current_block = (Rpc - LABEL_37);
      goto continuation_34;

    case 33:
      current_block = (Rpc - LABEL_38);
      goto continuation_35;

    case 34:
      current_block = (Rpc - LABEL_39);
      goto continuation_37;

    case 35:
      current_block = (Rpc - LABEL_40);
      goto continuation_36;

    case 36:
      current_block = (Rpc - LABEL_42);
      goto continuation_39;

    case 37:
      current_block = (Rpc - LABEL_43);
      goto continuation_38;

    case 38:
      current_block = (Rpc - LABEL_45);
      goto continuation_40;

    case 39:
      current_block = (Rpc - LABEL_46);
      goto continuation_41;

    case 40:
      current_block = (Rpc - LABEL_47);
      goto continuation_42;

    case 41:
      current_block = (Rpc - LABEL_48);
      goto continuation_64;

    case 42:
      current_block = (Rpc - LABEL_49);
      goto continuation_43;

    case 43:
      current_block = (Rpc - LABEL_50);
      goto continuation_65;

    case 44:
      current_block = (Rpc - LABEL_52);
      goto label_167;

    case 45:
      current_block = (Rpc - LABEL_53);
      goto loop_50;

    case 46:
      current_block = (Rpc - LABEL_54);
      goto label_170;

    case 47:
      current_block = (Rpc - LABEL_57);
      goto label_169;

    case 48:
      current_block = (Rpc - LABEL_58);
      goto label_168;

    case 49:
      current_block = (Rpc - LABEL_51);
      goto continuation_66;

    case 50:
      current_block = (Rpc - LABEL_61);
      goto label_171;

    case 51:
      current_block = (Rpc - LABEL_55);
      goto continuation_52;

    case 52:
      current_block = (Rpc - LABEL_59);
      goto continuation_68;

    case 53:
      current_block = (Rpc - LABEL_65);
      goto label_172;

    case 54:
      current_block = (Rpc - LABEL_66);
      goto label_173;

    case 55:
      current_block = (Rpc - LABEL_60);
      goto continuation_67;

    case 56:
      current_block = (Rpc - LABEL_68);
      goto loop_59;

    case 57:
      current_block = (Rpc - LABEL_69);
      goto label_177;

    case 58:
      current_block = (Rpc - LABEL_72);
      goto label_174;

    case 59:
      current_block = (Rpc - LABEL_73);
      goto label_176;

    case 60:
      current_block = (Rpc - LABEL_74);
      goto label_175;

    case 61:
      current_block = (Rpc - LABEL_63);
      goto continuation_70;

    case 62:
      current_block = (Rpc - LABEL_64);
      goto continuation_69;

    case 63:
      current_block = (Rpc - LABEL_70);
      goto lambda_186;

    case 64:
      current_block = (Rpc - LABEL_75);
      goto continuation_74;

    case 65:
      current_block = (Rpc - LABEL_80);
      goto label_178;

    case 66:
      current_block = (Rpc - LABEL_76);
      goto continuation_73;

    case 67:
      current_block = (Rpc - LABEL_78);
      goto continuation_79;

    case 68:
      current_block = (Rpc - LABEL_79);
      goto continuation_75;

    case 69:
      current_block = (Rpc - LABEL_82);
      goto continuation_80;

    case 70:
      current_block = (Rpc - LABEL_83);
      goto Z__make_compiled_regexp_187;

    case 71:
      current_block = (Rpc - LABEL_85);
      goto continuation_81;

    case 72:
      current_block = (Rpc - LABEL_88);
      goto label_179;

    case 73:
      current_block = (Rpc - LABEL_86);
      goto continuation_83;

    case 74:
      current_block = (Rpc - LABEL_87);
      goto continuation_82;

    case 75:
      current_block = (Rpc - LABEL_89);
      goto continuation_84;

    case 76:
      current_block = (Rpc - LABEL_90);
      goto continuation_85;

    case 77:
      current_block = (Rpc - LABEL_91);
      goto continuation_86;

    case 78:
      current_block = (Rpc - LABEL_92);
      goto continuation_87;

    case 79:
      current_block = (Rpc - LABEL_93);
      goto continuation_88;

    case 80:
      current_block = (Rpc - LABEL_94);
      goto continuation_89;

    case 81:
      current_block = (Rpc - LABEL_95);
      goto continuation_90;

    case 82:
      current_block = (Rpc - LABEL_96);
      goto continuation_91;

    case 83:
      current_block = (Rpc - LABEL_97);
      goto continuation_92;

    case 84:
      current_block = (Rpc - LABEL_98);
      goto continuation_93;

    case 85:
      current_block = (Rpc - LABEL_99);
      goto continuation_94;

    case 86:
      current_block = (Rpc - LABEL_100);
      goto continuation_95;

    case 87:
      current_block = (Rpc - LABEL_101);
      goto continuation_96;

    case 88:
      current_block = (Rpc - LABEL_102);
      goto continuation_97;

    case 89:
      current_block = (Rpc - LABEL_103);
      goto continuation_99;

    case 90:
      current_block = (Rpc - LABEL_104);
      goto continuation_98;

    case 91:
      current_block = (Rpc - LABEL_105);
      goto continuation_100;

    case 92:
      current_block = (Rpc - LABEL_106);
      goto continuation_101;

    case 93:
      current_block = (Rpc - LABEL_107);
      goto continuation_102;

    case 94:
      current_block = (Rpc - LABEL_108);
      goto continuation_103;

    case 95:
      current_block = (Rpc - LABEL_109);
      goto continuation_104;

    case 96:
      current_block = (Rpc - LABEL_110);
      goto continuation_105;

    case 97:
      current_block = (Rpc - LABEL_111);
      goto continuation_106;

    case 98:
      current_block = (Rpc - LABEL_112);
      goto continuation_107;

    case 99:
      current_block = (Rpc - LABEL_113);
      goto continuation_108;

    case 100:
      current_block = (Rpc - LABEL_114);
      goto continuation_109;

    case 101:
      current_block = (Rpc - LABEL_115);
      goto continuation_110;

    case 102:
      current_block = (Rpc - LABEL_116);
      goto continuation_111;

    case 103:
      current_block = (Rpc - LABEL_117);
      goto continuation_112;

    case 104:
      current_block = (Rpc - LABEL_118);
      goto continuation_113;

    case 105:
      current_block = (Rpc - LABEL_119);
      goto continuation_114;

    case 106:
      current_block = (Rpc - LABEL_120);
      goto continuation_115;

    case 107:
      current_block = (Rpc - LABEL_121);
      goto continuation_116;

    case 108:
      current_block = (Rpc - LABEL_122);
      goto continuation_117;

    case 109:
      current_block = (Rpc - LABEL_123);
      goto continuation_118;

    case 110:
      current_block = (Rpc - LABEL_124);
      goto continuation_119;

    case 111:
      current_block = (Rpc - LABEL_125);
      goto continuation_120;

    case 112:
      current_block = (Rpc - LABEL_126);
      goto continuation_121;

    case 113:
      current_block = (Rpc - LABEL_127);
      goto continuation_122;

    case 114:
      current_block = (Rpc - LABEL_128);
      goto continuation_123;

    case 115:
      current_block = (Rpc - LABEL_129);
      goto continuation_124;

    case 116:
      current_block = (Rpc - LABEL_130);
      goto continuation_125;

    case 117:
      current_block = (Rpc - LABEL_131);
      goto continuation_126;

    case 118:
      current_block = (Rpc - LABEL_132);
      goto continuation_127;

    case 119:
      current_block = (Rpc - LABEL_133);
      goto continuation_128;

    case 120:
      current_block = (Rpc - LABEL_134);
      goto continuation_129;

    case 121:
      current_block = (Rpc - LABEL_135);
      goto continuation_130;

    case 122:
      current_block = (Rpc - LABEL_136);
      goto continuation_131;

    case 123:
      current_block = (Rpc - LABEL_139);
      goto label_180;

    case 124:
      current_block = (Rpc - LABEL_137);
      goto continuation_133;

    case 125:
      current_block = (Rpc - LABEL_138);
      goto continuation_132;

    case 126:
      current_block = (Rpc - LABEL_141);
      goto continuation_134;

    case 127:
      current_block = (Rpc - LABEL_143);
      goto continuation_135;

    case 128:
      current_block = (Rpc - LABEL_146);
      goto label_181;

    case 129:
      current_block = (Rpc - LABEL_144);
      goto continuation_137;

    case 130:
      current_block = (Rpc - LABEL_145);
      goto continuation_136;

    case 131:
      current_block = (Rpc - LABEL_147);
      goto continuation_138;

    case 132:
      current_block = (Rpc - LABEL_148);
      goto continuation_139;

    case 133:
      current_block = (Rpc - LABEL_149);
      goto continuation_140;

    case 134:
      current_block = (Rpc - LABEL_150);
      goto continuation_141;

    case 135:
      current_block = (Rpc - LABEL_151);
      goto continuation_142;

    case 136:
      current_block = (Rpc - LABEL_153);
      goto continuation_143;

    case 137:
      current_block = (Rpc - LABEL_154);
      goto continuation_144;

    case 138:
      current_block = (Rpc - LABEL_155);
      goto continuation_145;

    case 139:
      current_block = (Rpc - LABEL_156);
      goto continuation_146;

    case 140:
      current_block = (Rpc - LABEL_157);
      goto continuation_147;

    case 141:
      current_block = (Rpc - LABEL_158);
      goto continuation_148;

    case 142:
      current_block = (Rpc - LABEL_159);
      goto continuation_149;

    case 143:
      current_block = (Rpc - LABEL_161);
      goto continuation_150;

    case 144:
      current_block = (Rpc - LABEL_162);
      goto continuation_151;

    case 145:
      current_block = (Rpc - LABEL_164);
      goto continuation_152;

    case 146:
      current_block = (Rpc - LABEL_165);
      goto continuation_153;

    case 147:
      current_block = (Rpc - LABEL_166);
      goto continuation_154;

    case 148:
      current_block = (Rpc - LABEL_167);
      goto continuation_155;

    case 149:
      current_block = (Rpc - LABEL_168);
      goto continuation_156;

    case 150:
      current_block = (Rpc - LABEL_170);
      goto continuation_157;

    case 151:
      current_block = (Rpc - LABEL_171);
      goto continuation_158;

    case 152:
      current_block = (Rpc - LABEL_172);
      goto continuation_159;

    case 153:
      current_block = (Rpc - LABEL_173);
      goto continuation_160;

    case 154:
      current_block = (Rpc - LABEL_174);
      goto continuation_161;

    case 155:
      current_block = (Rpc - LABEL_175);
      goto continuation_162;

    case 156:
      current_block = (Rpc - LABEL_176);
      goto continuation_163;

    case 157:
      current_block = (Rpc - LABEL_178);
      goto label_182;

    case 158:
      current_block = (Rpc - LABEL_177);
      goto continuation_164;

    case 159:
      current_block = (Rpc - LABEL_180);
      goto label_189;

    case 160:
      current_block = (Rpc - LABEL_181);
      goto label_190;

    case 161:
      current_block = (Rpc - LABEL_182);
      goto expression_166;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_166)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_181])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_190)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_189)
  {
    static const short sections [] =
      {
	0,
	2,
	3,
	3,
	3,
	3,
	3,
	3,
	3,
	2,
	3,
	3,
	3,
	3,
	2,
	3,
	3,
	2,
	3,
	2,
	3,
	1,
	2,
	1,
	2,
	2,
	2,
	2,
	2,
	1,
	1,
	3,
	1,
	0,
	0,
	0,
	1,
	1,
	2,
	2,
	2,
	1,
	3,
	1,
	2,
	2,
	2,
	1,
	1,
	1,
	1,
	3,
	1,
	1,
	0,
	0,
	1,
	1,
	1,
	2,
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
    if (counter > 65)
      goto label_188;
    blocks = (current_block [OBJECT_258]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_180])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_188)
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
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd36.Obj) = (MAKE_OBJECT (0, 26));
  (Wrd37.Obj) = (current_block [OBJECT_57]);
  (Wrd38.Obj) = (current_block [OBJECT_58]);
  (Wrd39.Obj) = (current_block [OBJECT_59]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_60]);
  (Wrd31.Obj) = (current_block [OBJECT_61]);
  (Wrd32.Obj) = (current_block [OBJECT_62]);
  (Wrd33.Obj) = (current_block [OBJECT_63]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_64]);
  (Wrd27.Obj) = (current_block [OBJECT_65]);
  (Wrd28.Obj) = (current_block [OBJECT_66]);
  (Wrd29.Obj) = (current_block [OBJECT_67]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_68]);
  (Wrd23.Obj) = (current_block [OBJECT_69]);
  (Wrd24.Obj) = (current_block [OBJECT_70]);
  (Wrd25.Obj) = (current_block [OBJECT_71]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_72]);
  (Wrd19.Obj) = (current_block [OBJECT_73]);
  (Wrd20.Obj) = (current_block [OBJECT_74]);
  (Wrd21.Obj) = (current_block [OBJECT_75]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_76]);
  (Wrd15.Obj) = (current_block [OBJECT_77]);
  (Wrd16.Obj) = (current_block [OBJECT_78]);
  (Wrd17.Obj) = (current_block [OBJECT_79]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_80]);
  (Wrd12.Obj) = (current_block [OBJECT_81]);
  (Wrd13.Obj) = (current_block [OBJECT_82]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.pObj) = (& (Rhp [-27]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_43);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_111]), 1);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_49);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_50;

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_208;
  Wrd8 = Wrd12;

DEFLABEL (label_207)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_206;
  Wrd13 = Wrd17;

DEFLABEL (label_205)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_60);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_204;
  Wrd11 = Wrd15;

DEFLABEL (label_203)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_202;
  Wrd18 = Wrd22;

DEFLABEL (label_201)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_64);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_123]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_77]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_76);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_200;
  Wrd11 = Wrd15;

DEFLABEL (label_199)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_81]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_79);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_84);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_83])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_198;
  Wrd11 = Wrd15;

DEFLABEL (label_197)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_81]));

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_87);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41]));

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_104);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_171]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_123);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_191]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_192]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_193]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_194]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_126);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_195]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_196]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_127);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_197]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_198]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_128);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_199]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_200]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_129);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_201]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_202]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_130);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_204]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_131);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_205]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_206]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_132);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_207]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_133);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_209]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_210]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_134);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_211]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_212]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_135);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_213]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_214]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_136);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_196;
  Wrd11 = Wrd15;

DEFLABEL (label_195)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_140]));

DEFLABEL (continuation_132)
  INTERRUPT_CHECK (27, LABEL_138);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_216]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_137);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_215]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_142]));

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_141);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_217]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_218]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_143);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_145]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_194;
  Wrd11 = Wrd15;

DEFLABEL (label_193)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_140]));

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_145);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_220]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_144);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_219]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_142]));

DEFLABEL (continuation_138)
  INTERRUPT_CHECK (27, LABEL_147);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_221]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_142]));

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_148);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_222]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_142]));

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_149);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_223]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_224]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_150);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_225]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_152]));

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_151);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_226]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_152]));

DEFLABEL (continuation_143)
  INTERRUPT_CHECK (27, LABEL_153);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_227]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_152]));

DEFLABEL (continuation_144)
  INTERRUPT_CHECK (27, LABEL_154);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_228]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_152]));

DEFLABEL (continuation_145)
  INTERRUPT_CHECK (27, LABEL_155);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_229]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_152]));

DEFLABEL (continuation_146)
  INTERRUPT_CHECK (27, LABEL_156);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_157]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_230]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_152]));

DEFLABEL (continuation_147)
  INTERRUPT_CHECK (27, LABEL_157);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_231]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_232]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_148)
  INTERRUPT_CHECK (27, LABEL_158);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_159]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_233]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_160]));

DEFLABEL (continuation_149)
  INTERRUPT_CHECK (27, LABEL_159);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_161]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_234]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_160]));

DEFLABEL (continuation_150)
  INTERRUPT_CHECK (27, LABEL_161);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_162]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_235]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_236]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_163]));

DEFLABEL (continuation_151)
  INTERRUPT_CHECK (27, LABEL_162);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_164]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_237]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_238]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_163]));

DEFLABEL (continuation_152)
  INTERRUPT_CHECK (27, LABEL_164);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_239]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_240]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_153)
  INTERRUPT_CHECK (27, LABEL_165);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_241]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_242]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_154)
  INTERRUPT_CHECK (27, LABEL_166);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_243]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_244]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_155)
  INTERRUPT_CHECK (27, LABEL_167);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_245]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_169]));

DEFLABEL (continuation_156)
  INTERRUPT_CHECK (27, LABEL_168);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_170]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_245]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_169]));

DEFLABEL (continuation_157)
  INTERRUPT_CHECK (27, LABEL_170);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_245]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_169]));

DEFLABEL (continuation_158)
  INTERRUPT_CHECK (27, LABEL_171);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_172]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_246]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_142]));

DEFLABEL (continuation_159)
  INTERRUPT_CHECK (27, LABEL_172);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_173]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_247]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_248]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_163]));

DEFLABEL (continuation_160)
  INTERRUPT_CHECK (27, LABEL_173);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_174]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_249]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_250]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_163]));

DEFLABEL (continuation_161)
  INTERRUPT_CHECK (27, LABEL_174);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_251]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_252]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_163]));

DEFLABEL (continuation_162)
  INTERRUPT_CHECK (27, LABEL_175);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_176]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_253]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_254]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_163)
  INTERRUPT_CHECK (27, LABEL_176);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_177]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_255]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_192;
  Wrd9 = Wrd13;

DEFLABEL (label_191)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_179]));

DEFLABEL (continuation_164)
  INTERRUPT_CHECK (27, LABEL_177);
  (Wrd5.Obj) = (current_block [OBJECT_256]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_257]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_192)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_178])), (Wrd10.pObj));

DEFLABEL (label_182)
  (Wrd9.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_146])), (Wrd12.pObj));

DEFLABEL (label_181)
  (Wrd11.Obj) = Rvl;
  goto label_193;

DEFLABEL (label_196)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_139])), (Wrd12.pObj));

DEFLABEL (label_180)
  (Wrd11.Obj) = Rvl;
  goto label_195;

DEFLABEL (label_198)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88])), (Wrd12.pObj));

DEFLABEL (label_179)
  (Wrd11.Obj) = Rvl;
  goto label_197;

DEFLABEL (label_200)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80])), (Wrd12.pObj));

DEFLABEL (label_178)
  (Wrd11.Obj) = Rvl;
  goto label_199;

DEFLABEL (label_202)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66])), (Wrd19.pObj));

DEFLABEL (label_173)
  (Wrd18.Obj) = Rvl;
  goto label_201;

DEFLABEL (label_204)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65])), (Wrd12.pObj));

DEFLABEL (label_172)
  (Wrd11.Obj) = Rvl;
  goto label_203;

DEFLABEL (label_206)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61])), (Wrd14.pObj));

DEFLABEL (label_171)
  (Wrd13.Obj) = Rvl;
  goto label_205;

DEFLABEL (label_208)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52])), (Wrd9.pObj));

DEFLABEL (label_167)
  (Wrd8.Obj) = Rvl;
  goto label_207;

DEFLABEL (loop_184)
DEFLABEL (loop_50)
  INTERRUPT_CHECK (26, LABEL_53);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_215;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 256L)
    goto label_210;

DEFLABEL (label_209)
  Rsp = (& (Rsp [1]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_55);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_59;

DEFLABEL (label_210)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 30))
    goto label_214;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_214;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd37.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_214;
  if (! ((Wrd35.uLng) == 26))
    goto label_214;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd30.pChr) = (& ((Wrd39.pChr) [(Wrd27.Lng)]));
  ((Wrd30.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd34.uLng));

DEFLABEL (label_213)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_212;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = ((Wrd25.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd23.Lng)))
    goto label_212;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));

DEFLABEL (label_211)
  (Rsp [0]) = (Wrd20.Obj);
  goto loop_50;

DEFLABEL (label_212)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_168)
  (Wrd20.Obj) = Rvl;
  goto label_211;

DEFLABEL (label_214)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114]), 3);

DEFLABEL (label_169)
  goto label_213;

DEFLABEL (label_215)
  (Wrd51.Obj) = (current_block [OBJECT_110]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_170)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_209;
  goto label_210;

DEFLABEL (loop_185)
DEFLABEL (loop_59)
  INTERRUPT_CHECK (26, LABEL_68);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_224;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 123L)
    goto label_217;

DEFLABEL (label_216)
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_71);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_70])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  (Wrd19.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_217)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_223;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd32.Lng) - 32L);
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_223;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));

DEFLABEL (label_222)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 30))
    goto label_221;
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_221;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [1]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) (Wrd54.Lng)) < ((unsigned long) (Wrd58.Lng))))
    goto label_221;
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd50.uLng) == 26))
    goto label_221;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd49.pChr) = (& ((Wrd56.pChr) [(Wrd46.Lng)]));
  ((Wrd49.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd27.uLng));

DEFLABEL (label_220)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_219;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_219;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));

DEFLABEL (label_218)
  (Rsp [0]) = (Wrd39.Obj);
  goto loop_59;

DEFLABEL (label_219)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_175)
  (Wrd39.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114]), 3);

DEFLABEL (label_176)
  goto label_220;

DEFLABEL (label_223)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_122]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_174)
  (Wrd27.Obj) = Rvl;
  goto label_222;

DEFLABEL (label_224)
  (Wrd68.Obj) = (current_block [OBJECT_120]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_177)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_216;
  goto label_217;

DEFLABEL (lambda_186)
  CLOSURE_HEADER (LABEL_70);

DEFLABEL (lambda_61)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_226;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [3]);
  goto label_225;

DEFLABEL (label_226)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd13.pObj) [2]);

DEFLABEL (label_225)
DEFLABEL (label_227)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (Z__make_compiled_regexp_187)
  CLOSURE_HEADER (LABEL_83);

DEFLABEL (Z__make_compiled_regexp_77)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rgxcmp_so_b3bc2f845463b00d [65] =
  {
    { "rgxcmp_so_code_1", 19, rgxcmp_so_code_1 },
    { "rgxcmp_so_code_2", 3, rgxcmp_so_code_2 },
    { "rgxcmp_so_code_3", 7, rgxcmp_so_code_3 },
    { "rgxcmp_so_code_4", 24, rgxcmp_so_code_4 },
    { "rgxcmp_so_code_5", 5, rgxcmp_so_code_5 },
    { "rgxcmp_so_code_6", 17, rgxcmp_so_code_6 },
    { "rgxcmp_so_code_7", 23, rgxcmp_so_code_7 },
    { "rgxcmp_so_code_8", 4, rgxcmp_so_code_8 },
    { "rgxcmp_so_code_9", 26, rgxcmp_so_code_9 },
    { "rgxcmp_so_code_10", 3, rgxcmp_so_code_10 },
    { "rgxcmp_so_code_11", 1, rgxcmp_so_code_11 },
    { "rgxcmp_so_code_12", 1, rgxcmp_so_code_12 },
    { "rgxcmp_so_code_13", 4, rgxcmp_so_code_13 },
    { "rgxcmp_so_code_14", 2, rgxcmp_so_code_14 },
    { "rgxcmp_so_code_15", 71, rgxcmp_so_code_15 },
    { "rgxcmp_so_code_16", 2, rgxcmp_so_code_16 },
    { "rgxcmp_so_code_17", 3, rgxcmp_so_code_17 },
    { "rgxcmp_so_code_18", 4, rgxcmp_so_code_18 },
    { "rgxcmp_so_code_19", 5, rgxcmp_so_code_19 },
    { "rgxcmp_so_code_20", 4, rgxcmp_so_code_20 },
    { "rgxcmp_so_code_21", 9, rgxcmp_so_code_21 },
    { "rgxcmp_so_code_22", 7, rgxcmp_so_code_22 },
    { "rgxcmp_so_code_23", 2, rgxcmp_so_code_23 },
    { "rgxcmp_so_code_24", 9, rgxcmp_so_code_24 },
    { "rgxcmp_so_code_25", 2, rgxcmp_so_code_25 },
    { "rgxcmp_so_code_26", 6, rgxcmp_so_code_26 },
    { "rgxcmp_so_code_27", 7, rgxcmp_so_code_27 },
    { "rgxcmp_so_code_28", 10, rgxcmp_so_code_28 },
    { "rgxcmp_so_code_29", 2, rgxcmp_so_code_29 },
    { "rgxcmp_so_code_30", 3, rgxcmp_so_code_30 },
    { "rgxcmp_so_code_31", 1, rgxcmp_so_code_31 },
    { "rgxcmp_so_code_32", 3, rgxcmp_so_code_32 },
    { "rgxcmp_so_code_33", 8, rgxcmp_so_code_33 },
    { "rgxcmp_so_code_34", 11, rgxcmp_so_code_34 },
    { "rgxcmp_so_code_35", 9, rgxcmp_so_code_35 },
    { "rgxcmp_so_code_36", 4, rgxcmp_so_code_36 },
    { "rgxcmp_so_code_37", 2, rgxcmp_so_code_37 },
    { "rgxcmp_so_code_38", 4, rgxcmp_so_code_38 },
    { "rgxcmp_so_code_39", 2, rgxcmp_so_code_39 },
    { "rgxcmp_so_code_40", 3, rgxcmp_so_code_40 },
    { "rgxcmp_so_code_41", 6, rgxcmp_so_code_41 },
    { "rgxcmp_so_code_42", 5, rgxcmp_so_code_42 },
    { "rgxcmp_so_code_43", 3, rgxcmp_so_code_43 },
    { "rgxcmp_so_code_44", 12, rgxcmp_so_code_44 },
    { "rgxcmp_so_code_45", 1, rgxcmp_so_code_45 },
    { "rgxcmp_so_code_46", 59, rgxcmp_so_code_46 },
    { "rgxcmp_so_code_47", 4, rgxcmp_so_code_47 },
    { "rgxcmp_so_code_48", 11, rgxcmp_so_code_48 },
    { "rgxcmp_so_code_49", 4, rgxcmp_so_code_49 },
    { "rgxcmp_so_code_50", 21, rgxcmp_so_code_50 },
    { "rgxcmp_so_code_51", 8, rgxcmp_so_code_51 },
    { "rgxcmp_so_code_52", 10, rgxcmp_so_code_52 },
    { "rgxcmp_so_code_53", 8, rgxcmp_so_code_53 },
    { "rgxcmp_so_code_54", 11, rgxcmp_so_code_54 },
    { "rgxcmp_so_code_55", 25, rgxcmp_so_code_55 },
    { "rgxcmp_so_code_56", 25, rgxcmp_so_code_56 },
    { "rgxcmp_so_code_57", 3, rgxcmp_so_code_57 },
    { "rgxcmp_so_code_58", 26, rgxcmp_so_code_58 },
    { "rgxcmp_so_code_59", 28, rgxcmp_so_code_59 },
    { "rgxcmp_so_code_60", 73, rgxcmp_so_code_60 },
    { "rgxcmp_so_code_61", 32, rgxcmp_so_code_61 },
    { "rgxcmp_so_code_62", 23, rgxcmp_so_code_62 },
    { "rgxcmp_so_code_63", 31, rgxcmp_so_code_63 },
    { "rgxcmp_so_code_64", 26, rgxcmp_so_code_64 },
    { "rgxcmp_so_code_65", 72, rgxcmp_so_code_65 }
  };

int
decl_rgxcmp_so_b3bc2f845463b00d (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rgxcmp_so_b3bc2f845463b00d);
  return (0);
}

DECLARE_COMPILED_CODE ("rgxcmp.so", 162, decl_rgxcmp_so_b3bc2f845463b00d, rgxcmp_so_b3bc2f845463b00d)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rgxcmp_so_data_b3bc2f845463b00d [14652] =
  "\xf4\x04\x89\x01\xae\x1e\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x0d"
  "\x80\x0d\x08\x0d\x0d\xc1\xb9\xc1\xba\x28\x0d\xbb\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x82\x88\x28"
  "\x0d\xbd\x28\x0d\xbe\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf"
  "\x1d\xb0\x83\x88\x0d\xc2\x1c\xb2\xc2\x1c\x08\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x84\x88\x1b\x1d\x1b\xb1\xb2\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x85\x88\xc3\x1c\xc3\x1c\x80\x81\xc1\x1c\x82\x28"
  "\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x86\x88\x1b\x82\xc2\x1c\x1b\x81\x80\x02\xc1"
  "\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xc2\x1c\x1b"
  "\x0f\x1b\x80\x1b\x0d\x1c\x24\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xc1\x0f\xb2\x08\x0f"
  "\xb1\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x0c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x81\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x1b\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x1b\xb1\x85"
  "\x0c\xb2\x1d\x80\x81\x08\x0d\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x25"
  "\x0d\x1c\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1c"
  "\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x28\xb3\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08\x1b"
  "\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08\xb2"
  "\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\xb1\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\xb1\xb2\x1b\x1b\x24\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb2\x1b"
  "\x25\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\xb2\x1b\xb1\x1b\x1b\x25\x1b\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb2\xb1\x1b\x1b\x25\x1b\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb2\x1b\xb1\x08\x1b\x25\x1b\x1b\x24\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x08\x1b\x1b"
  "\x25\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x08\x06\x1b\x1b\x1b\x25"
  "\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x08\x06\x1b\x1b\x1b"
  "\x1b\x25\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xb1\xb2\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\xb1\xb2\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb1\x1b\xb2\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\xb2"
  "\xb1\x1b\x25\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x02\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08\x1b\x24\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x1b\x24\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x1b\x25\x1b\x24\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\xb2\xb1\x1b\x25\x1b\x24\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\xb2\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\xb2\x1b\xb1\x1b\x1b\x25\x1b\x1b\x1b\x1b\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0f\x0f\x0f\x0f\x1d"
  "\x1b\x80\x82\x02\xb1\xb2\x1b\x81\x06\x08\x1b\x1b\x1b\x1b\x25\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xc3\x1c\x1b\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\xb2\xb1\x08\x1b\x1b\x25\x1b\x1b\x0d\x1c\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0f\x1d\x1b\x84\x06\x08\x1b\xb1\xb2\x0f\x0f\x1b"
  "\x1b\x1b\x25\x1b\x1b\x1b\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x1b\x08\x83\x06\x1b\x1b\x1b\x25\x1b\x1b\x1b\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x08\x02\x06\x1b"
  "\x1b\x1b\x1b\x25\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x1b\x08\x06\x1b\x1b\x1b\x25\x1b\x1b\x24\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x08\x06\x1b\x1b"
  "\x1b\x1b\x25\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb2\x1b\xb1\x1b\x08\x02\x06\x1b"
  "\x1b\x1b\x1b\x1b\x25\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb2\x1b\xb1\x1b\x08"
  "\x02\x06\x1b\x1b\x1b\x1b\x1b\x25\x1b\x1b\x1b\x1b\x24\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0f\xb2\x0f\x1b\xb1\x0f\x08\x1b\x25\x1b\x1b"
  "\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x1d\x1b\x08\x02\x06\xb1\x86\x1b\x1b\x1b"
  "\x25\x1b\x1b\x1b\x24\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1d\x02\x02\x1b"
  "\x02\x02\x06\x0f\x07\xb2\x02\x1b\xb1\x0f\x80\x08\x1b\x1b\x1b\x1b"
  "\x1b\x25\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b\x28\xb3"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x1b\x08\x02"
  "\x06\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x25\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x24\x28\x1b\x28\x0d\xbb\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x1b\x02\x06\x85\x0c\x08\x1b\x1b\x1b\x1b\x1b\x1b\x25\x1b"
  "\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x85\x1d\x06\x1b\x08\x80\x86\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x25\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\xb2\x1d\x1b\x08\x02\x06\x80\x1b\x1b\x1b\x1b\x25\x1b\x1b"
  "\x1b\x1b\x24\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x02\x02\x02\x02\x83"
  "\x1b\x0c\x1d\x0d\x1c\x0d\x1c\x0d\x1c\x0d\xba\x0d\xb9\x82\x0d\xb8"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x08\x14\x0c\x1b\x1b\x0d\x0c\x80\x1b"
  "\x1b\x81\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x0d\x81"
  "\x82\x83\x84\x85\x86\x02\x02\x02\x08\x14\x0d\x1c\x1b\x2a\x0f\x1b"
  "\x2a\x0f\x1b\x2a\x0f\x1b\x2a\x1b\x2a\x07\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x0d\x1c\x1b\x2a\x0f\x1b\x2a\x0f\x1b\x2a\x0f\x0f\x0d\x1c\x1b\x2a"
  "\x0f\x0f\x0f\x0f\x0f\x0f\x0d\x1c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\xb3\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x2a\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x2a\x1b\x0d\x1b\x2a\x0d\x1b\x2a\x1b"
  "\x0d\x1b\x2a\x0d\x1c\x1b\x0c\x0d\x1b\x08\x89\x08\x02\x1b\x02\x0d"
  "\x1c\x02\x0d\x1b\x08\x88\x1b\x2a\x1b\x0d\x1b\x1b\x02\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x0d\x1b\x2a\x0d\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f"
  "\x0f\x1b\x2a\x0d\x1b\x2a\xb6\x1b\x2a\xb5\x1b\x2a\x0d\x1c\xb7\x2a"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb2\xb1\xb0\x1b"
  "\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x02\x0d\x02\x0d"
  "\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d"
  "\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02\x0d\x02"
  "\x0d\x86\x0d\x85\x0d\x84\x0d\x83\x0d\x82\x0d\x81\xc2\x02\x02\x0d"
  "\xc3\x0d\x80\xb4\x2a\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x0d\x0d\x1b"
  "\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
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
  "\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x72"
  "\x67\x78\x63\x6d\x70\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x12"
  "\x64\x65\x66\x69\x6e\x65\x2d\x69\x6e\x74\x65\x67\x72\x61\x62\x6c"
  "\x65\x06\x71\x75\x6f\x74\x65\x07\x64\x65\x66\x69\x6e\x65\x07\x76"
  "\x65\x63\x74\x6f\x72\x06\x62\x65\x67\x69\x6e\x04\x63\x61\x72\x04"
  "\x63\x64\x72\x04\x04\x6d\x61\x70\x04\x07\x61\x70\x70\x65\x6e\x64"
  "\x04\x0e\x73\x79\x6d\x62\x6f\x6c\x2d\x61\x70\x70\x65\x6e\x64\x04"
  "\xb5\x01\x28\x81\x89\x02\xb4\x01\x26\x81\x8b\x02\xb3\x01\x24\x81"
  "\x87\x02\xb2\x01\x22\x81\x8d\x02\xb1\x01\x20\x81\x8b\x02\xb0\x01"
  "\x1e\x81\x87\x02\xaf\x01\x1c\x81\x8b\x02\xae\x01\x1a\x83\x04\xad"
  "\x01\x18\x81\x89\x02\xac\x01\x16\x81\x87\x02\xab\x01\x14\x81\x87"
  "\x02\xaa\x01\x12\x81\x87\x02\xa9\x01\x10\x81\x87\x02\xa8\x01\x0e"
  "\x81\x87\x02\xa7\x01\x0c\x81\x87\x02\xa6\x01\x0a\x81\x87\x02\xa5"
  "\x01\x08\x81\x85\x02\xa4\x01\x06\x81\x85\x02\xa3\x01\x04\x84\x06"
  "\x27\x3a\x02\x03\x0b\x6d\x61\x6b\x65\x2d\x63\x61\x63\x68\x65\x06"
  "\x0d\x63\x61\x63\x68\x65\x2d\x72\x65\x73\x75\x6c\x74\x03\xb8\x01"
  "\x08\x81\x87\x02\xb7\x01\x06\x81\x85\x02\xb6\x01\x04\x84\x06\x07"
  "\x0f\x02\x06\x63\x61\x63\x68\x65\x09\x73\x65\x74\x2d\x63\x64\x72"
  "\x21\x09\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x0a\x03\x0a\x6d\x61"
  "\x6b\x65\x2d\x6c\x69\x73\x74\x03\x0a\x6c\x61\x73\x74\x2d\x70\x61"
  "\x69\x72\x03\xbf\x01\x10\x81\x83\x02\xbe\x01\x0e\x81\x83\x02\xbd"
  "\x01\x0c\x81\x85\x02\xbc\x01\x0a\x81\x85\x02\xbb\x01\x08\x81\x85"
  "\x02\xba\x01\x06\x81\x83\x02\xb9\x01\x04\x83\x04\x0f\x1c\x0b\x02"
  "\x0a\x02\x09\x03\x13\x77\x69\x74\x68\x6f\x75\x74\x2d\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x73\x02\xd7\x01\x32\x81\x83\x02\xd6\x01"
  "\x30\x81\x83\x02\xd5\x01\x2e\x81\x83\x02\xd4\x01\x2c\x81\x83\x02"
  "\xd3\x01\x2a\x81\x83\x02\xd2\x01\x28\x81\x83\x02\xd1\x01\x26\x81"
  "\x95\x02\xd0\x01\x24\x81\x83\x02\xcf\x01\x22\x81\x83\x02\xce\x01"
  "\x20\x81\x83\x02\xcd\x01\x1e\x81\x83\x02\xcc\x01\x1c\x81\x93\x02"
  "\xcb\x01\x1a\x81\x93\x02\xca\x01\x18\x81\x93\x02\xc9\x01\x16\x81"
  "\x93\x02\xc8\x01\x14\x81\x93\x02\xc7\x01\x12\x81\x93\x02\xc6\x01"
  "\x10\x81\x93\x02\xc5\x01\x0e\x81\x91\x02\xc4\x01\x0c\x81\x91\x02"
  "\xc3\x01\x0a\x81\x93\x02\xc2\x01\x08\x81\x8b\x02\xc1\x01\x06\x81"
  "\x89\x02\xc0\x01\x04\x86\x0a\x31\x3c\x0c\x02\x0c\x73\x74\x72\x69"
  "\x6e\x67\x2d\x73\x65\x74\x21\x0d\x0f\x76\x65\x63\x74\x6f\x72\x2d"
  "\x38\x62\x2d\x73\x65\x74\x21\x0e\x10\x73\x74\x72\x69\x6e\x67\x2d"
  "\x61\x6c\x6c\x6f\x63\x61\x74\x65\x0f\x04\x15\x6d\x61\x6b\x65\x2d"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65\x67\x65\x78\x70\x10"
  "\x03\x0c\x63\x68\x61\x72\x2d\x75\x70\x63\x61\x73\x65\x03\xdc\x01"
  "\x0c\x81\x87\x02\xdb\x01\x0a\x81\x87\x02\xda\x01\x08\x81\x85\x02"
  "\xd9\x01\x06\x81\x87\x02\xd8\x01\x04\x84\x06\x0b\x19\x11\x02\x0f"
  "\x0e\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x72\x65\x66\x12\x0e"
  "\x80\x02\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x13\x04\x10\x04\x0f\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76"
  "\x69\x64\x65\x14\x03\x0e\x73\x74\x72\x69\x6e\x67\x2d\x75\x70\x63"
  "\x61\x73\x65\x03\x19\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76"
  "\x69\x64\x65\x2d\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x15\x07\x10"
  "\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x21\x16"
  "\x03\x18\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65"
  "\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x17\x07\xed\x01\x24\x81\x8f"
  "\x02\xec\x01\x22\x81\x91\x02\xeb\x01\x20\x81\x93\x02\xea\x01\x1e"
  "\x81\x8d\x02\xe9\x01\x1c\x81\x91\x02\xe8\x01\x1a\x81\x91\x02\xe7"
  "\x01\x18\x81\x91\x02\xe6\x01\x16\x81\x91\x02\xe5\x01\x14\x81\x91"
  "\x02\xe4\x01\x12\x81\x91\x02\xe3\x01\x10\x81\x91\x02\xe2\x01\x0e"
  "\x81\x91\x02\xe1\x01\x0c\x81\x8b\x02\xe0\x01\x0a\x81\x89\x02\xdf"
  "\x01\x08\x81\x87\x02\xde\x01\x06\x84\x06\xdd\x01\x04\x81\x85\x02"
  "\x23\x3b\x18\x02\x08\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66"
  "\x19\x0d\x01\x5d\x0f\x13\x14\x63\x68\x61\x72\x2d\x73\x65\x74\x3a"
  "\x72\x65\x2d\x73\x70\x65\x63\x69\x61\x6c\x0d\x02\x06\x20\x73\x75"
  "\x62\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78"
  "\x74\x2d\x63\x68\x61\x72\x2d\x69\x6e\x2d\x73\x65\x74\x07\x16\x03"
  "\x84\x02\x30\x81\x89\x02\x83\x02\x2e\x81\x89\x02\x82\x02\x2c\x81"
  "\x89\x02\x81\x02\x2a\x81\x8b\x02\x80\x02\x28\x81\x89\x02\xff\x01"
  "\x26\x81\x89\x02\xfe\x01\x24\x81\x87\x02\xfd\x01\x22\x81\x87\x02"
  "\xfc\x01\x20\x81\x87\x02\xfb\x01\x1e\x81\x85\x02\xfa\x01\x1c\x81"
  "\x87\x02\xf9\x01\x1a\x81\x85\x02\xf8\x01\x18\x81\x87\x02\xf7\x01"
  "\x16\x81\x87\x02\xf6\x01\x14\x81\x8b\x02\xf5\x01\x12\x81\x8b\x02"
  "\xf4\x01\x10\x81\x89\x02\xf3\x01\x0e\x81\x87\x02\xf2\x01\x0c\x81"
  "\x89\x02\xf1\x01\x0a\x81\x8b\x02\xf0\x01\x08\x81\x89\x02\xef\x01"
  "\x06\x81\x83\x02\xee\x01\x04\x83\x04\x2f\x40\x16\x02\x09\x03\x1f"
  "\x72\x65\x2d\x63\x68\x61\x72\x2d\x70\x61\x74\x74\x65\x72\x6e\x2d"
  "\x3e\x73\x63\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75\x65\x73\x1a\x03"
  "\x18\x73\x63\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75\x65\x73\x2d\x3e"
  "\x63\x68\x61\x72\x2d\x73\x65\x74\x03\x10\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\x2d\x69\x6e\x76\x65\x72\x74\x04\x88\x02\x0a\x81\x87\x02"
  "\x87\x02\x08\x81\x87\x02\x86\x02\x06\x81\x85\x02\x85\x02\x04\x84"
  "\x06\x09\x13\x1b\x02\x0a\x0e\x63\x68\x61\x72\x2d\x3e\x69\x6e\x74"
  "\x65\x67\x65\x72\x01\x2e\x01\x5f\x03\x0d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x3e\x6c\x69\x73\x74\x1c\x02\xa2\x02\x36\x81\x85\x02\xa1\x02"
  "\x34\x81\x85\x02\xa0\x02\x32\x81\x83\x02\x9f\x02\x30\x81\x85\x02"
  "\x9e\x02\x2e\x81\x85\x02\x9d\x02\x2c\x81\x85\x02\x9c\x02\x2a\x81"
  "\x85\x02\x9b\x02\x28\x81\x85\x02\x9a\x02\x26\x81\x85\x02\x99\x02"
  "\x24\x81\x87\x02\x98\x02\x22\x81\x87\x02\x97\x02\x20\x81\x85\x02"
  "\x96\x02\x1e\x81\x85\x02\x95\x02\x1c\x81\x85\x02\x94\x02\x1a\x81"
  "\x85\x02\x93\x02\x18\x81\x85\x02\x92\x02\x16\x81\x85\x02\x91\x02"
  "\x14\x81\x85\x02\x90\x02\x12\x81\x85\x02\x8f\x02\x10\x81\x85\x02"
  "\x8e\x02\x0e\x81\x85\x02\x8d\x02\x0c\x81\x83\x02\x8c\x02\x0a\x81"
  "\x87\x02\x8b\x02\x08\x81\x83\x02\x8a\x02\x06\x81\x83\x02\x89\x02"
  "\x04\x83\x04\x35\x42\x1d\x02\x0b\x08\x6d\x65\x73\x73\x61\x67\x65"
  "\x1e\x25\x45\x72\x72\x6f\x72\x20\x63\x6f\x6d\x70\x69\x6c\x69\x6e"
  "\x67\x20\x72\x65\x67\x75\x6c\x61\x72\x20\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x3a\x20\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74"
  "\x72\x69\x6e\x67\x1f\x04\x11\x61\x63\x63\x65\x73\x73\x2d\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x03\xa5\x02\x08\x81\x85\x02\xa4\x02"
  "\x06\x81\x85\x02\xa3\x02\x04\x84\x06\x07\x11\x20\x02\x0c\x0c\x25"
  "\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x21\xa6\x02\x04\x83\x04"
  "\x03\x22\x02\x0d\x21\xa7\x02\x04\x83\x04\x03\x23\x02\x0e\x21\x0f"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e"
  "\x74\x61\x67\x2e\x31\x24\x02\xab\x02\x0a\x81\x85\x02\xaa\x02\x08"
  "\x81\x83\x02\xa9\x02\x06\x81\x83\x02\xa8\x02\x04\x83\x04\x09\x12"
  "\x25\x02\x0f\x03\x15\x72\x65\x2d\x74\x72\x61\x6e\x73\x6c\x61\x74"
  "\x69\x6f\x6e\x2d\x74\x61\x62\x6c\x65\x26\x04\x16\x25\x6d\x61\x6b"
  "\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65\x67\x65\x78"
  "\x70\x27\x03\xad\x02\x06\x81\x85\x02\xac\x02\x04\x84\x06\x05\x0d"
  "\x28\x02\x10\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x29\x12"
  "\x0d\x55\x6e\x6d\x61\x74\x63\x68\x65\x64\x20\x5c\x28\x02\x07\x6f"
  "\x75\x74\x70\x75\x74\x12\x62\x65\x67\x69\x6e\x2d\x61\x6c\x74\x65"
  "\x72\x6e\x61\x74\x69\x76\x65\x2a\x0b\x69\x6e\x70\x75\x74\x2d\x6c"
  "\x69\x73\x74\x2b\x0d\x63\x75\x72\x72\x65\x6e\x74\x2d\x62\x79\x74"
  "\x65\x2c\x12\x74\x72\x61\x6e\x73\x6c\x61\x74\x69\x6f\x6e\x2d\x74"
  "\x61\x62\x6c\x65\x2d\x0c\x6f\x75\x74\x70\x75\x74\x2d\x68\x65\x61"
  "\x64\x2e\x0c\x6f\x75\x74\x70\x75\x74\x2d\x74\x61\x69\x6c\x2f\x0e"
  "\x6f\x75\x74\x70\x75\x74\x2d\x6c\x65\x6e\x67\x74\x68\x30\x06\x73"
  "\x74\x61\x63\x6b\x31\x0b\x66\x69\x78\x75\x70\x2d\x6a\x75\x6d\x70"
  "\x32\x10\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6e\x75\x6d\x62\x65"
  "\x72\x33\x0e\x70\x65\x6e\x64\x69\x6e\x67\x2d\x65\x78\x61\x63\x74"
  "\x34\x0b\x6c\x61\x73\x74\x2d\x73\x74\x61\x72\x74\x35\x0d\x0c\x63"
  "\x68\x61\x72\x2d\x3e\x61\x73\x63\x69\x69\x36\x2f\x30\x2b\x2c\x2d"
  "\x2e\x31\x32\x33\x2a\x34\x35\x0c\x61\x73\x63\x69\x69\x2d\x3e\x63"
  "\x68\x61\x72\x37\x0e\x70\x61\x74\x74\x65\x72\x6e\x2d\x63\x68\x61"
  "\x72\x73\x38\x10\x03\x26\x03\x1c\x05\x13\x73\x68\x61\x6c\x6c\x6f"
  "\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x04\x03\x12\x63"
  "\x6f\x6d\x70\x69\x6c\x61\x74\x69\x6f\x6e\x2d\x65\x72\x72\x6f\x72"
  "\x1c\x05\x0c\x73\x74\x6f\x72\x65\x2d\x6a\x75\x6d\x70\x21\x39\x04"
  "\x10\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x73\x74\x72\x69\x6e\x67\x3a"
  "\x09\xf4\x02\x90\x01\x81\x85\x02\xf3\x02\x8e\x01\x81\x83\x02\xf2"
  "\x02\x8c\x01\x81\x83\x02\xf1\x02\x8a\x01\x81\x85\x02\xf0\x02\x88"
  "\x01\x81\x87\x02\xef\x02\x86\x01\x81\x85\x02\xee\x02\x84\x01\x81"
  "\x83\x02\xed\x02\x82\x01\x81\x83\x02\xec\x02\x80\x01\x81\x83\x02"
  "\xeb\x02\x7e\x81\x83\x02\xea\x02\x7c\x81\x83\x02\xe9\x02\x7a\x81"
  "\x85\x02\xe8\x02\x78\x81\x83\x02\xe7\x02\x76\x81\x83\x02\xe6\x02"
  "\x74\x81\x89\x02\xe5\x02\x72\x81\x85\x02\xe4\x02\x70\x81\x89\x02"
  "\xe3\x02\x6e\x81\x87\x02\xe2\x02\x6c\x81\x87\x02\xe1\x02\x6a\x81"
  "\x83\x02\xe0\x02\x68\x81\x83\x02\xdf\x02\x66\x81\x83\x02\xde\x02"
  "\x64\x81\x83\x02\xdd\x02\x62\x81\x83\x02\xdc\x02\x60\x81\x83\x02"
  "\xdb\x02\x5e\x81\x83\x02\xda\x02\x5c\x81\x85\x02\xd9\x02\x5a\x81"
  "\x83\x02\xd8\x02\x58\x81\x83\x02\xd7\x02\x56\x81\x85\x02\xd6\x02"
  "\x54\x81\x83\x02\xd5\x02\x52\x81\x83\x02\xd4\x02\x50\x81\x85\x02"
  "\xd3\x02\x4e\x81\x83\x02\xd2\x02\x4c\x81\x83\x02\xd1\x02\x4a\x81"
  "\x85\x02\xd0\x02\x48\x81\x83\x02\xcf\x02\x46\x81\x83\x02\xce\x02"
  "\x44\x81\x85\x02\xcd\x02\x42\x81\x83\x02\xcc\x02\x40\x81\x83\x02"
  "\xcb\x02\x3e\x81\x85\x02\xca\x02\x3c\x81\x83\x02\xc9\x02\x3a\x81"
  "\x83\x02\xc8\x02\x38\x81\x85\x02\xc7\x02\x36\x81\x83\x02\xc6\x02"
  "\x34\x81\x83\x02\xc5\x02\x32\x81\x85\x02\xc4\x02\x30\x81\x83\x02"
  "\xc3\x02\x2e\x81\x83\x02\xc2\x02\x2c\x81\x85\x02\xc1\x02\x2a\x81"
  "\x83\x02\xc0\x02\x28\x81\x83\x02\xbf\x02\x26\x81\x85\x02\xbe\x02"
  "\x24\x81\x83\x02\xbd\x02\x22\x81\x83\x02\xbc\x02\x20\x81\x85\x02"
  "\xbb\x02\x1e\x81\x83\x02\xba\x02\x1c\x81\x83\x02\xb9\x02\x1a\x81"
  "\x85\x02\xb8\x02\x18\x81\x83\x02\xb7\x02\x16\x81\x83\x02\xb6\x02"
  "\x14\x81\x83\x02\xb5\x02\x12\x81\x85\x02\xb4\x02\x10\x81\x83\x02"
  "\xb3\x02\x0e\x81\x83\x02\xb2\x02\x0c\x81\x9f\x02\xb1\x02\x0a\x81"
  "\x9d\x02\xb0\x02\x08\x81\x9b\x02\xaf\x02\x06\x81\x97\x02\xae\x02"
  "\x04\x84\x06\x8f\x01\xcb\x01\x3b\x02\x11\x2b\x02\xf6\x02\x06\x81"
  "\x81\x02\xf5\x02\x04\x82\x02\x05\x0c\x3c\x02\x12\x2b\x02\xf9\x02"
  "\x08\x81\x81\x02\xf8\x02\x06\x81\x81\x02\xf7\x02\x04\x82\x02\x07"
  "\x0f\x3d\x02\x13\x12\x2b\x2d\x03\xfd\x02\x0a\x81\x83\x02\xfc\x02"
  "\x08\x81\x81\x02\xfb\x02\x06\x81\x81\x02\xfa\x02\x04\x82\x02\x09"
  "\x11\x3e\x02\x14\x12\x2b\x2d\x03\x82\x03\x0c\x81\x83\x02\x81\x03"
  "\x0a\x81\x81\x02\x80\x03\x08\x81\x81\x02\xff\x02\x06\x81\x81\x02"
  "\xfe\x02\x04\x82\x02\x0b\x14\x3f\x02\x15\x02\x2b\x02\x2b\x02\x86"
  "\x03\x0a\x81\x81\x02\x85\x03\x08\x81\x81\x02\x84\x03\x06\x81\x81"
  "\x02\x83\x03\x04\x82\x02\x09\x12\x40\x02\x16\x02\x12\x2c\x2b\x03"
  "\x2b\x2d\x03\x8f\x03\x14\x81\x81\x02\x8e\x03\x12\x81\x81\x02\x8d"
  "\x03\x10\x81\x81\x02\x8c\x03\x0e\x81\x81\x02\x8b\x03\x0c\x81\x81"
  "\x02\x8a\x03\x0a\x81\x83\x02\x89\x03\x08\x81\x81\x02\x88\x03\x06"
  "\x81\x81\x02\x87\x03\x04\x82\x02\x13\x20\x41\x02\x17\x02\x2c\x2b"
  "\x03\x2b\x02\x96\x03\x10\x81\x81\x02\x95\x03\x0e\x81\x81\x02\x94"
  "\x03\x0c\x81\x81\x02\x93\x03\x0a\x81\x81\x02\x92\x03\x08\x81\x81"
  "\x02\x91\x03\x06\x81\x81\x02\x90\x03\x04\x82\x02\x0f\x1a\x42\x02"
  "\x18\x2c\x02\x98\x03\x06\x81\x81\x02\x97\x03\x04\x82\x02\x05\x0a"
  "\x43\x02\x19\x12\x2b\x02\x2b\x2d\x03\x02\x0e\x70\x72\x65\x6d\x61"
  "\x74\x75\x72\x65\x2d\x65\x6e\x64\x44\x02\xa1\x03\x14\x81\x83\x02"
  "\xa0\x03\x12\x81\x83\x02\x9f\x03\x10\x81\x83\x02\x9e\x03\x0e\x81"
  "\x81\x02\x9d\x03\x0c\x81\x83\x02\x9c\x03\x0a\x81\x81\x02\x9b\x03"
  "\x08\x81\x81\x02\x9a\x03\x06\x81\x81\x02\x99\x03\x04\x82\x02\x13"
  "\x22\x45\x02\x1a\x03\x37\x04\x05\x6d\x65\x6d\x76\x03\xa3\x03\x06"
  "\x81\x85\x02\xa2\x03\x04\xfe\x05\x05\x0d\x46\x02\x1b\x02\x09\x2f"
  "\x30\x03\x2f\x30\x03\xa9\x03\x0e\x81\x83\x02\xa8\x03\x0c\x81\x83"
  "\x02\xa7\x03\x0a\x81\x85\x02\xa6\x03\x08\x81\x85\x02\xa5\x03\x06"
  "\x81\x85\x02\xa4\x03\x04\x83\x04\x0d\x19\x47\x02\x1c\x02\x09\x34"
  "\x2f\x30\x04\x2f\x30\x03\xb0\x03\x10\x81\x83\x02\xaf\x03\x0e\x81"
  "\x83\x02\xae\x03\x0c\x81\x85\x02\xad\x03\x0a\x81\x85\x02\xac\x03"
  "\x08\x81\x85\x02\xab\x03\x06\x81\x83\x02\xaa\x03\x04\x83\x04\x0f"
  "\x1d\x48\x02\x1d\x02\x09\x35\x34\x2f\x30\x05\x2f\x30\x03\xba\x03"
  "\x16\x81\x83\x02\xb9\x03\x14\x81\x83\x02\xb8\x03\x12\x81\x85\x02"
  "\xb7\x03\x10\x81\x85\x02\xb6\x03\x0e\x81\x85\x02\xb5\x03\x0c\x81"
  "\x83\x02\xb4\x03\x0a\x81\x83\x02\xb3\x03\x08\x81\x85\x02\xb2\x03"
  "\x06\x81\x83\x02\xb1\x03\x04\x83\x04\x15\x24\x49\x02\x1e\x30\x02"
  "\xbc\x03\x06\x81\x81\x02\xbb\x03\x04\x82\x02\x05\x0a\x4a\x02\x1f"
  "\x2f\x30\x03\xbf\x03\x08\x81\x83\x02\xbe\x03\x06\x81\x81\x02\xbd"
  "\x03\x04\x82\x02\x07\x0d\x4b\x02\x20\xc0\x03\x04\x83\x04\x03\x4c"
  "\x02\x21\xc3\x03\x08\x81\x83\x02\xc2\x03\x06\x81\x83\x02\xc1\x03"
  "\x04\x83\x04\x07\x0c\x4d\x02\x22\x02\x0a\xcb\x03\x12\x81\x85\x02"
  "\xca\x03\x10\x81\x87\x02\xc9\x03\x0e\x81\x87\x02\xc8\x03\x0c\x81"
  "\x85\x02\xc7\x03\x0a\x81\x87\x02\xc6\x03\x08\x81\x87\x02\xc5\x03"
  "\x06\x81\x87\x02\xc4\x03\x04\x84\x06\x11\x18\x4e\x02\x23\x02\x0a"
  "\x05\x0d\x63\x6f\x6d\x70\x75\x74\x65\x2d\x6a\x75\x6d\x70\x4f\x02"
  "\xd6\x03\x18\x81\x87\x02\xd5\x03\x16\x81\x87\x02\xd4\x03\x14\x81"
  "\x87\x02\xd3\x03\x12\x81\x87\x02\xd2\x03\x10\x81\x87\x02\xd1\x03"
  "\x0e\x81\x87\x02\xd0\x03\x0c\x81\x89\x02\xcf\x03\x0a\x81\x89\x02"
  "\xce\x03\x08\x81\x87\x02\xcd\x03\x06\x81\x87\x02\xcc\x03\x04\x85"
  "\x08\x17\x21\x50\x02\x24\x02\x09\x30\x02\x30\x02\x05\x4f\x02\xdf"
  "\x03\x14\x81\x87\x02\xde\x03\x12\x81\x87\x02\xdd\x03\x10\x81\x87"
  "\x02\xdc\x03\x0e\x81\x89\x02\xdb\x03\x0c\x81\x87\x02\xda\x03\x0a"
  "\x81\x87\x02\xd9\x03\x08\x81\x87\x02\xd8\x03\x06\x81\x89\x02\xd7"
  "\x03\x04\x85\x08\x13\x21\x51\x02\x25\x81\x02\x04\x14\x03\x15\x03"
  "\x17\x04\xe3\x03\x0a\x81\x89\x02\xe2\x03\x08\x81\x89\x02\xe1\x03"
  "\x06\x81\x89\x02\xe0\x03\x04\x85\x08\x09\x14\x17\x02\x26\x31\x02"
  "\xe5\x03\x06\x81\x81\x02\xe4\x03\x04\x82\x02\x05\x0c\x15\x02\x27"
  "\x17\x72\x65\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x6f\x66\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x73\x14\x31\x03\x03\x07\x6c\x65\x6e\x67"
  "\x74\x68\x52\x02\xe9\x03\x0a\x81\x83\x02\xe8\x03\x08\x81\x85\x02"
  "\xe7\x03\x06\x81\x81\x02\xe6\x03\x04\x82\x02\x09\x13\x53\x02\x28"
  "\x31\x02\x03\x52\x02\xeb\x03\x06\x81\x81\x02\xea\x03\x04\x82\x02"
  "\x05\x0d\x54\x02\x29\x02\x31\x02\x31\x02\xee\x03\x08\x81\x83\x02"
  "\xed\x03\x06\x81\x83\x02\xec\x03\x04\xff\x03\x07\x0f\x55\x02\x2a"
  "\x06\x61\x70\x70\x6c\x79\x31\x02\x31\x02\xf4\x03\x0e\x81\x85\x02"
  "\xf3\x03\x0c\x81\x85\x02\xf2\x03\x0a\x81\x85\x02\xf1\x03\x08\x81"
  "\x83\x02\xf0\x03\x06\x81\x83\x02\xef\x03\x04\x83\x04\x0d\x17\x56"
  "\x02\x2b\x31\x02\x04\x09\x6c\x69\x73\x74\x2d\x72\x65\x66\x57\x02"
  "\xf9\x03\x0c\x81\x83\x02\xf8\x03\x0a\x81\x83\x02\xf7\x03\x08\x81"
  "\x83\x02\xf6\x03\x06\x81\x87\x02\xf5\x03\x04\x83\x04\x0b\x15\x58"
  "\x02\x2c\x15\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73\x79\x6e\x74\x61"
  "\x78\x2d\x65\x6e\x74\x72\x79\x03\x37\x03\x0d\x63\x68\x61\x72\x2d"
  "\x3e\x73\x74\x72\x69\x6e\x67\x03\xfc\x03\x08\x81\x85\x02\xfb\x03"
  "\x06\x81\x83\x02\xfa\x03\x04\x83\x04\x07\x10\x59\x02\x2d\x29\x12"
  "\x2c\x2b\x03\x2b\x2d\x2c\x38\x05\x88\x04\x1a\x81\x81\x02\x87\x04"
  "\x18\x81\x83\x02\x86\x04\x16\x81\x81\x02\x85\x04\x14\x81\x81\x02"
  "\x84\x04\x12\x81\x81\x02\x83\x04\x10\x81\x81\x02\x82\x04\x0e\x81"
  "\x81\x02\x81\x04\x0c\x81\x81\x02\x80\x04\x0a\x81\x83\x02\xff\x03"
  "\x08\x81\x81\x02\xfe\x03\x06\x81\x81\x02\xfd\x03\x04\x82\x02\x19"
  "\x28\x5a\x02\x2e\x24\x50\x72\x65\x6d\x61\x74\x75\x72\x65\x20\x65"
  "\x6e\x64\x20\x6f\x66\x20\x72\x65\x67\x75\x6c\x61\x72\x20\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x03\x1c\x02\x89\x04\x04\x82\x02"
  "\x03\x0a\x5b\x02\x2f\x12\x01\x2b\x01\x2c\x01\x40\x01\x5f\x02\x0a"
  "\x80\x01\x09\x35\x34\x2f\x30\x05\x2b\x34\x2f\x30\x2c\x2d\x07\x07"
  "\x0d\x69\x6e\x70\x75\x74\x2d\x6d\x61\x74\x63\x68\x3f\x0a\x02\xc4"
  "\x04\x78\x81\x8b\x02\xc3\x04\x76\x81\x8d\x02\xc2\x04\x74\x81\x8b"
  "\x02\xc1\x04\x72\x81\x8b\x02\xc0\x04\x70\x81\x81\x02\xbf\x04\x6e"
  "\x81\x83\x02\xbe\x04\x6c\x81\x83\x02\xbd\x04\x6a\x81\x83\x02\xbc"
  "\x04\x68\x81\x81\x02\xbb\x04\x66\x81\x81\x02\xba\x04\x64\x81\x81"
  "\x02\xb9\x04\x62\x81\x81\x02\xb8\x04\x60\x81\x81\x02\xb7\x04\x5e"
  "\x81\x81\x02\xb6\x04\x5c\x81\x81\x02\xb5\x04\x5a\x81\x83\x02\xb4"
  "\x04\x58\x81\x83\x02\xb3\x04\x56\x81\x83\x02\xb2\x04\x54\x81\x81"
  "\x02\xb1\x04\x52\x81\x81\x02\xb0\x04\x50\x81\x81\x02\xaf\x04\x4e"
  "\x81\x83\x02\xae\x04\x4c\x81\x83\x02\xad\x04\x4a\x81\x83\x02\xac"
  "\x04\x48\x81\x81\x02\xab\x04\x46\x81\x83\x02\xaa\x04\x44\x81\x81"
  "\x02\xa9\x04\x42\x81\x81\x02\xa8\x04\x40\x81\x81\x02\xa7\x04\x3e"
  "\x81\x83\x02\xa6\x04\x3c\x81\x83\x02\xa5\x04\x3a\x81\x83\x02\xa4"
  "\x04\x38\x81\x81\x02\xa3\x04\x36\x81\x83\x02\xa2\x04\x34\x81\x81"
  "\x02\xa1\x04\x32\x81\x81\x02\xa0\x04\x30\x81\x81\x02\x9f\x04\x2e"
  "\x81\x81\x02\x9e\x04\x2c\x81\x81\x02\x9d\x04\x2a\x81\x81\x02\x9c"
  "\x04\x28\x81\x81\x02\x9b\x04\x26\x81\x81\x02\x9a\x04\x24\x81\x83"
  "\x02\x99\x04\x22\x81\x83\x02\x98\x04\x20\x81\x83\x02\x97\x04\x1e"
  "\x81\x81\x02\x96\x04\x1c\x81\x81\x02\x95\x04\x1a\x81\x81\x02\x94"
  "\x04\x18\x81\x83\x02\x93\x04\x16\x81\x83\x02\x92\x04\x14\x81\x83"
  "\x02\x91\x04\x12\x81\x81\x02\x90\x04\x10\x81\x81\x02\x8f\x04\x0e"
  "\x81\x83\x02\x8e\x04\x0c\x81\x81\x02\x8d\x04\x0a\x81\x81\x02\x8c"
  "\x04\x08\x81\x81\x02\x8b\x04\x06\x82\x02\x8a\x04\x04\x81\x81\x02"
  "\x77\x99\x01\x5c\x02\x30\x02\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73"
  "\x65\x74\x21\x5d\x38\x02\x03\x36\x02\xc8\x04\x0a\x81\x85\x02\xc7"
  "\x04\x08\x81\x87\x02\xc6\x04\x06\x81\x85\x02\xc5\x04\x04\x84\x06"
  "\x09\x13\x5e\x02\x31\x29\x2c\x2b\x03\x2b\x2c\x10\x62\x61\x63\x6b"
  "\x73\x6c\x61\x73\x68\x2d\x63\x68\x61\x72\x73\x5f\x04\x02\x44\x02"
  "\xd3\x04\x18\x81\x81\x02\xd2\x04\x16\x81\x83\x02\xd1\x04\x14\x81"
  "\x81\x02\xd0\x04\x12\x81\x81\x02\xcf\x04\x10\x81\x81\x02\xce\x04"
  "\x0e\x81\x81\x02\xcd\x04\x0c\x81\x81\x02\xcc\x04\x0a\x81\x81\x02"
  "\xcb\x04\x08\x81\x81\x02\xca\x04\x06\x81\x81\x02\xc9\x04\x04\x82"
  "\x02\x17\x28\x60\x02\x32\x02\x5d\x5f\x02\x03\x36\x02\xd7\x04\x0a"
  "\x81\x85\x02\xd6\x04\x08\x81\x87\x02\xd5\x04\x06\x81\x85\x02\xd4"
  "\x04\x04\x84\x06\x09\x13\x5d\x02\x33\x01\x5d\x02\x09\x12\x01\x2a"
  "\x01\x7d\x34\x2f\x30\x04\x2b\x2d\x2f\x30\x05\x02\x0c\x6e\x6f\x72"
  "\x6d\x61\x6c\x2d\x63\x68\x61\x72\x61\x05\x0a\x04\x0a\x04\xec\x04"
  "\x2c\x81\x85\x02\xeb\x04\x2a\x81\x87\x02\xea\x04\x28\x81\x85\x02"
  "\xe9\x04\x26\x81\x85\x02\xe8\x04\x24\x81\x81\x02\xe7\x04\x22\x81"
  "\x81\x02\xe6\x04\x20\x81\x83\x02\xe5\x04\x1e\x81\x83\x02\xe4\x04"
  "\x1c\x81\x83\x02\xe3\x04\x1a\x81\x81\x02\xe2\x04\x18\x81\x81\x02"
  "\xe1\x04\x16\x81\x81\x02\xe0\x04\x14\x81\x81\x02\xdf\x04\x12\x82"
  "\x02\xde\x04\x10\x81\x87\x02\xdd\x04\x0e\x81\x89\x02\xdc\x04\x0c"
  "\x81\x87\x02\xdb\x04\x0a\x81\x87\x02\xda\x04\x08\x81\x87\x02\xd9"
  "\x04\x06\x81\x81\x02\xd8\x04\x04\x81\x81\x02\x2b\x49\x62\x02\x34"
  "\x02\x09\x34\x2f\x30\x04\x35\x2f\x30\x04\x02\x61\x02\xf4\x04\x12"
  "\x81\x81\x02\xf3\x04\x10\x81\x81\x02\xf2\x04\x0e\x81\x83\x02\xf1"
  "\x04\x0c\x81\x83\x02\xf0\x04\x0a\x81\x83\x02\xef\x04\x08\x81\x81"
  "\x02\xee\x04\x06\x81\x81\x02\xed\x04\x04\x82\x02\x11\x24\x63\x02"
  "\x35\x02\x09\x0b\x35\x34\x2f\x30\x05\x2f\x30\x03\xfe\x04\x16\x81"
  "\x81\x02\xfd\x04\x14\x81\x81\x02\xfc\x04\x12\x81\x83\x02\xfb\x04"
  "\x10\x81\x83\x02\xfa\x04\x0e\x81\x83\x02\xf9\x04\x0c\x81\x81\x02"
  "\xf8\x04\x0a\x81\x81\x02\xf7\x04\x08\x81\x83\x02\xf6\x04\x06\x81"
  "\x81\x02\xf5\x04\x04\x82\x02\x15\x25\x64\x02\x36\x02\x09\x34\x2f"
  "\x30\x04\x2f\x30\x03\x04\x16\x64\x65\x66\x69\x6e\x65\x2d\x62\x61"
  "\x63\x6b\x73\x6c\x61\x73\x68\x2d\x63\x68\x61\x72\x65\x02\x86\x05"
  "\x12\x81\x83\x02\x85\x05\x10\x81\x83\x02\x84\x05\x0e\x81\x85\x02"
  "\x83\x05\x0c\x81\x85\x02\x82\x05\x0a\x81\x85\x02\x81\x05\x08\x81"
  "\x83\x02\x80\x05\x06\x81\x83\x02\xff\x04\x04\x84\x06\x11\x22\x66"
  "\x02\x37\x02\x09\x35\x34\x2f\x30\x05\x2f\x30\x03\x04\x65\x02\x91"
  "\x05\x18\x81\x83\x02\x90\x05\x16\x81\x83\x02\x8f\x05\x14\x81\x85"
  "\x02\x8e\x05\x12\x81\x85\x02\x8d\x05\x10\x81\x85\x02\x8c\x05\x0e"
  "\x81\x83\x02\x8b\x05\x0c\x81\x83\x02\x8a\x05\x0a\x81\x85\x02\x89"
  "\x05\x08\x81\x83\x02\x88\x05\x06\x81\x83\x02\x87\x05\x04\x84\x06"
  "\x17\x29\x67\x02\x38\x02\x12\x09\x19\x35\x34\x2f\x30\x2b\x06\x2f"
  "\x30\x2b\x2d\x05\x02\x44\x03\x14\x61\x73\x63\x69\x69\x2d\x3e\x73"
  "\x79\x6e\x74\x61\x78\x2d\x65\x6e\x74\x72\x79\x68\x03\xaa\x05\x34"
  "\x81\x81\x02\xa9\x05\x32\x81\x81\x02\xa8\x05\x30\x81\x83\x02\xa7"
  "\x05\x2e\x81\x83\x02\xa6\x05\x2c\x81\x83\x02\xa5\x05\x2a\x81\x81"
  "\x02\xa4\x05\x28\x81\x83\x02\xa3\x05\x26\x81\x83\x02\xa2\x05\x24"
  "\x81\x83\x02\xa1\x05\x22\x81\x85\x02\xa0\x05\x20\x81\x87\x02\x9f"
  "\x05\x1e\x81\x85\x02\x9e\x05\x1c\x81\x85\x02\x9d\x05\x1a\x81\x85"
  "\x02\x9c\x05\x18\x81\x81\x02\x9b\x05\x16\x81\x81\x02\x9a\x05\x14"
  "\x81\x83\x02\x99\x05\x12\x81\x83\x02\x98\x05\x10\x81\x83\x02\x97"
  "\x05\x0e\x81\x81\x02\x96\x05\x0c\x81\x81\x02\x95\x05\x0a\x81\x83"
  "\x02\x94\x05\x08\x81\x81\x02\x93\x05\x06\x82\x02\x92\x05\x04\x81"
  "\x83\x02\x33\x4e\x69\x02\x39\x02\x12\x09\x1a\x35\x34\x2f\x30\x2b"
  "\x06\x2f\x30\x2b\x2d\x05\x02\x44\x03\x68\x03\xc3\x05\x34\x81\x81"
  "\x02\xc2\x05\x32\x81\x81\x02\xc1\x05\x30\x81\x83\x02\xc0\x05\x2e"
  "\x81\x83\x02\xbf\x05\x2c\x81\x83\x02\xbe\x05\x2a\x81\x81\x02\xbd"
  "\x05\x28\x81\x83\x02\xbc\x05\x26\x81\x83\x02\xbb\x05\x24\x81\x83"
  "\x02\xba\x05\x22\x81\x85\x02\xb9\x05\x20\x81\x87\x02\xb8\x05\x1e"
  "\x81\x85\x02\xb7\x05\x1c\x81\x85\x02\xb6\x05\x1a\x81\x85\x02\xb5"
  "\x05\x18\x81\x81\x02\xb4\x05\x16\x81\x81\x02\xb3\x05\x14\x81\x83"
  "\x02\xb2\x05\x12\x81\x83\x02\xb1\x05\x10\x81\x83\x02\xb0\x05\x0e"
  "\x81\x81\x02\xaf\x05\x0c\x81\x81\x02\xae\x05\x0a\x81\x83\x02\xad"
  "\x05\x08\x81\x81\x02\xac\x05\x06\x82\x02\xab\x05\x04\x81\x83\x02"
  "\x33\x4e\x6a\x02\x3a\x35\x02\x04\x14\x64\x65\x66\x69\x6e\x65\x2d"
  "\x70\x61\x74\x74\x65\x72\x6e\x2d\x63\x68\x61\x72\x6b\x02\x61\x04"
  "\x0e\x72\x65\x70\x65\x61\x74\x65\x72\x2d\x6c\x6f\x6f\x70\x6c\x04"
  "\xc6\x05\x08\x81\x83\x02\xc5\x05\x06\x81\x83\x02\xc4\x05\x04\x85"
  "\x08\x07\x13\x6d\x02\x3b\x01\x40\x01\x2c\x12\x01\x2b\x2b\x02\x2b"
  "\x2d\x03\x04\x10\x72\x65\x70\x65\x61\x74\x65\x72\x2d\x66\x69\x6e"
  "\x69\x73\x68\x6e\x04\x0a\x04\x6c\x04\xe0\x05\x36\x81\x85\x02\xdf"
  "\x05\x34\x81\x85\x02\xde\x05\x32\x81\x85\x02\xdd\x05\x30\x81\x85"
  "\x02\xdc\x05\x2e\x81\x85\x02\xdb\x05\x2c\x81\x85\x02\xda\x05\x2a"
  "\x81\x85\x02\xd9\x05\x28\x81\x89\x02\xd8\x05\x26\x81\x8b\x02\xd7"
  "\x05\x24\x81\x89\x02\xd6\x05\x22\x81\x89\x02\xd5\x05\x20\x81\x85"
  "\x02\xd4\x05\x1e\x81\x85\x02\xd3\x05\x1c\x81\x85\x02\xd2\x05\x1a"
  "\x81\x85\x02\xd1\x05\x18\x81\x89\x02\xd0\x05\x16\x81\x8b\x02\xcf"
  "\x05\x14\x81\x89\x02\xce\x05\x12\x81\x89\x02\xcd\x05\x10\x81\x85"
  "\x02\xcc\x05\x0e\x81\x89\x02\xcb\x05\x0c\x81\x8b\x02\xca\x05\x0a"
  "\x81\x89\x02\xc9\x05\x08\x81\x89\x02\xc8\x05\x06\x81\x85\x02\xc7"
  "\x05\x04\x84\x06\x35\x4b\x6f\x02\x3c\x0a\x02\x09\x09\x34\x2f\x30"
  "\x04\x30\x35\x2f\x04\x05\x0d\x69\x6e\x73\x65\x72\x74\x2d\x6a\x75"
  "\x6d\x70\x21\x70\x05\x4f\x03\xfc\x05\x3a\x81\x87\x02\xfb\x05\x38"
  "\x81\x87\x02\xfa\x05\x36\x81\x85\x02\xf9\x05\x34\x81\x85\x02\xf8"
  "\x05\x32\x81\x85\x02\xf7\x05\x30\x81\x85\x02\xf6\x05\x2e\x81\x87"
  "\x02\xf5\x05\x2c\x81\x87\x02\xf4\x05\x2a\x81\x87\x02\xf3\x05\x28"
  "\x81\x85\x02\xf2\x05\x26\x81\x85\x02\xf1\x05\x24\x81\x87\x02\xf0"
  "\x05\x22\x81\x87\x02\xef\x05\x20\x81\x87\x02\xee\x05\x1e\x81\x85"
  "\x02\xed\x05\x1c\x81\x85\x02\xec\x05\x1a\x81\x87\x02\xeb\x05\x18"
  "\x81\x87\x02\xea\x05\x16\x81\x87\x02\xe9\x05\x14\x81\x85\x02\xe8"
  "\x05\x12\x84\x06\xe7\x05\x10\x81\x8b\x02\xe6\x05\x0e\x81\x89\x02"
  "\xe5\x05\x0c\x81\x89\x02\xe4\x05\x0a\x81\x8b\x02\xe3\x05\x08\x81"
  "\x87\x02\xe2\x05\x06\x84\x06\xe1\x05\x04\x81\x85\x02\x39\x51\x71"
  "\x02\x3d\x14\x72\x65\x2d\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x61"
  "\x64\x6a\x6f\x69\x6e\x21\x02\x5e\x20\x09\x0d\x0c\x01\x5e\x21\x12"
  "\x01\x5f\x2b\x35\x34\x2f\x30\x06\x2b\x2d\x2f\x30\x37\x06\x02\x44"
  "\x03\x37\x04\x0a\x04\x0c\x6d\x61\x6b\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x03\x36\x04\x09\x66"
  "\x6f\x72\x2d\x65\x61\x63\x68\x37\x03\x11\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x73\x04\x14\x72\x65\x2d\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x2d\x63\x68\x61\x72\x2d\x73\x65\x74\x36"
  "\x03\x3a\x04\x0c\xc5\x06\x94\x01\x81\x85\x02\xc4\x06\x92\x01\x81"
  "\x91\x02\xc3\x06\x90\x01\x81\x8f\x02\xc2\x06\x8e\x01\x81\x8d\x02"
  "\xc1\x06\x8c\x01\x81\x8b\x02\xc0\x06\x8a\x01\x81\x87\x02\xbf\x06"
  "\x88\x01\x81\x85\x02\xbe\x06\x86\x01\x81\x85\x02\xbd\x06\x84\x01"
  "\x81\x85\x02\xbc\x06\x82\x01\x81\x89\x02\xbb\x06\x80\x01\x81\x89"
  "\x02\xba\x06\x7e\x81\x8b\x02\xb9\x06\x7c\x81\x8b\x02\xb8\x06\x7a"
  "\x81\x8b\x02\xb7\x06\x78\x81\x89\x02\xb6\x06\x76\x81\x89\x02\xb5"
  "\x06\x74\x81\x83\x02\xb4\x06\x72\x81\x83\x02\xb3\x06\x70\x81\x83"
  "\x02\xb2\x06\x6e\x81\x85\x02\xb1\x06\x6c\x81\x87\x02\xb0\x06\x6a"
  "\x81\x85\x02\xaf\x06\x68\x81\x85\x02\xae\x06\x66\x81\x85\x02\xad"
  "\x06\x64\x81\x83\x02\xac\x06\x62\x81\x83\x02\xab\x06\x60\x81\x83"
  "\x02\xaa\x06\x5e\x81\x83\x02\xa9\x06\x5c\x81\x87\x02\xa8\x06\x5a"
  "\x81\x87\x02\xa7\x06\x58\x81\x89\x02\xa6\x06\x56\x81\x89\x02\xa5"
  "\x06\x54\x81\x89\x02\xa4\x06\x52\x81\x87\x02\xa3\x06\x50\x81\x87"
  "\x02\xa2\x06\x4e\x81\x89\x02\xa1\x06\x4c\x81\x89\x02\xa0\x06\x4a"
  "\x81\x89\x02\x9f\x06\x48\x81\x87\x02\x9e\x06\x46\x81\x87\x02\x9d"
  "\x06\x44\x81\x87\x02\x9c\x06\x42\x81\x87\x02\x9b\x06\x40\x81\x87"
  "\x02\x9a\x06\x3e\x81\x87\x02\x99\x06\x3c\x81\x85\x02\x98\x06\x3a"
  "\x81\x85\x02\x97\x06\x38\x81\x87\x02\x96\x06\x36\x81\x87\x02\x95"
  "\x06\x34\x81\x87\x02\x94\x06\x32\x81\x85\x02\x93\x06\x30\x81\x85"
  "\x02\x92\x06\x2e\x81\x87\x02\x91\x06\x2c\x81\x85\x02\x90\x06\x2a"
  "\x81\x85\x02\x8f\x06\x28\x81\x8b\x02\x8e\x06\x26\x81\x8d\x02\x8d"
  "\x06\x24\x81\x8b\x02\x8c\x06\x22\x81\x8b\x02\x8b\x06\x20\x81\x85"
  "\x02\x8a\x06\x1e\x81\x83\x02\x89\x06\x1c\x81\x83\x02\x88\x06\x1a"
  "\x81\x83\x02\x87\x06\x18\x81\x83\x02\x86\x06\x16\x81\x85\x02\x85"
  "\x06\x14\x81\x83\x02\x84\x06\x12\x81\x87\x02\x83\x06\x10\x81\x89"
  "\x02\x82\x06\x0e\x81\x87\x02\x81\x06\x0c\x81\x87\x02\x80\x06\x0a"
  "\x81\x81\x02\xff\x05\x08\x81\x81\x02\xfe\x05\x06\x82\x02\xfd\x05"
  "\x04\x81\x81\x02\x93\x01\xca\x01\x3a\x02\x3e\x02\x11\x4e\x65\x73"
  "\x74\x69\x6e\x67\x20\x74\x6f\x6f\x20\x64\x65\x65\x70\x09\x0e\x34"
  "\x2f\x30\x35\x32\x33\x2a\x08\x14\x31\x33\x2f\x30\x2a\x32\x08\x03"
  "\x52\x06\x0c\x73\x74\x61\x63\x6b\x2d\x70\x75\x73\x68\x21\x03\x1c"
  "\x04\xe5\x06\x42\x81\x81\x02\xe4\x06\x40\x81\x83\x02\xe3\x06\x3e"
  "\x81\x81\x02\xe2\x06\x3c\x81\x81\x02\xe1\x06\x3a\x81\x81\x02\xe0"
  "\x06\x38\x81\x81\x02\xdf\x06\x36\x81\x81\x02\xde\x06\x34\x81\x81"
  "\x02\xdd\x06\x32\x81\x8b\x02\xdc\x06\x30\x81\x89\x02\xdb\x06\x2e"
  "\x81\x87\x02\xda\x06\x2c\x81\x85\x02\xd9\x06\x2a\x81\x83\x02\xd8"
  "\x06\x28\x81\x81\x02\xd7\x06\x26\x81\x81\x02\xd6\x06\x24\x81\x83"
  "\x02\xd5\x06\x22\x81\x83\x02\xd4\x06\x20\x81\x83\x02\xd3\x06\x1e"
  "\x81\x81\x02\xd2\x06\x1c\x81\x81\x02\xd1\x06\x1a\x81\x81\x02\xd0"
  "\x06\x18\x81\x83\x02\xcf\x06\x16\x81\x83\x02\xce\x06\x14\x81\x83"
  "\x02\xcd\x06\x12\x81\x81\x02\xcc\x06\x10\x81\x83\x02\xcb\x06\x0e"
  "\x81\x81\x02\xca\x06\x0c\x81\x83\x02\xc9\x06\x0a\x81\x81\x02\xc8"
  "\x06\x08\x81\x85\x02\xc7\x06\x06\x81\x81\x02\xc6\x06\x04\x82\x02"
  "\x41\x61\x72\x02\x3f\x02\x09\x0f\x16\x55\x6e\x6d\x61\x74\x63\x68"
  "\x65\x64\x20\x63\x6c\x6f\x73\x65\x20\x70\x61\x72\x65\x6e\x35\x32"
  "\x2a\x34\x2f\x30\x07\x31\x32\x30\x14\x2f\x06\x03\x1c\x03\x0b\x73"
  "\x74\x61\x63\x6b\x2d\x70\x6f\x70\x21\x73\x05\x39\x04\xfc\x06\x30"
  "\x81\x89\x02\xfb\x06\x2e\x81\x89\x02\xfa\x06\x2c\x81\x8b\x02\xf9"
  "\x06\x2a\x81\x8b\x02\xf8\x06\x28\x81\x8b\x02\xf7\x06\x26\x81\x89"
  "\x02\xf6\x06\x24\x81\x89\x02\xf5\x06\x22\x81\x8b\x02\xf4\x06\x20"
  "\x81\x8b\x02\xf3\x06\x1e\x81\x8b\x02\xf2\x06\x1c\x81\x89\x02\xf1"
  "\x06\x1a\x81\x89\x02\xf0\x06\x18\x81\x89\x02\xef\x06\x16\x81\x89"
  "\x02\xee\x06\x14\x81\x89\x02\xed\x06\x12\x86\x0a\xec\x06\x10\x81"
  "\x87\x02\xeb\x06\x0e\x81\x83\x02\xea\x06\x0c\x81\x81\x02\xe9\x06"
  "\x0a\x81\x81\x02\xe8\x06\x08\x82\x02\xe7\x06\x06\x81\x81\x02\xe6"
  "\x06\x04\x81\x81\x02\x2f\x4d\x74\x02\x40\x02\x09\x32\x2f\x30\x34"
  "\x35\x2a\x07\x30\x2a\x32\x2f\x05\x05\x70\x05\x39\x03\x9b\x07\x40"
  "\x81\x87\x02\x9a\x07\x3e\x81\x83\x02\x99\x07\x3c\x81\x81\x02\x98"
  "\x07\x3a\x81\x83\x02\x97\x07\x38\x81\x81\x02\x96\x07\x36\x81\x81"
  "\x02\x95\x07\x34\x81\x81\x02\x94\x07\x32\x81\x81\x02\x93\x07\x30"
  "\x81\x81\x02\x92\x07\x2e\x81\x83\x02\x91\x07\x2c\x81\x83\x02\x90"
  "\x07\x2a\x81\x83\x02\x8f\x07\x28\x81\x81\x02\x8e\x07\x26\x81\x81"
  "\x02\x8d\x07\x24\x81\x83\x02\x8c\x07\x22\x81\x83\x02\x8b\x07\x20"
  "\x81\x83\x02\x8a\x07\x1e\x81\x81\x02\x89\x07\x1c\x81\x81\x02\x88"
  "\x07\x1a\x81\x83\x02\x87\x07\x18\x81\x83\x02\x86\x07\x16\x81\x83"
  "\x02\x85\x07\x14\x81\x81\x02\x84\x07\x12\x81\x83\x02\x83\x07\x10"
  "\x81\x81\x02\x82\x07\x0e\x81\x81\x02\x81\x07\x0c\x81\x81\x02\x80"
  "\x07\x0a\x81\x81\x02\xff\x06\x08\x81\x87\x02\xfe\x06\x06\x81\x83"
  "\x02\xfd\x06\x04\x82\x02\x3f\x5a\x75\x02\x41\x02\x09\x10\x35\x34"
  "\x2f\x30\x05\x33\x31\x2f\x30\x05\x03\x0c\x64\x69\x67\x69\x74\x2d"
  "\x3e\x63\x68\x61\x72\x04\x65\x03\x52\x02\x61\x04\x57\x06\xb5\x07"
  "\x36\x81\x87\x02\xb4\x07\x34\x81\x87\x02\xb3\x07\x32\x81\x87\x02"
  "\xb2\x07\x30\x81\x87\x02\xb1\x07\x2e\x81\x87\x02\xb0\x07\x2c\x81"
  "\x87\x02\xaf\x07\x2a\x81\x89\x02\xae\x07\x28\x81\x89\x02\xad\x07"
  "\x26\x81\x89\x02\xac\x07\x24\x81\x87\x02\xab\x07\x22\x81\x87\x02"
  "\xaa\x07\x20\x81\x89\x02\xa9\x07\x1e\x81\x89\x02\xa8\x07\x1c\x81"
  "\x89\x02\xa7\x07\x1a\x81\x87\x02\xa6\x07\x18\x81\x87\x02\xa5\x07"
  "\x16\x81\x89\x02\xa4\x07\x14\x81\x87\x02\xa3\x07\x12\x81\x8b\x02"
  "\xa2\x07\x10\x81\x87\x02\xa1\x07\x0e\x81\x83\x02\xa0\x07\x0c\x81"
  "\x85\x02\x9f\x07\x0a\x81\x83\x02\x9e\x07\x08\x81\x83\x02\x9d\x07"
  "\x06\x81\x83\x02\x9c\x07\x04\x83\x04\x35\x55\x57\x02\x42\x01\x31"
  "\x11\x81\x80\x04\x81\x80\x02\x81\x02\x19\x0e\x20\x2e\x77\x5f\x28"
  "\x29\x27\x22\x24\x5c\x2f\x3c\x3e\x02\x10\x6e\x6f\x74\x2d\x73\x79"
  "\x6e\x74\x61\x78\x2d\x73\x70\x65\x63\x52\x0c\x73\x79\x6e\x74\x61"
  "\x78\x2d\x73\x70\x65\x63\x19\x0a\x64\x75\x70\x6c\x69\x63\x61\x74"
  "\x65\x09\x0c\x73\x74\x6f\x70\x2d\x6d\x65\x6d\x6f\x72\x79\x0d\x73"
  "\x74\x61\x72\x74\x2d\x6d\x65\x6d\x6f\x72\x79\x0d\x6e\x6f\x74\x2d"
  "\x63\x68\x61\x72\x2d\x73\x65\x74\x09\x63\x68\x61\x72\x2d\x73\x65"
  "\x74\x76\x13\x64\x75\x6d\x6d\x79\x2d\x66\x61\x69\x6c\x75\x72\x65"
  "\x2d\x6a\x75\x6d\x70\x77\x14\x6d\x61\x79\x62\x65\x2d\x66\x69\x6e"
  "\x61\x6c\x69\x7a\x65\x2d\x6a\x75\x6d\x70\x78\x10\x6f\x6e\x2d\x66"
  "\x61\x69\x6c\x75\x72\x65\x2d\x6a\x75\x6d\x70\x79\x05\x6a\x75\x6d"
  "\x70\x7a\x08\x65\x78\x61\x63\x74\x2d\x6e\x7b\x02\x20\x08\x65\x78"
  "\x61\x63\x74\x2d\x31\x7c\x07\x75\x6e\x75\x73\x65\x64\x7d\x0b\x6c"
  "\x69\x6e\x65\x2d\x73\x74\x61\x72\x74\x7e\x09\x6c\x69\x6e\x65\x2d"
  "\x65\x6e\x64\x7f\x09\x61\x6e\x79\x2d\x63\x68\x61\x72\x80\x01\x0d"
  "\x62\x75\x66\x66\x65\x72\x2d\x73\x74\x61\x72\x74\x81\x01\x0b\x62"
  "\x75\x66\x66\x65\x72\x2d\x65\x6e\x64\x82\x01\x0a\x77\x6f\x72\x64"
  "\x2d\x63\x68\x61\x72\x83\x01\x0e\x6e\x6f\x74\x2d\x77\x6f\x72\x64"
  "\x2d\x63\x68\x61\x72\x84\x01\x0b\x77\x6f\x72\x64\x2d\x73\x74\x61"
  "\x72\x74\x85\x01\x09\x77\x6f\x72\x64\x2d\x65\x6e\x64\x86\x01\x0b"
  "\x77\x6f\x72\x64\x2d\x62\x6f\x75\x6e\x64\x87\x01\x0f\x6e\x6f\x74"
  "\x2d\x77\x6f\x72\x64\x2d\x62\x6f\x75\x6e\x64\x88\x01\x0c\x02\x29"
  "\x29\x12\x04\x65\x6e\x64\x03\x20\x28\x13\x21\x09\x72\x65\x2d\x63"
  "\x6f\x64\x65\x73\x29\x02\x02\x08\x6e\x65\x77\x6c\x69\x6e\x65\x03"
  "\x06\x77\x72\x69\x74\x65\x03\x1f\x04\x05\x6d\x65\x6d\x71\x05\x0a"
  "\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x04\x0f\x6e\x75\x6d\x62\x65"
  "\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x03\x0b\x77\x72\x69\x74\x65"
  "\x2d\x63\x68\x61\x72\x08\xfd\x07\x92\x01\x81\x89\x02\xfc\x07\x90"
  "\x01\x81\x8b\x02\xfb\x07\x8e\x01\x81\x89\x02\xfa\x07\x8c\x01\x81"
  "\x83\x02\xf9\x07\x8a\x01\x81\x8b\x02\xf8\x07\x88\x01\x81\x8b\x02"
  "\xf7\x07\x86\x01\x81\x89\x02\xf6\x07\x84\x01\x81\x89\x02\xf5\x07"
  "\x82\x01\x81\x89\x02\xf4\x07\x80\x01\x81\x89\x02\xf3\x07\x7e\x81"
  "\x8b\x02\xf2\x07\x7c\x81\x89\x02\xf1\x07\x7a\x81\x8d\x02\xf0\x07"
  "\x78\x81\x8b\x02\xef\x07\x76\x81\x89\x02\xee\x07\x74\x81\x83\x02"
  "\xed\x07\x72\x81\x8d\x02\xec\x07\x70\x81\x8b\x02\xeb\x07\x6e\x81"
  "\x83\x02\xea\x07\x6c\x81\x8b\x02\xe9\x07\x6a\x81\x89\x02\xe8\x07"
  "\x68\x81\x89\x02\xe7\x07\x66\x81\x8f\x02\xe6\x07\x64\x81\x89\x02"
  "\xe5\x07\x62\x81\x89\x02\xe4\x07\x60\x81\x89\x02\xe3\x07\x5e\x81"
  "\x89\x02\xe2\x07\x5c\x81\x89\x02\xe1\x07\x5a\x81\x89\x02\xe0\x07"
  "\x58\x81\x89\x02\xdf\x07\x56\x81\x8b\x02\xde\x07\x54\x81\x8d\x02"
  "\xdd\x07\x52\x81\x8d\x02\xdc\x07\x50\x81\x89\x02\xdb\x07\x4e\x81"
  "\x8b\x02\xda\x07\x4c\x81\x8b\x02\xd9\x07\x4a\x81\x8b\x02\xd8\x07"
  "\x48\x81\x89\x02\xd7\x07\x46\x81\x89\x02\xd6\x07\x44\x81\x89\x02"
  "\xd5\x07\x42\x81\x89\x02\xd4\x07\x40\x81\x8b\x02\xd3\x07\x3e\x81"
  "\x8b\x02\xd2\x07\x3c\x81\x8b\x02\xd1\x07\x3a\x81\x8b\x02\xd0\x07"
  "\x38\x81\x8b\x02\xcf\x07\x36\x81\x89\x02\xce\x07\x34\x81\x8b\x02"
  "\xcd\x07\x32\x81\x8b\x02\xcc\x07\x30\x81\x8b\x02\xcb\x07\x2e\x81"
  "\x89\x02\xca\x07\x2c\x81\x89\x02\xc9\x07\x2a\x81\x89\x02\xc8\x07"
  "\x28\x81\x89\x02\xc7\x07\x26\x81\x89\x02\xc6\x07\x24\x81\x8b\x02"
  "\xc5\x07\x22\x81\x89\x02\xc4\x07\x20\x81\x89\x02\xc3\x07\x1e\x81"
  "\x89\x02\xc2\x07\x1c\x81\x89\x02\xc1\x07\x1a\x81\x87\x02\xc0\x07"
  "\x18\x81\x87\x02\xbf\x07\x16\x81\x89\x02\xbe\x07\x14\x81\x87\x02"
  "\xbd\x07\x12\x81\x87\x02\xbc\x07\x10\x81\x87\x02\xbb\x07\x0e\x81"
  "\x87\x02\xba\x07\x0c\x81\x87\x02\xb9\x07\x0a\x81\x87\x02\xb8\x07"
  "\x08\x81\x83\x02\xb7\x07\x06\x81\x83\x02\xb6\x07\x04\x83\x04\x91"
  "\x01\xc7\x01\x21\x42\x1f\x1f\x21\x04\x17\x72\x65\x2d\x64\x69\x73"
  "\x61\x73\x73\x65\x6d\x62\x6c\x65\x2d\x70\x61\x74\x74\x65\x72\x6e"
  "\x08\x09\x0a\x09\x12\x64\x65\x66\x69\x6e\x65\x2d\x64\x69\x67\x69"
  "\x74\x2d\x63\x68\x61\x72\x21\x57\x04\x01\x7d\x75\x04\x01\x2a\x74"
  "\x08\x01\x29\x72\x04\x3a\x06\x6e\x71\x06\x6c\x6f\x04\x15\x64\x65"
  "\x66\x69\x6e\x65\x2d\x72\x65\x70\x65\x61\x74\x65\x72\x2d\x63\x68"
  "\x61\x72\x75\x6d\x04\x01\x54\x6a\x06\x01\x74\x69\x06\x01\x58\x01"
  "\x78\x1e\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x61\x72\x74\x65\x72"
  "\x2d\x62\x61\x63\x6b\x73\x6c\x61\x73\x68\x2d\x63\x68\x61\x72\x74"
  "\x67\x04\x01\x28\x01\x61\x01\x43\x01\x63\x01\x3f\x01\x3d\x1e\x64"
  "\x65\x66\x69\x6e\x65\x2d\x74\x72\x69\x76\x69\x61\x6c\x2d\x62\x61"
  "\x63\x6b\x73\x6c\x61\x73\x68\x2d\x63\x68\x61\x72\x72\x66\x04\x64"
  "\x04\x63\x04\x5f\x62\x12\x65\x5d\x04\x38\x60\x04\x6b\x5e\x04\x61"
  "\x5c\x06\x44\x5b\x04\x15\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x70\x61"
  "\x74\x74\x65\x72\x6e\x2d\x63\x68\x61\x72\x5a\x04\x68\x59\x04\x1a"
  "\x73\x74\x61\x63\x6b\x2d\x72\x65\x66\x2d\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x6e\x75\x6d\x62\x65\x72\x58\x04\x73\x56\x04\x55\x04"
  "\x0d\x73\x74\x61\x63\x6b\x2d\x6c\x65\x6e\x67\x74\x68\x54\x04\x0c"
  "\x73\x74\x61\x63\x6b\x2d\x66\x75\x6c\x6c\x3f\x53\x04\x0d\x73\x74"
  "\x61\x63\x6b\x2d\x65\x6d\x70\x74\x79\x3f\x15\x04\x4f\x17\x04\x70"
  "\x51\x04\x39\x50\x04\x11\x70\x6f\x69\x6e\x74\x65\x72\x2d\x6f\x70"
  "\x65\x72\x61\x74\x65\x21\x4e\x04\x0c\x70\x6f\x69\x6e\x74\x65\x72"
  "\x2d\x72\x65\x66\x4d\x04\x11\x70\x6f\x69\x6e\x74\x65\x72\x2d\x70"
  "\x6f\x73\x69\x74\x69\x6f\x6e\x4c\x04\x0f\x6f\x75\x74\x70\x75\x74"
  "\x2d\x70\x6f\x69\x6e\x74\x65\x72\x4b\x04\x10\x6f\x75\x74\x70\x75"
  "\x74\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x4a\x04\x0e\x6f\x75\x74"
  "\x70\x75\x74\x2d\x73\x74\x61\x72\x74\x21\x49\x04\x10\x6f\x75\x74"
  "\x70\x75\x74\x2d\x72\x65\x2d\x63\x6f\x64\x65\x21\x48\x04\x08\x6f"
  "\x75\x74\x70\x75\x74\x21\x47\x04\x0a\x46\x04\x0c\x69\x6e\x70\x75"
  "\x74\x2d\x72\x65\x61\x64\x21\x45\x04\x0d\x69\x6e\x70\x75\x74\x2d"
  "\x70\x65\x65\x6b\x2d\x31\x43\x04\x0b\x69\x6e\x70\x75\x74\x2d\x72"
  "\x61\x77\x21\x42\x04\x07\x69\x6e\x70\x75\x74\x21\x41\x04\x0f\x69"
  "\x6e\x70\x75\x74\x2d\x64\x69\x73\x63\x61\x72\x64\x21\x40\x04\x0d"
  "\x69\x6e\x70\x75\x74\x2d\x70\x65\x65\x6b\x2b\x31\x3f\x04\x0b\x69"
  "\x6e\x70\x75\x74\x2d\x70\x65\x65\x6b\x3e\x04\x0d\x69\x6e\x70\x75"
  "\x74\x2d\x65\x6e\x64\x2b\x31\x3f\x3d\x04\x0b\x69\x6e\x70\x75\x74"
  "\x2d\x65\x6e\x64\x3f\x3c\x04\x3b\x04\x35\x34\x2a\x33\x32\x31\x30"
  "\x2f\x2e\x2d\x2c\x2b\x10\x28\x04\x24\x11\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x72\x65\x67\x65\x78\x70\x3f\x25\x04\x22\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x64\x2d\x72\x65\x67\x65\x78\x70\x2f\x74\x72\x61"
  "\x6e\x73\x6c\x61\x74\x69\x6f\x6e\x2d\x74\x61\x62\x6c\x65\x23\x04"
  "\x27\x1c\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65\x67\x65\x78"
  "\x70\x2f\x62\x79\x74\x65\x2d\x73\x74\x72\x65\x61\x6d\x22\x04\x14"
  "\x72\x74\x64\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65\x67"
  "\x65\x78\x70\x73\x1c\x10\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72"
  "\x65\x67\x65\x78\x70\x0c\x62\x79\x74\x65\x2d\x73\x74\x72\x65\x61"
  "\x6d\x2d\x21\x26\x7c\x22\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x3a\x72\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x2d"
  "\x70\x61\x74\x74\x65\x72\x6e\x71\x62\x13\x72\x65\x2d\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x2d\x70\x61\x74\x74\x65\x72\x6e\x1e\x20\x04\x0e"
  "\x15\x73\x74\x61\x63\x6b\x2d\x6d\x61\x78\x69\x6d\x75\x6d\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x14\x0f\x81\x02\x1a\x1d\x04\x36\x1b\x04\x0d"
  "\x10\x72\x65\x2d\x71\x75\x6f\x74\x65\x2d\x73\x74\x72\x69\x6e\x67"
  "\x16\x04\x12\x72\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x73\x74"
  "\x72\x69\x6e\x67\x01\x5c\x01\x5e\x01\x2b\x01\x2f\x01\x5d\x01\x40"
  "\x01\x2c\x01\x5f\x01\x25\x18\x06\x10\x72\x65\x2d\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x2d\x63\x68\x61\x72\x11\x04\x0c\x04\x0b\x04\x11\x63"
  "\x61\x63\x68\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x70"
  "\x04\x29\x52\x19\x88\x01\x87\x01\x86\x01\x85\x01\x84\x01\x83\x01"
  "\x82\x01\x81\x01\x09\x76\x80\x01\x77\x78\x0e\x66\x69\x6e\x61\x6c"
  "\x69\x7a\x65\x2d\x6a\x75\x6d\x70\x79\x7a\x7f\x7e\x7b\x7c\x7d\x18"
  "\x72\x65\x2d\x63\x6f\x64\x65\x3a\x6e\x6f\x74\x2d\x73\x79\x6e\x74"
  "\x61\x78\x2d\x73\x70\x65\x63\x1a\x14\x72\x65\x2d\x63\x6f\x64\x65"
  "\x3a\x73\x79\x6e\x74\x61\x78\x2d\x73\x70\x65\x63\x19\x17\x72\x65"
  "\x2d\x63\x6f\x64\x65\x3a\x6e\x6f\x74\x2d\x77\x6f\x72\x64\x2d\x62"
  "\x6f\x75\x6e\x64\x18\x13\x72\x65\x2d\x63\x6f\x64\x65\x3a\x77\x6f"
  "\x72\x64\x2d\x62\x6f\x75\x6e\x64\x17\x11\x72\x65\x2d\x63\x6f\x64"
  "\x65\x3a\x77\x6f\x72\x64\x2d\x65\x6e\x64\x16\x13\x72\x65\x2d\x63"
  "\x6f\x64\x65\x3a\x77\x6f\x72\x64\x2d\x73\x74\x61\x72\x74\x15\x16"
  "\x72\x65\x2d\x63\x6f\x64\x65\x3a\x6e\x6f\x74\x2d\x77\x6f\x72\x64"
  "\x2d\x63\x68\x61\x72\x14\x12\x72\x65\x2d\x63\x6f\x64\x65\x3a\x77"
  "\x6f\x72\x64\x2d\x63\x68\x61\x72\x13\x13\x72\x65\x2d\x63\x6f\x64"
  "\x65\x3a\x62\x75\x66\x66\x65\x72\x2d\x65\x6e\x64\x12\x15\x72\x65"
  "\x2d\x63\x6f\x64\x65\x3a\x62\x75\x66\x66\x65\x72\x2d\x73\x74\x61"
  "\x72\x74\x11\x12\x72\x65\x2d\x63\x6f\x64\x65\x3a\x64\x75\x70\x6c"
  "\x69\x63\x61\x74\x65\x14\x72\x65\x2d\x63\x6f\x64\x65\x3a\x73\x74"
  "\x6f\x70\x2d\x6d\x65\x6d\x6f\x72\x79\x0f\x15\x72\x65\x2d\x63\x6f"
  "\x64\x65\x3a\x73\x74\x61\x72\x74\x2d\x6d\x65\x6d\x6f\x72\x79\x0e"
  "\x15\x72\x65\x2d\x63\x6f\x64\x65\x3a\x6e\x6f\x74\x2d\x63\x68\x61"
  "\x72\x2d\x73\x65\x74\x0d\x11\x72\x65\x2d\x63\x6f\x64\x65\x3a\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x0c\x11\x72\x65\x2d\x63\x6f\x64\x65"
  "\x3a\x61\x6e\x79\x2d\x63\x68\x61\x72\x0b\x1b\x72\x65\x2d\x63\x6f"
  "\x64\x65\x3a\x64\x75\x6d\x6d\x79\x2d\x66\x61\x69\x6c\x75\x72\x65"
  "\x2d\x6a\x75\x6d\x70\x0a\x1c\x72\x65\x2d\x63\x6f\x64\x65\x3a\x6d"
  "\x61\x79\x62\x65\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x2d\x6a\x75"
  "\x6d\x70\x09\x16\x72\x65\x2d\x63\x6f\x64\x65\x3a\x66\x69\x6e\x61"
  "\x6c\x69\x7a\x65\x2d\x6a\x75\x6d\x70\x08\x18\x72\x65\x2d\x63\x6f"
  "\x64\x65\x3a\x6f\x6e\x2d\x66\x61\x69\x6c\x75\x72\x65\x2d\x6a\x75"
  "\x6d\x70\x0d\x72\x65\x2d\x63\x6f\x64\x65\x3a\x6a\x75\x6d\x70\x11"
  "\x72\x65\x2d\x63\x6f\x64\x65\x3a\x6c\x69\x6e\x65\x2d\x65\x6e\x64"
  "\x13\x72\x65\x2d\x63\x6f\x64\x65\x3a\x6c\x69\x6e\x65\x2d\x73\x74"
  "\x61\x72\x74\x10\x72\x65\x2d\x63\x6f\x64\x65\x3a\x65\x78\x61\x63"
  "\x74\x2d\x6e\x10\x72\x65\x2d\x63\x6f\x64\x65\x3a\x65\x78\x61\x63"
  "\x74\x2d\x31\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x33\x10\x13"
  "\x64\x65\x66\x69\x6e\x65\x2d\x65\x6e\x75\x6d\x65\x72\x61\x74\x69"
  "\x6f\x6e\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x0f\x72\x65\x2d\x63\x6f\x64\x65\x3a\x75\x6e\x75\x73"
  "\x65\x64\x04\x04\x1f\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72"
  "\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e"
  "\x64\x65\x72\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64"
  "\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04"
  "\x14\x15\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x3a\x65\x72\x72\x6f\x72\x17\x73\x74\x61\x6e\x64\x61\x72\x64\x2d"
  "\x65\x72\x72\x6f\x72\x2d\x68\x61\x6e\x64\x6c\x65\x72\x71\x73\x61"
  "\x21\x08\x04\x70\x0b\x76\x03\x0c\x73\x74\x72\x69\x6e\x67\x2d\x63"
  "\x6f\x70\x79\x06\x14\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x74\x79\x70\x65\x05\x14\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x73\x69\x67\x6e\x61\x6c\x6c\x65\x72\x04\x0c\x6d"
  "\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x04\x6b\x04\x72\x04\x74"
  "\x04\x65\x05\x75\x04\x37\x0d\xa2\x01\xc6\x02\x80\x80\x04\xa1\x01"
  "\xc4\x02\x81\x81\x02\xa0\x01\xc2\x02\x81\x81\x02\x9f\x01\xc0\x02"
  "\x81\x83\x02\x9e\x01\xbe\x02\x81\x87\x02\x9d\x01\xbc\x02\x81\x83"
  "\x02\x9c\x01\xba\x02\x81\x83\x02\x9b\x01\xb8\x02\x81\x83\x02\x9a"
  "\x01\xb6\x02\x81\x83\x02\x99\x01\xb4\x02\x81\x83\x02\x98\x01\xb2"
  "\x02\x81\x83\x02\x97\x01\xb0\x02\x81\x83\x02\x96\x01\xae\x02\x81"
  "\x83\x02\x95\x01\xac\x02\x81\x83\x02\x94\x01\xaa\x02\x81\x83\x02"
  "\x93\x01\xa8\x02\x81\x83\x02\x92\x01\xa6\x02\x81\x83\x02\x91\x01"
  "\xa4\x02\x81\x83\x02\x90\x01\xa2\x02\x81\x83\x02\x8f\x01\xa0\x02"
  "\x81\x83\x02\x8e\x01\x9e\x02\x81\x83\x02\x8d\x01\x9c\x02\x81\x83"
  "\x02\x8c\x01\x9a\x02\x81\x83\x02\x8b\x01\x98\x02\x81\x83\x02\x8a"
  "\x01\x96\x02\x81\x83\x02\x89\x01\x94\x02\x81\x83\x02\x88\x01\x92"
  "\x02\x81\x83\x02\x87\x01\x90\x02\x81\x83\x02\x86\x01\x8e\x02\x81"
  "\x83\x02\x85\x01\x8c\x02\x81\x83\x02\x84\x01\x8a\x02\x81\x83\x02"
  "\x83\x01\x88\x02\x81\x85\x02\x82\x01\x86\x02\x81\x83\x02\x81\x01"
  "\x84\x02\x81\x87\x02\x80\x01\x82\x02\x81\x83\x02\x7f\x80\x02\x81"
  "\x83\x02\x7e\xfe\x01\x81\x85\x02\x7d\xfc\x01\x81\x83\x02\x7c\xfa"
  "\x01\x81\x87\x02\x7b\xf8\x01\x81\x83\x02\x7a\xf6\x01\x81\x83\x02"
  "\x79\xf4\x01\x81\x83\x02\x78\xf2\x01\x81\x83\x02\x77\xf0\x01\x81"
  "\x83\x02\x76\xee\x01\x81\x83\x02\x75\xec\x01\x81\x83\x02\x74\xea"
  "\x01\x81\x83\x02\x73\xe8\x01\x81\x83\x02\x72\xe6\x01\x81\x83\x02"
  "\x71\xe4\x01\x81\x83\x02\x70\xe2\x01\x81\x83\x02\x6f\xe0\x01\x81"
  "\x83\x02\x6e\xde\x01\x81\x83\x02\x6d\xdc\x01\x81\x83\x02\x6c\xda"
  "\x01\x81\x83\x02\x6b\xd8\x01\x81\x83\x02\x6a\xd6\x01\x81\x83\x02"
  "\x69\xd4\x01\x81\x83\x02\x68\xd2\x01\x81\x83\x02\x67\xd0\x01\x81"
  "\x83\x02\x66\xce\x01\x81\x83\x02\x65\xcc\x01\x81\x83\x02\x64\xca"
  "\x01\x81\x83\x02\x63\xc8\x01\x81\x83\x02\x62\xc6\x01\x81\x83\x02"
  "\x61\xc4\x01\x81\x83\x02\x60\xc2\x01\x81\x83\x02\x5f\xc0\x01\x81"
  "\x83\x02\x5e\xbe\x01\x81\x83\x02\x5d\xbc\x01\x81\x83\x02\x5c\xba"
  "\x01\x81\x83\x02\x5b\xb8\x01\x81\x85\x02\x5a\xb6\x01\x81\x83\x02"
  "\x59\xb4\x01\x81\x83\x02\x58\xb2\x01\x81\x83\x02\x57\xb0\x01\x81"
  "\x83\x02\x56\xae\x01\x81\x83\x02\x55\xac\x01\x81\x83\x02\x54\xaa"
  "\x01\x81\x83\x02\x53\xa8\x01\x81\x83\x02\x52\xa6\x01\x81\x83\x02"
  "\x51\xa4\x01\x81\x83\x02\x50\xa2\x01\x81\x83\x02\x4f\xa0\x01\x81"
  "\x83\x02\x4e\x9e\x01\x81\x83\x02\x4d\x9c\x01\x81\x83\x02\x4c\x9a"
  "\x01\x81\x83\x02\x4b\x98\x01\x81\x85\x02\x4a\x96\x01\x81\x83\x02"
  "\x49\x94\x01\x81\x87\x02\x48\x92\x01\x81\x83\x02\x47\x90\x01\x81"
  "\x87\x02\x46\x8e\x01\x81\x83\x02\x45\x8c\x01\x81\x85\x02\x44\x8a"
  "\x01\x81\x83\x02\x43\x88\x01\x81\x85\x02\x42\x86\x01\x81\x87\x02"
  "\x41\x84\x01\x81\x83\x02\x40\x82\x01\x81\x85\x02\x3f\x80\x01\x81"
  "\x85\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81\x8b\x02\x3c\x7a\x81\x8b"
  "\x02\x3b\x78\x81\x8b\x02\x3a\x76\x81\x8b\x02\x39\x74\x81\x8b\x02"
  "\x38\x72\x81\x85\x02\x37\x70\x81\x8b\x02\x36\x6e\x81\x87\x02\x35"
  "\x6c\x81\x83\x02\x34\x6a\x81\x87\x02\x33\x68\x81\x8b\x02\x32\x66"
  "\x81\x83\x02\x31\x64\x81\x89\x02\x30\x62\x81\x89\x02\x2f\x60\x81"
  "\x89\x02\x2e\x5e\x81\x89\x02\x2d\x5c\x81\x85\x02\x2c\x5a\x81\x83"
  "\x02\x2b\x58\x81\x85\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x83\x02"
  "\x28\x52\x81\x83\x02\x27\x50\x81\x83\x02\x26\x4e\x81\x85\x02\x25"
  "\x4c\x81\x83\x02\x24\x4a\x81\x85\x02\x23\x48\x81\x83\x02\x22\x46"
  "\x81\x83\x02\x21\x44\x81\x83\x02\x20\x42\x81\x83\x02\x1f\x40\x81"
  "\x83\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x83"
  "\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x83\x02"
  "\x18\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x83\x02\x15"
  "\x2c\x81\x83\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x83\x02\x12\x26"
  "\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81"
  "\x83\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83"
  "\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02"
  "\x08\x12\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83\x02\x05"
  "\x0c\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x87\x02\x02\x06"
  "\x81\x85\x02\x01\x04\x81\x83\x02\xc5\x02\xf4\x04";

SCHEME_OBJECT *
rgxcmp_so_data_b3bc2f845463b00d (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rgxcmp_so_data_b3bc2f845463b00d [0]))), (sizeof (prog_rgxcmp_so_data_b3bc2f845463b00d)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_182]));
}

DECLARE_COMPILED_DATA_NS ("rgxcmp.so", rgxcmp_so_data_b3bc2f845463b00d)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rgxcmp.so", "74135b006b56cdc3")
