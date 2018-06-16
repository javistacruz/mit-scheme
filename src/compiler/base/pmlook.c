/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:12-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_6 9
#define LABEL_1_8 11
#define ENVIRONMENT_LABEL_1_3 15
#define DEBUGGING_LABEL_1_2 14
#define OBJECT_1_1 13
#define OBJECT_1_0 12
#define FREE_REFERENCES_LABEL_1_0 12
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmlook_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_1_4);
      goto pattern_lookup_8;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pattern_lookup_13)
DEFLABEL (pattern_lookup_8)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (loop_14)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_1_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_20;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_19)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (label_18)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_9 9
#define LABEL_2_10 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_16 17
#define LABEL_2_17 19
#define LABEL_2_6 21
#define LABEL_2_18 23
#define LABEL_2_15 25
#define LABEL_2_20 27
#define LABEL_2_21 29
#define LABEL_2_13 31
#define LABEL_2_23 33
#define LABEL_2_22 35
#define ENVIRONMENT_LABEL_2_3 51
#define DEBUGGING_LABEL_2_2 50
#define OBJECT_2_3 49
#define OBJECT_2_2 48
#define OBJECT_2_1 47
#define OBJECT_2_0 46
#define EXECUTE_CACHE_2_19 37
#define EXECUTE_CACHE_2_14 39
#define EXECUTE_CACHE_2_8 41
#define FREE_REFERENCE_2_1 44
#define FREE_REFERENCE_2_0 45
#define FREE_REFERENCES_LABEL_2_0 36
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmlook_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_2_4);
      goto pattern_lookup_1_24;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto loop_20;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_2_16);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_2_17);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_22;

    case 10:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_2_20);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_2_21);
      goto label_33;

    case 14:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_2_23);
      goto label_34;

    case 16:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pattern_lookup_1_36)
DEFLABEL (pattern_lookup_1_24)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto loop_20;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_38;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_40;
  Wrd11 = Wrd15;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 2);

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_7])), (Wrd12.pObj));

DEFLABEL (label_26)
  (Wrd11.Obj) = Rvl;
  goto label_39;

DEFLABEL (loop_37)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_2_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_44;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  Rvl = (Rsp [2]);
  goto label_41;

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_41)
DEFLABEL (label_43)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_67;
  Wrd12 = Wrd16;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_65;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_64)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd18.Obj) == (Wrd27.Obj))
    goto label_55;
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 1)
    goto label_45;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  if (! ((Wrd29.uLng) == 1))
    goto label_54;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_53)
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_52;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_51)
  goto loop_20;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [4]));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_46;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_50;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_49)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_48;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_47)
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  goto loop_20;

DEFLABEL (label_48)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_33)
  (Wrd26.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd26.Obj));
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_32)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_63;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [1]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_62)
  Rdl = (& (Rsp [4]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_56;
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd36.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_56)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 1))
    goto label_61;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_60)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_22);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  Rvl = (Rsp [4]);
  goto label_57;

DEFLABEL (label_58)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_57)
DEFLABEL (label_59)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_34)
  (Wrd20.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd20.Obj));
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_28)
  (Wrd18.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_10])), (Wrd13.pObj));

DEFLABEL (label_27)
  (Wrd12.Obj) = Rvl;
  goto label_66;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define LABEL_3_8 11
#define LABEL_3_10 13
#define LABEL_3_11 15
#define LABEL_3_12 17
#define LABEL_3_9 19
#define LABEL_3_14 21
#define LABEL_3_15 23
#define ENVIRONMENT_LABEL_3_3 34
#define DEBUGGING_LABEL_3_2 33
#define OBJECT_3_3 32
#define OBJECT_3_2 31
#define OBJECT_3_1 30
#define OBJECT_3_0 29
#define EXECUTE_CACHE_3_13 25
#define FREE_REFERENCE_3_0 28
#define FREE_REFERENCES_LABEL_3_0 24
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmlook_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd56;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_3_4);
      goto pattern_lookup_2_16;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto loop_13;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_3_11);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_3_14);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_3_15);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pattern_lookup_2_25)
