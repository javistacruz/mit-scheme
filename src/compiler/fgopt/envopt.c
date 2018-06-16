/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:15-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define LABEL_1_8 9
#define LABEL_1_12 11
#define LABEL_1_11 13
#define LABEL_1_14 15
#define LABEL_1_9 17
#define LABEL_1_16 19
#define LABEL_1_17 21
#define LABEL_1_13 23
#define LABEL_1_18 25
#define ENVIRONMENT_LABEL_1_3 45
#define DEBUGGING_LABEL_1_2 44
#define OBJECT_1_4 43
#define OBJECT_1_3 42
#define OBJECT_1_2 41
#define OBJECT_1_1 40
#define OBJECT_1_0 39
#define EXECUTE_CACHE_1_15 27
#define EXECUTE_CACHE_1_10 29
#define EXECUTE_CACHE_1_7 31
#define FREE_REFERENCE_1_4 34
#define FREE_REFERENCE_1_3 35
#define FREE_REFERENCE_1_2 36
#define FREE_REFERENCE_1_1 37
#define FREE_REFERENCE_1_0 38
#define FREE_REFERENCES_LABEL_1_0 26
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
envopt_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_1_4);
      goto optimize_environmentsB_7;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_1_12);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_1_14);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_3;

    case 8:
      current_block = (Rpc - LABEL_1_16);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_1_17);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_1_18);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimize_environmentsB_17)
DEFLABEL (optimize_environmentsB_7)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_29;
  Wrd8 = Wrd12;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_27;
  Wrd6 = Wrd10;

DEFLABEL (label_26)
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (label_19)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_25;
  Wrd17 = Wrd21;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_23;
  Wrd9 = Wrd13;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_21;
  Wrd5 = Wrd9;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_18])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd10.pObj));

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd18.pObj));

DEFLABEL (label_11)
  (Wrd17.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_18)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_1_9);
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_35;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_35;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_34)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_33;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_33;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);

DEFLABEL (label_32)
  (Rsp [2]) = (Wrd23.Obj);
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 10)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 3);

DEFLABEL (label_31)
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd46.Lng))))
    goto label_30;
  ((Wrd44.pObj) [23]) = (Wrd23.Obj);
  Rvl = (current_block [OBJECT_1_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd32.Obj) = (current_block [OBJECT_1_1]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_14)
  (Wrd23.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_1_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_13)
  (Wrd7.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_8 9
#define LABEL_2_9 11
#define LABEL_2_10 13
#define LABEL_2_11 15
#define LABEL_2_12 17
#define LABEL_2_13 19
#define LABEL_2_14 21
#define LABEL_2_15 23
#define LABEL_2_16 25
#define LABEL_2_17 27
#define LABEL_2_18 29
#define LABEL_2_20 31
#define LABEL_2_22 33
#define LABEL_2_24 35
#define LABEL_2_25 37
#define LABEL_2_19 39
#define LABEL_2_26 41
#define ENVIRONMENT_LABEL_2_3 63
#define DEBUGGING_LABEL_2_2 62
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
#define EXECUTE_CACHE_2_23 43
#define EXECUTE_CACHE_2_21 45
#define EXECUTE_CACHE_2_7 47
#define FREE_REFERENCE_2_1 50
#define FREE_REFERENCE_2_0 51
#define FREE_REFERENCES_LABEL_2_0 42
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
envopt_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd124;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd100;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd94;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd144;
  machine_word Wrd136;
  machine_word Wrd138;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd75;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd6;
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
      goto initialize_target_blockB_24;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto loop_21;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_2_12);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_2_13);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_2_14);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_2_15);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_2_16);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_2_17);
      goto label_34;

    case 13:
      current_block = (Rpc - LABEL_2_18);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_2_20);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_2_24);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_2_25);
      goto label_38;

    case 18:
      current_block = (Rpc - LABEL_2_19);
      goto continuation_17;

    case 19:
      current_block = (Rpc - LABEL_2_26);
      goto label_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_target_blockB_42)
DEFLABEL (initialize_target_blockB_24)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_47;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_46)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_45;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_45;
  (Wrd5.Obj) = ((Wrd11.pObj) [10]);

DEFLABEL (label_44)
  (Rsp [1]) = (Wrd5.Obj);
  goto loop_21;

DEFLABEL (label_45)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_2_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (loop_43)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_2_9);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_50;
  (Wrd7.Obj) = (current_block [OBJECT_2_7]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_49;

DEFLABEL (label_48)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_9]), 3);

