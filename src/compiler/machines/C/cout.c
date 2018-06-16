/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:17-07 by Liar version 4.118. */

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
#define LABEL_1_16 27
#define LABEL_1_18 29
#define LABEL_1_20 31
#define LABEL_1_19 33
#define LABEL_1_21 35
#define LABEL_1_17 37
#define ENVIRONMENT_LABEL_1_3 45
#define DEBUGGING_LABEL_1_2 44
#define OBJECT_1_5 43
#define OBJECT_1_4 42
#define OBJECT_1_3 41
#define OBJECT_1_2 40
#define OBJECT_1_1 39
#define OBJECT_1_0 38
#define FREE_REFERENCES_LABEL_1_0 38
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd128;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd135;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd122;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd106;
  machine_word Wrd113;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd105;
  machine_word Wrd95;
  machine_word Wrd102;
  machine_word Wrd98;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd82;
  machine_word Wrd89;
  machine_word Wrd85;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd71;
  machine_word Wrd78;
  machine_word Wrd74;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd60;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd138;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
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
      goto lambda_29;

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
      goto recur_26;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto label_35;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto label_36;

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
      goto label_41;

    case 12:
      current_block = (Rpc - LABEL_1_16);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_1_18);
      goto label_43;

    case 14:
      current_block = (Rpc - LABEL_1_20);
      goto label_37;

    case 15:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_23;

    case 16:
      current_block = (Rpc - LABEL_1_21);
      goto label_44;

    case 17:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_46)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_55;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_54)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_53;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_52)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_51;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_50)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_49;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_48)
  Rdl = (& (Rsp [5]));
  goto recur_26;

DEFLABEL (label_49)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_33)
  (Wrd23.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_54;

DEFLABEL (recur_47)
DEFLABEL (recur_26)
  DLINK_INTERRUPT_CHECK (25, LABEL_1_9);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_1_2])))
    goto label_56;
  (Wrd140.Obj) = (current_block [OBJECT_1_3]);
  (Wrd141.Obj) = (Rsp [1]);
  (Wrd142.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd143.Obj) = ((Wrd142.pObj) [0]);
  (* (Rhp++)) = (Wrd140.Obj);
  (* (Rhp++)) = (Wrd143.Obj);
  (Wrd138.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd138.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_56)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_75;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_74)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_73;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_72)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd31.uLng) == 1)
    goto label_60;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_58;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_57)
  Rdl = (& (Rsp [2]));
  goto recur_26;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_37)
DEFLABEL (label_59)
  (Wrd128.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd128.Obj));
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_71;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [0]);

DEFLABEL (label_70)
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_69;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd68.Obj) = ((Wrd69.pObj) [1]);

DEFLABEL (label_68)
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_67;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (* (--Rsp)) = (Wrd80.Obj);

DEFLABEL (label_66)
  (Wrd93.Obj) = (Rsp [1]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_65;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd90.Obj) = ((Wrd92.pObj) [0]);

DEFLABEL (label_64)
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd105.uLng) == 1))
    goto label_63;
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd104.Obj) = ((Wrd103.pObj) [0]);
  (* (--Rsp)) = (Wrd104.Obj);

DEFLABEL (label_62)
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = (Rsp [5]);
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd120.pObj)));
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd126.Obj) = (Rsp [5]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 1))
    goto label_61;
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd125.Obj) = ((Wrd124.pObj) [1]);
  (* (--Rsp)) = (Wrd125.Obj);
  goto label_57;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_43)
  goto label_59;

DEFLABEL (label_63)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_42)
  (Wrd106.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd106.Obj));
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_41)
  (Wrd95.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd90.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_40)
  (Wrd82.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd82.Obj));
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_39)
  (Wrd71.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd68.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_38)
  (Wrd60.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd55.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_36)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_35)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_74;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_77;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_76)
  (Wrd28.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd29.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_77)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_44)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd12.Obj) = Rvl;
  goto label_76;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_1_5]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  Rsp = Rdl;
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 14
#define DEBUGGING_LABEL_2_2 13
#define EXECUTE_CACHE_2_7 7
#define EXECUTE_CACHE_2_6 9
#define FREE_REFERENCE_2_0 12
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto stringify_data_0;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stringify_data_4)
DEFLABEL (stringify_data_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_11 13
#define LABEL_3_13 15
#define LABEL_3_17 17
#define LABEL_3_19 19
#define LABEL_3_20 21
#define LABEL_3_21 23
#define LABEL_3_22 25
#define LABEL_3_23 27
#define LABEL_3_25 29
#define LABEL_3_27 31
#define LABEL_3_28 33
#define LABEL_3_30 35
#define LABEL_3_31 37
#define LABEL_3_33 39
#define LABEL_3_34 41
#define LABEL_3_36 43
#define ENVIRONMENT_LABEL_3_3 91
#define DEBUGGING_LABEL_3_2 90
#define OBJECT_3_8 89
#define OBJECT_3_7 88
#define OBJECT_3_6 87
#define OBJECT_3_5 86
#define OBJECT_3_4 85
#define OBJECT_3_3 84
#define OBJECT_3_2 83
#define OBJECT_3_1 82
#define OBJECT_3_0 81
#define EXECUTE_CACHE_3_42 45
#define EXECUTE_CACHE_3_41 47
#define EXECUTE_CACHE_3_40 49
#define EXECUTE_CACHE_3_39 51
#define EXECUTE_CACHE_3_37 53
#define EXECUTE_CACHE_3_35 55
#define EXECUTE_CACHE_3_32 57
#define EXECUTE_CACHE_3_29 59
#define EXECUTE_CACHE_3_26 61
#define EXECUTE_CACHE_3_38 63
#define EXECUTE_CACHE_3_24 65
#define EXECUTE_CACHE_3_18 67
#define EXECUTE_CACHE_3_16 69
#define EXECUTE_CACHE_3_15 71
#define EXECUTE_CACHE_3_14 73
#define EXECUTE_CACHE_3_12 75
#define EXECUTE_CACHE_3_8 77
#define EXECUTE_CACHE_3_6 79
#define FREE_REFERENCES_LABEL_3_0 44
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_3_4);
      goto stringify_data_stackify_23;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_17;

    case 9:
      current_block = (Rpc - LABEL_3_20);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_3_21);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_3_22);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_3_23);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_3_25);
      goto continuation_19;

    case 14:
      current_block = (Rpc - LABEL_3_27);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_3_30);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_3_31);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_3_33);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_3_34);
      goto continuation_7;

    case 20:
      current_block = (Rpc - LABEL_3_36);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stringify_data_stackify_26)
DEFLABEL (stringify_data_stackify_23)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_3_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_32]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_39]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_38]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_3_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_37]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_3_8]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_42]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_35]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_41]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_3_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_25);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_3_33);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_40]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define LABEL_4_10 11
#define LABEL_4_11 13
#define LABEL_4_12 15
#define LABEL_4_14 17
#define LABEL_4_15 19
#define LABEL_4_16 21
#define LABEL_4_20 23
#define LABEL_4_23 25
#define LABEL_4_25 27
#define LABEL_4_27 29
#define LABEL_4_28 31
#define LABEL_4_29 33
#define LABEL_4_30 35
#define LABEL_4_32 37
#define LABEL_4_35 39
#define LABEL_4_36 41
#define LABEL_4_37 43
#define LABEL_4_39 45
#define ENVIRONMENT_LABEL_4_3 85
#define DEBUGGING_LABEL_4_2 84
#define OBJECT_4_4 83
#define OBJECT_4_3 82
#define OBJECT_4_2 81
#define OBJECT_4_1 80
#define OBJECT_4_0 79
#define EXECUTE_CACHE_4_41 47
#define EXECUTE_CACHE_4_40 49
#define EXECUTE_CACHE_4_38 51
#define EXECUTE_CACHE_4_34 53
#define EXECUTE_CACHE_4_33 55
#define EXECUTE_CACHE_4_31 57
#define EXECUTE_CACHE_4_26 59
#define EXECUTE_CACHE_4_24 61
#define EXECUTE_CACHE_4_22 63
#define EXECUTE_CACHE_4_21 65
#define EXECUTE_CACHE_4_19 67
#define EXECUTE_CACHE_4_18 69
#define EXECUTE_CACHE_4_17 71
#define EXECUTE_CACHE_4_13 73
#define EXECUTE_CACHE_4_9 75
#define EXECUTE_CACHE_4_6 77
#define FREE_REFERENCES_LABEL_4_0 46
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd5;
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
      goto stringify_data_traditional_23;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_22;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto lambda_21;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_4_14);
      goto continuation_16;

    case 8:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_4_23);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_4_25);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_4_27);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_4_28);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_4_29);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_4_30);
      goto continuation_4;

    case 17:
      current_block = (Rpc - LABEL_4_32);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_4_35);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_4_36);
      goto continuation_8;

    case 20:
      current_block = (Rpc - LABEL_4_37);
      goto lambda_7;

    case 21:
      current_block = (Rpc - LABEL_4_39);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stringify_data_traditional_26)
DEFLABEL (stringify_data_traditional_23)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_27)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_4_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_4_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_33]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_38]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_40]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_41]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_22]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_4_14);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_21]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_25);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_4_28);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_31]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_30);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_34]));

DEFLABEL (lambda_28)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_4_37);
  (Wrd5.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_40]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_8 9
#define LABEL_5_11 11
#define ENVIRONMENT_LABEL_5_3 24
#define DEBUGGING_LABEL_5_2 23
#define EXECUTE_CACHE_5_13 13
#define EXECUTE_CACHE_5_12 15
#define EXECUTE_CACHE_5_10 17
#define EXECUTE_CACHE_5_9 19
#define EXECUTE_CACHE_5_7 21
#define FREE_REFERENCES_LABEL_5_0 12
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_5_4);
      goto declare_data_object_4;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declare_data_object_7)
DEFLABEL (declare_data_object_4)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_7 5
#define LABEL_6_8 7
#define LABEL_6_9 9
#define LABEL_6_10 11
#define LABEL_6_5 13
#define LABEL_6_19 15
#define LABEL_6_22 17
#define LABEL_6_23 19
#define LABEL_6_24 21
#define LABEL_6_27 23
#define LABEL_6_28 25
#define LABEL_6_26 27
#define LABEL_6_20 29
#define LABEL_6_32 31
#define LABEL_6_33 33
#define LABEL_6_21 35
#define LABEL_6_34 37
#define LABEL_6_35 39
#define LABEL_6_36 41
#define LABEL_6_17 43
#define TAG_6_18 20
#define LABEL_6_15 45
#define TAG_6_16 21
#define LABEL_6_13 47
#define TAG_6_14 22
#define LABEL_6_39 49
#define LABEL_6_11 51
#define TAG_6_12 24
#define LABEL_6_40 53
#define LABEL_6_31 55
#define LABEL_6_37 57
#define LABEL_6_47 59
#define LABEL_6_42 61
#define LABEL_6_44 63
#define LABEL_6_46 65
#define LABEL_6_57 67
#define LABEL_6_49 69
#define LABEL_6_50 71
#define LABEL_6_52 73
#define TAG_6_53 35
#define LABEL_6_54 75
#define LABEL_6_56 77
#define LABEL_6_60 79
#define TAG_6_61 38
#define LABEL_6_62 81
#define LABEL_6_64 83
#define TAG_6_65 40
#define LABEL_6_66 85
#define LABEL_6_68 87
#define LABEL_6_70 89
#define LABEL_6_71 91
#define LABEL_6_72 93
#define LABEL_6_73 95
#define LABEL_6_75 97
#define LABEL_6_74 99
#define LABEL_6_79 101
#define LABEL_6_82 103
#define LABEL_6_83 105
#define LABEL_6_84 107
#define LABEL_6_88 109
#define LABEL_6_89 111
#define LABEL_6_76 113
#define TAG_6_77 55
#define LABEL_6_78 115
#define LABEL_6_97 117
#define LABEL_6_86 119
#define LABEL_6_87 121
#define LABEL_6_80 123
#define LABEL_6_91 125
#define TAG_6_92 61
#define LABEL_6_109 127
#define LABEL_6_93 129
#define LABEL_6_95 131
#define TAG_6_96 64
#define LABEL_6_99 133
#define LABEL_6_100 135
#define LABEL_6_98 137
#define LABEL_6_103 139
#define LABEL_6_101 141
#define LABEL_6_104 143
#define LABEL_6_105 145
#define LABEL_6_106 147
#define LABEL_6_107 149
#define LABEL_6_108 151
#define LABEL_6_111 153
#define LABEL_6_114 155
#define LABEL_6_113 157
#define LABEL_6_117 159
#define TAG_6_118 78
#define LABEL_6_115 161
#define TAG_6_116 79
#define LABEL_6_119 163
#define LABEL_6_137 165
#define LABEL_6_138 167
#define LABEL_6_139 169
#define LABEL_6_140 171
#define LABEL_6_141 173
#define LABEL_6_142 175
#define LABEL_6_121 177
#define LABEL_6_125 179
#define LABEL_6_147 181
#define LABEL_6_123 183
#define LABEL_6_151 185
#define LABEL_6_126 187
#define LABEL_6_127 189
#define LABEL_6_128 191
#define LABEL_6_129 193
#define LABEL_6_132 195
#define LABEL_6_135 197
#define TAG_6_136 97
#define LABEL_6_133 199
#define TAG_6_134 98
#define LABEL_6_143 201
#define TAG_6_144 99
#define LABEL_6_145 203
#define LABEL_6_146 205
#define LABEL_6_167 207
#define LABEL_6_150 209
#define LABEL_6_152 211
#define LABEL_6_154 213
#define LABEL_6_156 215
#define LABEL_6_157 217
#define LABEL_6_158 219
#define LABEL_6_159 221
#define LABEL_6_162 223
#define TAG_6_163 110
#define LABEL_6_164 225
#define LABEL_6_165 227
#define LABEL_6_166 229
#define LABEL_6_170 231
#define LABEL_6_171 233
#define LABEL_6_172 235
#define LABEL_6_173 237
#define LABEL_6_175 239
#define LABEL_6_176 241
#define LABEL_6_177 243
#define LABEL_6_178 245
#define LABEL_6_179 247
#define LABEL_6_182 249
#define LABEL_6_185 251
#define LABEL_6_186 253
#define LABEL_6_192 255
#define LABEL_6_195 257
#define LABEL_6_196 259
#define LABEL_6_197 261
#define LABEL_6_199 263
#define LABEL_6_200 265
#define LABEL_6_202 267
#define LABEL_6_204 269
#define LABEL_6_205 271
#define LABEL_6_206 273
#define LABEL_6_208 275
#define LABEL_6_210 277
#define ENVIRONMENT_LABEL_6_3 429
#define DEBUGGING_LABEL_6_2 428
#define OBJECT_6_32 427
#define OBJECT_6_31 426
#define OBJECT_6_30 425
#define OBJECT_6_29 424
#define OBJECT_6_28 423
#define OBJECT_6_27 422
#define OBJECT_6_26 421
#define OBJECT_6_25 420
#define OBJECT_6_24 419
#define OBJECT_6_23 418
#define OBJECT_6_22 417
#define OBJECT_6_21 416
#define OBJECT_6_20 415
#define OBJECT_6_19 414
#define OBJECT_6_18 413
#define OBJECT_6_17 412
#define OBJECT_6_16 411
#define OBJECT_6_15 410
#define OBJECT_6_14 409
#define OBJECT_6_13 408
#define OBJECT_6_12 407
#define OBJECT_6_11 406
#define OBJECT_6_10 405
#define OBJECT_6_9 404
#define OBJECT_6_8 403
#define OBJECT_6_7 402
#define OBJECT_6_6 401
#define OBJECT_6_5 400
#define OBJECT_6_4 399
#define OBJECT_6_3 398
#define OBJECT_6_2 397
#define OBJECT_6_1 396
#define OBJECT_6_0 395
#define EXECUTE_CACHE_6_211 279
#define EXECUTE_CACHE_6_209 281
#define EXECUTE_CACHE_6_207 283
#define EXECUTE_CACHE_6_203 285
#define EXECUTE_CACHE_6_201 287
#define EXECUTE_CACHE_6_198 289
#define EXECUTE_CACHE_6_194 291
#define EXECUTE_CACHE_6_193 293
#define EXECUTE_CACHE_6_191 295
#define EXECUTE_CACHE_6_190 297
#define EXECUTE_CACHE_6_189 299
#define EXECUTE_CACHE_6_188 301
#define EXECUTE_CACHE_6_187 303
#define EXECUTE_CACHE_6_183 305
#define EXECUTE_CACHE_6_180 307
#define EXECUTE_CACHE_6_174 309
#define EXECUTE_CACHE_6_169 311
#define EXECUTE_CACHE_6_168 313
#define EXECUTE_CACHE_6_161 315
#define EXECUTE_CACHE_6_160 317
#define EXECUTE_CACHE_6_155 319
#define EXECUTE_CACHE_6_153 321
#define EXECUTE_CACHE_6_149 323
#define EXECUTE_CACHE_6_148 325
#define EXECUTE_CACHE_6_131 327
#define EXECUTE_CACHE_6_130 329
#define EXECUTE_CACHE_6_124 331
#define EXECUTE_CACHE_6_120 333
#define EXECUTE_CACHE_6_110 335
#define EXECUTE_CACHE_6_102 337
#define EXECUTE_CACHE_6_94 339
#define EXECUTE_CACHE_6_122 341
#define EXECUTE_CACHE_6_90 343
#define EXECUTE_CACHE_6_85 345
#define EXECUTE_CACHE_6_184 347
#define EXECUTE_CACHE_6_181 349
#define EXECUTE_CACHE_6_112 351
#define EXECUTE_CACHE_6_81 353
#define EXECUTE_CACHE_6_69 355
#define EXECUTE_CACHE_6_67 357
#define EXECUTE_CACHE_6_63 359
#define EXECUTE_CACHE_6_59 361
#define EXECUTE_CACHE_6_58 363
#define EXECUTE_CACHE_6_55 365
#define EXECUTE_CACHE_6_51 367
#define EXECUTE_CACHE_6_48 369
#define EXECUTE_CACHE_6_45 371
#define EXECUTE_CACHE_6_43 373
#define EXECUTE_CACHE_6_41 375
#define EXECUTE_CACHE_6_38 377
#define EXECUTE_CACHE_6_30 379
#define EXECUTE_CACHE_6_29 381
#define EXECUTE_CACHE_6_25 383
#define EXECUTE_CACHE_6_6 385
#define FREE_REFERENCE_6_6 388
#define FREE_REFERENCE_6_5 389
#define FREE_REFERENCE_6_4 390
#define FREE_REFERENCE_6_3 391
#define FREE_REFERENCE_6_2 392
#define FREE_REFERENCE_6_1 393
#define FREE_REFERENCE_6_0 394
#define FREE_REFERENCES_LABEL_6_0 278
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd110;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd52;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd48;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd137;
  machine_word Wrd133;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd115;
  machine_word Wrd116;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd146;
  machine_word Wrd79;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd78;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd97;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd91;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd92;
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
      goto stringify_158;

    case 1:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto label_166;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto label_167;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_6_19);
      goto label_160;

    case 7:
      current_block = (Rpc - LABEL_6_22);
      goto label_161;

    case 8:
      current_block = (Rpc - LABEL_6_23);
      goto label_162;

    case 9:
      current_block = (Rpc - LABEL_6_24);
      goto label_165;

    case 10:
      current_block = (Rpc - LABEL_6_27);
      goto label_163;

    case 11:
      current_block = (Rpc - LABEL_6_28);
      goto label_164;

    case 12:
      current_block = (Rpc - LABEL_6_26);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_6_20);
      goto continuation_20;

    case 14:
      current_block = (Rpc - LABEL_6_32);
      goto label_168;

    case 15:
      current_block = (Rpc - LABEL_6_33);
      goto label_169;

    case 16:
      current_block = (Rpc - LABEL_6_21);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_6_34);
      goto label_170;

    case 18:
      current_block = (Rpc - LABEL_6_35);
      goto label_171;

    case 19:
      current_block = (Rpc - LABEL_6_36);
      goto frob_18;

    case 20:
      current_block = (Rpc - LABEL_6_17);
      goto gen_code_name_114;

    case 21:
      current_block = (Rpc - LABEL_6_15);
      goto gen_data_name_115;

    case 22:
      current_block = (Rpc - LABEL_6_13);
      goto gen_handle_name_116;

    case 23:
      current_block = (Rpc - LABEL_6_39);
      goto continuation_117;

    case 24:
      current_block = (Rpc - LABEL_6_11);
      goto choose_name_123;

    case 25:
      current_block = (Rpc - LABEL_6_40);
      goto label_172;

    case 26:
      current_block = (Rpc - LABEL_6_31);
      goto continuation_22;

    case 27:
      current_block = (Rpc - LABEL_6_37);
      goto continuation_12;

    case 28:
      current_block = (Rpc - LABEL_6_47);
      goto label_173;

    case 29:
      current_block = (Rpc - LABEL_6_42);
      goto continuation_121;

    case 30:
      current_block = (Rpc - LABEL_6_44);
      goto continuation_23;

    case 31:
      current_block = (Rpc - LABEL_6_46);
      goto continuation_17;

    case 32:
      current_block = (Rpc - LABEL_6_57);
      goto label_174;

    case 33:
      current_block = (Rpc - LABEL_6_49);
      goto continuation_119;

    case 34:
      current_block = (Rpc - LABEL_6_50);
      goto continuation_118;

    case 35:
      current_block = (Rpc - LABEL_6_52);
      goto lambda_199;

    case 36:
      current_block = (Rpc - LABEL_6_54);
      goto continuation_111;

    case 37:
      current_block = (Rpc - LABEL_6_56);
      goto continuation_15;

    case 38:
      current_block = (Rpc - LABEL_6_60);
      goto lambda_200;

    case 39:
      current_block = (Rpc - LABEL_6_62);
      goto continuation_109;

    case 40:
      current_block = (Rpc - LABEL_6_64);
      goto lambda_201;

    case 41:
      current_block = (Rpc - LABEL_6_66);
      goto continuation_107;

    case 42:
      current_block = (Rpc - LABEL_6_68);
      goto continuation_24;

    case 43:
      current_block = (Rpc - LABEL_6_70);
      goto continuation_25;

    case 44:
      current_block = (Rpc - LABEL_6_71);
      goto continuation_26;

    case 45:
      current_block = (Rpc - LABEL_6_72);
      goto continuation_27;

    case 46:
      current_block = (Rpc - LABEL_6_73);
      goto continuation_28;

    case 47:
      current_block = (Rpc - LABEL_6_75);
      goto continuation_135;

    case 48:
      current_block = (Rpc - LABEL_6_74);
      goto continuation_29;

    case 49:
      current_block = (Rpc - LABEL_6_79);
      goto label_175;

    case 50:
      current_block = (Rpc - LABEL_6_82);
      goto label_176;

    case 51:
      current_block = (Rpc - LABEL_6_83);
      goto label_180;

    case 52:
      current_block = (Rpc - LABEL_6_84);
      goto label_177;

    case 53:
      current_block = (Rpc - LABEL_6_88);
      goto label_178;

    case 54:
      current_block = (Rpc - LABEL_6_89);
      goto label_179;

    case 55:
      current_block = (Rpc - LABEL_6_76);
      goto lambda_202;

    case 56:
      current_block = (Rpc - LABEL_6_78);
      goto lambda_130;

    case 57:
      current_block = (Rpc - LABEL_6_97);
      goto label_181;

    case 58:
      current_block = (Rpc - LABEL_6_86);
      goto continuation_139;

    case 59:
      current_block = (Rpc - LABEL_6_87);
      goto continuation_138;

    case 60:
      current_block = (Rpc - LABEL_6_80);
      goto continuation_143;

    case 61:
      current_block = (Rpc - LABEL_6_91);
      goto lambda_203;

    case 62:
      current_block = (Rpc - LABEL_6_109);
      goto label_182;

    case 63:
      current_block = (Rpc - LABEL_6_93);
      goto continuation_97;

    case 64:
      current_block = (Rpc - LABEL_6_95);
      goto lambda_205;

    case 65:
      current_block = (Rpc - LABEL_6_99);
      goto continuation_153;

    case 66:
      current_block = (Rpc - LABEL_6_100);
      goto continuation_152;

    case 67:
      current_block = (Rpc - LABEL_6_98);
      goto continuation_148;

    case 68:
      current_block = (Rpc - LABEL_6_103);
      goto continuation_142;

    case 69:
      current_block = (Rpc - LABEL_6_101);
      goto continuation_136;

    case 70:
      current_block = (Rpc - LABEL_6_104);
      goto continuation_93;

    case 71:
      current_block = (Rpc - LABEL_6_105);
      goto continuation_83;

    case 72:
      current_block = (Rpc - LABEL_6_106);
      goto continuation_82;

    case 73:
      current_block = (Rpc - LABEL_6_107);
      goto continuation_81;

    case 74:
      current_block = (Rpc - LABEL_6_108);
      goto continuation_80;

    case 75:
      current_block = (Rpc - LABEL_6_111);
      goto continuation_124;

    case 76:
      current_block = (Rpc - LABEL_6_114);
      goto continuation_147;

    case 77:
      current_block = (Rpc - LABEL_6_113);
      goto continuation_151;

    case 78:
      current_block = (Rpc - LABEL_6_117);
      goto lambda_207;

    case 79:
      current_block = (Rpc - LABEL_6_115);
      goto lambda_206;

    case 80:
      current_block = (Rpc - LABEL_6_119);
      goto continuation_36;

    case 81:
      current_block = (Rpc - LABEL_6_137);
      goto label_183;

    case 82:
      current_block = (Rpc - LABEL_6_138);
      goto label_184;

    case 83:
      current_block = (Rpc - LABEL_6_139);
      goto label_185;

    case 84:
      current_block = (Rpc - LABEL_6_140);
      goto label_186;

    case 85:
      current_block = (Rpc - LABEL_6_141);
      goto label_187;

    case 86:
      current_block = (Rpc - LABEL_6_142);
      goto label_188;

    case 87:
      current_block = (Rpc - LABEL_6_121);
      goto continuation_43;

    case 88:
      current_block = (Rpc - LABEL_6_125);
      goto continuation_89;

    case 89:
      current_block = (Rpc - LABEL_6_147);
      goto label_189;

    case 90:
      current_block = (Rpc - LABEL_6_123);
      goto continuation_84;

    case 91:
      current_block = (Rpc - LABEL_6_151);
      goto label_190;

    case 92:
      current_block = (Rpc - LABEL_6_126);
      goto continuation_79;

    case 93:
      current_block = (Rpc - LABEL_6_127);
      goto continuation_78;

    case 94:
      current_block = (Rpc - LABEL_6_128);
      goto continuation_77;

    case 95:
      current_block = (Rpc - LABEL_6_129);
      goto continuation_76;

    case 96:
      current_block = (Rpc - LABEL_6_132);
      goto continuation_125;

    case 97:
      current_block = (Rpc - LABEL_6_135);
      goto lambda_209;

    case 98:
      current_block = (Rpc - LABEL_6_133);
      goto lambda_208;

    case 99:
      current_block = (Rpc - LABEL_6_143);
      goto lambda_210;

    case 100:
      current_block = (Rpc - LABEL_6_145);
      goto continuation_42;

    case 101:
      current_block = (Rpc - LABEL_6_146);
      goto continuation_88;

    case 102:
      current_block = (Rpc - LABEL_6_167);
      goto label_191;

    case 103:
      current_block = (Rpc - LABEL_6_150);
      goto continuation_85;

    case 104:
      current_block = (Rpc - LABEL_6_152);
      goto continuation_87;

    case 105:
      current_block = (Rpc - LABEL_6_154);
      goto continuation_66;

    case 106:
      current_block = (Rpc - LABEL_6_156);
      goto continuation_74;

    case 107:
      current_block = (Rpc - LABEL_6_157);
      goto continuation_73;

    case 108:
      current_block = (Rpc - LABEL_6_158);
      goto lambda_72;

    case 109:
      current_block = (Rpc - LABEL_6_159);
      goto continuation_75;

    case 110:
      current_block = (Rpc - LABEL_6_162);
      goto lambda_126;

    case 111:
      current_block = (Rpc - LABEL_6_164);
      goto continuation_39;

    case 112:
      current_block = (Rpc - LABEL_6_165);
      goto continuation_41;

    case 113:
      current_block = (Rpc - LABEL_6_166);
      goto continuation_91;

    case 114:
      current_block = (Rpc - LABEL_6_170);
      goto continuation_86;

    case 115:
      current_block = (Rpc - LABEL_6_171);
      goto continuation_65;

    case 116:
      current_block = (Rpc - LABEL_6_172);
      goto continuation_64;

    case 117:
      current_block = (Rpc - LABEL_6_173);
      goto continuation_63;

    case 118:
      current_block = (Rpc - LABEL_6_175);
      goto continuation_70;

    case 119:
      current_block = (Rpc - LABEL_6_176);
      goto continuation_69;

    case 120:
      current_block = (Rpc - LABEL_6_177);
      goto continuation_68;

    case 121:
      current_block = (Rpc - LABEL_6_178);
      goto continuation_67;

    case 122:
      current_block = (Rpc - LABEL_6_179);
      goto continuation_71;

    case 123:
      current_block = (Rpc - LABEL_6_182);
      goto continuation_40;

    case 124:
      current_block = (Rpc - LABEL_6_185);
      goto continuation_61;

    case 125:
      current_block = (Rpc - LABEL_6_186);
      goto continuation_62;

    case 126:
      current_block = (Rpc - LABEL_6_192);
      goto continuation_60;

    case 127:
      current_block = (Rpc - LABEL_6_195);
      goto continuation_59;

    case 128:
      current_block = (Rpc - LABEL_6_196);
      goto continuation_58;

    case 129:
      current_block = (Rpc - LABEL_6_197);
      goto continuation_57;

    case 130:
      current_block = (Rpc - LABEL_6_199);
      goto continuation_55;

    case 131:
      current_block = (Rpc - LABEL_6_200);
      goto continuation_56;

    case 132:
      current_block = (Rpc - LABEL_6_202);
      goto continuation_54;

    case 133:
      current_block = (Rpc - LABEL_6_204);
      goto continuation_53;

    case 134:
      current_block = (Rpc - LABEL_6_205);
      goto continuation_52;

    case 135:
      current_block = (Rpc - LABEL_6_206);
      goto continuation_51;

    case 136:
      current_block = (Rpc - LABEL_6_208);
      goto continuation_50;

    case 137:
      current_block = (Rpc - LABEL_6_210);
      goto continuation_45;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stringify_193)
DEFLABEL (stringify_158)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd88.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_11])));
  Rhp += 3;
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd88.pObj)));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd86.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_13])));
  Rhp += 1;
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd86.pObj)));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd84.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_15])));
  Rhp += 1;
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd84.pObj)));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd82.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_17])));
  Rhp += 1;
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd82.pObj)));
  (* (--Rsp)) = (Wrd83.Obj);
  ((Wrd82.pObj) [2]) = (Wrd89.Obj);
  ((Wrd84.pObj) [2]) = (Wrd89.Obj);
  ((Wrd86.pObj) [2]) = (Wrd89.Obj);
  Wrd80 = Wrd88;
  (Wrd81.Obj) = (Rsp [8]);
  ((Wrd80.pObj) [2]) = (Wrd81.Obj);
  (Wrd78.Obj) = (Rsp [5]);
  ((Wrd80.pObj) [3]) = (Wrd78.Obj);
  ((Wrd80.pObj) [4]) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_240;
  Wrd5 = Wrd9;

DEFLABEL (label_239)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_222;

DEFLABEL (label_221)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd63.Obj);
  goto frob_18;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_6_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_220;
  Wrd6 = Wrd10;

DEFLABEL (label_219)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_218;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_218;
  (Wrd13.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_217)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_25]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_6_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_216;
  Wrd10 = Wrd14;

DEFLABEL (label_215)
  Wrd9 = Wrd10;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_214;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_214;
  (Wrd17.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_213)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_25]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_6_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_45]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_6_44);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x707, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_53);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_52])));
  Rhp += 6;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [8]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [5]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  ((Wrd18.pObj) [6]) = (Wrd11.Obj);
  ((Wrd18.pObj) [7]) = Rvl;
  (Rsp [9]) = (Wrd6.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_54]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_6_13]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_55]));

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_6_54);
  (Rsp [8]) = Rvl;
  Rsp = (& (Rsp [8]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_214)
  (Wrd25.Obj) = (current_block [OBJECT_6_4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_33]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 2);

DEFLABEL (label_169)
  (* (--Rsp)) = Rvl;
  goto label_213;

DEFLABEL (label_216)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_32])), (Wrd11.pObj));

DEFLABEL (label_168)
  (Wrd10.Obj) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  (Wrd21.Obj) = (current_block [OBJECT_6_6]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_35]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 2);

DEFLABEL (label_171)
  (* (--Rsp)) = Rvl;
  goto label_217;

DEFLABEL (label_220)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_34])), (Wrd7.pObj));

DEFLABEL (label_170)
  (Wrd6.Obj) = Rvl;
  goto label_219;

DEFLABEL (label_222)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_238;
  Wrd16 = Wrd20;

DEFLABEL (label_237)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_236;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_235)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd29.uLng) == 10)
    goto label_232;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_26]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_231;
  Wrd37 = Wrd41;

DEFLABEL (label_230)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_229;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_228)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_29]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_30]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  (Wrd92.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd95.Obj) = ((Wrd92.pObj) [0]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd96.uLng) == 50)
    goto label_227;
  Wrd91 = Wrd95;

DEFLABEL (label_226)
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_225;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd97.Obj) = ((Wrd98.pObj) [0]);

DEFLABEL (label_224)
  (Wrd104.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd97.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  (Wrd106.pObj) = (& (Rhp [-2]));
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd106.pObj)));
  (* (--Rsp)) = (Wrd107.Obj);

DEFLABEL (label_223)
  (Wrd56.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_10);
  goto label_221;

DEFLABEL (label_225)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_167)
  (Wrd97.Obj) = Rvl;
  goto label_224;

DEFLABEL (label_227)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_8])), (Wrd92.pObj));

DEFLABEL (label_166)
  (Wrd91.Obj) = Rvl;
  goto label_226;

DEFLABEL (label_229)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_164)
  (* (--Rsp)) = Rvl;
  goto label_228;

DEFLABEL (label_231)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_27])), (Wrd38.pObj));

DEFLABEL (label_163)
  (Wrd37.Obj) = Rvl;
  goto label_230;

DEFLABEL (label_232)
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_234;
  Wrd50 = Wrd54;

DEFLABEL (label_233)
  (* (--Rsp)) = (Wrd50.Obj);
  goto label_223;

DEFLABEL (label_234)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_24])), (Wrd51.pObj));

DEFLABEL (label_165)
  (Wrd50.Obj) = Rvl;
  goto label_233;

DEFLABEL (label_236)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_162)
  (Wrd22.Obj) = Rvl;
  goto label_235;

DEFLABEL (label_238)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_22])), (Wrd17.pObj));

DEFLABEL (label_161)
  (Wrd16.Obj) = Rvl;
  goto label_237;

DEFLABEL (label_240)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_19])), (Wrd6.pObj));

DEFLABEL (label_160)
  (Wrd5.Obj) = Rvl;
  goto label_239;

DEFLABEL (frob_198)
DEFLABEL (frob_18)
  INTERRUPT_CHECK (26, LABEL_6_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_38]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6_37);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_241;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_48]));

DEFLABEL (label_241)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_242;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_242)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_46]))));
  (* (--Rsp)) = (Wrd13.Obj);
  if (! ((Wrd8.uLng) == 1))
    goto label_246;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_245)
  goto frob_18;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_6_46);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_244;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_243)
  goto frob_18;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_6_56);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_244)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_57]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_174)
  (* (--Rsp)) = Rvl;
  goto label_243;

DEFLABEL (label_246)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_47]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_173)
  (* (--Rsp)) = Rvl;
  goto label_245;

DEFLABEL (gen_code_name_197)
DEFLABEL (gen_code_name_114)
  INTERRUPT_CHECK (26, LABEL_6_17);
  (Wrd5.Obj) = (current_block [OBJECT_6_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6_8]);
  (Rsp [3]) = (Wrd10.Obj);
  goto choose_name_123;

DEFLABEL (gen_data_name_196)
DEFLABEL (gen_data_name_115)
  INTERRUPT_CHECK (26, LABEL_6_15);
  (Wrd5.Obj) = (current_block [OBJECT_6_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6_10]);
  (Rsp [3]) = (Wrd10.Obj);
  goto choose_name_123;

DEFLABEL (gen_handle_name_195)
DEFLABEL (gen_handle_name_116)
  INTERRUPT_CHECK (26, LABEL_6_13);
  (Wrd5.Obj) = (current_block [OBJECT_6_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_11]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6_8]);
  (Rsp [3]) = (Wrd10.Obj);
  goto choose_name_123;

DEFLABEL (choose_name_194)
DEFLABEL (choose_name_123)
  INTERRUPT_CHECK (26, LABEL_6_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_256;
  Wrd8 = Wrd12;

DEFLABEL (label_255)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_252;

DEFLABEL (label_251)
  (Wrd16.Obj) = (current_block [OBJECT_6_8]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_250)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_42]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  if (! ((Wrd22.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_248;
  (Wrd35.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = ((Wrd21.pObj) [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_43]));

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_6_42);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_49]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_50]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_51]));

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_6_50);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_247;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_59]));

DEFLABEL (label_247)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_58]));

DEFLABEL (label_248)
  (Wrd26.Obj) = ((Wrd21.pObj) [4]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_249;
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_41]));

DEFLABEL (label_249)
  (Wrd32.Obj) = ((Wrd21.pObj) [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_6_12]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_43]));

DEFLABEL (label_252)
  (Wrd40.Obj) = (Rsp [2]);
  if (! ((Wrd40.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_254;

DEFLABEL (label_253)
  (Wrd46.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (current_block [OBJECT_6_12]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_41]));

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_6_39);
  (* (--Rsp)) = Rvl;
  goto label_250;

DEFLABEL (label_254)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [4]);
  if ((Wrd44.Obj) == ((SCHEME_OBJECT) 0))
    goto label_253;
  goto label_251;

DEFLABEL (label_256)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_40])), (Wrd9.pObj));

DEFLABEL (label_172)
  (Wrd8.Obj) = Rvl;
  goto label_255;

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_6_49);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_41]));

