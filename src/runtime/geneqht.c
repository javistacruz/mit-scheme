/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:33-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_9 9
#define ENVIRONMENT_LABEL_1_3 18
#define DEBUGGING_LABEL_1_2 17
#define EXECUTE_CACHE_1_10 11
#define EXECUTE_CACHE_1_8 13
#define EXECUTE_CACHE_1_6 15
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto make_eqht_4;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_eqht_7)
DEFLABEL (make_eqht_4)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_9 11
#define LABEL_2_10 13
#define LABEL_2_11 15
#define LABEL_2_12 17
#define ENVIRONMENT_LABEL_2_3 28
#define DEBUGGING_LABEL_2_2 27
#define OBJECT_2_5 26
#define OBJECT_2_4 25
#define OBJECT_2_3 24
#define OBJECT_2_2 23
#define OBJECT_2_1 22
#define OBJECT_2_0 21
#define EXECUTE_CACHE_2_6 19
#define FREE_REFERENCES_LABEL_2_0 18
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_2_4);
      goto eqht_get_13;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto loop_10;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_2_12);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eqht_get_21)
DEFLABEL (eqht_get_13)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_25)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_24;
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_24;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd27.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_24;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd24.pObj) = (& ((Wrd28.pObj) [(Wrd22.Lng)]));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_23)
  goto loop_10;

DEFLABEL (label_24)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_25;

DEFLABEL (loop_22)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_2_9);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_2_3]))
    goto label_35;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_34;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_33)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);
  (Wrd18.Obj) = (Rsp [2]);
  if ((Wrd16.Obj) == (Wrd18.Obj))
    goto label_29;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_28;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd19.Obj);
  goto loop_10;

DEFLABEL (label_28)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_18)
  (Wrd19.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_32;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);

DEFLABEL (label_31)
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  Rvl = ((Wrd38.pObj) [1]);

DEFLABEL (label_30)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 1);

DEFLABEL (label_19)
  (Wrd28.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 1);

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  Rvl = (Rsp [3]);
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define LABEL_3_11 13
#define LABEL_3_12 15
#define LABEL_3_13 17
#define LABEL_3_14 19
#define LABEL_3_10 21
#define LABEL_3_15 23
#define LABEL_3_17 25
#define LABEL_3_16 27
#define LABEL_3_18 29
#define LABEL_3_19 31
#define LABEL_3_20 33
#define LABEL_3_21 35
#define LABEL_3_22 37
#define LABEL_3_23 39
#define ENVIRONMENT_LABEL_3_3 63
#define DEBUGGING_LABEL_3_2 62
#define OBJECT_3_14 61
#define OBJECT_3_13 60
#define OBJECT_3_12 59
#define OBJECT_3_11 58
#define OBJECT_3_10 57
#define OBJECT_3_9 56
#define OBJECT_3_8 55
#define OBJECT_3_7 54
#define OBJECT_3_6 53
#define OBJECT_3_5 52
#define OBJECT_3_4 51
#define OBJECT_3_3 50
#define OBJECT_3_2 49
#define OBJECT_3_1 48
#define OBJECT_3_0 47
#define EXECUTE_CACHE_3_24 41
#define EXECUTE_CACHE_3_6 43
#define FREE_REFERENCE_3_0 46
#define FREE_REFERENCES_LABEL_3_0 40
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd91;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd29;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd18;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd5;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd36;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_3_4);
      goto eqht_putB_28;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_30;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto loop_25;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto label_35;

    case 6:
      current_block = (Rpc - LABEL_3_12);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_3_13);
      goto label_34;

    case 8:
      current_block = (Rpc - LABEL_3_14);
      goto label_33;

    case 9:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_3_15);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_22;

    case 12:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_3_18);
      goto label_41;

    case 14:
      current_block = (Rpc - LABEL_3_19);
      goto label_37;

    case 15:
      current_block = (Rpc - LABEL_3_20);
      goto label_38;

    case 16:
      current_block = (Rpc - LABEL_3_21);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_3_22);
      goto label_39;

    case 18:
      current_block = (Rpc - LABEL_3_23);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eqht_putB_43)
DEFLABEL (eqht_putB_28)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_48;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_47)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_46;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_46;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) (Wrd30.Lng)) < ((unsigned long) (Wrd34.Lng))))
    goto label_46;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd27.Obj));
  (Wrd25.pObj) = (& ((Wrd32.pObj) [(Wrd22.Lng)]));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_45)
  goto loop_25;

DEFLABEL (label_46)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (loop_44)
DEFLABEL (loop_25)
  INTERRUPT_CHECK (26, LABEL_3_9);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_3_3]))
    goto label_56;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_55;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_54)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);
  (Wrd18.Obj) = (Rsp [4]);
  if ((Wrd16.Obj) == (Wrd18.Obj))
    goto label_51;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_50;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_49)
  (Rsp [0]) = (Wrd19.Obj);
  goto loop_25;

DEFLABEL (label_50)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_7]), 1);

DEFLABEL (label_33)
  (Wrd19.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_51)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_53;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);

DEFLABEL (label_52)
  (Rsp [4]) = (Wrd28.Obj);
  Rsp = (& (Rsp [4]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 2);

DEFLABEL (label_53)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_5]), 1);

DEFLABEL (label_34)
  (Wrd28.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_5]), 1);

DEFLABEL (label_32)
  (Wrd7.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_71;
  Wrd41 = Wrd45;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Rsp [0]) = Rvl;
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_69;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_69;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) (Wrd15.Lng)) < ((unsigned long) (Wrd19.Lng))))
    goto label_69;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd10.pObj) = (& ((Wrd17.pObj) [(Wrd7.Lng)]));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_68)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_3_8]);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_9]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_16);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd96.Obj) = (Rsp [1]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 10))
    goto label_67;
  (Wrd88.Obj) = (Rsp [2]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 26))
    goto label_67;
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd94.Obj) = ((Wrd93.pObj) [0]);
  (Wrd95.Lng) = (FIXNUM_TO_LONG (Wrd94.Obj));
  if (! (((unsigned long) (Wrd91.Lng)) < ((unsigned long) (Wrd95.Lng))))
    goto label_67;
  (Wrd84.uLng) = (OBJECT_DATUM (Wrd88.Obj));
  (Wrd87.pObj) = (& ((Wrd93.pObj) [(Wrd84.Lng)]));
  ((Wrd87.pObj) [1]) = (Wrd7.Obj);

DEFLABEL (label_66)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_65;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_65;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_64)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_63;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_63;
  (Wrd26.Obj) = ((Wrd32.pObj) [2]);

DEFLABEL (label_62)
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd43.Lng) = ((Wrd42.Lng) + 1L);
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd75.Obj) = (Rsp [5]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 62))
    goto label_61;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd74.Lng))))
    goto label_61;
  ((Wrd72.pObj) [2]) = (Wrd44.Obj);

DEFLABEL (label_60)
  (Wrd46.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (Wrd47.Obj) = (* (Rsp++));
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_59;
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd49.uLng) == 26))
    goto label_59;
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if ((Wrd64.Lng) > (Wrd65.Lng))
    goto label_58;

DEFLABEL (label_57)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_3_23);
  Rvl = (current_block [OBJECT_3_14]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_3_17);
  goto label_57;

DEFLABEL (label_59)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_58;

DEFLABEL (label_61)
  (Wrd77.Obj) = (Rsp [5]);
  (Wrd78.Obj) = (current_block [OBJECT_3_12]);
  (Wrd79.Obj) = (Rsp [0]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_13]), 3);

DEFLABEL (label_40)
  goto label_60;

DEFLABEL (label_63)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_3_12]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_38)
  (Wrd26.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_3_11]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd98.Obj) = (Rsp [1]);
  (Wrd99.Obj) = (Rsp [2]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_10]), 3);

DEFLABEL (label_41)
  goto label_66;

DEFLABEL (label_69)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_11])), (Wrd42.pObj));

DEFLABEL (label_35)
  (Wrd41.Obj) = Rvl;
  goto label_70;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define TAG_4_7 2
#define LABEL_4_9 9
#define TAG_4_10 3
#define ENVIRONMENT_LABEL_4_3 19
#define DEBUGGING_LABEL_4_2 18
#define OBJECT_4_2 17
#define OBJECT_4_1 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_11 11
#define EXECUTE_CACHE_4_8 13
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
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
      goto eqht_for_each_6;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto lambda_11;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eqht_for_each_10)
DEFLABEL (eqht_for_each_6)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_6])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_4_6);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_9])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_4_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [1]);
  (Rsp [2]) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_4_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define LABEL_5_9 13