DEFLABEL (label_49)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd20.Lng))))
    goto label_48;
  ((Wrd18.pObj) [23]) = (Wrd8.Obj);
  Rvl = (current_block [OBJECT_2_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_50)
  if (! ((Wrd6.uLng) == 1))
    goto label_82;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_81)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_80;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd38.Lng))))
    goto label_80;
  (Wrd33.Obj) = ((Wrd36.pObj) [15]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_79)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_78;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_77)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_76;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd60.Lng))))
    goto label_76;
  (Wrd55.Obj) = ((Wrd58.pObj) [10]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_75)
  (Wrd67.Obj) = (Rsp [0]);
  if ((Wrd67.Obj) == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd70.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd73.Obj) = ((Wrd70.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 50)
    goto label_74;
  Wrd69 = Wrd73;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd84.Obj) = (Rsp [1]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 10))
    goto label_72;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd83.Lng))))
    goto label_72;
  (Wrd75.Obj) = ((Wrd81.pObj) [1]);

DEFLABEL (label_71)
  (Wrd91.Obj) = (* (Rsp++));
  if ((Wrd75.Obj) == (Wrd91.Obj))
    goto label_68;

DEFLABEL (label_67)
  (Wrd92.Obj) = (Rsp [0]);
  if (! ((Wrd92.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_58;

DEFLABEL (label_57)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (Wrd120.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd121.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd121.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_53;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_52)
  (Rsp [3]) = (Wrd8.Obj);

DEFLABEL (label_51)
  Rsp = (& (Rsp [2]));
  goto loop_21;

DEFLABEL (label_53)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 1);

DEFLABEL (label_38)
  (Wrd8.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_54)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_56;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_55)
  (Rsp [3]) = (Wrd18.Obj);
  goto label_51;

DEFLABEL (label_56)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 1);

DEFLABEL (label_39)
  (Wrd18.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd95.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd98.Obj) = ((Wrd95.pObj) [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if ((Wrd99.uLng) == 50)
    goto label_66;
  Wrd94 = Wrd98;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd109.Obj) = (Rsp [1]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 10))
    goto label_64;
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [0]);
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd108.Lng))))
    goto label_64;
  (Wrd100.Obj) = ((Wrd106.pObj) [1]);

DEFLABEL (label_63)
  (Wrd116.Obj) = (* (Rsp++));
  if (! ((Wrd100.Obj) == (Wrd116.Obj)))
    goto label_57;
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd128.Obj) = (Rsp [4]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd129.uLng) == 1))
    goto label_62;
  (Wrd126.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd127.Obj) = ((Wrd126.pObj) [0]);
  (* (--Rsp)) = (Wrd127.Obj);

DEFLABEL (label_61)
  (Wrd134.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd134.Obj);
  (Wrd135.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd135.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_19);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_60;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_59)
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_21;

DEFLABEL (label_60)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 1);

DEFLABEL (label_40)
  (Wrd5.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd111.Obj) = (Rsp [1]);
  (Wrd112.Obj) = (current_block [OBJECT_2_5]);
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_35)
  (Wrd100.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_17])), (Wrd95.pObj));

DEFLABEL (label_34)
  (Wrd94.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd139.Obj) = (Rsp [3]);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if (! ((Wrd140.uLng) == 1))
    goto label_70;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd136.Obj) = ((Wrd138.pObj) [1]);

DEFLABEL (label_69)
  (Rsp [3]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_21;

DEFLABEL (label_70)
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 1);

DEFLABEL (label_37)
  (Wrd136.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd86.Obj) = (Rsp [1]);
  (Wrd87.Obj) = (current_block [OBJECT_2_5]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_33)
  (Wrd75.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_14])), (Wrd70.pObj));

DEFLABEL (label_32)
  (Wrd69.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd63.Obj) = (current_block [OBJECT_2_2]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_30)
  (Wrd45.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd41.Obj) = (current_block [OBJECT_2_4]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_28)
  (Wrd23.Obj) = Rvl;
  goto label_81;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define LABEL_3_8 11