DEFLABEL (lambda_199)
  CLOSURE_HEADER (LABEL_6_52);

DEFLABEL (lambda_110)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 14));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_61);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_60])));
  Rhp += 11;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd38 = Wrd7;
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [2]);
  ((Wrd38.pObj) [2]) = (Wrd41.Obj);
  (Wrd37.Obj) = ((Wrd40.pObj) [3]);
  ((Wrd38.pObj) [3]) = (Wrd37.Obj);
  (Wrd33.Obj) = ((Wrd40.pObj) [4]);
  ((Wrd38.pObj) [4]) = (Wrd33.Obj);
  (Wrd29.Obj) = ((Wrd40.pObj) [5]);
  ((Wrd38.pObj) [5]) = (Wrd29.Obj);
  (Wrd25.Obj) = ((Wrd40.pObj) [6]);
  ((Wrd38.pObj) [6]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd40.pObj) [7]);
  ((Wrd38.pObj) [7]) = (Wrd21.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  ((Wrd38.pObj) [8]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd38.pObj) [9]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd38.pObj) [10]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd38.pObj) [11]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd38.pObj) [12]) = (Wrd9.Obj);
  (Rsp [6]) = (Wrd6.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_62]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_63]));

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_6_62);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_200)
  CLOSURE_HEADER (LABEL_6_60);

DEFLABEL (lambda_108)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 17));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x909, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_65);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_64])));
  Rhp += 14;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd54 = Wrd7;
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [2]);
  ((Wrd54.pObj) [2]) = (Wrd57.Obj);
  (Wrd53.Obj) = ((Wrd56.pObj) [3]);
  ((Wrd54.pObj) [3]) = (Wrd53.Obj);
  (Wrd49.Obj) = ((Wrd56.pObj) [4]);
  ((Wrd54.pObj) [4]) = (Wrd49.Obj);
  (Wrd45.Obj) = ((Wrd56.pObj) [5]);
  ((Wrd54.pObj) [5]) = (Wrd45.Obj);
  (Wrd41.Obj) = ((Wrd56.pObj) [6]);
  ((Wrd54.pObj) [6]) = (Wrd41.Obj);
  (Wrd37.Obj) = ((Wrd56.pObj) [7]);
  ((Wrd54.pObj) [7]) = (Wrd37.Obj);
  (Wrd33.Obj) = ((Wrd56.pObj) [8]);
  ((Wrd54.pObj) [8]) = (Wrd33.Obj);
  (Wrd29.Obj) = ((Wrd56.pObj) [9]);
  ((Wrd54.pObj) [9]) = (Wrd29.Obj);
  (Wrd25.Obj) = ((Wrd56.pObj) [10]);
  ((Wrd54.pObj) [10]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd56.pObj) [11]);
  ((Wrd54.pObj) [11]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd56.pObj) [12]);
  ((Wrd54.pObj) [12]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd54.pObj) [13]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd54.pObj) [14]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd54.pObj) [15]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_66]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_67]));

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_6_66);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_201)
  CLOSURE_HEADER (LABEL_6_64);

DEFLABEL (lambda_106)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_69]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_6_68);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto gen_handle_name_116;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_6_70);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto gen_code_name_114;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_6_71);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto gen_data_name_115;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_6_72);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_41]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_6_73);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_41]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_6_74);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 27));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_77);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_76])));
  Rhp += 24;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd74 = Wrd7;
  (Wrd75.Obj) = (Rsp [6]);
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [2]);
  ((Wrd74.pObj) [2]) = (Wrd77.Obj);
  (Wrd73.Obj) = ((Wrd76.pObj) [6]);
  ((Wrd74.pObj) [3]) = (Wrd73.Obj);
  (Wrd69.Obj) = ((Wrd76.pObj) [7]);
  ((Wrd74.pObj) [4]) = (Wrd69.Obj);
  (Wrd65.Obj) = ((Wrd76.pObj) [8]);
  ((Wrd74.pObj) [5]) = (Wrd65.Obj);
  (Wrd61.Obj) = ((Wrd76.pObj) [9]);
  ((Wrd74.pObj) [6]) = (Wrd61.Obj);
  (Wrd57.Obj) = ((Wrd76.pObj) [10]);
  ((Wrd74.pObj) [7]) = (Wrd57.Obj);
  (Wrd53.Obj) = ((Wrd76.pObj) [11]);
  ((Wrd74.pObj) [8]) = (Wrd53.Obj);
  (Wrd49.Obj) = ((Wrd76.pObj) [12]);
  ((Wrd74.pObj) [9]) = (Wrd49.Obj);
  (Wrd45.Obj) = ((Wrd76.pObj) [13]);
  ((Wrd74.pObj) [10]) = (Wrd45.Obj);
  (Wrd41.Obj) = ((Wrd76.pObj) [14]);
  ((Wrd74.pObj) [11]) = (Wrd41.Obj);
  (Wrd37.Obj) = ((Wrd76.pObj) [15]);
  ((Wrd74.pObj) [12]) = (Wrd37.Obj);
  (Wrd33.Obj) = (Rsp [14]);
  ((Wrd74.pObj) [13]) = (Wrd33.Obj);
  (Wrd31.Obj) = (Rsp [13]);
  ((Wrd74.pObj) [14]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [12]);
  ((Wrd74.pObj) [15]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [11]);
  ((Wrd74.pObj) [16]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [10]);
  ((Wrd74.pObj) [17]) = (Wrd25.Obj);
  (Wrd23.Obj) = (Rsp [9]);
  ((Wrd74.pObj) [18]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [8]);
  ((Wrd74.pObj) [19]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [7]);
  ((Wrd74.pObj) [20]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd74.pObj) [21]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd74.pObj) [22]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd74.pObj) [23]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd74.pObj) [24]) = (Wrd11.Obj);
  ((Wrd74.pObj) [25]) = Rvl;
  (Rsp [14]) = (Wrd6.Obj);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_78]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd82.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_3]));
  (Wrd85.Obj) = ((Wrd82.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd86.uLng) == 50)
    goto label_271;
  Wrd81 = Wrd85;

DEFLABEL (label_270)
  if (! ((Wrd81.Obj) == (current_block [OBJECT_6_15])))
    goto label_258;
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_80]))));
  (* (--Rsp)) = (Wrd146.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_81]));

DEFLABEL (continuation_143)
  INTERRUPT_CHECK (27, LABEL_6_80);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_81]));

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_6_103);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_116);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_115])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  ((Wrd19.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_257)
  goto pop_return;

DEFLABEL (label_258)
  (Wrd90.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_3]));
  (Wrd93.Obj) = ((Wrd90.pObj) [0]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if ((Wrd94.uLng) == 50)
    goto label_269;
  Wrd89 = Wrd93;

DEFLABEL (label_268)
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd95.uLng) == 26))
    goto label_267;
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  if ((Wrd96.Lng) < 5L)
    goto label_263;

DEFLABEL (label_266)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_75]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd103.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_3]));
  (Wrd106.Obj) = ((Wrd103.pObj) [0]);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if ((Wrd107.uLng) == 50)
    goto label_265;
  Wrd102 = Wrd106;

DEFLABEL (label_264)
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd108.Obj) = (current_block [OBJECT_6_17]);
  (* (--Rsp)) = (Wrd108.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_85]));

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_6_75);

DEFLABEL (label_263)
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_86]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_87]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd117.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_3]));
  (Wrd120.Obj) = ((Wrd117.pObj) [0]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if ((Wrd121.uLng) == 50)
    goto label_262;
  Wrd116 = Wrd120;

DEFLABEL (label_261)
  Wrd115 = Wrd116;
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd127.uLng) == 26))
    goto label_260;
  (Wrd128.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  (Wrd129.Obj) = (current_block [OBJECT_6_18]);
  (Wrd130.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd131.Obj) = ((Wrd130.pObj) [0]);
  (Wrd132.Lng) = (FIXNUM_TO_LONG (Wrd131.Obj));
  if (! (((unsigned long) (Wrd128.Lng)) < ((unsigned long) (Wrd132.Lng))))
    goto label_260;
  (Wrd122.uLng) = (OBJECT_DATUM (Wrd116.Obj));
  (Wrd125.pObj) = (& ((Wrd130.pObj) [(Wrd122.Lng)]));
  (Wrd126.Obj) = ((Wrd125.pObj) [1]);
  (* (--Rsp)) = (Wrd126.Obj);

DEFLABEL (label_259)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_90]));

DEFLABEL (continuation_138)
  INTERRUPT_CHECK (27, LABEL_6_87);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_102]));

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_6_86);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_90]));

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_6_101);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_118);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_117])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_257;

DEFLABEL (label_260)
  (Wrd133.Obj) = (current_block [OBJECT_6_18]);
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_89]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 2);

DEFLABEL (label_179)
  (* (--Rsp)) = Rvl;
  goto label_259;

DEFLABEL (label_262)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_88])), (Wrd117.pObj));

DEFLABEL (label_178)
  (Wrd116.Obj) = Rvl;
  goto label_261;

DEFLABEL (label_265)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_84])), (Wrd103.pObj));

DEFLABEL (label_177)
  (Wrd102.Obj) = Rvl;
  goto label_264;

DEFLABEL (label_267)
  (Wrd139.Obj) = (current_block [OBJECT_6_16]);
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_83]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_180)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_266;
  goto label_263;

DEFLABEL (label_269)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_82])), (Wrd90.pObj));

DEFLABEL (label_176)
  (Wrd89.Obj) = Rvl;
  goto label_268;

DEFLABEL (label_271)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_79])), (Wrd82.pObj));

DEFLABEL (label_175)
  (Wrd81.Obj) = Rvl;
  goto label_270;

DEFLABEL (lambda_202)
  CLOSURE_HEADER (LABEL_6_76);

DEFLABEL (lambda_98)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 23));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_92);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_91])));
  Rhp += 20;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd80 = Wrd7;
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [2]);
  ((Wrd80.pObj) [2]) = (Wrd83.Obj);
  (Wrd79.Obj) = ((Wrd82.pObj) [3]);
  ((Wrd80.pObj) [3]) = (Wrd79.Obj);
  (Wrd75.Obj) = ((Wrd82.pObj) [5]);
  ((Wrd80.pObj) [4]) = (Wrd75.Obj);
  (Wrd71.Obj) = ((Wrd82.pObj) [7]);
  ((Wrd80.pObj) [5]) = (Wrd71.Obj);
  (Wrd67.Obj) = ((Wrd82.pObj) [8]);
  ((Wrd80.pObj) [6]) = (Wrd67.Obj);
  (Wrd63.Obj) = ((Wrd82.pObj) [9]);
  ((Wrd80.pObj) [7]) = (Wrd63.Obj);
  (Wrd59.Obj) = ((Wrd82.pObj) [10]);
  ((Wrd80.pObj) [8]) = (Wrd59.Obj);
  (Wrd55.Obj) = ((Wrd82.pObj) [12]);
  ((Wrd80.pObj) [9]) = (Wrd55.Obj);
  (Wrd51.Obj) = ((Wrd82.pObj) [15]);
  ((Wrd80.pObj) [10]) = (Wrd51.Obj);
  (Wrd47.Obj) = ((Wrd82.pObj) [17]);
  ((Wrd80.pObj) [11]) = (Wrd47.Obj);
  (Wrd43.Obj) = ((Wrd82.pObj) [18]);
  ((Wrd80.pObj) [12]) = (Wrd43.Obj);
  (Wrd39.Obj) = ((Wrd82.pObj) [19]);
  ((Wrd80.pObj) [13]) = (Wrd39.Obj);
  (Wrd35.Obj) = ((Wrd82.pObj) [20]);
  ((Wrd80.pObj) [14]) = (Wrd35.Obj);
  (Wrd31.Obj) = ((Wrd82.pObj) [21]);
  ((Wrd80.pObj) [15]) = (Wrd31.Obj);
  (Wrd27.Obj) = ((Wrd82.pObj) [22]);
  ((Wrd80.pObj) [16]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd82.pObj) [23]);
  ((Wrd80.pObj) [17]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd82.pObj) [24]);
  ((Wrd80.pObj) [18]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd82.pObj) [25]);
  ((Wrd80.pObj) [19]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd80.pObj) [20]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd80.pObj) [21]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_93]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd89.Obj) = ((Wrd82.pObj) [13]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd92.Obj) = ((Wrd82.pObj) [11]);
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd95.Obj) = ((Wrd82.pObj) [6]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd98.Obj) = ((Wrd82.pObj) [16]);
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd101.Obj) = ((Wrd82.pObj) [14]);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd107.Obj) = ((Wrd82.pObj) [4]);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_94]));

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_6_93);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_204)
DEFLABEL (lambda_130)
  INTERRUPT_CHECK (26, LABEL_6_78);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_96);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_95])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_275;
  Wrd12 = Wrd16;

DEFLABEL (label_274)
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_273;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_99]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_100]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_6_19]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_90]));

DEFLABEL (continuation_152)
  INTERRUPT_CHECK (27, LABEL_6_100);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_102]));

DEFLABEL (continuation_153)
  INTERRUPT_CHECK (27, LABEL_6_99);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_90]));

DEFLABEL (continuation_151)
  INTERRUPT_CHECK (27, LABEL_6_113);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_136);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_135])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  Wrd12 = Wrd6;

DEFLABEL (label_272)
  Rsp = (& (Rsp [2]));
  (Rsp [0]) = (Wrd12.Obj);
  goto pop_return;

DEFLABEL (label_273)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_98]))));
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_81]));

DEFLABEL (continuation_148)
  INTERRUPT_CHECK (27, LABEL_6_98);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_81]));

DEFLABEL (continuation_147)
  INTERRUPT_CHECK (27, LABEL_6_114);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_134);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_133])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  (Wrd19.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  ((Wrd18.pObj) [3]) = Rvl;
  Wrd12 = Wrd14;
  goto label_272;

DEFLABEL (label_275)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_97])), (Wrd13.pObj));

DEFLABEL (label_181)
  (Wrd12.Obj) = Rvl;
  goto label_274;

DEFLABEL (lambda_203)
  CLOSURE_HEADER (LABEL_6_91);

DEFLABEL (lambda_96)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [16]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_104]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_105]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_106]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd6.pObj) [20]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_107]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_108]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_5]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_290;
  Wrd29 = Wrd33;

DEFLABEL (label_289)
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_110]));

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_6_108);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_131]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_6_107);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_126]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_127]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_128]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_129]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_130]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_6_129);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_161]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_6_128);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_159]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_160]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_6_159);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_180]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_6_127);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_156]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_157]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [10]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_158]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_110]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_6_157);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_131]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_6_156);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_175]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_176]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_177]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_178]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_130]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_6_178);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_191]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_6_177);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_190]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_6_176);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_189]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_6_175);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_188]));

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_6_126);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_154]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_155]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_6_154);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_171]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_172]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_173]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_174]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_6_173);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_187]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_6_172);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_186]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_130]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_6_186);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_194]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_6_171);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_185]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_155]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_6_185);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_192]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_193]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_6_192);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_195]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_196]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_197]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_198]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_6_197);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_187]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_6_196);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_200]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_201]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_6_200);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_194]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_6_195);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_199]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_122]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_6_199);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [13]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [21]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_202]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_203]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_6_202);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_204]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_205]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_201]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_6_205);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6_29]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_207]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_6_204);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_206]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_160]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_6_206);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_208]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_209]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_6_208);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_210]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_130]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_6_210);
  (Wrd9.Obj) = (current_block [OBJECT_6_29]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_6_31]);
  (Wrd14.Obj) = (current_block [OBJECT_6_25]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_6_32]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [19]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [16]);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd28.Obj) = ((Wrd23.pObj) [3]);
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_277;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_276;

DEFLABEL (label_277)
  (Wrd31.Obj) = (current_block [OBJECT_6_11]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_276)
DEFLABEL (label_288)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_211]));

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_6_106);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_284;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_125]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_122]));

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_6_125);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_146]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_283;
  Wrd8 = Wrd12;

DEFLABEL (label_282)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_281;
  (Wrd15.Obj) = (Rsp [6]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [17]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd16.pObj) [16]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd16.pObj) [18]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = ((Wrd16.pObj) [7]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = ((Wrd16.pObj) [15]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_149]));

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_6_146);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_166]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [7]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_280;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd28.Lng) > 0)
    goto label_279;

DEFLABEL (label_278)
  (Wrd19.Obj) = (Rsp [7]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [15]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_168]));

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_6_166);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_184]));

DEFLABEL (label_279)
  (Wrd22.Obj) = (Rsp [7]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [15]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_169]));

DEFLABEL (label_280)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_167]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_191)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_278;
  goto label_279;

DEFLABEL (label_281)
  (Wrd33.Obj) = (Rsp [6]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [12]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = ((Wrd34.pObj) [17]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = ((Wrd34.pObj) [19]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = ((Wrd34.pObj) [13]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.Obj) = ((Wrd34.pObj) [16]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.Obj) = ((Wrd34.pObj) [18]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = ((Wrd34.pObj) [7]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd58.Obj) = ((Wrd34.pObj) [15]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_148]));

DEFLABEL (label_283)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_147])), (Wrd9.pObj));

DEFLABEL (label_189)
  (Wrd8.Obj) = Rvl;
  goto label_282;

DEFLABEL (label_284)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_123]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_124]));

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_6_123);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_150]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_287;
  Wrd8 = Wrd12;

DEFLABEL (label_286)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_285;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_81]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_6_150);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_112]));

DEFLABEL (label_285)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_152]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_153]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_6_152);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_170]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_122]));

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_6_170);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_112]));

DEFLABEL (label_287)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_151])), (Wrd9.pObj));

DEFLABEL (label_190)
  (Wrd8.Obj) = Rvl;
  goto label_286;

DEFLABEL (label_290)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_109])), (Wrd30.pObj));

DEFLABEL (label_182)
  (Wrd29.Obj) = Rvl;
  goto label_289;

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_6_105);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_122]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_6_121);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_145]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_131]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_6_145);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [8]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_164]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd7.pObj) [3]);
  if (! ((Wrd14.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_303;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_81]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_6_164);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_181]));

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_6_104);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Rsp [6]) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd7.pObj) [7]);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_119]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd7.pObj) [8]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_120]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_6_119);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [14]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_302;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd20.Lng) - 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_302;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_301)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_300;
  Wrd25 = Wrd29;

DEFLABEL (label_299)
  Wrd24 = Wrd25;
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_298;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd37.Lng))))
    goto label_298;
  (Wrd31.Obj) = ((Wrd35.pObj) [4]);

DEFLABEL (label_297)
  (Wrd44.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd48.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd58.Obj) = (Rsp [3]);
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [14]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_296;
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  (Wrd62.Lng) = ((Wrd66.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd62.Lng)))
    goto label_296;
  (Wrd67.Obj) = (LONG_TO_FIXNUM (Wrd62.Lng));
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_295)
  (Wrd70.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd73.Obj) = ((Wrd70.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 50)
    goto label_294;
  Wrd69 = Wrd73;

DEFLABEL (label_293)
  Wrd68 = Wrd69;
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd82.uLng) == 10))
    goto label_292;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd81.Lng))))
    goto label_292;
  (Wrd75.Obj) = ((Wrd79.pObj) [1]);

DEFLABEL (label_291)
  (Wrd88.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd88.Obj);
  (Wrd91.pObj) = (& (Rhp [-2]));
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd91.pObj)));
  (Wrd92.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd95.pObj) = (& (Rhp [-2]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd95.pObj)));
  (Rsp [4]) = (Wrd93.Obj);
  (Wrd96.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd96.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd99.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_144);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_143])));
  Rhp += 6;
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd99.pObj)));
  Wrd110 = Wrd99;
  (Wrd111.Obj) = (Rsp [5]);
  ((Wrd110.pObj) [2]) = (Wrd111.Obj);
  (Wrd109.Obj) = (Rsp [4]);
  ((Wrd110.pObj) [3]) = (Wrd109.Obj);
  ((Wrd110.pObj) [4]) = (Wrd93.Obj);
  (Wrd105.Obj) = (Rsp [2]);
  ((Wrd110.pObj) [5]) = (Wrd105.Obj);
  ((Wrd110.pObj) [6]) = (Wrd96.Obj);
  (Wrd101.Obj) = (Rsp [0]);
  ((Wrd110.pObj) [7]) = (Wrd101.Obj);
  Rvl = (Wrd98.Obj);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_292)
  (Wrd84.Obj) = (current_block [OBJECT_6_4]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_142]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 2);

DEFLABEL (label_188)
  (Wrd75.Obj) = Rvl;
  goto label_291;

DEFLABEL (label_294)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_141])), (Wrd70.pObj));

DEFLABEL (label_187)
  (Wrd69.Obj) = Rvl;
  goto label_293;

DEFLABEL (label_296)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd54.pObj) [14]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_140]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_186)
  (* (--Rsp)) = Rvl;
  goto label_295;

DEFLABEL (label_298)
  (Wrd40.Obj) = (current_block [OBJECT_6_6]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_139]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 2);

DEFLABEL (label_185)
  (Wrd31.Obj) = Rvl;
  goto label_297;

DEFLABEL (label_300)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_138])), (Wrd26.pObj));

DEFLABEL (label_184)
  (Wrd25.Obj) = Rvl;
  goto label_299;

DEFLABEL (label_302)
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [14]);
  (Wrd8.Obj) = (current_block [OBJECT_6_22]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_137]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_183)
  (* (--Rsp)) = Rvl;
  goto label_301;

DEFLABEL (label_303)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_165]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_122]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_6_165);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_182]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_183]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_6_182);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_112]));

DEFLABEL (lambda_205)
  CLOSURE_HEADER (LABEL_6_95);

DEFLABEL (lambda_128)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_112]));

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_6_111);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_132]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_112]));

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_6_132);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_163);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_162])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  (Rsp [13]) = (Wrd7.Obj);
  Rsp = (& (Rsp [13]));
  goto lambda_126;

DEFLABEL (lambda_207)
  CLOSURE_HEADER (LABEL_6_117);

DEFLABEL (lambda_140)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd8.Obj);
  goto lambda_130;

DEFLABEL (lambda_206)
  CLOSURE_HEADER (LABEL_6_115);

DEFLABEL (lambda_144)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd8.Obj);
  goto lambda_130;

DEFLABEL (lambda_209)
  CLOSURE_HEADER (LABEL_6_135);

DEFLABEL (lambda_154)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_128;

DEFLABEL (lambda_208)
  CLOSURE_HEADER (LABEL_6_133);

DEFLABEL (lambda_149)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_128;

DEFLABEL (lambda_210)
  CLOSURE_HEADER (LABEL_6_143);

DEFLABEL (lambda_94)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [6]) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [5]) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (lambda_212)
DEFLABEL (lambda_72)
  INTERRUPT_CHECK (26, LABEL_6_158);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_179]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_122]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_6_179);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_112]));

DEFLABEL (lambda_211)
DEFLABEL (lambda_126)
  INTERRUPT_CHECK (26, LABEL_6_162);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_98;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_8 9
#define LABEL_7_9 11
#define ENVIRONMENT_LABEL_7_3 24
#define DEBUGGING_LABEL_7_2 23
#define EXECUTE_CACHE_7_13 13
#define EXECUTE_CACHE_7_12 15
#define EXECUTE_CACHE_7_11 17
#define EXECUTE_CACHE_7_10 19
#define EXECUTE_CACHE_7_6 21
#define FREE_REFERENCES_LABEL_7_0 12
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_7_4);
      goto maybe_lap_comment_4;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_lap_comment_7)
DEFLABEL (maybe_lap_comment_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_8 11
#define ENVIRONMENT_LABEL_8_3 18
#define DEBUGGING_LABEL_8_2 17
#define OBJECT_8_4 16
#define OBJECT_8_3 15
#define OBJECT_8_2 14
#define OBJECT_8_1 13
#define OBJECT_8_0 12
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_8_4);
      goto lap_commentP_7;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_8_8);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lap_commentP_14)
DEFLABEL (lap_commentP_7)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_17;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  if (! ((Wrd6.uLng) == 1))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_24)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_8_1])))
    goto label_16;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_23;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_22)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_16;
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_21;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_20)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_19;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd38.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_18)
  if (! ((Wrd38.Obj) == (current_block [OBJECT_8_3])))
    goto label_16;
  Rvl = (current_block [OBJECT_8_4]);
  goto label_15;

DEFLABEL (label_19)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_12)
  (Wrd38.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_11)
  (Wrd29.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_10)
  (Wrd19.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 9
#define DEBUGGING_LABEL_9_2 8
#define OBJECT_9_1 7
#define OBJECT_9_0 6
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_9_4);
      goto lap_comment_text_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lap_comment_text_5)
DEFLABEL (lap_comment_text_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_8;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_6;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd16.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 14
#define DEBUGGING_LABEL_10_2 13
#define EXECUTE_CACHE_10_7 7
#define EXECUTE_CACHE_10_6 9
#define FREE_REFERENCE_10_0 12
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_10_4);
      goto make_data_generator_0;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_data_generator_4)
DEFLABEL (make_data_generator_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_5;
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [6]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (label_5)
  (Wrd17.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_9 11
#define LABEL_11_11 13
#define LABEL_11_14 15
#define TAG_11_15 6
#define LABEL_11_16 17
#define LABEL_11_17 19
#define LABEL_11_18 21
#define LABEL_11_19 23
#define LABEL_11_21 25
#define LABEL_11_23 27
#define LABEL_11_24 29
#define LABEL_11_25 31
#define LABEL_11_27 33
#define LABEL_11_34 35
#define LABEL_11_28 37
#define LABEL_11_31 39
#define LABEL_11_32 41
#define LABEL_11_33 43
#define ENVIRONMENT_LABEL_11_3 83
#define DEBUGGING_LABEL_11_2 82
#define OBJECT_11_10 81
#define OBJECT_11_9 80
#define OBJECT_11_8 79
#define OBJECT_11_7 78
#define OBJECT_11_6 77
#define OBJECT_11_5 76
#define OBJECT_11_4 75
#define OBJECT_11_3 74
#define OBJECT_11_2 73
#define OBJECT_11_1 72
#define OBJECT_11_0 71
#define EXECUTE_CACHE_11_38 45
#define EXECUTE_CACHE_11_37 47
#define EXECUTE_CACHE_11_35 49
#define EXECUTE_CACHE_11_36 51
#define EXECUTE_CACHE_11_30 53
#define EXECUTE_CACHE_11_29 55
#define EXECUTE_CACHE_11_26 57
#define EXECUTE_CACHE_11_22 59
#define EXECUTE_CACHE_11_20 61
#define EXECUTE_CACHE_11_13 63
#define EXECUTE_CACHE_11_12 65
#define EXECUTE_CACHE_11_10 67
#define EXECUTE_CACHE_11_8 69
#define FREE_REFERENCES_LABEL_11_0 44
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_11_4);
      goto make_data_generator_traditional_24;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_21;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_20;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_19;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_18;

    case 6:
      current_block = (Rpc - LABEL_11_14);
      goto lambda_29;

    case 7:
      current_block = (Rpc - LABEL_11_16);
      goto continuation_17;

    case 8:
      current_block = (Rpc - LABEL_11_17);
      goto continuation_16;

    case 9:
      current_block = (Rpc - LABEL_11_18);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_11_19);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_11_21);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_11_23);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_11_24);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_11_25);
      goto lambda_10;

    case 15:
      current_block = (Rpc - LABEL_11_27);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_11_34);
      goto label_26;

    case 17:
      current_block = (Rpc - LABEL_11_28);
      goto continuation_8;

    case 18:
      current_block = (Rpc - LABEL_11_31);
      goto continuation_7;

    case 19:
      current_block = (Rpc - LABEL_11_32);
      goto continuation_6;

    case 20:
      current_block = (Rpc - LABEL_11_33);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_data_generator_traditional_28)
DEFLABEL (make_data_generator_traditional_24)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_11_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_11_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_11_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_11_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_22]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_25]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_26]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_11_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_29]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_6]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_36]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_33]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd18.Obj) = (Rsp [16]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_35;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd22.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_35;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_34)
  (Wrd24.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_35]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_38]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_36]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_31);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_11_7]);
  (Wrd9.Obj) = (current_block [OBJECT_11_8]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_11_6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [14]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  (Wrd19.Obj) = (current_block [OBJECT_11_9]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_31)
DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_37]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [8]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (Rsp [7]) = Rvl;
  Rsp = (& (Rsp [7]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_14])));
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

DEFLABEL (label_35)
  (Wrd14.Obj) = (Rsp [16]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_34]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_11_14);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [3]) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (lambda_30)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_11_25);
  (Wrd5.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_30]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_12 9
#define TAG_12_13 3
#define LABEL_12_10 11
#define TAG_12_11 4
#define LABEL_12_18 13
#define LABEL_12_19 15
#define LABEL_12_20 17
#define LABEL_12_8 19
#define LABEL_12_16 21
#define LABEL_12_21 23
#define LABEL_12_22 25
#define LABEL_12_27 27
#define LABEL_12_24 29
#define TAG_12_25 13
#define LABEL_12_26 31
#define LABEL_12_29 33
#define LABEL_12_36 35
#define LABEL_12_30 37
#define LABEL_12_31 39
#define LABEL_12_32 41
#define LABEL_12_34 43
#define LABEL_12_35 45
#define LABEL_12_38 47
#define LABEL_12_40 49
#define LABEL_12_41 51
#define LABEL_12_44 53
#define TAG_12_45 25
#define LABEL_12_47 55
#define LABEL_12_49 57
#define LABEL_12_50 59
#define LABEL_12_51 61
#define LABEL_12_55 63
#define LABEL_12_56 65
#define LABEL_12_57 67
#define LABEL_12_59 69
#define LABEL_12_63 71
#define LABEL_12_65 73
#define ENVIRONMENT_LABEL_12_3 141
#define DEBUGGING_LABEL_12_2 140
#define OBJECT_12_13 139
#define OBJECT_12_12 138
#define OBJECT_12_11 137
#define OBJECT_12_10 136
#define OBJECT_12_9 135
#define OBJECT_12_8 134
#define OBJECT_12_7 133
#define OBJECT_12_6 132
#define OBJECT_12_5 131
#define OBJECT_12_4 130
#define OBJECT_12_3 129
#define OBJECT_12_2 128
#define OBJECT_12_1 127
#define OBJECT_12_0 126
#define EXECUTE_CACHE_12_66 75
#define EXECUTE_CACHE_12_64 77
#define EXECUTE_CACHE_12_62 79
#define EXECUTE_CACHE_12_60 81
#define EXECUTE_CACHE_12_58 83
#define EXECUTE_CACHE_12_53 85
#define EXECUTE_CACHE_12_61 87
#define EXECUTE_CACHE_12_52 89
#define EXECUTE_CACHE_12_48 91
#define EXECUTE_CACHE_12_46 93
#define EXECUTE_CACHE_12_43 95
#define EXECUTE_CACHE_12_42 97
#define EXECUTE_CACHE_12_39 99
#define EXECUTE_CACHE_12_37 101
#define EXECUTE_CACHE_12_33 103
#define EXECUTE_CACHE_12_28 105
#define EXECUTE_CACHE_12_23 107
#define EXECUTE_CACHE_12_17 109
#define EXECUTE_CACHE_12_15 111
#define EXECUTE_CACHE_12_14 113
#define EXECUTE_CACHE_12_54 115
#define EXECUTE_CACHE_12_9 117
#define EXECUTE_CACHE_12_7 119
#define FREE_REFERENCE_12_1 122
#define FREE_REFERENCE_12_0 123
#define FREE_ASSIGNMENT_12_0 125
#define FREE_REFERENCES_LABEL_12_0 74
#define NUMBER_OF_LINKER_SECTIONS_12_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd33;
  machine_word Wrd5;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_12_4);
      goto make_data_generator_stackify_44;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_12_12);
      goto lambda_54;

    case 4:
      current_block = (Rpc - LABEL_12_10);
      goto swapB_53;

    case 5:
      current_block = (Rpc - LABEL_12_18);
      goto label_46;

    case 6:
      current_block = (Rpc - LABEL_12_19);
      goto label_47;

    case 7:
      current_block = (Rpc - LABEL_12_20);
      goto label_48;

    case 8:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_12_16);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_12_21);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_12_22);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_12_27);
      goto label_49;

    case 13:
      current_block = (Rpc - LABEL_12_24);
      goto lambda_55;

    case 14:
      current_block = (Rpc - LABEL_12_26);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_12_29);
      goto continuation_29;

    case 16:
      current_block = (Rpc - LABEL_12_36);
      goto label_50;

    case 17:
      current_block = (Rpc - LABEL_12_30);
      goto continuation_28;

    case 18:
      current_block = (Rpc - LABEL_12_31);
      goto continuation_27;

    case 19:
      current_block = (Rpc - LABEL_12_32);
      goto continuation_26;

    case 20:
      current_block = (Rpc - LABEL_12_34);
      goto continuation_10;

    case 21:
      current_block = (Rpc - LABEL_12_35);
      goto continuation_9;

    case 22:
      current_block = (Rpc - LABEL_12_38);
      goto continuation_12;

    case 23:
      current_block = (Rpc - LABEL_12_40);
      goto continuation_25;

    case 24:
      current_block = (Rpc - LABEL_12_41);
      goto continuation_24;

    case 25:
      current_block = (Rpc - LABEL_12_44);
      goto lambda_56;

    case 26:
      current_block = (Rpc - LABEL_12_47);
      goto continuation_11;

    case 27:
      current_block = (Rpc - LABEL_12_49);
      goto continuation_23;

    case 28:
      current_block = (Rpc - LABEL_12_50);
      goto continuation_22;

    case 29:
      current_block = (Rpc - LABEL_12_51);
      goto continuation_21;

    case 30:
      current_block = (Rpc - LABEL_12_55);
      goto continuation_18;

    case 31:
      current_block = (Rpc - LABEL_12_56);
      goto continuation_20;

    case 32:
      current_block = (Rpc - LABEL_12_57);
      goto continuation_19;

    case 33:
      current_block = (Rpc - LABEL_12_59);
      goto continuation_17;

    case 34:
      current_block = (Rpc - LABEL_12_63);
      goto continuation_16;

    case 35:
      current_block = (Rpc - LABEL_12_65);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_data_generator_stackify_52)
DEFLABEL (make_data_generator_stackify_44)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd10.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_10])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  ((Wrd28.pObj) [2]) = (Wrd9.Obj);
  (Rsp [7]) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_12])));
  Rhp += 4;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd21 = Wrd14;
  (Wrd22.Obj) = (Rsp [6]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  ((Wrd21.pObj) [4]) = (Wrd18.Obj);
  ((Wrd21.pObj) [5]) = Rvl;
  (Rsp [8]) = (Wrd13.Obj);
  (Rsp [9]) = (Wrd29.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (label_57)
  (Rsp [5]) = Rvl;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (Rsp [6]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_21);
  (Rsp [7]) = Rvl;
  Rsp = (& (Rsp [5]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_24])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_12_12);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_61;
  Wrd8 = Wrd12;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_28]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_31]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_33]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_12_32);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_43]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_12_31);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_42]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_12_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_53]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_12_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_50]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_51]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_12_5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_52]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_12_51);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_57]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_58]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_12_57);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_62]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_12_56);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_61]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_12_50);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_53]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_12_49);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_39]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_12_55);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_60]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_12_59);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_64]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_12_63);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_64]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_12_65);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_12_13]);
  (Wrd9.Obj) = (current_block [OBJECT_12_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (Rsp [13]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_12_11]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_66]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_12_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_39]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_12_38);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_48]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_12_47);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_54]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_12_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_34]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_35]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_59;
  Wrd13 = Wrd17;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_37]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_12_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_46]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_12_34);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_44])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_36])), (Wrd14.pObj));

DEFLABEL (label_50)
  (Wrd13.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_27])), (Wrd9.pObj));

DEFLABEL (label_49)
  (Wrd8.Obj) = Rvl;
  goto label_60;

DEFLABEL (swapB_53)
  CLOSURE_HEADER (LABEL_12_10);

DEFLABEL (swapB_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  Wrd5 = Wrd9;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_65)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_62)
  Rvl = (current_block [OBJECT_12_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_64)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_20])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_48)
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_19])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_47)
  goto label_65;

DEFLABEL (label_70)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_69;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_12_18])), (Wrd6.pObj));

DEFLABEL (label_46)
  (Wrd5.Obj) = Rvl;
  goto label_68;

DEFLABEL (lambda_55)
  CLOSURE_HEADER (LABEL_12_24);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [3]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_12_44);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [3]) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_5 7
#define LABEL_13_6 9
#define LABEL_13_9 11
#define LABEL_13_10 13
#define LABEL_13_11 15
#define LABEL_13_13 17
#define LABEL_13_21 19
#define LABEL_13_17 21
#define LABEL_13_22 23
#define LABEL_13_18 25
#define LABEL_13_24 27
#define ENVIRONMENT_LABEL_13_3 57
#define DEBUGGING_LABEL_13_2 56
#define OBJECT_13_6 55
#define OBJECT_13_5 54
#define OBJECT_13_4 53
#define OBJECT_13_3 52
#define OBJECT_13_2 51
#define OBJECT_13_1 50
#define OBJECT_13_0 49
#define EXECUTE_CACHE_13_25 29
#define EXECUTE_CACHE_13_23 31
#define EXECUTE_CACHE_13_20 33
#define EXECUTE_CACHE_13_19 35
#define EXECUTE_CACHE_13_16 37
#define EXECUTE_CACHE_13_15 39
#define EXECUTE_CACHE_13_14 41
#define EXECUTE_CACHE_13_12 43
#define EXECUTE_CACHE_13_8 45
#define FREE_REFERENCE_13_0 48
#define FREE_REFERENCES_LABEL_13_0 28
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_13_4);
      goto stackify_output__data_decl_13;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_13_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_13_13);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_13_21);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_13_17);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_13_22);
      goto label_16;

    case 11:
      current_block = (Rpc - LABEL_13_18);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_13_24);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_output__data_decl_19)
DEFLABEL (stackify_output__data_decl_13)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 30))
    goto label_27;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13_18);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13_21);
  (Rsp [1]) = Rvl;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 1)
    goto label_20;
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 2);

DEFLABEL (label_20)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  ((Wrd14.pObj) [0]) = Rvl;
  Rsp = (& (Rsp [3]));

DEFLABEL (label_23)
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_22;
  Wrd5 = Wrd9;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_23]));

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_22])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_24]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_6]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_17);
  goto label_23;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_15]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_9 9
