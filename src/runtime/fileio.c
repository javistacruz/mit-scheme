/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:32-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define LABEL_1_10 13
#define LABEL_1_11 15
#define LABEL_1_12 17
#define LABEL_1_13 19
#define LABEL_1_14 21
#define LABEL_1_15 23
#define LABEL_1_17 25
#define LABEL_1_16 27
#define LABEL_1_20 29
#define LABEL_1_18 31
#define LABEL_1_21 33
#define LABEL_1_23 35
#define ENVIRONMENT_LABEL_1_3 65
#define DEBUGGING_LABEL_1_2 64
#define OBJECT_1_9 63
#define OBJECT_1_8 62
#define OBJECT_1_7 61
#define OBJECT_1_6 60
#define OBJECT_1_5 59
#define OBJECT_1_4 58
#define OBJECT_1_3 57
#define OBJECT_1_2 56
#define OBJECT_1_1 55
#define OBJECT_1_0 54
#define EXECUTE_CACHE_1_22 37
#define EXECUTE_CACHE_1_19 39
#define EXECUTE_CACHE_1_6 41
#define FREE_REFERENCE_1_4 44
#define FREE_REFERENCE_1_3 45
#define FREE_REFERENCE_1_2 46
#define FREE_REFERENCE_1_1 47
#define FREE_REFERENCE_1_0 48
#define FREE_ASSIGNMENT_1_3 50
#define FREE_ASSIGNMENT_1_2 51
#define FREE_ASSIGNMENT_1_1 52
#define FREE_ASSIGNMENT_1_0 53
#define FREE_REFERENCES_LABEL_1_0 36
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd139;
  machine_word Wrd137;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd128;
  machine_word Wrd124;
  machine_word Wrd126;
  machine_word Wrd127;
  machine_word Wrd120;
  machine_word Wrd122;
  machine_word Wrd123;
  machine_word Wrd114;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd104;
  machine_word Wrd95;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd76;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_27;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_29;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto label_34;

    case 8:
      current_block = (Rpc - LABEL_1_13);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_22;

    case 10:
      current_block = (Rpc - LABEL_1_15);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_1_17);
      goto lambda_21;

    case 12:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_23;

    case 13:
      current_block = (Rpc - LABEL_1_20);
      goto label_37;

    case 14:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_20;

    case 15:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_24;

    case 16:
      current_block = (Rpc - LABEL_1_23);
      goto label_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_40)
DEFLABEL (initialize_packageB_27)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_63)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_62;
  Wrd19 = Wrd23;

DEFLABEL (label_61)
  (Wrd28.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_60;
  Wrd38 = Wrd42;

DEFLABEL (label_59)
  (Wrd47.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd51.Obj) = (current_block [OBJECT_1_3]);
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
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_58;
  Wrd57 = Wrd61;

DEFLABEL (label_57)
  (Wrd66.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (Wrd70.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd63.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));
  (Wrd71.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd80.Obj) = ((Wrd77.pObj) [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd81.uLng) == 50)
    goto label_56;
  Wrd76 = Wrd80;

DEFLABEL (label_55)
  (Wrd85.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd85.Obj);
  (Wrd84.pObj) = (& (Rhp [-2]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd84.pObj)));
  (Wrd89.Obj) = (current_block [OBJECT_1_5]);
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd82.Obj);
  (Wrd88.pObj) = (& (Rhp [-2]));
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd88.pObj)));
  (Wrd90.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd86.Obj);
  (* (Rhp++)) = (Wrd90.Obj);
  (Wrd92.pObj) = (& (Rhp [-2]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd92.pObj)));
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd96.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd99.Obj) = ((Wrd96.pObj) [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd100.uLng) == 50)
    goto label_54;
  Wrd95 = Wrd99;

DEFLABEL (label_53)
  (Wrd104.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd95.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  (Wrd103.pObj) = (& (Rhp [-2]));
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd103.pObj)));
  (Wrd108.Obj) = (current_block [OBJECT_1_6]);
  (* (Rhp++)) = (Wrd108.Obj);
  (* (Rhp++)) = (Wrd101.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (Wrd109.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd105.Obj);
  (* (Rhp++)) = (Wrd109.Obj);
  (Wrd111.pObj) = (& (Rhp [-2]));
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd111.pObj)));
  (* (--Rsp)) = (Wrd112.Obj);
  (Wrd115.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd118.Obj) = ((Wrd115.pObj) [0]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if ((Wrd119.uLng) == 50)
    goto label_52;
  Wrd114 = Wrd118;

DEFLABEL (label_51)
  (Wrd123.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd114.Obj);
  (* (Rhp++)) = (Wrd123.Obj);
  (Wrd122.pObj) = (& (Rhp [-2]));
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd122.pObj)));
  (Wrd127.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd127.Obj);
  (* (Rhp++)) = (Wrd120.Obj);
  (Wrd126.pObj) = (& (Rhp [-2]));
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd126.pObj)));
  (Wrd128.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd124.Obj);
  (* (Rhp++)) = (Wrd128.Obj);
  (Wrd130.pObj) = (& (Rhp [-2]));
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd130.pObj)));
  (* (--Rsp)) = (Wrd131.Obj);
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (Wrd135.pObj) = (& (Rsp [1]));
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd135.pObj)));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd139.Obj) = (current_block [OBJECT_1_8]);
  (* (--Rsp)) = (Wrd139.Obj);
  goto lambda_21;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_48)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.pObj) = (& (Rsp [1]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_1_8]);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto lambda_21;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_45)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.pObj) = (& (Rsp [1]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_1_8]);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  goto lambda_21;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_42)
  Rsp = (& (Rsp [1]));
  Rvl = (current_block [OBJECT_1_9]);
  goto pop_return;

DEFLABEL (label_44)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_23])), (Wrd6.pObj), Rvl);

DEFLABEL (label_38)
  goto label_42;

DEFLABEL (label_47)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_46;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_20])), (Wrd6.pObj), Rvl);

DEFLABEL (label_37)
  goto label_45;

DEFLABEL (label_50)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_15])), (Wrd6.pObj), Rvl);

DEFLABEL (label_36)
  goto label_48;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_13])), (Wrd115.pObj));

DEFLABEL (label_35)
  (Wrd114.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd96.pObj));

DEFLABEL (label_34)
  (Wrd95.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_11])), (Wrd77.pObj));

DEFLABEL (label_33)
  (Wrd76.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_10])), (Wrd58.pObj));

DEFLABEL (label_32)
  (Wrd57.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd39.pObj));

DEFLABEL (label_31)
  (Wrd38.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd20.pObj));

DEFLABEL (label_30)
  (Wrd19.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_65)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_64;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_29)
  goto label_63;

