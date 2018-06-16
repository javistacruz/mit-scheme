/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:49-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto object_new_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_new_type_3)
DEFLABEL (object_new_type_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_5 11
#define LABEL_2_11 13
#define LABEL_2_9 15
#define LABEL_2_12 17
#define LABEL_2_13 19
#define LABEL_2_14 21
#define LABEL_2_15 23
#define LABEL_2_16 25
#define LABEL_2_18 27
#define LABEL_2_19 29
#define LABEL_2_20 31
#define LABEL_2_21 33
#define LABEL_2_22 35
#define ENVIRONMENT_LABEL_2_3 75
#define DEBUGGING_LABEL_2_2 74
#define OBJECT_2_21 73
#define OBJECT_2_20 72
#define OBJECT_2_19 71
#define OBJECT_2_18 70
#define OBJECT_2_17 69
#define OBJECT_2_16 68
#define OBJECT_2_15 67
#define OBJECT_2_14 66
#define OBJECT_2_13 65
#define OBJECT_2_12 64
#define OBJECT_2_11 63
#define OBJECT_2_10 62
#define OBJECT_2_9 61
#define OBJECT_2_8 60
#define OBJECT_2_7 59
#define OBJECT_2_6 58
#define OBJECT_2_5 57
#define OBJECT_2_4 56
#define OBJECT_2_3 55
#define OBJECT_2_2 54
#define OBJECT_2_1 53
#define OBJECT_2_0 52
#define EXECUTE_CACHE_2_23 37
#define EXECUTE_CACHE_2_17 39
#define EXECUTE_CACHE_2_10 41
#define FREE_REFERENCE_2_5 44
#define FREE_REFERENCE_2_4 45
#define FREE_REFERENCE_2_3 46
#define FREE_REFERENCE_2_2 47
#define FREE_REFERENCE_2_1 48
#define FREE_REFERENCE_2_0 49
#define FREE_ASSIGNMENT_2_0 51
#define FREE_REFERENCES_LABEL_2_0 36
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_2_4);
      goto initialize_packageB_47;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_49;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_50;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_51;

    case 4:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_46;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_52;

    case 6:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_24;

    case 7:
      current_block = (Rpc - LABEL_2_12);
      goto label_53;

    case 8:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_19;

    case 9:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_2_18);
      goto label_54;

    case 13:
      current_block = (Rpc - LABEL_2_19);
      goto label_55;

    case 14:
      current_block = (Rpc - LABEL_2_20);
      goto continuation_3;

    case 15:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_0;

    case 16:
      current_block = (Rpc - LABEL_2_22);
      goto label_56;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_58)
DEFLABEL (initialize_packageB_47)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_75;
  Wrd9 = Wrd13;

DEFLABEL (label_74)
  (Wrd18.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_2_1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_73;
  Wrd28 = Wrd32;

DEFLABEL (label_72)
  (Wrd37.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd42.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_71;
  Wrd47 = Wrd51;

DEFLABEL (label_70)
  (Wrd56.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd60.Obj) = (current_block [OBJECT_2_3]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (Wrd61.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_2_6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_3]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_69;
  Wrd19 = Wrd23;

DEFLABEL (label_68)
  (Wrd28.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_2_7]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd33.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_2_8]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_2_9]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_2_10]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_2_11]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_2_12]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_2_13]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_2_14]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_2_15]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_4]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_67;
  Wrd19 = Wrd23;

DEFLABEL (label_66)
  (Wrd28.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_2_16]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd33.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_5]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_65;
  Wrd38 = Wrd42;

DEFLABEL (label_64)
  (Wrd47.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd51.Obj) = (current_block [OBJECT_2_17]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (Wrd52.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (current_block [OBJECT_2_18]);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_20);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_2_19]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_2_20]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_21);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_2_21]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_63;
  Wrd18 = Wrd22;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_59)
  Rvl = (current_block [OBJECT_2_5]);
  goto pop_return;

DEFLABEL (label_61)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_60;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_11])), (Wrd6.pObj), Rvl);

DEFLABEL (label_52)
  goto label_59;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_22])), (Wrd19.pObj));

DEFLABEL (label_56)
  (Wrd18.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_19])), (Wrd39.pObj));

DEFLABEL (label_55)
  (Wrd38.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_18])), (Wrd20.pObj));

DEFLABEL (label_54)
  (Wrd19.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_12])), (Wrd20.pObj));

DEFLABEL (label_53)
  (Wrd19.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_8])), (Wrd48.pObj));

DEFLABEL (label_51)
  (Wrd47.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_7])), (Wrd29.pObj));

DEFLABEL (label_50)
  (Wrd28.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_6])), (Wrd10.pObj));

DEFLABEL (label_49)
  (Wrd9.Obj) = Rvl;
  goto label_74;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 7
#define DEBUGGING_LABEL_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_3_4);
      goto make_object_association_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_object_association_table_3)
DEFLABEL (make_object_association_table_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (Wrd9.Obj) = (current_block [OBJECT_3_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define ENVIRONMENT_LABEL_4_3 15
#define DEBUGGING_LABEL_4_2 14
#define OBJECT_4_0 13
#define EXECUTE_CACHE_4_7 9
#define FREE_REFERENCE_4_0 12
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_4_4);
      goto object_association_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_association_6)
DEFLABEL (object_association_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_10;
  Wrd7 = Wrd11;

DEFLABEL (label_9)
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_8;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd13.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (label_8)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_4)
  (Wrd13.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd8.pObj));

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_9 9
#define LABEL_5_6 11
#define LABEL_5_10 13
#define LABEL_5_11 15
#define LABEL_5_12 17
#define ENVIRONMENT_LABEL_5_3 30
#define DEBUGGING_LABEL_5_2 29
#define OBJECT_5_3 28
#define OBJECT_5_2 27
#define OBJECT_5_1 26
#define OBJECT_5_0 25
#define EXECUTE_CACHE_5_13 19
#define EXECUTE_CACHE_5_8 21
#define FREE_REFERENCE_5_0 24
#define FREE_REFERENCES_LABEL_5_0 18
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_5_4);
      goto add_associationB_10;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_5_12);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_associationB_18)
DEFLABEL (add_associationB_10)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_30;
  Wrd5 = Wrd9;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_28;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_27)
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_22;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [3]);
  if (! ((Wrd7.Obj) == (Wrd16.Obj)))
    goto label_20;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_5_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_9);
  goto label_19;

DEFLABEL (label_22)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_14)
  (Wrd7.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_23)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_26;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_25)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_24;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  ((Wrd43.pObj) [1]) = (Wrd39.Obj);
  goto label_19;

DEFLABEL (label_24)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_16)
  goto label_19;

DEFLABEL (label_26)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_15)
  (Wrd25.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_8 7
#define TAG_6_9 2
#define LABEL_6_6 9
#define TAG_6_7 3
#define LABEL_6_12 11
#define LABEL_6_13 13
#define LABEL_6_14 15
#define LABEL_6_15 17
#define LABEL_6_16 19
#define LABEL_6_17 21
#define ENVIRONMENT_LABEL_6_3 39
#define DEBUGGING_LABEL_6_2 38
#define OBJECT_6_3 37
#define OBJECT_6_2 36
#define OBJECT_6_1 35
#define OBJECT_6_0 34
#define EXECUTE_CACHE_6_11 23
#define EXECUTE_CACHE_6_10 25
#define FREE_REFERENCE_6_2 28
#define FREE_REFERENCE_6_1 29
#define FREE_REFERENCE_6_0 30
#define FREE_ASSIGNMENT_6_1 32
#define FREE_ASSIGNMENT_6_0 33
#define FREE_REFERENCES_LABEL_6_0 22
#define NUMBER_OF_LINKER_SECTIONS_6_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_6_4);
      goto copy_program_18;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto lambda_30;

    case 3:
      current_block = (Rpc - LABEL_6_6);
      goto swapB_29;

    case 4:
      current_block = (Rpc - LABEL_6_12);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_6_13);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_6_14);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_6_15);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_6_16);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_6_17);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_program_28)
