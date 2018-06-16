/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:15-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define LABEL_1_10 13
#define LABEL_1_11 15
#define LABEL_1_13 17
#define LABEL_1_15 19
#define LABEL_1_17 21
#define LABEL_1_19 23
#define LABEL_1_21 25
#define LABEL_1_18 27
#define LABEL_1_14 29
#define LABEL_1_16 31
#define LABEL_1_24 33
#define ENVIRONMENT_LABEL_1_3 65
#define DEBUGGING_LABEL_1_2 64
#define OBJECT_1_12 63
#define OBJECT_1_11 62
#define OBJECT_1_10 61
#define OBJECT_1_9 60
#define OBJECT_1_8 59
#define OBJECT_1_7 58
#define OBJECT_1_6 57
#define OBJECT_1_5 56
#define OBJECT_1_4 55
#define OBJECT_1_3 54
#define OBJECT_1_2 53
#define OBJECT_1_1 52
#define OBJECT_1_0 51
#define EXECUTE_CACHE_1_23 35
#define EXECUTE_CACHE_1_22 37
#define EXECUTE_CACHE_1_20 39
#define EXECUTE_CACHE_1_12 41
#define EXECUTE_CACHE_1_6 43
#define FREE_REFERENCE_1_4 46
#define FREE_REFERENCE_1_3 47
#define FREE_REFERENCE_1_2 48
#define FREE_REFERENCE_1_1 49
#define FREE_REFERENCE_1_0 50
#define FREE_REFERENCES_LABEL_1_0 34
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
desenv_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd63;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd82;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd79;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd120;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd127;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd104;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd98;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
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
      current_block = (Rpc - LABEL_1_4);
      goto design_environment_framesB_17;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_1_15);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_1_17);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_1_19);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_1_21);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_1_16);
      goto lambda_9;

    case 15:
      current_block = (Rpc - LABEL_1_24);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (design_environment_framesB_31)
DEFLABEL (design_environment_framesB_17)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (lambda_32)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_1_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_59;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_59;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_58)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_57;
  Wrd22 = Wrd26;

DEFLABEL (label_56)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_49;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_48;
  Wrd30 = Wrd34;

DEFLABEL (label_47)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (Wrd30.Obj))
    goto label_44;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_43;
  Wrd38 = Wrd42;

DEFLABEL (label_42)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (Wrd38.Obj))
    goto label_37;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_36;
  Wrd46 = Wrd50;

DEFLABEL (label_35)
  (Wrd52.Obj) = (Rsp [0]);
  if ((Wrd52.Obj) == (Wrd46.Obj))
    goto label_34;
  (Wrd53.Obj) = (current_block [OBJECT_1_7]);
  (Rsp [0]) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_22]));

DEFLABEL (label_34)
  Rvl = (current_block [OBJECT_1_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_21])), (Wrd47.pObj));

DEFLABEL (label_23)
  (Wrd46.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd56.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (current_block [OBJECT_1_5]);
  (Rsp [1]) = (Wrd57.Obj);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_41;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd69.Lng))))
    goto label_41;
  (Wrd63.Obj) = ((Wrd67.pObj) [8]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_39;

DEFLABEL (label_38)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_8]), 3);

DEFLABEL (label_39)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_38;
  ((Wrd14.pObj) [7]) = Rvl;
  Rvl = (current_block [OBJECT_1_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd72.Obj) = (Rsp [3]);
  (Wrd73.Obj) = (current_block [OBJECT_1_2]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_17])), (Wrd39.pObj));

DEFLABEL (label_22)
  (Wrd38.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd89.Obj) = (Rsp [2]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 10))
    goto label_46;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd88.Lng))))
    goto label_46;
  (Wrd82.Obj) = ((Wrd86.pObj) [9]);
  (* (--Rsp)) = (Wrd82.Obj);

DEFLABEL (label_45)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd97.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_14);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (label_46)
  (Wrd91.Obj) = (Rsp [2]);
  (Wrd92.Obj) = (current_block [OBJECT_1_4]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_13])), (Wrd31.pObj));