DEFLABEL (lambda_41)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_1_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_22]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_5 7
#define ENVIRONMENT_LABEL_2_3 16
#define DEBUGGING_LABEL_2_2 15
#define EXECUTE_CACHE_2_9 9
#define EXECUTE_CACHE_2_8 11
#define EXECUTE_CACHE_2_7 13
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_2_4);
      goto operation_length_3;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_length_6)
DEFLABEL (operation_length_3)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define ENVIRONMENT_LABEL_3_3 21
#define DEBUGGING_LABEL_3_2 20
#define OBJECT_3_0 19
#define EXECUTE_CACHE_3_11 11
#define EXECUTE_CACHE_3_10 13
#define EXECUTE_CACHE_3_9 15
#define EXECUTE_CACHE_3_6 17
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_3_4);
      goto operation_write_self_3;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_write_self_6)
DEFLABEL (operation_write_self_3)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_9 7
#define LABEL_4_7 9
#define LABEL_4_10 11
#define LABEL_4_15 13
#define LABEL_4_13 15
#define LABEL_4_17 17
#define LABEL_4_20 19
#define LABEL_4_21 21
#define ENVIRONMENT_LABEL_4_3 43
#define DEBUGGING_LABEL_4_2 42
#define OBJECT_4_0 41
#define EXECUTE_CACHE_4_22 23
#define EXECUTE_CACHE_4_19 25
#define EXECUTE_CACHE_4_18 27
#define EXECUTE_CACHE_4_16 29
#define EXECUTE_CACHE_4_14 31
#define EXECUTE_CACHE_4_12 33
#define EXECUTE_CACHE_4_11 35
#define EXECUTE_CACHE_4_8 37
#define EXECUTE_CACHE_4_6 39
#define FREE_REFERENCES_LABEL_4_0 22
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_4_4);
      goto operation_position_10;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_position_13)
DEFLABEL (operation_position_10)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_9);

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_22]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 26)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_15)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_14;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_14;
  Rvl = (LONG_TO_FIXNUM (Wrd12.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_11 9
#define LABEL_5_9 11
#define LABEL_5_15 13
#define LABEL_5_12 15
#define LABEL_5_18 17
#define LABEL_5_16 19
#define LABEL_5_17 21
#define ENVIRONMENT_LABEL_5_3 45
#define DEBUGGING_LABEL_5_2 44
#define OBJECT_5_0 43
#define EXECUTE_CACHE_5_23 23
#define EXECUTE_CACHE_5_22 25
#define EXECUTE_CACHE_5_21 27
#define EXECUTE_CACHE_5_20 29
#define EXECUTE_CACHE_5_19 31
#define EXECUTE_CACHE_5_14 33
#define EXECUTE_CACHE_5_13 35
#define EXECUTE_CACHE_5_10 37
#define EXECUTE_CACHE_5_8 39
#define EXECUTE_CACHE_5_6 41
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_5_4);
      goto operation_set_positionB_9;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_5_18);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_5_17);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operation_set_positionB_12)
DEFLABEL (operation_set_positionB_9)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_11);

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_15);

DEFLABEL (label_14)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_21]));

DEFLABEL (label_13)
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_22]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_9 7
#define LABEL_6_10 9
#define LABEL_6_7 11
#define LABEL_6_14 13
#define LABEL_6_17 15
#define LABEL_6_18 17
#define LABEL_6_12 19
#define LABEL_6_21 21
#define LABEL_6_24 23
#define LABEL_6_19 25
#define LABEL_6_25 27
#define ENVIRONMENT_LABEL_6_3 53
#define DEBUGGING_LABEL_6_2 52
#define OBJECT_6_0 51
#define EXECUTE_CACHE_6_27 29
#define EXECUTE_CACHE_6_26 31
#define EXECUTE_CACHE_6_23 33
#define EXECUTE_CACHE_6_22 35
#define EXECUTE_CACHE_6_20 37
#define EXECUTE_CACHE_6_16 39
#define EXECUTE_CACHE_6_15 41
#define EXECUTE_CACHE_6_13 43
#define EXECUTE_CACHE_6_11 45
#define EXECUTE_CACHE_6_8 47
#define EXECUTE_CACHE_6_6 49
#define FREE_REFERENCES_LABEL_6_0 28
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_6_4);
      goto guarantee_positionable_port_13;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_6_17);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_6_18);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_6_21);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_6_24);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_6_19);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_6_25);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_positionable_port_16)
DEFLABEL (guarantee_positionable_port_13)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (Wrd15.Obj) = (* (Rsp++));
  if (Rvl == (Wrd15.Obj))
    goto label_21;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_9);

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;

DEFLABEL (label_19)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_6_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_6_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_26]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_6_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_27]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6_24);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (label_20)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_17);
  goto label_19;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_11 9
#define LABEL_7_8 11
#define LABEL_7_10 13
#define LABEL_7_14 15
#define LABEL_7_16 17
#define LABEL_7_17 19
#define ENVIRONMENT_LABEL_7_3 38
#define DEBUGGING_LABEL_7_2 37
#define EXECUTE_CACHE_7_19 21
#define EXECUTE_CACHE_7_18 23
#define EXECUTE_CACHE_7_15 25
#define EXECUTE_CACHE_7_13 27
#define EXECUTE_CACHE_7_12 29
#define EXECUTE_CACHE_7_9 31
#define EXECUTE_CACHE_7_6 33
#define FREE_REFERENCE_7_0 36
#define FREE_REFERENCES_LABEL_7_0 20
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd11;
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
      goto open_input_file_10;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7_11);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_7_17);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_input_file_14)
DEFLABEL (open_input_file_10)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;
  Wrd9 = Wrd13;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_16);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_11])), (Wrd10.pObj));

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_11 9
#define LABEL_8_8 11
#define LABEL_8_10 13
#define LABEL_8_15 15
#define LABEL_8_17 17
#define LABEL_8_18 19
#define ENVIRONMENT_LABEL_8_3 41
#define DEBUGGING_LABEL_8_2 40
#define OBJECT_8_0 39
#define EXECUTE_CACHE_8_20 21
#define EXECUTE_CACHE_8_19 23
#define EXECUTE_CACHE_8_16 25
#define EXECUTE_CACHE_8_14 27
#define EXECUTE_CACHE_8_13 29
#define EXECUTE_CACHE_8_12 31
#define EXECUTE_CACHE_8_9 33
#define EXECUTE_CACHE_8_6 35
#define FREE_REFERENCE_8_0 38
#define FREE_REFERENCES_LABEL_8_0 20
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_8_4);
      goto open_output_file_12;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_8_11);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_8_15);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_8_17);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_8_18);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_output_file_16)