DEFLABEL (copy_program_18)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (Wrd9.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  if ((Wrd10.Obj) == (current_block [OBJECT_6_2]))
    goto label_32;
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_6])));
  Rhp += 2;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd28.pObj) = (& (Rhp [-1]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd28.pObj)));
  (Rsp [1]) = (Wrd29.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd32.pObj) = (& (Rhp [-1]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd32.pObj)));
  (Rsp [2]) = (Wrd33.Obj);
  Wrd25 = Wrd35;
  ((Wrd25.pObj) [2]) = (Wrd33.Obj);
  ((Wrd25.pObj) [3]) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_8])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Rsp [3]) = (Wrd14.Obj);
  (Rsp [4]) = (Wrd36.Obj);
  (Rsp [2]) = (Wrd36.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (label_32)
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_34;
  Wrd37 = Wrd41;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd37.Obj);
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd38.pObj));

DEFLABEL (label_20)
  (Wrd37.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_6_8);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (swapB_29)
  CLOSURE_HEADER (LABEL_6_6);

DEFLABEL (swapB_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  Wrd5 = Wrd9;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_49;

DEFLABEL (label_48)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_47)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_44)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_2]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  Wrd57 = Wrd61;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_38)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_6_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_36;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_17])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_26)
  goto label_35;

DEFLABEL (label_40)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_39;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_16])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_25)
  goto label_38;

DEFLABEL (label_43)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_42;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_6_15])), (Wrd58.pObj));

DEFLABEL (label_24)
  (Wrd57.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_46)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_23)
  goto label_44;

DEFLABEL (label_49)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_48;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_22)
  goto label_47;

DEFLABEL (label_52)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_6_12])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_50;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_7 7
#define LABEL_7_5 9
#define LABEL_7_10 11
#define LABEL_7_9 13
#define ENVIRONMENT_LABEL_7_3 24
#define DEBUGGING_LABEL_7_2 23
#define OBJECT_7_0 22
#define EXECUTE_CACHE_7_11 15
#define EXECUTE_CACHE_7_8 17
#define FREE_REFERENCE_7_1 20
#define FREE_REFERENCE_7_0 21
#define FREE_REFERENCES_LABEL_7_0 14
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_7_4);
      goto copy_object_4;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_object_10)
DEFLABEL (copy_object_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_18;
  Wrd9 = Wrd13;

DEFLABEL (label_17)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_16;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_15)
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_11;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_12)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_14;
  Wrd19 = Wrd23;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_10])), (Wrd20.pObj));

DEFLABEL (label_8)
  (Wrd19.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_6])), (Wrd10.pObj));

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_10 9
#define ENVIRONMENT_LABEL_8_3 24
#define DEBUGGING_LABEL_8_2 23
#define EXECUTE_CACHE_8_12 11
#define EXECUTE_CACHE_8_11 13
#define EXECUTE_CACHE_8_9 15
#define EXECUTE_CACHE_8_8 17
#define EXECUTE_CACHE_8_6 19
#define FREE_REFERENCE_8_0 22
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto copy_constant_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8_10);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_constant_6)
DEFLABEL (copy_constant_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (label_8)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_11;
  Wrd7 = Wrd11;

DEFLABEL (label_10)
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (label_9)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_10])), (Wrd8.pObj));

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_5 3
#define LABEL_9_6 5
#define LABEL_9_14 7
#define LABEL_9_15 9
#define LABEL_9_4 11
#define LABEL_9_16 13
#define LABEL_9_17 15
#define LABEL_9_18 17
#define LABEL_9_19 19
#define LABEL_9_20 21
#define LABEL_9_11 23
#define LABEL_9_9 25
#define LABEL_9_22 27
#define LABEL_9_24 29
#define ENVIRONMENT_LABEL_9_3 61
#define DEBUGGING_LABEL_9_2 60
#define OBJECT_9_14 59
#define OBJECT_9_13 58
#define OBJECT_9_12 57
#define OBJECT_9_11 56
#define OBJECT_9_10 55
#define OBJECT_9_9 54
#define OBJECT_9_8 53
#define OBJECT_9_7 52
#define OBJECT_9_6 51
#define OBJECT_9_5 50
#define OBJECT_9_4 49
#define OBJECT_9_3 48
#define OBJECT_9_2 47
#define OBJECT_9_1 46
#define OBJECT_9_0 45
#define EXECUTE_CACHE_9_23 31
#define EXECUTE_CACHE_9_21 33
#define EXECUTE_CACHE_9_13 35
#define EXECUTE_CACHE_9_12 37
#define EXECUTE_CACHE_9_10 39
#define EXECUTE_CACHE_9_8 41
#define EXECUTE_CACHE_9_7 43
#define FREE_REFERENCES_LABEL_9_0 30
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd72;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd113;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd137;
  machine_word Wrd140;
  machine_word Wrd144;
  machine_word Wrd146;
  machine_word Wrd147;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd156;
  machine_word Wrd126;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd124;
  machine_word Wrd121;
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
      current_block = (Rpc - LABEL_9_5);
      goto continuation_9;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_30;

    case 2:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_9_15);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_9_4);
      goto Z__copy_constant_23;

    case 5:
      current_block = (Rpc - LABEL_9_16);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_9_17);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_9_18);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_9_19);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_9_20);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_17;

    case 11:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_20;

    case 12:
      current_block = (Rpc - LABEL_9_22);
      goto continuation_18;

    case 13:
      current_block = (Rpc - LABEL_9_24);
      goto continuation_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__copy_constant_32)
DEFLABEL (Z__copy_constant_23)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd105.Obj) = (current_block [OBJECT_9_6]);
  (Wrd108.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd108.Lng))))
    goto label_60;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd105.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_50;

DEFLABEL (label_59)
  (Wrd95.Obj) = (current_block [OBJECT_9_7]);
  (Wrd98.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd98.Lng))))
    goto label_58;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd95.Obj));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_50;

DEFLABEL (label_57)
  (Wrd85.Obj) = (current_block [OBJECT_9_8]);
  (Wrd88.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd88.Lng))))
    goto label_56;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd85.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_50;

DEFLABEL (label_55)
  (Wrd75.Obj) = (current_block [OBJECT_9_9]);
  (Wrd78.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd78.Lng))))
    goto label_54;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd75.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_50;

DEFLABEL (label_53)
  (Wrd25.Obj) = (current_block [OBJECT_9_10]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd35.Lng)))
    goto label_34;

DEFLABEL (label_33)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_34)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_36;
  (Wrd27.Obj) = (current_block [OBJECT_9_12]);
  goto label_35;

DEFLABEL (label_36)
  (Wrd27.Obj) = (current_block [OBJECT_9_11]);

DEFLABEL (label_35)
DEFLABEL (label_52)
  Rsp = (& (Rsp [3]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;

DEFLABEL (label_37)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd64.Obj) = (current_block [OBJECT_9_13]);
  (Wrd67.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd67.Lng))))
    goto label_51;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd64.Obj));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_50;

DEFLABEL (label_49)
  (Wrd45.Obj) = (current_block [OBJECT_9_14]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd55.Lng))))
    goto label_33;
  (Wrd49.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd49.Obj) == (Wrd51.Obj))
    goto label_40;
  (Wrd47.Obj) = (current_block [OBJECT_9_12]);
  goto label_39;