DEFLABEL (label_21)
  (Wrd30.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd99.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd102.Obj) = ((Wrd99.pObj) [0]);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd103.uLng) == 50)
    goto label_55;
  Wrd98 = Wrd102;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd113.Obj) = (Rsp [2]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 10))
    goto label_53;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd112.Lng))))
    goto label_53;
  (Wrd104.Obj) = ((Wrd110.pObj) [8]);

DEFLABEL (label_52)
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd127.uLng) == 10))
    goto label_51;
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd125.Obj) = ((Wrd124.pObj) [0]);
  (Wrd126.Lng) = (FIXNUM_TO_LONG (Wrd125.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd126.Lng))))
    goto label_51;
  (Wrd120.Obj) = ((Wrd124.pObj) [1]);

DEFLABEL (label_50)
  (Wrd133.Obj) = (* (Rsp++));
  if (! ((Wrd120.Obj) == (Wrd133.Obj)))
    goto label_34;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (label_51)
  (Wrd129.Obj) = (current_block [OBJECT_1_3]);
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_28)
  (Wrd120.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd115.Obj) = (Rsp [2]);
  (Wrd116.Obj) = (current_block [OBJECT_1_2]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_27)
  (Wrd104.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd99.pObj));

DEFLABEL (label_26)
  (Wrd98.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd23.pObj));

DEFLABEL (label_20)
  (Wrd22.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (lambda_33)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_1_16);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_64;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd13.Lng))))
    goto label_64;
  (Wrd5.Obj) = ((Wrd11.pObj) [17]);

DEFLABEL (label_63)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_1_10])))
    goto label_60;
  Rvl = (current_block [OBJECT_1_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd22.Obj) = (current_block [OBJECT_1_11]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_1_12]);
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd37.uLng) == 10)
    goto label_62;

DEFLABEL (label_61)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_8]), 3);

DEFLABEL (label_62)
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd35.Lng))))
    goto label_61;
  ((Wrd33.pObj) [18]) = (Wrd24.Obj);
  Rvl = (current_block [OBJECT_1_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_63;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_10 9
#define LABEL_2_11 11
#define LABEL_2_7 13
#define LABEL_2_8 15
#define LABEL_2_13 17
#define LABEL_2_9 19
#define LABEL_2_15 21
#define ENVIRONMENT_LABEL_2_3 35
#define DEBUGGING_LABEL_2_2 34
#define OBJECT_2_6 33
#define OBJECT_2_5 32
#define OBJECT_2_4 31
#define OBJECT_2_3 30
#define OBJECT_2_2 29
#define OBJECT_2_1 28
#define OBJECT_2_0 27
#define EXECUTE_CACHE_2_14 23
#define EXECUTE_CACHE_2_12 25
#define FREE_REFERENCES_LABEL_2_0 22
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
desenv_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd69;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd47;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_2_4);
      goto setup_ic_block_offsetsB_10;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_2_10);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_2_15);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_ic_block_offsetsB_19)
DEFLABEL (setup_ic_block_offsetsB_10)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_31;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_30)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_29;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd29.Lng))))
    goto label_29;
  (Wrd23.Obj) = ((Wrd27.pObj) [9]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_28)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd56.Obj) = (Rsp [5]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_27;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd55.Lng))))
    goto label_27;
  (Wrd47.Obj) = ((Wrd53.pObj) [6]);

DEFLABEL (label_26)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_25;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [1]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (current_block [OBJECT_2_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd58.Obj) = (Rsp [5]);
  (Wrd59.Obj) = (current_block [OBJECT_2_4]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_14)
  (Wrd47.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_2_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_12 7
#define LABEL_3_14 9
#define LABEL_3_15 11
#define LABEL_3_6 13
#define LABEL_3_7 15
#define LABEL_3_8 17
#define LABEL_3_17 19
#define LABEL_3_9 21
#define LABEL_3_19 23
#define LABEL_3_20 25
#define LABEL_3_21 27
#define LABEL_3_22 29
#define LABEL_3_10 31
#define LABEL_3_24 33
#define LABEL_3_25 35
#define LABEL_3_11 37
#define ENVIRONMENT_LABEL_3_3 59
#define DEBUGGING_LABEL_3_2 58
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
#define EXECUTE_CACHE_3_23 39
#define EXECUTE_CACHE_3_18 41
#define EXECUTE_CACHE_3_16 43
#define EXECUTE_CACHE_3_13 45
#define FREE_REFERENCES_LABEL_3_0 38
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
desenv_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd35;
  machine_word Wrd44;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd25;
  machine_word Wrd38;
  machine_word Wrd37;
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
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
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
      goto setup_stack_block_offsetsB_20;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_3_12);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_3_14);
      goto continuation_16;

    case 4:
      current_block = (Rpc - LABEL_3_15);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_3_17);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_3_19);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_3_20);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_3_21);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_3_22);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_3_24);
      goto label_26;

    case 16:
      current_block = (Rpc - LABEL_3_25);
      goto label_27;

    case 17:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_stack_block_offsetsB_31)