#define LABEL_5_11 15
#define LABEL_5_10 17
#define LABEL_5_12 19
#define LABEL_5_14 21
#define ENVIRONMENT_LABEL_5_3 35
#define DEBUGGING_LABEL_5_2 34
#define OBJECT_5_6 33
#define OBJECT_5_5 32
#define OBJECT_5_4 31
#define OBJECT_5_3 30
#define OBJECT_5_2 29
#define OBJECT_5_1 28
#define OBJECT_5_0 27
#define EXECUTE_CACHE_5_13 23
#define FREE_REFERENCE_5_0 26
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd6;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_5_4);
      goto compute_key_hash_17;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto loop_15;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_key_hash_24)
DEFLABEL (compute_key_hash_17)
  INTERRUPT_CHECK (26, LABEL_5_4);
  goto loop_15;

DEFLABEL (loop_25)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_5_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_36)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_35;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Obj) = (MAKE_OBJECT (26, (Wrd23.uLng)));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_34)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (* (--Rsp)) = Rvl;
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd6.Lng) < 0)
    goto label_27;
  (Wrd8.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_27)
  (Wrd46.Lng) = (~ (Wrd6.Lng));
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));

DEFLABEL (label_26)
DEFLABEL (label_33)
  Rsp = (& (Rsp [1]));
  (Wrd9.Obj) = (* (Rsp++));
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd12.Lng) = (FIXNUM_REMAINDER ((Wrd10.Lng), (Wrd11.Lng)));
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_32;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd34.Lng))))
    goto label_32;
  (Wrd16.Obj) = ((Wrd32.pObj) [7]);
  if (! ((Wrd16.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_29;

DEFLABEL (label_28)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_31;
  Wrd23 = Wrd27;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_6]), 1);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_5_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_6]), 1);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_5_14);
  Rsp = (& (Rsp [1]));
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_11])), (Wrd24.pObj));

DEFLABEL (label_21)
  (Wrd23.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_5_5]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

DEFLABEL (label_35)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 9
#define DEBUGGING_LABEL_6_2 8
#define OBJECT_6_1 7
#define OBJECT_6_0 6
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_6_4);
      goto eq_hash_mod_4;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eq_hash_mod_7)
DEFLABEL (eq_hash_mod_4)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd6.Lng) < 0)
    goto label_9;
  (Wrd8.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_9)
  (Wrd18.Lng) = (~ (Wrd6.Lng));
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = (FIXNUM_REMAINDER ((Wrd10.Lng), (Wrd12.Lng)));
  Rvl = (LONG_TO_FIXNUM (Wrd13.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_5 7
#define LABEL_7_7 9
#define ENVIRONMENT_LABEL_7_3 18
#define DEBUGGING_LABEL_7_2 17
#define OBJECT_7_2 16
#define OBJECT_7_1 15
#define OBJECT_7_0 14
#define FREE_REFERENCE_7_0 11
#define FREE_ASSIGNMENT_7_0 13
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_7_4);
      goto record_address_hash_tableB_1;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_address_hash_tableB_6)
DEFLABEL (record_address_hash_tableB_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_7_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_8 11
#define LABEL_8_9 13
#define ENVIRONMENT_LABEL_8_3 25
#define DEBUGGING_LABEL_8_2 24
#define OBJECT_8_5 23
#define OBJECT_8_4 22
#define OBJECT_8_3 21
#define OBJECT_8_2 20
#define OBJECT_8_1 19
#define OBJECT_8_0 18
#define FREE_REFERENCE_8_0 15
#define FREE_ASSIGNMENT_8_0 17
#define FREE_REFERENCES_LABEL_8_0 14
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd38;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd8;
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
      goto mark_address_hash_tablesB_12;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto loop_10;

    case 4:
      current_block = (Rpc - LABEL_8_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_8_9);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mark_address_hash_tablesB_18)
DEFLABEL (mark_address_hash_tablesB_12)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_21;
  Wrd5 = Wrd9;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto loop_10;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd6.pObj));

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (loop_19)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_8_7);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_8_0])))
    goto label_22;
  Rvl = (current_block [OBJECT_8_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  Wrd38 = Wrd9;
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_24;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd51.Lng))))
    goto label_24;
  (Wrd46.Obj) = (current_block [OBJECT_8_3]);
  ((Wrd49.pObj) [7]) = (Wrd46.Obj);

DEFLABEL (label_23)
  (Wrd41.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [1]);
  (Rsp [1]) = (Wrd42.Obj);
  goto loop_10;

DEFLABEL (label_24)
  (Wrd54.Obj) = (current_block [OBJECT_8_4]);
  (Wrd55.Obj) = (current_block [OBJECT_8_3]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 3);

DEFLABEL (label_16)
  goto label_23;

DEFLABEL (label_25)
  (Wrd11.Obj) = (Rsp [0]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_6);

DEFLABEL (label_26)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);
  (Rsp [1]) = (Wrd35.Obj);
  goto loop_10;

DEFLABEL (label_27)
  (Wrd20.Obj) = ((Wrd8.pObj) [1]);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_0]));
  (Wrd31.Obj) = ((Wrd23.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd23.pObj) [0]) = (Wrd20.Obj);
  goto label_26;

DEFLABEL (label_29)
  if ((Wrd31.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_8])), (Wrd23.pObj), (Wrd20.Obj));

DEFLABEL (label_15)
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define ENVIRONMENT_LABEL_9_3 17
#define DEBUGGING_LABEL_9_2 16
#define OBJECT_9_0 15
#define EXECUTE_CACHE_9_7 9
#define FREE_REFERENCE_9_0 12
#define FREE_ASSIGNMENT_9_0 14
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_9_4);
      goto initialize_address_hashingB_0;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_address_hashingB_5)
DEFLABEL (initialize_address_hashingB_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_0]));
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_8)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_7;
  Wrd17 = Wrd21;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_6])), (Wrd18.pObj));

DEFLABEL (label_3)
  (Wrd17.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_10)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_8 11
#define LABEL_10_12 13
#define LABEL_10_11 15
#define LABEL_10_14 17
#define LABEL_10_10 19
#define ENVIRONMENT_LABEL_10_3 30
#define DEBUGGING_LABEL_10_2 29
#define OBJECT_10_3 28
#define OBJECT_10_2 27
#define OBJECT_10_1 26
#define OBJECT_10_0 25
#define EXECUTE_CACHE_10_13 21
#define EXECUTE_CACHE_10_9 23
#define FREE_REFERENCES_LABEL_10_0 20
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd27;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_10_4);
      goto grow_tableB_11;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_10_14);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (grow_tableB_19)
DEFLABEL (grow_tableB_11)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  goto loop_9;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_10_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (loop_20)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_10_6);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_34;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_33)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_32;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_32;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if ((Wrd45.Lng) > (Wrd47.Lng))
    goto label_24;

DEFLABEL (label_23)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Rsp [1]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (label_24)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Obj) = (current_block [OBJECT_10_3]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_31;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_31;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd25.Lng) > (Wrd27.Lng))
    goto label_30;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd16.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd19.uLng) == 26)
    goto label_26;

DEFLABEL (label_25)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_26)
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd20.Lng) = ((Wrd22.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_25;
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));

DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_9;

DEFLABEL (label_30)
  (Wrd5.Obj) = (Rsp [0]);
  goto label_28;

DEFLABEL (label_31)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

DEFLABEL (label_32)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_24;

DEFLABEL (label_34)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_10_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_33;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (Wrd5.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_9 11
#define LABEL_11_11 13
#define LABEL_11_12 15
#define LABEL_11_13 17
#define ENVIRONMENT_LABEL_11_3 30
#define DEBUGGING_LABEL_11_2 29
#define OBJECT_11_3 28
#define OBJECT_11_2 27
#define OBJECT_11_1 26
#define OBJECT_11_0 25
#define EXECUTE_CACHE_11_14 19
#define EXECUTE_CACHE_11_10 21
#define EXECUTE_CACHE_11_8 23
#define FREE_REFERENCES_LABEL_11_0 18
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_11_4);
      goto shrink_tableB_9;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_11_12);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (shrink_tableB_16)
DEFLABEL (shrink_tableB_9)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  goto loop_7;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (loop_17)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_11_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_27;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) > 4L)
    goto label_21;

DEFLABEL (label_20)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_11_2]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (label_21)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_25)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_24;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_24;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if ((Wrd36.Lng) < (Wrd37.Lng))
    goto label_23;