DEFLABEL (pattern_lookup_2_16)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto loop_13;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_27)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (loop_26)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_3_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_31;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  Rvl = (Rsp [2]);
  goto label_28;

DEFLABEL (label_29)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_28)
DEFLABEL (label_30)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_47;
  Wrd12 = Wrd16;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_45;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_44)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd18.Obj) == (Wrd27.Obj))
    goto label_43;
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 1)
    goto label_33;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_32)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  if (! ((Wrd29.uLng) == 1))
    goto label_42;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_41)
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_40;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_39)
  goto loop_13;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [4]));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_38;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_37)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_36;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_35)
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  goto loop_13;

DEFLABEL (label_36)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_23)
  (Wrd26.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd26.Obj));
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_22)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  goto label_32;

DEFLABEL (label_45)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_19)
  (Wrd18.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_7])), (Wrd13.pObj));

DEFLABEL (label_18)
  (Wrd12.Obj) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define LABEL_4_9 11
#define LABEL_4_10 13
#define LABEL_4_11 15
#define LABEL_4_12 17
#define LABEL_4_13 19
#define LABEL_4_14 21
#define LABEL_4_15 23
#define LABEL_4_16 25
#define LABEL_4_17 27
#define LABEL_4_19 29
#define LABEL_4_20 31
#define LABEL_4_21 33
#define LABEL_4_22 35
#define LABEL_4_26 37
#define LABEL_4_25 39
#define LABEL_4_27 41
#define LABEL_4_23 43
#define LABEL_4_31 45
#define LABEL_4_28 47
#define LABEL_4_29 49
#define LABEL_4_30 51
#define LABEL_4_33 53
#define ENVIRONMENT_LABEL_4_3 87
#define DEBUGGING_LABEL_4_2 86
#define OBJECT_4_20 85
#define OBJECT_4_19 84
#define OBJECT_4_18 83
#define OBJECT_4_17 82
#define OBJECT_4_16 81
#define OBJECT_4_15 80
#define OBJECT_4_14 79
#define OBJECT_4_13 78
#define OBJECT_4_12 77
#define OBJECT_4_11 76
#define OBJECT_4_10 75
#define OBJECT_4_9 74
#define OBJECT_4_8 73
#define OBJECT_4_7 72
#define OBJECT_4_6 71
#define OBJECT_4_5 70
#define OBJECT_4_4 69
#define OBJECT_4_3 68
#define OBJECT_4_2 67
#define OBJECT_4_1 66
#define OBJECT_4_0 65
#define EXECUTE_CACHE_4_32 55
#define EXECUTE_CACHE_4_24 57
#define EXECUTE_CACHE_4_18 59
#define EXECUTE_CACHE_4_6 61
#define FREE_REFERENCE_4_0 64
#define FREE_REFERENCES_LABEL_4_0 54
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmlook_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd75;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd28;
  machine_word Wrd15;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd115;
  machine_word Wrd119;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd106;
  machine_word Wrd108;
  machine_word Wrd103;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd102;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd92;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd153;
  machine_word Wrd156;
  machine_word Wrd185;
  machine_word Wrd175;
  machine_word Wrd177;
  machine_word Wrd178;
  machine_word Wrd171;
  machine_word Wrd173;
  machine_word Wrd165;
  machine_word Wrd167;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd160;
  machine_word Wrd162;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd186;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd128;
  machine_word Wrd120;
  machine_word Wrd122;
  machine_word Wrd38;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd136;
  machine_word Wrd138;
  machine_word Wrd139;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd148;
  machine_word Wrd150;
  machine_word Wrd151;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd197;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd192;
  machine_word Wrd189;
  machine_word Wrd199;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd46;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4_4);
      goto generate_pattern_matcher_81;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_4_14);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_1;

    case 11:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_0;

    case 12:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_4_19);
      goto descend_78;

    case 14:
      current_block = (Rpc - LABEL_4_20);
      goto label_83;

    case 15:
      current_block = (Rpc - LABEL_4_21);
      goto label_84;

    case 16:
      current_block = (Rpc - LABEL_4_22);
      goto label_85;

    case 17:
      current_block = (Rpc - LABEL_4_26);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_4_25);
      goto continuation_15;

    case 19:
      current_block = (Rpc - LABEL_4_27);
      goto label_86;

    case 20:
      current_block = (Rpc - LABEL_4_23);
      goto continuation_48;

    case 21:
      current_block = (Rpc - LABEL_4_31);
      goto label_87;

    case 22:
      current_block = (Rpc - LABEL_4_28);
      goto continuation_71;

    case 23:
      current_block = (Rpc - LABEL_4_29);
      goto continuation_62;

    case 24:
      current_block = (Rpc - LABEL_4_30);
      goto continuation_57;

    case 25:
      current_block = (Rpc - LABEL_4_33);
      goto label_88;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_pattern_matcher_90)