DEFLABEL (open_output_file_12)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_8_0])))
    goto label_18;

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (label_18)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_20;
  Wrd9 = Wrd13;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8_17);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_11])), (Wrd10.pObj));

DEFLABEL (label_14)
  (Wrd9.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_11 9
#define LABEL_9_8 11
#define LABEL_9_10 13
#define LABEL_9_14 15
#define LABEL_9_16 17
#define LABEL_9_17 19
#define ENVIRONMENT_LABEL_9_3 38
#define DEBUGGING_LABEL_9_2 37
#define EXECUTE_CACHE_9_19 21
#define EXECUTE_CACHE_9_18 23
#define EXECUTE_CACHE_9_15 25
#define EXECUTE_CACHE_9_13 27
#define EXECUTE_CACHE_9_12 29
#define EXECUTE_CACHE_9_9 31
#define EXECUTE_CACHE_9_6 33
#define FREE_REFERENCE_9_0 36
#define FREE_REFERENCES_LABEL_9_0 20
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_9_4);
      goto open_exclusive_output_file_10;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_9_11);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_9_17);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_exclusive_output_file_14)
DEFLABEL (open_exclusive_output_file_10)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;
  Wrd9 = Wrd13;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_16);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_11])), (Wrd10.pObj));

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define LABEL_10_11 9
#define LABEL_10_8 11
#define LABEL_10_10 13
#define LABEL_10_14 15
#define LABEL_10_16 17
#define LABEL_10_17 19
#define ENVIRONMENT_LABEL_10_3 38
#define DEBUGGING_LABEL_10_2 37
#define EXECUTE_CACHE_10_19 21
#define EXECUTE_CACHE_10_18 23
#define EXECUTE_CACHE_10_15 25
#define EXECUTE_CACHE_10_13 27
#define EXECUTE_CACHE_10_12 29
#define EXECUTE_CACHE_10_9 31
#define EXECUTE_CACHE_10_6 33
#define FREE_REFERENCE_10_0 36
#define FREE_REFERENCES_LABEL_10_0 20
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd11;
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
      goto open_i_o_file_10;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_10_11);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_10_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_10_16);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_10_17);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_i_o_file_14)
DEFLABEL (open_i_o_file_10)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;
  Wrd9 = Wrd13;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_16);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_11])), (Wrd10.pObj));

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_11 9
#define LABEL_11_8 11
#define LABEL_11_10 13
#define LABEL_11_14 15
#define LABEL_11_16 17
#define LABEL_11_18 19
#define ENVIRONMENT_LABEL_11_3 39
#define DEBUGGING_LABEL_11_2 38
#define OBJECT_11_0 37
#define EXECUTE_CACHE_11_19 21
#define EXECUTE_CACHE_11_17 23
#define EXECUTE_CACHE_11_15 25
#define EXECUTE_CACHE_11_13 27
#define EXECUTE_CACHE_11_12 29
#define EXECUTE_CACHE_11_9 31
#define EXECUTE_CACHE_11_6 33
#define FREE_REFERENCE_11_0 36
#define FREE_REFERENCES_LABEL_11_0 20
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_11_4);
      goto open_binary_input_file_10;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_11_11);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_11_16);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_11_18);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_binary_input_file_14)
DEFLABEL (open_binary_input_file_10)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;
  Wrd9 = Wrd13;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_18);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_11])), (Wrd10.pObj));

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_11 9
#define LABEL_12_8 11
#define LABEL_12_10 13
#define LABEL_12_15 15
#define LABEL_12_17 17
#define LABEL_12_19 19
#define ENVIRONMENT_LABEL_12_3 42
#define DEBUGGING_LABEL_12_2 41
#define OBJECT_12_1 40
#define OBJECT_12_0 39
#define EXECUTE_CACHE_12_20 21
#define EXECUTE_CACHE_12_18 23
#define EXECUTE_CACHE_12_16 25
#define EXECUTE_CACHE_12_14 27
#define EXECUTE_CACHE_12_13 29
#define EXECUTE_CACHE_12_12 31
#define EXECUTE_CACHE_12_9 33
#define EXECUTE_CACHE_12_6 35
#define FREE_REFERENCE_12_0 38
#define FREE_REFERENCES_LABEL_12_0 20
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_12_4);
      goto open_binary_output_file_12;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12_11);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_12_15);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_12_17);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_12_19);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_binary_output_file_16)
DEFLABEL (open_binary_output_file_12)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_12_0])))
    goto label_18;

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (label_18)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_20;
  Wrd9 = Wrd13;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12_19);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_11])), (Wrd10.pObj));

DEFLABEL (label_14)
  (Wrd9.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_11 9
#define LABEL_13_8 11
#define LABEL_13_10 13
#define LABEL_13_14 15
#define LABEL_13_16 17
#define LABEL_13_18 19
#define ENVIRONMENT_LABEL_13_3 39
#define DEBUGGING_LABEL_13_2 38
#define OBJECT_13_0 37
#define EXECUTE_CACHE_13_19 21
#define EXECUTE_CACHE_13_17 23
#define EXECUTE_CACHE_13_15 25
#define EXECUTE_CACHE_13_13 27
#define EXECUTE_CACHE_13_12 29
#define EXECUTE_CACHE_13_9 31
#define EXECUTE_CACHE_13_6 33
#define FREE_REFERENCE_13_0 36
#define FREE_REFERENCES_LABEL_13_0 20
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_13_4);
      goto open_exclusive_binary_output_file_10;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_13_11);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_13_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_13_16);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_13_18);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_exclusive_binary_output_file_14)
DEFLABEL (open_exclusive_binary_output_file_10)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;
  Wrd9 = Wrd13;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13_18);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_11])), (Wrd10.pObj));

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_11 9
#define LABEL_14_8 11
#define LABEL_14_10 13
#define LABEL_14_14 15
#define LABEL_14_16 17
#define LABEL_14_18 19
#define ENVIRONMENT_LABEL_14_3 39
#define DEBUGGING_LABEL_14_2 38
#define OBJECT_14_0 37
#define EXECUTE_CACHE_14_19 21
#define EXECUTE_CACHE_14_17 23
#define EXECUTE_CACHE_14_15 25
#define EXECUTE_CACHE_14_13 27
#define EXECUTE_CACHE_14_12 29
#define EXECUTE_CACHE_14_9 31
#define EXECUTE_CACHE_14_6 33
#define FREE_REFERENCE_14_0 36
#define FREE_REFERENCES_LABEL_14_0 20
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd11;
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
      goto open_binary_i_o_file_10;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_14_11);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_14_16);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_14_18);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_binary_i_o_file_14)