DEFLABEL (label_22)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Rsp [1]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (label_23)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (Rsp [0]) = Rvl;
  goto loop_7;

DEFLABEL (label_24)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_11_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd18.Obj) = (current_block [OBJECT_11_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define ENVIRONMENT_LABEL_12_3 20
#define DEBUGGING_LABEL_12_2 19
#define OBJECT_12_3 18
#define OBJECT_12_2 17
#define OBJECT_12_1 16
#define OBJECT_12_0 15
#define EXECUTE_CACHE_12_9 11
#define EXECUTE_CACHE_12_8 13
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd24;
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
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
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
      goto new_sizeB_4;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_sizeB_9)
DEFLABEL (new_sizeB_4)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_13;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd33.Lng))))
    goto label_13;
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd31.pObj) [3]) = (Wrd27.Obj);

DEFLABEL (label_12)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_12_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (current_block [OBJECT_12_0]);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 3);

DEFLABEL (label_7)
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_6 5
#define LABEL_13_5 7
#define LABEL_13_8 9
#define LABEL_13_10 11
#define LABEL_13_9 13
#define LABEL_13_14 15
#define LABEL_13_13 17
#define LABEL_13_16 19
#define LABEL_13_17 21
#define LABEL_13_18 23
#define LABEL_13_12 25
#define LABEL_13_19 27
#define LABEL_13_20 29
#define LABEL_13_21 31
#define LABEL_13_22 33
#define LABEL_13_23 35
#define LABEL_13_24 37
#define LABEL_13_25 39
#define ENVIRONMENT_LABEL_13_3 62
#define DEBUGGING_LABEL_13_2 61
#define OBJECT_13_7 60
#define OBJECT_13_6 59
#define OBJECT_13_5 58
#define OBJECT_13_4 57
#define OBJECT_13_3 56
#define OBJECT_13_2 55
#define OBJECT_13_1 54
#define OBJECT_13_0 53
#define EXECUTE_CACHE_13_27 41
#define EXECUTE_CACHE_13_26 43
#define EXECUTE_CACHE_13_15 45
#define EXECUTE_CACHE_13_11 47
#define EXECUTE_CACHE_13_7 49
#define FREE_REFERENCE_13_0 52
#define FREE_REFERENCES_LABEL_13_0 40
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto reset_tableB_21;

    case 1:
      current_block = (Rpc - LABEL_13_6);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_13_14);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_13_13);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_13_16);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_13_17);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_13_18);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_13_19);
      goto loop_14;

    case 13:
      current_block = (Rpc - LABEL_13_20);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_13_21);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_13_22);
      goto label_31;

    case 16:
      current_block = (Rpc - LABEL_13_23);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_13_24);
      goto continuation_18;

    case 18:
      current_block = (Rpc - LABEL_13_25);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_tableB_33)
DEFLABEL (reset_tableB_21)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_50;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_50;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd5.Obj) = Rvl;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_48;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_48;
  ((Wrd30.pObj) [4]) = Rvl;

DEFLABEL (label_47)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_46;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_46;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_44;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_44;
  (Wrd13.Obj) = ((Wrd17.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_13);
  (Wrd5.Obj) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_42;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_42;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd41.Lng) < (Wrd42.Lng))
    goto label_39;

DEFLABEL (label_38)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_37;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd24.Lng))))
    goto label_37;
  (Wrd16.Obj) = ((Wrd22.pObj) [6]);

DEFLABEL (label_36)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_35)
  goto loop_14;

DEFLABEL (label_37)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_13_4]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_28)
  (Wrd16.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_41;
  Wrd34 = Wrd38;

DEFLABEL (label_40)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd34.Obj);
  goto label_35;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_18])), (Wrd35.pObj));

DEFLABEL (label_29)
  (Wrd34.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_39;

DEFLABEL (label_44)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (current_block [OBJECT_13_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_13_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_13_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 3);

DEFLABEL (label_25)
  goto label_47;

DEFLABEL (label_50)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_13_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13_12);
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (loop_34)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_13_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13_20);
  (Wrd5.Obj) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_57;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_57;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd48.Lng) > (Wrd49.Lng)))
    goto label_52;

DEFLABEL (label_51)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_25]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_13_25);
  (Rsp [0]) = Rvl;
  goto loop_14;

DEFLABEL (label_52)
  (Wrd16.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_56;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd34.Lng))))
    goto label_56;
  ((Wrd32.pObj) [6]) = (Wrd16.Obj);

DEFLABEL (label_55)
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_13_5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_24]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_15]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_13_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_27]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_13_23);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_13_6]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_54;

DEFLABEL (label_53)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 3);

DEFLABEL (label_54)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_53;
  ((Wrd15.pObj) [5]) = Rvl;
  Rvl = (current_block [OBJECT_13_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_13_4]);
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_22]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 3);

DEFLABEL (label_31)
  goto label_55;

DEFLABEL (label_57)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_51;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define ENVIRONMENT_LABEL_14_3 18
#define DEBUGGING_LABEL_14_2 17
#define OBJECT_14_1 16
#define OBJECT_14_0 15
#define EXECUTE_CACHE_14_9 11
#define EXECUTE_CACHE_14_8 13
#define FREE_REFERENCES_LABEL_14_0 10
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_14_4);
      goto compute_shrink_size_3;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_shrink_size_7)
DEFLABEL (compute_shrink_size_3)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_10;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) > 4L)
    goto label_9;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_14_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd13.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (label_10)
  (Wrd22.Obj) = (current_block [OBJECT_14_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_6 9
#define ENVIRONMENT_LABEL_15_3 15
#define DEBUGGING_LABEL_15_2 14
#define OBJECT_15_0 13
#define EXECUTE_CACHE_15_8 11
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_15_4);
      goto decrement_size_4;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decrement_size_8)
DEFLABEL (decrement_size_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_0)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_13;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_13;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd26.Lng) < (Wrd28.Lng)))
    goto label_10;

DEFLABEL (label_9)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 26)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_12)
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_11;
  Rvl = (LONG_TO_FIXNUM (Wrd18.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_7 9
#define LABEL_16_8 11
#define LABEL_16_10 13
#define ENVIRONMENT_LABEL_16_3 26
#define DEBUGGING_LABEL_16_2 25
#define OBJECT_16_5 24
#define OBJECT_16_4 23
#define OBJECT_16_3 22
#define OBJECT_16_2 21
#define OBJECT_16_1 20
#define OBJECT_16_0 19
#define EXECUTE_CACHE_16_11 15
#define EXECUTE_CACHE_16_9 17
#define FREE_REFERENCES_LABEL_16_0 14
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd40;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_16_4);
      goto rehash_table_from_old_bucketsB_13;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_16_8);
      goto do_loop_10;

    case 5:
      current_block = (Rpc - LABEL_16_10);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rehash_table_from_old_bucketsB_19)
DEFLABEL (rehash_table_from_old_bucketsB_13)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_24;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_23)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_22;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd25.Lng))))
    goto label_22;
  ((Wrd23.pObj) [7]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_21)
  (Wrd16.Obj) = (current_block [OBJECT_16_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto do_loop_10;

DEFLABEL (label_22)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (current_block [OBJECT_16_1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 3);

DEFLABEL (label_16)
  goto label_21;

DEFLABEL (label_24)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (do_loop_20)
DEFLABEL (do_loop_10)
  INTERRUPT_CHECK (26, LABEL_16_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_25;
  Rsp = (& (Rsp [2]));
  (Wrd40.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (label_25)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_29;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_29;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_29;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_28)
  (Wrd31.Obj) = (Rsp [0]);
  if ((Wrd31.Obj) == (current_block [OBJECT_16_5]))
    goto label_26;
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (label_26)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_27)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd38.Lng) = ((Wrd37.Lng) + 1L);
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (Rsp [0]) = (Wrd35.Obj);
  goto do_loop_10;

DEFLABEL (label_29)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_7);
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define LABEL_17_8 11
#define LABEL_17_9 13
#define LABEL_17_10 15
#define LABEL_17_11 17
#define LABEL_17_12 19
#define LABEL_17_13 21
#define LABEL_17_14 23
#define LABEL_17_15 25
#define LABEL_17_16 27
#define ENVIRONMENT_LABEL_17_3 43
#define DEBUGGING_LABEL_17_2 42
#define OBJECT_17_13 41
#define OBJECT_17_12 40
#define OBJECT_17_11 39
#define OBJECT_17_10 38
#define OBJECT_17_9 37
#define OBJECT_17_8 36
#define OBJECT_17_7 35
#define OBJECT_17_6 34
#define OBJECT_17_5 33
#define OBJECT_17_4 32
#define OBJECT_17_3 31
#define OBJECT_17_2 30
#define OBJECT_17_1 29
#define OBJECT_17_0 28
#define FREE_REFERENCES_LABEL_17_0 28
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd47;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd128;
  machine_word Wrd126;
  machine_word Wrd134;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd143;
  machine_word Wrd136;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd94;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd103;
  machine_word Wrd101;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd147;
  machine_word Wrd86;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_17_4);
      goto rehash_table_entriesB_25;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_17_8);
      goto label_34;

    case 5:
      current_block = (Rpc - LABEL_17_9);
      goto label_35;

    case 6:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_17_11);
      goto loop_21;

    case 8:
      current_block = (Rpc - LABEL_17_12);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_17_13);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_17_14);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_17_15);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_17_16);
      goto label_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rehash_table_entriesB_37)