DEFLABEL (generate_pattern_matcher_81)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_16);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (Wrd9.Obj) = (Rsp [13]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  Rdl = (& (Rsp [18]));
  goto descend_78;

DEFLABEL (descend_91)
DEFLABEL (descend_78)
  DLINK_INTERRUPT_CHECK (25, LABEL_4_19);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_106;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_25);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd189.Obj) = (current_block [OBJECT_4_15]);
  (Wrd192.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd192.Lng))))
    goto label_105;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd189.Obj));
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd16.Obj) == (Wrd18.Obj))
    goto label_104;

DEFLABEL (label_103)
  (Wrd19.Obj) = (current_block [OBJECT_4_17]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd31.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng)))
    goto label_92;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_16]), 2);

DEFLABEL (label_92)
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd25.Obj) == (Wrd27.Obj))
    goto label_94;
  (Wrd23.Obj) = (current_block [OBJECT_4_18]);
  goto label_93;

DEFLABEL (label_94)
  (Wrd23.Obj) = (current_block [OBJECT_4_11]);

DEFLABEL (label_93)
DEFLABEL (label_102)
  Rsp = (& (Rsp [3]));
  (Wrd20.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd20.Obj));
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_97;

DEFLABEL (label_96)
  (Wrd163.Obj) = (Rsp [3]);
  (Wrd164.Obj) = (current_block [OBJECT_4_14]);
  (* (Rhp++)) = (Wrd163.Obj);
  (* (Rhp++)) = (Wrd164.Obj);
  (Wrd162.pObj) = (& (Rhp [-2]));
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd162.pObj)));
  (Wrd168.Obj) = (Rsp [5]);
  (Wrd169.pObj) = (OBJECT_ADDRESS (Wrd168.Obj));
  (Wrd170.Obj) = ((Wrd169.pObj) [10]);
  (* (Rhp++)) = (Wrd170.Obj);
  (* (Rhp++)) = (Wrd160.Obj);
  (Wrd167.pObj) = (& (Rhp [-2]));
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd167.pObj)));
  (* (Rhp++)) = (Wrd165.Obj);
  (* (Rhp++)) = (Wrd164.Obj);
  (Wrd173.pObj) = (& (Rhp [-2]));
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd173.pObj)));
  (Wrd178.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd178.Obj);
  (* (Rhp++)) = (Wrd171.Obj);
  (Wrd177.pObj) = (& (Rhp [-2]));
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd177.pObj)));
  (Wrd185.Obj) = ((Wrd169.pObj) [4]);
  (* (Rhp++)) = (Wrd185.Obj);
  (* (Rhp++)) = (Wrd175.Obj);