#define LABEL_14_10 11
#define LABEL_14_11 13
#define LABEL_14_13 15
#define LABEL_14_14 17
#define LABEL_14_17 19
#define ENVIRONMENT_LABEL_14_3 45
#define DEBUGGING_LABEL_14_2 44
#define OBJECT_14_6 43
#define OBJECT_14_5 42
#define OBJECT_14_4 41
#define OBJECT_14_3 40
#define OBJECT_14_2 39
#define OBJECT_14_1 38
#define OBJECT_14_0 37
#define EXECUTE_CACHE_14_19 21
#define EXECUTE_CACHE_14_18 23
#define EXECUTE_CACHE_14_20 25
#define EXECUTE_CACHE_14_15 27
#define EXECUTE_CACHE_14_12 29
#define EXECUTE_CACHE_14_16 31
#define EXECUTE_CACHE_14_8 33
#define EXECUTE_CACHE_14_6 35
#define FREE_REFERENCES_LABEL_14_0 20
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_14_4);
      goto file_prefix_10;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_14_17);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_prefix_13)
DEFLABEL (file_prefix_10)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_15)
  (Wrd14.Obj) = (current_block [OBJECT_14_4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_14)
DEFLABEL (label_16)
  (Wrd9.Obj) = (current_block [OBJECT_14_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_19]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define ENVIRONMENT_LABEL_15_3 18
#define DEBUGGING_LABEL_15_2 17
#define OBJECT_15_1 16
#define OBJECT_15_0 15
#define EXECUTE_CACHE_15_8 9
#define EXECUTE_CACHE_15_7 11
#define FREE_REFERENCE_15_0 14
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_15_4);
      goto make_nonce_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_nonce_5)
DEFLABEL (make_nonce_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (current_block [OBJECT_15_1]);
  goto pop_return;

DEFLABEL (label_6)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_7 9
#define LABEL_16_9 11
#define LABEL_16_10 13
#define LABEL_16_12 15
#define LABEL_16_13 17
#define LABEL_16_15 19
#define LABEL_16_17 21
#define LABEL_16_18 23
#define LABEL_16_20 25
#define LABEL_16_21 27
#define LABEL_16_23 29
#define LABEL_16_25 31
#define LABEL_16_26 33
#define LABEL_16_27 35
#define LABEL_16_30 37
#define ENVIRONMENT_LABEL_16_3 60
#define DEBUGGING_LABEL_16_2 59
#define EXECUTE_CACHE_16_29 39
#define EXECUTE_CACHE_16_28 41
#define EXECUTE_CACHE_16_31 43
#define EXECUTE_CACHE_16_24 45
#define EXECUTE_CACHE_16_22 47
#define EXECUTE_CACHE_16_19 49
#define EXECUTE_CACHE_16_16 51
#define EXECUTE_CACHE_16_14 53
#define EXECUTE_CACHE_16_11 55
#define EXECUTE_CACHE_16_8 57
#define FREE_REFERENCES_LABEL_16_0 38
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd31;
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
      goto top_level_stackify_17;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_16_12);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_16_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_16_17);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_16_18);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_16_20);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_16_21);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_16_23);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_16_25);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_16_26);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_16_27);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_16_30);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (top_level_stackify_21)
DEFLABEL (top_level_stackify_17)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_24;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd31.Lng) > 0)
    goto label_23;

DEFLABEL (label_22)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_24]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_29]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16_12);
  (Rsp [7]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_21);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_28]));

DEFLABEL (label_23)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_16_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_31]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_16_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_29]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16_17);
  (Rsp [7]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_25]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_16_25);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_28]));

DEFLABEL (label_24)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_8 9
#define LABEL_17_11 11
#define LABEL_17_9 13
#define LABEL_17_12 15
#define LABEL_17_13 17
#define LABEL_17_15 19
#define LABEL_17_16 21
#define LABEL_17_18 23
#define LABEL_17_19 25
#define LABEL_17_22 27
#define LABEL_17_23 29
#define LABEL_17_25 31
#define LABEL_17_26 33
#define LABEL_17_27 35
#define LABEL_17_28 37
#define LABEL_17_29 39
#define LABEL_17_30 41
#define LABEL_17_32 43
#define LABEL_17_33 45
#define ENVIRONMENT_LABEL_17_3 71
#define DEBUGGING_LABEL_17_2 70
#define OBJECT_17_2 69
#define OBJECT_17_1 68
#define OBJECT_17_0 67
#define EXECUTE_CACHE_17_34 47
#define EXECUTE_CACHE_17_31 49
#define EXECUTE_CACHE_17_24 51
#define EXECUTE_CACHE_17_35 53
#define EXECUTE_CACHE_17_21 55
#define EXECUTE_CACHE_17_20 57
#define EXECUTE_CACHE_17_17 59
#define EXECUTE_CACHE_17_14 61
#define EXECUTE_CACHE_17_10 63
#define EXECUTE_CACHE_17_7 65
#define FREE_REFERENCES_LABEL_17_0 46
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd29;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_17_4);
      goto top_level_traditional_22;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_17_11);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_17_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_17_13);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_20;

    case 9:
      current_block = (Rpc - LABEL_17_16);
      goto continuation_19;

    case 10:
      current_block = (Rpc - LABEL_17_18);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_17_19);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_17_22);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_17_23);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_17_25);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_17_26);
      goto continuation_7;

    case 16:
      current_block = (Rpc - LABEL_17_27);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_17_28);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_17_29);
      goto continuation_13;

    case 19:
      current_block = (Rpc - LABEL_17_30);
      goto continuation_17;

    case 20:
      current_block = (Rpc - LABEL_17_32);
      goto continuation_8;

    case 21:
      current_block = (Rpc - LABEL_17_33);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (top_level_traditional_26)
DEFLABEL (top_level_traditional_22)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_29;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd29.Lng) > 0)
    goto label_28;

DEFLABEL (label_27)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_12);
  (Rsp [9]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_32]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_34]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_17_18);
  (Rsp [11]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_26);
  (Rsp [10]) = Rvl;
  Rsp = (& (Rsp [9]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_31]));

DEFLABEL (label_28)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_17]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_17_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_17_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_30]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_17_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_34]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_17_15);
  (Rsp [11]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_24]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_17_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_33]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_35]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_17_22);
  (Rsp [9]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_28]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_17_28);
  (Rsp [10]) = Rvl;
  Rsp = (& (Rsp [9]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_31]));

DEFLABEL (label_29)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define ENVIRONMENT_LABEL_18_3 17
#define DEBUGGING_LABEL_18_2 16
#define OBJECT_18_0 15
#define EXECUTE_CACHE_18_9 9
#define EXECUTE_CACHE_18_8 11
#define EXECUTE_CACHE_18_7 13
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_18_4);
      goto declare_code_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declare_code_5)
DEFLABEL (declare_code_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define ENVIRONMENT_LABEL_19_3 17
#define DEBUGGING_LABEL_19_2 16
#define OBJECT_19_0 15
#define EXECUTE_CACHE_19_9 9
#define EXECUTE_CACHE_19_8 11
#define EXECUTE_CACHE_19_7 13
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_19_4);
      goto declare_data_no_subblocks_2;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declare_data_no_subblocks_5)
DEFLABEL (declare_data_no_subblocks_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define ENVIRONMENT_LABEL_20_3 17
#define DEBUGGING_LABEL_20_2 16
#define OBJECT_20_0 15
#define EXECUTE_CACHE_20_9 9
#define EXECUTE_CACHE_20_8 11
#define EXECUTE_CACHE_20_7 13
#define FREE_REFERENCES_LABEL_20_0 8
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_20_4);
      goto declare_data_2;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declare_data_5)
DEFLABEL (declare_data_2)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define ENVIRONMENT_LABEL_21_3 17
#define DEBUGGING_LABEL_21_2 16
#define OBJECT_21_0 15
#define EXECUTE_CACHE_21_9 9
#define EXECUTE_CACHE_21_8 11
#define EXECUTE_CACHE_21_7 13
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_21_4);
      goto declare_object_2;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declare_object_5)
DEFLABEL (declare_object_2)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define LABEL_22_8 11
#define LABEL_22_11 13
#define ENVIRONMENT_LABEL_22_3 28
#define DEBUGGING_LABEL_22_2 27
#define OBJECT_22_1 26
#define OBJECT_22_0 25
#define EXECUTE_CACHE_22_14 15
#define EXECUTE_CACHE_22_13 17
#define EXECUTE_CACHE_22_12 19
#define EXECUTE_CACHE_22_10 21
#define EXECUTE_CACHE_22_9 23
#define FREE_REFERENCES_LABEL_22_0 14
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_22_4);
      goto declare_dynamic_initialization_5;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_22_11);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declare_dynamic_initialization_8)
DEFLABEL (declare_dynamic_initialization_5)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define LABEL_23_8 11
#define LABEL_23_11 13
#define ENVIRONMENT_LABEL_23_3 28
#define DEBUGGING_LABEL_23_2 27
#define OBJECT_23_1 26
#define OBJECT_23_0 25
#define EXECUTE_CACHE_23_14 15
#define EXECUTE_CACHE_23_13 17
#define EXECUTE_CACHE_23_12 19
#define EXECUTE_CACHE_23_10 21
#define EXECUTE_CACHE_23_9 23
#define FREE_REFERENCES_LABEL_23_0 14
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_23_4);
      goto declare_dynamic_object_initialization_5;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_23_11);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declare_dynamic_object_initialization_8)
DEFLABEL (declare_dynamic_object_initialization_5)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_10 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define LABEL_24_6 13
#define LABEL_24_12 15
#define LABEL_24_15 17
#define LABEL_24_16 19
#define LABEL_24_17 21
#define LABEL_24_23 23
#define LABEL_24_25 25
#define LABEL_24_19 27
#define LABEL_24_20 29
#define LABEL_24_21 31
#define LABEL_24_24 33
#define LABEL_24_32 35
#define LABEL_24_27 37
#define LABEL_24_29 39
#define ENVIRONMENT_LABEL_24_3 79
#define DEBUGGING_LABEL_24_2 78
#define OBJECT_24_10 77
#define OBJECT_24_9 76
#define OBJECT_24_8 75
#define OBJECT_24_7 74
#define OBJECT_24_6 73
#define OBJECT_24_5 72
#define OBJECT_24_4 71
#define OBJECT_24_3 70
#define OBJECT_24_2 69
#define OBJECT_24_1 68
#define OBJECT_24_0 67
#define EXECUTE_CACHE_24_34 41
#define EXECUTE_CACHE_24_33 43
#define EXECUTE_CACHE_24_31 45
#define EXECUTE_CACHE_24_30 47
#define EXECUTE_CACHE_24_28 49
#define EXECUTE_CACHE_24_26 51
#define EXECUTE_CACHE_24_22 53
#define EXECUTE_CACHE_24_18 55
#define EXECUTE_CACHE_24_14 57
#define EXECUTE_CACHE_24_13 59
#define EXECUTE_CACHE_24_11 61
#define EXECUTE_CACHE_24_7 63
#define FREE_REFERENCE_24_0 66
#define FREE_REFERENCES_LABEL_24_0 40
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_24_4);
      goto declare_subcodes_20;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_24_10);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_24_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_24_15);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_24_16);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_24_17);
      goto lambda_12;

    case 10:
      current_block = (Rpc - LABEL_24_23);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_24_25);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_24_19);
      goto continuation_18;

    case 13:
      current_block = (Rpc - LABEL_24_20);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_24_21);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_24_24);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_24_32);
      goto label_26;

    case 17:
      current_block = (Rpc - LABEL_24_27);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_24_29);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declare_subcodes_28)
DEFLABEL (declare_subcodes_20)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_33;

DEFLABEL (label_32)
  (Wrd7.Obj) = (current_block [OBJECT_24_2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_31;
  Wrd18 = Wrd22;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_24_12);
  (Rsp [5]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_10])), (Wrd19.pObj));

DEFLABEL (label_22)
  (Wrd18.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  if (! ((Wrd6.uLng) == 1))
    goto label_35;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_34)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_32;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_24_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_24_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_24_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_24_9]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_31]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_24_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_24_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_30]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_24_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_24_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_24_19);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_27]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_28]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_24_27);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_34]));

DEFLABEL (label_35)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_23)
  (Wrd24.Obj) = Rvl;
  goto label_34;

DEFLABEL (lambda_29)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_24_17);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_41;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_41;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_40)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_24]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_39;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_39;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_26]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_24_24);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_36)
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_33]));

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_24_10]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_32]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_6]), 2);

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_24_7]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_25]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_6]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_24_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_6]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define LABEL_25_9 11
#define LABEL_25_12 13
#define LABEL_25_8 15
#define LABEL_25_16 17
#define LABEL_25_17 19
#define LABEL_25_19 21
#define LABEL_25_20 23
#define LABEL_25_15 25
#define LABEL_25_21 27
#define LABEL_25_22 29
#define LABEL_25_13 31
#define LABEL_25_23 33
#define ENVIRONMENT_LABEL_25_3 54
#define DEBUGGING_LABEL_25_2 53
#define OBJECT_25_5 52
#define OBJECT_25_4 51
#define OBJECT_25_3 50
#define OBJECT_25_2 49
#define OBJECT_25_1 48
#define OBJECT_25_0 47
#define EXECUTE_CACHE_25_24 35
#define EXECUTE_CACHE_25_18 37
#define EXECUTE_CACHE_25_14 39
#define EXECUTE_CACHE_25_11 41
#define EXECUTE_CACHE_25_10 43
#define FREE_REFERENCE_25_0 46
#define FREE_REFERENCES_LABEL_25_0 34
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd33;
  machine_word Wrd57;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd47;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd13;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_25_4);
      goto c_quotify_string_32;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_34;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto loop_28;

    case 4:
      current_block = (Rpc - LABEL_25_9);
      goto label_35;

    case 5:
      current_block = (Rpc - LABEL_25_12);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_25_16);
      goto label_37;

    case 8:
      current_block = (Rpc - LABEL_25_17);
      goto label_36;

    case 9:
      current_block = (Rpc - LABEL_25_19);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_25_20);
      goto continuation_17;

    case 11:
      current_block = (Rpc - LABEL_25_15);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_25_21);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_25_22);
      goto label_39;

    case 14:
      current_block = (Rpc - LABEL_25_13);
      goto continuation_24;

    case 15:
      current_block = (Rpc - LABEL_25_23);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_quotify_string_41)
DEFLABEL (c_quotify_string_32)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_44;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_43)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = (LEFT_SHIFT ((Wrd22.Lng), 2));
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_28;

DEFLABEL (label_44)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (loop_42)
DEFLABEL (loop_28)
  INTERRUPT_CHECK (26, LABEL_25_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_45;
  (Wrd9.Obj) = (current_block [OBJECT_25_2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (label_45)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_60;
  Wrd15 = Wrd19;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_8);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_46;
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_13]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd77.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_14]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_25_13);
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) - (Wrd9.Lng));
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd15.Lng) = ((Wrd13.Lng) + (Wrd10.Lng));
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (Rsp [2]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_28;

DEFLABEL (label_46)
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  Wrd18 = Wrd9;
  (Wrd19.Obj) = (Rsp [7]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if ((Wrd18.Lng) < (Wrd20.Lng))
    goto label_56;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_55)
  (Wrd39.Obj) = (Rsp [8]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 30))
    goto label_54;
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_54;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [1]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) (Wrd34.Lng)) < ((unsigned long) (Wrd38.Lng))))
    goto label_54;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd31.Obj));
  (Wrd28.pChr) = (& ((Wrd36.pChr) [(Wrd25.Lng)]));
  (Wrd29.uLng) = ((unsigned long) (((unsigned char *) (Wrd28.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd30.Obj) = (MAKE_OBJECT (2, (Wrd29.uLng)));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_53)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_25_15);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 30))
    goto label_52;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_51)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd18.Lng) - (Wrd20.Lng));
  (Wrd22.Obj) = (Rsp [5]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd25.Lng) = ((Wrd23.Lng) + (Wrd21.Lng));
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_50;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! ((Wrd30.Lng) > 4L))
    goto label_48;

DEFLABEL (label_49)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_19]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (current_block [OBJECT_25_5]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_24]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_25_19);

DEFLABEL (label_48)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.Obj) = (Rsp [5]);
  if ((Wrd33.Obj) == (Wrd34.Obj))
    goto label_47;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_20]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd42.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_14]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_25_20);

DEFLABEL (label_47)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_23]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_25_2]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_14]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_25_23);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd8.Lng) + (Wrd10.Lng));
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [6]) = (Wrd6.Obj);
  Rsp = (& (Rsp [5]));
  goto loop_28;

DEFLABEL (label_50)
  (Wrd57.Obj) = (current_block [OBJECT_25_4]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_22]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_49;

DEFLABEL (label_52)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_21]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd41.Obj) = (Rsp [8]);
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd63.Obj) = (Rsp [8]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 30))
    goto label_58;
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd56.uLng) == 26))
    goto label_58;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [1]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd62.Lng))))
    goto label_58;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd10.Obj));
  (Wrd53.pChr) = (& ((Wrd60.pChr) [(Wrd50.Lng)]));
  (Wrd54.uLng) = ((unsigned long) (((unsigned char *) (Wrd53.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd47.Obj) = (MAKE_OBJECT (2, (Wrd54.uLng)));

DEFLABEL (label_57)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd47.Obj);
  goto label_55;

DEFLABEL (label_58)
  (Wrd65.Obj) = (Rsp [8]);
  (Wrd66.Obj) = (Rsp [2]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_16]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 2);

DEFLABEL (label_37)
  (Wrd47.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_9])), (Wrd16.pObj));

DEFLABEL (label_35)
  (Wrd15.Obj) = Rvl;
  goto label_59;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_25_12);
  (* (--Rsp)) = Rvl;
  goto label_55;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_6 5
#define LABEL_26_8 7
#define LABEL_26_5 9
#define LABEL_26_9 11
#define LABEL_26_14 13
#define LABEL_26_17 15
#define LABEL_26_18 17
#define LABEL_26_15 19
#define LABEL_26_11 21
#define LABEL_26_21 23
#define LABEL_26_22 25
#define LABEL_26_24 27
#define LABEL_26_25 29
#define LABEL_26_10 31
#define LABEL_26_12 33
#define LABEL_26_23 35
#define ENVIRONMENT_LABEL_26_3 68
#define DEBUGGING_LABEL_26_2 67
#define OBJECT_26_10 66
#define OBJECT_26_9 65
#define OBJECT_26_8 64
#define OBJECT_26_7 63
#define OBJECT_26_6 62
#define OBJECT_26_5 61
#define OBJECT_26_4 60
#define OBJECT_26_3 59
#define OBJECT_26_2 58
#define OBJECT_26_1 57
#define OBJECT_26_0 56
#define EXECUTE_CACHE_26_28 37
#define EXECUTE_CACHE_26_27 39
#define EXECUTE_CACHE_26_26 41
#define EXECUTE_CACHE_26_20 43
#define EXECUTE_CACHE_26_19 45
#define EXECUTE_CACHE_26_16 47
#define EXECUTE_CACHE_26_13 49
#define EXECUTE_CACHE_26_7 51
#define FREE_REFERENCE_26_1 54
#define FREE_REFERENCE_26_0 55
#define FREE_REFERENCES_LABEL_26_0 36
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd5;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_26_4);
      goto c_quotify_string_char_18;

    case 1:
      current_block = (Rpc - LABEL_26_6);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_26_8);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_26_9);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_26_14);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_26_17);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_26_18);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_26_15);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_26_21);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_26_22);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_26_24);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_26_25);
      goto label_26;

    case 14:
      current_block = (Rpc - LABEL_26_10);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_3;

    case 16:
      current_block = (Rpc - LABEL_26_23);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_quotify_string_char_29)
DEFLABEL (c_quotify_string_char_18)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_53;
  Wrd9 = Wrd13;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_16]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_26_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_26_14);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (current_block [OBJECT_26_6]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd14.uLng) == 30))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (Wrd8.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));

DEFLABEL (label_32)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_31;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd25.Lng) = ((Wrd26.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_31;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));

DEFLABEL (label_30)
  (Rsp [2]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_19]));

DEFLABEL (label_31)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_23)
  (Wrd23.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_7]), 1);

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (current_block [OBJECT_26_1]))
    goto label_47;
  if ((Wrd14.Obj) == (current_block [OBJECT_26_3]))
    goto label_45;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_26_5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_28]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (* (--Rsp)) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 30))
    goto label_44;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));

DEFLABEL (label_43)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_42;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd19.Lng) < 3L)
    goto label_37;

DEFLABEL (label_36)
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_10]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_27]));

DEFLABEL (label_37)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_23]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_26_9]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 30))
    goto label_41;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (Wrd27.Obj) = (MAKE_OBJECT (26, (Wrd31.uLng)));

DEFLABEL (label_40)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_39;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd44.Lng) = (3 - (Wrd47.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd44.Lng)))
    goto label_39;
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd44.Lng));
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_26]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_26_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_27]));

DEFLABEL (label_39)
  (Wrd38.Obj) = (current_block [OBJECT_26_8]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_25]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_24]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_7]), 1);

DEFLABEL (label_25)
  (Wrd27.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd50.Obj) = (current_block [OBJECT_26_8]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_22]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_37;

DEFLABEL (label_44)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_21]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_7]), 1);

DEFLABEL (label_24)
  (Wrd7.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  Rvl = (current_block [OBJECT_26_4]);

DEFLABEL (label_46)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd31.Obj) = (Rsp [1]);
  if ((Wrd31.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_1]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_51;
  Wrd37 = Wrd41;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  Rvl = (current_block [OBJECT_26_0]);
  goto label_48;

DEFLABEL (label_49)
  Rvl = (current_block [OBJECT_26_2]);

DEFLABEL (label_48)
  goto label_46;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_9])), (Wrd38.pObj));

DEFLABEL (label_21)
  (Wrd37.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_6])), (Wrd10.pObj));

DEFLABEL (label_20)
  (Wrd9.Obj) = Rvl;
  goto label_52;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_26_10);
  (Wrd5.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define LABEL_27_8 9
#define LABEL_27_10 11
#define LABEL_27_11 13
#define LABEL_27_12 15
#define LABEL_27_13 17
#define LABEL_27_16 19
#define LABEL_27_19 21
#define LABEL_27_20 23
#define LABEL_27_9 25
#define LABEL_27_21 27
#define LABEL_27_17 29
#define LABEL_27_18 31
#define LABEL_27_14 33
#define LABEL_27_22 35
#define LABEL_27_23 37
#define LABEL_27_24 39
#define ENVIRONMENT_LABEL_27_3 58
#define DEBUGGING_LABEL_27_2 57
#define OBJECT_27_11 56
#define OBJECT_27_10 55
#define OBJECT_27_9 54
#define OBJECT_27_8 53
#define OBJECT_27_7 52
#define OBJECT_27_6 51
#define OBJECT_27_5 50
#define OBJECT_27_4 49
#define OBJECT_27_3 48
#define OBJECT_27_2 47
#define OBJECT_27_1 46
#define OBJECT_27_0 45
#define EXECUTE_CACHE_27_15 41
#define EXECUTE_CACHE_27_6 43
#define FREE_REFERENCES_LABEL_27_0 40
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd49;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd39;
  machine_word Wrd13;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd56;
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd84;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd102;
  machine_word Wrd111;
  machine_word Wrd105;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd177;
  machine_word Wrd186;
  machine_word Wrd180;
  machine_word Wrd183;
  machine_word Wrd181;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd163;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd147;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd204;
  machine_word Wrd213;
  machine_word Wrd207;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd197;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd136;
  machine_word Wrd146;
  machine_word Wrd139;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd114;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd123;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_27_4);
      goto c_quotify_data_string_breakup_34;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_27_8);
      goto lambda_4;

    case 4:
      current_block = (Rpc - LABEL_27_10);
      goto loop_31;

    case 5:
      current_block = (Rpc - LABEL_27_11);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_27_12);
      goto label_41;

    case 7:
      current_block = (Rpc - LABEL_27_13);
      goto label_40;

    case 8:
      current_block = (Rpc - LABEL_27_16);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_27_19);
      goto label_37;

    case 10:
      current_block = (Rpc - LABEL_27_20);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_1;

    case 12:
      current_block = (Rpc - LABEL_27_21);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_27_17);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_27_18);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_27_14);
      goto continuation_22;

    case 16:
      current_block = (Rpc - LABEL_27_22);
      goto label_43;

    case 17:
      current_block = (Rpc - LABEL_27_23);
      goto continuation_26;

    case 18:
      current_block = (Rpc - LABEL_27_24);
      goto label_44;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_quotify_data_string_breakup_46)
DEFLABEL (c_quotify_data_string_breakup_34)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  goto lambda_4;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  Rdl = (& (Rsp [6]));
  goto loop_31;

DEFLABEL (lambda_47)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_27_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_9);
  (* (--Rsp)) = Rvl;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 30))
    goto label_50;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_50;
  (Wrd9.Obj) = (current_block [OBJECT_27_9]);
  ((Wrd14.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd9.Obj)));

DEFLABEL (label_49)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_27_1]);
  (Wrd21.Obj) = (current_block [OBJECT_27_9]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_21]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_6]), 3);

DEFLABEL (label_42)
  goto label_49;

DEFLABEL (loop_48)
DEFLABEL (loop_31)
  DLINK_INTERRUPT_CHECK (25, LABEL_27_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) < (Wrd10.Lng))
    goto label_57;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd12.Lng) > 1L)
    goto label_52;
  Rvl = (current_block [OBJECT_27_11]);

DEFLABEL (label_51)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_52)
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 30))
    goto label_56;
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd47.uLng) == 26))
    goto label_56;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [1]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd53.Lng))))
    goto label_56;
  (Wrd40.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd43.pChr) = (& ((Wrd51.pChr) [(Wrd40.Lng)]));
  (Wrd44.Obj) = (current_block [OBJECT_27_9]);
  ((Wrd43.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd44.Obj)));

DEFLABEL (label_55)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd18.Lng) + 1L);
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 30))
    goto label_54;
  if (! (INDEX_FIXNUM_P (Wrd16.Obj)))
    goto label_54;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  ((Wrd28.pObj) [1]) = (Wrd29.Obj);

DEFLABEL (label_53)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_27_11]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  goto label_51;

DEFLABEL (label_54)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_20]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_10]), 2);

DEFLABEL (label_36)
  (Wrd30.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd30.Obj));
  goto label_53;

DEFLABEL (label_56)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.Obj) = (current_block [OBJECT_27_9]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_6]), 3);

DEFLABEL (label_37)
  (Wrd56.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd56.Obj));
  goto label_55;

DEFLABEL (label_57)
  (Wrd66.Obj) = (Rsp [2]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if ((Wrd67.Lng) < 62L)
    goto label_60;
  (Wrd100.Obj) = (Rsp [1]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 30))
    goto label_59;
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd93.uLng) == 26))
    goto label_59;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [1]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) (Wrd67.Lng)) < ((unsigned long) (Wrd99.Lng))))
    goto label_59;
  (Wrd86.uLng) = (OBJECT_DATUM (Wrd66.Obj));
  (Wrd89.pChr) = (& ((Wrd97.pChr) [(Wrd86.Lng)]));
  (Wrd90.Obj) = (current_block [OBJECT_27_9]);
  ((Wrd89.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd90.Obj)));

DEFLABEL (label_58)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [5]);
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd76.pObj)));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd84.Obj);
  goto lambda_4;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_27_18);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_31;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_27_17);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_59)
  (Wrd106.Obj) = (Rsp [1]);
  (Wrd107.Obj) = (Rsp [2]);
  (Wrd108.Obj) = (current_block [OBJECT_27_9]);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_16]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_6]), 3);

DEFLABEL (label_38)
  (Wrd102.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd102.Obj));
  goto label_58;

DEFLABEL (label_60)
  (Wrd134.Obj) = ((Wrd8.pObj) [1]);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if (! ((Wrd135.uLng) == 30))
    goto label_70;
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd123.uLng) == 26))
    goto label_70;
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd134.Obj));
  (Wrd130.Obj) = ((Wrd129.pObj) [1]);
  (Wrd131.Lng) = (FIXNUM_TO_LONG (Wrd130.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd131.Lng))))
    goto label_70;
  (Wrd114.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd119.pChr) = (& ((Wrd129.pChr) [(Wrd114.Lng)]));
  (Wrd120.uLng) = ((unsigned long) (((unsigned char *) (Wrd119.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd121.Obj) = (MAKE_OBJECT (26, (Wrd120.uLng)));
  (* (--Rsp)) = (Wrd121.Obj);

DEFLABEL (label_69)
  (Wrd202.Obj) = (Rsp [2]);
  (Wrd203.uLng) = (OBJECT_TYPE (Wrd202.Obj));
  if (! ((Wrd203.uLng) == 30))
    goto label_68;
  (Wrd194.Obj) = (Rsp [3]);
  (Wrd195.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if (! ((Wrd195.uLng) == 26))
    goto label_68;
  (Wrd197.Lng) = (FIXNUM_TO_LONG (Wrd194.Obj));
  (Wrd199.pObj) = (OBJECT_ADDRESS (Wrd202.Obj));
  (Wrd200.Obj) = ((Wrd199.pObj) [1]);
  (Wrd201.Lng) = (FIXNUM_TO_LONG (Wrd200.Obj));
  if (! (((unsigned long) (Wrd197.Lng)) < ((unsigned long) (Wrd201.Lng))))
    goto label_68;
  (Wrd188.uLng) = (OBJECT_DATUM (Wrd194.Obj));
  (Wrd191.pChr) = (& ((Wrd199.pChr) [(Wrd188.Lng)]));
  (Wrd192.Obj) = (current_block [OBJECT_27_5]);
  ((Wrd191.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd192.Obj)));

DEFLABEL (label_67)
  (Wrd148.Obj) = (Rsp [3]);
  (Wrd149.Lng) = (FIXNUM_TO_LONG (Wrd148.Obj));
  (Wrd150.Lng) = ((Wrd149.Lng) + 1L);
  (Wrd147.Obj) = (LONG_TO_FIXNUM (Wrd150.Lng));
  (Wrd175.Obj) = (Rsp [2]);
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if (! ((Wrd176.uLng) == 30))
    goto label_66;
  (Wrd169.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd169.uLng) == 26))
    goto label_66;
  Wrd170 = Wrd150;
  (Wrd172.pObj) = (OBJECT_ADDRESS (Wrd175.Obj));
  (Wrd173.Obj) = ((Wrd172.pObj) [1]);
  (Wrd174.Lng) = (FIXNUM_TO_LONG (Wrd173.Obj));
  if (! (((unsigned long) (Wrd170.Lng)) < ((unsigned long) (Wrd174.Lng))))
    goto label_66;
  (Wrd163.uLng) = (OBJECT_DATUM (Wrd147.Obj));
  (Wrd166.pChr) = (& ((Wrd172.pChr) [(Wrd163.Lng)]));
  (Wrd167.Obj) = (current_block [OBJECT_27_7]);
  ((Wrd166.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd167.Obj)));

DEFLABEL (label_65)
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd152.Obj);
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (Wrd156.Obj) = (current_block [OBJECT_27_8]);
  (* (--Rsp)) = (Wrd156.Obj);
  (Wrd157.Obj) = (Rsp [3]);
  (Wrd158.Lng) = (FIXNUM_TO_LONG (Wrd157.Obj));
  (Wrd161.Lng) = (((Wrd158.Lng) < 0) ? (RIGHT_SHIFT (((Wrd158.Lng) + 15), 4)) : (RIGHT_SHIFT ((Wrd158.Lng), 4)));
  (Wrd162.Obj) = (LONG_TO_FIXNUM (Wrd161.Lng));
  (* (--Rsp)) = (Wrd162.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_27_14);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd12.Lng) = ((Wrd9.Lng) + 2L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 30))
    goto label_64;
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_64;
  Wrd33 = Wrd12;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd33.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_64;
  (Wrd31.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd31.uLng) == 2))
    goto label_64;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd7.Obj));
  (Wrd29.pChr) = (& ((Wrd35.pChr) [(Wrd26.Lng)]));
  ((Wrd29.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Rvl)));

DEFLABEL (label_63)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_23]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_27_8]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  {
    long temp = ((Wrd21.Lng) & 15L);
    (Wrd24.Lng) = (((Wrd21.Lng) >= 0) ? temp : (temp == 0) ? 0 : (temp | (LEFT_SHIFT ((-1L), 4))));
  }
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_27_23);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd12.Lng) = ((Wrd9.Lng) + 3L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 30))
    goto label_62;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_62;
  Wrd37 = Wrd12;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd37.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_62;
  (Wrd35.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd35.uLng) == 2))
    goto label_62;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd7.Obj));
  (Wrd33.pChr) = (& ((Wrd39.pChr) [(Wrd30.Lng)]));
  ((Wrd33.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Rvl)));

DEFLABEL (label_61)
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd22.Lng) = ((Wrd19.Lng) + 4L);
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd27.Lng) = ((Wrd26.Lng) + 1L);
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.pObj) = (& (Rsp [9]));
  {
    SCHEME_OBJECT * IPDLp1 = (((Wrd29.pObj) <= Rdl) ? (Wrd29.pObj) : Rdl);
    {
      SCHEME_OBJECT * MFUp1 = (& (Rsp [4]));
      SCHEME_OBJECT * MFUp2 = IPDLp1;
      while (MFUp1 > Rsp)
	{
	  (* (--MFUp2)) = (* (--MFUp1));
	}
      Rsp = MFUp2;
    }
  }
  goto loop_31;

DEFLABEL (label_62)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_24]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_6]), 3);

DEFLABEL (label_44)
  (Wrd44.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd44.Obj));
  goto label_61;

DEFLABEL (label_64)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_22]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_6]), 3);

DEFLABEL (label_43)
  (Wrd40.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd40.Obj));
  goto label_63;

DEFLABEL (label_66)
  (Wrd181.Obj) = (Rsp [2]);
  (Wrd183.Obj) = (current_block [OBJECT_27_7]);
  (Wrd180.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd180.Obj);
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd186.Obj);
  (* (--Rsp)) = (Wrd183.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd181.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_6]), 3);

DEFLABEL (label_40)
  (Wrd177.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd177.Obj));
  goto label_65;

DEFLABEL (label_68)
  (Wrd208.Obj) = (Rsp [2]);
  (Wrd209.Obj) = (Rsp [3]);
  (Wrd210.Obj) = (current_block [OBJECT_27_5]);
  (Wrd207.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd207.Obj);
  (Wrd213.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd213.Obj);
  (* (--Rsp)) = (Wrd210.Obj);
  (* (--Rsp)) = (Wrd209.Obj);
  (* (--Rsp)) = (Wrd208.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_6]), 3);

DEFLABEL (label_41)
  (Wrd204.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd204.Obj));
  goto label_67;

DEFLABEL (label_70)
  (Wrd141.Obj) = (Rsp [3]);
  (Wrd142.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd140.Obj) = ((Wrd142.pObj) [1]);
  (Wrd143.Obj) = (Rsp [0]);
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd139.Obj);
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 2);

DEFLABEL (label_39)
  (Wrd136.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd136.Obj));
  (* (--Rsp)) = Rvl;
  goto label_69;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 14
#define DEBUGGING_LABEL_28_2 13
#define EXECUTE_CACHE_28_7 7
#define EXECUTE_CACHE_28_6 9
#define FREE_REFERENCE_28_0 12
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto handle_objects_0;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_objects_4)
DEFLABEL (handle_objects_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_6 5
#define LABEL_29_7 7
#define LABEL_29_5 9
#define LABEL_29_9 11
#define LABEL_29_10 13
#define LABEL_29_11 15
#define LABEL_29_13 17
#define LABEL_29_15 19
#define LABEL_29_12 21
#define LABEL_29_18 23
#define LABEL_29_19 25
#define LABEL_29_17 27
#define LABEL_29_20 29
#define LABEL_29_21 31
#define LABEL_29_23 33
#define LABEL_29_25 35
#define TAG_29_26 16
#define ENVIRONMENT_LABEL_29_3 53
#define DEBUGGING_LABEL_29_2 52
#define OBJECT_29_2 51
#define OBJECT_29_1 50
#define OBJECT_29_0 49
#define EXECUTE_CACHE_29_24 37
#define EXECUTE_CACHE_29_22 39
#define EXECUTE_CACHE_29_16 41
#define EXECUTE_CACHE_29_14 43
#define EXECUTE_CACHE_29_8 45
#define FREE_REFERENCE_29_0 48
#define FREE_REFERENCES_LABEL_29_0 36
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd7;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_29_4);
      goto handle_objects_stackify_22;

    case 1:
      current_block = (Rpc - LABEL_29_6);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_29_9);
      goto iter_20;

    case 5:
      current_block = (Rpc - LABEL_29_10);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_29_11);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_29_13);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_29_15);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_29_12);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_29_18);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_29_19);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_29_17);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_29_20);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_29_21);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_29_23);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_29_25);
      goto lambda_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_objects_stackify_32)
DEFLABEL (handle_objects_stackify_22)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_38;
  Wrd10 = Wrd14;

DEFLABEL (label_37)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_36;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [3]) = (Wrd6.Obj);
  goto iter_20;

DEFLABEL (label_36)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_6])), (Wrd11.pObj));

DEFLABEL (label_24)
  (Wrd10.Obj) = Rvl;
  goto label_37;

DEFLABEL (iter_33)
DEFLABEL (iter_20)
  INTERRUPT_CHECK (26, LABEL_29_9);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_39;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_29_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_29_17);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_29_20);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_29_21);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_23]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_29_23);
  (Rsp [5]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_25])));
  Rhp += 6;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd19 = Wrd8;
  ((Wrd19.pObj) [2]) = Rvl;
  (Wrd18.Obj) = (Rsp [4]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [4]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [5]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [6]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [7]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_39)
  if (! ((Wrd6.uLng) == 1))
    goto label_49;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_48)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_47;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_46)
  (Rsp [2]) = (Wrd19.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_12]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_45;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_14]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_29_12);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_43;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_42)
  (Wrd22.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Rsp [4]) = (Wrd19.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_41;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd32.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_41;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));

DEFLABEL (label_40)
  (Rsp [1]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  goto iter_20;

DEFLABEL (label_41)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_19]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_30)
  (Wrd27.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_29)
  (Wrd10.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_27)
  (Wrd19.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_29_25);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = ((Wrd6.pObj) [7]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [8]) = (Wrd22.Obj);
  (Rsp [7]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 9);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_7 5