DEFLABEL (rehash_table_entriesB_25)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_42;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_42;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_41)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_40;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_39)
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  goto loop_21;

DEFLABEL (label_40)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_17_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (loop_38)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_17_11);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_17_6])))
    goto label_43;
  Rvl = (current_block [OBJECT_17_7]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_63;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_62)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_61;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_60)
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd74.Obj) = (Rsp [3]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_55;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [0]);

DEFLABEL (label_54)
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (current_block [OBJECT_17_12]);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_13]), 2);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (* (--Rsp)) = Rvl;
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd86.Lng) < 0)
    goto label_45;
  (Wrd88.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_45)
  (Wrd147.Lng) = (~ (Wrd86.Lng));
  (Wrd88.Obj) = (LONG_TO_FIXNUM (Wrd147.Lng));

DEFLABEL (label_44)
DEFLABEL (label_53)
  Rsp = (& (Rsp [1]));
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  (Wrd90.Obj) = (Rsp [3]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  (Wrd92.Lng) = (FIXNUM_REMAINDER ((Wrd89.Lng), (Wrd91.Lng)));
  (Wrd93.Obj) = (LONG_TO_FIXNUM (Wrd92.Lng));
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd108.Obj) = (Rsp [5]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 10))
    goto label_52;
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd101.uLng) == 26))
    goto label_52;
  Wrd103 = Wrd92;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  if (! (((unsigned long) (Wrd103.Lng)) < ((unsigned long) (Wrd107.Lng))))
    goto label_52;
  (Wrd96.uLng) = (OBJECT_DATUM (Wrd93.Obj));
  (Wrd99.pObj) = (& ((Wrd105.pObj) [(Wrd96.Lng)]));
  (Wrd94.Obj) = ((Wrd99.pObj) [1]);

DEFLABEL (label_51)
  (Wrd137.Obj) = (Rsp [3]);
  (Wrd138.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if (! ((Wrd138.uLng) == 1))
    goto label_50;
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  ((Wrd136.pObj) [1]) = (Wrd94.Obj);

DEFLABEL (label_49)
  (Wrd115.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd116.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd116.Obj);
  (Wrd117.Obj) = (Rsp [5]);
  (Rsp [2]) = (Wrd117.Obj);
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if ((Wrd134.uLng) == 10)
    goto label_47;

DEFLABEL (label_46)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_5]), 3);

DEFLABEL (label_47)
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd126.uLng) == 26))
    goto label_46;
  (Wrd128.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  (Wrd130.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd131.Obj) = ((Wrd130.pObj) [0]);
  (Wrd132.Lng) = (FIXNUM_TO_LONG (Wrd131.Obj));
  if (! (((unsigned long) (Wrd128.Lng)) < ((unsigned long) (Wrd132.Lng))))
    goto label_46;
  (Wrd120.uLng) = (OBJECT_DATUM (Wrd115.Obj));
  (Wrd123.pObj) = (& ((Wrd130.pObj) [(Wrd120.Lng)]));
  ((Wrd123.pObj) [1]) = (Wrd117.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_48)
  (Wrd47.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd47.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_21;

DEFLABEL (label_50)
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_4]), 2);

DEFLABEL (label_35)
  goto label_49;

DEFLABEL (label_52)
  (Wrd110.Obj) = (Rsp [5]);
  (Wrd111.Obj) = (Rsp [0]);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_3]), 2);

DEFLABEL (label_34)
  (Wrd94.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_55)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_9]), 1);

DEFLABEL (label_33)
  (Wrd71.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_59;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd36.Lng))))
    goto label_59;
  (Wrd28.Obj) = ((Wrd34.pObj) [2]);

DEFLABEL (label_58)
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd46.Lng) = ((Wrd45.Lng) - 1L);
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  (Wrd57.Obj) = (Rsp [4]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_57;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd56.Lng))))
    goto label_57;
  ((Wrd54.pObj) [2]) = (Wrd44.Obj);
  goto label_48;

DEFLABEL (label_57)
  (Wrd59.Obj) = (Rsp [4]);
  (Wrd60.Obj) = (current_block [OBJECT_17_10]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_11]), 3);

DEFLABEL (label_32)
  goto label_48;

DEFLABEL (label_59)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.Obj) = (current_block [OBJECT_17_10]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_31)
  (Wrd28.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_9]), 1);

DEFLABEL (label_30)
  (Wrd16.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_8]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17_10);
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define ENVIRONMENT_LABEL_18_3 18
#define DEBUGGING_LABEL_18_2 17
#define OBJECT_18_3 16
#define OBJECT_18_2 15
#define OBJECT_18_1 14
#define OBJECT_18_0 13
#define EXECUTE_CACHE_18_8 11
#define FREE_REFERENCES_LABEL_18_0 10
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_18_4);
      goto maybe_shrink_tableB_3;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_shrink_tableB_9)
DEFLABEL (maybe_shrink_tableB_3)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_14;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_14;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_13)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_12;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_12;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if ((Wrd48.Lng) < (Wrd49.Lng))
    goto label_11;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_18_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (label_12)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_11;

DEFLABEL (label_14)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_18_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_6)
  (Wrd21.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_18_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_9 9
#define ENVIRONMENT_LABEL_19_3 20
#define DEBUGGING_LABEL_19_2 19
#define OBJECT_19_1 18
#define OBJECT_19_0 17
#define EXECUTE_CACHE_19_10 11
#define EXECUTE_CACHE_19_8 13
#define EXECUTE_CACHE_19_7 15
#define FREE_REFERENCES_LABEL_19_0 10
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto rehash_tableB_4;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_19_9);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rehash_tableB_8)
DEFLABEL (rehash_tableB_4)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_10;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd14.Lng))))
    goto label_10;
  ((Wrd12.pObj) [7]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (label_10)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_19_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 3);

DEFLABEL (label_6)
  goto label_9;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define LABEL_20_8 11
#define LABEL_20_9 13
#define LABEL_20_10 15
#define LABEL_20_11 17
#define LABEL_20_12 19
#define LABEL_20_13 21
#define ENVIRONMENT_LABEL_20_3 32
#define DEBUGGING_LABEL_20_2 31
#define OBJECT_20_8 30
#define OBJECT_20_7 29
#define OBJECT_20_6 28
#define OBJECT_20_5 27
#define OBJECT_20_4 26
#define OBJECT_20_3 25
#define OBJECT_20_2 24
#define OBJECT_20_1 23
#define OBJECT_20_0 22
#define FREE_REFERENCES_LABEL_20_0 22
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd6;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd88;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd95;
  machine_word Wrd98;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd89;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_20_4);
      goto extract_table_entriesB_22;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto loop_13;

    case 4:
      current_block = (Rpc - LABEL_20_8);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_20_9);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_20_11);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_20_12);
      goto do_loop_17;

    case 9:
      current_block = (Rpc - LABEL_20_13);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (extract_table_entriesB_30)
DEFLABEL (extract_table_entriesB_22)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_36;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_36;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_35)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_34;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_33)
  (Wrd35.Obj) = (current_block [OBJECT_20_3]);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd33.pObj) = (& (Rhp [-1]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd36.Obj);
  goto do_loop_17;

DEFLABEL (label_34)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_20_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_35;

DEFLABEL (do_loop_32)
DEFLABEL (do_loop_17)
  INTERRUPT_CHECK (26, LABEL_20_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_37;
  Rsp = (& (Rsp [1]));
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  Rvl = ((Wrd45.pObj) [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_44;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_44;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_44;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_43)
  (Wrd31.Obj) = (Rsp [0]);
  if ((Wrd31.Obj) == (current_block [OBJECT_20_3]))
    goto label_42;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  goto loop_13;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20_10);

DEFLABEL (label_41)
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = (Rsp [0]);
  ((Wrd48.pObj) [0]) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_20_3]);
  (Rsp [2]) = (Wrd52.Obj);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd69.uLng) == 10)
    goto label_39;