DEFLABEL (setup_stack_block_offsetsB_20)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_60;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_60;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_59)
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd50.Obj) = (Rsp [8]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_58;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd49.Lng))))
    goto label_58;
  (Wrd43.Obj) = ((Wrd47.pObj) [9]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;

DEFLABEL (label_51)
  (Wrd35.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_50)
  (Wrd14.Obj) = (Rsp [6]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_49;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_49;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_48)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_47;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_45;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_45;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_43;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_43;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;

DEFLABEL (label_36)
  (Wrd5.Obj) = (Rsp [0]);

DEFLABEL (label_35)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_34)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_5]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_33;

DEFLABEL (label_32)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_7]), 3);

DEFLABEL (label_33)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_32;
  ((Wrd15.pObj) [7]) = (Wrd5.Obj);
  Rvl = (current_block [OBJECT_3_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_41;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd38.Lng))))
    goto label_41;
  (Wrd25.Obj) = ((Wrd36.pObj) [18]);
  if ((Wrd25.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;

DEFLABEL (label_40)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 26)
    goto label_39;

DEFLABEL (label_38)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_39)
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd32.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_38;
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));
  goto label_35;

DEFLABEL (label_41)
  (Wrd41.Obj) = (Rsp [4]);
  (Wrd42.Obj) = (current_block [OBJECT_3_4]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_40;

DEFLABEL (label_43)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.Obj) = (current_block [OBJECT_3_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_10]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd16.Obj) = (Rsp [6]);
  (Wrd17.Obj) = (current_block [OBJECT_3_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_52)
  (Wrd54.Obj) = (Rsp [7]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_56;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd53.Lng))))
    goto label_56;
  (Wrd47.Obj) = (Rsp [0]);
  ((Wrd51.pObj) [20]) = (Wrd47.Obj);

DEFLABEL (label_55)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 26)
    goto label_54;

DEFLABEL (label_53)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_54)
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_53;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd39.Obj);
  goto label_50;

DEFLABEL (label_56)
  (Wrd56.Obj) = (Rsp [7]);
  (Wrd57.Obj) = (current_block [OBJECT_3_8]);
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_7]), 3);

DEFLABEL (label_29)
  goto label_55;

DEFLABEL (label_58)
  (Wrd52.Obj) = (Rsp [8]);
  (Wrd53.Obj) = (current_block [OBJECT_3_3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (Wrd5.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
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
#define LABEL_4_12 17
#define ENVIRONMENT_LABEL_4_3 28
#define DEBUGGING_LABEL_4_2 27
#define OBJECT_4_5 26
#define OBJECT_4_4 25
#define OBJECT_4_3 24
#define OBJECT_4_2 23
#define OBJECT_4_1 22
#define OBJECT_4_0 21
#define EXECUTE_CACHE_4_11 19
#define FREE_REFERENCES_LABEL_4_0 18
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
desenv_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd19;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd77;
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
      current_block = (Rpc - LABEL_4_4);
      goto setup_variable_offsetsB_8;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_4_10);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_4_12);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_variable_offsetsB_18)
DEFLABEL (setup_variable_offsetsB_8)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_19;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  if (! ((Wrd6.uLng) == 1))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_33)
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd77.uLng) == 10))
    goto label_32;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd76.Lng))))
    goto label_32;
  (Wrd19.Obj) = ((Wrd74.pObj) [22]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_21;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (label_21)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 1);

DEFLABEL (label_15)
  (Wrd63.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_31;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_30)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd56.uLng) == 10))
    goto label_29;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd55.Lng))))
    goto label_29;
  (Wrd50.Obj) = (Rsp [1]);
  ((Wrd53.pObj) [19]) = (Wrd50.Obj);