DEFLABEL (open_binary_i_o_file_10)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;
  Wrd9 = Wrd13;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14_18);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_11])), (Wrd10.pObj));

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define LABEL_15_7 7
#define LABEL_15_8 9
#define LABEL_15_9 11
#define ENVIRONMENT_LABEL_15_3 16
#define DEBUGGING_LABEL_15_2 15
#define EXECUTE_CACHE_15_10 13
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_15_4);
      goto make_call_with_file_6;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_call_with_file_9)
DEFLABEL (make_call_with_file_6)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 9
#define DEBUGGING_LABEL_16_2 8
#define OBJECT_16_0 7
#define EXECUTE_CACHE_16_5 5
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_16_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 9
#define DEBUGGING_LABEL_17_2 8
#define OBJECT_17_0 7
#define EXECUTE_CACHE_17_5 5
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_17_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define TAG_18_6 1
#define LABEL_18_7 7
#define TAG_18_8 2
#define ENVIRONMENT_LABEL_18_3 12
#define DEBUGGING_LABEL_18_2 11
#define EXECUTE_CACHE_18_9 9
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_18_4);
      goto make_with_input_from_file_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_with_input_from_file_5)
DEFLABEL (make_with_input_from_file_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [0]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_18_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define TAG_19_6 1
#define LABEL_19_7 7
#define TAG_19_8 2
#define ENVIRONMENT_LABEL_19_3 12
#define DEBUGGING_LABEL_19_2 11
#define EXECUTE_CACHE_19_9 9
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fileio_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto make_with_output_to_file_2;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_with_output_to_file_5)
DEFLABEL (make_with_output_to_file_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
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

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_19_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [0]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_19_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_8 5
#define LABEL_6 7
#define LABEL_12 9
#define LABEL_7 11
#define LABEL_10 13
#define LABEL_15 15
#define LABEL_11 17
#define LABEL_13 19
#define LABEL_18 21
#define LABEL_14 23
#define LABEL_16 25
#define LABEL_21 27
#define LABEL_17 29
#define LABEL_19 31
#define LABEL_24 33
#define LABEL_20 35
#define LABEL_22 37
#define LABEL_23 39
#define LABEL_25 41
#define LABEL_26 43
#define LABEL_27 45
#define LABEL_28 47
#define LABEL_29 49
#define LABEL_32 51
#define LABEL_30 53
#define LABEL_36 55
#define LABEL_31 57
#define LABEL_34 59
#define LABEL_35 61
#define LABEL_37 63
#define LABEL_40 65
#define LABEL_38 67
#define LABEL_44 69
#define LABEL_39 71
#define LABEL_42 73
#define LABEL_47 75
#define LABEL_43 77
#define LABEL_45 79
#define LABEL_49 81
#define LABEL_46 83
#define LABEL_48 85
#define LABEL_50 87
#define LABEL_51 89
#define LABEL_52 91
#define ENVIRONMENT_LABEL_3 141
#define DEBUGGING_LABEL_2 140
#define PURIFICATION_ROOT 139
#define OBJECT_23 138
#define OBJECT_22 137
#define OBJECT_21 136
#define OBJECT_20 135
#define OBJECT_19 134
#define OBJECT_18 133
#define OBJECT_17 132
#define OBJECT_16 131
#define OBJECT_15 130
#define OBJECT_14 129
#define OBJECT_13 128
#define OBJECT_12 127
#define OBJECT_11 126
#define OBJECT_10 125
#define OBJECT_9 124
#define OBJECT_8 123
#define OBJECT_7 122
#define OBJECT_6 121
#define OBJECT_5 120
#define OBJECT_4 119
#define OBJECT_3 118
#define OBJECT_2 117
#define OBJECT_1 116
#define OBJECT_0 115
#define EXECUTE_CACHE_41 93
#define EXECUTE_CACHE_33 95
#define EXECUTE_CACHE_9 97
#define FREE_REFERENCE_11 100
#define FREE_REFERENCE_10 101
#define FREE_REFERENCE_9 102
#define FREE_REFERENCE_8 103
#define FREE_REFERENCE_7 104
#define FREE_REFERENCE_6 105
#define FREE_REFERENCE_5 106
#define FREE_REFERENCE_4 107
#define FREE_REFERENCE_3 108
#define FREE_REFERENCE_2 109
#define FREE_REFERENCE_1 110
#define FREE_REFERENCE_0 111
#define GLOBAL_EXECUTE_CACHE_5 113
#define FREE_REFERENCES_LABEL_0 92
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
fileio_so_22e8177fa1ea796a (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_8);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12);
      goto label_33;

    case 4:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_15);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_11);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_18);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_14);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_21);
      goto label_36;

    case 13:
      current_block = (Rpc - LABEL_17);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_24);
      goto label_37;

    case 16:
      current_block = (Rpc - LABEL_20);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_22);
      goto continuation_12;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_11;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto continuation_14;

    case 20:
      current_block = (Rpc - LABEL_26);
      goto continuation_13;

    case 21:
      current_block = (Rpc - LABEL_27);
      goto continuation_16;

    case 22:
      current_block = (Rpc - LABEL_28);
      goto continuation_15;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto continuation_17;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto label_38;

    case 25:
      current_block = (Rpc - LABEL_30);
      goto continuation_19;

    case 26:
      current_block = (Rpc - LABEL_36);
      goto label_39;

    case 27:
      current_block = (Rpc - LABEL_31);
      goto continuation_18;

    case 28:
      current_block = (Rpc - LABEL_34);
      goto continuation_21;

    case 29:
      current_block = (Rpc - LABEL_35);
      goto continuation_20;

    case 30:
      current_block = (Rpc - LABEL_37);
      goto continuation_22;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto label_40;

    case 32:
      current_block = (Rpc - LABEL_38);
      goto continuation_24;

    case 33:
      current_block = (Rpc - LABEL_44);
      goto label_41;

    case 34:
      current_block = (Rpc - LABEL_39);
      goto continuation_23;

    case 35:
      current_block = (Rpc - LABEL_42);
      goto continuation_26;

    case 36:
      current_block = (Rpc - LABEL_47);
      goto label_42;

    case 37:
      current_block = (Rpc - LABEL_43);
      goto continuation_25;

    case 38:
      current_block = (Rpc - LABEL_45);
      goto continuation_28;

    case 39:
      current_block = (Rpc - LABEL_49);
      goto label_43;

    case 40:
      current_block = (Rpc - LABEL_46);
      goto continuation_27;

    case 41:
      current_block = (Rpc - LABEL_48);
      goto continuation_29;

    case 42:
      current_block = (Rpc - LABEL_50);
      goto label_46;

    case 43:
      current_block = (Rpc - LABEL_51);
      goto label_47;

    case 44:
      current_block = (Rpc - LABEL_52);
      goto expression_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_31)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_51])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_47)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_46)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 19)
      goto label_45;
    blocks = (current_block [OBJECT_23]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_50])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_45)
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
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_71;
  Wrd11 = Wrd15;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_69;
  Wrd11 = Wrd15;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_67;
  Wrd11 = Wrd15;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_65;
  Wrd11 = Wrd15;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_63;
  Wrd11 = Wrd15;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_61;
  Wrd11 = Wrd15;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_59;
  Wrd11 = Wrd15;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_57;
  Wrd11 = Wrd15;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_35);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_55;
  Wrd11 = Wrd15;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_53;
  Wrd11 = Wrd15;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_43);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_51;
  Wrd11 = Wrd15;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_46);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_49;
  Wrd10 = Wrd14;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_48);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49])), (Wrd11.pObj));