#define TAG_30_8 1
#define LABEL_30_11 7
#define LABEL_30_12 9
#define LABEL_30_5 11
#define TAG_30_6 4
#define LABEL_30_14 13
#define LABEL_30_15 15
#define LABEL_30_16 17
#define LABEL_30_17 19
#define LABEL_30_18 21
#define LABEL_30_19 23
#define LABEL_30_20 25
#define LABEL_30_21 27
#define LABEL_30_22 29
#define LABEL_30_10 31
#define LABEL_30_23 33
#define LABEL_30_24 35
#define LABEL_30_25 37
#define LABEL_30_27 39
#define LABEL_30_29 41
#define TAG_30_30 19
#define LABEL_30_34 43
#define LABEL_30_31 45
#define LABEL_30_32 47
#define LABEL_30_26 49
#define LABEL_30_38 51
#define LABEL_30_33 53
#define LABEL_30_42 55
#define LABEL_30_43 57
#define LABEL_30_36 59
#define LABEL_30_37 61
#define LABEL_30_45 63
#define LABEL_30_46 65
#define LABEL_30_40 67
#define LABEL_30_49 69
#define LABEL_30_50 71
#define LABEL_30_41 73
#define LABEL_30_47 75
#define LABEL_30_54 77
#define LABEL_30_55 79
#define LABEL_30_48 81
#define LABEL_30_52 83
#define LABEL_30_56 85
#define LABEL_30_53 87
#define LABEL_30_57 89
#define LABEL_30_58 91
#define TAG_30_59 44
#define ENVIRONMENT_LABEL_30_3 126
#define DEBUGGING_LABEL_30_2 125
#define OBJECT_30_4 124
#define OBJECT_30_3 123
#define OBJECT_30_2 122
#define OBJECT_30_1 121
#define OBJECT_30_0 120
#define EXECUTE_CACHE_30_51 93
#define EXECUTE_CACHE_30_44 95
#define EXECUTE_CACHE_30_39 97
#define EXECUTE_CACHE_30_35 99
#define EXECUTE_CACHE_30_28 101
#define EXECUTE_CACHE_30_13 103
#define EXECUTE_CACHE_30_9 105
#define FREE_REFERENCE_30_7 108
#define FREE_REFERENCE_30_6 109
#define FREE_REFERENCE_30_5 110
#define FREE_REFERENCE_30_4 111
#define FREE_REFERENCE_30_3 112
#define FREE_REFERENCE_30_2 113
#define FREE_REFERENCE_30_1 114
#define FREE_REFERENCE_30_0 115
#define FREE_ASSIGNMENT_30_2 117
#define FREE_ASSIGNMENT_30_1 118
#define FREE_ASSIGNMENT_30_0 119
#define FREE_REFERENCES_LABEL_30_0 92
#define NUMBER_OF_LINKER_SECTIONS_30_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd31;
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
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_30_4);
      goto handle_objects_traditional_53;

    case 1:
      current_block = (Rpc - LABEL_30_7);
      goto lambda_83;

    case 2:
      current_block = (Rpc - LABEL_30_11);
      goto label_55;

    case 3:
      current_block = (Rpc - LABEL_30_12);
      goto label_56;

    case 4:
      current_block = (Rpc - LABEL_30_5);
      goto swapB_82;

    case 5:
      current_block = (Rpc - LABEL_30_14);
      goto label_57;

    case 6:
      current_block = (Rpc - LABEL_30_15);
      goto label_58;

    case 7:
      current_block = (Rpc - LABEL_30_16);
      goto label_59;

    case 8:
      current_block = (Rpc - LABEL_30_17);
      goto label_60;

    case 9:
      current_block = (Rpc - LABEL_30_18);
      goto label_61;

    case 10:
      current_block = (Rpc - LABEL_30_19);
      goto label_62;

    case 11:
      current_block = (Rpc - LABEL_30_20);
      goto label_63;

    case 12:
      current_block = (Rpc - LABEL_30_21);
      goto label_64;

    case 13:
      current_block = (Rpc - LABEL_30_22);
      goto label_65;

    case 14:
      current_block = (Rpc - LABEL_30_10);
      goto continuation_1;

    case 15:
      current_block = (Rpc - LABEL_30_23);
      goto iter_30;

    case 16:
      current_block = (Rpc - LABEL_30_24);
      goto label_66;

    case 17:
      current_block = (Rpc - LABEL_30_25);
      goto label_67;

    case 18:
      current_block = (Rpc - LABEL_30_27);
      goto label_68;

    case 19:
      current_block = (Rpc - LABEL_30_29);
      goto lambda_85;

    case 20:
      current_block = (Rpc - LABEL_30_34);
      goto label_69;

    case 21:
      current_block = (Rpc - LABEL_30_31);
      goto continuation_17;

    case 22:
      current_block = (Rpc - LABEL_30_32);
      goto continuation_16;

    case 23:
      current_block = (Rpc - LABEL_30_26);
      goto continuation_22;

    case 24:
      current_block = (Rpc - LABEL_30_38);
      goto label_70;

    case 25:
      current_block = (Rpc - LABEL_30_33);
      goto continuation_10;

    case 26:
      current_block = (Rpc - LABEL_30_42);
      goto label_71;

    case 27:
      current_block = (Rpc - LABEL_30_43);
      goto label_72;

    case 28:
      current_block = (Rpc - LABEL_30_36);
      goto continuation_15;

    case 29:
      current_block = (Rpc - LABEL_30_37);
      goto continuation_25;

    case 30:
      current_block = (Rpc - LABEL_30_45);
      goto label_73;

    case 31:
      current_block = (Rpc - LABEL_30_46);
      goto label_74;

    case 32:
      current_block = (Rpc - LABEL_30_40);
      goto continuation_9;

    case 33:
      current_block = (Rpc - LABEL_30_49);
      goto label_75;

    case 34:
      current_block = (Rpc - LABEL_30_50);
      goto label_76;

    case 35:
      current_block = (Rpc - LABEL_30_41);
      goto continuation_8;

    case 36:
      current_block = (Rpc - LABEL_30_47);
      goto continuation_7;

    case 37:
      current_block = (Rpc - LABEL_30_54);
      goto label_77;

    case 38:
      current_block = (Rpc - LABEL_30_55);
      goto label_78;

    case 39:
      current_block = (Rpc - LABEL_30_48);
      goto continuation_6;

    case 40:
      current_block = (Rpc - LABEL_30_52);
      goto continuation_5;

    case 41:
      current_block = (Rpc - LABEL_30_56);
      goto label_79;

    case 42:
      current_block = (Rpc - LABEL_30_53);
      goto continuation_4;

    case 43:
      current_block = (Rpc - LABEL_30_57);
      goto continuation_11;

    case 44:
      current_block = (Rpc - LABEL_30_58);
      goto lambda_86;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_objects_traditional_81)
DEFLABEL (handle_objects_traditional_53)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd8.Obj) = (current_block [OBJECT_30_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_30_1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_5])));
  Rhp += 3;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  Wrd32 = Wrd34;
  ((Wrd32.pObj) [2]) = (Wrd7.Obj);
  ((Wrd32.pObj) [3]) = (Wrd11.Obj);
  ((Wrd32.pObj) [4]) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_7])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd21 = Wrd20;
  (Wrd22.Obj) = (Rsp [4]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Rsp [4]) = (Wrd35.Obj);
  (Rsp [3]) = (Wrd19.Obj);
  (Rsp [2]) = (Wrd35.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (lambda_83)
  CLOSURE_HEADER (LABEL_30_7);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_90;
  Wrd11 = Wrd15;

DEFLABEL (label_89)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_88;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_87)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30_1]);
  (Rsp [4]) = (Wrd8.Obj);
  goto iter_30;

DEFLABEL (label_88)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_11])), (Wrd12.pObj));

DEFLABEL (label_55)
  (Wrd11.Obj) = Rvl;
  goto label_89;

DEFLABEL (swapB_82)
  CLOSURE_HEADER (LABEL_30_5);

DEFLABEL (swapB_51)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_117;

DEFLABEL (label_116)
  Wrd5 = Wrd9;

DEFLABEL (label_115)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_30_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_114;

DEFLABEL (label_113)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_112)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_30_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_111;

DEFLABEL (label_110)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_109)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_2]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_108;

DEFLABEL (label_107)
  Wrd57 = Wrd61;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_30_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_105;

DEFLABEL (label_104)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_103)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [3]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_30_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_102;

DEFLABEL (label_101)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_100)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_3]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_99;

DEFLABEL (label_98)
  Wrd109 = Wrd113;

DEFLABEL (label_97)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_30_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_96;

DEFLABEL (label_95)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_94)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [2]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_30_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_93;

DEFLABEL (label_92)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_91)
  Rvl = (current_block [OBJECT_30_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_93)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_92;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_30_22])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_65)
  goto label_91;

DEFLABEL (label_96)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_95;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_30_21])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_64)
  goto label_94;

DEFLABEL (label_99)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_98;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_30_20])), (Wrd110.pObj));

DEFLABEL (label_63)
  (Wrd109.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_102)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_101;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_30_19])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_62)
  goto label_100;

DEFLABEL (label_105)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_104;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_30_18])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_61)
  goto label_103;

DEFLABEL (label_108)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_107;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_30_17])), (Wrd58.pObj));

DEFLABEL (label_60)
  (Wrd57.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_111)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_110;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_30_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_59)
  goto label_109;

DEFLABEL (label_114)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_113;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_30_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_58)
  goto label_112;

DEFLABEL (label_117)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_116;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_30_14])), (Wrd6.pObj));

DEFLABEL (label_57)
  (Wrd5.Obj) = Rvl;
  goto label_115;

DEFLABEL (iter_84)
DEFLABEL (iter_30)
  INTERRUPT_CHECK (26, LABEL_30_23);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_118;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_29])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_31]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_32]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_13]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_30_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_30_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_44]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_30_31);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_118)
  if (! ((Wrd6.uLng) == 1))
    goto label_130;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_129)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_128;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_127)
  (Rsp [2]) = (Wrd29.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_26]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_126;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_125)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_28]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_30_26);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_37]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_124;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_123)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_39]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_30_37);
  (Wrd9.Obj) = (Rsp [4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_122;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_121)
  (Wrd22.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Rsp [5]) = (Wrd19.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_120;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd32.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_120;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));

DEFLABEL (label_119)
  (Rsp [1]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  goto iter_30;

DEFLABEL (label_120)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_46]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_74)
  (Wrd27.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_45]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 1);

DEFLABEL (label_73)
  (Wrd10.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_38]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_27]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_25]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_67)
  (Wrd29.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_24]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 1);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (lambda_85)
  CLOSURE_HEADER (LABEL_30_29);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_4]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_146;
  Wrd9 = Wrd13;

DEFLABEL (label_145)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_35]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_30_33);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_144;
  Wrd11 = Wrd15;

DEFLABEL (label_143)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_5]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_142;
  Wrd17 = Wrd21;

DEFLABEL (label_141)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_35]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_41);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_51]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_30_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_140;
  Wrd11 = Wrd15;

DEFLABEL (label_139)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_6]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_138;
  Wrd17 = Wrd21;

DEFLABEL (label_137)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_35]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_30_48);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_51]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_30_47);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_53]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_136;
  Wrd11 = Wrd15;

DEFLABEL (label_135)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_7]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_134;
  Wrd17 = Wrd21;

DEFLABEL (label_133)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_35]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_53);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_51]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_132;
  Wrd9 = Wrd13;

DEFLABEL (label_131)
  (Rsp [6]) = (Wrd9.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_57]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_51]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_30_57);
  (Rsp [5]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_59);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_58])));
  Rhp += 8;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd23 = Wrd8;
  (Wrd24.Obj) = (Rsp [7]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  ((Wrd23.pObj) [4]) = Rvl;
  (Wrd18.Obj) = (Rsp [4]);
  ((Wrd23.pObj) [5]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd23.pObj) [6]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [7]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [8]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd23.pObj) [9]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_56])), (Wrd10.pObj));

DEFLABEL (label_79)
  (Wrd9.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_55])), (Wrd18.pObj));

DEFLABEL (label_78)
  (Wrd17.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_54])), (Wrd12.pObj));

DEFLABEL (label_77)
  (Wrd11.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_50])), (Wrd18.pObj));

DEFLABEL (label_76)
  (Wrd17.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_49])), (Wrd12.pObj));

DEFLABEL (label_75)
  (Wrd11.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_43])), (Wrd18.pObj));

DEFLABEL (label_72)
  (Wrd17.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_42])), (Wrd12.pObj));

DEFLABEL (label_71)
  (Wrd11.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_34])), (Wrd10.pObj));

DEFLABEL (label_69)
  (Wrd9.Obj) = Rvl;
  goto label_145;

DEFLABEL (lambda_86)
  CLOSURE_HEADER (LABEL_30_58);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd6.pObj) [8]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd6.pObj) [9]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [8]) = (Wrd24.Obj);
  (Wrd27.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [7]) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 9);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_7 5
#define TAG_31_8 1
#define LABEL_31_5 7
#define TAG_31_6 2
#define LABEL_31_12 9
#define LABEL_31_13 11
#define LABEL_31_14 13
#define LABEL_31_15 15
#define LABEL_31_16 17
#define LABEL_31_17 19
#define LABEL_31_10 21
#define LABEL_31_18 23
#define LABEL_31_19 25
#define LABEL_31_20 27
#define TAG_31_21 12
#define ENVIRONMENT_LABEL_31_3 44
#define DEBUGGING_LABEL_31_2 43
#define OBJECT_31_3 42
#define OBJECT_31_2 41
#define OBJECT_31_1 40
#define OBJECT_31_0 39
#define EXECUTE_CACHE_31_11 29
#define EXECUTE_CACHE_31_9 31
#define FREE_REFERENCE_31_1 34
#define FREE_REFERENCE_31_0 35
#define FREE_ASSIGNMENT_31_1 37
#define FREE_ASSIGNMENT_31_0 38
#define FREE_REFERENCES_LABEL_31_0 28
#define NUMBER_OF_LINKER_SECTIONS_31_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
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
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_31_4);
      goto handle_top_level_data_traditional_21;

    case 1:
      current_block = (Rpc - LABEL_31_7);
      goto lambda_33;

    case 2:
      current_block = (Rpc - LABEL_31_5);
      goto swapB_32;

    case 3:
      current_block = (Rpc - LABEL_31_12);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_31_13);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_31_14);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_31_15);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_31_16);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_31_17);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_31_10);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_31_18);
      goto lambda_2;

    case 11:
      current_block = (Rpc - LABEL_31_19);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_31_20);
      goto lambda_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_top_level_data_traditional_31)
DEFLABEL (handle_top_level_data_traditional_21)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd8.Obj) = (current_block [OBJECT_31_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_31_1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_5])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  Wrd25 = Wrd27;
  ((Wrd25.pObj) [2]) = (Wrd7.Obj);
  ((Wrd25.pObj) [3]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_7])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Rsp [3]) = (Wrd28.Obj);
  (Rsp [2]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_31_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (Wrd14.Obj) = (current_block [OBJECT_31_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_31_2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_31_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_18]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (swapB_32)
  CLOSURE_HEADER (LABEL_31_5);

DEFLABEL (swapB_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  Wrd5 = Wrd9;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_48)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_45)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  Wrd57 = Wrd61;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_39)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_36)
  Rvl = (current_block [OBJECT_31_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_17])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_28)
  goto label_36;

DEFLABEL (label_41)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_16])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_27)
  goto label_39;

DEFLABEL (label_44)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_31_15])), (Wrd58.pObj));

DEFLABEL (label_26)
  (Wrd57.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_47)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_46;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_25)
  goto label_45;

DEFLABEL (label_50)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_24)
  goto label_48;

DEFLABEL (label_53)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_52;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_31_12])), (Wrd6.pObj));

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_51;

DEFLABEL (lambda_34)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_31_18);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_55;
  Wrd5 = Wrd9;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_20])));
  Rhp += 3;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd18 = Wrd13;
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  ((Wrd18.pObj) [4]) = (Wrd5.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_19])), (Wrd6.pObj));

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_54;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_31_20);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_6 5
#define LABEL_32_5 7
#define LABEL_32_9 9
#define LABEL_32_10 11
#define LABEL_32_11 13
#define LABEL_32_12 15
#define LABEL_32_13 17
#define LABEL_32_7 19
#define TAG_32_8 8
#define LABEL_32_19 21
#define LABEL_32_20 23
#define LABEL_32_14 25
#define TAG_32_15 11
#define LABEL_32_21 27
#define LABEL_32_24 29
#define LABEL_32_25 31
#define LABEL_32_26 33
#define LABEL_32_27 35
#define LABEL_32_28 37
#define LABEL_32_29 39
#define LABEL_32_30 41
#define LABEL_32_31 43
#define LABEL_32_32 45
#define LABEL_32_33 47
#define LABEL_32_34 49
#define LABEL_32_35 51
#define LABEL_32_36 53
#define LABEL_32_37 55
#define LABEL_32_38 57
#define LABEL_32_39 59
#define LABEL_32_40 61
#define LABEL_32_16 63
#define TAG_32_17 30
#define LABEL_32_46 65
#define LABEL_32_47 67
#define LABEL_32_18 69
#define LABEL_32_48 71
#define LABEL_32_49 73
#define LABEL_32_50 75
#define LABEL_32_41 77
#define LABEL_32_53 79
#define LABEL_32_22 81
#define LABEL_32_43 83
#define TAG_32_44 40
#define LABEL_32_64 85
#define LABEL_32_45 87
#define LABEL_32_51 89
#define TAG_32_52 43
#define LABEL_32_65 91
#define LABEL_32_66 93
#define LABEL_32_67 95
#define LABEL_32_58 97
#define LABEL_32_70 99
#define LABEL_32_54 101
#define LABEL_32_72 103
#define LABEL_32_55 105
#define LABEL_32_56 107
#define LABEL_32_60 109
#define LABEL_32_61 111
#define TAG_32_62 54
#define LABEL_32_78 113
#define LABEL_32_79 115
#define LABEL_32_80 117
#define LABEL_32_84 119
#define LABEL_32_85 121
#define LABEL_32_63 123
#define LABEL_32_69 125
#define LABEL_32_68 127
#define LABEL_32_87 129
#define LABEL_32_89 131
#define LABEL_32_90 133
#define LABEL_32_92 135
#define LABEL_32_93 137
#define LABEL_32_73 139
#define LABEL_32_96 141
#define LABEL_32_74 143
#define LABEL_32_75 145
#define LABEL_32_77 147
#define LABEL_32_103 149
#define LABEL_32_104 151
#define LABEL_32_105 153
#define LABEL_32_81 155
#define LABEL_32_82 157
#define LABEL_32_83 159
#define LABEL_32_114 161
#define LABEL_32_115 163
#define LABEL_32_86 165
#define LABEL_32_117 167
#define LABEL_32_118 169
#define LABEL_32_88 171
#define LABEL_32_91 173
#define LABEL_32_119 175
#define LABEL_32_120 177
#define LABEL_32_97 179
#define LABEL_32_101 181
#define TAG_32_102 89
#define LABEL_32_106 183
#define LABEL_32_110 185
#define LABEL_32_123 187
#define LABEL_32_124 189
#define LABEL_32_125 191
#define LABEL_32_126 193
#define LABEL_32_113 195
#define LABEL_32_116 197
#define LABEL_32_121 199
#define LABEL_32_122 201
#define LABEL_32_127 203
#define TAG_32_128 100
#define LABEL_32_130 205
#define TAG_32_131 101
#define LABEL_32_132 207
#define LABEL_32_133 209
#define LABEL_32_135 211
#define ENVIRONMENT_LABEL_32_3 277
#define DEBUGGING_LABEL_32_2 276
#define OBJECT_32_19 275
#define OBJECT_32_18 274
#define OBJECT_32_17 273
#define OBJECT_32_16 272
#define OBJECT_32_15 271
#define OBJECT_32_14 270
#define OBJECT_32_13 269
#define OBJECT_32_12 268
#define OBJECT_32_11 267
#define OBJECT_32_10 266
#define OBJECT_32_9 265
#define OBJECT_32_8 264
#define OBJECT_32_7 263
#define OBJECT_32_6 262
#define OBJECT_32_5 261
#define OBJECT_32_4 260
#define OBJECT_32_3 259
#define OBJECT_32_2 258
#define OBJECT_32_1 257
#define OBJECT_32_0 256
#define EXECUTE_CACHE_32_134 213
#define EXECUTE_CACHE_32_129 215
#define EXECUTE_CACHE_32_112 217
#define EXECUTE_CACHE_32_111 219
#define EXECUTE_CACHE_32_109 221
#define EXECUTE_CACHE_32_108 223
#define EXECUTE_CACHE_32_107 225
#define EXECUTE_CACHE_32_100 227
#define EXECUTE_CACHE_32_99 229
#define EXECUTE_CACHE_32_98 231
#define EXECUTE_CACHE_32_95 233
#define EXECUTE_CACHE_32_94 235
#define EXECUTE_CACHE_32_76 237
#define EXECUTE_CACHE_32_71 239
#define EXECUTE_CACHE_32_59 241
#define EXECUTE_CACHE_32_57 243
#define EXECUTE_CACHE_32_42 245
#define EXECUTE_CACHE_32_23 247
#define FREE_REFERENCE_32_5 250
#define FREE_REFERENCE_32_4 251
#define FREE_REFERENCE_32_3 252
#define FREE_REFERENCE_32_2 253
#define FREE_REFERENCE_32_1 254
#define FREE_REFERENCE_32_0 255
#define FREE_REFERENCES_LABEL_32_0 212
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd38;
  machine_word Wrd12;
  machine_word Wrd47;
  machine_word Wrd25;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd144;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd132;
  machine_word Wrd133;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd123;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd122;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd109;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd160;
  machine_word Wrd152;
  machine_word Wrd154;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_32_4);
      goto handle_free_refs_and_sets_132;

    case 1:
      current_block = (Rpc - LABEL_32_6);
      goto label_134;

    case 2:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_30;

    case 3:
      current_block = (Rpc - LABEL_32_9);
      goto process_links_84;

    case 4:
      current_block = (Rpc - LABEL_32_10);
      goto label_135;

    case 5:
      current_block = (Rpc - LABEL_32_11);
      goto label_136;

    case 6:
      current_block = (Rpc - LABEL_32_12);
      goto label_137;

    case 7:
      current_block = (Rpc - LABEL_32_13);
      goto label_138;

    case 8:
      current_block = (Rpc - LABEL_32_7);
      goto lambda_191;

    case 9:
      current_block = (Rpc - LABEL_32_19);
      goto label_139;

    case 10:
      current_block = (Rpc - LABEL_32_20);
      goto label_140;

    case 11:
      current_block = (Rpc - LABEL_32_14);
      goto lambda_193;

    case 12:
      current_block = (Rpc - LABEL_32_21);
      goto process_82;

    case 13:
      current_block = (Rpc - LABEL_32_24);
      goto label_141;

    case 14:
      current_block = (Rpc - LABEL_32_25);
      goto label_142;

    case 15:
      current_block = (Rpc - LABEL_32_26);
      goto label_157;

    case 16:
      current_block = (Rpc - LABEL_32_27);
      goto label_143;

    case 17:
      current_block = (Rpc - LABEL_32_28);
      goto label_144;

    case 18:
      current_block = (Rpc - LABEL_32_29);
      goto label_145;

    case 19:
      current_block = (Rpc - LABEL_32_30);
      goto label_146;

    case 20:
      current_block = (Rpc - LABEL_32_31);
      goto label_147;

    case 21:
      current_block = (Rpc - LABEL_32_32);
      goto label_148;

    case 22:
      current_block = (Rpc - LABEL_32_33);
      goto label_149;

    case 23:
      current_block = (Rpc - LABEL_32_34);
      goto label_150;

    case 24:
      current_block = (Rpc - LABEL_32_35);
      goto label_151;

    case 25:
      current_block = (Rpc - LABEL_32_36);
      goto label_152;

    case 26:
      current_block = (Rpc - LABEL_32_37);
      goto label_153;

    case 27:
      current_block = (Rpc - LABEL_32_38);
      goto label_154;

    case 28:
      current_block = (Rpc - LABEL_32_39);
      goto label_155;

    case 29:
      current_block = (Rpc - LABEL_32_40);
      goto label_156;

    case 30:
      current_block = (Rpc - LABEL_32_16);
      goto lambda_194;

    case 31:
      current_block = (Rpc - LABEL_32_46);
      goto label_158;

    case 32:
      current_block = (Rpc - LABEL_32_47);
      goto label_159;

    case 33:
      current_block = (Rpc - LABEL_32_18);
      goto continuation_28;

    case 34:
      current_block = (Rpc - LABEL_32_48);
      goto process_table_115;

    case 35:
      current_block = (Rpc - LABEL_32_49);
      goto label_160;

    case 36:
      current_block = (Rpc - LABEL_32_50);
      goto label_161;

    case 37:
      current_block = (Rpc - LABEL_32_41);
      goto continuation_61;

    case 38:
      current_block = (Rpc - LABEL_32_53);
      goto label_162;

    case 39:
      current_block = (Rpc - LABEL_32_22);
      goto continuation_76;

    case 40:
      current_block = (Rpc - LABEL_32_43);
      goto lambda_196;

    case 41:
      current_block = (Rpc - LABEL_32_64);
      goto label_163;

    case 42:
      current_block = (Rpc - LABEL_32_45);
      goto continuation_25;

    case 43:
      current_block = (Rpc - LABEL_32_51);
      goto lambda_198;

    case 44:
      current_block = (Rpc - LABEL_32_65);
      goto iter_114;

    case 45:
      current_block = (Rpc - LABEL_32_66);
      goto label_164;

    case 46:
      current_block = (Rpc - LABEL_32_67);
      goto label_165;

    case 47:
      current_block = (Rpc - LABEL_32_58);
      goto continuation_71;

    case 48:
      current_block = (Rpc - LABEL_32_70);
      goto continuation_70;

    case 49:
      current_block = (Rpc - LABEL_32_54);
      goto continuation_69;

    case 50:
      current_block = (Rpc - LABEL_32_72);
      goto label_166;

    case 51:
      current_block = (Rpc - LABEL_32_55);
      goto continuation_68;

    case 52:
      current_block = (Rpc - LABEL_32_56);
      goto continuation_67;

    case 53:
      current_block = (Rpc - LABEL_32_60);
      goto continuation_78;

    case 54:
      current_block = (Rpc - LABEL_32_61);
      goto lambda_199;

    case 55:
      current_block = (Rpc - LABEL_32_78);
      goto label_167;

    case 56:
      current_block = (Rpc - LABEL_32_79);
      goto label_168;

    case 57:
      current_block = (Rpc - LABEL_32_80);
      goto label_169;

    case 58:
      current_block = (Rpc - LABEL_32_84);
      goto label_170;

    case 59:
      current_block = (Rpc - LABEL_32_85);
      goto label_171;

    case 60:
      current_block = (Rpc - LABEL_32_63);
      goto continuation_22;

    case 61:
      current_block = (Rpc - LABEL_32_69);
      goto continuation_92;

    case 62:
      current_block = (Rpc - LABEL_32_68);
      goto continuation_104;

    case 63:
      current_block = (Rpc - LABEL_32_87);
      goto label_172;

    case 64:
      current_block = (Rpc - LABEL_32_89);
      goto label_175;

    case 65:
      current_block = (Rpc - LABEL_32_90);
      goto label_176;

    case 66:
      current_block = (Rpc - LABEL_32_92);
      goto label_173;

    case 67:
      current_block = (Rpc - LABEL_32_93);
      goto label_174;

    case 68:
      current_block = (Rpc - LABEL_32_73);
      goto continuation_64;

    case 69:
      current_block = (Rpc - LABEL_32_96);
      goto insert_symbol_131;

    case 70:
      current_block = (Rpc - LABEL_32_74);
      goto continuation_66;

    case 71:
      current_block = (Rpc - LABEL_32_75);
      goto continuation_65;

    case 72:
      current_block = (Rpc - LABEL_32_77);
      goto continuation_77;

    case 73:
      current_block = (Rpc - LABEL_32_103);
      goto continuation_117;

    case 74:
      current_block = (Rpc - LABEL_32_104);
      goto make_linkage_section_header_124;

    case 75:
      current_block = (Rpc - LABEL_32_105);
      goto label_177;

    case 76:
      current_block = (Rpc - LABEL_32_81);
      goto continuation_10;

    case 77:
      current_block = (Rpc - LABEL_32_82);
      goto continuation_9;

    case 78:
      current_block = (Rpc - LABEL_32_83);
      goto continuation_6;

    case 79:
      current_block = (Rpc - LABEL_32_114);
      goto label_178;

    case 80:
      current_block = (Rpc - LABEL_32_115);
      goto label_179;

    case 81:
      current_block = (Rpc - LABEL_32_86);
      goto continuation_96;

    case 82:
      current_block = (Rpc - LABEL_32_117);
      goto label_180;

    case 83:
      current_block = (Rpc - LABEL_32_118);
      goto label_181;

    case 84:
      current_block = (Rpc - LABEL_32_88);
      goto continuation_109;

    case 85:
      current_block = (Rpc - LABEL_32_91);
      goto continuation_112;

    case 86:
      current_block = (Rpc - LABEL_32_119);
      goto label_182;

    case 87:
      current_block = (Rpc - LABEL_32_120);
      goto label_183;

    case 88:
      current_block = (Rpc - LABEL_32_97);
      goto continuation_125;

    case 89:
      current_block = (Rpc - LABEL_32_101);
      goto lambda_202;

    case 90:
      current_block = (Rpc - LABEL_32_106);
      goto continuation_123;

    case 91:
      current_block = (Rpc - LABEL_32_110);
      goto continuation_11;

    case 92:
      current_block = (Rpc - LABEL_32_123);
      goto label_184;

    case 93:
      current_block = (Rpc - LABEL_32_124);
      goto label_185;

    case 94:
      current_block = (Rpc - LABEL_32_125);
      goto label_186;

    case 95:
      current_block = (Rpc - LABEL_32_126);
      goto label_187;

    case 96:
      current_block = (Rpc - LABEL_32_113);
      goto continuation_4;

    case 97:
      current_block = (Rpc - LABEL_32_116);
      goto continuation_95;

    case 98:
      current_block = (Rpc - LABEL_32_121);
      goto continuation_126;

    case 99:
      current_block = (Rpc - LABEL_32_122);
      goto continuation_116;

    case 100:
      current_block = (Rpc - LABEL_32_127);
      goto lambda_204;

    case 101:
      current_block = (Rpc - LABEL_32_130);
      goto lambda_205;

    case 102:
      current_block = (Rpc - LABEL_32_132);
      goto continuation_129;

    case 103:
      current_block = (Rpc - LABEL_32_133);
      goto continuation_128;

    case 104:
      current_block = (Rpc - LABEL_32_135);
      goto label_188;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_free_refs_and_sets_190)
DEFLABEL (handle_free_refs_and_sets_132)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_207;
  Wrd9 = Wrd13;

DEFLABEL (label_206)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto process_links_84;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  goto pop_return;

DEFLABEL (label_207)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_6])), (Wrd10.pObj));

DEFLABEL (label_134)
  (Wrd9.Obj) = Rvl;
  goto label_206;

DEFLABEL (process_links_192)
DEFLABEL (process_links_84)
  INTERRUPT_CHECK (26, LABEL_32_9);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_217;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_216)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_208;
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_14])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd19 = Wrd18;
  (Wrd20.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  Rvl = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_208)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_215;
  Wrd22 = Wrd26;

DEFLABEL (label_214)
  if ((Wrd22.Obj) == ((SCHEME_OBJECT) 0))
    goto label_213;

DEFLABEL (label_213)
  (Wrd29.Obj) = (current_block [OBJECT_32_2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_212;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd39.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd37.Lng)))
    goto label_212;
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_211)
  (Wrd44.Obj) = (Rsp [4]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_210;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_209)
  (Wrd50.Obj) = (current_block [OBJECT_32_3]);
  (* (--Rsp)) = (Wrd50.Obj);
  goto process_82;

DEFLABEL (label_210)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_138)
  (* (--Rsp)) = Rvl;
  goto label_209;

DEFLABEL (label_212)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_137)
  (* (--Rsp)) = Rvl;
  goto label_211;

DEFLABEL (label_215)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_11])), (Wrd23.pObj));

DEFLABEL (label_136)
  (Wrd22.Obj) = Rvl;
  goto label_214;

DEFLABEL (label_217)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_135)
  (Wrd5.Obj) = Rvl;
  goto label_216;

DEFLABEL (lambda_191)
  CLOSURE_HEADER (LABEL_32_7);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_16])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_32_4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_221;
  Wrd23 = Wrd27;

DEFLABEL (label_220)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_219;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_218)
  (Wrd36.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd36.Obj);
  goto process_table_115;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_32_18);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_219)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_20]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_140)
  (* (--Rsp)) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_19])), (Wrd24.pObj));

DEFLABEL (label_139)
  (Wrd23.Obj) = Rvl;
  goto label_220;

DEFLABEL (lambda_193)
  CLOSURE_HEADER (LABEL_32_14);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_32_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_2]);
  (Rsp [3]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd10.Obj);
  goto pop_return;

DEFLABEL (process_195)
DEFLABEL (process_82)
  INTERRUPT_CHECK (26, LABEL_32_21);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_32_2])))
    goto label_222;
  (Wrd163.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_22]))));
  (* (--Rsp)) = (Wrd163.Obj);
  (Wrd164.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd164.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_23]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_32_22);
  (Rsp [6]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_60]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_23]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_32_60);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto make_linkage_section_header_124;

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_32_77);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [7]) = (Wrd7.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd10.Obj);
  Rsp = (& (Rsp [5]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_102);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_101])));
  Rhp += 3;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd18 = Wrd13;
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_222)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_263;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_262)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_261;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_260)
  if ((Wrd16.Obj) == (current_block [OBJECT_32_2]))
    goto label_257;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_256;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_255)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_254;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd33.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_253)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_252;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_251)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_250;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_249)
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_248;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [0]);

DEFLABEL (label_247)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_246;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (* (--Rsp)) = (Wrd66.Obj);

DEFLABEL (label_245)
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_244;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd72.Obj) = ((Wrd74.pObj) [1]);

DEFLABEL (label_243)
  (Rsp [2]) = (Wrd72.Obj);
  (Wrd86.Obj) = (Rsp [3]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 26))
    goto label_242;
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  (Wrd88.Lng) = ((Wrd90.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd88.Lng)))
    goto label_242;
  (Wrd85.Obj) = (LONG_TO_FIXNUM (Wrd88.Lng));

DEFLABEL (label_241)
  (Rsp [3]) = (Wrd85.Obj);
  (Wrd94.Obj) = (Rsp [4]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_240;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [1]);
  (* (--Rsp)) = (Wrd93.Obj);

DEFLABEL (label_239)
  (Wrd103.Obj) = (Rsp [5]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 1))
    goto label_238;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd100.Obj) = ((Wrd102.pObj) [0]);

DEFLABEL (label_237)
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd111.uLng) == 1))
    goto label_236;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd109.Obj) = ((Wrd110.pObj) [1]);

DEFLABEL (label_235)
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd118.uLng) == 1))
    goto label_234;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd117.Obj) = ((Wrd116.pObj) [1]);
  (* (--Rsp)) = (Wrd117.Obj);

DEFLABEL (label_233)
  (Wrd126.Obj) = (Rsp [6]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 1))
    goto label_232;
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd123.Obj) = ((Wrd125.pObj) [0]);

DEFLABEL (label_231)
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd134.uLng) == 1))
    goto label_230;
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd132.Obj) = ((Wrd133.pObj) [0]);

DEFLABEL (label_229)
  (Wrd139.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd132.Obj);
  (* (Rhp++)) = (Wrd139.Obj);
  (Wrd142.pObj) = (& (Rhp [-2]));
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd142.pObj)));
  (Wrd143.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd140.Obj);
  (* (Rhp++)) = (Wrd143.Obj);
  (Wrd146.pObj) = (& (Rhp [-2]));
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd146.pObj)));
  (Rsp [4]) = (Wrd144.Obj);
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_41]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (Wrd150.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd150.Obj);
  (Wrd151.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd151.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_42]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_32_41);
  (Wrd9.Obj) = (Rsp [6]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [6]) = (Wrd6.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_228;
  Wrd10 = Wrd14;

DEFLABEL (label_227)
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_226;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_58]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_59]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_32_58);
  (Wrd9.Obj) = (Rsp [7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_70]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_71]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_32_70);
  (Wrd24.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd24.Obj);

DEFLABEL (label_225)
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [7]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_224;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_224;
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));

DEFLABEL (label_223)
  (Rsp [5]) = (Wrd15.Obj);
  Rsp = (& (Rsp [3]));
  goto process_82;

DEFLABEL (label_224)
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.Obj) = (current_block [OBJECT_32_9]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_72]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_166)
  (Wrd15.Obj) = Rvl;
  goto label_223;

DEFLABEL (label_226)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_54]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_55]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_56]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_32_7]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_57]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_32_56);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_75]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_76]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_32_75);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_100]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_32_74);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_99]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_32_55);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto insert_symbol_131;

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_32_73);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_95]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_32_54);
  (Wrd9.Obj) = (Rsp [7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  goto label_225;

DEFLABEL (label_228)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_53])), (Wrd11.pObj));

DEFLABEL (label_162)
  (Wrd10.Obj) = Rvl;
  goto label_227;

DEFLABEL (label_230)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_40]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_156)
  (Wrd132.Obj) = Rvl;
  goto label_229;

DEFLABEL (label_232)
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_39]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_155)
  (Wrd123.Obj) = Rvl;
  goto label_231;

DEFLABEL (label_234)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_38]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_154)
  (* (--Rsp)) = Rvl;
  goto label_233;

DEFLABEL (label_236)
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_37]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_153)
  (Wrd109.Obj) = Rvl;
  goto label_235;

DEFLABEL (label_238)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_36]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_152)
  (Wrd100.Obj) = Rvl;
  goto label_237;

DEFLABEL (label_240)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_35]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_151)
  (* (--Rsp)) = Rvl;
  goto label_239;

DEFLABEL (label_242)
  (Wrd81.Obj) = (Rsp [3]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_34]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_150)
  (Wrd85.Obj) = Rvl;
  goto label_241;

DEFLABEL (label_244)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_33]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_149)
  (Wrd72.Obj) = Rvl;
  goto label_243;