DEFLABEL (label_40)
  (Wrd47.Obj) = (current_block [OBJECT_9_11]);

DEFLABEL (label_39)
DEFLABEL (label_48)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd47.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_37;

DEFLABEL (label_47)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  (Wrd121.Obj) = (Rsp [0]);
  if ((Wrd121.Obj) == (current_block [OBJECT_9_0]))
    goto label_37;
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if ((Wrd124.uLng) == 2)
    goto label_37;
  (Wrd148.Obj) = (current_block [OBJECT_9_1]);
  (Wrd151.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 50L) < ((unsigned long) (Wrd151.Lng))))
    goto label_46;
  (Wrd126.uLng) = (OBJECT_DATUM (Wrd148.Obj));
  if ((Wrd126.Obj) == (Wrd124.Obj))
    goto label_37;

DEFLABEL (label_45)
  (Wrd129.Obj) = (Rsp [0]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if (! ((Wrd130.uLng) == 1))
    goto label_41;
  (Wrd147.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd147.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (label_41)
  if (! ((Wrd130.uLng) == 10))
    goto label_42;
  (Wrd146.Obj) = (current_block [OBJECT_9_4]);
  (* (--Rsp)) = (Wrd146.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (label_42)
  if (! ((Wrd130.uLng) == 30))
    goto label_43;
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_23]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_9_24);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_43)
  if ((Wrd130.uLng) == 47)
    goto label_44;
  (Wrd137.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd137.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (label_44)
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_9_22);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_37;

DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));
  goto label_37;

DEFLABEL (label_51)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_50;

DEFLABEL (label_54)
  (Wrd80.Obj) = (Rsp [0]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_50;

DEFLABEL (label_56)
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_50;

DEFLABEL (label_58)
  (Wrd100.Obj) = (Rsp [0]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_50;

DEFLABEL (label_60)
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_50;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_37;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define TAG_10_8 3
#define LABEL_10_11 11
#define LABEL_10_12 13
#define LABEL_10_13 15
#define ENVIRONMENT_LABEL_10_3 26
#define DEBUGGING_LABEL_10_2 25
#define OBJECT_10_3 24
#define OBJECT_10_2 23
#define OBJECT_10_1 22
#define OBJECT_10_0 21
#define EXECUTE_CACHE_10_10 17
#define EXECUTE_CACHE_10_9 19
#define FREE_REFERENCES_LABEL_10_0 16
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_10_4);
      goto Z__copy_compiled_code_address_8;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_13;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_10_13);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__copy_compiled_code_address_12)
DEFLABEL (Z__copy_compiled_code_address_8)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_10_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_12);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_15;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_15;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_15;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

DEFLABEL (label_15)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_10)
  (Wrd12.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_7 7
#define LABEL_11_5 9
#define ENVIRONMENT_LABEL_11_3 19
#define DEBUGGING_LABEL_11_2 18
#define OBJECT_11_0 17
#define EXECUTE_CACHE_11_9 11
#define EXECUTE_CACHE_11_8 13
#define FREE_REFERENCE_11_0 16
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_11_4);
      goto copy_compiled_code_block_3;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_compiled_code_block_8)
DEFLABEL (copy_compiled_code_block_3)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_12;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (label_9)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_12)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_6])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define LABEL_12_9 11
#define LABEL_12_10 13
#define LABEL_12_11 15
#define LABEL_12_14 17
#define LABEL_12_13 19
#define LABEL_12_15 21
#define LABEL_12_17 23
#define LABEL_12_16 25
#define LABEL_12_19 27
#define ENVIRONMENT_LABEL_12_3 46
#define DEBUGGING_LABEL_12_2 45
#define OBJECT_12_9 44
#define OBJECT_12_8 43
#define OBJECT_12_7 42
#define OBJECT_12_6 41
#define OBJECT_12_5 40
#define OBJECT_12_4 39
#define OBJECT_12_3 38
#define OBJECT_12_2 37
#define OBJECT_12_1 36
#define OBJECT_12_0 35
#define EXECUTE_CACHE_12_18 29
#define EXECUTE_CACHE_12_12 31
#define EXECUTE_CACHE_12_8 33
#define FREE_REFERENCES_LABEL_12_0 28
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_12_4);
      goto Z__copy_compiled_code_block_23;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_12_14);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_12_13);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_12_15);
      goto do_loop_18;

    case 10:
      current_block = (Rpc - LABEL_12_17);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_12_16);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_12_19);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__copy_compiled_code_block_30)
DEFLABEL (Z__copy_compiled_code_block_23)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_35;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_34)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_33;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_33;
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_32)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_7]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_13);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd7.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd7.Lng));
  (* (--Rsp)) = (Wrd8.Obj);
  goto do_loop_18;

DEFLABEL (label_33)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_12_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_6]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (do_loop_31)
DEFLABEL (do_loop_18)
  INTERRUPT_CHECK (26, LABEL_12_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_37;
  (Wrd9.Obj) = (current_block [OBJECT_12_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_36;

DEFLABEL (label_37)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_36)
DEFLABEL (label_43)
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_42;
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_42;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd27.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_42;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd24.Obj));
  (Wrd22.pObj) = (& ((Wrd29.pObj) [(Wrd19.Lng)]));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_18]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_12_16);
  (Wrd5.Obj) = Rvl;
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_40;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_40;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_40;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd15.pObj) = (& ((Wrd21.pObj) [(Wrd12.Lng)]));
  ((Wrd15.pObj) [1]) = Rvl;

DEFLABEL (label_39)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_18;

DEFLABEL (label_40)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_9]), 3);

DEFLABEL (label_28)
  goto label_39;

DEFLABEL (label_42)
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_6]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 8
#define DEBUGGING_LABEL_13_2 7
#define EXECUTE_CACHE_13_5 5
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto atomically_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (atomically_3)
DEFLABEL (atomically_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define TAG_14_6 1
#define ENVIRONMENT_LABEL_14_3 10
#define DEBUGGING_LABEL_14_2 9
#define EXECUTE_CACHE_14_7 7
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto Z__copy_pair_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__copy_pair_4)
DEFLABEL (Z__copy_pair_1)
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
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_8 9
#define LABEL_15_10 11
#define LABEL_15_11 13
#define LABEL_15_12 15
#define ENVIRONMENT_LABEL_15_3 25
#define DEBUGGING_LABEL_15_2 24
#define OBJECT_15_2 23
#define OBJECT_15_1 22
#define OBJECT_15_0 21
#define EXECUTE_CACHE_15_9 17
#define EXECUTE_CACHE_15_7 19
#define FREE_REFERENCES_LABEL_15_0 16
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_15_4);
      goto Z___copy_pair_12;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_15_12);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___copy_pair_17)
DEFLABEL (Z___copy_pair_12)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  ((Wrd11.pObj) [0]) = Rvl;

DEFLABEL (label_20)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15_11);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_19;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  ((Wrd9.pObj) [1]) = Rvl;

DEFLABEL (label_18)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_15)
  goto label_18;