DEFLABEL (label_38)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_7]), 3);

DEFLABEL (label_39)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_38;
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) (Wrd63.Lng)) < ((unsigned long) (Wrd67.Lng))))
    goto label_38;
  (Wrd55.uLng) = (OBJECT_DATUM (Wrd50.Obj));
  (Wrd58.pObj) = (& ((Wrd65.pObj) [(Wrd55.Lng)]));
  ((Wrd58.pObj) [1]) = (Wrd52.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_40)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd41.Lng) = ((Wrd40.Lng) + 1L);
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  (Rsp [0]) = (Wrd38.Obj);
  goto do_loop_17;

DEFLABEL (label_42)
  Rsp = (& (Rsp [2]));
  goto label_40;

DEFLABEL (label_44)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_8]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_11);
  goto label_40;

DEFLABEL (loop_31)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_20_7);
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_50;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_49)
  if ((Wrd70.Obj) == (current_block [OBJECT_20_3]))
    goto label_47;
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_46;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd80.Obj) = ((Wrd82.pObj) [1]);

DEFLABEL (label_45)
  (Rsp [0]) = (Wrd80.Obj);
  goto loop_13;

DEFLABEL (label_46)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 1);

DEFLABEL (label_28)
  (Wrd80.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd89.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd91.Obj) = (Rsp [6]);
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd90.Obj) = ((Wrd92.pObj) [0]);
  (Rsp [1]) = (Wrd90.Obj);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd98.uLng) == 1)
    goto label_48;
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_6]), 2);

DEFLABEL (label_48)
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  ((Wrd95.pObj) [1]) = (Wrd90.Obj);
  Rsp = (& (Rsp [3]));
  goto label_41;

DEFLABEL (label_50)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 1);

DEFLABEL (label_27)
  (Wrd70.Obj) = Rvl;
  goto label_49;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 6
#define DEBUGGING_LABEL_21_2 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  Rvl = (current_block [OBJECT_21_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 6
#define DEBUGGING_LABEL_22_2 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  Rvl = (current_block [OBJECT_22_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 6
#define DEBUGGING_LABEL_23_2 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  Rvl = (current_block [OBJECT_23_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 9
#define DEBUGGING_LABEL_24_2 8
#define FREE_REFERENCE_24_0 7
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 7
#define DEBUGGING_LABEL_25_2 6
#define OBJECT_25_1 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto table_count_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (table_count_3)
DEFLABEL (table_count_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

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

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 7
#define DEBUGGING_LABEL_26_2 6
#define OBJECT_26_1 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto table_grow_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (table_grow_size_3)
DEFLABEL (table_grow_size_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

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

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 7
#define DEBUGGING_LABEL_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto table_shrink_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (table_shrink_size_3)
DEFLABEL (table_shrink_size_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

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

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 7
#define DEBUGGING_LABEL_28_2 6
#define OBJECT_28_1 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto table_buckets_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (table_buckets_3)
DEFLABEL (table_buckets_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

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

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 7
#define DEBUGGING_LABEL_29_2 6
#define OBJECT_29_1 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto table_primes_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (table_primes_3)
DEFLABEL (table_primes_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 7
#define DEBUGGING_LABEL_30_2 6
#define OBJECT_30_1 5
#define OBJECT_30_0 4
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto table_needs_rehashP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (table_needs_rehashP_3)
DEFLABEL (table_needs_rehashP_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_30_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 8
#define DEBUGGING_LABEL_31_2 7
#define OBJECT_31_2 6
#define OBJECT_31_1 5
#define OBJECT_31_0 4
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_31_4);
      goto set_table_countB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_table_countB_3)
DEFLABEL (set_table_countB_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_31_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_31_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 8
#define DEBUGGING_LABEL_32_2 7
#define OBJECT_32_2 6
#define OBJECT_32_1 5
#define OBJECT_32_0 4
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_32_4);
      goto set_table_grow_sizeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_table_grow_sizeB_3)
DEFLABEL (set_table_grow_sizeB_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_32_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_32_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 8
#define DEBUGGING_LABEL_33_2 7
#define OBJECT_33_2 6
#define OBJECT_33_1 5
#define OBJECT_33_0 4
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_33_4);
      goto set_table_shrink_sizeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_table_shrink_sizeB_3)
DEFLABEL (set_table_shrink_sizeB_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_33_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_33_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 8
#define DEBUGGING_LABEL_34_2 7
#define OBJECT_34_2 6
#define OBJECT_34_1 5
#define OBJECT_34_0 4
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_34_4);
      goto set_table_bucketsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_table_bucketsB_3)
DEFLABEL (set_table_bucketsB_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_34_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_34_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 8
#define DEBUGGING_LABEL_35_2 7
#define OBJECT_35_2 6
#define OBJECT_35_1 5
#define OBJECT_35_0 4
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_35_4);
      goto set_table_primesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_table_primesB_3)
DEFLABEL (set_table_primesB_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_35_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_35_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 8
#define DEBUGGING_LABEL_36_2 7
#define OBJECT_36_2 6
#define OBJECT_36_1 5
#define OBJECT_36_0 4
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_36_4);
      goto set_table_needs_rehashPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_table_needs_rehashPB_3)
DEFLABEL (set_table_needs_rehashPB_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_36_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_36_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define LABEL_37_7 9
#define ENVIRONMENT_LABEL_37_3 17
#define DEBUGGING_LABEL_37_2 16
#define OBJECT_37_3 15
#define OBJECT_37_2 14
#define OBJECT_37_1 13
#define OBJECT_37_0 12
#define FREE_REFERENCE_37_0 11
#define FREE_REFERENCES_LABEL_37_0 10
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto eqhtP_4;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_37_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eqhtP_10)
DEFLABEL (eqhtP_4)
  INTERRUPT_CHECK (26, LABEL_37_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
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
  Rvl = (current_block [OBJECT_37_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_37_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_6 5
#define LABEL_38_5 7
#define LABEL_38_7 9
#define LABEL_38_8 11
#define ENVIRONMENT_LABEL_38_3 17
#define DEBUGGING_LABEL_38_2 16
#define OBJECT_38_1 15
#define OBJECT_38_0 14
#define FREE_REFERENCE_38_0 13
#define FREE_REFERENCES_LABEL_38_0 12
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_38_4);
      goto without_interrupts_4;

    case 1:
      current_block = (Rpc - LABEL_38_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (without_interrupts_8)
DEFLABEL (without_interrupts_4)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_8);
  Rvl = (current_block [OBJECT_38_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_6])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 7
#define DEBUGGING_LABEL_39_2 6
#define OBJECT_39_1 5
#define OBJECT_39_0 4
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
geneqht_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto weak_cons_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (weak_cons_3)
DEFLABEL (weak_cons_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 3);

INVOKE_INTERFACE_TARGET_1
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
#define LABEL_19 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_20 27
#define LABEL_21 29
#define LABEL_22 31
#define ENVIRONMENT_LABEL_3 64
#define DEBUGGING_LABEL_2 63
#define PURIFICATION_ROOT 62
#define OBJECT_19 61
#define OBJECT_18 60
#define OBJECT_17 59
#define OBJECT_16 58
#define OBJECT_15 57
#define OBJECT_14 56
#define OBJECT_13 55
#define OBJECT_12 54
#define OBJECT_11 53
#define OBJECT_10 52
#define OBJECT_9 51
#define OBJECT_8 50
#define OBJECT_7 49
#define OBJECT_6 48
#define OBJECT_5 47
#define OBJECT_4 46
#define OBJECT_3 45
#define OBJECT_2 44
#define OBJECT_1 43
#define OBJECT_0 42
#define FREE_REFERENCE_1 33
#define FREE_REFERENCE_0 34
#define GLOBAL_EXECUTE_CACHE_12 36
#define GLOBAL_EXECUTE_CACHE_8 38
#define GLOBAL_EXECUTE_CACHE_5 40
#define FREE_REFERENCES_LABEL_0 32
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
geneqht_so_d7905b44e170fc10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
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
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto Z__make_eqht_23;

    case 9:
      current_block = (Rpc - LABEL_19);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto label_26;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto expression_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_18)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_21])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_26)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_25)
  {
    static const short sections [] =
      {
	0,
	0,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	0,
	0,
	0,
	0,
	1,
	1,
	0,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	3,
	2,
	2,
	0,
	2,
	1,
	2,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 39)
      goto label_24;
    blocks = (current_block [OBJECT_19]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_20])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_24)
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
  (Wrd20.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_6]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_30;
  Wrd11 = Wrd15;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_28;
  Wrd11 = Wrd15;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_17]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_20)
  (Wrd11.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_19)
  (Wrd11.Obj) = Rvl;
  goto label_29;