DEFLABEL (label_246)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_32]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_148)
  (* (--Rsp)) = Rvl;
  goto label_245;

DEFLABEL (label_248)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_31]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_147)
  (Wrd56.Obj) = Rvl;
  goto label_247;

DEFLABEL (label_250)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_30]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_146)
  (* (--Rsp)) = Rvl;
  goto label_249;

DEFLABEL (label_252)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_29]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_145)
  (* (--Rsp)) = Rvl;
  goto label_251;

DEFLABEL (label_254)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_28]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_144)
  (Wrd33.Obj) = Rvl;
  goto label_253;

DEFLABEL (label_256)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_27]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_143)
  (Wrd24.Obj) = Rvl;
  goto label_255;

DEFLABEL (label_257)
  (Wrd155.Obj) = (Rsp [1]);
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd155.Obj));
  if (! ((Wrd156.uLng) == 1))
    goto label_259;
  (Wrd154.pObj) = (OBJECT_ADDRESS (Wrd155.Obj));
  (Wrd152.Obj) = ((Wrd154.pObj) [1]);

DEFLABEL (label_258)
  (Rsp [1]) = (Wrd152.Obj);
  goto process_82;

DEFLABEL (label_259)
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_26]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd155.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_157)
  (Wrd152.Obj) = Rvl;
  goto label_258;

DEFLABEL (label_261)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_142)
  (Wrd16.Obj) = Rvl;
  goto label_260;

DEFLABEL (label_263)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_24]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_141)
  (Wrd7.Obj) = Rvl;
  goto label_262;

DEFLABEL (lambda_194)
  CLOSURE_HEADER (LABEL_32_16);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_43])));
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
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd26.pObj) [6]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd26.pObj) [7]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [8]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_45]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_32_6]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_3]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_267;
  Wrd35 = Wrd39;

DEFLABEL (label_266)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_265;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [1]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_264)
  (Wrd48.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd48.Obj);
  goto process_table_115;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_32_45);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_265)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_47]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_159)
  (* (--Rsp)) = Rvl;
  goto label_264;

DEFLABEL (label_267)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_46])), (Wrd36.pObj));

DEFLABEL (label_158)
  (Wrd35.Obj) = Rvl;
  goto label_266;

DEFLABEL (process_table_197)
DEFLABEL (process_table_115)
  INTERRUPT_CHECK (26, LABEL_32_48);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_273;
  Wrd5 = Wrd9;

DEFLABEL (label_272)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_271;

DEFLABEL (label_271)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_268;
  (Wrd14.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_52);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_51])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_268)
  (Wrd21.Obj) = (current_block [OBJECT_32_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_270;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd32.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_270;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_269)
  goto iter_114;

DEFLABEL (label_270)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_50]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_161)
  (* (--Rsp)) = Rvl;
  goto label_269;

DEFLABEL (label_273)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_49])), (Wrd6.pObj));

DEFLABEL (label_160)
  (Wrd5.Obj) = Rvl;
  goto label_272;

DEFLABEL (lambda_196)
  CLOSURE_HEADER (LABEL_32_43);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 13));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_62);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_61])));
  Rhp += 10;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd38 = Wrd7;
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [2]);
  ((Wrd38.pObj) [2]) = (Wrd41.Obj);
  (Wrd37.Obj) = ((Wrd40.pObj) [3]);
  ((Wrd38.pObj) [3]) = (Wrd37.Obj);
  (Wrd33.Obj) = ((Wrd40.pObj) [4]);
  ((Wrd38.pObj) [4]) = (Wrd33.Obj);
  (Wrd29.Obj) = ((Wrd40.pObj) [5]);
  ((Wrd38.pObj) [5]) = (Wrd29.Obj);
  (Wrd25.Obj) = ((Wrd40.pObj) [6]);
  ((Wrd38.pObj) [6]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd40.pObj) [7]);
  ((Wrd38.pObj) [7]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd40.pObj) [8]);
  ((Wrd38.pObj) [8]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd38.pObj) [9]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd38.pObj) [10]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd38.pObj) [11]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_63]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_32_8]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_4]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_275;
  Wrd46 = Wrd50;

DEFLABEL (label_274)
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd52.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd52.Obj);
  goto process_links_84;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_32_63);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_275)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_64])), (Wrd47.pObj));

DEFLABEL (label_163)
  (Wrd46.Obj) = Rvl;
  goto label_274;

DEFLABEL (lambda_198)
  CLOSURE_HEADER (LABEL_32_51);

DEFLABEL (lambda_88)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_32_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32_2]);
  (Rsp [3]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd10.Obj);
  goto pop_return;

DEFLABEL (iter_200)
DEFLABEL (iter_114)
  INTERRUPT_CHECK (26, LABEL_32_65);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_280;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_69]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_23]));

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_32_69);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_86]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_23]));

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_32_86);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_279;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_279;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_278)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_277;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_277;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd26.Lng) = ((Wrd28.Lng) - (Wrd29.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_277;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_276)
  (Wrd31.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd32.Obj);
  goto make_linkage_section_header_124;

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_32_116);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [6]) = (Wrd7.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd10.Obj);
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_131);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_130])));
  Rhp += 3;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd18 = Wrd13;
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_277)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_118]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_181)
  (* (--Rsp)) = Rvl;
  goto label_276;

DEFLABEL (label_279)
  (Wrd8.Obj) = (Rsp [6]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_117]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_180)
  (Wrd12.Obj) = Rvl;
  goto label_278;

DEFLABEL (label_280)
  if (! ((Wrd6.uLng) == 1))
    goto label_300;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_299)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_298;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_297)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_68]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_42]));

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_32_68);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_296;
  Wrd10 = Wrd14;

DEFLABEL (label_295)
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_290;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_91]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_289;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_288)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_287;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_286)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_94]));

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_32_91);

DEFLABEL (label_285)
  (Wrd9.Obj) = (Rsp [4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_284;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd19.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_284;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));

DEFLABEL (label_283)
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_282;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_281)
  (Rsp [2]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  goto iter_114;

DEFLABEL (label_282)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_120]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_183)
  (Wrd20.Obj) = Rvl;
  goto label_281;

DEFLABEL (label_284)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_119]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_182)
  (Wrd14.Obj) = Rvl;
  goto label_283;

DEFLABEL (label_287)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_93]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_174)
  (* (--Rsp)) = Rvl;
  goto label_286;

DEFLABEL (label_289)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_92]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_173)
  (Wrd20.Obj) = Rvl;
  goto label_288;

DEFLABEL (label_290)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_88]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_294;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [0]);

DEFLABEL (label_293)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_292;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_291)
  (Wrd55.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd55.Obj);
  goto insert_symbol_131;

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_32_88);
  goto label_285;

DEFLABEL (label_292)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_90]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_176)
  (* (--Rsp)) = Rvl;
  goto label_291;

DEFLABEL (label_294)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_89]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_175)
  (Wrd39.Obj) = Rvl;
  goto label_293;

DEFLABEL (label_296)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_87])), (Wrd11.pObj));

DEFLABEL (label_172)
  (Wrd10.Obj) = Rvl;
  goto label_295;

DEFLABEL (label_298)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_67]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 1);

DEFLABEL (label_165)
  (* (--Rsp)) = Rvl;
  goto label_297;

DEFLABEL (label_300)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_66]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_5]), 1);

DEFLABEL (label_164)
  (Wrd11.Obj) = Rvl;
  goto label_299;

DEFLABEL (lambda_199)
  CLOSURE_HEADER (LABEL_32_61);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [11]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_322;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_322;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd23.Lng) + (Wrd25.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_322;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_321)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [8]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_320;
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_320;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd39.Lng) = ((Wrd43.Lng) + (Wrd44.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd39.Lng)))
    goto label_320;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));

DEFLABEL (label_319)
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [5]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_318;
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd56.uLng) == 26))
    goto label_318;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd57.Lng) = ((Wrd61.Lng) + (Wrd62.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd57.Lng)))
    goto label_318;
  (Wrd63.Obj) = (LONG_TO_FIXNUM (Wrd57.Lng));
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_317)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_81]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_82]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_83]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd76.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_5]));
  (Wrd79.Obj) = ((Wrd76.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_316;
  Wrd75 = Wrd79;

DEFLABEL (label_315)
  Wrd74 = Wrd75;
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd88.uLng) == 10))
    goto label_314;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd87.Lng))))
    goto label_314;
  (Wrd82.Obj) = ((Wrd85.pObj) [3]);
  (* (--Rsp)) = (Wrd82.Obj);

DEFLABEL (label_313)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_42]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_32_83);
  (Wrd9.Obj) = (current_block [OBJECT_32_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_113]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_5]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_312;
  Wrd17 = Wrd21;

DEFLABEL (label_311)
  Wrd16 = Wrd17;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_310;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_310;
  (Wrd24.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_309)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_42]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_113);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [10]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd12.pObj) [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_129]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_32_82);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_112]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_32_81);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_110]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_111]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_32_110);
  (Rsp [4]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_5]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_308;
  Wrd7 = Wrd11;

DEFLABEL (label_307)
  Wrd6 = Wrd7;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_306;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_306;
  (Wrd13.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_305)
  (Wrd29.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_32_2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_5]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_304;
  Wrd35 = Wrd39;

DEFLABEL (label_303)
  Wrd34 = Wrd35;
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_302;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd47.Lng))))
    goto label_302;
  (Wrd41.Obj) = ((Wrd45.pObj) [2]);

DEFLABEL (label_301)
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [2]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd60.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (Rsp [5]) = (Wrd61.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd66.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_128);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_127])));
  Rhp += 4;
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd66.pObj)));
  Wrd73 = Wrd66;
  (Wrd74.Obj) = (Rsp [3]);
  ((Wrd73.pObj) [2]) = (Wrd74.Obj);
  (Wrd72.Obj) = (Rsp [2]);
  ((Wrd73.pObj) [3]) = (Wrd72.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  ((Wrd73.pObj) [4]) = (Wrd70.Obj);
  (Wrd68.Obj) = (Rsp [0]);
  ((Wrd73.pObj) [5]) = (Wrd68.Obj);
  Rvl = (Wrd65.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_302)
  (Wrd50.Obj) = (current_block [OBJECT_32_10]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_126]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_11]), 2);

DEFLABEL (label_187)
  (Wrd41.Obj) = Rvl;
  goto label_301;

DEFLABEL (label_304)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_125])), (Wrd36.pObj));

DEFLABEL (label_186)
  (Wrd35.Obj) = Rvl;
  goto label_303;

DEFLABEL (label_306)
  (Wrd22.Obj) = (current_block [OBJECT_32_9]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_124]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_11]), 2);

DEFLABEL (label_185)
  (Wrd13.Obj) = Rvl;
  goto label_305;

DEFLABEL (label_308)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_123])), (Wrd8.pObj));

DEFLABEL (label_184)
  (Wrd7.Obj) = Rvl;
  goto label_307;

DEFLABEL (label_310)
  (Wrd32.Obj) = (current_block [OBJECT_32_10]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_115]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_11]), 2);

DEFLABEL (label_179)
  (* (--Rsp)) = Rvl;
  goto label_309;

DEFLABEL (label_312)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_114])), (Wrd18.pObj));

DEFLABEL (label_178)
  (Wrd17.Obj) = Rvl;
  goto label_311;

DEFLABEL (label_314)
  (Wrd90.Obj) = (current_block [OBJECT_32_9]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_85]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_11]), 2);

DEFLABEL (label_171)
  (* (--Rsp)) = Rvl;
  goto label_313;

DEFLABEL (label_316)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_84])), (Wrd76.pObj));

DEFLABEL (label_170)
  (Wrd75.Obj) = Rvl;
  goto label_315;

DEFLABEL (label_318)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [5]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_80]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_169)
  (* (--Rsp)) = Rvl;
  goto label_317;

DEFLABEL (label_320)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [8]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_79]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_168)
  (Wrd33.Obj) = Rvl;
  goto label_319;

DEFLABEL (label_322)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [11]);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_78]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_167)
  (Wrd12.Obj) = Rvl;
  goto label_321;

DEFLABEL (insert_symbol_201)
DEFLABEL (insert_symbol_131)
  INTERRUPT_CHECK (26, LABEL_32_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_98]));

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_32_97);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_100]));

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_32_121);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_132]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_133]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_134]));

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_32_133);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_324;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_323)
  (Wrd16.Obj) = (current_block [OBJECT_32_19]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_32_132);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_99]));

DEFLABEL (label_324)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_135]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_18]), 1);

DEFLABEL (label_188)
  (* (--Rsp)) = Rvl;
  goto label_323;

DEFLABEL (make_linkage_section_header_203)
DEFLABEL (make_linkage_section_header_124)
  INTERRUPT_CHECK (26, LABEL_32_104);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_332;
  Wrd5 = Wrd9;

DEFLABEL (label_331)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_325;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_109]));

DEFLABEL (label_325)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_106]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_103]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  if ((Wrd20.Obj) == (current_block [OBJECT_32_0]))
    goto label_330;
  if ((Wrd20.Obj) == (current_block [OBJECT_32_8]))
    goto label_329;
  if ((Wrd20.Obj) == (current_block [OBJECT_32_6]))
    goto label_328;
  if ((Wrd20.Obj) == (current_block [OBJECT_32_4]))
    goto label_326;
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_32_17]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_108]));

DEFLABEL (label_326)
  (Wrd31.Obj) = (current_block [OBJECT_32_15]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_327)
  (Wrd32.Obj) = (current_block [OBJECT_32_16]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_107]));

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_32_106);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_122]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_100]));

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_32_122);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_99]));

DEFLABEL (label_328)
  (Wrd34.Obj) = (current_block [OBJECT_32_14]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd34.Obj);
  goto label_327;

DEFLABEL (label_329)
  (Wrd36.Obj) = (current_block [OBJECT_32_13]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd36.Obj);
  goto label_327;

DEFLABEL (label_330)
  (Wrd38.Obj) = (current_block [OBJECT_32_12]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd38.Obj);
  goto label_327;

DEFLABEL (label_332)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_105])), (Wrd6.pObj));

DEFLABEL (label_177)
  (Wrd5.Obj) = Rvl;
  goto label_331;

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_32_103);
  (* (--Rsp)) = Rvl;
  goto label_327;

DEFLABEL (lambda_202)
  CLOSURE_HEADER (LABEL_32_101);

DEFLABEL (lambda_80)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_32_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [3]) = (Wrd13.Obj);
  goto pop_return;

DEFLABEL (lambda_204)
  CLOSURE_HEADER (LABEL_32_127);

DEFLABEL (lambda_18)
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

DEFLABEL (lambda_205)
  CLOSURE_HEADER (LABEL_32_130);

DEFLABEL (lambda_98)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_32_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [3]) = (Wrd13.Obj);
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_6 5
#define LABEL_33_5 7
#define LABEL_33_8 9
#define LABEL_33_9 11
#define LABEL_33_10 13
#define LABEL_33_14 15
#define LABEL_33_15 17
#define LABEL_33_17 19
#define LABEL_33_19 21
#define LABEL_33_20 23
#define LABEL_33_21 25
#define LABEL_33_23 27
#define LABEL_33_24 29
#define LABEL_33_25 31
#define LABEL_33_12 33
#define LABEL_33_11 35
#define LABEL_33_28 37
#define LABEL_33_16 39
#define LABEL_33_18 41
#define LABEL_33_29 43
#define LABEL_33_30 45
#define LABEL_33_31 47
#define LABEL_33_33 49
#define LABEL_33_34 51
#define LABEL_33_36 53
#define LABEL_33_37 55
#define LABEL_33_39 57
#define LABEL_33_38 59
#define LABEL_33_41 61
#define LABEL_33_42 63
#define LABEL_33_45 65
#define LABEL_33_46 67
#define LABEL_33_48 69
#define LABEL_33_49 71
#define LABEL_33_51 73
#define LABEL_33_52 75
#define LABEL_33_53 77
#define LABEL_33_57 79
#define LABEL_33_59 81
#define LABEL_33_58 83
#define LABEL_33_60 85
#define LABEL_33_62 87
#define TAG_33_63 42
#define LABEL_33_64 89
#define LABEL_33_70 91
#define LABEL_33_71 93
#define LABEL_33_72 95
#define LABEL_33_65 97
#define LABEL_33_69 99
#define LABEL_33_75 101
#define LABEL_33_73 103
#define ENVIRONMENT_LABEL_33_3 158
#define DEBUGGING_LABEL_33_2 157
#define OBJECT_33_6 156
#define OBJECT_33_5 155
#define OBJECT_33_4 154
#define OBJECT_33_3 153
#define OBJECT_33_2 152
#define OBJECT_33_1 151
#define OBJECT_33_0 150
#define EXECUTE_CACHE_33_76 105
#define EXECUTE_CACHE_33_68 107
#define EXECUTE_CACHE_33_67 109
#define EXECUTE_CACHE_33_66 111
#define EXECUTE_CACHE_33_61 113
#define EXECUTE_CACHE_33_56 115
#define EXECUTE_CACHE_33_55 117
#define EXECUTE_CACHE_33_54 119
#define EXECUTE_CACHE_33_50 121
#define EXECUTE_CACHE_33_47 123
#define EXECUTE_CACHE_33_74 125
#define EXECUTE_CACHE_33_44 127
#define EXECUTE_CACHE_33_43 129
#define EXECUTE_CACHE_33_40 131
#define EXECUTE_CACHE_33_35 133
#define EXECUTE_CACHE_33_32 135
#define EXECUTE_CACHE_33_27 137
#define EXECUTE_CACHE_33_26 139
#define EXECUTE_CACHE_33_22 141
#define EXECUTE_CACHE_33_13 143
#define EXECUTE_CACHE_33_7 145
#define FREE_REFERENCE_33_1 148
#define FREE_REFERENCE_33_0 149
#define FREE_REFERENCES_LABEL_33_0 104
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd82;
  machine_word Wrd75;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd11;
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
      goto handle_labels_66;

    case 1:
      current_block = (Rpc - LABEL_33_6);
      goto label_68;

    case 2:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_33_8);
      goto label_69;

    case 4:
      current_block = (Rpc - LABEL_33_9);
      goto iter_64;

    case 5:
      current_block = (Rpc - LABEL_33_10);
      goto label_71;

    case 6:
      current_block = (Rpc - LABEL_33_14);
      goto label_70;

    case 7:
      current_block = (Rpc - LABEL_33_15);
      goto continuation_16;

    case 8:
      current_block = (Rpc - LABEL_33_17);
      goto label_72;

    case 9:
      current_block = (Rpc - LABEL_33_19);
      goto label_76;

    case 10:
      current_block = (Rpc - LABEL_33_20);
      goto label_77;

    case 11:
      current_block = (Rpc - LABEL_33_21);
      goto label_78;

    case 12:
      current_block = (Rpc - LABEL_33_23);
      goto label_73;

    case 13:
      current_block = (Rpc - LABEL_33_24);
      goto label_74;

    case 14:
      current_block = (Rpc - LABEL_33_25);
      goto label_75;

    case 15:
      current_block = (Rpc - LABEL_33_12);
      goto continuation_21;

    case 16:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_22;

    case 17:
      current_block = (Rpc - LABEL_33_28);
      goto label_79;

    case 18:
      current_block = (Rpc - LABEL_33_16);
      goto continuation_7;

    case 19:
      current_block = (Rpc - LABEL_33_18);
      goto continuation_12;

    case 20:
      current_block = (Rpc - LABEL_33_29);
      goto continuation_40;

    case 21:
      current_block = (Rpc - LABEL_33_30);
      goto continuation_38;

    case 22:
      current_block = (Rpc - LABEL_33_31);
      goto continuation_37;

    case 23:
      current_block = (Rpc - LABEL_33_33);
      goto continuation_6;

    case 24:
      current_block = (Rpc - LABEL_33_34);
      goto continuation_8;

    case 25:
      current_block = (Rpc - LABEL_33_36);
      goto continuation_49;

    case 26:
      current_block = (Rpc - LABEL_33_37);
      goto continuation_48;

    case 27:
      current_block = (Rpc - LABEL_33_39);
      goto continuation_45;

    case 28:
      current_block = (Rpc - LABEL_33_38);
      goto continuation_46;

    case 29:
      current_block = (Rpc - LABEL_33_41);
      goto continuation_35;

    case 30:
      current_block = (Rpc - LABEL_33_42);
      goto continuation_34;

    case 31:
      current_block = (Rpc - LABEL_33_45);
      goto continuation_39;

    case 32:
      current_block = (Rpc - LABEL_33_46);
      goto continuation_5;

    case 33:
      current_block = (Rpc - LABEL_33_48);
      goto continuation_52;

    case 34:
      current_block = (Rpc - LABEL_33_49);
      goto continuation_51;

    case 35:
      current_block = (Rpc - LABEL_33_51);
      goto continuation_44;

    case 36:
      current_block = (Rpc - LABEL_33_52);
      goto continuation_43;

    case 37:
      current_block = (Rpc - LABEL_33_53);
      goto continuation_42;

    case 38:
      current_block = (Rpc - LABEL_33_57);
      goto continuation_31;

    case 39:
      current_block = (Rpc - LABEL_33_59);
      goto continuation_28;

    case 40:
      current_block = (Rpc - LABEL_33_58);
      goto continuation_29;

    case 41:
      current_block = (Rpc - LABEL_33_60);
      goto continuation_36;

    case 42:
      current_block = (Rpc - LABEL_33_62);
      goto lambda_85;

    case 43:
      current_block = (Rpc - LABEL_33_64);
      goto continuation_61;

    case 44:
      current_block = (Rpc - LABEL_33_70);
      goto label_80;

    case 45:
      current_block = (Rpc - LABEL_33_71);
      goto label_81;

    case 46:
      current_block = (Rpc - LABEL_33_72);
      goto continuation_59;

    case 47:
      current_block = (Rpc - LABEL_33_65);
      goto continuation_57;

    case 48:
      current_block = (Rpc - LABEL_33_69);
      goto continuation_27;

    case 49:
      current_block = (Rpc - LABEL_33_75);
      goto continuation_55;

    case 50:
      current_block = (Rpc - LABEL_33_73);
      goto continuation_53;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_labels_83)
DEFLABEL (handle_labels_66)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_89;
  Wrd12 = Wrd16;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_87;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_87;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_86)
  goto iter_64;

DEFLABEL (label_87)
  (Wrd6.Obj) = (Rsp [6]);
  (Wrd7.Obj) = (current_block [OBJECT_33_2]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_6])), (Wrd13.pObj));

DEFLABEL (label_68)
  (Wrd12.Obj) = Rvl;
  goto label_88;

DEFLABEL (iter_84)
DEFLABEL (iter_64)
  INTERRUPT_CHECK (26, LABEL_33_9);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_107;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_106;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_106;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_105)
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_33_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_104;
  Wrd8 = Wrd12;

DEFLABEL (label_103)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_96;
  (Wrd19.Obj) = (Rsp [9]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_95;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd23.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_95;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_94)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_93;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd32.Lng) = ((Wrd34.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_93;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_92)
  (Wrd35.Obj) = (* (Rsp++));
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_91;
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_91;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd43.Lng) = ((Wrd44.Lng) - (Wrd45.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd43.Lng)))
    goto label_91;
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_90)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_26]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_33_16);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_33]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_33_33);
  (Rsp [6]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_46]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_46);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [7]);
  (Rsp [8]) = (Wrd7.Obj);
  (Wrd8.Obj) = (* (Rsp++));
  (Rsp [6]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_63);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_62])));
  Rhp += 6;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd22 = Wrd11;
  (Wrd23.Obj) = (Rsp [5]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [4]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [5]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [6]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [7]) = (Wrd13.Obj);
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_25]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_24]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_74)
  (Wrd29.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd15.Obj) = (Rsp [9]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_23]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (label_96)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_18]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd54.Obj) = (Rsp [10]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_102;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd56.Lng) = ((Wrd58.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd56.Lng)))
    goto label_102;
  (Wrd59.Obj) = (LONG_TO_FIXNUM (Wrd56.Lng));
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_101)
  (Wrd65.Obj) = (Rsp [4]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 26))
    goto label_100;
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  (Wrd67.Lng) = ((Wrd69.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd67.Lng)))
    goto label_100;
  (Wrd64.Obj) = (LONG_TO_FIXNUM (Wrd67.Lng));

DEFLABEL (label_99)
  (Wrd70.Obj) = (* (Rsp++));
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd76.uLng) == 26))
    goto label_98;
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd77.uLng) == 26))
    goto label_98;
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  (Wrd78.Lng) = ((Wrd79.Lng) - (Wrd80.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd78.Lng)))
    goto label_98;
  (Wrd81.Obj) = (LONG_TO_FIXNUM (Wrd78.Lng));
  (* (--Rsp)) = (Wrd81.Obj);

DEFLABEL (label_97)
  (Wrd82.Obj) = (current_block [OBJECT_33_4]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_22]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_33_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_35]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_33_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_47]));

DEFLABEL (label_98)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_21]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd60.Obj) = (Rsp [4]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_20]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_77)
  (Wrd64.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd50.Obj) = (Rsp [10]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_19]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_76)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_17])), (Wrd9.pObj));

DEFLABEL (label_72)
  (Wrd8.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_70)
  (Wrd11.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_107)
  if (! ((Wrd6.uLng) == 1))
    goto label_118;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_117)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_13]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_33_12);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_108;
  (Wrd28.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_27]));

DEFLABEL (label_108)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_116)
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_115;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_114)
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_29]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_30]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_31]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_32]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_33_31);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_113;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_44]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_33_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_42]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_43]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_33_42);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_112;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_44]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_33_41);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_58]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_59]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_27]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_33_59);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_109;
  (Wrd14.Obj) = (Rsp [7]);
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_13]));

DEFLABEL (label_109)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_111)
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [5]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_110;
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_61]));

DEFLABEL (label_110)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_44]));

DEFLABEL (label_112)
  (Wrd7.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_60]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_43]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_33_60);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_61]));

DEFLABEL (label_113)
  (Wrd7.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_32]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_33_45);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_61]));

DEFLABEL (label_115)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_28]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_5]), 1);

DEFLABEL (label_79)
  (Wrd5.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_118)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 1);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_33_58);
  goto label_111;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_33_57);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_61]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_33_69);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_74]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_33_29);
  (Wrd9.Obj) = (Rsp [5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_36]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_37]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_38]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_39]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_40]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_33_39);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_119;
  (Wrd9.Obj) = (Rsp [5]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_55]));

DEFLABEL (label_119)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_128)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_56]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_33_37);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_53]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_54]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_33_53);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_68]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_33_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_33_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_47]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_33_51);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_67]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_33_36);
  (Wrd9.Obj) = (Rsp [6]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [6]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_48]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_49]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_50]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_33_49);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_66]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_33_48);
  (Rsp [7]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_64]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_65]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_55]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_33_65);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_127;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_72]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_55]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_33_72);
  (Wrd20.Obj) = (Rsp [4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_33_0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_126)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_73]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_40]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_33_73);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_125;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_75]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_40]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_33_75);
  (Wrd16.Obj) = (Rsp [5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_33_0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_124)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_76]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_33_64);
  (Rsp [8]) = Rvl;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_123;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_123;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_122)
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_121;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = ((Wrd28.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_121;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));

DEFLABEL (label_120)
  (Rsp [3]) = (Wrd23.Obj);
  Rsp = (& (Rsp [2]));
  goto iter_64;

DEFLABEL (label_121)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_71]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_81)
  (Wrd23.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.Obj) = (current_block [OBJECT_33_2]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_70]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_80)
  (Wrd11.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd11.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_124;

DEFLABEL (label_127)
  (Wrd11.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_126;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_33_11);
  goto label_116;

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_33_38);
  goto label_128;

DEFLABEL (lambda_85)
  CLOSURE_HEADER (LABEL_33_62);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [6]) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [5]) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_10 7
#define LABEL_34_6 9
#define LABEL_34_7 11
#define LABEL_34_8 13
#define LABEL_34_12 15
#define LABEL_34_14 17
#define LABEL_34_15 19
#define LABEL_34_17 21
#define LABEL_34_20 23
#define ENVIRONMENT_LABEL_34_3 48
#define DEBUGGING_LABEL_34_2 47
#define OBJECT_34_1 46
#define OBJECT_34_0 45
#define EXECUTE_CACHE_34_23 25
#define EXECUTE_CACHE_34_22 27
#define EXECUTE_CACHE_34_21 29
#define EXECUTE_CACHE_34_19 31
#define EXECUTE_CACHE_34_18 33
#define EXECUTE_CACHE_34_16 35
#define EXECUTE_CACHE_34_13 37
#define EXECUTE_CACHE_34_11 39
#define EXECUTE_CACHE_34_9 41
#define FREE_REFERENCE_34_0 44
#define FREE_REFERENCES_LABEL_34_0 24
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_34_4);
      goto add_label_initialization_12;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_34_10);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_34_8);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_34_12);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_34_14);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_34_15);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_34_17);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_34_20);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_label_initialization_16)
DEFLABEL (add_label_initialization_12)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_19;
  Wrd5 = Wrd9;

DEFLABEL (label_18)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_34_10);
  (Wrd9.Obj) = (Rsp [4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_34_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_34_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_21]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_23]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_34_6);
  (Wrd10.Obj) = (Rsp [4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_5])), (Wrd6.pObj));

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 7
#define DEBUGGING_LABEL_35_2 6
#define OBJECT_35_1 5
#define OBJECT_35_0 4
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto fake_procedure_block_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_procedure_block_name_3)
DEFLABEL (fake_procedure_block_name_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_35_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

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

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 7
#define DEBUGGING_LABEL_36_2 6
#define OBJECT_36_1 5
#define OBJECT_36_0 4
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto fake_procedure_label_tag_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_procedure_label_tag_3)
DEFLABEL (fake_procedure_label_tag_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_36_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

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

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 7
#define DEBUGGING_LABEL_37_2 6
#define OBJECT_37_1 5
#define OBJECT_37_0 4
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto fake_procedure_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_procedure_block_3)
DEFLABEL (fake_procedure_block_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_37_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

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

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 7
#define DEBUGGING_LABEL_38_2 6
#define OBJECT_38_1 5
#define OBJECT_38_0 4
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto fake_procedure_label_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_procedure_label_value_3)
DEFLABEL (fake_procedure_label_value_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_38_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

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

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define LABEL_39_7 9
#define ENVIRONMENT_LABEL_39_3 17
#define DEBUGGING_LABEL_39_2 16
#define OBJECT_39_3 15
#define OBJECT_39_2 14
#define OBJECT_39_1 13
#define OBJECT_39_0 12
#define FREE_REFERENCE_39_0 11
#define FREE_REFERENCES_LABEL_39_0 10
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto fake_compiled_procedureP_4;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_39_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_compiled_procedureP_10)
DEFLABEL (fake_compiled_procedureP_4)
  INTERRUPT_CHECK (26, LABEL_39_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
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
  Rvl = (current_block [OBJECT_39_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_39_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define ENVIRONMENT_LABEL_40_3 7
#define DEBUGGING_LABEL_40_2 6
#define OBJECT_40_1 5
#define OBJECT_40_0 4
#define FREE_REFERENCES_LABEL_40_0 4
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto fake_block_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_block_name_3)
DEFLABEL (fake_block_name_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

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

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 7
#define DEBUGGING_LABEL_41_2 6
#define OBJECT_41_1 5
#define OBJECT_41_0 4
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_41_4);
      goto fake_block_tag_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_block_tag_3)
DEFLABEL (fake_block_tag_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

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

#define LABEL_42_4 3
#define ENVIRONMENT_LABEL_42_3 7
#define DEBUGGING_LABEL_42_2 6
#define OBJECT_42_1 5
#define OBJECT_42_0 4
#define FREE_REFERENCES_LABEL_42_0 4
#define NUMBER_OF_LINKER_SECTIONS_42_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto fake_block_c_proc_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_block_c_proc_3)
DEFLABEL (fake_block_c_proc_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_42_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

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

#define LABEL_43_4 3
#define ENVIRONMENT_LABEL_43_3 7
#define DEBUGGING_LABEL_43_2 6
#define OBJECT_43_1 5
#define OBJECT_43_0 4
#define FREE_REFERENCES_LABEL_43_0 4
#define NUMBER_OF_LINKER_SECTIONS_43_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto fake_block_d_proc_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_block_d_proc_3)
DEFLABEL (fake_block_d_proc_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_43_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

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

#define LABEL_44_4 3
#define ENVIRONMENT_LABEL_44_3 7
#define DEBUGGING_LABEL_44_2 6
#define OBJECT_44_1 5
#define OBJECT_44_0 4
#define FREE_REFERENCES_LABEL_44_0 4
#define NUMBER_OF_LINKER_SECTIONS_44_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto fake_block_c_code_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_block_c_code_3)
DEFLABEL (fake_block_c_code_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_44_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

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

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 7
#define DEBUGGING_LABEL_45_2 6
#define OBJECT_45_1 5
#define OBJECT_45_0 4
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto fake_block_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_block_index_3)
DEFLABEL (fake_block_index_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_45_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

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

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 7
#define DEBUGGING_LABEL_46_2 6
#define OBJECT_46_1 5
#define OBJECT_46_0 4
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto fake_block_ntags_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_block_ntags_3)
DEFLABEL (fake_block_ntags_0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_46_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define ENVIRONMENT_LABEL_47_3 7
#define DEBUGGING_LABEL_47_2 6
#define OBJECT_47_1 5
#define OBJECT_47_0 4
#define FREE_REFERENCES_LABEL_47_0 4
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto fake_block_proxy_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_block_proxy_3)
DEFLABEL (fake_block_proxy_0)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_47_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_7 9
#define ENVIRONMENT_LABEL_48_3 17
#define DEBUGGING_LABEL_48_2 16
#define OBJECT_48_3 15
#define OBJECT_48_2 14
#define OBJECT_48_1 13
#define OBJECT_48_0 12
#define FREE_REFERENCE_48_0 11
#define FREE_REFERENCES_LABEL_48_0 10
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_48_4);
      goto fake_compiled_blockP_4;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_48_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_compiled_blockP_10)
DEFLABEL (fake_compiled_blockP_4)
  INTERRUPT_CHECK (26, LABEL_48_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
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
  Rvl = (current_block [OBJECT_48_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_48_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_7 7
#define LABEL_49_6 9
#define ENVIRONMENT_LABEL_49_3 19
#define DEBUGGING_LABEL_49_2 18
#define OBJECT_49_0 17
#define EXECUTE_CACHE_49_9 11
#define EXECUTE_CACHE_49_8 13
#define FREE_REFERENCE_49_0 16
#define FREE_REFERENCES_LABEL_49_0 10
#define NUMBER_OF_LINKER_SECTIONS_49_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_49_4);
      goto fake_compiled_block_name_2;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_49_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_compiled_block_name_7)
DEFLABEL (fake_compiled_block_name_2)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_11;
  Wrd6 = Wrd10;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_9;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd23.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_9;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_6);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_9]));

DEFLABEL (label_9)
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_7 7
#define LABEL_50_6 9
#define LABEL_50_9 11
#define ENVIRONMENT_LABEL_50_3 23
#define DEBUGGING_LABEL_50_2 22
#define OBJECT_50_4 21
#define OBJECT_50_3 20
#define OBJECT_50_2 19
#define OBJECT_50_1 18
#define OBJECT_50_0 17
#define EXECUTE_CACHE_50_10 13
#define EXECUTE_CACHE_50_8 15
#define FREE_REFERENCES_LABEL_50_0 12
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_50_4);
      goto fake_block__code_decl_4;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_50_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_50_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_block__code_decl_10)
DEFLABEL (fake_block__code_decl_4)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_14;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_14;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_50_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_12;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd14.Lng))))
    goto label_12;
  (Wrd6.Obj) = ((Wrd12.pObj) [4]);

DEFLABEL (label_11)
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (current_block [OBJECT_50_4]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_50_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_50_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_6 5
#define LABEL_51_5 7
#define LABEL_51_8 9
#define ENVIRONMENT_LABEL_51_3 20
#define DEBUGGING_LABEL_51_2 19
#define OBJECT_51_3 18
#define OBJECT_51_2 17
#define OBJECT_51_1 16
#define OBJECT_51_0 15
#define EXECUTE_CACHE_51_9 11
#define EXECUTE_CACHE_51_7 13
#define FREE_REFERENCES_LABEL_51_0 10
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_51_4);
      goto fake_block__data_decl_3;

    case 1:
      current_block = (Rpc - LABEL_51_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_51_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_block__data_decl_8)
DEFLABEL (fake_block__data_decl_3)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_12;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_51_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_10;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd14.Lng))))
    goto label_10;
  (Wrd6.Obj) = ((Wrd12.pObj) [5]);

DEFLABEL (label_9)
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (label_10)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_51_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_51_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define ENVIRONMENT_LABEL_52_3 16
#define DEBUGGING_LABEL_52_2 15
#define OBJECT_52_1 14
#define OBJECT_52_0 13
#define EXECUTE_CACHE_52_8 9
#define EXECUTE_CACHE_52_7 11
#define FREE_REFERENCES_LABEL_52_0 8
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_52_4);
      goto fake_block__c_code_2;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fake_block__c_code_6)
DEFLABEL (fake_block__c_code_2)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_7)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_52_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_5 3
#define LABEL_53_6 5
#define LABEL_53_4 7
#define LABEL_53_8 9
#define LABEL_53_11 11
#define LABEL_53_9 13
#define LABEL_53_13 15
#define LABEL_53_15 17
#define ENVIRONMENT_LABEL_53_3 32
#define DEBUGGING_LABEL_53_2 31
#define EXECUTE_CACHE_53_14 19
#define EXECUTE_CACHE_53_12 21
#define EXECUTE_CACHE_53_10 23
#define EXECUTE_CACHE_53_7 25
#define FREE_REFERENCE_53_0 28
#define FREE_ASSIGNMENT_53_0 30
#define FREE_REFERENCES_LABEL_53_0 18
#define NUMBER_OF_LINKER_SECTIONS_53_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_53_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_53_4);
      goto Z___namestring_shared_6;

    case 3:
      current_block = (Rpc - LABEL_53_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_53_11);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_53_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_53_13);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_53_15);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___namestring_shared_13)
DEFLABEL (Z___namestring_shared_6)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_24;
  Wrd5 = Wrd9;

DEFLABEL (label_23)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_53_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_53_0]));
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;

DEFLABEL (label_15)
  ((Wrd5.pObj) [0]) = Rvl;