DEFLABEL (label_95)
  (Wrd156.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd156.pObj)));
  (Wrd153.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd153.Obj));
  (Wrd69.Obj) = (Rsp [3]);
  (Wrd70.Obj) = (current_block [OBJECT_4_14]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (Wrd77.Obj) = (Rsp [4]);
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (* (Rhp++)) = (Wrd74.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  (Wrd87.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (Wrd92.Obj) = (current_block [OBJECT_4_19]);
  (* (Rhp++)) = (Wrd92.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd91.pObj) = (& (Rhp [-2]));
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd91.pObj)));
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd95.pObj) = (& (Rhp [-2]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd95.pObj)));
  (Wrd102.Obj) = ((Wrd78.pObj) [1]);
  (* (Rhp++)) = (Wrd102.Obj);
  (* (Rhp++)) = (Wrd93.Obj);
  (Wrd99.pObj) = (& (Rhp [-2]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd99.pObj)));
  (* (Rhp++)) = (Wrd97.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd105.pObj) = (& (Rhp [-2]));
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd105.pObj)));
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd108.pObj) = (& (Rhp [-2]));
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd108.pObj)));
  (* (Rhp++)) = (Wrd106.Obj);
  (* (Rhp++)) = (Wrd103.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (Wrd119.Obj) = ((Wrd78.pObj) [6]);
  (* (Rhp++)) = (Wrd119.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd115.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd115.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_97)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.Obj) = (current_block [OBJECT_4_14]);
  if ((Wrd33.Obj) == (Wrd34.Obj))
    goto label_101;
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_100;
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd38.uLng) == 26)
    goto label_99;
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd47.Obj) = (Rsp [5]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [10]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Wrd57.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd65.Obj) = ((Wrd48.pObj) [5]);
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  goto label_98;

DEFLABEL (label_99)
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd122.pObj) = (& (Rhp [-2]));
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd122.pObj)));
  (Wrd128.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd128.Obj);
  (* (Rhp++)) = (Wrd120.Obj);
  (Wrd127.pObj) = (& (Rhp [-2]));
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd127.pObj)));
  (Wrd133.Obj) = (Rsp [5]);
  (Wrd134.pObj) = (OBJECT_ADDRESS (Wrd133.Obj));
  (Wrd135.Obj) = ((Wrd134.pObj) [4]);
  (* (Rhp++)) = (Wrd135.Obj);
  (* (Rhp++)) = (Wrd125.Obj);

DEFLABEL (label_98)
  goto label_95;

DEFLABEL (label_100)
  (Wrd139.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd139.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd138.pObj) = (& (Rhp [-2]));
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd138.pObj)));
  (Wrd145.Obj) = (Rsp [5]);
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd145.Obj));
  (Wrd147.Obj) = ((Wrd146.pObj) [7]);
  (* (Rhp++)) = (Wrd147.Obj);
  (* (Rhp++)) = (Wrd136.Obj);
  goto label_95;

DEFLABEL (label_101)
  (Wrd151.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd151.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd150.pObj) = (& (Rhp [-2]));
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd150.pObj)));
  (Wrd157.Obj) = (Rsp [5]);
  (Wrd158.pObj) = (OBJECT_ADDRESS (Wrd157.Obj));
  (Wrd159.Obj) = ((Wrd158.pObj) [8]);
  (* (Rhp++)) = (Wrd159.Obj);
  (* (Rhp++)) = (Wrd148.Obj);
  goto label_95;

DEFLABEL (label_104)
  Rsp = (& (Rsp [2]));
  (Wrd186.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd186.Obj));
  goto label_96;

DEFLABEL (label_105)
  (Wrd197.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd197.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd189.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_16]), 2);

DEFLABEL (label_86)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_103;
  goto label_104;