DEFLABEL (Z__make_eqht_23)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (Z__make_eqht_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_32;
  Wrd6 = Wrd10;

DEFLABEL (label_31)
  (Wrd21.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_14]);
  (Wrd26.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd14.pObj) = (& (Rhp [-8]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd14.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd7.pObj));

DEFLABEL (label_21)
  (Wrd6.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_geneqht_so_d7905b44e170fc10 [39] =
  {
    { "geneqht_so_code_1", 4, geneqht_so_code_1 },
    { "geneqht_so_code_2", 8, geneqht_so_code_2 },
    { "geneqht_so_code_3", 19, geneqht_so_code_3 },
    { "geneqht_so_code_4", 4, geneqht_so_code_4 },
    { "geneqht_so_code_5", 10, geneqht_so_code_5 },
    { "geneqht_so_code_6", 2, geneqht_so_code_6 },
    { "geneqht_so_code_7", 4, geneqht_so_code_7 },
    { "geneqht_so_code_8", 6, geneqht_so_code_8 },
    { "geneqht_so_code_9", 3, geneqht_so_code_9 },
    { "geneqht_so_code_10", 9, geneqht_so_code_10 },
    { "geneqht_so_code_11", 8, geneqht_so_code_11 },
    { "geneqht_so_code_12", 4, geneqht_so_code_12 },
    { "geneqht_so_code_13", 19, geneqht_so_code_13 },
    { "geneqht_so_code_14", 4, geneqht_so_code_14 },
    { "geneqht_so_code_15", 4, geneqht_so_code_15 },
    { "geneqht_so_code_16", 6, geneqht_so_code_16 },
    { "geneqht_so_code_17", 13, geneqht_so_code_17 },
    { "geneqht_so_code_18", 4, geneqht_so_code_18 },
    { "geneqht_so_code_19", 4, geneqht_so_code_19 },
    { "geneqht_so_code_20", 10, geneqht_so_code_20 },
    { "geneqht_so_code_21", 1, geneqht_so_code_21 },
    { "geneqht_so_code_22", 1, geneqht_so_code_22 },
    { "geneqht_so_code_23", 1, geneqht_so_code_23 },
    { "geneqht_so_code_24", 2, geneqht_so_code_24 },
    { "geneqht_so_code_25", 1, geneqht_so_code_25 },
    { "geneqht_so_code_26", 1, geneqht_so_code_26 },
    { "geneqht_so_code_27", 1, geneqht_so_code_27 },
    { "geneqht_so_code_28", 1, geneqht_so_code_28 },
    { "geneqht_so_code_29", 1, geneqht_so_code_29 },
    { "geneqht_so_code_30", 1, geneqht_so_code_30 },
    { "geneqht_so_code_31", 1, geneqht_so_code_31 },
    { "geneqht_so_code_32", 1, geneqht_so_code_32 },
    { "geneqht_so_code_33", 1, geneqht_so_code_33 },
    { "geneqht_so_code_34", 1, geneqht_so_code_34 },
    { "geneqht_so_code_35", 1, geneqht_so_code_35 },
    { "geneqht_so_code_36", 1, geneqht_so_code_36 },
    { "geneqht_so_code_37", 4, geneqht_so_code_37 },
    { "geneqht_so_code_38", 5, geneqht_so_code_38 },
    { "geneqht_so_code_39", 1, geneqht_so_code_39 }
  };

int
decl_geneqht_so_d7905b44e170fc10 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_geneqht_so_d7905b44e170fc10);
  return (0);
}