DEFLABEL (label_14)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_15;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_53_15])), (Wrd5.pObj), Rvl);

DEFLABEL (label_11)
  goto label_14;

DEFLABEL (label_18)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_22;
  Wrd15 = Wrd19;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (Wrd26.Obj) = (Rsp [0]);
  if (! (Rvl == (Wrd26.Obj)))
    goto label_17;
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_20;
  Wrd28 = Wrd32;

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_6])), (Wrd29.pObj));

DEFLABEL (label_10)
  (Wrd28.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_11])), (Wrd16.pObj));

DEFLABEL (label_9)
  (Wrd15.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_8])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_6 7
#define LABEL_54_7 9
#define LABEL_54_8 11
#define LABEL_54_9 13
#define ENVIRONMENT_LABEL_54_3 20
#define DEBUGGING_LABEL_54_2 19
#define OBJECT_54_4 18
#define OBJECT_54_3 17
#define OBJECT_54_2 16
#define OBJECT_54_1 15
#define OBJECT_54_0 14
#define FREE_REFERENCES_LABEL_54_0 14
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_54_4);
      goto string_reverse_13;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_54_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_54_7);
      goto do_loop_9;

    case 4:
      current_block = (Rpc - LABEL_54_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_54_9);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_reverse_19)
DEFLABEL (string_reverse_13)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_21)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_54_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) - 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (* (--Rsp)) = (Wrd9.Obj);
  goto do_loop_9;

DEFLABEL (label_22)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (do_loop_20)
DEFLABEL (do_loop_9)
  INTERRUPT_CHECK (26, LABEL_54_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_23;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 30))
    goto label_27;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_27;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_27;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd13.pChr) = (& ((Wrd20.pChr) [(Wrd10.Lng)]));
  (Wrd14.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd7.Obj) = (MAKE_OBJECT (2, (Wrd14.uLng)));

DEFLABEL (label_26)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 30))
    goto label_25;
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_25;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) (Wrd48.Lng)) < ((unsigned long) (Wrd52.Lng))))
    goto label_25;
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd44.uLng) == 2))
    goto label_25;
  (Wrd39.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  (Wrd42.pChr) = (& ((Wrd50.pChr) [(Wrd39.Lng)]));
  ((Wrd42.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd7.Obj)));

DEFLABEL (label_24)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd32.Lng) - 1L);
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd36.Lng) + 1L);
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  (Rsp [1]) = (Wrd34.Obj);
  goto do_loop_9;

DEFLABEL (label_25)
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_4]), 3);

DEFLABEL (label_17)
  goto label_24;

DEFLABEL (label_27)
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_16)
  (Wrd7.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_5 3
#define LABEL_55_4 5
#define LABEL_55_6 7
#define LABEL_55_7 9
#define LABEL_55_8 11
#define LABEL_55_9 13
#define ENVIRONMENT_LABEL_55_3 23
#define DEBUGGING_LABEL_55_2 22
#define OBJECT_55_4 21
#define OBJECT_55_3 20
#define OBJECT_55_2 19
#define OBJECT_55_1 18
#define OBJECT_55_0 17
#define FREE_REFERENCE_55_1 15
#define FREE_REFERENCE_55_0 16
#define FREE_REFERENCES_LABEL_55_0 14
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd74;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd69;
  machine_word Wrd66;
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
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_55_4);
      goto guaranteed_fixnumP_4;

    case 2:
      current_block = (Rpc - LABEL_55_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_55_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_55_8);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_55_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guaranteed_fixnumP_11)
DEFLABEL (guaranteed_fixnumP_4)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd66.Obj) = (current_block [OBJECT_55_0]);
  (Wrd69.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd69.Lng))))
    goto label_31;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd66.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_30;

DEFLABEL (label_29)
  (Wrd13.Obj) = (current_block [OBJECT_55_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_12;
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_12)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_14;
  (Wrd15.Obj) = (current_block [OBJECT_55_4]);
  goto label_13;

DEFLABEL (label_14)
  (Wrd15.Obj) = (current_block [OBJECT_55_3]);

DEFLABEL (label_13)
DEFLABEL (label_28)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_16;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_27;
  Wrd28 = Wrd32;

DEFLABEL (label_26)
  Wrd27 = Wrd28;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_25;
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_25;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if ((Wrd62.Lng) > (Wrd64.Lng))
    goto label_15;

DEFLABEL (label_24)
  (Wrd43.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_1]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_23;
  Wrd45 = Wrd49;

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd45.Obj);
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 26)
    goto label_18;

DEFLABEL (label_17)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_18)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_17;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if ((Wrd57.Lng) < (Wrd59.Lng))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_19;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_55_3]);

DEFLABEL (label_19)
DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_9])), (Wrd46.pObj));

DEFLABEL (label_8)
  (Wrd45.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_15;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_7])), (Wrd29.pObj));

DEFLABEL (label_6)
  (Wrd28.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  Rsp = (& (Rsp [2]));
  goto label_16;

DEFLABEL (label_31)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_6]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_5 3
#define LABEL_56_4 5
#define LABEL_56_6 7
#define LABEL_56_7 9
#define LABEL_56_9 11
#define LABEL_56_10 13
#define LABEL_56_11 15
#define LABEL_56_12 17
#define ENVIRONMENT_LABEL_56_3 30
#define DEBUGGING_LABEL_56_2 29
#define OBJECT_56_7 28
#define OBJECT_56_6 27
#define OBJECT_56_5 26
#define OBJECT_56_4 25
#define OBJECT_56_3 24
#define OBJECT_56_2 23
#define OBJECT_56_1 22
#define OBJECT_56_0 21
#define EXECUTE_CACHE_56_8 19
#define FREE_REFERENCES_LABEL_56_0 18
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cout_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd41;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd36;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_56_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_56_4);
      goto guaranteed_longP_8;

    case 2:
      current_block = (Rpc - LABEL_56_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_56_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_56_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_56_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_56_11);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_56_12);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guaranteed_longP_15)
DEFLABEL (guaranteed_longP_8)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_56_0]);
  (Wrd36.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd36.Lng))))
    goto label_36;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_35;

DEFLABEL (label_34)
  (Wrd13.Obj) = (current_block [OBJECT_56_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_16;
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_16)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_18;
  (Wrd15.Obj) = (current_block [OBJECT_56_4]);
  goto label_17;

DEFLABEL (label_18)
  (Wrd15.Obj) = (current_block [OBJECT_56_3]);

DEFLABEL (label_17)
DEFLABEL (label_33)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_20;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_56_5]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_56_6]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_56_7);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_32;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((Wrd13.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_32;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_31)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_30;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd21.Lng) = (0 - (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_30;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));

DEFLABEL (label_29)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_28;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_28;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! ((Wrd42.Lng) > (Wrd44.Lng)))
    goto label_22;

DEFLABEL (label_21)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd34.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_56_5]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_56_6]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_56_12);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_24;

DEFLABEL (label_23)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_24)
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_23;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd12.Lng) < (Wrd14.Lng))
    goto label_26;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_25;

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_56_3]);

DEFLABEL (label_25)
DEFLABEL (label_27)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_21;

DEFLABEL (label_30)
  (Wrd14.Obj) = (current_block [OBJECT_56_7]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_12)
  (Wrd19.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_11)
  (Wrd10.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_35)
  Rsp = (& (Rsp [2]));
  goto label_20;

DEFLABEL (label_36)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_6]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_35;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_20;

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
#define LABEL_40 71
#define LABEL_41 73
#define LABEL_43 75
#define LABEL_44 77
#define LABEL_45 79
#define LABEL_50 81
#define LABEL_47 83
#define LABEL_52 85
#define LABEL_53 87
#define LABEL_54 89
#define LABEL_55 91
#define LABEL_56 93
#define LABEL_57 95
#define LABEL_58 97
#define LABEL_59 99
#define LABEL_60 101
#define LABEL_61 103
#define LABEL_62 105
#define LABEL_67 107
#define LABEL_63 109
#define LABEL_65 111
#define LABEL_66 113
#define LABEL_69 115
#define LABEL_70 117
#define TAG_71 57
#define LABEL_72 119
#define LABEL_73 121
#define LABEL_74 123
#define LABEL_77 125
#define LABEL_75 127
#define LABEL_76 129
#define LABEL_78 131
#define LABEL_79 133
#define LABEL_83 135
#define LABEL_80 137
#define LABEL_81 139
#define LABEL_82 141
#define LABEL_84 143
#define LABEL_85 145
#define TAG_86 71
#define LABEL_87 147
#define LABEL_88 149
#define LABEL_89 151
#define LABEL_90 153
#define LABEL_91 155
#define LABEL_92 157
#define LABEL_93 159
#define LABEL_96 161
#define LABEL_94 163
#define LABEL_95 165
#define LABEL_97 167
#define LABEL_98 169
#define LABEL_99 171
#define LABEL_100 173
#define LABEL_101 175
#define LABEL_102 177
#define LABEL_103 179
#define LABEL_104 181
#define LABEL_105 183
#define LABEL_106 185
#define LABEL_107 187
#define LABEL_108 189
#define ENVIRONMENT_LABEL_3 370
#define DEBUGGING_LABEL_2 369
#define PURIFICATION_ROOT 368
#define OBJECT_153 367
#define OBJECT_152 366
#define OBJECT_151 365
#define OBJECT_150 364
#define OBJECT_149 363
#define OBJECT_148 362
#define OBJECT_147 361
#define OBJECT_146 360
#define OBJECT_145 359
#define OBJECT_144 358
#define OBJECT_143 357
#define OBJECT_142 356
#define OBJECT_141 355
#define OBJECT_140 354
#define OBJECT_139 353
#define OBJECT_138 352
#define OBJECT_137 351
#define OBJECT_136 350
#define OBJECT_135 349
#define OBJECT_134 348
#define OBJECT_133 347
#define OBJECT_132 346
#define OBJECT_131 345
#define OBJECT_130 344
#define OBJECT_129 343
#define OBJECT_128 342
#define OBJECT_127 341
#define OBJECT_126 340
#define OBJECT_125 339
#define OBJECT_124 338
#define OBJECT_123 337
#define OBJECT_122 336
#define OBJECT_121 335
#define OBJECT_120 334
#define OBJECT_119 333
#define OBJECT_118 332
#define OBJECT_117 331
#define OBJECT_116 330
#define OBJECT_115 329
#define OBJECT_114 328
#define OBJECT_113 327
#define OBJECT_112 326
#define OBJECT_111 325
#define OBJECT_110 324
#define OBJECT_109 323
#define OBJECT_108 322
#define OBJECT_107 321
#define OBJECT_106 320
#define OBJECT_105 319
#define OBJECT_104 318
#define OBJECT_103 317
#define OBJECT_102 316
#define OBJECT_101 315
#define OBJECT_100 314
#define OBJECT_99 313
#define OBJECT_98 312
#define OBJECT_97 311
#define OBJECT_96 310
#define OBJECT_95 309
#define OBJECT_94 308
#define OBJECT_93 307
#define OBJECT_92 306
#define OBJECT_91 305
#define OBJECT_90 304
#define OBJECT_89 303
#define OBJECT_88 302
#define OBJECT_87 301
#define OBJECT_86 300
#define OBJECT_85 299
#define OBJECT_84 298
#define OBJECT_83 297
#define OBJECT_82 296
#define OBJECT_81 295
#define OBJECT_80 294
#define OBJECT_79 293
#define OBJECT_78 292
#define OBJECT_77 291
#define OBJECT_76 290
#define OBJECT_75 289
#define OBJECT_74 288
#define OBJECT_73 287
#define OBJECT_72 286
#define OBJECT_71 285
#define OBJECT_70 284
#define OBJECT_69 283
#define OBJECT_68 282
#define OBJECT_67 281
#define OBJECT_66 280
#define OBJECT_65 279
#define OBJECT_64 278
#define OBJECT_63 277
#define OBJECT_62 276
#define OBJECT_61 275
#define OBJECT_60 274
#define OBJECT_59 273
#define OBJECT_58 272
#define OBJECT_57 271
#define OBJECT_56 270
#define OBJECT_55 269
#define OBJECT_54 268
#define OBJECT_53 267
#define OBJECT_52 266
#define OBJECT_51 265
#define OBJECT_50 264
#define OBJECT_49 263
#define OBJECT_48 262
#define OBJECT_47 261
#define OBJECT_46 260
#define OBJECT_45 259
#define OBJECT_44 258
#define OBJECT_43 257
#define OBJECT_42 256
#define OBJECT_41 255
#define OBJECT_40 254
#define OBJECT_39 253
#define OBJECT_38 252
#define OBJECT_37 251
#define OBJECT_36 250
#define OBJECT_35 249
#define OBJECT_34 248
#define OBJECT_33 247
#define OBJECT_32 246
#define OBJECT_31 245
#define OBJECT_30 244
#define OBJECT_29 243
#define OBJECT_28 242
#define OBJECT_27 241
#define OBJECT_26 240
#define OBJECT_25 239
#define OBJECT_24 238
#define OBJECT_23 237
#define OBJECT_22 236
#define OBJECT_21 235
#define OBJECT_20 234
#define OBJECT_19 233
#define OBJECT_18 232
#define OBJECT_17 231
#define OBJECT_16 230
#define OBJECT_15 229
#define OBJECT_14 228
#define OBJECT_13 227
#define OBJECT_12 226
#define OBJECT_11 225
#define OBJECT_10 224
#define OBJECT_9 223
#define OBJECT_8 222
#define OBJECT_7 221
#define OBJECT_6 220
#define OBJECT_5 219
#define OBJECT_4 218
#define OBJECT_3 217
#define OBJECT_2 216
#define OBJECT_1 215
#define OBJECT_0 214
#define EXECUTE_CACHE_51 191
#define EXECUTE_CACHE_49 193
#define EXECUTE_CACHE_48 195
#define EXECUTE_CACHE_46 197
#define EXECUTE_CACHE_42 199
#define EXECUTE_CACHE_39 201
#define FREE_REFERENCE_2 204
#define FREE_REFERENCE_1 205
#define FREE_REFERENCE_0 206
#define GLOBAL_EXECUTE_CACHE_68 208
#define GLOBAL_EXECUTE_CACHE_64 210
#define GLOBAL_EXECUTE_CACHE_7 212
#define FREE_REFERENCES_LABEL_0 190
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
cout_so_0a7721cb9e7cdfe4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto continuation_30;

    case 30:
      current_block = (Rpc - LABEL_35);
      goto continuation_31;

    case 31:
      current_block = (Rpc - LABEL_36);
      goto continuation_37;

    case 32:
      current_block = (Rpc - LABEL_37);
      goto continuation_36;

    case 33:
      current_block = (Rpc - LABEL_38);
      goto continuation_35;

    case 34:
      current_block = (Rpc - LABEL_40);
      goto continuation_39;

    case 35:
      current_block = (Rpc - LABEL_41);
      goto continuation_38;

    case 36:
      current_block = (Rpc - LABEL_43);
      goto continuation_34;

    case 37:
      current_block = (Rpc - LABEL_44);
      goto continuation_33;

    case 38:
      current_block = (Rpc - LABEL_45);
      goto continuation_32;

    case 39:
      current_block = (Rpc - LABEL_50);
      goto label_105;

    case 40:
      current_block = (Rpc - LABEL_47);
      goto continuation_40;

    case 41:
      current_block = (Rpc - LABEL_52);
      goto continuation_41;

    case 42:
      current_block = (Rpc - LABEL_53);
      goto continuation_42;

    case 43:
      current_block = (Rpc - LABEL_54);
      goto continuation_43;

    case 44:
      current_block = (Rpc - LABEL_55);
      goto continuation_44;

    case 45:
      current_block = (Rpc - LABEL_56);
      goto continuation_45;

    case 46:
      current_block = (Rpc - LABEL_57);
      goto continuation_46;

    case 47:
      current_block = (Rpc - LABEL_58);
      goto continuation_47;

    case 48:
      current_block = (Rpc - LABEL_59);
      goto continuation_48;

    case 49:
      current_block = (Rpc - LABEL_60);
      goto continuation_49;

    case 50:
      current_block = (Rpc - LABEL_61);
      goto continuation_50;

    case 51:
      current_block = (Rpc - LABEL_62);
      goto continuation_56;

    case 52:
      current_block = (Rpc - LABEL_67);
      goto label_106;

    case 53:
      current_block = (Rpc - LABEL_63);
      goto continuation_55;

    case 54:
      current_block = (Rpc - LABEL_65);
      goto continuation_61;

    case 55:
      current_block = (Rpc - LABEL_66);
      goto continuation_57;

    case 56:
      current_block = (Rpc - LABEL_69);
      goto continuation_62;

    case 57:
      current_block = (Rpc - LABEL_70);
      goto make_fake_compiled_procedure_111;

    case 58:
      current_block = (Rpc - LABEL_72);
      goto continuation_63;

    case 59:
      current_block = (Rpc - LABEL_73);
      goto continuation_64;

    case 60:
      current_block = (Rpc - LABEL_74);
      goto continuation_65;

    case 61:
      current_block = (Rpc - LABEL_77);
      goto label_107;

    case 62:
      current_block = (Rpc - LABEL_75);
      goto continuation_67;

    case 63:
      current_block = (Rpc - LABEL_76);
      goto continuation_66;

    case 64:
      current_block = (Rpc - LABEL_78);
      goto continuation_68;

    case 65:
      current_block = (Rpc - LABEL_79);
      goto continuation_78;

    case 66:
      current_block = (Rpc - LABEL_83);
      goto label_108;

    case 67:
      current_block = (Rpc - LABEL_80);
      goto continuation_77;

    case 68:
      current_block = (Rpc - LABEL_81);
      goto continuation_83;

    case 69:
      current_block = (Rpc - LABEL_82);
      goto continuation_79;

    case 70:
      current_block = (Rpc - LABEL_84);
      goto continuation_84;

    case 71:
      current_block = (Rpc - LABEL_85);
      goto make_fake_compiled_block_112;

    case 72:
      current_block = (Rpc - LABEL_87);
      goto continuation_85;

    case 73:
      current_block = (Rpc - LABEL_88);
      goto continuation_86;

    case 74:
      current_block = (Rpc - LABEL_89);
      goto continuation_87;

    case 75:
      current_block = (Rpc - LABEL_90);
      goto continuation_88;

    case 76:
      current_block = (Rpc - LABEL_91);
      goto continuation_89;

    case 77:
      current_block = (Rpc - LABEL_92);
      goto continuation_90;

    case 78:
      current_block = (Rpc - LABEL_93);
      goto continuation_91;

    case 79:
      current_block = (Rpc - LABEL_96);
      goto label_109;

    case 80:
      current_block = (Rpc - LABEL_94);
      goto continuation_93;

    case 81:
      current_block = (Rpc - LABEL_95);
      goto continuation_92;

    case 82:
      current_block = (Rpc - LABEL_97);
      goto continuation_94;

    case 83:
      current_block = (Rpc - LABEL_98);
      goto continuation_95;

    case 84:
      current_block = (Rpc - LABEL_99);
      goto continuation_96;

    case 85:
      current_block = (Rpc - LABEL_100);
      goto continuation_97;

    case 86:
      current_block = (Rpc - LABEL_101);
      goto continuation_98;

    case 87:
      current_block = (Rpc - LABEL_102);
      goto continuation_99;

    case 88:
      current_block = (Rpc - LABEL_103);
      goto continuation_100;

    case 89:
      current_block = (Rpc - LABEL_104);
      goto continuation_101;

    case 90:
      current_block = (Rpc - LABEL_105);
      goto continuation_102;

    case 91:
      current_block = (Rpc - LABEL_106);
      goto label_114;

    case 92:
      current_block = (Rpc - LABEL_107);
      goto label_115;

    case 93:
      current_block = (Rpc - LABEL_108);
      goto expression_104;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_104)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_107])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_115)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_114)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	0,
	3,
	1,
	1,
	1,
	2,
	1,
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
	2,
	2,
	2,
	3,
	3,
	2,
	2,
	1,
	2,
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	2,
	3,
	1,
	2,
	0,
	0,
	1,
	2,
	1,
	1,
	1,
	2,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 56)
      goto label_113;
    blocks = (current_block [OBJECT_153]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_106])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_113)
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
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_38);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_125;
  Wrd5 = Wrd9;

DEFLABEL (label_124)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_43);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_37);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_96]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_64]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_63);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_123;
  Wrd11 = Wrd15;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_68]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_66);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_71);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_70])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_121;
  Wrd11 = Wrd15;

DEFLABEL (label_120)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_68]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_76);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_96]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_64]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_80);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_119;
  Wrd11 = Wrd15;

DEFLABEL (label_118)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_68]));

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_82);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x909, 2);
  (* (Rhp++)) = (dispatch_base + TAG_86);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_85])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_117;
  Wrd11 = Wrd15;

DEFLABEL (label_116)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_68]));

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_95);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd5.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_152]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96])), (Wrd12.pObj));

DEFLABEL (label_109)
  (Wrd11.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83])), (Wrd12.pObj));

DEFLABEL (label_108)
  (Wrd11.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77])), (Wrd12.pObj));

DEFLABEL (label_107)
  (Wrd11.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67])), (Wrd12.pObj));

DEFLABEL (label_106)
  (Wrd11.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50])), (Wrd6.pObj));

DEFLABEL (label_105)
  (Wrd5.Obj) = Rvl;
  goto label_124;

DEFLABEL (make_fake_compiled_procedure_111)
  CLOSURE_HEADER (LABEL_70);

DEFLABEL (make_fake_compiled_procedure_59)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (make_fake_compiled_block_112)
  CLOSURE_HEADER (LABEL_85);

DEFLABEL (make_fake_compiled_block_81)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd17.Obj) = (MAKE_OBJECT (0, 9));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (Wrd10.Obj) = (Rsp [8]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-10]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_cout_so_0a7721cb9e7cdfe4 [56] =
  {
    { "cout_so_code_1", 18, cout_so_code_1 },
    { "cout_so_code_2", 2, cout_so_code_2 },
    { "cout_so_code_3", 21, cout_so_code_3 },
    { "cout_so_code_4", 22, cout_so_code_4 },
    { "cout_so_code_5", 5, cout_so_code_5 },
    { "cout_so_code_6", 138, cout_so_code_6 },
    { "cout_so_code_7", 5, cout_so_code_7 },
    { "cout_so_code_8", 5, cout_so_code_8 },
    { "cout_so_code_9", 2, cout_so_code_9 },
    { "cout_so_code_10", 2, cout_so_code_10 },
    { "cout_so_code_11", 21, cout_so_code_11 },
    { "cout_so_code_12", 36, cout_so_code_12 },
    { "cout_so_code_13", 13, cout_so_code_13 },
    { "cout_so_code_14", 9, cout_so_code_14 },
    { "cout_so_code_15", 3, cout_so_code_15 },
    { "cout_so_code_16", 18, cout_so_code_16 },
    { "cout_so_code_17", 22, cout_so_code_17 },
    { "cout_so_code_18", 3, cout_so_code_18 },
    { "cout_so_code_19", 3, cout_so_code_19 },
    { "cout_so_code_20", 3, cout_so_code_20 },
    { "cout_so_code_21", 3, cout_so_code_21 },
    { "cout_so_code_22", 6, cout_so_code_22 },
    { "cout_so_code_23", 6, cout_so_code_23 },
    { "cout_so_code_24", 19, cout_so_code_24 },
    { "cout_so_code_25", 16, cout_so_code_25 },
    { "cout_so_code_26", 17, cout_so_code_26 },
    { "cout_so_code_27", 19, cout_so_code_27 },
    { "cout_so_code_28", 2, cout_so_code_28 },
    { "cout_so_code_29", 17, cout_so_code_29 },
    { "cout_so_code_30", 45, cout_so_code_30 },
    { "cout_so_code_31", 13, cout_so_code_31 },
    { "cout_so_code_32", 105, cout_so_code_32 },
    { "cout_so_code_33", 51, cout_so_code_33 },
    { "cout_so_code_34", 11, cout_so_code_34 },
    { "cout_so_code_35", 1, cout_so_code_35 },
    { "cout_so_code_36", 1, cout_so_code_36 },
    { "cout_so_code_37", 1, cout_so_code_37 },
    { "cout_so_code_38", 1, cout_so_code_38 },
    { "cout_so_code_39", 4, cout_so_code_39 },
    { "cout_so_code_40", 1, cout_so_code_40 },
    { "cout_so_code_41", 1, cout_so_code_41 },
    { "cout_so_code_42", 1, cout_so_code_42 },
    { "cout_so_code_43", 1, cout_so_code_43 },
    { "cout_so_code_44", 1, cout_so_code_44 },
    { "cout_so_code_45", 1, cout_so_code_45 },
    { "cout_so_code_46", 1, cout_so_code_46 },
    { "cout_so_code_47", 1, cout_so_code_47 },
    { "cout_so_code_48", 4, cout_so_code_48 },
    { "cout_so_code_49", 4, cout_so_code_49 },
    { "cout_so_code_50", 5, cout_so_code_50 },
    { "cout_so_code_51", 4, cout_so_code_51 },
    { "cout_so_code_52", 3, cout_so_code_52 },
    { "cout_so_code_53", 8, cout_so_code_53 },
    { "cout_so_code_54", 6, cout_so_code_54 },
    { "cout_so_code_55", 6, cout_so_code_55 },
    { "cout_so_code_56", 8, cout_so_code_56 }
  };

int
decl_cout_so_0a7721cb9e7cdfe4 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_cout_so_0a7721cb9e7cdfe4);
  return (0);
}