#define LABEL_3_9 13
#define LABEL_3_10 15
#define LABEL_3_11 17
#define LABEL_3_14 19
#define LABEL_3_15 21
#define LABEL_3_12 23
#define LABEL_3_19 25
#define LABEL_3_17 27
#define LABEL_3_20 29
#define LABEL_3_21 31
#define ENVIRONMENT_LABEL_3_3 51
#define DEBUGGING_LABEL_3_2 50
#define OBJECT_3_8 49
#define OBJECT_3_7 48
#define OBJECT_3_6 47
#define OBJECT_3_5 46
#define OBJECT_3_4 45
#define OBJECT_3_3 44
#define OBJECT_3_2 43
#define OBJECT_3_1 42
#define OBJECT_3_0 41
#define EXECUTE_CACHE_3_22 33
#define EXECUTE_CACHE_3_18 35
#define EXECUTE_CACHE_3_16 37
#define EXECUTE_CACHE_3_13 39
#define FREE_REFERENCES_LABEL_3_0 32
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
envopt_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd8;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_3_4);
      goto examine_procedureB_22;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto loop_19;

    case 5:
      current_block = (Rpc - LABEL_3_9);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_3_10);
      goto label_30;

    case 7:
      current_block = (Rpc - LABEL_3_11);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_3_14);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_3_15);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_3_19);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_3_20);
      goto label_33;

    case 14:
      current_block = (Rpc - LABEL_3_21);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (examine_procedureB_35)
DEFLABEL (examine_procedureB_22)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_42;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_42;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_41)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_40;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd29.Lng))))
    goto label_40;
  (Wrd23.Obj) = ((Wrd27.pObj) [23]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_39)
  (Wrd37.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_38;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd46.Lng))))
    goto label_38;
  (Wrd40.Obj) = ((Wrd44.pObj) [25]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_37)
  goto loop_19;

DEFLABEL (label_38)
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.Obj) = (current_block [OBJECT_3_3]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_3_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (loop_36)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_3_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_48;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (Rsp [2]);
  if (! ((Wrd7.Obj) == (Wrd8.Obj)))
    goto label_43;
  Rvl = (current_block [OBJECT_3_5]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_47;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd34.Lng))))
    goto label_47;
  ((Wrd32.pObj) [23]) = (Wrd7.Obj);

DEFLABEL (label_46)
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_45;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 25L) < ((unsigned long) (Wrd17.Lng))))
    goto label_45;
  (Wrd9.Obj) = ((Wrd15.pObj) [26]);

DEFLABEL (label_44)
  (Rsp [4]) = (Wrd9.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (label_45)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_3_7]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_27)
  (Wrd9.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_3_2]);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 3);

DEFLABEL (label_28)
  goto label_46;

DEFLABEL (label_48)
  if (! ((Wrd6.uLng) == 1))
    goto label_62;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_61)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_60;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd54.Obj) = ((Wrd55.pObj) [0]);

DEFLABEL (label_59)
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd68.uLng) == 10))
    goto label_58;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd67.Lng))))
    goto label_58;
  (Wrd62.Obj) = ((Wrd65.pObj) [23]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_57)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd78.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_54;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_17);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_53;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_52)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_22]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd7.Obj) = (Rsp [0]);
  goto label_49;

DEFLABEL (label_50)
  (Wrd7.Obj) = (Rsp [2]);

DEFLABEL (label_49)
DEFLABEL (label_51)
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_19;

DEFLABEL (label_53)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_8]), 1);

DEFLABEL (label_33)
  (Wrd6.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_54)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_56;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_55)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_19;

DEFLABEL (label_56)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_8]), 1);

DEFLABEL (label_32)
  (Wrd7.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd70.Obj) = (current_block [OBJECT_3_2]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_30)
  (Wrd54.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_29)
  (Wrd45.Obj) = Rvl;
  goto label_61;

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
#define ENVIRONMENT_LABEL_4_3 23
#define DEBUGGING_LABEL_4_2 22
#define OBJECT_4_4 21
#define OBJECT_4_3 20
#define OBJECT_4_2 19
#define OBJECT_4_1 18
#define OBJECT_4_0 17
#define EXECUTE_CACHE_4_10 15
#define FREE_REFERENCES_LABEL_4_0 14
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
envopt_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd76;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd52;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd44;
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
      current_block = (Rpc - LABEL_4_4);
      goto choose_target_blockB_7;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (choose_target_blockB_15)
DEFLABEL (choose_target_blockB_7)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd7.Obj) = ((Wrd11.pObj) [23]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_25)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_24;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_24;
  (Wrd21.Obj) = ((Wrd27.pObj) [4]);