DECLARE_COMPILED_CODE ("geneqht.so", 15, decl_geneqht_so_d7905b44e170fc10, geneqht_so_d7905b44e170fc10)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_geneqht_so_data_d7905b44e170fc10 [3757] =
  "\x4e\x3c\xe2\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9\x28"
  "\x0d\xba\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbc\x1d\xb0\x82\x88\xc1\xbd\xc1\xbe\x08\xc2\xbf\xc2\x1c\x84"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x1d\xc3\x1c\x81"
  "\x82\xc3\x1c\xc3\x1c\x02\xb5\xc2\x1c\xb6\xc1\x1c\x08\xb7\x1b\x84"
  "\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x84\x88\x1d\x1b\x84\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x1b"
  "\x86\xc2\x1c\x02\xc1\x1c\x1b\x84\x1b\x24\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1b\x02\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x02\x0d\x1c\x25\x1b\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x86\x07\x1b\x1d\x08\x1b\x25\x1b\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b"
  "\x25\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x09\x81\x1b\x82\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x84\x1b\x82\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x84\x1b\x82\x28\xb2\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x84\x08\x85\x1b\x83\x1b"
  "\x82\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x84\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x09\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\xb7\x80\x1b\x86\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x1b\x81\xb6\xb5\x1d"
  "\x08\x1b\xc2\x1c\xb7\x1b\x1b\x84\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x02\x88\x1d\x81\x1b\x83\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x86\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x1b\x1b\xb5"
  "\x80\x08\x1b\x1b\x84\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x80\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x84\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\x80\x22\x29\x21\x9d\x2b\xbf\x1d\xb0"
  "\x02\x88\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x02\x88"
  "\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x81\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x86\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\xc1\x0e\x1c\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x17\x1c\x88\x1b\x1b"
  "\x1b\x2a\x1b\x2a\x84\x1b\x2a\x9b\x0d\x0d\x0d\x0d\x9b\x84\x80\xb1"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x17\xc3\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x08\x8d\x1b\x2a\x1b\x2a\xb7\x2a\xb5\x2a\x08\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\xb2\x1b\x1b\x1b\x0d\x1b\x1b\xb3\x0d\x1b\x0d\x0d\x0d\x0d"
  "\x17\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb4\x2a\x17\x28\x0d\x28\x0d\x28"
  "\x0d\x26\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x56\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e"
  "\x2f\x67\x65\x6e\x65\x71\x68\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x02\x0b\x25\x6d\x61\x6b\x65\x2d\x65\x71\x68\x74\x03\x0d"
  "\x72\x65\x73\x65\x74\x2d\x74\x61\x62\x6c\x65\x21\x03\x1b\x72\x65"
  "\x63\x6f\x72\x64\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x68\x61\x73"
  "\x68\x2d\x74\x61\x62\x6c\x65\x21\x04\x13\x0a\x81\x83\x02\x12\x08"
  "\x81\x83\x02\x11\x06\x81\x81\x02\x10\x04\x82\x02\x09\x13\x02\x04"
  "\x63\x64\x72\x04\x63\x61\x72\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72"
  "\x65\x66\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x09\x04"
  "\x11\x63\x6f\x6d\x70\x75\x74\x65\x2d\x6b\x65\x79\x2d\x68\x61\x73"
  "\x68\x0a\x02\x1b\x12\x81\x89\x02\x1a\x10\x81\x89\x02\x19\x0e\x81"
  "\x89\x02\x18\x0c\x81\x89\x02\x17\x0a\x81\x87\x02\x16\x08\x81\x89"
  "\x02\x15\x06\x81\x87\x02\x14\x04\x85\x08\x11\x1d\x0b\x02\x02\x0d"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x0c\x0c\x76\x65"
  "\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x0d\x11\x73\x79\x73\x74\x65"
  "\x6d\x2d\x70\x61\x69\x72\x2d\x63\x6f\x6e\x73\x0e\x38\x15\x73\x79"
  "\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x73\x65\x74\x2d\x63\x64"
  "\x72\x21\x0f\x17\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x72\x75\x70"
  "\x74\x2d\x65\x6e\x61\x62\x6c\x65\x73\x21\x10\x09\x15\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x2f\x67\x63\x2d\x6f"
  "\x6b\x11\x02\x04\x0a\x03\x0c\x67\x72\x6f\x77\x2d\x74\x61\x62\x6c"
  "\x65\x21\x12\x03\x2e\x28\x81\x8d\x02\x2d\x26\x81\x8d\x02\x2c\x24"
  "\x81\x91\x02\x2b\x22\x81\x8f\x02\x2a\x20\x81\x8d\x02\x29\x1e\x81"
  "\x8d\x02\x28\x1c\x81\x8f\x02\x27\x1a\x81\x8d\x02\x26\x18\x81\x8d"
  "\x02\x25\x16\x81\x8d\x02\x24\x14\x81\x8d\x02\x23\x12\x81\x8d\x02"
  "\x22\x10\x81\x8d\x02\x21\x0e\x81\x8f\x02\x20\x0c\x81\x8d\x02\x1f"
  "\x0a\x81\x8b\x02\x1e\x08\x81\x89\x02\x1d\x06\x81\x87\x02\x1c\x04"
  "\x85\x08\x27\x40\x13\x02\x02\x09\x04\x18\x66\x6f\x72\x2d\x65\x61"
  "\x63\x68\x2d\x76\x65\x63\x74\x6f\x72\x2d\x65\x6c\x65\x6d\x65\x6e"
  "\x74\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x03\x32\x0a\x81\x85"
  "\x02\x31\x08\x81\x85\x02\x30\x06\x81\x85\x02\x2f\x04\x84\x06\x09"
  "\x14\x14\x02\x10\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x15\x1b"
  "\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x16\x09"
  "\x11\x02\x03\x0e\x72\x65\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x21\x17\x02\x3c\x16\x81\x89\x02\x3b\x14\x81\x89\x02\x3a\x12\x81"
  "\x87\x02\x39\x10\x81\x89\x02\x38\x0e\x81\x87\x02\x37\x0c\x81\x87"
  "\x02\x36\x0a\x81\x85\x02\x35\x08\x81\x85\x02\x34\x06\x81\x85\x02"
  "\x33\x04\x84\x06\x15\x24\x18\x02\x15\x1b\x3e\x06\x81\x85\x02\x3d"
  "\x04\x84\x06\x05\x0a\x19\x02\x08\x02\x0e\x38\x14\x61\x64\x64\x72"
  "\x65\x73\x73\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x73\x1a"
  "\x02\x1a\x02\x42\x0a\x81\x83\x02\x41\x08\x81\x83\x02\x40\x06\x81"
  "\x85\x02\x3f\x04\x83\x04\x09\x13\x1b\x02\x09\x0c\x0f\x02\x1a\x02"
  "\x1a\x02\x48\x0e\x81\x85\x02\x47\x0c\x81\x85\x02\x46\x0a\x81\x85"
  "\x02\x45\x08\x81\x85\x02\x44\x06\x81\x81\x02\x43\x04\x82\x02\x0d"
  "\x1a\x0f\x02\x0a\x1a\x02\x1a\x6d\x61\x72\x6b\x2d\x61\x64\x64\x72"
  "\x65\x73\x73\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x73\x21"
  "\x1c\x02\x03\x19\x61\x64\x64\x2d\x70\x72\x69\x6d\x69\x74\x69\x76"
  "\x65\x2d\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e\x21\x02\x4b\x08\x81"
  "\x81\x02\x4a\x06\x81\x81\x02\x49\x04\x82\x02\x07\x12\x1d\x02\x0b"
  "\x03\x32\x2e\x09\x04\x0a\x6e\x65\x77\x2d\x73\x69\x7a\x65\x21\x1e"
  "\x03\x0d\x72\x6f\x75\x6e\x64\x2d\x3e\x65\x78\x61\x63\x74\x1f\x03"
  "\x54\x14\x81\x85\x02\x53\x12\x81\x83\x02\x52\x10\x81\x87\x02\x51"
  "\x0e\x81\x89\x02\x50\x0c\x81\x85\x02\x4f\x0a\x81\x85\x02\x4e\x08"
  "\x81\x85\x02\x4d\x06\x81\x83\x02\x4c\x04\x83\x04\x13\x1f\x20\x02"
  "\x0c\x09\x04\x1e\x03\x14\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x68"
  "\x72\x69\x6e\x6b\x2d\x73\x69\x7a\x65\x21\x03\x0f\x64\x65\x63\x72"
  "\x65\x6d\x65\x6e\x74\x2d\x73\x69\x7a\x65\x22\x04\x5c\x12\x81\x85"
  "\x02\x5b\x10\x81\x85\x02\x5a\x0e\x81\x87\x02\x59\x0c\x81\x85\x02"
  "\x58\x0a\x81\x85\x02\x57\x08\x81\x85\x02\x56\x06\x81\x83\x02\x55"
  "\x04\x83\x04\x11\x1f\x23\x02\x0d\x09\x0c\x03\x04\x1f\x72\x65\x68"
  "\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2d\x66\x72\x6f\x6d\x2d\x6f"
  "\x6c\x64\x2d\x62\x75\x63\x6b\x65\x74\x73\x21\x24\x03\x60\x0a\x81"
  "\x87\x02\x5f\x08\x81\x85\x02\x5e\x06\x81\x85\x02\x5d\x04\x84\x06"
  "\x09\x15\x25\x02\x0e\x02\x0c\x09\x15\x70\x72\x69\x6d\x65\x2d\x6e"
  "\x75\x6d\x62\x65\x72\x73\x2d\x73\x74\x72\x65\x61\x6d\x26\x02\x03"
  "\x21\x03\x1f\x03\x0b\x73\x74\x72\x65\x61\x6d\x2d\x63\x61\x72\x03"
  "\x0b\x73\x74\x72\x65\x61\x6d\x2d\x63\x64\x72\x04\x0c\x6d\x61\x6b"
  "\x65\x2d\x76\x65\x63\x74\x6f\x72\x06\x73\x28\x81\x87\x02\x72\x26"
  "\x81\x8b\x02\x71\x24\x81\x87\x02\x70\x22\x81\x85\x02\x6f\x20\x81"
  "\x87\x02\x6e\x1e\x81\x87\x02\x6d\x1c\x81\x87\x02\x6c\x1a\x81\x85"
  "\x02\x6b\x18\x81\x87\x02\x6a\x16\x81\x87\x02\x69\x14\x81\x87\x02"
  "\x68\x12\x81\x87\x02\x67\x10\x81\x89\x02\x66\x0e\x81\x83\x02\x65"
  "\x0c\x81\x85\x02\x64\x0a\x81\x83\x02\x63\x08\x81\x83\x02\x62\x06"
  "\x81\x85\x02\x61\x04\x83\x04\x27\x3f\x27\x02\x0f\x03\x22\x04\x04"
  "\x6d\x61\x78\x03\x77\x0a\x81\x87\x02\x76\x08\x81\x85\x02\x75\x06"
  "\x81\x83\x02\x74\x04\x83\x04\x09\x13\x28\x02\x10\x03\x32\x2e\x03"
  "\x1f\x02\x7b\x0a\x81\x85\x02\x7a\x08\x81\x85\x02\x79\x06\x81\x83"
  "\x02\x78\x04\x83\x04\x09\x10\x1f\x02\x11\x0c\x16\x03\x14\x6d\x61"
  "\x79\x62\x65\x2d\x73\x68\x72\x69\x6e\x6b\x2d\x74\x61\x62\x6c\x65"
  "\x21\x29\x04\x16\x72\x65\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x2d\x65\x6e\x74\x72\x69\x65\x73\x21\x2a\x03\x81\x01\x0e\x81\x8b"
  "\x02\x80\x01\x0c\x81\x89\x02\x7f\x0a\x81\x89\x02\x7e\x08\x81\x87"
  "\x02\x7d\x06\x81\x85\x02\x7c\x04\x84\x06\x0d\x1b\x2b\x02\x12\x15"
  "\x1b\x0c\x02\x0d\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x15\x16\x09"
  "\x8e\x01\x1c\x81\x91\x02\x8d\x01\x1a\x81\x8d\x02\x8c\x01\x18\x81"
  "\x8d\x02\x8b\x01\x16\x81\x8d\x02\x8a\x01\x14\x81\x8b\x02\x89\x01"
  "\x12\x81\x8b\x02\x88\x01\x10\x81\x8d\x02\x87\x01\x0e\x81\x83\x02"
  "\x86\x01\x0c\x81\x83\x02\x85\x01\x0a\x81\x8f\x02\x84\x01\x08\x81"
  "\x87\x02\x83\x01\x06\x81\x85\x02\x82\x01\x04\x84\x06\x1b\x2c\x02"
  "\x13\x02\x09\x03\x0e\x73\x68\x72\x69\x6e\x6b\x2d\x74\x61\x62\x6c"
  "\x65\x21\x2c\x02\x92\x01\x0a\x81\x83\x02\x91\x01\x08\x81\x85\x02"
  "\x90\x01\x06\x81\x83\x02\x8f\x01\x04\x83\x04\x09\x13\x2d\x02\x14"
  "\x0c\x03\x17\x65\x78\x74\x72\x61\x63\x74\x2d\x74\x61\x62\x6c\x65"
  "\x2d\x65\x6e\x74\x72\x69\x65\x73\x21\x2e\x03\x29\x04\x2a\x04\x96"
  "\x01\x0a\x81\x83\x02\x95\x01\x08\x81\x85\x02\x94\x01\x06\x81\x83"
  "\x02\x93\x01\x04\x83\x04\x09\x15\x2f\x02\x15\x0d\x15\x16\x09\xa0"
  "\x01\x16\x81\x8b\x02\x9f\x01\x14\x81\x89\x02\x9e\x01\x12\x81\x89"
  "\x02\x9d\x01\x10\x81\x83\x02\x9c\x01\x0e\x81\x83\x02\x9b\x01\x0c"
  "\x81\x83\x02\x9a\x01\x0a\x81\x83\x02\x99\x01\x08\x81\x83\x02\x98"
  "\x01\x06\x81\x83\x02\x97\x01\x04\x83\x04\x15\x21\x16\x02\x16\xa1"
  "\x01\x04\x82\x02\x03\x15\x02\x17\xa2\x01\x04\x82\x02\x03\x0d\x02"
  "\x18\xa3\x01\x04\x82\x02\x03\x02\x19\x26\x02\xa5\x01\x06\x81\x81"
  "\x02\xa4\x01\x04\x82\x02\x05\x0a\x02\x1a\x09\xa6\x01\x04\x83\x04"
  "\x03\x30\x02\x1b\x09\xa7\x01\x04\x83\x04\x03\x31\x02\x1c\x09\xa8"
  "\x01\x04\x83\x04\x03\x32\x02\x1d\x09\xa9\x01\x04\x83\x04\x03\x33"
  "\x02\x1e\x09\xaa\x01\x04\x83\x04\x03\x34\x02\x1f\x09\xab\x01\x04"
  "\x83\x04\x03\x35\x02\x20\x0c\x02\xac\x01\x04\x84\x06\x03\x36\x02"
  "\x21\x0c\x02\xad\x01\x04\x84\x06\x03\x37\x02\x22\x0c\x02\xae\x01"
  "\x04\x84\x06\x03\x38\x02\x23\x0c\x02\xaf\x01\x04\x84\x06\x03\x39"
  "\x02\x24\x0c\x02\xb0\x01\x04\x84\x06\x03\x3a\x02\x25\x0c\x02\xb1"
  "\x01\x04\x84\x06\x03\x0c\x02\x26\x09\x0f\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x09"
  "\x02\xb5\x01\x0a\x81\x85\x02\xb4\x01\x08\x81\x83\x02\xb3\x01\x06"
  "\x81\x83\x02\xb2\x01\x04\x83\x04\x09\x12\x3b\x02\x27\x02\x10\x11"
  "\x02\xba\x01\x0c\x81\x85\x02\xb9\x01\x0a\x81\x85\x02\xb8\x01\x08"
  "\x81\x83\x02\xb7\x01\x06\x81\x85\x02\xb6\x01\x04\x83\x04\x0b\x12"
  "\x11\x02\x28\x0e\x38\xbb\x01\x04\x84\x06\x03\x10\x28\x0e\x0e\x09"
  "\x10\x04\x11\x04\x3b\x04\x0a\x77\x65\x61\x6b\x2d\x63\x6f\x6e\x73"
  "\x13\x77\x69\x74\x68\x6f\x75\x74\x2d\x69\x6e\x74\x65\x72\x72\x75"
  "\x70\x74\x73\x0d\x6d\x69\x6e\x69\x6d\x75\x6d\x2d\x73\x69\x7a\x65"
  "\x06\x65\x71\x68\x74\x3f\x19\x73\x65\x74\x2d\x74\x61\x62\x6c\x65"
  "\x2d\x6e\x65\x65\x64\x73\x2d\x72\x65\x68\x61\x73\x68\x3f\x21\x12"
  "\x73\x65\x74\x2d\x74\x61\x62\x6c\x65\x2d\x70\x72\x69\x6d\x65\x73"
  "\x21\x13\x73\x65\x74\x2d\x74\x61\x62\x6c\x65\x2d\x62\x75\x63\x6b"
  "\x65\x74\x73\x21\x17\x73\x65\x74\x2d\x74\x61\x62\x6c\x65\x2d\x73"
  "\x68\x72\x69\x6e\x6b\x2d\x73\x69\x7a\x65\x21\x15\x73\x65\x74\x2d"
  "\x74\x61\x62\x6c\x65\x2d\x67\x72\x6f\x77\x2d\x73\x69\x7a\x65\x21"
  "\x11\x73\x65\x74\x2d\x74\x61\x62\x6c\x65\x2d\x63\x6f\x75\x6e\x74"
  "\x21\x14\x74\x61\x62\x6c\x65\x2d\x6e\x65\x65\x64\x73\x2d\x72\x65"
  "\x68\x61\x73\x68\x3f\x0d\x74\x61\x62\x6c\x65\x2d\x70\x72\x69\x6d"
  "\x65\x73\x0e\x74\x61\x62\x6c\x65\x2d\x62\x75\x63\x6b\x65\x74\x73"
  "\x12\x74\x61\x62\x6c\x65\x2d\x73\x68\x72\x69\x6e\x6b\x2d\x73\x69"
  "\x7a\x65\x10\x74\x61\x62\x6c\x65\x2d\x67\x72\x6f\x77\x2d\x73\x69"
  "\x7a\x65\x0c\x74\x61\x62\x6c\x65\x2d\x63\x6f\x75\x6e\x74\x0d\x0c"
  "\x04\x3a\x04\x39\x04\x38\x04\x37\x04\x36\x04\x35\x04\x34\x04\x33"
  "\x04\x32\x04\x31\x04\x30\x04\x0d\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x09\x72\x74\x64\x3a\x65\x71"
  "\x68\x74\x3b\x05\x65\x71\x68\x74\x06\x63\x6f\x75\x6e\x74\x0a\x67"
  "\x72\x6f\x77\x2d\x73\x69\x7a\x65\x0c\x73\x68\x72\x69\x6e\x6b\x2d"
  "\x73\x69\x7a\x65\x08\x62\x75\x63\x6b\x65\x74\x73\x07\x70\x72\x69"
  "\x6d\x65\x73\x0e\x6e\x65\x65\x64\x73\x2d\x72\x65\x68\x61\x73\x68"
  "\x3f\x15\x04\x0d\x04\x04\x04\x2e\x17\x29\x2a\x24\x22\x21\x1e\x2c"
  "\x12\x1c\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x61\x64\x64"
  "\x72\x65\x73\x73\x2d\x68\x61\x73\x68\x69\x6e\x67\x21\x1a\x1c\x0c"
  "\x65\x71\x2d\x68\x61\x73\x68\x2d\x6d\x6f\x64\x0a\x0e\x65\x71\x68"
  "\x74\x2f\x66\x6f\x72\x2d\x65\x61\x63\x68\x0a\x65\x71\x68\x74\x2f"
  "\x70\x75\x74\x21\x09\x65\x71\x68\x74\x2f\x67\x65\x74\x0a\x6d\x61"
  "\x6b\x65\x2d\x65\x71\x68\x74\x16\x16\x04\x2f\x04\x2d\x04\x04\x2b"
  "\x04\x1f\x04\x28\x04\x27\x04\x25\x04\x23\x04\x20\x04\x1d\x04\x0f"
  "\x04\x1b\x04\x19\x04\x18\x04\x14\x04\x13\x04\x0b\x04\x04\x16\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d"
  "\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\x3b\x26\x03"
  "\x0f\x20\x80\x80\x04\x0e\x1e\x81\x81\x02\x0d\x1c\x81\x81\x02\x0c"
  "\x1a\x81\x85\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14"
  "\x81\x83\x02\x08\x12\x81\x87\x02\x07\x10\x81\x83\x02\x06\x0e\x81"
  "\x85\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x87"
  "\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x1f\x41";

SCHEME_OBJECT *
geneqht_so_data_d7905b44e170fc10 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_geneqht_so_data_d7905b44e170fc10 [0]))), (sizeof (prog_geneqht_so_data_d7905b44e170fc10)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_22]));
}

DECLARE_COMPILED_DATA_NS ("geneqht.so", geneqht_so_data_d7905b44e170fc10)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("geneqht.so", "d477963af2eeef68")