DEFLABEL (label_21)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_14)
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define TAG_16_6 1
#define ENVIRONMENT_LABEL_16_3 10
#define DEBUGGING_LABEL_16_2 9
#define EXECUTE_CACHE_16_7 7
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto Z__copy_triple_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__copy_triple_4)
DEFLABEL (Z__copy_triple_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_16_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define LABEL_17_9 11
#define LABEL_17_10 13
#define LABEL_17_12 15
#define LABEL_17_13 17
#define LABEL_17_14 19
#define LABEL_17_15 21
#define ENVIRONMENT_LABEL_17_3 33
#define DEBUGGING_LABEL_17_2 32
#define OBJECT_17_4 31
#define OBJECT_17_3 30
#define OBJECT_17_2 29
#define OBJECT_17_1 28
#define OBJECT_17_0 27
#define EXECUTE_CACHE_17_11 23
#define EXECUTE_CACHE_17_8 25
#define FREE_REFERENCES_LABEL_17_0 22
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_17_4);
      goto Z___copy_triple_15;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_17_12);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_17_13);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_17_14);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___copy_triple_18)
DEFLABEL (Z___copy_triple_15)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_3]), 2);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_4]), 2);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_17_14);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_6 5
#define LABEL_18_7 7
#define LABEL_18_5 9
#define ENVIRONMENT_LABEL_18_3 20
#define DEBUGGING_LABEL_18_2 19
#define OBJECT_18_1 18
#define OBJECT_18_0 17
#define EXECUTE_CACHE_18_9 11
#define EXECUTE_CACHE_18_8 13
#define FREE_REFERENCE_18_0 16
#define FREE_REFERENCES_LABEL_18_0 10
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_18_4);
      goto copy_vector_3;

    case 1:
      current_block = (Rpc - LABEL_18_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_vector_8)
DEFLABEL (copy_vector_3)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_12;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  (Wrd15.Obj) = (current_block [OBJECT_18_1]);
  (Rsp [0]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (label_9)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_12)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_6])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define TAG_19_6 1
#define ENVIRONMENT_LABEL_19_3 10
#define DEBUGGING_LABEL_19_2 9
#define EXECUTE_CACHE_19_7 7
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto Z__copy_vector_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__copy_vector_4)
DEFLABEL (Z__copy_vector_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_19_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define LABEL_20_9 11
#define LABEL_20_10 13
#define LABEL_20_12 15
#define LABEL_20_14 17
#define LABEL_20_13 19
#define LABEL_20_16 21
#define ENVIRONMENT_LABEL_20_3 37
#define DEBUGGING_LABEL_20_2 36
#define OBJECT_20_6 35
#define OBJECT_20_5 34
#define OBJECT_20_4 33
#define OBJECT_20_3 32
#define OBJECT_20_2 31
#define OBJECT_20_1 30
#define OBJECT_20_0 29
#define EXECUTE_CACHE_20_15 23
#define EXECUTE_CACHE_20_11 25
#define EXECUTE_CACHE_20_8 27
#define FREE_REFERENCES_LABEL_20_0 22
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd12;
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
      goto Z___copy_vector_19;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_20_9);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_20_12);
      goto do_loop_14;

    case 7:
      current_block = (Rpc - LABEL_20_14);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_20_13);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_20_16);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___copy_vector_25)
DEFLABEL (Z___copy_vector_19)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_28;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_27)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (Wrd5.Obj) = (current_block [OBJECT_20_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_14;

DEFLABEL (label_28)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (do_loop_26)
DEFLABEL (do_loop_14)
  INTERRUPT_CHECK (26, LABEL_20_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_30;
  (Wrd9.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_29;

DEFLABEL (label_30)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_29)
DEFLABEL (label_36)
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_35;
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_35;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd27.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_35;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd24.Obj));
  (Wrd22.pObj) = (& ((Wrd29.pObj) [(Wrd19.Lng)]));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_20_13);
  (Wrd5.Obj) = Rvl;
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_33;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_33;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_33;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd15.pObj) = (& ((Wrd21.pObj) [(Wrd12.Lng)]));
  ((Wrd15.pObj) [1]) = Rvl;

DEFLABEL (label_32)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_14;

DEFLABEL (label_33)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_6]), 3);

DEFLABEL (label_23)
  goto label_32;

DEFLABEL (label_35)
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 15
#define DEBUGGING_LABEL_21_2 14
#define OBJECT_21_2 13
#define OBJECT_21_1 12
#define OBJECT_21_0 11
#define EXECUTE_CACHE_21_7 7
#define EXECUTE_CACHE_21_6 9
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd11;
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
      goto copy_sequence_object_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_sequence_object_5)
DEFLABEL (copy_sequence_object_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd11.Obj) = (current_block [OBJECT_21_0]);
  (Wrd14.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 25L) < ((unsigned long) (Wrd14.Lng))))
    goto label_8;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_7;

DEFLABEL (label_6)
  (Wrd9.Obj) = (current_block [OBJECT_21_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (label_7)
  (Wrd10.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_8 9
#define LABEL_22_9 11
#define LABEL_22_13 13
#define ENVIRONMENT_LABEL_22_3 28
#define DEBUGGING_LABEL_22_2 27
#define EXECUTE_CACHE_22_14 15
#define EXECUTE_CACHE_22_12 17
#define EXECUTE_CACHE_22_11 19
#define EXECUTE_CACHE_22_10 21
#define EXECUTE_CACHE_22_7 23
#define FREE_REFERENCE_22_0 26
#define FREE_REFERENCES_LABEL_22_0 14
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_22_4);
      goto copy_combination_object_4;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_22_13);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_combination_object_8)
DEFLABEL (copy_combination_object_4)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_13])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define ENVIRONMENT_LABEL_23_3 23
#define DEBUGGING_LABEL_23_2 22
#define OBJECT_23_4 21
#define OBJECT_23_3 20
#define OBJECT_23_2 19
#define OBJECT_23_1 18
#define OBJECT_23_0 17
#define EXECUTE_CACHE_23_10 11
#define EXECUTE_CACHE_23_9 13
#define EXECUTE_CACHE_23_8 15
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd44;
  machine_word Wrd41;
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
      goto copy_lambda_object_3;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_lambda_object_9)
DEFLABEL (copy_lambda_object_3)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd41.Obj) = (current_block [OBJECT_23_0]);
  (Wrd44.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd44.Lng))))
    goto label_18;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd6.Obj) == (Wrd8.Obj)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd40.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (label_11)
  (Wrd30.Obj) = (current_block [OBJECT_23_2]);
  (Wrd33.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd33.Lng))))
    goto label_17;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd10.Obj) == (Wrd12.Obj)))
    goto label_13;

DEFLABEL (label_12)
  (Wrd29.Obj) = (current_block [OBJECT_23_2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (label_13)
  (Wrd19.Obj) = (current_block [OBJECT_23_3]);
  (Wrd22.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 41L) < ((unsigned long) (Wrd22.Lng))))
    goto label_16;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_15;

DEFLABEL (label_14)
  (Wrd17.Obj) = (current_block [OBJECT_23_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (label_15)
  (Wrd18.Obj) = (current_block [OBJECT_23_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (label_16)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_15;

DEFLABEL (label_17)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_12;

DEFLABEL (label_18)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_8 9
#define ENVIRONMENT_LABEL_24_3 18
#define DEBUGGING_LABEL_24_2 17
#define EXECUTE_CACHE_24_10 11
#define EXECUTE_CACHE_24_9 13
#define EXECUTE_CACHE_24_7 15
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto copy_variable_object_4;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_variable_object_7)
DEFLABEL (copy_variable_object_4)
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
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_10 9
#define LABEL_25_11 11
#define LABEL_25_15 13
#define LABEL_25_16 15
#define LABEL_25_13 17
#define LABEL_25_17 19
#define LABEL_25_18 21
#define ENVIRONMENT_LABEL_25_3 40
#define DEBUGGING_LABEL_25_2 39
#define OBJECT_25_3 38
#define OBJECT_25_2 37
#define OBJECT_25_1 36
#define OBJECT_25_0 35
#define EXECUTE_CACHE_25_19 23
#define EXECUTE_CACHE_25_14 25
#define EXECUTE_CACHE_25_12 27
#define EXECUTE_CACHE_25_9 29
#define EXECUTE_CACHE_25_8 31
#define EXECUTE_CACHE_25_6 33
#define FREE_REFERENCES_LABEL_25_0 22
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_25_4);
      goto copy_comment_object_19;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_25_11);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_25_15);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_25_16);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_25_13);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_25_17);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_25_18);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_comment_object_24)