DECLARE_COMPILED_CODE ("cout.so", 94, decl_cout_so_0a7721cb9e7cdfe4, cout_so_0a7721cb9e7cdfe4)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_cout_so_data_0a7721cb9e7cdfe4 [14680] =
  "\xb6\x03\x6b\x95\x1b\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x0d\x0d"
  "\x08\xc1\xb9\xc1\xba\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82"
  "\x88\x0d\xbc\x24\x28\x0d\xbd\x28\x0d\xbe\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\xbf\x1d\xb0\x83\x88\x0d\x1c\x08\x0d\x1c\x0d\x1c\x0c\x0d"
  "\x1c\x0d\x0c\x80\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x08\x1b\x0c\x0c"
  "\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x08\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0c\x0d\x0d\x0d\x1c\x0c\x0d\x82\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x9c\x0c\x85\x0d\x0c\x81\x0c\x07\x0c\x0c\x0c\x0c\x83\xc2\x1c\x80"
  "\x1d\x0c\xb2\xb1\x0d\x0d\x1c\x0d\x1c\x0d\x0d\x0d\x1c\xb4\x24\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08\xb2"
  "\x0d\xb1\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\xb2\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb4\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x07\x1b\x1b\x1b\x1b\x0d\x1b\x0d"
  "\x0c\x08\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x1b\x1b\x1b\x0c\x80\x1b\x1b\x1b\x0d\x0c\x1d\x08\x0d\x1c"
  "\x25\x1b\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x0c\xc2\x0c\x0c\xc1\x1c\x0c\x1b\x24"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x02\x1b\x24\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\x80\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x02"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x02\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x83\x0c\x0c\x82\xc2\x1c\x02\x80\x1b\x08\x0c\xb2\x0d\x1c\x24\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x84\xc2\x1c\x80\xc1\x1c\x1b\x0d\x1c"
  "\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0f\x83\x1b\x81\x02\x0c\x0f\x0c\x0f"
  "\x0c\x0d\x1c\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\xc2\x0f\x02\x0f\xc3\x1c\x0f\xc2\x1b\x02\x80\x81\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb4\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\xb2\x08\x0d\x1c\x24\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x1d\xb2\x08\x80\x0d\x1c\x1b\x0d\x1c\x25\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x0d\x1c\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x08\x80\x1b\x1b"
  "\x25\x1b\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x1b\x81\x82\x0d\x1b\x0d\xb1\x0d\x80\x08\xb2\x0d\x0d"
  "\xb4\x0d\x0d\x0d\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
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
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb2\x0c\xb1\x82\x80\x08\x0d\xb4"
  "\x24\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28"
  "\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\xb4\x24\x28"
  "\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x1b\x80\xc1\x1c\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0d\x1c\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x0c\x82\x1b\x02\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x84\x0c\x1b\x82\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x25\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x80\x1b\x1b\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x06\x07\x02\xc2\x1c\x02\x0d\x0d\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x82"
  "\x02\x06\x07\x02\x1b\x02\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88"
  "\x1b\x1b\x2a\x0d\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x0c\x1b\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x0d\x1b\x2a\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x08\x8f\x1b\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x0d\x1b\x2a\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x08\x8b\x08"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x1b\x2a\x0d\x81\x0d\x82\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x2a\x80\x02"
  "\x1b\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\xb5\x1b"
  "\x2a\xb6\x1b\x2a\x0d\xb7\x2a\x1b\x1b\xc2\x02\x02\x0d\xc3\xb4\x07"
  "\xb3\x2a\x28\x0d\x28\x0d\x28\x0d\x26\x0d\x1b\x1b\x24\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22"
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
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5d\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2f\x6d\x61\x63\x68\x69\x6e\x65\x73\x2f\x43\x2f\x63"
  "\x6f\x75\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x08\x72\x65"
  "\x63\x65\x69\x76\x65\x04\x6c\x65\x74\x06\x62\x65\x67\x69\x6e\x04"
  "\x63\x61\x72\x04\x63\x64\x72\x70\x26\xfd\xff\x03\x6f\x24\xfd\xff"
  "\x03\x6e\x22\xfd\xff\x03\x6d\x20\xfd\xff\x03\x6c\x1e\xfd\xff\x03"
  "\x6b\x1c\xfd\xff\x03\x6a\x1a\xfd\xff\x03\x69\x18\xfd\xff\x03\x68"
  "\x16\xfd\xff\x03\x67\x14\xfd\xff\x03\x66\x12\xfd\xff\x03\x65\x10"
  "\xfd\xff\x03\x64\x0e\xff\xff\x03\x63\x0c\x81\x89\x02\x62\x0a\x81"
  "\x89\x02\x61\x08\x81\x85\x02\x60\x06\x81\x85\x02\x5f\x04\x84\x06"
  "\x25\x2e\x02\x10\x2a\x75\x73\x65\x2d\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x3f\x2a\x02\x03\x1b\x73\x74\x72\x69\x6e\x67\x69\x66\x79\x2d"
  "\x64\x61\x74\x61\x2f\x74\x72\x61\x64\x69\x74\x69\x6f\x6e\x61\x6c"
  "\x03\x18\x73\x74\x72\x69\x6e\x67\x69\x66\x79\x2d\x64\x61\x74\x61"
  "\x2f\x73\x74\x61\x63\x6b\x69\x66\x79\x03\x72\x06\x81\x83\x02\x71"
  "\x04\x83\x04\x05\x0f\x02\x05\x73\x6f\x62\x6a\x09\x07\x75\x63\x68"
  "\x61\x72\x2a\x0a\x0b\x75\x6e\x73\x74\x61\x63\x6b\x69\x66\x79\x0b"
  "\x1d\x44\x45\x43\x4c\x41\x52\x45\x5f\x56\x41\x52\x49\x41\x42\x4c"
  "\x45\x53\x5f\x46\x4f\x52\x5f\x4f\x42\x4a\x45\x43\x54\x07\x73\x69"
  "\x7a\x65\x6f\x66\x0c\x05\x70\x72\x6f\x67\x07\x5f\x64\x61\x74\x61"
  "\x5f\x04\x09\x73\x74\x61\x63\x6b\x69\x66\x79\x0d\x02\x14\x64\x65"
  "\x66\x61\x75\x6c\x74\x2d\x66\x69\x6c\x65\x2d\x68\x61\x6e\x64\x6c"
  "\x65\x0e\x02\x0b\x6d\x61\x6b\x65\x2d\x6e\x6f\x6e\x63\x65\x0f\x02"
  "\x07\x63\x3a\x6c\x69\x6e\x65\x10\x03\x18\x63\x61\x6e\x6f\x6e\x69"
  "\x63\x61\x6c\x69\x7a\x65\x2d\x6c\x61\x62\x65\x6c\x2d\x6e\x61\x6d"
  "\x65\x11\x05\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e"
  "\x64\x12\x02\x0c\x66\x69\x6c\x65\x2d\x70\x72\x65\x66\x69\x78\x13"
  "\x04\x08\x63\x3a\x65\x63\x61\x6c\x6c\x14\x06\x14\x04\x14\x64\x65"
  "\x63\x6c\x61\x72\x65\x2d\x64\x61\x74\x61\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x15\x03\x09\x63\x3a\x72\x65\x74\x75\x72\x6e\x16\x04\x07\x63"
  "\x3a\x61\x70\x74\x72\x17\x04\x1b\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x3e\x64\x61\x74\x61\x2d\x64\x65"
  "\x63\x6c\x18\x03\x08\x63\x3a\x73\x63\x61\x6c\x6c\x19\x04\x07\x63"
  "\x3a\x63\x61\x73\x74\x1a\x07\x08\x63\x3a\x67\x72\x6f\x75\x70\x1b"
  "\x05\x0f\x63\x3a\x64\x61\x74\x61\x2d\x73\x65\x63\x74\x69\x6f\x6e"
  "\x1c\x09\x05\x63\x3a\x66\x6e\x1d\x13\x87\x01\x2c\x81\x93\x02\x86"
  "\x01\x2a\x81\x91\x02\x85\x01\x28\x81\x8d\x02\x84\x01\x26\x81\x99"
  "\x02\x83\x01\x24\x81\x97\x02\x82\x01\x22\x81\x91\x02\x81\x01\x20"
  "\x81\x8f\x02\x80\x01\x1e\x81\x8d\x02\x7f\x1c\x81\x95\x02\x7e\x1a"
  "\x81\x91\x02\x7d\x18\x81\x8f\x02\x7c\x16\x81\x8d\x02\x7b\x14\x81"
  "\x8b\x02\x7a\x12\x81\x89\x02\x79\x10\x81\x87\x02\x78\x0e\x81\x89"
  "\x02\x77\x0c\x81\x87\x02\x76\x0a\x81\x85\x02\x75\x08\x81\x83\x02"
  "\x74\x06\x81\x83\x02\x73\x04\x83\x04\x2b\x5c\x1e\x02\x09\x1d\x44"
  "\x45\x43\x4c\x41\x52\x45\x5f\x56\x41\x52\x49\x41\x42\x4c\x45\x53"
  "\x5f\x46\x4f\x52\x5f\x4f\x42\x4a\x45\x43\x54\x07\x5f\x64\x61\x74"
  "\x61\x5f\x11\x74\x6f\x70\x5f\x6c\x65\x76\x65\x6c\x5f\x6f\x62\x6a"
  "\x65\x63\x74\x03\x22\x68\x61\x6e\x64\x6c\x65\x2d\x74\x6f\x70\x2d"
  "\x6c\x65\x76\x65\x6c\x2d\x64\x61\x74\x61\x2f\x74\x72\x61\x64\x69"
  "\x74\x69\x6f\x6e\x61\x6c\x1f\x02\x0e\x02\x0f\x03\x16\x03\x11\x05"
  "\x12\x04\x15\x03\x1c\x03\x09\x63\x3a\x67\x72\x6f\x75\x70\x2a\x20"
  "\x02\x10\x02\x13\x03\x19\x07\x1b\x04\x04\x6d\x61\x70\x21\x04\x07"
  "\x63\x3a\x64\x65\x63\x6c\x22\x0d\x1d\x11\x9d\x01\x2e\x81\x9b\x02"
  "\x9c\x01\x2c\x83\x04\x9b\x01\x2a\x81\x9b\x02\x9a\x01\x28\x81\x99"
  "\x02\x99\x01\x26\x81\x97\x02\x98\x01\x24\x81\x8b\x02\x97\x01\x22"
  "\x81\x95\x02\x96\x01\x20\x81\x8b\x02\x95\x01\x1e\x81\x93\x02\x94"
  "\x01\x1c\x81\x8b\x02\x93\x01\x1a\x81\x91\x02\x92\x01\x18\x81\x8b"
  "\x02\x91\x01\x16\x81\x8f\x02\x90\x01\x14\x81\x8d\x02\x8f\x01\x12"
  "\x81\x8b\x02\x8e\x01\x10\x81\x8d\x02\x8d\x01\x0e\x81\x8b\x02\x8c"
  "\x01\x0c\x81\x89\x02\x8b\x01\x0a\x81\x87\x02\x8a\x01\x08\x85\x08"
  "\x89\x01\x06\x81\x83\x02\x88\x01\x04\x83\x04\x2d\x56\x23\x02\x04"
  "\x0f\x64\x65\x63\x6c\x61\x72\x65\x2d\x6f\x62\x6a\x65\x63\x74\x24"
  "\x03\x26\x64\x65\x63\x6c\x61\x72\x65\x2d\x64\x79\x6e\x61\x6d\x69"
  "\x63\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x69\x6e\x69\x74\x69\x61\x6c"
  "\x69\x7a\x61\x74\x69\x6f\x6e\x25\x03\x1c\x02\x10\x05\x1b\x06\xa2"
  "\x01\x0c\x81\x87\x02\xa1\x01\x0a\x81\x87\x02\xa0\x01\x08\x81\x87"
  "\x02\x9f\x01\x06\x81\x85\x02\x9e\x01\x04\x84\x06\x0b\x19\x26\x02"
  "\x0e\x65\x6e\x74\x72\x79\x5f\x63\x6f\x75\x6e\x74\x5f\x74\x27\x0e"
  "\x63\x75\x72\x72\x65\x6e\x74\x5f\x62\x6c\x6f\x63\x6b\x28\x06\x73"
  "\x6f\x62\x6a\x2a\x29\x12\x44\x45\x43\x4c\x41\x52\x45\x5f\x56\x41"
  "\x52\x49\x41\x42\x4c\x45\x53\x07\x75\x6c\x6f\x6e\x67\x2a\x0b\x70"
  "\x6f\x70\x5f\x72\x65\x74\x75\x72\x6e\x0e\x64\x69\x73\x70\x61\x74"
  "\x63\x68\x5f\x62\x61\x73\x65\x2a\x12\x55\x4e\x43\x41\x43\x48\x45"
  "\x5f\x56\x41\x52\x49\x41\x42\x4c\x45\x53\x11\x70\x65\x72\x66\x6f"
  "\x72\x6d\x5f\x64\x69\x73\x70\x61\x74\x63\x68\x17\x49\x4e\x56\x4f"
  "\x4b\x45\x5f\x50\x52\x49\x4d\x49\x54\x49\x56\x45\x5f\x44\x45\x43"
  "\x4c\x53\x17\x49\x4e\x56\x4f\x4b\x45\x5f\x49\x4e\x54\x45\x52\x46"
  "\x41\x43\x45\x5f\x44\x45\x43\x4c\x53\x18\x49\x4e\x56\x4f\x4b\x45"
  "\x5f\x50\x52\x49\x4d\x49\x54\x49\x56\x45\x5f\x54\x41\x52\x47\x45"
  "\x54\x1a\x49\x4e\x56\x4f\x4b\x45\x5f\x49\x4e\x54\x45\x52\x46\x41"
  "\x43\x45\x5f\x54\x41\x52\x47\x45\x54\x5f\x34\x1a\x49\x4e\x56\x4f"
  "\x4b\x45\x5f\x49\x4e\x54\x45\x52\x46\x41\x43\x45\x5f\x54\x41\x52"
  "\x47\x45\x54\x5f\x33\x1a\x49\x4e\x56\x4f\x4b\x45\x5f\x49\x4e\x54"
  "\x45\x52\x46\x41\x43\x45\x5f\x54\x41\x52\x47\x45\x54\x5f\x32\x1a"
  "\x49\x4e\x56\x4f\x4b\x45\x5f\x49\x4e\x54\x45\x52\x46\x41\x43\x45"
  "\x5f\x54\x41\x52\x47\x45\x54\x5f\x31\x1a\x49\x4e\x56\x4f\x4b\x45"
  "\x5f\x49\x4e\x54\x45\x52\x46\x41\x43\x45\x5f\x54\x41\x52\x47\x45"
  "\x54\x5f\x30\x1f\x55\x74\x69\x6c\x69\x74\x69\x65\x73\x20\x74\x61"
  "\x6b\x65\x20\x61\x74\x20\x6d\x6f\x73\x74\x20\x34\x20\x61\x72\x67"
  "\x73\x3a\x09\x69\x6e\x66\x69\x6e\x69\x74\x79\x06\x64\x65\x63\x6c"
  "\x5f\x02\x5f\x06\x5f\x64\x61\x74\x61\x05\x64\x61\x74\x61\x01\x05"
  "\x63\x6f\x64\x65\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x2b"
  "\x02\x12\x50\x55\x52\x49\x46\x49\x43\x41\x54\x49\x4f\x4e\x5f\x52"
  "\x4f\x4f\x54\x1b\x2a\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x2d\x6f\x62\x6a\x65\x63\x74\x2a\x11\x2a"
  "\x73\x70\x65\x63\x69\x61\x6c\x2d\x6c\x61\x62\x65\x6c\x73\x2a\x2c"
  "\x12\x2a\x64\x69\x73\x61\x62\x6c\x65\x2d\x6e\x6f\x6e\x63\x65\x73"
  "\x3f\x2a\x2d\x13\x2a\x69\x6e\x76\x6f\x6b\x65\x2d\x69\x6e\x74\x65"
  "\x72\x66\x61\x63\x65\x2a\x18\x2a\x75\x73\x65\x64\x2d\x69\x6e\x76"
  "\x6f\x6b\x65\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2a\x12\x6d"
  "\x61\x79\x62\x65\x2d\x6c\x61\x70\x2d\x63\x6f\x6d\x6d\x65\x6e\x74"
  "\x2e\x08\x03\x0d\x73\x74\x72\x69\x6e\x67\x2d\x6e\x75\x6c\x6c\x3f"
  "\x04\x0e\x64\x65\x66\x69\x6e\x65\x2d\x6f\x62\x6a\x65\x63\x74\x03"
  "\x08\x72\x65\x76\x65\x72\x73\x65\x2f\x03\x0d\x6c\x69\x73\x74\x2d"
  "\x3e\x76\x65\x63\x74\x6f\x72\x30\x03\x0a\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x3f\x04\x12\x05\x12\x03\x0e\x6c\x61\x62\x65\x6c\x2d\x3e"
  "\x6f\x66\x66\x73\x65\x74\x03\x14\x2d\x3e\x6e\x61\x6d\x65\x73\x74"
  "\x72\x69\x6e\x67\x2f\x73\x68\x61\x72\x65\x64\x31\x02\x0e\x03\x0e"
  "\x68\x61\x6e\x64\x6c\x65\x2d\x6c\x61\x62\x65\x6c\x73\x0e\x03\x11"
  "\x03\x11\x63\x2d\x71\x75\x6f\x74\x69\x66\x79\x2d\x73\x74\x72\x69"
  "\x6e\x67\x11\x03\x1a\x68\x61\x6e\x64\x6c\x65\x2d\x66\x72\x65\x65"
  "\x2d\x72\x65\x66\x73\x2d\x61\x6e\x64\x2d\x73\x65\x74\x73\x32\x03"
  "\x0f\x68\x61\x6e\x64\x6c\x65\x2d\x6f\x62\x6a\x65\x63\x74\x73\x33"
  "\x02\x0f\x02\x1b\x04\x1b\x0a\x1b\x05\x1b\x04\x06\x65\x72\x72\x6f"
  "\x72\x34\x03\x10\x02\x10\x0c\x14\x6d\x61\x6b\x65\x2d\x64\x61\x74"
  "\x61\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x35\x03\x09\x63\x3a"
  "\x65\x78\x64\x65\x6e\x74\x04\x21\x04\x07\x61\x70\x70\x65\x6e\x64"
  "\x36\x03\x0f\x63\x3a\x63\x6f\x64\x65\x2d\x73\x65\x63\x74\x69\x6f"
  "\x6e\x37\x02\x09\x63\x3a\x70\x63\x2d\x72\x65\x67\x38\x03\x20\x0c"
  "\x16\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2f\x74\x72\x61\x64\x69"
  "\x74\x69\x6f\x6e\x61\x6c\x39\x0a\x13\x74\x6f\x70\x2d\x6c\x65\x76"
  "\x65\x6c\x2f\x73\x74\x61\x63\x6b\x69\x66\x79\x3a\x03\x1c\x03\x08"
  "\x63\x3a\x6c\x61\x62\x65\x6c\x03\x19\x03\x16\x03\x25\x03\x1f\x64"
  "\x65\x63\x6c\x61\x72\x65\x2d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x69"
  "\x6e\x69\x74\x69\x61\x6c\x69\x7a\x61\x74\x69\x6f\x6e\x3b\x02\x06"
  "\x63\x3a\x70\x6f\x70\x05\x07\x63\x3a\x63\x61\x73\x65\x3c\x02\x13"
  "\x03\x11\x63\x3a\x6f\x62\x6a\x65\x63\x74\x2d\x61\x64\x64\x72\x65"
  "\x73\x73\x3d\x05\x09\x63\x3a\x73\x77\x69\x74\x63\x68\x04\x04\x63"
  "\x3a\x2d\x3e\x03\x04\x63\x3a\x2a\x04\x1a\x03\x07\x63\x3a\x67\x6f"
  "\x74\x6f\x3f\x04\x04\x63\x3a\x3d\x40\x02\x0a\x63\x3a\x76\x61\x6c"
  "\x2d\x72\x65\x67\x02\x0c\x63\x3a\x64\x6c\x69\x6e\x6b\x2d\x72\x65"
  "\x67\x02\x16\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x64\x65\x63\x6c"
  "\x61\x72\x61\x74\x69\x6f\x6e\x73\x04\x0e\x63\x3a\x64\x65\x63\x6c"
  "\x2d\x75\x6e\x75\x73\x65\x64\x04\x22\x14\x1d\x37\xac\x02\x96\x02"
  "\x81\xaf\x02\xab\x02\x94\x02\x81\xad\x02\xaa\x02\x92\x02\x81\xab"
  "\x02\xa9\x02\x90\x02\x81\xab\x02\xa8\x02\x8e\x02\x81\xa9\x02\xa7"
  "\x02\x8c\x02\x81\xa7\x02\xa6\x02\x8a\x02\x81\xa5\x02\xa5\x02\x88"
  "\x02\x81\xa3\x02\xa4\x02\x86\x02\x81\xa5\x02\xa3\x02\x84\x02\x81"
  "\xa3\x02\xa2\x02\x82\x02\x81\xa1\x02\xa1\x02\x80\x02\x81\x9f\x02"
  "\xa0\x02\xfe\x01\x81\x9f\x02\x9f\x02\xfc\x01\x81\x9d\x02\x9e\x02"
  "\xfa\x01\x81\xa1\x02\x9d\x02\xf8\x01\x81\x85\x02\x9c\x02\xf6\x01"
  "\x81\xa5\x02\x9b\x02\xf4\x01\x81\xa3\x02\x9a\x02\xf2\x01\x81\xa1"
  "\x02\x99\x02\xf0\x01\x81\x9d\x02\x98\x02\xee\x01\x81\x9f\x02\x97"
  "\x02\xec\x01\x81\x9d\x02\x96\x02\xea\x01\x81\x9b\x02\x95\x02\xe8"
  "\x01\x81\x89\x02\x94\x02\xe6\x01\x81\x87\x02\x93\x02\xe4\x01\x81"
  "\x9f\x02\x92\x02\xe2\x01\x81\x9d\x02\x91\x02\xe0\x01\x81\x85\x02"
  "\x90\x02\xde\x01\x81\x9d\x02\x8f\x02\xdc\x01\x83\x04\x8e\x02\xda"
  "\x01\x81\x9d\x02\x8d\x02\xd8\x01\x81\x9b\x02\x8c\x02\xd6\x01\x81"
  "\x99\x02\x8b\x02\xd4\x01\x81\x87\x02\x8a\x02\xd2\x01\x81\x85\x02"
  "\x89\x02\xd0\x01\x81\x89\x02\x88\x02\xce\x01\x81\x85\x02\x87\x02"
  "\xcc\x01\x81\x97\x02\x86\x02\xca\x01\x81\x85\x02\x85\x02\xc8\x01"
  "\x81\xa3\x02\x84\x02\xc6\x01\x81\xa3\x02\x83\x02\xc4\x01\x81\xa5"
  "\x02\x82\x02\xc2\x01\x81\x9d\x02\x81\x02\xc0\x01\x81\x9b\x02\x80"
  "\x02\xbe\x01\x81\x99\x02\xff\x01\xbc\x01\x81\x97\x02\xfe\x01\xba"
  "\x01\x81\x87\x02\xfd\x01\xb8\x01\x81\x83\x02\xfc\x01\xb6\x01\x81"
  "\x87\x02\xfb\x01\xb4\x01\x81\x83\x02\xfa\x01\xb2\x01\x81\x91\x02"
  "\xf9\x01\xb0\x01\x81\x93\x02\xf8\x01\xae\x01\x81\x93\x02\xf7\x01"
  "\xac\x01\x81\x91\x02\xf6\x01\xaa\x01\x81\x93\x02\xf5\x01\xa8\x01"
  "\x81\x93\x02\xf4\x01\xa6\x01\x81\x91\x02\xf3\x01\xa4\x01\x81\x8f"
  "\x02\xf2\x01\xa2\x01\x81\xa3\x02\xf1\x01\xa0\x01\x81\xa3\x02\xf0"
  "\x01\x9e\x01\x81\xa5\x02\xef\x01\x9c\x01\x81\xa5\x02\xee\x01\x9a"
  "\x01\x81\xa5\x02\xed\x01\x98\x01\x81\x97\x02\xec\x01\x96\x01\x81"
  "\x95\x02\xeb\x01\x94\x01\x81\x91\x02\xea\x01\x92\x01\x81\x8f\x02"
  "\xe9\x01\x90\x01\x81\x8d\x02\xe8\x01\x8e\x01\x81\xa3\x02\xe7\x01"
  "\x8c\x01\x81\xa3\x02\xe6\x01\x8a\x01\x81\xa3\x02\xe5\x01\x88\x01"
  "\x81\xa5\x02\xe4\x01\x86\x01\x81\xa3\x02\xe3\x01\x84\x01\x81\xa5"
  "\x02\xe2\x01\x82\x01\x81\x87\x02\xe1\x01\x80\x01\x81\x9b\x02\xe0"
  "\x01\x7e\x81\x8b\x02\xdf\x01\x7c\x81\xa1\x02\xde\x01\x7a\x81\xa3"
  "\x02\xdd\x01\x78\x81\xa1\x02\xdc\x01\x76\x81\xa3\x02\xdb\x01\x74"
  "\x84\x06\xda\x01\x72\x81\x87\x02\xd9\x01\x70\x81\xa5\x02\xd8\x01"
  "\x6e\x81\xa5\x02\xd7\x01\x6c\x81\xa3\x02\xd6\x01\x6a\x81\xa1\x02"
  "\xd5\x01\x68\x81\xa1\x02\xd4\x01\x66\x81\xa1\x02\xd3\x01\x64\x81"
  "\x9d\x02\xd2\x01\x62\x81\xa1\x02\xd1\x01\x60\x81\x9b\x02\xd0\x01"
  "\x5e\x81\x99\x02\xcf\x01\x5c\x81\x97\x02\xce\x01\x5a\x81\x95\x02"
  "\xcd\x01\x58\x81\x93\x02\xcc\x01\x56\x81\x8b\x02\xcb\x01\x54\x81"
  "\x93\x02\xca\x01\x52\x81\x8f\x02\xc9\x01\x50\x81\x8b\x02\xc8\x01"
  "\x4e\x81\x85\x02\xc7\x01\x4c\x81\x95\x02\xc6\x01\x4a\x81\x8f\x02"
  "\xc5\x01\x48\x81\x8f\x02\xc4\x01\x46\x81\x8d\x02\xc3\x01\x44\x81"
  "\x87\x02\xc2\x01\x42\x81\x83\x02\xc1\x01\x40\x81\x93\x02\xc0\x01"
  "\x3e\x81\x8d\x02\xbf\x01\x3c\x81\x85\x02\xbe\x01\x3a\x81\x83\x02"
  "\xbd\x01\x38\x81\x93\x02\xbc\x01\x36\x81\x8d\x02\xbb\x01\x34\x81"
  "\x8b\x02\xba\x01\x32\x81\x8b\x02\xb9\x01\x30\x81\x85\x02\xb8\x01"
  "\x2e\x81\x85\x02\xb7\x01\x2c\x81\x85\x02\xb6\x01\x2a\x81\x83\x02"
  "\xb5\x01\x28\x81\x97\x02\xb4\x01\x26\x81\x97\x02\xb3\x01\x24\x81"
  "\x95\x02\xb2\x01\x22\x81\x97\x02\xb1\x01\x20\x81\x97\x02\xb0\x01"
  "\x1e\x81\x93\x02\xaf\x01\x1c\x81\x97\x02\xae\x01\x1a\x81\x99\x02"
  "\xad\x01\x18\x81\x99\x02\xac\x01\x16\x81\x95\x02\xab\x01\x14\x81"
  "\x95\x02\xaa\x01\x12\x81\x95\x02\xa9\x01\x10\x81\x93\x02\xa8\x01"
  "\x0e\x81\x89\x02\xa7\x01\x0c\x81\x93\x02\xa6\x01\x0a\x81\x97\x02"
  "\xa5\x01\x08\x81\x97\x02\xa4\x01\x06\x81\x95\x02\xa3\x01\x04\x86"
  "\x0a\x95\x02\xae\x03\x41\x02\x08\x03\x0d\x6c\x61\x70\x2d\x63\x6f"
  "\x6d\x6d\x65\x6e\x74\x3f\x42\x03\x11\x6c\x61\x70\x2d\x63\x6f\x6d"
  "\x6d\x65\x6e\x74\x2d\x74\x65\x78\x74\x43\x03\x10\x03\x0a\x63\x3a"
  "\x63\x6f\x6d\x6d\x65\x6e\x74\x44\x03\x10\x77\x72\x69\x74\x65\x2d"
  "\x74\x6f\x2d\x73\x74\x72\x69\x6e\x67\x45\x06\xb1\x02\x0c\x81\x87"
  "\x02\xb0\x02\x0a\x81\x85\x02\xaf\x02\x08\x81\x83\x02\xae\x02\x06"
  "\x81\x83\x02\xad\x02\x04\x83\x04\x0b\x19\x46\x02\x09\x08\x63\x6f"
  "\x6d\x6d\x65\x6e\x74\xb6\x02\x0c\x81\x83\x02\xb5\x02\x0a\x81\x83"
  "\x02\xb4\x02\x08\x81\x83\x02\xb3\x02\x06\x81\x83\x02\xb2\x02\x04"
  "\x83\x04\x0b\x13\x47\x02\x0a\xb8\x02\x06\x81\x83\x02\xb7\x02\x04"
  "\x83\x04\x05\x0a\x48\x02\x0b\x02\x0b\x20\x6d\x61\x6b\x65\x2d\x64"
  "\x61\x74\x61\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x2f\x74\x72"
  "\x61\x64\x69\x74\x69\x6f\x6e\x61\x6c\x49\x09\x1d\x6d\x61\x6b\x65"
  "\x2d\x64\x61\x74\x61\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x2f"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x4a\x03\xba\x02\x06\x81\x95\x02"
  "\xb9\x02\x04\x8c\x16\x05\x0f\x4b\x02\x0c\x10\x41\x4c\x4c\x4f\x43"
  "\x41\x54\x45\x5f\x56\x45\x43\x54\x4f\x52\x2a\x27\x29\x28\x06\x75"
  "\x6c\x6f\x6e\x67\x09\x07\x6f\x62\x6a\x65\x63\x74\x1b\x44\x45\x43"
  "\x4c\x41\x52\x45\x5f\x56\x41\x52\x49\x41\x42\x4c\x45\x53\x5f\x46"
  "\x4f\x52\x5f\x44\x41\x54\x41\x03\x07\x63\x3a\x63\x70\x74\x72\x4c"
  "\x02\x1b\x03\x20\x03\x16\x02\x10\x03\x19\x04\x21\x03\x3d\x04\x22"
  "\x05\x22\x04\x1a\x10\x1d\x04\x14\x0e\xcf\x02\x2c\x81\xab\x02\xce"
  "\x02\x2a\x81\xa9\x02\xcd\x02\x28\x81\xa7\x02\xcc\x02\x26\x81\xa7"
  "\x02\xcb\x02\x24\x81\xad\x02\xca\x02\x22\x81\xa5\x02\xc9\x02\x20"
  "\x83\x04\xc8\x02\x1e\x81\xa5\x02\xc7\x02\x1c\x81\xa3\x02\xc6\x02"
  "\x1a\x81\xa1\x02\xc5\x02\x18\x81\x9f\x02\xc4\x02\x16\x81\x9d\x02"
  "\xc3\x02\x14\x81\x9b\x02\xc2\x02\x12\x81\x99\x02\xc1\x02\x10\x81"
  "\x85\x02\xc0\x02\x0e\x81\x97\x02\xbf\x02\x0c\x81\x93\x02\xbe\x02"
  "\x0a\x81\x97\x02\xbd\x02\x08\x81\x95\x02\xbc\x02\x06\x81\x93\x02"
  "\xbb\x02\x04\x8b\x14\x2b\x54\x4d\x02\x0d\x27\x09\x29\x0a\x0b\x1b"
  "\x44\x45\x43\x4c\x41\x52\x45\x5f\x56\x41\x52\x49\x41\x42\x4c\x45"
  "\x53\x5f\x46\x4f\x52\x5f\x44\x41\x54\x41\x28\x0c\x2a\x04\x63\x63"
  "\x62\x06\x70\x72\x6f\x67\x5f\x02\x0c\x2a\x73\x75\x62\x62\x6c\x6f"
  "\x63\x6b\x73\x2a\x29\x02\x29\x13\x66\x61\x6b\x65\x2d\x62\x6c\x6f"
  "\x63\x6b\x2d\x3e\x63\x2d\x63\x6f\x64\x65\x27\x03\x05\x36\x02\x1b"
  "\x05\x1b\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69"
  "\x64\x2d\x62\x69\x6e\x64\x0c\x03\x30\x04\x0d\x04\x12\x03\x09\x72"
  "\x65\x76\x65\x72\x73\x65\x21\x30\x03\x4c\x04\x21\x02\x10\x03\x3d"
  "\x03\x16\x03\x20\x04\x18\x04\x14\x06\x14\x04\x40\x04\x17\x03\x19"
  "\x04\x1a\x04\x22\x0d\x1d\x18\xf3\x02\x4a\x81\x99\x02\xf2\x02\x48"
  "\x81\x97\x02\xf1\x02\x46\x81\x95\x02\xf0\x02\x44\x81\x9b\x02\xef"
  "\x02\x42\x81\x99\x02\xee\x02\x40\x81\x93\x02\xed\x02\x3e\x81\x97"
  "\x02\xec\x02\x3c\x81\x93\x02\xeb\x02\x3a\x81\x91\x02\xea\x02\x38"
  "\x81\x8f\x02\xe9\x02\x36\x81\x85\x02\xe8\x02\x34\x81\x91\x02\xe7"
  "\x02\x32\x81\x8f\x02\xe6\x02\x30\x81\x8d\x02\xe5\x02\x2e\x81\x8d"
  "\x02\xe4\x02\x2c\x81\x8b\x02\xe3\x02\x2a\x81\x8f\x02\xe2\x02\x28"
  "\x81\x8d\x02\xe1\x02\x26\x81\x8b\x02\xe0\x02\x24\x81\x91\x02\xdf"
  "\x02\x22\x81\x89\x02\xde\x02\x20\x81\x87\x02\xdd\x02\x1e\x81\x85"
  "\x02\xdc\x02\x1c\x81\x89\x02\xdb\x02\x1a\x81\x85\x02\xda\x02\x18"
  "\x81\x91\x02\xd9\x02\x16\x81\x83\x02\xd8\x02\x14\x81\x91\x02\xd7"
  "\x02\x12\x81\x83\x02\xd6\x02\x10\x81\x85\x02\xd5\x02\x0e\x81\x83"
  "\x02\xd4\x02\x0c\x81\x83\x02\xd3\x02\x0a\x81\x83\x02\xd2\x02\x08"
  "\x81\x91\x02\xd1\x02\x06\x81\x8f\x02\xd0\x02\x04\x89\x10\x49\x8e"
  "\x01\x3d\x02\x0e\x02\x3b\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x1c"
  "\x73\x74\x61\x74\x69\x63\x20\x63\x6f\x6e\x73\x74\x20\x75\x6e\x73"
  "\x69\x67\x6e\x65\x64\x20\x63\x68\x61\x72\x20\x03\x20\x5b\x0e\x73"
  "\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x22\x04\x5d\x20"
  "\x3d\x10\x02\x03\x07\x63\x3a\x65\x78\x70\x72\x03\x1e\x63\x2d\x71"
  "\x75\x6f\x74\x69\x66\x79\x2d\x64\x61\x74\x61\x2d\x73\x74\x72\x69"
  "\x6e\x67\x2f\x62\x72\x65\x61\x6b\x75\x70\x17\x03\x06\x63\x3a\x76"
  "\x61\x72\x04\x1b\x03\x0a\x63\x3a\x69\x6e\x64\x65\x6e\x74\x2a\x03"
  "\x0a\x6c\x61\x73\x74\x2d\x70\x61\x69\x72\x07\x10\x04\x21\x04\x12"
  "\x0a\x80\x03\x1c\x81\x89\x02\xff\x02\x1a\x81\x85\x02\xfe\x02\x18"
  "\x81\x83\x02\xfd\x02\x16\x81\x83\x02\xfc\x02\x14\x81\x85\x02\xfb"
  "\x02\x12\x81\x8d\x02\xfa\x02\x10\x81\x89\x02\xf9\x02\x0e\x81\x87"
  "\x02\xf8\x02\x0c\x81\x85\x02\xf7\x02\x0a\x81\x89\x02\xf6\x02\x08"
  "\x81\x85\x02\xf5\x02\x06\x81\x8b\x02\xf4\x02\x04\x84\x06\x1b\x3a"
  "\x0d\x02\x0f\x0b\x67\x65\x6e\x65\x72\x61\x74\x65\x64\x20\x12\x20"
  "\x62\x79\x20\x4c\x69\x61\x72\x20\x76\x65\x72\x73\x69\x6f\x6e\x20"
  "\x08\x55\x4e\x4b\x4e\x4f\x57\x4e\x1f\x45\x6d\x61\x63\x73\x3a\x20"
  "\x74\x68\x69\x73\x20\x69\x73\x20\x2d\x2a\x2d\x20\x43\x20\x2d\x2a"
  "\x2d\x20\x63\x6f\x64\x65\x2c\x07\x6c\x69\x61\x72\x2f\x63\x02\x2e"
  "\x08\x6c\x69\x61\x72\x63\x2e\x68\x03\x0a\x63\x3a\x69\x6e\x63\x6c"
  "\x75\x64\x65\x02\x10\x03\x10\x03\x1d\x67\x65\x74\x2d\x73\x75\x62"
  "\x73\x79\x73\x74\x65\x6d\x2d\x76\x65\x72\x73\x69\x6f\x6e\x2d\x73"
  "\x74\x72\x69\x6e\x67\x03\x44\x07\x44\x02\x11\x67\x65\x74\x2d\x64"
  "\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x06\x1b\x09\x89\x03"
  "\x14\x81\x8f\x02\x88\x03\x12\x81\x89\x02\x87\x03\x10\x81\x87\x02"
  "\x86\x03\x0e\x81\x8b\x02\x85\x03\x0c\x81\x87\x02\x84\x03\x0a\x81"
  "\x85\x02\x83\x03\x08\x81\x83\x02\x82\x03\x06\x81\x81\x02\x81\x03"
  "\x04\x82\x02\x13\x2e\x44\x02\x10\x06\x6e\x6f\x6e\x63\x65\x09\x2d"
  "\x02\x03\x13\x72\x61\x6e\x64\x6f\x6d\x2d\x62\x79\x74\x65\x2d\x76"
  "\x65\x63\x74\x6f\x72\x0b\x03\x17\x76\x65\x63\x74\x6f\x72\x2d\x38"
  "\x62\x2d\x3e\x68\x65\x78\x61\x64\x65\x63\x69\x6d\x61\x6c\x0a\x03"
  "\x8c\x03\x08\x81\x81\x02\x8b\x03\x06\x81\x81\x02\x8a\x03\x04\x82"
  "\x02\x07\x13\x4e\x02\x11\x04\x11\x64\x65\x63\x6c\x61\x72\x65\x2d"
  "\x73\x75\x62\x63\x6f\x64\x65\x73\x4f\x06\x0d\x64\x65\x63\x6c\x61"
  "\x72\x65\x2d\x63\x6f\x64\x65\x50\x04\x24\x02\x10\x04\x1a\x64\x65"
  "\x63\x6c\x61\x72\x65\x2d\x64\x61\x74\x61\x2d\x6e\x6f\x2d\x73\x75"
  "\x62\x62\x6c\x6f\x63\x6b\x73\x51\x02\x07\x63\x3a\x70\x61\x67\x65"
  "\x52\x05\x37\x07\x37\x05\x1b\x05\x1c\x0b\x9e\x03\x26\x81\x99\x02"
  "\x9d\x03\x24\x81\x97\x02\x9c\x03\x22\x81\x95\x02\x9b\x03\x20\x81"
  "\x91\x02\x9a\x03\x1e\x81\x95\x02\x99\x03\x1c\x81\x91\x02\x98\x03"
  "\x1a\x81\x95\x02\x97\x03\x18\x81\x93\x02\x96\x03\x16\x81\x91\x02"
  "\x95\x03\x14\x81\x95\x02\x94\x03\x12\x81\x93\x02\x93\x03\x10\x81"
  "\x91\x02\x92\x03\x0e\x81\x93\x02\x91\x03\x0c\x81\x91\x02\x90\x03"
  "\x0a\x81\x93\x02\x8f\x03\x08\x81\x91\x02\x8e\x03\x06\x81\x91\x02"
  "\x8d\x03\x04\x8a\x12\x25\x3d\x53\x02\x12\x04\x69\x6e\x74\x54\x03"
  "\x16\x08\x1d\x02\x10\x05\x0d\x64\x65\x63\x6c\x61\x72\x65\x2d\x64"
  "\x61\x74\x61\x55\x04\x24\x05\x37\x07\x37\x06\x50\x05\x1b\x07\x1c"
  "\x0b\xb4\x03\x2e\x81\xa1\x02\xb3\x03\x2c\x81\xa1\x02\xb2\x03\x2a"
  "\x81\xa1\x02\xb1\x03\x28\x81\x9d\x02\xb0\x03\x26\x81\x99\x02\xaf"
  "\x03\x24\x81\x9d\x02\xae\x03\x22\x81\x99\x02\xad\x03\x20\x81\x9d"
  "\x02\xac\x03\x1e\x81\x9b\x02\xab\x03\x1c\x81\x99\x02\xaa\x03\x1a"
  "\x81\x9b\x02\xa9\x03\x18\x81\x99\x02\xa8\x03\x16\x81\x9b\x02\xa7"
  "\x03\x14\x81\x99\x02\xa6\x03\x12\x81\x9d\x02\xa5\x03\x10\x81\x99"
  "\x02\xa4\x03\x0e\x81\x99\x02\xa3\x03\x0c\x81\x99\x02\xa2\x03\x0a"
  "\x81\x97\x02\xa1\x03\x08\x81\x97\x02\xa0\x03\x06\x81\x95\x02\x9f"
  "\x03\x04\x8c\x16\x2d\x48\x37\x02\x13\x16\x44\x45\x43\x4c\x41\x52"
  "\x45\x5f\x43\x4f\x4d\x50\x49\x4c\x45\x44\x5f\x43\x4f\x44\x45\x03"
  "\x09\x63\x3a\x73\x74\x72\x69\x6e\x67\x1c\x03\x10\x07\x07\x63\x3a"
  "\x63\x61\x6c\x6c\x56\x04\xb7\x03\x08\x81\x91\x02\xb6\x03\x06\x81"
  "\x89\x02\xb5\x03\x04\x86\x0a\x07\x12\x57\x02\x14\x19\x44\x45\x43"
  "\x4c\x41\x52\x45\x5f\x43\x4f\x4d\x50\x49\x4c\x45\x44\x5f\x44\x41"
  "\x54\x41\x5f\x4e\x53\x03\x1c\x03\x10\x05\x56\x04\xba\x03\x08\x81"
  "\x89\x02\xb9\x03\x06\x81\x85\x02\xb8\x03\x04\x84\x06\x07\x12\x58"
  "\x02\x15\x16\x44\x45\x43\x4c\x41\x52\x45\x5f\x43\x4f\x4d\x50\x49"
  "\x4c\x45\x44\x5f\x44\x41\x54\x41\x03\x1c\x03\x10\x06\x56\x04\xbd"
  "\x03\x08\x81\x8d\x02\xbc\x03\x06\x81\x87\x02\xbb\x03\x04\x85\x08"
  "\x07\x12\x59\x02\x16\x14\x44\x45\x43\x4c\x41\x52\x45\x5f\x44\x41"
  "\x54\x41\x5f\x4f\x42\x4a\x45\x43\x54\x03\x1c\x03\x10\x05\x56\x04"
  "\xc0\x03\x08\x81\x89\x02\xbf\x03\x06\x81\x85\x02\xbe\x03\x04\x84"
  "\x06\x07\x12\x5a\x02\x17\x1f\x44\x45\x43\x4c\x41\x52\x45\x5f\x44"
  "\x59\x4e\x41\x4d\x49\x43\x5f\x49\x4e\x49\x54\x49\x41\x4c\x49\x5a"
  "\x41\x54\x49\x4f\x4e\x09\x03\x0b\x03\x10\x03\x1c\x03\x0a\x05\x56"
  "\x06\xc6\x03\x0e\x81\x87\x02\xc5\x03\x0c\x81\x89\x02\xc4\x03\x0a"
  "\x81\x87\x02\xc3\x03\x08\x81\x85\x02\xc2\x03\x06\x81\x83\x02\xc1"
  "\x03\x04\x83\x04\x0d\x1d\x5b\x02\x18\x26\x44\x45\x43\x4c\x41\x52"
  "\x45\x5f\x44\x59\x4e\x41\x4d\x49\x43\x5f\x4f\x42\x4a\x45\x43\x54"
  "\x5f\x49\x4e\x49\x54\x49\x41\x4c\x49\x5a\x41\x54\x49\x4f\x4e\x09"
  "\x03\x0b\x03\x10\x03\x1c\x03\x0a\x05\x56\x06\xcc\x03\x0e\x81\x87"
  "\x02\xcb\x03\x0c\x81\x89\x02\xca\x03\x0a\x81\x87\x02\xc9\x03\x08"
  "\x81\x85\x02\xc8\x03\x06\x81\x83\x02\xc7\x03\x04\x83\x04\x0d\x1d"
  "\x56\x02\x19\x21\x73\x74\x61\x74\x69\x63\x20\x63\x6f\x6e\x73\x74"
  "\x20\x73\x74\x72\x75\x63\x74\x20\x6c\x69\x61\x72\x63\x5f\x63\x6f"
  "\x64\x65\x5f\x53\x19\x44\x45\x43\x4c\x41\x52\x45\x5f\x53\x55\x42"
  "\x43\x4f\x44\x45\x5f\x4d\x55\x4c\x54\x49\x50\x4c\x45\x0c\x25\x72"
  "\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x0b\x08\x54\x05\x61\x72\x72"
  "\x5f\x16\x66\x61\x6b\x65\x2d\x62\x6c\x6f\x63\x6b\x2d\x3e\x63\x6f"
  "\x64\x65\x2d\x64\x65\x63\x6c\x54\x02\x04\x12\x04\x21\x03\x16\x03"
  "\x20\x08\x1d\x03\x07\x6c\x65\x6e\x67\x74\x68\x03\x1c\x02\x10\x04"
  "\x19\x06\x0d\x63\x3a\x61\x72\x72\x61\x79\x2d\x64\x65\x63\x6c\x05"
  "\x0e\x63\x3a\x73\x74\x72\x75\x63\x74\x2d\x69\x6e\x69\x74\x05\x1b"
  "\x0d\xdf\x03\x28\x81\x8d\x02\xde\x03\x26\x81\x89\x02\xdd\x03\x24"
  "\x81\x87\x02\xdc\x03\x22\x81\x85\x02\xdb\x03\x20\x81\x8b\x02\xda"
  "\x03\x1e\x81\x8b\x02\xd9\x03\x1c\x81\x89\x02\xd8\x03\x1a\x81\x87"
  "\x02\xd7\x03\x18\x81\x83\x02\xd6\x03\x16\x83\x04\xd5\x03\x14\x81"
  "\x89\x02\xd4\x03\x12\x81\x87\x02\xd3\x03\x10\x81\x8d\x02\xd2\x03"
  "\x0e\x81\x85\x02\xd1\x03\x0c\x81\x8f\x02\xd0\x03\x0a\x81\x8d\x02"
  "\xcf\x03\x08\x81\x93\x02\xce\x03\x06\x81\x85\x02\xcd\x03\x04\x84"
  "\x06\x27\x50\x1d\x02\x1a\x2d\x43\x2d\x71\x75\x6f\x74\x69\x66\x79"
  "\x2d\x73\x74\x72\x69\x6e\x67\x3a\x20\x4c\x61\x72\x67\x65\x20\x63"
  "\x68\x61\x72\x61\x63\x74\x65\x72\x20\x65\x78\x70\x61\x6e\x73\x69"
  "\x6f\x6e\x21\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x16\x10"
  "\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x0a"
  "\x22\x19\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x63\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x71\x75\x6f\x74\x65\x64\x5c\x02\x06\x20\x73\x75"
  "\x62\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78"
  "\x74\x2d\x63\x68\x61\x72\x2d\x69\x6e\x2d\x73\x65\x74\x05\x0a\x73"
  "\x75\x62\x73\x74\x72\x69\x6e\x67\x5d\x07\x10\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x21\x04\x16\x63\x2d\x71\x75"
  "\x6f\x74\x69\x66\x79\x2d\x73\x74\x72\x69\x6e\x67\x2d\x63\x68\x61"
  "\x72\x5e\x04\x34\x06\xef\x03\x22\x81\x95\x02\xee\x03\x20\x81\x8d"
  "\x02\xed\x03\x1e\x81\x95\x02\xec\x03\x1c\x81\x91\x02\xeb\x03\x1a"
  "\x81\x8f\x02\xea\x03\x18\x81\x95\x02\xe9\x03\x16\x81\x95\x02\xe8"
  "\x03\x14\x81\x93\x02\xe7\x03\x12\x81\x93\x02\xe6\x03\x10\x81\x8b"
  "\x02\xe5\x03\x0e\x81\x91\x02\xe4\x03\x0c\x81\x8d\x02\xe3\x03\x0a"
  "\x81\x8b\x02\xe2\x03\x08\x81\x85\x02\xe1\x03\x06\x81\x83\x02\xe0"
  "\x03\x04\x83\x04\x21\x37\x5f\x02\x1b\x02\x5c\x01\x31\x22\x09\x03"
  "\x5c\x3f\x01\x40\x03\x5c\x30\x01\x01\x05\x5c\x30\x30\x30\x17\x63"
  "\x68\x61\x72\x2d\x73\x65\x74\x3a\x63\x2d\x6e\x61\x6d\x65\x64\x2d"
  "\x63\x68\x61\x72\x73\x60\x11\x63\x68\x61\x72\x2d\x73\x65\x74\x3a"
  "\x6e\x75\x6d\x65\x72\x69\x63\x03\x04\x11\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x3f\x03\x0a\x63\x68\x61\x72"
  "\x2d\x63\x6f\x64\x65\x03\x07\x73\x74\x72\x69\x6e\x67\x05\x5d\x03"
  "\x45\x04\x0c\x6d\x61\x6b\x65\x2d\x73\x74\x72\x69\x6e\x67\x04\x12"
  "\x04\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67"
  "\x5d\x09\x80\x04\x24\x81\x83\x02\xff\x03\x22\x81\x8b\x02\xfe\x03"
  "\x20\x81\x85\x02\xfd\x03\x1e\x81\x87\x02\xfc\x03\x1c\x81\x87\x02"
  "\xfb\x03\x1a\x81\x83\x02\xfa\x03\x18\x81\x83\x02\xf9\x03\x16\x81"
  "\x87\x02\xf8\x03\x14\x81\x87\x02\xf7\x03\x12\x81\x87\x02\xf6\x03"
  "\x10\x81\x87\x02\xf5\x03\x0e\x81\x85\x02\xf4\x03\x0c\x81\x89\x02"
  "\xf3\x03\x0a\x81\x85\x02\xf2\x03\x08\x81\x85\x02\xf1\x03\x06\x81"
  "\x89\x02\xf0\x03\x04\x84\x06\x23\x45\x45\x02\x1c\x13\x73\x65\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x21\x01"
  "\x23\x11\x01\x79\x0c\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x74\x21"
  "\x61\x01\x5d\x0e\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x72\x65"
  "\x66\x0a\x43\x03\x11\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x04\x0c\x64\x69\x67\x69\x74\x2d\x3e\x63\x68"
  "\x61\x72\x03\x93\x04\x28\xfd\xff\x03\x92\x04\x26\xfd\xff\x03\x91"
  "\x04\x24\xfd\xff\x03\x90\x04\x22\xfd\xff\x03\x8f\x04\x20\xfd\xff"
  "\x03\x8e\x04\x1e\xfd\xff\x03\x8d\x04\x1c\x81\x83\x02\x8c\x04\x1a"
  "\x81\x81\x02\x8b\x04\x18\xfd\xff\x03\x8a\x04\x16\xfd\xff\x03\x89"
  "\x04\x14\xfd\xff\x03\x88\x04\x12\xfd\xff\x03\x87\x04\x10\xfd\xff"
  "\x03\x86\x04\x0e\xfd\xff\x03\x85\x04\x0c\xff\xff\x03\x84\x04\x0a"
  "\x81\x81\x02\x83\x04\x08\x81\x89\x02\x82\x04\x06\x81\x83\x02\x81"
  "\x04\x04\x83\x04\x27\x3b\x62\x02\x1d\x02\x03\x1b\x68\x61\x6e\x64"
  "\x6c\x65\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2f\x74\x72\x61\x64\x69"
  "\x74\x69\x6f\x6e\x61\x6c\x63\x03\x18\x68\x61\x6e\x64\x6c\x65\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x73\x2f\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x64\x03\x95\x04\x06\x81\x83\x02\x94\x04\x04\x83\x04\x05\x0f\x65"
  "\x02\x1e\x08\x6f\x62\x6a\x65\x63\x74\x73\x66\x02\x03\x2f\x04\x09"
  "\x63\x3a\x64\x65\x66\x69\x6e\x65\x67\x02\x1b\x03\x20\x03\x30\x06"
  "\xa6\x04\x24\x81\x85\x02\xa5\x04\x22\x81\x8d\x02\xa4\x04\x20\x81"
  "\x8d\x02\xa3\x04\x1e\x81\x8d\x02\xa2\x04\x1c\x81\x8d\x02\xa1\x04"
  "\x1a\x81\x8b\x02\xa0\x04\x18\x81\x8b\x02\x9f\x04\x16\x81\x8b\x02"
  "\x9e\x04\x14\x81\x89\x02\x9d\x04\x12\x81\x8f\x02\x9c\x04\x10\x81"
  "\x8b\x02\x9b\x04\x0e\x81\x89\x02\x9a\x04\x0c\x81\x89\x02\x99\x04"
  "\x0a\x81\x85\x02\x98\x04\x08\x81\x87\x02\x97\x04\x06\x81\x87\x02"
  "\x96\x04\x04\x83\x04\x23\x36\x68\x02\x1f\x02\x0e\x6e\x65\x77\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x69\x29\x04\x6e\x75\x6d\x6a"
  "\x04\x66\x69\x29\x6a\x10\x27\x16\x66\x61\x6b\x65\x2d\x62\x6c\x6f"
  "\x63\x6b\x2d\x3e\x64\x61\x74\x61\x2d\x64\x65\x63\x6c\x66\x54\x09"
  "\x05\x0c\x03\x2f\x03\x07\x63\x3a\x63\x72\x65\x66\x2f\x04\x21\x04"
  "\x67\x04\x0f\x2d\x3e\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72"
  "\x73\x21\x03\x20\x08\xd3\x04\x5c\x81\x85\x02\xd2\x04\x5a\x81\x91"
  "\x02\xd1\x04\x58\x81\x8f\x02\xd0\x04\x56\x81\x91\x02\xcf\x04\x54"
  "\x81\x8d\x02\xce\x04\x52\x81\x8d\x02\xcd\x04\x50\x81\x93\x02\xcc"
  "\x04\x4e\x81\x91\x02\xcb\x04\x4c\x81\x8b\x02\xca\x04\x4a\x81\x8b"
  "\x02\xc9\x04\x48\x81\x91\x02\xc8\x04\x46\x81\x8f\x02\xc7\x04\x44"
  "\x81\x89\x02\xc6\x04\x42\x81\x8d\x02\xc5\x04\x40\x81\x8d\x02\xc4"
  "\x04\x3e\x81\x8d\x02\xc3\x04\x3c\x81\x91\x02\xc2\x04\x3a\x81\x8f"
  "\x02\xc1\x04\x38\x81\x8d\x02\xc0\x04\x36\x81\x87\x02\xbf\x04\x34"
  "\x81\x91\x02\xbe\x04\x32\x81\x8d\x02\xbd\x04\x30\x81\x8f\x02\xbc"
  "\x04\x2e\x81\x8d\x02\xbb\x04\x2c\x81\x8b\x02\xba\x04\x2a\x81\x87"
  "\x02\xb9\x04\x28\x81\x8f\x02\xb8\x04\x26\x81\x8d\x02\xb7\x04\x24"
  "\x81\x8b\x02\xb6\x04\x22\x81\x8b\x02\xb5\x04\x20\x81\x87\x02\xb4"
  "\x04\x1e\x81\x83\x02\xb3\x04\x1c\x81\x85\x02\xb2\x04\x1a\x81\x83"
  "\x02\xb1\x04\x18\x81\x83\x02\xb0\x04\x16\x81\x85\x02\xaf\x04\x14"
  "\x81\x83\x02\xae\x04\x12\x81\x83\x02\xad\x04\x10\x81\x85\x02\xac"
  "\x04\x0e\x81\x83\x02\xab\x04\x0c\x81\x83\x02\xaa\x04\x0a\x81\x89"
  "\x02\xa9\x04\x08\x81\x89\x02\xa8\x04\x06\x81\x83\x02\xa7\x04\x04"
  "\x83\x04\x5b\x7f\x10\x02\x20\x02\x11\x74\x6f\x70\x5f\x6c\x65\x76"
  "\x65\x6c\x5f\x6f\x62\x6a\x65\x63\x74\x69\x6a\x03\x69\x6a\x03\x05"
  "\x0c\x04\x21\x03\xe0\x04\x1c\x81\x85\x02\xdf\x04\x1a\x81\x85\x02"
  "\xde\x04\x18\x84\x06\xdd\x04\x16\x81\x83\x02\xdc\x04\x14\x81\x83"
  "\x02\xdb\x04\x12\x81\x85\x02\xda\x04\x10\x81\x83\x02\xd9\x04\x0e"
  "\x81\x83\x02\xd8\x04\x0c\x81\x85\x02\xd7\x04\x0a\x81\x83\x02\xd6"
  "\x04\x08\x81\x83\x02\xd5\x04\x06\x81\x83\x02\xd4\x04\x04\x83\x04"
  "\x1b\x2d\x6a\x02\x21\x0d\x43\x5f\x53\x59\x4d\x5f\x49\x4e\x54\x45"
  "\x52\x4e\x22\x16\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6c\x69\x6e\x6b"
  "\x61\x67\x65\x20\x6b\x69\x6e\x64\x3a\x13\x4d\x41\x4b\x45\x5f\x4c"
  "\x49\x4e\x4b\x45\x52\x5f\x48\x45\x41\x44\x45\x52\x17\x52\x45\x46"
  "\x45\x52\x45\x4e\x43\x45\x5f\x4c\x49\x4e\x4b\x41\x47\x45\x5f\x4b"
  "\x49\x4e\x44\x18\x41\x53\x53\x49\x47\x4e\x4d\x45\x4e\x54\x5f\x4c"
  "\x49\x4e\x4b\x41\x47\x45\x5f\x4b\x49\x4e\x44\x1d\x47\x4c\x4f\x42"
  "\x41\x4c\x5f\x4f\x50\x45\x52\x41\x54\x4f\x52\x5f\x4c\x49\x4e\x4b"
  "\x41\x47\x45\x5f\x4b\x49\x4e\x44\x16\x4f\x50\x45\x52\x41\x54\x4f"
  "\x52\x5f\x4c\x49\x4e\x4b\x41\x47\x45\x5f\x4b\x49\x4e\x44\x2b\x1d"
  "\x67\x6c\x6f\x62\x61\x6c\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x2d"
  "\x6c\x69\x6e\x6b\x61\x67\x65\x2d\x6b\x69\x6e\x64\x09\x18\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x6c\x69\x6e\x6b\x61\x67\x65"
  "\x2d\x6b\x69\x6e\x64\x17\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x6c\x69\x6e\x6b\x61\x67\x65\x2d\x6b\x69\x6e\x64\x16\x6f\x70\x65"
  "\x72\x61\x74\x6f\x72\x2d\x6c\x69\x6e\x6b\x61\x67\x65\x2d\x6b\x69"
  "\x6e\x64\x0f\x66\x72\x65\x65\x2d\x75\x75\x6f\x2d\x6c\x69\x6e\x6b"
  "\x73\x10\x66\x72\x65\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x73\x11\x66\x72\x65\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x73\x11\x67\x6c\x6f\x62\x61\x6c\x2d\x75\x75\x6f\x2d\x6c\x69"
  "\x6e\x6b\x73\x2c\x07\x03\x30\x04\x67\x04\x1a\x03\x17\x73\x74\x61"
  "\x63\x6b\x69\x66\x79\x2f\x6d\x61\x6b\x65\x2d\x75\x75\x6f\x2d\x6e"
  "\x61\x6d\x65\x03\x18\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x6d\x61"
  "\x6b\x65\x2d\x75\x75\x6f\x2d\x61\x72\x69\x74\x79\x04\x04\x63\x3a"
  "\x2b\x69\x03\x1c\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x6d\x61\x6b"
  "\x65\x2d\x76\x61\x72\x2d\x72\x65\x66\x2d\x65\x6e\x74\x72\x79\x04"
  "\x1b\x03\x0f\x73\x79\x6d\x62\x6f\x6c\x2d\x3e\x73\x74\x72\x69\x6e"
  "\x67\x04\x40\x03\x2f\x05\x14\x04\x34\x04\x1d\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2f\x6d\x61\x6b\x65\x2d\x6c\x69\x6e\x6b\x61\x67\x65"
  "\x2d\x68\x65\x61\x64\x65\x72\x06\x36\x03\x20\x07\x08\x61\x70\x70"
  "\x65\x6e\x64\x21\x36\x03\x1c\x13\xc9\x05\xd4\x01\x81\x8b\x02\xc8"
  "\x05\xd2\x01\x81\x89\x02\xc7\x05\xd0\x01\x81\x87\x02\xc6\x05\xce"
  "\x01\x81\x85\x02\xc5\x05\xcc\x01\x81\x85\x02\xc4\x05\xca\x01\x81"
  "\x87\x02\xc3\x05\xc8\x01\x81\x87\x02\xc2\x05\xc6\x01\x81\x91\x02"
  "\xc1\x05\xc4\x01\x81\x93\x02\xc0\x05\xc2\x01\x81\x8f\x02\xbf\x05"
  "\xc0\x01\x81\x8f\x02\xbe\x05\xbe\x01\x81\x8d\x02\xbd\x05\xbc\x01"
  "\x81\x8d\x02\xbc\x05\xba\x01\x81\x8d\x02\xbb\x05\xb8\x01\x81\x87"
  "\x02\xba\x05\xb6\x01\x81\x85\x02\xb9\x05\xb4\x01\x81\x85\x02\xb8"
  "\x05\xb2\x01\x81\x91\x02\xb7\x05\xb0\x01\x81\x91\x02\xb6\x05\xae"
  "\x01\x81\x91\x02\xb5\x05\xac\x01\x81\x91\x02\xb4\x05\xaa\x01\x81"
  "\x93\x02\xb3\x05\xa8\x01\x81\x93\x02\xb2\x05\xa6\x01\x81\x8f\x02"
  "\xb1\x05\xa4\x01\x81\x97\x02\xb0\x05\xa2\x01\x81\x97\x02\xaf\x05"
  "\xa0\x01\x81\x91\x02\xae\x05\x9e\x01\x81\x8f\x02\xad\x05\x9c\x01"
  "\x81\x8d\x02\xac\x05\x9a\x01\x81\x87\x02\xab\x05\x98\x01\x81\x87"
  "\x02\xaa\x05\x96\x01\x81\x8b\x02\xa9\x05\x94\x01\x81\x93\x02\xa8"
  "\x05\x92\x01\x81\x9f\x02\xa7\x05\x90\x01\x81\x9d\x02\xa6\x05\x8e"
  "\x01\x81\x85\x02\xa5\x05\x8c\x01\x81\x9b\x02\xa4\x05\x8a\x01\x81"
  "\x93\x02\xa3\x05\x88\x01\x81\x93\x02\xa2\x05\x86\x01\x81\x93\x02"
  "\xa1\x05\x84\x01\x81\x93\x02\xa0\x05\x82\x01\x81\x91\x02\x9f\x05"
  "\x80\x01\x81\x91\x02\x9e\x05\x7e\x81\x8f\x02\x9d\x05\x7c\x81\x8b"
  "\x02\x9c\x05\x7a\x81\x95\x02\x9b\x05\x78\x81\x95\x02\x9a\x05\x76"
  "\x81\x8b\x02\x99\x05\x74\x81\x8b\x02\x98\x05\x72\x81\x8b\x02\x97"
  "\x05\x70\x81\x8b\x02\x96\x05\x6e\x81\x91\x02\x95\x05\x6c\x81\x9b"
  "\x02\x94\x05\x6a\x81\x99\x02\x93\x05\x68\x81\x97\x02\x92\x05\x66"
  "\x81\x97\x02\x91\x05\x64\x81\x99\x02\x90\x05\x62\x81\x97\x02\x8f"
  "\x05\x60\x81\x8f\x02\x8e\x05\x5e\x81\x8f\x02\x8d\x05\x5c\x81\x8f"
  "\x02\x8c\x05\x5a\x81\x85\x02\x8b\x05\x58\x81\x8b\x02\x8a\x05\x56"
  "\x81\x8f\x02\x89\x05\x54\x81\x8b\x02\x88\x05\x52\x81\x91\x02\x87"
  "\x05\x50\x81\x97\x02\x86\x05\x4e\x81\x97\x02\x85\x05\x4c\x81\x8d"
  "\x02\x84\x05\x4a\x81\x87\x02\x83\x05\x48\x81\x87\x02\x82\x05\x46"
  "\x81\x8b\x02\x81\x05\x44\x81\x8f\x02\x80\x05\x42\x81\x8f\x02\xff"
  "\x04\x40\x81\x8b\x02\xfe\x04\x3e\x81\x9b\x02\xfd\x04\x3c\x81\x9b"
  "\x02\xfc\x04\x3a\x81\x99\x02\xfb\x04\x38\x81\x99\x02\xfa\x04\x36"
  "\x81\x99\x02\xf9\x04\x34\x81\x97\x02\xf8\x04\x32\x81\x97\x02\xf7"
  "\x04\x30\x81\x97\x02\xf6\x04\x2e\x81\x95\x02\xf5\x04\x2c\x81\x95"
  "\x02\xf4\x04\x2a\x81\x93\x02\xf3\x04\x28\x81\x91\x02\xf2\x04\x26"
  "\x81\x91\x02\xf1\x04\x24\x81\x91\x02\xf0\x04\x22\x81\x91\x02\xef"
  "\x04\x20\x81\x91\x02\xee\x04\x1e\x81\x91\x02\xed\x04\x1c\x81\x91"
  "\x02\xec\x04\x1a\x81\x85\x02\xeb\x04\x18\x81\x8f\x02\xea\x04\x16"
  "\x81\x8f\x02\xe9\x04\x14\x81\x8b\x02\xe8\x04\x12\x81\x8d\x02\xe7"
  "\x04\x10\x81\x8b\x02\xe6\x04\x0e\x81\x87\x02\xe5\x04\x0c\x81\x87"
  "\x02\xe4\x04\x0a\x81\x87\x02\xe3\x04\x08\x81\x83\x02\xe2\x04\x06"
  "\x81\x87\x02\xe1\x04\x04\x83\x04\xd3\x01\x96\x02\x34\x02\x22\x28"
  "\x16\x54\x43\x5f\x4d\x41\x4e\x49\x46\x45\x53\x54\x5f\x4e\x4d\x5f"
  "\x56\x45\x43\x54\x4f\x52\x07\x6c\x61\x62\x65\x6c\x73\x03\x03\x30"
  "\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d\x74\x68\x69\x72\x64\x04\x0e"
  "\x63\x3a\x6d\x61\x6b\x65\x2d\x6f\x62\x6a\x65\x63\x74\x03\x18\x73"
  "\x74\x61\x63\x6b\x69\x66\x79\x2f\x6d\x61\x6b\x65\x2d\x6e\x6d\x2d"
  "\x68\x65\x61\x64\x65\x72\x03\x0e\x76\x65\x63\x74\x6f\x72\x2d\x66"
  "\x6f\x75\x72\x74\x68\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d\x73\x69"
  "\x78\x74\x68\x03\x2f\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d\x66\x69"
  "\x72\x73\x74\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d\x66\x69\x66\x74"
  "\x68\x02\x1b\x06\x1b\x04\x40\x03\x0f\x76\x65\x63\x74\x6f\x72\x2d"
  "\x73\x65\x76\x65\x6e\x74\x68\x02\x38\x03\x0e\x76\x65\x63\x74\x6f"
  "\x72\x2d\x73\x65\x63\x6f\x6e\x64\x03\x3f\x04\x67\x07\x19\x61\x64"
  "\x64\x2d\x6c\x61\x62\x65\x6c\x2d\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x61\x74\x69\x6f\x6e\x67\x05\x3c\x04\x3e\x05\x36\x16\xfc\x05"
  "\x68\x81\x9b\x02\xfb\x05\x66\x81\x9b\x02\xfa\x05\x64\x81\x9d\x02"
  "\xf9\x05\x62\x81\x99\x02\xf8\x05\x60\x81\x99\x02\xf7\x05\x5e\x81"
  "\x95\x02\xf6\x05\x5c\x81\x95\x02\xf5\x05\x5a\x81\x95\x02\xf4\x05"
  "\x58\x81\x85\x02\xf3\x05\x56\x81\x9d\x02\xf2\x05\x54\x81\x9d\x02"
  "\xf1\x05\x52\x81\x9f\x02\xf0\x05\x50\x81\x9b\x02\xef\x05\x4e\x81"
  "\x9f\x02\xee\x05\x4c\x81\x9b\x02\xed\x05\x4a\x81\x99\x02\xec\x05"
  "\x48\x81\x99\x02\xeb\x05\x46\x81\x95\x02\xea\x05\x44\x81\x93\x02"
  "\xe9\x05\x42\x81\x9b\x02\xe8\x05\x40\x81\x9b\x02\xe7\x05\x3e\x81"
  "\x99\x02\xe6\x05\x3c\x81\x99\x02\xe5\x05\x3a\x81\x9b\x02\xe4\x05"
  "\x38\x81\x97\x02\xe3\x05\x36\x81\x95\x02\xe2\x05\x34\x81\x97\x02"
  "\xe1\x05\x32\x81\x93\x02\xe0\x05\x30\x81\x99\x02\xdf\x05\x2e\x81"
  "\x97\x02\xde\x05\x2c\x81\x95\x02\xdd\x05\x2a\x81\x95\x02\xdc\x05"
  "\x28\x81\x93\x02\xdb\x05\x26\x81\x95\x02\xda\x05\x24\x81\x93\x02"
  "\xd9\x05\x22\x81\x95\x02\xd8\x05\x20\x81\x95\x02\xd7\x05\x1e\x81"
  "\x97\x02\xd6\x05\x1c\x81\x95\x02\xd5\x05\x1a\x81\x97\x02\xd4\x05"
  "\x18\x81\x99\x02\xd3\x05\x16\x81\x97\x02\xd2\x05\x14\x81\x95\x02"
  "\xd1\x05\x12\x81\x91\x02\xd0\x05\x10\x81\x91\x02\xcf\x05\x0e\x81"
  "\x91\x02\xce\x05\x0c\x81\x91\x02\xcd\x05\x0a\x81\x8f\x02\xcc\x05"
  "\x08\x81\x8b\x02\xcb\x05\x06\x81\x8d\x02\xca\x05\x04\x83\x04\x67"
  "\x9f\x01\x3f\x02\x23\x17\x57\x52\x49\x54\x45\x5f\x4c\x41\x42\x45"
  "\x4c\x5f\x44\x45\x53\x43\x52\x49\x50\x54\x4f\x52\x2a\x02\x04\x69"
  "\x04\x1f\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x6d\x61\x6b\x65\x2d"
  "\x6c\x61\x62\x65\x6c\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72"
  "\x03\x23\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x6d\x61\x6b\x65\x2d"
  "\x6c\x61\x62\x65\x6c\x2d\x72\x65\x6c\x61\x74\x69\x76\x65\x2d\x65"
  "\x6e\x74\x72\x79\x03\x06\x63\x3a\x68\x65\x78\x03\x2f\x04\x1b\x03"
  "\x4c\x04\x40\x06\x19\x0a\x87\x06\x18\x81\x95\x02\x86\x06\x16\x81"
  "\x91\x02\x85\x06\x14\x81\x93\x02\x84\x06\x12\x81\x8f\x02\x83\x06"
  "\x10\x81\x8d\x02\x82\x06\x0e\x81\x8f\x02\x81\x06\x0c\x81\x8d\x02"
  "\x80\x06\x0a\x81\x8b\x02\xff\x05\x08\x81\x8b\x02\xfe\x05\x06\x81"
  "\x8b\x02\xfd\x05\x04\x87\x0c\x17\x31\x69\x02\x24\x0b\x88\x06\x04"
  "\x83\x04\x03\x4c\x02\x25\x0b\x89\x06\x04\x83\x04\x03\x40\x02\x26"
  "\x0b\x8a\x06\x04\x83\x04\x03\x3e\x02\x27\x0b\x8b\x06\x04\x83\x04"
  "\x03\x3c\x02\x28\x0b\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x38\x07\x2e\x74\x61\x67\x2e\x31\x36\x02\x8f\x06"
  "\x0a\x81\x85\x02\x8e\x06\x08\x81\x83\x02\x8d\x06\x06\x81\x83\x02"
  "\x8c\x06\x04\x83\x04\x09\x12\x30\x02\x29\x0b\x90\x06\x04\x83\x04"
  "\x03\x2f\x02\x2a\x0b\x91\x06\x04\x83\x04\x03\x2c\x02\x2b\x0b\x92"
  "\x06\x04\x83\x04\x03\x2b\x02\x2c\x0b\x93\x06\x04\x83\x04\x03\x2a"
  "\x02\x2d\x0b\x94\x06\x04\x83\x04\x03\x28\x02\x2e\x0b\x95\x06\x04"
  "\x83\x04\x03\x21\x02\x2f\x0b\x08\x96\x06\x04\x83\x04\x03\x20\x02"
  "\x30\x0b\x09\x97\x06\x04\x83\x04\x03\x1a\x02\x31\x0b\x38\x07\x2e"
  "\x74\x61\x67\x2e\x32\x38\x02\x9b\x06\x0a\x81\x85\x02\x9a\x06\x08"
  "\x81\x83\x02\x99\x06\x06\x81\x83\x02\x98\x06\x04\x83\x04\x09\x12"
  "\x14\x02\x32\x02\x5f\x20\x66\x61\x6b\x65\x2d\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2d\x62\x6c\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x2d\x70"
  "\x72\x65\x66\x69\x78\x0c\x02\x03\x5d\x05\x12\x03\x9f\x06\x0a\x81"
  "\x87\x02\x9e\x06\x08\x81\x89\x02\x9d\x06\x06\x81\x85\x02\x9c\x06"
  "\x04\x83\x04\x09\x14\x5d\x02\x33\x10\x44\x45\x43\x4c\x41\x52\x45"
  "\x5f\x53\x55\x42\x43\x4f\x44\x45\x0b\x08\x03\x1c\x06\x19\x03\xa4"
  "\x06\x0c\x81\x89\x02\xa3\x06\x0a\x81\x85\x02\xa2\x06\x08\x81\x87"
  "\x02\xa1\x06\x06\x81\x83\x02\xa0\x06\x04\x83\x04\x0b\x18\x12\x02"
  "\x34\x10\x44\x45\x43\x4c\x41\x52\x45\x5f\x53\x55\x42\x44\x41\x54"
  "\x41\x0b\x03\x1c\x05\x19\x03\xa8\x06\x0a\x81\x87\x02\xa7\x06\x08"
  "\x81\x83\x02\xa6\x06\x06\x81\x85\x02\xa5\x06\x04\x83\x04\x09\x15"
  "\x1c\x02\x35\x0b\x02\x52\x04\x1b\x03\xab\x06\x08\x81\x85\x02\xaa"
  "\x06\x06\x81\x83\x02\xa9\x06\x04\x83\x04\x07\x11\x52\x02\x36\x14"
  "\x2a\x73\x68\x61\x72\x65\x64\x2d\x6e\x61\x6d\x65\x73\x74\x72\x69"
  "\x6e\x67\x2a\x1b\x02\x1b\x02\x03\x09\x77\x65\x61\x6b\x2d\x63\x64"
  "\x72\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x03"
  "\x09\x77\x65\x61\x6b\x2d\x63\x61\x72\x04\x0a\x77\x65\x61\x6b\x2d"
  "\x63\x6f\x6e\x73\x05\xb3\x06\x12\x81\x87\x02\xb2\x06\x10\x81\x85"
  "\x02\xb1\x06\x0e\x81\x83\x02\xb0\x06\x0c\x81\x85\x02\xaf\x06\x0a"
  "\x81\x83\x02\xae\x06\x08\x83\x04\xad\x06\x06\x81\x83\x02\xac\x06"
  "\x04\x81\x83\x02\x11\x21\x1b\x02\x37\x61\x16\x0a\x22\xb9\x06\x0e"
  "\x81\x8b\x02\xb8\x06\x0c\x81\x8b\x02\xb7\x06\x0a\x81\x8b\x02\xb6"
  "\x06\x08\x81\x85\x02\xb5\x06\x06\x81\x83\x02\xb4\x06\x04\x83\x04"
  "\x0d\x15\x61\x02\x38\x0f\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79"
  "\x70\x65\x3f\x22\x1b\x1a\x73\x69\x67\x6e\x65\x64\x2d\x66\x69\x78"
  "\x6e\x75\x6d\x2f\x6c\x6f\x77\x65\x72\x2d\x6c\x69\x6d\x69\x74\x1a"
  "\x73\x69\x67\x6e\x65\x64\x2d\x66\x69\x78\x6e\x75\x6d\x2f\x75\x70"
  "\x70\x65\x72\x2d\x6c\x69\x6d\x69\x74\x03\xbf\x06\x0e\x81\x85\x02"
  "\xbe\x06\x0c\x81\x83\x02\xbd\x06\x0a\x81\x83\x02\xbc\x06\x08\x81"
  "\x83\x02\xbb\x06\x06\x83\x04\xba\x06\x04\x81\x83\x02\x0d\x18\x19"
  "\x02\x39\x20\x0f\x22\x1b\x04\x05\x65\x78\x70\x74\x02\xc7\x06\x12"
  "\x81\x85\x02\xc6\x06\x10\x81\x83\x02\xc5\x06\x0e\x81\x83\x02\xc4"
  "\x06\x0c\x81\x83\x02\xc3\x06\x0a\x81\x83\x02\xc2\x06\x08\x81\x83"
  "\x02\xc1\x06\x06\x83\x04\xc0\x06\x04\x81\x83\x02\x11\x1f\x22\x39"
  "\x16\x16\x22\x06\x11\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x64\x2d"
  "\x6c\x6f\x6e\x67\x3f\x13\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x64"
  "\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x19\x06\x0f\x73\x74\x72\x69\x6e"
  "\x67\x2d\x72\x65\x76\x65\x72\x73\x65\x61\x04\x31\x1b\x08\x27\x52"
  "\x04\x66\x1c\x04\x54\x12\x04\x19\x66\x61\x6b\x65\x2d\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x64\x2d\x62\x6c\x6f\x63\x6b\x2d\x6e\x61\x6d\x65"
  "\x5d\x04\x0c\x08\x63\x63\x42\x6c\x6f\x63\x6b\x38\x15\x66\x61\x6b"
  "\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x62\x6c\x6f\x63\x6b"
  "\x3f\x14\x04\x11\x66\x61\x6b\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x70"
  "\x72\x6f\x78\x79\x1a\x04\x11\x66\x61\x6b\x65\x2d\x62\x6c\x6f\x63"
  "\x6b\x2f\x6e\x74\x61\x67\x73\x20\x04\x11\x66\x61\x6b\x65\x2d\x62"
  "\x6c\x6f\x63\x6b\x2f\x69\x6e\x64\x65\x78\x21\x04\x12\x66\x61\x6b"
  "\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x63\x2d\x63\x6f\x64\x65\x28\x04"
  "\x12\x66\x61\x6b\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x64\x2d\x70\x72"
  "\x6f\x63\x2a\x04\x12\x66\x61\x6b\x65\x2d\x62\x6c\x6f\x63\x6b\x2f"
  "\x63\x2d\x70\x72\x6f\x63\x2b\x04\x0f\x66\x61\x6b\x65\x2d\x62\x6c"
  "\x6f\x63\x6b\x2f\x74\x61\x67\x2c\x04\x19\x6d\x61\x6b\x65\x2d\x66"
  "\x61\x6b\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x62\x6c\x6f"
  "\x63\x6b\x10\x66\x61\x6b\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x6e\x61"
  "\x6d\x65\x2f\x04\x18\x72\x74\x64\x3a\x66\x61\x6b\x65\x2d\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x62\x6c\x6f\x63\x6b\x66\x14\x66\x61"
  "\x6b\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x62\x6c\x6f\x63"
  "\x6b\x05\x6e\x61\x6d\x65\x04\x74\x61\x67\x07\x63\x2d\x70\x72\x6f"
  "\x63\x07\x64\x2d\x70\x72\x6f\x63\x07\x63\x2d\x63\x6f\x64\x65\x06"
  "\x69\x6e\x64\x65\x78\x06\x6e\x74\x61\x67\x73\x06\x70\x72\x6f\x78"
  "\x79\x36\x19\x66\x61\x6b\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x30\x04\x1b\x66\x61"
  "\x6b\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x6c\x61\x62"
  "\x65\x6c\x2d\x76\x61\x6c\x75\x65\x3c\x04\x15\x66\x61\x6b\x65\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x62\x6c\x6f\x63\x6b\x3e"
  "\x04\x19\x66\x61\x6b\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2f\x6c\x61\x62\x65\x6c\x2d\x74\x61\x67\x40\x04\x1d\x6d\x61\x6b"
  "\x65\x2d\x66\x61\x6b\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x1a\x66\x61\x6b\x65\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x62\x6c\x6f\x63\x6b\x2d\x6e"
  "\x61\x6d\x65\x4c\x04\x1c\x72\x74\x64\x3a\x66\x61\x6b\x65\x2d\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x61\x18\x66\x61\x6b\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x0b\x62\x6c\x6f\x63\x6b"
  "\x2d\x6e\x61\x6d\x65\x0a\x6c\x61\x62\x65\x6c\x2d\x74\x61\x67\x06"
  "\x62\x6c\x6f\x63\x6b\x0c\x6c\x61\x62\x65\x6c\x2d\x76\x61\x6c\x75"
  "\x65\x67\x69\x04\x0e\x3f\x04\x17\x2a\x6c\x61\x62\x65\x6c\x2d\x73"
  "\x69\x7a\x65\x73\x2d\x69\x6e\x2d\x77\x6f\x72\x64\x73\x2a\x32\x34"
  "\x04\x1f\x2a\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x63\x61\x63\x68"
  "\x65\x2d\x73\x69\x7a\x65\x2d\x69\x6e\x2d\x77\x6f\x72\x64\x73\x2a"
  "\x1e\x2a\x65\x78\x65\x63\x75\x74\x65\x2d\x63\x61\x63\x68\x65\x2d"
  "\x73\x69\x7a\x65\x2d\x69\x6e\x2d\x77\x6f\x72\x64\x73\x2a\x1f\x6a"
  "\x04\x63\x10\x04\x64\x68\x04\x33\x65\x04\x60\x17\x62\x04\x80\x01"
  "\x5c\x01\x0a\x01\x09\x01\x0c\x01\x08\x01\x0b\x01\x0e\x01\x0d\x01"
  "\x5d\x01\x23\x01\x40\x01\xa1\x01\x5e\x45\x04\x11\x5f\x04\x4f\x1d"
  "\x04\x25\x56\x04\x3b\x5b\x04\x24\x5a\x04\x55\x59\x04\x51\x58\x04"
  "\x50\x57\x04\x39\x37\x04\x3a\x53\x04\x0f\x4e\x04\x13\x44\x04\x18"
  "\x0d\x04\x4a\x3d\x04\x49\x4d\x04\x35\x4b\x04\x43\x48\x04\x42\x47"
  "\x04\x2e\x46\x04\x0a\x73\x74\x72\x69\x6e\x67\x69\x66\x79\x41\x04"
  "\x15\x26\x04\x23\x04\x1e\x04\x0f\x73\x74\x72\x69\x6e\x67\x69\x66"
  "\x79\x2d\x64\x61\x74\x61\x04\x29\x2d\x1a\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74"
  "\x79\x70\x65\x33\x10\x08\x6c\x65\x74\x2a\x2f\x6d\x76\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x04\x04"
  "\x20\x72\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73"
  "\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72"
  "\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d"
  "\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\x11\x63\x68"
  "\x61\x72\x2d\x73\x65\x74\x3a\x67\x72\x61\x70\x68\x69\x63\x61\x66"
  "\x04\x06\x09\x63\x68\x61\x72\x2d\x73\x65\x74\x6a\x0b\x6a\x04\x16"
  "\x61\x73\x63\x69\x69\x2d\x72\x61\x6e\x67\x65\x2d\x3e\x63\x68\x61"
  "\x72\x2d\x73\x65\x74\x04\x0f\x63\x68\x61\x72\x2d\x73\x65\x74\x2d"
  "\x75\x6e\x69\x6f\x6e\x03\x10\x63\x68\x61\x72\x2d\x73\x65\x74\x2d"
  "\x69\x6e\x76\x65\x72\x74\x04\x16\x63\x68\x61\x72\x2d\x73\x65\x74"
  "\x2d\x69\x6e\x74\x65\x72\x73\x65\x63\x74\x69\x6f\x6e\x07\x5e\xbe"
  "\x01\x80\x80\x04\x5d\xbc\x01\x81\x81\x02\x5c\xba\x01\x81\x81\x02"
  "\x5b\xb8\x01\x81\x83\x02\x5a\xb6\x01\x81\x83\x02\x59\xb4\x01\x81"
  "\x83\x02\x58\xb2\x01\x81\x83\x02\x57\xb0\x01\x81\x83\x02\x56\xae"
  "\x01\x81\x83\x02\x55\xac\x01\x81\x83\x02\x54\xaa\x01\x81\x83\x02"
  "\x53\xa8\x01\x81\x83\x02\x52\xa6\x01\x81\x85\x02\x51\xa4\x01\x81"
  "\x83\x02\x50\xa2\x01\x81\x87\x02\x4f\xa0\x01\x81\x83\x02\x4e\x9e"
  "\x01\x81\x83\x02\x4d\x9c\x01\x81\x83\x02\x4c\x9a\x01\x81\x83\x02"
  "\x4b\x98\x01\x81\x83\x02\x4a\x96\x01\x81\x83\x02\x49\x94\x01\x81"
  "\x83\x02\x48\x92\x01\x81\x93\x02\x47\x90\x01\x81\x83\x02\x46\x8e"
  "\x01\x81\x85\x02\x45\x8c\x01\x81\x83\x02\x44\x8a\x01\x81\x85\x02"
  "\x43\x88\x01\x81\x87\x02\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81"
  "\x83\x02\x40\x82\x01\x81\x85\x02\x3f\x80\x01\x81\x83\x02\x3e\x7e"
  "\x81\x87\x02\x3d\x7c\x81\x83\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81"
  "\x83\x02\x3a\x76\x81\x8b\x02\x39\x74\x81\x83\x02\x38\x72\x81\x85"
  "\x02\x37\x70\x81\x83\x02\x36\x6e\x81\x85\x02\x35\x6c\x81\x87\x02"
  "\x34\x6a\x81\x83\x02\x33\x68\x81\x83\x02\x32\x66\x81\x83\x02\x31"
  "\x64\x81\x83\x02\x30\x62\x81\x83\x02\x2f\x60\x81\x83\x02\x2e\x5e"
  "\x81\x83\x02\x2d\x5c\x81\x83\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81"
  "\x83\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x83\x02\x28\x52\x81\x8f"
  "\x02\x27\x50\x81\x8d\x02\x26\x4e\x81\x8b\x02\x25\x4c\x81\x89\x02"
  "\x24\x4a\x81\x85\x02\x23\x48\x81\x83\x02\x22\x46\x81\x87\x02\x21"
  "\x44\x81\x85\x02\x20\x42\x81\x83\x02\x1f\x40\x81\x83\x02\x1e\x3e"
  "\x81\x83\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81"
  "\x83\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x83\x02\x18\x32\x81\x83"
  "\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x83\x02"
  "\x14\x2a\x81\x83\x02\x13\x28\x81\x83\x02\x12\x26\x81\x83\x02\x11"
  "\x24\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e"
  "\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81"
  "\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83"
  "\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x83\x02"
  "\x04\x0a\x81\x83\x02\x03\x08\x81\x87\x02\x02\x06\x81\x85\x02\x01"
  "\x04\x81\x83\x02\xbd\x01\xf3\x02";

SCHEME_OBJECT *
cout_so_data_0a7721cb9e7cdfe4 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_cout_so_data_0a7721cb9e7cdfe4 [0]))), (sizeof (prog_cout_so_data_0a7721cb9e7cdfe4)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_108]));
}

DECLARE_COMPILED_DATA_NS ("cout.so", cout_so_data_0a7721cb9e7cdfe4)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("cout.so", "be066160bd189017")