DEFLABEL (label_43)
  (Wrd10.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47])), (Wrd12.pObj));

DEFLABEL (label_42)
  (Wrd11.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44])), (Wrd12.pObj));

DEFLABEL (label_41)
  (Wrd11.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd12.pObj));

DEFLABEL (label_40)
  (Wrd11.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd12.pObj));

DEFLABEL (label_39)
  (Wrd11.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd12.pObj));

DEFLABEL (label_38)
  (Wrd11.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd12.pObj));

DEFLABEL (label_37)
  (Wrd11.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd12.pObj));

DEFLABEL (label_36)
  (Wrd11.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_35)
  (Wrd11.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd12.pObj));

DEFLABEL (label_34)
  (Wrd11.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd12.pObj));

DEFLABEL (label_33)
  (Wrd11.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd12.pObj));

DEFLABEL (label_32)
  (Wrd11.Obj) = Rvl;
  goto label_70;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_fileio_so_22e8177fa1ea796a [19] =
  {
    { "fileio_so_code_1", 17, fileio_so_code_1 },
    { "fileio_so_code_2", 3, fileio_so_code_2 },
    { "fileio_so_code_3", 4, fileio_so_code_3 },
    { "fileio_so_code_4", 10, fileio_so_code_4 },
    { "fileio_so_code_5", 10, fileio_so_code_5 },
    { "fileio_so_code_6", 13, fileio_so_code_6 },
    { "fileio_so_code_7", 9, fileio_so_code_7 },
    { "fileio_so_code_8", 9, fileio_so_code_8 },
    { "fileio_so_code_9", 9, fileio_so_code_9 },
    { "fileio_so_code_10", 9, fileio_so_code_10 },
    { "fileio_so_code_11", 9, fileio_so_code_11 },
    { "fileio_so_code_12", 9, fileio_so_code_12 },
    { "fileio_so_code_13", 9, fileio_so_code_13 },
    { "fileio_so_code_14", 9, fileio_so_code_14 },
    { "fileio_so_code_15", 5, fileio_so_code_15 },
    { "fileio_so_code_16", 1, fileio_so_code_16 },
    { "fileio_so_code_17", 1, fileio_so_code_17 },
    { "fileio_so_code_18", 3, fileio_so_code_18 },
    { "fileio_so_code_19", 3, fileio_so_code_19 }
  };

int
decl_fileio_so_22e8177fa1ea796a (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_fileio_so_22e8177fa1ea796a);
  return (0);
}