DEFLABEL (label_28)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_27;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_25;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd46.Lng) = ((Wrd48.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd46.Lng)))
    goto label_25;
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (label_25)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_13)
  (Wrd43.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 1);

DEFLABEL (label_12)
  (Wrd30.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd58.Obj) = (current_block [OBJECT_4_3]);
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 3);

DEFLABEL (label_14)
  goto label_28;

DEFLABEL (label_31)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_11)
  (Wrd21.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd79.Obj) = (current_block [OBJECT_4_1]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_22;

DEFLABEL (label_34)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define ENVIRONMENT_LABEL_5_3 13
#define DEBUGGING_LABEL_5_2 12
#define OBJECT_5_3 11
#define OBJECT_5_2 10
#define OBJECT_5_1 9
#define OBJECT_5_0 8
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
desenv_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd9;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
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
      goto setup_variable_offsetB_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_variable_offsetB_7)
DEFLABEL (setup_variable_offsetB_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_15;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd43.Lng))))
    goto label_15;
  (Wrd9.Obj) = ((Wrd41.pObj) [22]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_8;

DEFLABEL (label_14)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_13;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd27.Lng))))
    goto label_13;
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [19]) = (Wrd21.Obj);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 26)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_11)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_10;
  Rvl = (LONG_TO_FIXNUM (Wrd14.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (current_block [OBJECT_5_2]);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 3);

DEFLABEL (label_4)
  goto label_12;

DEFLABEL (label_15)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.Obj) = (current_block [OBJECT_5_0]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_8;

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
desenv_so_1a414502ad409b38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
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

static const struct liarc_code_S arr_decl_desenv_so_1a414502ad409b38 [5] =
  {
    { "desenv_so_code_1", 16, desenv_so_code_1 },
    { "desenv_so_code_2", 10, desenv_so_code_2 },
    { "desenv_so_code_3", 18, desenv_so_code_3 },
    { "desenv_so_code_4", 8, desenv_so_code_4 },
    { "desenv_so_code_5", 3, desenv_so_code_5 }
  };

int
decl_desenv_so_1a414502ad409b38 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_desenv_so_1a414502ad409b38);
  return (0);
}