DEFLABEL (copy_comment_object_19)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  (Wrd23.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [0]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (label_25)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_25_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_25_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (Rsp [6]);
  if ((Wrd8.Obj) == (Wrd9.Obj))
    goto label_33;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_25_16);
  (Wrd12.Obj) = Rvl;

DEFLABEL (label_32)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_31;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  ((Wrd33.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_30)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.Obj) = (Rsp [6]);
  if ((Wrd16.Obj) == (Wrd17.Obj))
    goto label_29;
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_19]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_25_15);
  (Wrd20.Obj) = Rvl;

DEFLABEL (label_28)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_27;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  ((Wrd24.pObj) [1]) = (Wrd20.Obj);

DEFLABEL (label_26)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_18]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 2);

DEFLABEL (label_21)
  goto label_26;

DEFLABEL (label_29)
  (Wrd20.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  goto label_28;

DEFLABEL (label_31)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_17]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_22)
  goto label_30;

DEFLABEL (label_33)
  (Wrd12.Obj) = Rvl;
  Rsp = (& (Rsp [1]));
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_6 5
#define LABEL_26_7 7
#define LABEL_26_5 9
#define LABEL_26_10 11
#define LABEL_26_11 13
#define ENVIRONMENT_LABEL_26_3 34
#define DEBUGGING_LABEL_26_2 33
#define OBJECT_26_3 32
#define OBJECT_26_2 31
#define OBJECT_26_1 30
#define OBJECT_26_0 29
#define EXECUTE_CACHE_26_15 15
#define EXECUTE_CACHE_26_14 17
#define EXECUTE_CACHE_26_13 19
#define EXECUTE_CACHE_26_12 21
#define EXECUTE_CACHE_26_9 23
#define EXECUTE_CACHE_26_8 25
#define FREE_REFERENCE_26_0 28
#define FREE_REFERENCES_LABEL_26_0 14
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_26_4);
      goto copy_dbg_info_vector_8;

    case 1:
      current_block = (Rpc - LABEL_26_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_26_10);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_26_11);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_dbg_info_vector_13)
DEFLABEL (copy_dbg_info_vector_8)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_22;
  Wrd9 = Wrd13;

DEFLABEL (label_21)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_19)
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_15;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_16)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_17;
  (Wrd26.Obj) = (current_block [OBJECT_26_1]);
  (Rsp [0]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (label_17)
  if ((Wrd16.uLng) == 1)
    goto label_18;
  (Wrd19.Obj) = (current_block [OBJECT_26_2]);
  (Rsp [0]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_13]));

DEFLABEL (label_18)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_26_10);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_14]));

DEFLABEL (label_20)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_6])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_21;

DEFLABEL (lambda_14)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_26_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_23;
  Rvl = (current_block [OBJECT_26_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_15]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_6 5
#define LABEL_27_7 7
#define LABEL_27_5 9
#define LABEL_27_9 11
#define LABEL_27_10 13
#define LABEL_27_14 15
#define LABEL_27_13 17
#define LABEL_27_11 19
#define LABEL_27_16 21
#define LABEL_27_18 23
#define LABEL_27_19 25
#define LABEL_27_21 27
#define ENVIRONMENT_LABEL_27_3 47
#define DEBUGGING_LABEL_27_2 46
#define OBJECT_27_3 45
#define OBJECT_27_2 44
#define OBJECT_27_1 43
#define OBJECT_27_0 42
#define EXECUTE_CACHE_27_20 29
#define EXECUTE_CACHE_27_17 31
#define EXECUTE_CACHE_27_15 33
#define EXECUTE_CACHE_27_12 35
#define EXECUTE_CACHE_27_8 37
#define FREE_REFERENCE_27_1 40
#define FREE_REFERENCE_27_0 41
#define FREE_REFERENCES_LABEL_27_0 28
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prgcop_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_27_4);
      goto copy_list_15;

    case 1:
      current_block = (Rpc - LABEL_27_6);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_27_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_27_10);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_27_14);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_27_13);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_27_16);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_27_18);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_27_19);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_27_21);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_list_25)
DEFLABEL (copy_list_15)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_42;
  Wrd9 = Wrd13;

DEFLABEL (label_41)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_40;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_39)
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_26;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_27)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 1)
    goto label_30;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_29;
  Wrd21 = Wrd25;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_27_13);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_14])), (Wrd22.pObj));

DEFLABEL (label_19)
  (Wrd21.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  if (! ((Wrd16.uLng) == 1))
    goto label_38;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_37)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_36;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd36.Obj);
  (Wrd48.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd54.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_27_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_27_16);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  ((Wrd11.pObj) [0]) = Rvl;

DEFLABEL (label_33)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_27_19);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_32;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  ((Wrd9.pObj) [1]) = Rvl;

DEFLABEL (label_31)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_21]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 2);

DEFLABEL (label_23)
  goto label_31;

DEFLABEL (label_34)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_22)
  goto label_33;

DEFLABEL (label_36)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_21)
  (Wrd36.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_6])), (Wrd10.pObj));

DEFLABEL (label_17)
  (Wrd9.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
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
prgcop_so_6f2a4ca6a274bc23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2,
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
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	2,
	3,
	2,
	2,
	0,
	3,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 27)
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

static const struct liarc_code_S arr_decl_prgcop_so_6f2a4ca6a274bc23 [27] =
  {
    { "prgcop_so_code_1", 1, prgcop_so_code_1 },
    { "prgcop_so_code_2", 17, prgcop_so_code_2 },
    { "prgcop_so_code_3", 1, prgcop_so_code_3 },
    { "prgcop_so_code_4", 3, prgcop_so_code_4 },
    { "prgcop_so_code_5", 8, prgcop_so_code_5 },
    { "prgcop_so_code_6", 10, prgcop_so_code_6 },
    { "prgcop_so_code_7", 6, prgcop_so_code_7 },
    { "prgcop_so_code_8", 4, prgcop_so_code_8 },
    { "prgcop_so_code_9", 14, prgcop_so_code_9 },
    { "prgcop_so_code_10", 7, prgcop_so_code_10 },
    { "prgcop_so_code_11", 4, prgcop_so_code_11 },
    { "prgcop_so_code_12", 13, prgcop_so_code_12 },
    { "prgcop_so_code_13", 1, prgcop_so_code_13 },
    { "prgcop_so_code_14", 2, prgcop_so_code_14 },
    { "prgcop_so_code_15", 7, prgcop_so_code_15 },
    { "prgcop_so_code_16", 2, prgcop_so_code_16 },
    { "prgcop_so_code_17", 10, prgcop_so_code_17 },
    { "prgcop_so_code_18", 4, prgcop_so_code_18 },
    { "prgcop_so_code_19", 2, prgcop_so_code_19 },
    { "prgcop_so_code_20", 10, prgcop_so_code_20 },
    { "prgcop_so_code_21", 2, prgcop_so_code_21 },
    { "prgcop_so_code_22", 6, prgcop_so_code_22 },
    { "prgcop_so_code_23", 4, prgcop_so_code_23 },
    { "prgcop_so_code_24", 4, prgcop_so_code_24 },
    { "prgcop_so_code_25", 10, prgcop_so_code_25 },
    { "prgcop_so_code_26", 6, prgcop_so_code_26 },
    { "prgcop_so_code_27", 13, prgcop_so_code_27 }
  };