DECLARE_COMPILED_CODE ("fileio.so", 45, decl_fileio_so_22e8177fa1ea796a, fileio_so_22e8177fa1ea796a)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_fileio_so_data_22e8177fa1ea796a [4162] =
  "\x8e\x01\x28\xbd\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x08\x80\x0d\xb9\x0d\xba\x0d\xbb\x0d\xbc\x25"
  "\x0d\xbd\xb1\x0d\xbe\x0d\xbf\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x83\x88\x0c\x28\x0d\x28\xb1\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xb7\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x85\x88\xb6\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\x1d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x24"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\xb3\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x24\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\xb2\x24\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\xb3\x24\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\xb3\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\xb4\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88"
  "\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x1c\x1b\x2a\x0d\x0d\x0d\x1c\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1c\x1b\x2a\x0d\x1c\x0d\x1c\x0d\xb8\x0d\x1c\xc3"
  "\x0d\x1c\x0d\x1c\x0d\x0d\x1c\x1b\x0d\x1c\x0d\x0d\x1c\x1b\x0d\x1c"
  "\x1b\xb6\xb7\xb5\x1b\xb1\xb4\xb3\xb2\x0d\x17\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1e\x1e\x1b\x2a\x17\x28\x0d"
  "\x26\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb0\x1b\x1b\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x66\x69\x6c"
  "\x65\x69\x6f\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x08\x63"
  "\x68\x61\x6e\x6e\x65\x6c\x07\x6c\x65\x6e\x67\x74\x68\x09\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x09\x70\x6f\x73\x69\x74\x69\x6f\x6e\x0e"
  "\x73\x65\x74\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x21\x09\x74\x72"
  "\x75\x65\x6e\x61\x6d\x65\x0b\x77\x72\x69\x74\x65\x2d\x73\x65\x6c"
  "\x66\x13\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x10\x69\x6e\x70\x75\x74\x2d\x66\x69\x6c\x65\x2d"
  "\x74\x79\x70\x65\x11\x6f\x75\x74\x70\x75\x74\x2d\x66\x69\x6c\x65"
  "\x2d\x74\x79\x70\x65\x0e\x69\x2f\x6f\x2d\x66\x69\x6c\x65\x2d\x74"
  "\x79\x70\x65\x05\x15\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x77"
  "\x72\x69\x74\x65\x2d\x73\x65\x6c\x66\x18\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x2f\x73\x65\x74\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e"
  "\x21\x13\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x70\x6f\x73\x69"
  "\x74\x69\x6f\x6e\x11\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x6c"
  "\x65\x6e\x67\x74\x68\x09\x06\x03\x1a\x67\x65\x6e\x65\x72\x69\x63"
  "\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x2d\x61\x63\x63\x65\x73\x73"
  "\x6f\x72\x04\x16\x67\x65\x6e\x65\x72\x69\x63\x2d\x69\x2f\x6f\x2d"
  "\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x04\x0f\x6d\x61\x6b\x65\x2d"
  "\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x04\x3e\x24\x81\x83\x02\x3d"
  "\x22\x81\x83\x02\x3c\x20\x81\x87\x02\x3b\x1e\x81\x83\x02\x3a\x1c"
  "\x81\x83\x02\x39\x1a\x81\x87\x02\x38\x18\x81\x83\x02\x37\x16\x81"
  "\x83\x02\x36\x14\x81\x83\x02\x35\x12\x81\x83\x02\x34\x10\x81\x83"
  "\x02\x33\x0e\x81\x83\x02\x32\x0c\x81\x83\x02\x31\x0a\x81\x81\x02"
  "\x30\x08\x81\x81\x02\x2f\x06\x81\x81\x02\x2e\x04\x82\x02\x23\x42"
  "\x0a\x02\x03\x13\x70\x6f\x72\x74\x2f\x69\x6e\x70\x75\x74\x2d\x63"
  "\x68\x61\x6e\x6e\x65\x6c\x0b\x03\x14\x70\x6f\x72\x74\x2f\x6f\x75"
  "\x74\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x0c\x03\x14\x63"
  "\x68\x61\x6e\x6e\x65\x6c\x2d\x66\x69\x6c\x65\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x04\x41\x08\x81\x83\x02\x40\x06\x81\x85\x02\x3f\x04\x83"
  "\x04\x07\x11\x0d\x02\x0c\x20\x66\x6f\x72\x20\x66\x69\x6c\x65\x3a"
  "\x20\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x03"
  "\x04\x06\x77\x72\x69\x74\x65\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73"
  "\x74\x72\x69\x6e\x67\x0e\x05\x45\x0a\x81\x87\x02\x44\x08\x81\x85"
  "\x02\x43\x06\x81\x85\x02\x42\x04\x84\x06\x09\x16\x0f\x02\x04\x1c"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x70\x6f\x73\x69\x74\x69"
  "\x6f\x6e\x61\x62\x6c\x65\x2d\x70\x6f\x72\x74\x10\x03\x0d\x6f\x75"
  "\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x3f\x11\x03\x0c\x69\x6e\x70"
  "\x75\x74\x2d\x70\x6f\x72\x74\x3f\x12\x03\x0d\x66\x6c\x75\x73\x68"
  "\x2d\x6f\x75\x74\x70\x75\x74\x13\x03\x0c\x03\x12\x70\x6f\x72\x74"
  "\x2d\x69\x6e\x70\x75\x74\x2d\x62\x75\x66\x66\x65\x72\x14\x03\x18"
  "\x69\x6e\x70\x75\x74\x2d\x62\x75\x66\x66\x65\x72\x2d\x66\x72\x65"
  "\x65\x2d\x62\x79\x74\x65\x73\x03\x16\x63\x68\x61\x6e\x6e\x65\x6c"
  "\x2d\x66\x69\x6c\x65\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x03\x0b"
  "\x0a\x4f\x16\x81\x89\x02\x4e\x14\x81\x87\x02\x4d\x12\x81\x85\x02"
  "\x4c\x10\x81\x83\x02\x4b\x0e\x81\x83\x02\x4a\x0c\x81\x83\x02\x49"
  "\x0a\x81\x83\x02\x48\x08\x81\x83\x02\x47\x06\x81\x83\x02\x46\x04"
  "\x83\x04\x15\x2c\x15\x02\x04\x10\x04\x24\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65\x67"
  "\x61\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x03\x11\x03"
  "\x12\x03\x13\x03\x14\x03\x13\x63\x6c\x65\x61\x72\x2d\x69\x6e\x70"
  "\x75\x74\x2d\x62\x75\x66\x66\x65\x72\x04\x1a\x63\x68\x61\x6e\x6e"
  "\x65\x6c\x2d\x66\x69\x6c\x65\x2d\x73\x65\x74\x2d\x70\x6f\x73\x69"
  "\x74\x69\x6f\x6e\x03\x0c\x03\x0b\x0b\x59\x16\x81\x87\x02\x58\x14"
  "\x81\x85\x02\x57\x12\x81\x87\x02\x56\x10\x81\x85\x02\x55\x0e\x81"
  "\x85\x02\x54\x0c\x81\x85\x02\x53\x0a\x81\x85\x02\x52\x08\x81\x85"
  "\x02\x51\x06\x81\x85\x02\x50\x04\x84\x06\x15\x2e\x13\x02\x02\x04"
  "\x0f\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x70\x6f\x72\x74\x03"
  "\x0a\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x3f\x04\x19\x65\x72\x72\x6f"
  "\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75"
  "\x6d\x65\x6e\x74\x03\x12\x03\x0c\x03\x0b\x03\x11\x03\x14\x03\x26"
  "\x69\x6e\x70\x75\x74\x2d\x62\x75\x66\x66\x65\x72\x2d\x75\x73\x69"
  "\x6e\x67\x2d\x62\x69\x6e\x61\x72\x79\x2d\x6e\x6f\x72\x6d\x61\x6c"
  "\x69\x7a\x65\x72\x3f\x03\x13\x70\x6f\x72\x74\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x62\x75\x66\x66\x65\x72\x03\x29\x6f\x75\x74\x70\x75"
  "\x74\x2d\x62\x75\x66\x66\x65\x72\x2d\x75\x73\x69\x6e\x67\x2d\x62"
  "\x69\x6e\x61\x72\x79\x2d\x64\x65\x6e\x6f\x72\x6d\x61\x6c\x69\x7a"
  "\x65\x72\x3f\x0c\x66\x1c\x81\x87\x02\x65\x1a\x81\x85\x02\x64\x18"
  "\x81\x85\x02\x63\x16\x81\x87\x02\x62\x14\x81\x85\x02\x61\x12\x81"
  "\x85\x02\x60\x10\x81\x85\x02\x5f\x0e\x81\x85\x02\x5e\x0c\x81\x85"
  "\x02\x5d\x0a\x81\x87\x02\x5c\x08\x81\x85\x02\x5b\x06\x81\x85\x02"
  "\x5a\x04\x84\x06\x1b\x36\x14\x02\x08\x02\x03\x10\x6d\x65\x72\x67"
  "\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x73\x12\x03\x0e\x06\x16"
  "\x6d\x61\x6b\x65\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x69\x2f\x6f"
  "\x2d\x70\x6f\x72\x74\x11\x03\x18\x66\x69\x6c\x65\x2d\x6f\x70\x65"
  "\x6e\x2d\x69\x6e\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x0c"
  "\x04\x12\x73\x65\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x70\x6f"
  "\x72\x74\x21\x0b\x03\x11\x66\x69\x6c\x65\x2d\x6c\x69\x6e\x65\x2d"
  "\x65\x6e\x64\x69\x6e\x67\x16\x04\x15\x70\x6f\x72\x74\x2f\x73\x65"
  "\x74\x2d\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67\x17\x08\x6f"
  "\x14\x81\x89\x02\x6e\x12\x81\x87\x02\x6d\x10\x81\x87\x02\x6c\x0e"
  "\x81\x85\x02\x6b\x0c\x81\x85\x02\x6a\x0a\x81\x89\x02\x69\x08\x81"
  "\x83\x02\x68\x06\x81\x83\x02\x67\x04\x83\x04\x13\x27\x18\x02\x09"
  "\x08\x02\x03\x12\x03\x0e\x06\x11\x03\x19\x66\x69\x6c\x65\x2d\x6f"
  "\x70\x65\x6e\x2d\x6f\x75\x74\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e"
  "\x65\x6c\x19\x03\x19\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x61"
  "\x70\x70\x65\x6e\x64\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x1a\x04\x0b"
  "\x03\x16\x04\x17\x09\x78\x14\x81\x8d\x02\x77\x12\x81\x8b\x02\x76"
  "\x10\x81\x8b\x02\x75\x0e\x81\x89\x02\x74\x0c\x81\x89\x02\x73\x0a"
  "\x81\x8d\x02\x72\x08\x81\x87\x02\x71\x06\x81\x85\x02\x70\x04\x84"
  "\x04\x13\x2a\x1b\x02\x0a\x02\x03\x12\x03\x0e\x06\x11\x03\x23\x66"
  "\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x65\x78\x63\x6c\x75\x73\x69"
  "\x76\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65"
  "\x6c\x1c\x04\x0b\x03\x16\x04\x17\x08\x81\x01\x14\x81\x89\x02\x80"
  "\x01\x12\x81\x87\x02\x7f\x10\x81\x87\x02\x7e\x0e\x81\x85\x02\x7d"
  "\x0c\x81\x85\x02\x7c\x0a\x81\x89\x02\x7b\x08\x81\x83\x02\x7a\x06"
  "\x81\x83\x02\x79\x04\x83\x04\x13\x27\x1d\x02\x0b\x02\x03\x12\x03"
  "\x0e\x06\x11\x03\x15\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x69"
  "\x6f\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x1e\x04\x0b\x03\x16\x04\x17"
  "\x08\x8a\x01\x14\x81\x89\x02\x89\x01\x12\x81\x87\x02\x88\x01\x10"
  "\x81\x87\x02\x87\x01\x0e\x81\x85\x02\x86\x01\x0c\x81\x85\x02\x85"
  "\x01\x0a\x81\x89\x02\x84\x01\x08\x81\x83\x02\x83\x01\x06\x81\x83"
  "\x02\x82\x01\x04\x83\x04\x13\x27\x16\x02\x0c\x07\x62\x69\x6e\x61"
  "\x72\x79\x1f\x02\x03\x12\x03\x0e\x06\x11\x03\x0c\x04\x0b\x04\x10"
  "\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d\x63\x6f\x64\x69\x6e\x67\x0c"
  "\x04\x17\x08\x93\x01\x14\x81\x87\x02\x92\x01\x12\x81\x87\x02\x91"
  "\x01\x10\x81\x87\x02\x90\x01\x0e\x81\x85\x02\x8f\x01\x0c\x81\x85"
  "\x02\x8e\x01\x0a\x81\x89\x02\x8d\x01\x08\x81\x83\x02\x8c\x01\x06"
  "\x81\x83\x02\x8b\x01\x04\x83\x04\x13\x28\x20\x02\x0d\x1f\x08\x02"
  "\x03\x12\x03\x0e\x06\x11\x03\x19\x03\x1a\x04\x0b\x04\x0c\x04\x17"
  "\x09\x9c\x01\x14\x81\x8b\x02\x9b\x01\x12\x81\x8b\x02\x9a\x01\x10"
  "\x81\x8b\x02\x99\x01\x0e\x81\x89\x02\x98\x01\x0c\x81\x89\x02\x97"
  "\x01\x0a\x81\x8d\x02\x96\x01\x08\x81\x87\x02\x95\x01\x06\x81\x85"
  "\x02\x94\x01\x04\x84\x04\x13\x2b\x1a\x02\x0e\x1f\x02\x03\x12\x03"
  "\x0e\x06\x11\x03\x1c\x04\x0b\x04\x0c\x04\x17\x08\xa5\x01\x14\x81"
  "\x87\x02\xa4\x01\x12\x81\x87\x02\xa3\x01\x10\x81\x87\x02\xa2\x01"
  "\x0e\x81\x85\x02\xa1\x01\x0c\x81\x85\x02\xa0\x01\x0a\x81\x89\x02"
  "\x9f\x01\x08\x81\x83\x02\x9e\x01\x06\x81\x83\x02\x9d\x01\x04\x83"
  "\x04\x13\x28\x1c\x02\x0f\x1f\x02\x03\x12\x03\x0e\x06\x11\x03\x1e"
  "\x04\x0b\x04\x0c\x04\x17\x08\xae\x01\x14\x81\x87\x02\xad\x01\x12"
  "\x81\x87\x02\xac\x01\x10\x81\x87\x02\xab\x01\x0e\x81\x85\x02\xaa"
  "\x01\x0c\x81\x85\x02\xa9\x01\x0a\x81\x89\x02\xa8\x01\x08\x81\x83"
  "\x02\xa7\x01\x06\x81\x83\x02\xa6\x01\x04\x83\x04\x13\x28\x1f\x02"
  "\x10\x03\x0b\x63\x6c\x6f\x73\x65\x2d\x70\x6f\x72\x74\x02\xb3\x01"
  "\x0c\x81\x8b\x02\xb2\x01\x0a\x81\x89\x02\xb1\x01\x08\x81\x87\x02"
  "\xb0\x01\x06\x81\x87\x02\xaf\x01\x04\x83\x04\x0b\x11\x1e\x02\x11"
  "\x04\x11\x6f\x70\x65\x6e\x2d\x6f\x75\x74\x70\x75\x74\x2d\x66\x69"
  "\x6c\x65\x19\x02\xb4\x01\x04\x83\x04\x03\x0a\x17\x02\x12\x04\x18"
  "\x6f\x70\x65\x6e\x2d\x62\x69\x6e\x61\x72\x79\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x66\x69\x6c\x65\x12\x02\xb5\x01\x04\x83\x04\x03\x0a"
  "\x11\x02\x13\x04\x15\x77\x69\x74\x68\x2d\x69\x6e\x70\x75\x74\x2d"
  "\x66\x72\x6f\x6d\x2d\x70\x6f\x72\x74\x02\xb8\x01\x08\x81\x85\x02"
  "\xb7\x01\x06\x81\x87\x02\xb6\x01\x04\x83\x04\x07\x0d\x0e\x02\x14"
  "\x04\x14\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f"
  "\x2d\x70\x6f\x72\x74\x02\xbb\x01\x08\x81\x85\x02\xba\x01\x06\x81"
  "\x87\x02\xb9\x01\x04\x83\x04\x07\x0d\x0c\x14\x0b\x0b\x1b\x77\x69"
  "\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x62\x69\x6e"
  "\x61\x72\x79\x2d\x66\x69\x6c\x65\x25\x77\x69\x74\x68\x2d\x6f\x75"
  "\x74\x70\x75\x74\x2d\x74\x6f\x2d\x65\x78\x63\x6c\x75\x73\x69\x76"
  "\x65\x2d\x62\x69\x6e\x61\x72\x79\x2d\x66\x69\x6c\x65\x1e\x77\x69"
  "\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x65\x78\x63"
  "\x6c\x75\x73\x69\x76\x65\x2d\x66\x69\x6c\x65\x14\x77\x69\x74\x68"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x66\x69\x6c\x65\x1c"
  "\x77\x69\x74\x68\x2d\x69\x6e\x70\x75\x74\x2d\x66\x72\x6f\x6d\x2d"
  "\x62\x69\x6e\x61\x72\x79\x2d\x66\x69\x6c\x65\x19\x6d\x61\x6b\x65"
  "\x2d\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d"
  "\x66\x69\x6c\x65\x0b\x0c\x04\x15\x77\x69\x74\x68\x2d\x69\x6e\x70"
  "\x75\x74\x2d\x66\x72\x6f\x6d\x2d\x66\x69\x6c\x65\x1d\x63\x61\x6c"
  "\x6c\x2d\x77\x69\x74\x68\x2d\x62\x69\x6e\x61\x72\x79\x2d\x61\x70"
  "\x70\x65\x6e\x64\x2d\x66\x69\x6c\x65\x1a\x6d\x61\x6b\x65\x2d\x77"
  "\x69\x74\x68\x2d\x69\x6e\x70\x75\x74\x2d\x66\x72\x6f\x6d\x2d\x66"
  "\x69\x6c\x65\x0c\x0e\x04\x16\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68"
  "\x2d\x61\x70\x70\x65\x6e\x64\x2d\x66\x69\x6c\x65\x11\x04\x27\x63"
  "\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x65\x78\x63\x6c\x75\x73\x69"
  "\x76\x65\x2d\x62\x69\x6e\x61\x72\x79\x2d\x6f\x75\x74\x70\x75\x74"
  "\x2d\x66\x69\x6c\x65\x11\x17\x04\x1d\x63\x61\x6c\x6c\x2d\x77\x69"
  "\x74\x68\x2d\x62\x69\x6e\x61\x72\x79\x2d\x6f\x75\x74\x70\x75\x74"
  "\x2d\x66\x69\x6c\x65\x17\x20\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68"
  "\x2d\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x2d\x6f\x75\x74\x70\x75"
  "\x74\x2d\x66\x69\x6c\x65\x0e\x16\x63\x61\x6c\x6c\x2d\x77\x69\x74"
  "\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x66\x69\x6c\x65\x1c\x63\x61"
  "\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x62\x69\x6e\x61\x72\x79\x2d\x69"
  "\x6e\x70\x75\x74\x2d\x66\x69\x6c\x65\x21\x11\x6c\x6f\x63\x61\x6c"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x15\x63\x61\x6c\x6c"
  "\x2d\x77\x69\x74\x68\x2d\x69\x6e\x70\x75\x74\x2d\x66\x69\x6c\x65"
  "\x22\x14\x6d\x61\x6b\x65\x2d\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68"
  "\x2d\x66\x69\x6c\x65\x23\x15\x6f\x70\x65\x6e\x2d\x62\x69\x6e\x61"
  "\x72\x79\x2d\x69\x2f\x6f\x2d\x66\x69\x6c\x65\x22\x6f\x70\x65\x6e"
  "\x2d\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x2d\x62\x69\x6e\x61\x72"
  "\x79\x2d\x6f\x75\x74\x70\x75\x74\x2d\x66\x69\x6c\x65\x24\x12\x17"
  "\x6f\x70\x65\x6e\x2d\x62\x69\x6e\x61\x72\x79\x2d\x69\x6e\x70\x75"
  "\x74\x2d\x66\x69\x6c\x65\x25\x0e\x6f\x70\x65\x6e\x2d\x69\x2f\x6f"
  "\x2d\x66\x69\x6c\x65\x1b\x6f\x70\x65\x6e\x2d\x65\x78\x63\x6c\x75"
  "\x73\x69\x76\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x66\x69\x6c\x65"
  "\x26\x19\x10\x6f\x70\x65\x6e\x2d\x69\x6e\x70\x75\x74\x2d\x66\x69"
  "\x6c\x65\x27\x10\x09\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65"
  "\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x14\x1e\x04\x1f\x04\x1c\x04"
  "\x1a\x04\x20\x04\x16\x04\x1d\x04\x1b\x04\x18\x04\x14\x04\x13\x04"
  "\x15\x04\x0f\x04\x0d\x04\x0a\x04\x14\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x27\x25\x19\x26\x12"
  "\x24\x22\x21\x0e\x17\x11\x0d\x03\x23\x03\x0c\x03\x0b\x04\x2d\x5c"
  "\x80\x80\x04\x2c\x5a\x81\x81\x02\x2b\x58\x81\x81\x02\x2a\x56\x81"
  "\x87\x02\x29\x54\x81\x85\x02\x28\x52\x81\x89\x02\x27\x50\x81\x83"
  "\x02\x26\x4e\x81\x85\x02\x25\x4c\x81\x87\x02\x24\x4a\x81\x83\x02"
  "\x23\x48\x81\x85\x02\x22\x46\x81\x87\x02\x21\x44\x81\x83\x02\x20"
  "\x42\x81\x87\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x85\x02\x1d\x3c"
  "\x81\x83\x02\x1c\x3a\x81\x85\x02\x1b\x38\x81\x87\x02\x1a\x36\x81"
  "\x83\x02\x19\x34\x81\x87\x02\x18\x32\x81\x83\x02\x17\x30\x81\x85"
  "\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x83\x02"
  "\x13\x28\x81\x85\x02\x12\x26\x81\x83\x02\x11\x24\x81\x85\x02\x10"
  "\x22\x81\x87\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x85\x02\x0d\x1c"
  "\x81\x87\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x85\x02\x0a\x16\x81"
  "\x87\x02\x09\x14\x81\x83\x02\x08\x12\x81\x85\x02\x07\x10\x81\x87"
  "\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x87\x02"
  "\x03\x08\x81\x83\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\x5b"
  "\x8e\x01";

SCHEME_OBJECT *
fileio_so_data_22e8177fa1ea796a (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_fileio_so_data_22e8177fa1ea796a [0]))), (sizeof (prog_fileio_so_data_22e8177fa1ea796a)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_52]));
}

DECLARE_COMPILED_DATA_NS ("fileio.so", fileio_so_data_22e8177fa1ea796a)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("fileio.so", "dcc6b65f33220680")