DEFLABEL (label_23)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_22;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd43.Lng))))
    goto label_22;
  (Wrd38.Obj) = ((Wrd41.pObj) [4]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_21)
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 10))
    goto label_20;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd58.Lng))))
    goto label_20;
  (Wrd52.Obj) = ((Wrd56.pObj) [4]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_19)
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 10))
    goto label_18;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd82.Lng))))
    goto label_18;
  (Wrd76.Obj) = (Rsp [1]);
  ((Wrd80.pObj) [23]) = (Wrd76.Obj);

DEFLABEL (label_17)
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.Obj) = (Rsp [2]);
  if ((Wrd66.Obj) == (Wrd67.Obj))
    goto label_16;
  (Rsp [3]) = (Wrd67.Obj);
  (Rsp [2]) = (Wrd66.Obj);
  (Wrd70.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd70.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_4_4]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Obj) = (current_block [OBJECT_4_0]);
  (Wrd87.Obj) = (Rsp [1]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 3);

DEFLABEL (label_13)
  goto label_17;

DEFLABEL (label_20)
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.Obj) = (current_block [OBJECT_4_2]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd46.Obj) = (current_block [OBJECT_4_2]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_4_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_10)
  (Wrd21.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define LABEL_5_12 13
#define LABEL_5_13 15
#define LABEL_5_10 17
#define LABEL_5_14 19
#define LABEL_5_7 21
#define LABEL_5_16 23
#define LABEL_5_17 25
#define ENVIRONMENT_LABEL_5_3 44
#define DEBUGGING_LABEL_5_2 43
#define OBJECT_5_9 42
#define OBJECT_5_8 41
#define OBJECT_5_7 40
#define OBJECT_5_6 39
#define OBJECT_5_5 38
#define OBJECT_5_4 37
#define OBJECT_5_3 36
#define OBJECT_5_2 35
#define OBJECT_5_1 34
#define OBJECT_5_0 33
#define EXECUTE_CACHE_5_15 27
#define EXECUTE_CACHE_5_11 29
#define FREE_REFERENCE_5_0 32
#define FREE_REFERENCES_LABEL_5_0 26
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
envopt_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_5_4);
      goto add_caller_calleeB_19;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_5_13);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_5_14);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_5_16);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_5_17);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_caller_calleeB_29)
DEFLABEL (add_caller_calleeB_19)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_54;
  Wrd5 = Wrd9;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_52;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_52;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_51)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_30;
  Rvl = (current_block [OBJECT_5_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_50;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd41.Lng))))
    goto label_50;
  (Wrd35.Obj) = ((Wrd39.pObj) [15]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_49)
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_48;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd57.Lng))))
    goto label_48;
  (Wrd51.Obj) = ((Wrd55.pObj) [25]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_47)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd35.uLng) == 1))
    goto label_43;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_42)
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;

DEFLABEL (label_37)
  Rsp = (& (Rsp [4]));

DEFLABEL (label_36)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_35;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 25L) < ((unsigned long) (Wrd13.Lng))))
    goto label_35;
  (Wrd7.Obj) = ((Wrd11.pObj) [26]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_34)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_5_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rvl = (current_block [OBJECT_5_4]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_5_9]);
  (Rsp [2]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 10)
    goto label_33;

DEFLABEL (label_32)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_8]), 3);

DEFLABEL (label_33)
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 25L) < ((unsigned long) (Wrd26.Lng))))
    goto label_32;
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd24.pObj) [26]) = (Wrd19.Obj);
  Rvl = (current_block [OBJECT_5_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_5_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  (Wrd71.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd71.Obj);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_41;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd72.Obj) = ((Wrd74.pObj) [1]);

DEFLABEL (label_40)
  (Wrd84.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd84.Obj);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Rsp [2]) = (Wrd81.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd89.Obj) = (Rsp [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 1)
    goto label_39;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_6]), 2);

DEFLABEL (label_39)
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd88.Obj) = (Rsp [1]);
  ((Wrd87.pObj) [1]) = (Wrd88.Obj);
  Rsp = (& (Rsp [3]));
  goto label_36;

DEFLABEL (label_41)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_5]), 1);

DEFLABEL (label_27)
  (Wrd72.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_5]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  (Wrd41.Obj) = (Rsp [4]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.Obj) = (current_block [OBJECT_5_7]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd50.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd54.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Rsp [2]) = (Wrd51.Obj);
  (Wrd55.Obj) = (current_block [OBJECT_5_3]);
  (Rsp [1]) = (Wrd55.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd67.uLng) == 10)
    goto label_46;