int
decl_prgcop_so_6f2a4ca6a274bc23 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_prgcop_so_6f2a4ca6a274bc23);
  return (0);
}

DECLARE_COMPILED_CODE ("prgcop.so", 3, decl_prgcop_so_6f2a4ca6a274bc23, prgcop_so_6f2a4ca6a274bc23)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_prgcop_so_data_6f2a4ca6a274bc23 [3916] =
  "\x50\x39\xf6\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x22\x29"
  "\x21\x9d\x2b\xba\x1d\xb0\x82\x88\x0d\x02\x0d\x02\x0d\x0d\x0d\x02"
  "\x0d\x02\x0d\x02\x0d\x02\x0d\x0d\x1d\x83\x0d\x0d\x0d\x08\x0d\xbb"
  "\x25\x0d\xbc\x0d\xbd\x0d\xbe\x0d\xbf\x0d\x1c\x0d\x1c\x24\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83"
  "\x88\x08\x0d\x1c\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x84\x88\xc1\x1c"
  "\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x85\x88\x0c\x1d\xc2\x1c\x1b\x1b\x24\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1d\x1d\x08\x1b\x0d\x1c\x1b"
  "\x25\x0d\x1c\x1b\x1b\x24\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xb3\x24\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x85\x02\x06\x07\x02\x86\x02\x02\x02\x0c"
  "\x02\x81\xc2\x1c\x02\x08\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d"
  "\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xc1\xc1\x1c"
  "\xc1\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x07\x1b\xc2\x1c\x80\xc1\xc1\x1c"
  "\x02\xb1\x02\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xc2\x1c\xb1\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\xc2\xc2\xb1\xc3\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x1b"
  "\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x07\x80\x1b\xb1\x02\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x1b\x02\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x02\x02\x1b\x02\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xb1\x02\x28\x0d\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x0d\xb9\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x02\x1b\x1b\x24\x28\x1b\x28\x1b"
  "\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\xc1\x1b\x1b\xb3\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17"
  "\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1e\x06\x1b\x2a\xb2\x2a\x17\x1b\xb1"
  "\x1b\xb4\xb7\x1b\xb6\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b"
  "\x1b\xb5\x1b\x0d\x1b\x0d\x0d\xb3\x1b\x1b\x1b\x0d\x0d\x17\x28\x0d"
  "\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69"
  "\x6d\x65\x2f\x2e\x2f\x70\x72\x67\x63\x6f\x70\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x04"
  "\x04\x84\x06\x03\x02\x07\x61\x63\x63\x65\x73\x73\x20\x0b\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x24\x0c\x63\x6f\x6d\x62\x69\x6e"
  "\x61\x74\x69\x6f\x6e\x08\x63\x6f\x6d\x6d\x65\x6e\x74\x0c\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x35\x0b\x64\x65\x66\x69\x6e"
  "\x69\x74\x69\x6f\x6e\x22\x06\x64\x65\x6c\x61\x79\x12\x0c\x64\x69"
  "\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x36\x07\x6c\x61\x6d\x62\x64"
  "\x61\x0a\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x02\x09\x73\x65\x71"
  "\x75\x65\x6e\x63\x65\x10\x74\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x09\x76\x61\x72\x69\x61\x62\x6c\x65\x14\x63"
  "\x6f\x70\x69\x65\x72\x2f\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b"
  "\x65\x72\x02\x15\x63\x6f\x70\x79\x2d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x2d\x6f\x62\x6a\x65\x63\x74\x0e\x63\x6f\x70\x79\x2d\x63\x6f"
  "\x6e\x73\x74\x61\x6e\x74\x15\x63\x6f\x70\x79\x2d\x73\x65\x71\x75"
  "\x65\x6e\x63\x65\x2d\x6f\x62\x6a\x65\x63\x74\x13\x63\x6f\x70\x79"
  "\x2d\x6c\x61\x6d\x62\x64\x61\x2d\x6f\x62\x6a\x65\x63\x74\x14\x63"
  "\x6f\x70\x79\x2d\x63\x6f\x6d\x6d\x65\x6e\x74\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x09\x18\x63\x6f\x70\x79\x2d\x63\x6f\x6d\x62\x69\x6e\x61"
  "\x74\x69\x6f\x6e\x2d\x6f\x62\x6a\x65\x63\x74\x0a\x07\x03\x0b\x25"
  "\x63\x6f\x70\x79\x2d\x70\x61\x69\x72\x0b\x03\x0d\x25\x63\x6f\x70"
  "\x79\x2d\x74\x72\x69\x70\x6c\x65\x0c\x04\x12\x6d\x61\x6b\x65\x2d"
  "\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x65\x72\x04\x15\x24\x81"
  "\x85\x02\x14\x22\x81\x85\x02\x13\x20\x81\x85\x02\x12\x1e\x81\x85"
  "\x02\x11\x1c\x81\x85\x02\x10\x1a\x81\x85\x02\x0f\x18\x81\x85\x02"
  "\x0e\x16\x81\x85\x02\x0d\x14\x81\x85\x02\x0c\x12\x81\x85\x02\x0b"
  "\x10\x81\x85\x02\x0a\x0e\x81\x81\x02\x09\x0c\x81\x81\x02\x08\x0a"
  "\x81\x85\x02\x07\x08\x81\x85\x02\x06\x06\x81\x83\x02\x05\x04\x82"
  "\x02\x23\x4c\x0d\x02\x10\x2a\x6f\x62\x6a\x65\x63\x74\x2d\x63\x6f"
  "\x70\x69\x65\x73\x2a\x0e\x16\x04\x82\x02\x03\x0f\x02\x04\x63\x64"
  "\x72\x10\x0e\x02\x04\x05\x61\x73\x73\x71\x11\x02\x19\x08\x81\x85"
  "\x02\x18\x06\x81\x85\x02\x17\x04\x83\x04\x07\x10\x12\x02\x28\x61"
  "\x64\x64\x2d\x61\x73\x73\x6f\x63\x69\x61\x74\x69\x6f\x6e\x21\x3a"
  "\x20\x4d\x75\x6c\x74\x69\x70\x6c\x65\x20\x61\x73\x73\x6f\x63\x69"
  "\x61\x74\x69\x6f\x6e\x73\x02\x09\x73\x65\x74\x2d\x63\x64\x72\x21"
  "\x13\x10\x0e\x02\x04\x11\x05\x06\x65\x72\x72\x6f\x72\x14\x03\x21"
  "\x12\x81\x89\x02\x20\x10\x81\x89\x02\x1f\x0e\x81\x89\x02\x1e\x0c"
  "\x81\x87\x02\x1d\x0a\x81\x89\x02\x1c\x08\x81\x89\x02\x1b\x06\x81"
  "\x85\x02\x1a\x04\x84\x06\x11\x1f\x15\x02\x02\x08\x0e\x12\x2a\x63"
  "\x6f\x70\x79\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x73\x3f\x2a\x16"
  "\x0e\x03\x1a\x2a\x64\x65\x66\x61\x75\x6c\x74\x2f\x63\x6f\x70\x79"
  "\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x73\x3f\x2a\x17\x16\x0e\x04"
  "\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d"
  "\x62\x69\x6e\x64\x03\x0c\x63\x6f\x70\x79\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x18\x03\x2b\x16\x81\x83\x02\x2a\x14\x81\x85\x02\x29\x12\x81"
  "\x83\x02\x28\x10\x81\x83\x02\x27\x0e\x81\x85\x02\x26\x0c\x81\x83"
  "\x02\x25\x0a\x81\x83\x02\x24\x08\x81\x83\x02\x23\x06\x81\x87\x02"
  "\x22\x04\x84\x04\x15\x28\x19\x02\x08\x10\x0e\x03\x04\x11\x04\x0b"
  "\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x1a\x03\x31\x0e\x81\x85"
  "\x02\x30\x0c\x81\x89\x02\x2f\x0a\x81\x83\x02\x2e\x08\x81\x85\x02"
  "\x2d\x06\x81\x85\x02\x2c\x04\x83\x04\x0d\x19\x1b\x02\x09\x16\x02"
  "\x03\x17\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d"
  "\x61\x64\x64\x72\x65\x73\x73\x3f\x03\x15\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x3f\x03\x1c"
  "\x25\x63\x6f\x70\x79\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63"
  "\x6f\x64\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x1c\x03\x0f\x25\x63"
  "\x6f\x70\x79\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x1d\x03\x1a\x25"
  "\x63\x6f\x70\x79\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f"
  "\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x1e\x06\x35\x0a\x81\x83\x02\x34"
  "\x08\x81\x83\x02\x33\x06\x81\x83\x02\x32\x04\x83\x04\x09\x19\x1f"
  "\x02\x0a\x1e\x3d\x3b\x0f\x1b\x1c\x63\x6f\x70\x79\x2d\x63\x6f\x6e"
  "\x73\x74\x61\x6e\x74\x3a\x20\x43\x61\x6e\x27\x74\x20\x68\x61\x6e"
  "\x64\x6c\x65\x0b\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65"
  "\x3f\x20\x33\x04\x0c\x25\x25\x63\x6f\x70\x79\x2d\x70\x61\x69\x72"
  "\x21\x04\x0e\x25\x25\x63\x6f\x70\x79\x2d\x76\x65\x63\x74\x6f\x72"
  "\x22\x03\x0c\x73\x74\x72\x69\x6e\x67\x2d\x63\x6f\x70\x79\x03\x10"
  "\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x63\x6f\x70\x79\x04"
  "\x14\x03\x09\x62\x6f\x6f\x6c\x65\x61\x6e\x3f\x04\x11\x61\x64\x64"
  "\x2d\x61\x73\x73\x6f\x63\x69\x61\x74\x69\x6f\x6e\x21\x23\x08\x43"
  "\x1e\x81\x85\x02\x42\x1c\x81\x85\x02\x41\x1a\x81\x83\x02\x40\x18"
  "\x81\x83\x02\x3f\x16\x81\x83\x02\x3e\x14\x81\x83\x02\x3d\x12\x81"
  "\x83\x02\x3c\x10\x81\x83\x02\x3b\x0e\x81\x83\x02\x3a\x0c\x83\x04"
  "\x39\x0a\x81\x83\x02\x38\x08\x81\x83\x02\x37\x06\x81\x83\x02\x36"
  "\x04\x81\x83\x02\x1d\x3e\x24\x02\x0b\x1e\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x2d"
  "\x3e\x6f\x66\x66\x73\x65\x74\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x64"
  "\x61\x74\x75\x6d\x25\x1d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63"
  "\x6f\x64\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x3e\x62\x6c\x6f"
  "\x63\x6b\x03\x1e\x77\x69\x74\x68\x2d\x61\x62\x73\x6f\x6c\x75\x74"
  "\x65\x6c\x79\x2d\x6e\x6f\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74"
  "\x73\x26\x03\x19\x63\x6f\x70\x79\x2d\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x27\x03\x4a\x10"
  "\x81\x85\x02\x49\x0e\x81\x87\x02\x48\x0c\x81\x85\x02\x47\x0a\x81"
  "\x83\x02\x46\x08\x81\x85\x02\x45\x06\x81\x83\x02\x44\x04\x83\x04"
  "\x0f\x1b\x28\x02\x0c\x10\x0e\x02\x04\x11\x03\x1e\x03\x4e\x0a\x81"
  "\x83\x02\x4d\x08\x81\x85\x02\x4c\x06\x81\x85\x02\x4b\x04\x83\x04"
  "\x09\x14\x29\x02\x0d\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74"
  "\x21\x2a\x25\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x25\x1c"
  "\x64\x65\x63\x6c\x61\x72\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x0e\x76\x65\x63\x74"
  "\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x2b\x3e\x0b\x03\x0c\x76\x65"
  "\x63\x74\x6f\x72\x2d\x63\x6f\x70\x79\x2c\x04\x23\x03\x18\x04\x5b"
  "\x1c\x81\x8d\x02\x5a\x1a\x81\x8d\x02\x59\x18\x81\x8f\x02\x58\x16"
  "\x81\x8b\x02\x57\x14\x81\x89\x02\x56\x12\x81\x8b\x02\x55\x10\x81"
  "\x89\x02\x54\x0e\x81\x89\x02\x53\x0c\x81\x87\x02\x52\x0a\x81\x85"
  "\x02\x51\x08\x81\x85\x02\x50\x06\x81\x83\x02\x4f\x04\x83\x04\x1b"
  "\x2f\x2d\x02\x0e\x03\x26\x02\x5c\x04\x83\x04\x03\x26\x02\x0f\x04"
  "\x21\x02\x5e\x06\x81\x85\x02\x5d\x04\x83\x04\x05\x0b\x2e\x02\x10"
  "\x13\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x2f\x04\x23\x03\x18\x03"
  "\x65\x10\x81\x8d\x02\x64\x0e\x81\x8d\x02\x63\x0c\x81\x8d\x02\x62"
  "\x0a\x81\x8d\x02\x61\x08\x81\x8d\x02\x60\x06\x81\x8b\x02\x5f\x04"
  "\x84\x06\x0f\x1a\x30\x02\x11\x04\x0e\x25\x25\x63\x6f\x70\x79\x2d"
  "\x74\x72\x69\x70\x6c\x65\x31\x02\x67\x06\x81\x85\x02\x66\x04\x83"
  "\x04\x05\x0b\x32\x02\x12\x17\x73\x79\x73\x74\x65\x6d\x2d\x68\x75"
  "\x6e\x6b\x33\x2d\x73\x65\x74\x2d\x63\x78\x72\x32\x21\x17\x73\x79"
  "\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x73\x65\x74\x2d\x63"
  "\x78\x72\x31\x21\x17\x73\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b"
  "\x33\x2d\x73\x65\x74\x2d\x63\x78\x72\x30\x21\x0b\x68\x75\x6e\x6b"
  "\x33\x2d\x63\x6f\x6e\x73\x04\x23\x03\x18\x03\x71\x16\x81\x91\x02"
  "\x70\x14\x81\x8f\x02\x6f\x12\x81\x91\x02\x6e\x10\x81\x8f\x02\x6d"
  "\x0e\x81\x91\x02\x6c\x0c\x81\x8f\x02\x6b\x0a\x81\x8f\x02\x6a\x08"
  "\x81\x8d\x02\x69\x06\x81\x8b\x02\x68\x04\x84\x06\x15\x22\x33\x02"
  "\x13\x0b\x10\x0e\x02\x04\x11\x04\x22\x03\x75\x0a\x81\x83\x02\x74"
  "\x08\x81\x85\x02\x73\x06\x81\x85\x02\x72\x04\x83\x04\x09\x15\x34"
  "\x02\x14\x04\x22\x02\x77\x06\x81\x85\x02\x76\x04\x83\x04\x05\x0b"
  "\x35\x02\x15\x2a\x25\x2b\x0b\x03\x2c\x04\x23\x03\x18\x04\x81\x01"
  "\x16\x81\x8f\x02\x80\x01\x14\x81\x8f\x02\x7f\x12\x81\x91\x02\x7e"
  "\x10\x81\x8d\x02\x7d\x0e\x81\x8b\x02\x7c\x0c\x81\x89\x02\x7b\x0a"
  "\x81\x87\x02\x7a\x08\x81\x87\x02\x79\x06\x81\x85\x02\x78\x04\x84"
  "\x06\x15\x26\x2c\x02\x16\x23\x63\x6f\x70\x79\x2d\x53\x45\x51\x55"
  "\x45\x4e\x43\x45\x2d\x6f\x62\x6a\x65\x63\x74\x3a\x20\x55\x6e\x6b"
  "\x6e\x6f\x77\x6e\x20\x74\x79\x70\x65\x20\x1a\x04\x14\x04\x21\x03"
  "\x83\x01\x06\x81\x83\x02\x82\x01\x04\x83\x04\x05\x10\x2b\x02\x17"
  "\x18\x02\x03\x15\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d"
  "\x6f\x70\x65\x72\x61\x74\x6f\x72\x03\x15\x63\x6f\x6d\x62\x69\x6e"
  "\x61\x74\x69\x6f\x6e\x2d\x6f\x70\x65\x72\x61\x6e\x64\x73\x03\x18"
  "\x04\x11\x6d\x61\x6b\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69"
  "\x6f\x6e\x04\x04\x6d\x61\x70\x06\x89\x01\x0e\x81\x89\x02\x88\x01"
  "\x0c\x81\x87\x02\x87\x01\x0a\x81\x85\x02\x86\x01\x08\x81\x85\x02"
  "\x85\x01\x06\x81\x83\x02\x84\x01\x04\x83\x04\x0d\x1d\x2a\x02\x18"
  "\x21\x43\x4f\x50\x59\x2d\x4c\x41\x4d\x42\x44\x41\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x3a\x20\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x74\x79\x70"
  "\x65\x2a\x15\x20\x18\x04\x14\x04\x21\x04\x31\x04\x8d\x01\x0a\x81"
  "\x83\x02\x8c\x01\x08\x81\x83\x02\x8b\x01\x06\x81\x83\x02\x8a\x01"
  "\x04\x83\x04\x09\x18\x25\x02\x19\x03\x0e\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x2d\x6e\x61\x6d\x65\x04\x23\x03\x0e\x6d\x61\x6b\x65\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x04\x91\x01\x0a\x81\x85\x02\x90"
  "\x01\x08\x81\x85\x02\x8f\x01\x06\x81\x83\x02\x8e\x01\x04\x83\x04"
  "\x09\x13\x20\x02\x1a\x13\x2f\x16\x03\x0d\x63\x6f\x6d\x6d\x65\x6e"
  "\x74\x2d\x74\x65\x78\x74\x03\x11\x64\x62\x67\x2d\x69\x6e\x66\x6f"
  "\x2d\x76\x65\x63\x74\x6f\x72\x3f\x04\x21\x04\x23\x03\x15\x63\x6f"
  "\x70\x79\x2d\x64\x62\x67\x2d\x69\x6e\x66\x6f\x2d\x76\x65\x63\x74"
  "\x6f\x72\x03\x18\x07\x9b\x01\x16\x81\x8f\x02\x9a\x01\x14\x81\x8f"
  "\x02\x99\x01\x12\x81\x8d\x02\x98\x01\x10\x81\x8f\x02\x97\x01\x0e"
  "\x81\x8f\x02\x96\x01\x0c\x81\x8d\x02\x95\x01\x0a\x81\x8b\x02\x94"
  "\x01\x08\x81\x85\x02\x93\x01\x06\x81\x83\x02\x92\x01\x04\x83\x04"
  "\x15\x29\x36\x02\x1b\x02\x23\x63\x6f\x70\x79\x2d\x64\x62\x67\x2d"
  "\x69\x6e\x66\x6f\x2d\x76\x65\x63\x74\x6f\x72\x3a\x20\x55\x6e\x6b"
  "\x6e\x6f\x77\x6e\x20\x74\x79\x70\x65\x0b\x10\x0e\x02\x04\x11\x04"
  "\x22\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x04\x14\x03\x0a\x63"
  "\x6f\x70\x79\x2d\x6c\x69\x73\x74\x14\x03\x0c\x63\x6f\x70\x79\x2d"
  "\x76\x65\x63\x74\x6f\x72\x37\x07\xa1\x01\x0e\x83\x04\xa0\x01\x0c"
  "\x81\x85\x02\x9f\x01\x0a\x81\x83\x02\x9e\x01\x08\x81\x85\x02\x9d"
  "\x01\x06\x81\x85\x02\x9c\x01\x04\x83\x04\x0d\x23\x38\x02\x1c\x13"
  "\x2f\x04\x63\x61\x72\x10\x0e\x03\x04\x11\x04\x23\x04\x1a\x03\x18"
  "\x03\x14\x06\xae\x01\x1c\x81\x89\x02\xad\x01\x1a\x81\x89\x02\xac"
  "\x01\x18\x81\x89\x02\xab\x01\x16\x81\x89\x02\xaa\x01\x14\x81\x89"
  "\x02\xa9\x01\x12\x81\x85\x02\xa8\x01\x10\x81\x89\x02\xa7\x01\x0e"
  "\x81\x87\x02\xa6\x01\x0c\x81\x85\x02\xa5\x01\x0a\x81\x83\x02\xa4"
  "\x01\x08\x81\x85\x02\xa3\x01\x06\x81\x85\x02\xa2\x01\x04\x83\x04"
  "\x1b\x30\x2f\x1c\x1a\x1a\x2f\x04\x38\x04\x36\x04\x20\x04\x25\x04"
  "\x2a\x04\x2b\x04\x2c\x04\x35\x04\x34\x04\x33\x04\x32\x04\x30\x04"
  "\x2e\x04\x26\x04\x2d\x04\x29\x04\x28\x04\x24\x0c\x1f\x04\x1b\x04"
  "\x19\x04\x15\x04\x12\x04\x0f\x04\x0d\x04\x04\x20\x14\x09\x0a\x22"
  "\x0d\x25\x63\x6f\x70\x79\x2d\x76\x65\x63\x74\x6f\x72\x37\x31\x0c"
  "\x21\x0b\x0b\x61\x74\x6f\x6d\x69\x63\x61\x6c\x6c\x79\x1e\x27\x1c"
  "\x1d\x18\x0d\x63\x6f\x70\x79\x2d\x70\x72\x6f\x67\x72\x61\x6d\x23"
  "\x13\x6f\x62\x6a\x65\x63\x74\x2d\x61\x73\x73\x6f\x63\x69\x61\x74"
  "\x69\x6f\x6e\x1e\x6d\x61\x6b\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x61\x73\x73\x6f\x63\x69\x61\x74\x69\x6f\x6e\x2d\x74\x61\x62\x6c"
  "\x65\x0e\x16\x17\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d"
  "\x70\x61\x63\x6b\x61\x67\x65\x21\x10\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x6e\x65\x77\x2d\x74\x79\x70\x65\x20\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04"
  "\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
prgcop_so_data_6f2a4ca6a274bc23 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_prgcop_so_data_6f2a4ca6a274bc23 [0]))), (sizeof (prog_prgcop_so_data_6f2a4ca6a274bc23)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("prgcop.so", prgcop_so_data_6f2a4ca6a274bc23)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("prgcop.so", "b46e7fa3cc3e3321")