DECLARE_COMPILED_CODE ("desenv.so", 3, decl_desenv_so_1a414502ad409b38, desenv_so_1a414502ad409b38)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_desenv_so_data_1a414502ad409b38 [1095] =
  "\x45\x0c\x8d\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x02\x08\x02"
  "\xc3\xb9\x0c\x1d\x86\x02\x80\x02\xc2\xba\x82\x0d\x0d\x0d\x0d\x0d"
  "\x24\x28\x0d\x28\x0d\xbb\x28\x0d\x28\x0d\x28\x0d\xbc\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbd\x1d\xb0\x82\x88\x86\xc1\xbe\x85\x82\x02\xb2\x02\x28\x0d"
  "\xbf\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83"
  "\x88\xb6\x85\x02\xb1\x1d\x86\x02\x02\x80\xb2\x02\x28\xb7\x28\x0d"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84"
  "\x88\xb6\xb1\x02\xb2\x02\xc1\x28\xb7\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0"
  "\x85\x88\xb1\x02\xb2\x02\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba"
  "\x9c\xb9\x88\xb1\xb2\x2a\xb6\x2a\x1b\x2a\x1b\x2a\xb5\x2a\x9c\x1b"
  "\xb7\xb4\xb3\x0d\x9c\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x5a\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x66\x67\x6f\x70\x74"
  "\x2f\x64\x65\x73\x65\x6e\x76\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x12\x11\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x13"
  "\x49\x6c\x6c\x65\x67\x61\x6c\x20\x62\x6c\x6f\x63\x6b\x20\x74\x79"
  "\x70\x65\x02\x09\x08\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66"
  "\x0e\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2f\x69\x63\x0e\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x61\x67\x11\x62\x6c\x6f"
  "\x63\x6b\x2d\x74\x79\x70\x65\x2f\x73\x74\x61\x63\x6b\x18\x62\x6c"
  "\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2f\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x13\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65"
  "\x2f\x63\x6c\x6f\x73\x75\x72\x65\x06\x04\x09\x66\x6f\x72\x2d\x65"
  "\x61\x63\x68\x03\x18\x73\x65\x74\x75\x70\x2d\x69\x63\x2d\x62\x6c"
  "\x6f\x63\x6b\x2d\x6f\x66\x66\x73\x65\x74\x73\x21\x03\x18\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x66\x72\x61\x6d\x65"
  "\x2d\x73\x69\x7a\x65\x04\x06\x65\x72\x72\x6f\x72\x03\x1b\x73\x65"
  "\x74\x75\x70\x2d\x73\x74\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b\x2d"
  "\x6f\x66\x66\x73\x65\x74\x73\x21\x06\x13\x22\x81\x83\x02\x12\x20"
  "\x83\x04\x11\x1e\x81\x85\x02\x10\x1c\x81\x87\x02\x0f\x1a\x81\x85"
  "\x02\x0e\x18\x81\x89\x02\x0d\x16\x81\x85\x02\x0c\x14\x81\x87\x02"
  "\x0b\x12\x81\x85\x02\x0a\x10\x81\x87\x02\x09\x0e\x81\x87\x02\x08"
  "\x0c\x81\x85\x02\x07\x0a\x81\x85\x02\x06\x08\x81\x83\x02\x05\x06"
  "\x83\x04\x04\x04\x83\x04\x21\x42\x02\x04\x63\x64\x72\x09\x08\x04"
  "\x18\x73\x65\x74\x75\x70\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2d"
  "\x6f\x66\x66\x73\x65\x74\x73\x21\x04\x17\x73\x65\x74\x75\x70\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x6f\x66\x66\x73\x65\x74\x21"
  "\x09\x03\x1d\x16\x81\x8b\x02\x1c\x14\x81\x89\x02\x1b\x12\x81\x89"
  "\x02\x1a\x10\x81\x87\x02\x19\x0e\x81\x85\x02\x18\x0c\x81\x8d\x02"
  "\x17\x0a\x81\x8d\x02\x16\x08\x81\x83\x02\x15\x06\x81\x83\x02\x14"
  "\x04\x83\x04\x15\x24\x0a\x02\x14\x02\x12\x09\x08\x04\x03\x13\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x63\x6c\x6f\x73\x75\x72\x65"
  "\x3f\x04\x09\x03\x1b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74"
  "\x72\x69\x76\x69\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x3f\x05"
  "\x2f\x26\x81\x91\x02\x2e\x24\x81\x91\x02\x2d\x22\x81\x91\x02\x2c"
  "\x20\x81\x8f\x02\x2b\x1e\x81\x83\x02\x2a\x1c\x81\x83\x02\x29\x1a"
  "\x81\x83\x02\x28\x18\x81\x8f\x02\x27\x16\x81\x8d\x02\x26\x14\x81"
  "\x8d\x02\x25\x12\x81\x8b\x02\x24\x10\x81\x89\x02\x23\x0e\x81\x87"
  "\x02\x22\x0c\x81\x83\x02\x21\x0a\x81\x83\x02\x20\x08\x81\x95\x02"
  "\x1f\x06\x81\x83\x02\x1e\x04\x83\x04\x25\x3c\x0b\x02\x13\x16\x04"
  "\x63\x61\x72\x04\x02\x37\x12\x81\x85\x02\x36\x10\x81\x85\x02\x35"
  "\x0e\x81\x85\x02\x34\x0c\x81\x85\x02\x33\x0a\x81\x85\x02\x32\x08"
  "\x81\x85\x02\x31\x06\x81\x85\x02\x30\x04\x84\x06\x11\x1d\x02\x13"
  "\x16\x3a\x08\x81\x85\x02\x39\x06\x81\x85\x02\x38\x04\x84\x06\x07"
  "\x0e\x04\x04\x0b\x04\x0a\x04\x04\x09\x1b\x64\x65\x73\x69\x67\x6e"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x66\x72\x61"
  "\x6d\x65\x73\x21\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02"
  "\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
desenv_so_data_1a414502ad409b38 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_desenv_so_data_1a414502ad409b38 [0]))), (sizeof (prog_desenv_so_data_1a414502ad409b38)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("desenv.so", desenv_so_data_1a414502ad409b38)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("desenv.so", "e3a91db9d2c4a205")