DEFLABEL (label_45)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_8]), 3);

DEFLABEL (label_46)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd65.Lng))))
    goto label_45;
  ((Wrd63.pObj) [25]) = (Wrd51.Obj);
  goto label_37;

DEFLABEL (label_48)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.Obj) = (current_block [OBJECT_5_3]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.Obj) = (current_block [OBJECT_5_2]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_5_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_22)
  (Wrd11.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_7);
  goto label_36;

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
envopt_so_07d94447041773a6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 5)
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

static const struct liarc_code_S arr_decl_envopt_so_07d94447041773a6 [5] =
  {
    { "envopt_so_code_1", 12, envopt_so_code_1 },
    { "envopt_so_code_2", 20, envopt_so_code_2 },
    { "envopt_so_code_3", 15, envopt_so_code_3 },
    { "envopt_so_code_4", 6, envopt_so_code_4 },
    { "envopt_so_code_5", 12, envopt_so_code_5 }
  };

int
decl_envopt_so_07d94447041773a6 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_envopt_so_07d94447041773a6);
  return (0);
}

DECLARE_COMPILED_CODE ("envopt.so", 3, decl_envopt_so_07d94447041773a6, envopt_so_07d94447041773a6)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_envopt_so_data_07d94447041773a6 [1283] =
  "\x44\x0d\xa9\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc3\xb9\x1d\xc2"
  "\xba\x83\x02\x0d\x0d\x0d\xbb\x0d\xbc\x0d\xbd\x24\x28\x0d\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d"
  "\xb0\x82\x88\xb1\x1d\x02\xc1\xbf\x80\x02\xc1\x1c\x02\xb2\x83\x0d"
  "\x0d\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xb7\x02\xb1\x1d\x1b"
  "\x02\x02\xb2\x83\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x84\x88\x1d\xb1\x83\xb2\x02\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x02"
  "\xb1\x08\xc2\xb7\x1d\x02\x02\xb2\x82\x0d\x24\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x9c\xba\x88\xb2"
  "\xb7\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a\x9c\x1b\xb5\xb4\xb3\x0d"
  "\x9c\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5a\x2f\x55"
  "\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72"
  "\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c"
  "\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2f\x66\x67\x6f\x70\x74\x2f\x65\x6e\x76"
  "\x6f\x70\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0c\x76\x65"
  "\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x02\x0b\x76\x65\x63\x74\x6f"
  "\x72\x2d\x72\x65\x66\x17\x18\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x3f\x20\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x70\x74\x69\x6d\x69\x7a\x65"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x73\x3f\x19\x69"
  "\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x74\x61\x72\x67\x65\x74"
  "\x2d\x62\x6c\x6f\x63\x6b\x21\x13\x65\x78\x61\x6d\x69\x6e\x65\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x21\x15\x63\x68\x6f\x6f\x73"
  "\x65\x2d\x74\x61\x72\x67\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x21\x06"
  "\x04\x18\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d"
  "\x2d\x6e\x65\x67\x61\x74\x69\x76\x65\x04\x09\x66\x6f\x72\x2d\x65"
  "\x61\x63\x68\x05\x13\x74\x72\x61\x6e\x73\x69\x74\x69\x76\x65\x2d"
  "\x63\x6c\x6f\x73\x75\x72\x65\x04\x0f\x1a\x81\x83\x02\x0e\x18\x81"
  "\x83\x02\x0d\x16\x81\x87\x02\x0c\x14\x81\x87\x02\x0b\x12\x83\x04"
  "\x0a\x10\x81\x87\x02\x09\x0e\x81\x83\x02\x08\x0c\x81\x87\x02\x07"
  "\x0a\x81\x83\x02\x06\x08\x81\x83\x02\x05\x06\x81\x85\x02\x04\x04"
  "\x83\x04\x19\x2e\x02\x02\x17\x04\x63\x64\x72\x0f\x04\x63\x61\x72"
  "\x09\x0a\x0d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x74\x61\x67\x0e"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x61\x67\x03\x03\x15"
  "\x66\x69\x6e\x64\x2d\x6f\x75\x74\x65\x72\x6d\x6f\x73\x74\x2d\x62"
  "\x6c\x6f\x63\x6b\x05\x13\x61\x64\x64\x2d\x63\x61\x6c\x6c\x65\x72"
  "\x26\x63\x61\x6c\x6c\x65\x65\x21\x0a\x04\x10\x62\x6c\x6f\x63\x6b"
  "\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72\x3f\x0b\x04\x23\x2a\x81\x8b"
  "\x02\x22\x28\x81\x8b\x02\x21\x26\x81\x8b\x02\x20\x24\x81\x8b\x02"
  "\x1f\x22\x81\x8b\x02\x1e\x20\x81\x8d\x02\x1d\x1e\x81\x8d\x02\x1c"
  "\x1c\x81\x8b\x02\x1b\x1a\x81\x8b\x02\x1a\x18\x81\x8d\x02\x19\x16"
  "\x81\x8b\x02\x18\x14\x81\x89\x02\x17\x12\x81\x89\x02\x16\x10\x81"
  "\x87\x02\x15\x0e\x81\x87\x02\x14\x0c\x81\x87\x02\x13\x0a\x81\x87"
  "\x02\x12\x08\x81\x85\x02\x11\x06\x81\x83\x02\x10\x04\x83\x04\x29"
  "\x40\x0c\x02\x1a\x02\x09\x19\x17\x04\x18\x62\x6c\x6f\x63\x6b\x2d"
  "\x61\x6e\x63\x65\x73\x74\x6f\x72\x2d\x6f\x72\x2d\x73\x65\x6c\x66"
  "\x3f\x03\x0f\x65\x6e\x71\x75\x65\x75\x65\x2d\x6e\x6f\x64\x65\x73"
  "\x21\x04\x1e\x62\x6c\x6f\x63\x6b\x2d\x6e\x65\x61\x72\x65\x73\x74"
  "\x2d\x63\x6f\x6d\x6d\x6f\x6e\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72"
  "\x04\x0b\x05\x32\x20\x81\x8d\x02\x31\x1e\x81\x8d\x02\x30\x1c\x81"
  "\x8d\x02\x2f\x1a\x81\x8d\x02\x2e\x18\x81\x8d\x02\x2d\x16\x81\x8b"
  "\x02\x2c\x14\x81\x8b\x02\x2b\x12\x81\x8b\x02\x2a\x10\x81\x8b\x02"
  "\x29\x0e\x81\x8b\x02\x28\x0c\x81\x8b\x02\x27\x0a\x81\x89\x02\x26"
  "\x08\x81\x85\x02\x25\x06\x81\x83\x02\x24\x04\x83\x04\x1f\x34\x0b"
  "\x02\x02\x17\x05\x16\x74\x72\x61\x6e\x73\x66\x65\x72\x2d\x62\x6c"
  "\x6f\x63\x6b\x2d\x63\x68\x69\x6c\x64\x21\x02\x38\x0e\x81\x89\x02"
  "\x37\x0c\x81\x87\x02\x36\x0a\x81\x85\x02\x35\x08\x81\x85\x02\x34"
  "\x06\x81\x83\x02\x33\x04\x83\x04\x0d\x18\x09\x02\x1a\x09\x73\x65"
  "\x74\x2d\x63\x64\x72\x21\x02\x19\x0f\x1c\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x02\x04\x05\x61\x73\x73\x71\x04\x05\x6d\x65"
  "\x6d\x71\x03\x44\x1a\x81\x89\x02\x43\x18\x81\x87\x02\x42\x16\x81"
  "\x87\x02\x41\x14\x81\x89\x02\x40\x12\x81\x85\x02\x3f\x10\x81\x87"
  "\x02\x3e\x0e\x81\x87\x02\x3d\x0c\x81\x8b\x02\x3c\x0a\x81\x89\x02"
  "\x3b\x08\x81\x89\x02\x3a\x06\x81\x87\x02\x39\x04\x85\x08\x19\x2d"
  "\x04\x09\x04\x0b\x04\x0c\x04\x04\x0a\x17\x6f\x70\x74\x69\x6d\x69"
  "\x7a\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x73\x21"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81"
  "\x02\x07\x11";

SCHEME_OBJECT *
envopt_so_data_07d94447041773a6 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_envopt_so_data_07d94447041773a6 [0]))), (sizeof (prog_envopt_so_data_07d94447041773a6)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("envopt.so", envopt_so_data_07d94447041773a6)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("envopt.so", "873cdb28d666e2ca")