DEFLABEL (label_106)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd20.Obj) = ((Wrd13.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_120;
  Wrd12 = Wrd20;

DEFLABEL (label_119)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_118;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_117)
  (Wrd35.Obj) = (* (Rsp++));
  if ((Wrd22.Obj) == (Wrd35.Obj))
    goto label_114;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_4_23);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_29]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [8]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd30.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (Rsp [11]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_113;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_112)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  Rdl = (& (Rsp [4]));
  goto descend_78;

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_4_30);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.Obj) = (current_block [OBJECT_4_14]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (Rsp [9]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.Obj) = (Rsp [8]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_111;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_110)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  Rdl = (& (Rsp [4]));
  goto descend_78;

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_4_29);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (current_block [OBJECT_4_14]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (Rsp [6]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd40.Obj) = ((Wrd16.pObj) [9]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd49.Obj) = ((Wrd16.pObj) [0]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [5]);
  if ((Wrd56.Obj) == ((SCHEME_OBJECT) 0))
    goto label_108;
  (Wrd61.Obj) = (current_block [OBJECT_4_20]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd68.Obj) = ((Wrd16.pObj) [1]);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (Wrd69.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd69.Obj));
  (* (--Rsp)) = (Wrd71.Obj);
  goto label_107;

DEFLABEL (label_108)
  (Wrd75.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd75.Obj));
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_107)
DEFLABEL (label_109)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_4_28);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (current_block [OBJECT_4_14]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [6]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_111)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_12]), 1);

DEFLABEL (label_88)
  (Wrd31.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd31.Obj));
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_31]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_13]), 1);

DEFLABEL (label_87)
  (Wrd36.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd36.Obj));
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (label_114)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_116;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_115)
  (Wrd57.Obj) = (current_block [OBJECT_4_14]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd61.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (Wrd69.Obj) = (Rsp [3]);
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [6]);
  (* (Rhp++)) = (Wrd71.Obj);
  (* (Rhp++)) = (Wrd63.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_116)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_13]), 1);

DEFLABEL (label_85)
  (Wrd46.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd41.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_12]), 1);

DEFLABEL (label_84)
  (Wrd27.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd22.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_20])), (Wrd13.pObj));

DEFLABEL (label_83)
  (Wrd14.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = Rvl;
  goto label_119;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_4_26);
  (Wrd199.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd199.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_97;
  goto label_96;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define LABEL_5_12 13
#define LABEL_5_11 15
#define LABEL_5_13 17
#define LABEL_5_9 19
#define ENVIRONMENT_LABEL_5_3 29
#define DEBUGGING_LABEL_5_2 28
#define OBJECT_5_2 27
#define OBJECT_5_1 26
#define OBJECT_5_0 25
#define EXECUTE_CACHE_5_10 21
#define FREE_REFERENCE_5_0 24
#define FREE_REFERENCES_LABEL_5_0 20
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmlook_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd45;
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
      current_block = (Rpc - LABEL_5_4);
      goto pattern_variables_14;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto loop_12;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_5_12);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_5_13);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pattern_variables_22)
DEFLABEL (pattern_variables_14)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_12;

DEFLABEL (loop_23)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_5_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_25;

DEFLABEL (label_24)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_40;
  Wrd9 = Wrd13;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_38;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_37)
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd15.Obj) == (Wrd24.Obj))
    goto label_31;
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_24;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  if (! ((Wrd26.uLng) == 1))
    goto label_30;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_29)
  goto loop_12;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [3]));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_28;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_27)
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  goto loop_12;

DEFLABEL (label_28)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_20)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_36;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_35)
  Rdl = (& (Rsp [3]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rvl = (Rsp [2]);
  goto label_32;

DEFLABEL (label_33)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));

DEFLABEL (label_32)
DEFLABEL (label_34)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_36)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_17)
  (Wrd15.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_6])), (Wrd10.pObj));

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_7 9
#define LABEL_6_8 11
#define LABEL_6_10 13
#define LABEL_6_13 15
#define LABEL_6_12 17
#define LABEL_6_14 19
#define LABEL_6_9 21
#define LABEL_6_15 23
#define ENVIRONMENT_LABEL_6_3 34
#define DEBUGGING_LABEL_6_2 33
#define OBJECT_6_3 32
#define OBJECT_6_2 31
#define OBJECT_6_1 30
#define OBJECT_6_0 29
#define EXECUTE_CACHE_6_11 25
#define FREE_REFERENCE_6_0 28
#define FREE_REFERENCES_LABEL_6_0 24
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmlook_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_6_4);
      goto pattern_contains_duplicatesP_14;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto loop_12;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_6_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_6_14);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_6_15);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pattern_contains_duplicatesP_23)
DEFLABEL (pattern_contains_duplicatesP_14)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto loop_12;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_25;

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_6_1]);

DEFLABEL (label_25)
DEFLABEL (label_27)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_24)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_6_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_44;
  Wrd9 = Wrd13;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_42;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_41)
  (Wrd24.Obj) = (* (Rsp++));
  if ((Wrd15.Obj) == (Wrd24.Obj))
    goto label_34;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_33;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_32)
  goto loop_12;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [3]));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_31;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_30)
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  goto loop_12;

DEFLABEL (label_31)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_20)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_40;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_6_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_35)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_37)
  (Wrd22.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  goto label_35;

DEFLABEL (label_38)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_21)
  (Wrd9.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_17)
  (Wrd15.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_7])), (Wrd10.pObj));

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 9
#define DEBUGGING_LABEL_7_2 8
#define FREE_REFERENCE_7_0 7
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmlook_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto make_pattern_variable_0;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_pattern_variable_4)
DEFLABEL (make_pattern_variable_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
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
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define ENVIRONMENT_LABEL_8_3 13
#define DEBUGGING_LABEL_8_2 12
#define OBJECT_8_1 11
#define OBJECT_8_0 10
#define FREE_REFERENCE_8_0 9
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmlook_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto pattern_variableP_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pattern_variableP_7)
DEFLABEL (pattern_variableP_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
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
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
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
  Rvl = (current_block [OBJECT_8_1]);
  goto label_8;

DEFLABEL (label_12)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 6
#define DEBUGGING_LABEL_9_2 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pmlook_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto pattern_variable_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pattern_variable_name_3)
DEFLABEL (pattern_variable_name_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

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
pmlook_so_2f6d8555983e016c (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	0
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

static const struct liarc_code_S arr_decl_pmlook_so_2f6d8555983e016c [9] =
  {
    { "pmlook_so_code_1", 5, pmlook_so_code_1 },
    { "pmlook_so_code_2", 17, pmlook_so_code_2 },
    { "pmlook_so_code_3", 11, pmlook_so_code_3 },
    { "pmlook_so_code_4", 26, pmlook_so_code_4 },
    { "pmlook_so_code_5", 9, pmlook_so_code_5 },
    { "pmlook_so_code_6", 11, pmlook_so_code_6 },
    { "pmlook_so_code_7", 2, pmlook_so_code_7 },
    { "pmlook_so_code_8", 3, pmlook_so_code_8 },
    { "pmlook_so_code_9", 1, pmlook_so_code_9 }
  };

int
decl_pmlook_so_2f6d8555983e016c (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_pmlook_so_2f6d8555983e016c);
  return (0);
}

DECLARE_COMPILED_CODE ("pmlook.so", 3, decl_pmlook_so_2f6d8555983e016c, pmlook_so_2f6d8555983e016c)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_pmlook_so_data_2f6d8555983e016c [1451] =
  "\x5e\x0d\x80\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\xc1\xba"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0"
  "\x82\x88\xc2\xbc\xb1\xb2\x08\x0d\xbd\x0d\xbe\x24\x28\x0d\x28\x0d"
  "\x28\x0d\xbf\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xb1\xb2"
  "\xb4\x08\xb6\x24\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbc\x1d\xb0\x84\x88\x0d\x08\x88\x0d\x06\x85\xc2\x02\x08\xb1\xb2"
  "\x07\x0d\x0d\x0d\xb5\x0d\xb7\x0d\x0d\x0d\x0d\x0d\xb6\x24\x28\x0d"
  "\x28\x0d\xbf\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd"
  "\x1d\xb0\x85\x88\xb1\xb2\x08\xb6\x24\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x86\x88\xb1\xb2\x07\x08\xb6\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x24"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb2\xb6\x24"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x02\x88\xb1\x22"
  "\x29\x21\x9d\x2b\xb9\x17\xb8\x88\xb0\xb1\x2a\x0d\xb2\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\xb5\x2a\xb4\x2a\x1b\x2a\xb3\x2a\x17\x0d\xb6\x0d"
  "\x0d\x0d\xb7\x0d\x0d\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61"
  "\x73\x65\x2f\x70\x6d\x6c\x6f\x6f\x6b\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x04\x63\x64\x72\x04\x63\x61\x72\x08\x0c\x81\x89\x02"
  "\x07\x0a\x81\x87\x02\x06\x08\x81\x8b\x02\x05\x06\x81\x87\x02\x04"
  "\x04\x84\x06\x0b\x10\x02\x06\x61\x70\x70\x6c\x79\x04\x63\x64\x72"
  "\x15\x70\x61\x74\x74\x65\x72\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x2d\x74\x61\x67\x03\x04\x04\x6d\x61\x70\x04\x05\x61\x73\x73"
  "\x71\x04\x05\x65\x71\x76\x3f\x04\x19\x24\xfd\xff\x03\x18\x22\xfd"
  "\xff\x03\x17\x20\xfd\xff\x03\x16\x1e\xfd\xff\x03\x15\x1c\xfd\xff"
  "\x03\x14\x1a\x81\x87\x02\x13\x18\x81\x87\x02\x12\x16\x81\x89\x02"
  "\x11\x14\x81\x8d\x02\x10\x12\x81\x8b\x02\x0f\x10\x81\x87\x02\x0e"
  "\x0e\x81\x89\x02\x0d\x0c\x81\x87\x02\x0c\x0a\x81\x87\x02\x0b\x08"
  "\x81\x8d\x02\x0a\x06\x81\x87\x02\x09\x04\x85\x08\x23\x34\x09\x02"
  "\x02\x04\x02\x24\x18\xfd\xff\x03\x23\x16\xfd\xff\x03\x22\x14\x81"
  "\x87\x02\x21\x12\x81\x87\x02\x20\x10\x81\x8d\x02\x1f\x0e\x81\x8b"
  "\x02\x1e\x0c\x81\x89\x02\x1d\x0a\x81\x87\x02\x1c\x08\x81\x87\x02"
  "\x1b\x06\x81\x87\x02\x1a\x04\x85\x08\x17\x23\x02\x0f\x6e\x6f\x2d"
  "\x74\x79\x70\x65\x2d\x63\x68\x65\x63\x6b\x73\x0a\x69\x6e\x74\x65"
  "\x67\x72\x61\x74\x65\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70"
  "\x65\x3f\x1e\x04\x61\x6e\x64\x08\x64\x65\x63\x6c\x61\x72\x65\x04"
  "\x63\x61\x72\x04\x65\x71\x3f\x07\x6c\x61\x6d\x62\x64\x61\x04\x6e"
  "\x6f\x74\x06\x6e\x75\x6c\x6c\x3f\x06\x70\x61\x69\x72\x3f\x06\x71"
  "\x75\x6f\x74\x65\x02\x04\x0d\x63\x6c\x6f\x73\x65\x2d\x73\x79\x6e"
  "\x74\x61\x78\x03\x12\x70\x61\x74\x74\x65\x72\x6e\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x73\x02\x1b\x67\x65\x6e\x65\x72\x61\x74\x65"
  "\x2d\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62"
  "\x6f\x6c\x04\x07\x61\x70\x70\x65\x6e\x64\x05\x3e\x36\xfd\xff\x03"
  "\x3d\x34\xfd\xff\x03\x3c\x32\xfd\xff\x03\x3b\x30\xfd\xff\x03\x3a"
  "\x2e\xfd\xff\x03\x39\x2c\xfd\xff\x03\x38\x2a\x81\x83\x02\x37\x28"
  "\xfd\xff\x03\x36\x26\xfd\xff\x03\x35\x24\xfd\xff\x03\x34\x22\xfd"
  "\xff\x03\x33\x20\xfd\xff\x03\x32\x1e\xff\xff\x03\x31\x1c\x81\x9f"
  "\x02\x30\x1a\x81\x9b\x02\x2f\x18\x81\x99\x02\x2e\x16\x81\x97\x02"
  "\x2d\x14\x81\x95\x02\x2c\x12\x81\x93\x02\x2b\x10\x81\x91\x02\x2a"
  "\x0e\x81\x8f\x02\x29\x0c\x81\x8d\x02\x28\x0a\x81\x8b\x02\x27\x08"
  "\x81\x89\x02\x26\x06\x81\x87\x02\x25\x04\x85\x08\x35\x58\x02\x02"
  "\x04\x05\x6d\x65\x6d\x71\x0a\x02\x47\x14\xfd\xff\x03\x46\x12\xfd"
  "\xff\x03\x45\x10\x81\x85\x02\x44\x0e\x81\x89\x02\x43\x0c\x81\x85"
  "\x02\x42\x0a\x81\x87\x02\x41\x08\x81\x85\x02\x40\x06\x81\x85\x02"
  "\x3f\x04\x83\x04\x13\x1e\x0b\x02\x02\x04\x0a\x02\x52\x18\x81\x85"
  "\x02\x51\x16\x81\x85\x02\x50\x14\xfd\xff\x03\x4f\x12\x81\x85\x02"
  "\x4e\x10\x81\x89\x02\x4d\x0e\x81\x89\x02\x4c\x0c\x81\x87\x02\x4b"
  "\x0a\x81\x85\x02\x4a\x08\x81\x85\x02\x49\x06\x81\x83\x02\x48\x04"
  "\x83\x04\x17\x23\x0a\x02\x08\x02\x54\x06\x81\x83\x02\x53\x04\x83"
  "\x04\x05\x0a\x0c\x02\x09\x02\x57\x08\x81\x85\x02\x56\x06\x81\x83"
  "\x02\x55\x04\x83\x04\x07\x0e\x02\x0a\x58\x04\x83\x04\x03\x0a\x04"
  "\x35\x23\x5b\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x70\x61\x74"
  "\x74\x65\x72\x6e\x2d\x6d\x61\x74\x63\x68\x65\x72\x2f\x6c\x6f\x6f"
  "\x6b\x75\x70\x29\x70\x61\x74\x74\x65\x72\x6e\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x5d\x04\x0c\x04\x0a\x04\x0b\x04\x04\x04\x09\x04"
  "\x04\x0b\x16\x70\x61\x74\x74\x65\x72\x6e\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x2d\x6e\x61\x6d\x65\x12\x70\x61\x74\x74\x65\x72\x6e"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x3f\x16\x6d\x61\x6b\x65\x2d"
  "\x70\x61\x74\x74\x65\x72\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x1d\x70\x61\x74\x74\x65\x72\x6e\x2d\x63\x6f\x6e\x74\x61\x69\x6e"
  "\x73\x2d\x64\x75\x70\x6c\x69\x63\x61\x74\x65\x73\x3f\x19\x67\x65"
  "\x6e\x65\x72\x61\x74\x65\x2d\x70\x61\x74\x74\x65\x72\x6e\x2d\x6d"
  "\x61\x74\x63\x68\x65\x72\x11\x70\x61\x74\x74\x65\x72\x6e\x2d\x6c"
  "\x6f\x6f\x6b\x75\x70\x2d\x32\x11\x70\x61\x74\x74\x65\x72\x6e\x2d"
  "\x6c\x6f\x6f\x6b\x75\x70\x2d\x31\x0f\x70\x61\x74\x74\x65\x72\x6e"
  "\x2d\x6c\x6f\x6f\x6b\x75\x70\x0b\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02"
  "\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
pmlook_so_data_2f6d8555983e016c (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_pmlook_so_data_2f6d8555983e016c [0]))), (sizeof (prog_pmlook_so_data_2f6d8555983e016c)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("pmlook.so", pmlook_so_data_2f6d8555983e016c)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("pmlook.so", "84887a0130aba8be")
