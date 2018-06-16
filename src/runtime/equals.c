/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:31-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_6 5
#define LABEL_1_7 7
#define LABEL_1_4 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define LABEL_1_10 15
#define LABEL_1_11 17
#define LABEL_1_12 19
#define LABEL_1_13 21
#define LABEL_1_14 23
#define LABEL_1_15 25
#define LABEL_1_16 27
#define LABEL_1_17 29
#define LABEL_1_18 31
#define LABEL_1_19 33
#define LABEL_1_20 35
#define LABEL_1_21 37
#define LABEL_1_22 39
#define LABEL_1_23 41
#define ENVIRONMENT_LABEL_1_3 56
#define DEBUGGING_LABEL_1_2 55
#define OBJECT_1_9 54
#define OBJECT_1_8 53
#define OBJECT_1_7 52
#define OBJECT_1_6 51
#define OBJECT_1_5 50
#define OBJECT_1_4 49
#define OBJECT_1_3 48
#define OBJECT_1_2 47
#define OBJECT_1_1 46
#define OBJECT_1_0 45
#define EXECUTE_CACHE_1_24 43
#define FREE_REFERENCES_LABEL_1_0 42
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
equals_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd224;
  machine_word Wrd222;
  machine_word Wrd212;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd200;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd235;
  machine_word Wrd232;
  machine_word Wrd199;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd230;
  machine_word Wrd227;
  machine_word Wrd186;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd194;
  machine_word Wrd184;
  machine_word Wrd246;
  machine_word Wrd243;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd241;
  machine_word Wrd238;
  machine_word Wrd256;
  machine_word Wrd253;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd251;
  machine_word Wrd248;
  machine_word Wrd266;
  machine_word Wrd263;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd261;
  machine_word Wrd258;
  machine_word Wrd276;
  machine_word Wrd171;
  machine_word Wrd169;
  machine_word Wrd271;
  machine_word Wrd268;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd78;
  machine_word Wrd68;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd119;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd135;
  machine_word Wrd132;
  machine_word Wrd150;
  machine_word Wrd147;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd160;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd286;
  machine_word Wrd283;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd279;
  machine_word Wrd278;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_1_5);
      goto continuation_16;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_1_4);
      goto eqvP_26;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_43;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_35;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_1_13);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_1_14);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_1_15);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_1_16);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_1_17);
      goto label_42;

    case 14:
      current_block = (Rpc - LABEL_1_18);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_1_19);
      goto label_40;

    case 16:
      current_block = (Rpc - LABEL_1_20);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_1_21);
      goto label_38;

    case 18:
      current_block = (Rpc - LABEL_1_22);
      goto label_36;

    case 19:
      current_block = (Rpc - LABEL_1_23);
      goto label_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eqvP_45)
DEFLABEL (eqvP_26)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_80;
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));
  (Wrd278.Obj) = ((SCHEME_OBJECT) 26);
  if (! ((Wrd278.uLng) == 26))
    goto label_97;
  (Wrd279.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! (((unsigned long) (Wrd279.Lng)) < ((unsigned long) (1 << TYPE_CODE_LENGTH))))
    goto label_97;
  Wrd11 = Wrd10;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd11.Obj) == (Wrd13.Obj))
    goto label_77;

DEFLABEL (label_76)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd152.Obj) = (current_block [OBJECT_1_1]);
  (Wrd155.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd155.Lng))))
    goto label_75;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd152.Obj));
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_68;

DEFLABEL (label_74)
  (Wrd142.Obj) = (current_block [OBJECT_1_2]);
  (Wrd145.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd145.Lng))))
    goto label_73;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd142.Obj));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd23.Obj) == (Wrd25.Obj))
    goto label_68;

DEFLABEL (label_72)
  (Wrd132.Obj) = (current_block [OBJECT_1_3]);
  (Wrd135.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd135.Lng))))
    goto label_71;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd132.Obj));
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd27.Obj) == (Wrd29.Obj))
    goto label_68;

DEFLABEL (label_70)
  (Wrd122.Obj) = (current_block [OBJECT_1_4]);
  (Wrd125.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd125.Lng))))
    goto label_69;
  (Wrd31.uLng) = (OBJECT_DATUM (Wrd122.Obj));
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd31.Obj) == (Wrd33.Obj))
    goto label_68;

DEFLABEL (label_67)
  (Wrd34.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd44.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd44.Lng)))
    goto label_47;

DEFLABEL (label_46)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_47)
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd38.Obj) == (Wrd40.Obj))
    goto label_49;
  (Wrd36.Obj) = (current_block [OBJECT_1_7]);
  goto label_48;

DEFLABEL (label_49)
  (Wrd36.Obj) = (current_block [OBJECT_1_6]);

DEFLABEL (label_48)
DEFLABEL (label_66)
  Rsp = (& (Rsp [3]));
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;

DEFLABEL (label_65)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd111.Obj) = (current_block [OBJECT_1_1]);
  (Wrd114.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd114.Lng))))
    goto label_64;
  (Wrd53.uLng) = (OBJECT_DATUM (Wrd111.Obj));
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd53.Obj) == (Wrd55.Obj))
    goto label_57;

DEFLABEL (label_63)
  (Wrd101.Obj) = (current_block [OBJECT_1_2]);
  (Wrd104.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd104.Lng))))
    goto label_62;
  (Wrd57.uLng) = (OBJECT_DATUM (Wrd101.Obj));
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd57.Obj) == (Wrd59.Obj))
    goto label_57;

DEFLABEL (label_61)
  (Wrd91.Obj) = (current_block [OBJECT_1_3]);
  (Wrd94.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd94.Lng))))
    goto label_60;
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd91.Obj));
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd61.Obj) == (Wrd63.Obj))
    goto label_57;

DEFLABEL (label_59)
  (Wrd81.Obj) = (current_block [OBJECT_1_4]);
  (Wrd84.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd84.Lng))))
    goto label_58;
  (Wrd65.uLng) = (OBJECT_DATUM (Wrd81.Obj));
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd65.Obj) == (Wrd67.Obj))
    goto label_57;

DEFLABEL (label_56)
  (Wrd68.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd78.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd78.Lng))))
    goto label_46;
  (Wrd72.uLng) = (OBJECT_DATUM (Wrd68.Obj));
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd72.Obj) == (Wrd74.Obj))
    goto label_51;
  (Wrd70.Obj) = (current_block [OBJECT_1_7]);
  goto label_50;

DEFLABEL (label_51)
  (Wrd70.Obj) = (current_block [OBJECT_1_6]);

DEFLABEL (label_50)
DEFLABEL (label_55)
  Rsp = (& (Rsp [3]));
  if ((Wrd70.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;

DEFLABEL (label_52)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (label_53)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_54)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_57)
  Rsp = (& (Rsp [2]));
  goto label_52;

DEFLABEL (label_58)
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_57;

DEFLABEL (label_60)
  (Wrd96.Obj) = (Rsp [0]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_57;

DEFLABEL (label_62)
  (Wrd106.Obj) = (Rsp [0]);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_57;

DEFLABEL (label_64)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_57;

DEFLABEL (label_68)
  Rsp = (& (Rsp [2]));
  goto label_65;

DEFLABEL (label_69)
  (Wrd127.Obj) = (Rsp [0]);
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  goto label_68;

DEFLABEL (label_71)
  (Wrd137.Obj) = (Rsp [0]);
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  goto label_68;

DEFLABEL (label_73)
  (Wrd147.Obj) = (Rsp [0]);
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  goto label_68;

DEFLABEL (label_75)
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  goto label_68;

DEFLABEL (label_77)
  (Wrd162.Obj) = (Rsp [0]);
  (Wrd163.uLng) = (OBJECT_TYPE (Wrd162.Obj));
  if ((Wrd163.uLng) == 26)
    goto label_53;
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (Wrd167.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd167.Obj);
  (Wrd268.Obj) = (current_block [OBJECT_1_1]);
  (Wrd271.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd271.Lng))))
    goto label_96;
  (Wrd169.uLng) = (OBJECT_DATUM (Wrd268.Obj));
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if ((Wrd169.Obj) == (Wrd171.Obj))
    goto label_57;

DEFLABEL (label_95)
  (Wrd258.Obj) = (current_block [OBJECT_1_2]);
  (Wrd261.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd261.Lng))))
    goto label_94;
  (Wrd173.uLng) = (OBJECT_DATUM (Wrd258.Obj));
  (Wrd174.Obj) = (Rsp [0]);
  (Wrd175.uLng) = (OBJECT_TYPE (Wrd174.Obj));
  if ((Wrd173.Obj) == (Wrd175.Obj))
    goto label_57;

DEFLABEL (label_93)
  (Wrd248.Obj) = (current_block [OBJECT_1_3]);
  (Wrd251.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd251.Lng))))
    goto label_92;
  (Wrd177.uLng) = (OBJECT_DATUM (Wrd248.Obj));
  (Wrd178.Obj) = (Rsp [0]);
  (Wrd179.uLng) = (OBJECT_TYPE (Wrd178.Obj));
  if ((Wrd177.Obj) == (Wrd179.Obj))
    goto label_57;

DEFLABEL (label_91)
  (Wrd238.Obj) = (current_block [OBJECT_1_4]);
  (Wrd241.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd241.Lng))))
    goto label_90;
  (Wrd181.uLng) = (OBJECT_DATUM (Wrd238.Obj));
  (Wrd182.Obj) = (Rsp [0]);
  (Wrd183.uLng) = (OBJECT_TYPE (Wrd182.Obj));
  if ((Wrd181.Obj) == (Wrd183.Obj))
    goto label_57;

DEFLABEL (label_89)
  (Wrd184.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd184.Obj);
  (Wrd194.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd194.Lng))))
    goto label_46;
  (Wrd188.uLng) = (OBJECT_DATUM (Wrd184.Obj));
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.uLng) = (OBJECT_TYPE (Wrd189.Obj));
  if ((Wrd188.Obj) == (Wrd190.Obj))
    goto label_79;
  (Wrd186.Obj) = (current_block [OBJECT_1_7]);
  goto label_78;

DEFLABEL (label_79)
  (Wrd186.Obj) = (current_block [OBJECT_1_6]);

DEFLABEL (label_78)
DEFLABEL (label_88)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd186.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_52;

DEFLABEL (label_87)
  (Wrd227.Obj) = (current_block [OBJECT_1_8]);
  (Wrd230.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd230.Lng))))
    goto label_86;
  (Wrd197.uLng) = (OBJECT_DATUM (Wrd227.Obj));
  (Wrd198.Obj) = (Rsp [1]);
  (Wrd199.uLng) = (OBJECT_TYPE (Wrd198.Obj));
  if (! ((Wrd197.Obj) == (Wrd199.Obj)))
    goto label_53;

DEFLABEL (label_85)
  (Wrd205.Obj) = (Rsp [0]);
  (Wrd206.uLng) = (OBJECT_TYPE (Wrd205.Obj));
  if (! ((Wrd206.uLng) == 10))
    goto label_84;
  (Wrd203.pObj) = (OBJECT_ADDRESS (Wrd205.Obj));
  (Wrd204.Obj) = ((Wrd203.pObj) [0]);
  (Wrd200.Obj) = (MAKE_OBJECT (26, (Wrd204.uLng)));

DEFLABEL (label_83)
  (Wrd211.Lng) = (FIXNUM_TO_LONG (Wrd200.Obj));
  if (! ((Wrd211.Lng) == 0))
    goto label_53;
  (Wrd217.Obj) = (Rsp [1]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if (! ((Wrd218.uLng) == 10))
    goto label_82;
  (Wrd215.pObj) = (OBJECT_ADDRESS (Wrd217.Obj));
  (Wrd216.Obj) = ((Wrd215.pObj) [0]);
  (Wrd212.Obj) = (MAKE_OBJECT (26, (Wrd216.uLng)));

DEFLABEL (label_81)
  (Wrd224.Lng) = (FIXNUM_TO_LONG (Wrd212.Obj));
  if (! ((Wrd224.Lng) == 0))
    goto label_53;

DEFLABEL (label_80)
  Rvl = (current_block [OBJECT_1_6]);
  goto label_54;

DEFLABEL (label_82)
  (Wrd222.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd222.Obj);
  (* (--Rsp)) = (Wrd217.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_9]), 1);

DEFLABEL (label_37)
  (Wrd212.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd210.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd210.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_9]), 1);

DEFLABEL (label_36)
  (Wrd200.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd232.Obj) = (Rsp [1]);
  (Wrd235.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd235.Obj);
  (* (--Rsp)) = (Wrd232.Obj);
  (* (--Rsp)) = (Wrd227.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_85;

DEFLABEL (label_90)
  (Wrd243.Obj) = (Rsp [0]);
  (Wrd246.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd246.Obj);
  (* (--Rsp)) = (Wrd243.Obj);
  (* (--Rsp)) = (Wrd238.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  goto label_57;

DEFLABEL (label_92)
  (Wrd253.Obj) = (Rsp [0]);
  (Wrd256.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd256.Obj);
  (* (--Rsp)) = (Wrd253.Obj);
  (* (--Rsp)) = (Wrd248.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  goto label_57;

DEFLABEL (label_94)
  (Wrd263.Obj) = (Rsp [0]);
  (Wrd266.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd266.Obj);
  (* (--Rsp)) = (Wrd263.Obj);
  (* (--Rsp)) = (Wrd258.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_93;
  goto label_57;

DEFLABEL (label_96)
  (Wrd276.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd276.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd268.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_95;
  goto label_57;

DEFLABEL (label_97)
  (Wrd283.Obj) = (Rsp [1]);
  (Wrd286.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd286.Obj);
  (* (--Rsp)) = (Wrd283.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 2);

DEFLABEL (label_43)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_77;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_52;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_65;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_87;
  goto label_52;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_6 5
#define LABEL_2_7 7
#define LABEL_2_4 9
#define LABEL_2_8 11
#define LABEL_2_9 13
#define LABEL_2_10 15
#define LABEL_2_11 17
#define LABEL_2_12 19
#define LABEL_2_13 21
#define LABEL_2_14 23
#define LABEL_2_15 25
#define LABEL_2_16 27
#define LABEL_2_18 29
#define LABEL_2_19 31
#define LABEL_2_21 33
#define LABEL_2_22 35
#define LABEL_2_24 37
#define LABEL_2_25 39
#define LABEL_2_26 41
#define LABEL_2_27 43
#define LABEL_2_28 45
#define LABEL_2_33 47
#define LABEL_2_35 49
#define LABEL_2_36 51
#define LABEL_2_17 53
#define LABEL_2_37 55
#define LABEL_2_38 57
#define LABEL_2_32 59
#define LABEL_2_30 61
#define LABEL_2_34 63
#define LABEL_2_39 65
#define LABEL_2_42 67
#define LABEL_2_40 69
#define LABEL_2_44 71
#define ENVIRONMENT_LABEL_2_3 104
#define DEBUGGING_LABEL_2_2 103
#define OBJECT_2_15 102
#define OBJECT_2_14 101
#define OBJECT_2_13 100
#define OBJECT_2_12 99
#define OBJECT_2_11 98
#define OBJECT_2_10 97
#define OBJECT_2_9 96
#define OBJECT_2_8 95
#define OBJECT_2_7 94
#define OBJECT_2_6 93
#define OBJECT_2_5 92
#define OBJECT_2_4 91
#define OBJECT_2_3 90
#define OBJECT_2_2 89
#define OBJECT_2_1 88
#define OBJECT_2_0 87
#define EXECUTE_CACHE_2_45 73
#define EXECUTE_CACHE_2_43 75
#define EXECUTE_CACHE_2_41 77
#define EXECUTE_CACHE_2_31 79
#define EXECUTE_CACHE_2_29 81
#define EXECUTE_CACHE_2_23 83
#define EXECUTE_CACHE_2_20 85
#define FREE_REFERENCES_LABEL_2_0 72
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
equals_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd35;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd190;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd198;
  machine_word Wrd188;
  machine_word Wrd213;
  machine_word Wrd210;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd208;
  machine_word Wrd205;
  machine_word Wrd223;
  machine_word Wrd220;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd218;
  machine_word Wrd215;
  machine_word Wrd233;
  machine_word Wrd230;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd228;
  machine_word Wrd225;
  machine_word Wrd243;
  machine_word Wrd173;
  machine_word Wrd238;
  machine_word Wrd235;
  machine_word Wrd170;
  machine_word Wrd270;
  machine_word Wrd267;
  machine_word Wrd266;
  machine_word Wrd256;
  machine_word Wrd260;
  machine_word Wrd259;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd255;
  machine_word Wrd249;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd251;
  machine_word Wrd250;
  machine_word Wrd291;
  machine_word Wrd285;
  machine_word Wrd284;
  machine_word Wrd287;
  machine_word Wrd286;
  machine_word Wrd282;
  machine_word Wrd276;
  machine_word Wrd275;
  machine_word Wrd273;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd78;
  machine_word Wrd68;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd119;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd135;
  machine_word Wrd132;
  machine_word Wrd150;
  machine_word Wrd147;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd160;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd300;
  machine_word Wrd297;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd293;
  machine_word Wrd292;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_2_5);
      goto continuation_18;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_2_4);
      goto equalP_49;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto label_67;

    case 5:
      current_block = (Rpc - LABEL_2_9);
      goto label_58;

    case 6:
      current_block = (Rpc - LABEL_2_10);
      goto label_57;

    case 7:
      current_block = (Rpc - LABEL_2_11);
      goto label_56;

    case 8:
      current_block = (Rpc - LABEL_2_12);
      goto label_55;

    case 9:
      current_block = (Rpc - LABEL_2_13);
      goto label_54;

    case 10:
      current_block = (Rpc - LABEL_2_14);
      goto label_53;

    case 11:
      current_block = (Rpc - LABEL_2_15);
      goto label_52;

    case 12:
      current_block = (Rpc - LABEL_2_16);
      goto label_51;

    case 13:
      current_block = (Rpc - LABEL_2_18);
      goto label_65;

    case 14:
      current_block = (Rpc - LABEL_2_19);
      goto label_66;

    case 15:
      current_block = (Rpc - LABEL_2_21);
      goto label_63;

    case 16:
      current_block = (Rpc - LABEL_2_22);
      goto label_64;

    case 17:
      current_block = (Rpc - LABEL_2_24);
      goto label_62;

    case 18:
      current_block = (Rpc - LABEL_2_25);
      goto label_61;

    case 19:
      current_block = (Rpc - LABEL_2_26);
      goto label_60;

    case 20:
      current_block = (Rpc - LABEL_2_27);
      goto label_59;

    case 21:
      current_block = (Rpc - LABEL_2_28);
      goto continuation_24;

    case 22:
      current_block = (Rpc - LABEL_2_33);
      goto loop_41;

    case 23:
      current_block = (Rpc - LABEL_2_35);
      goto label_68;

    case 24:
      current_block = (Rpc - LABEL_2_36);
      goto label_69;

    case 25:
      current_block = (Rpc - LABEL_2_17);
      goto continuation_46;

    case 26:
      current_block = (Rpc - LABEL_2_37);
      goto label_70;

    case 27:
      current_block = (Rpc - LABEL_2_38);
      goto label_71;

    case 28:
      current_block = (Rpc - LABEL_2_32);
      goto continuation_30;

    case 29:
      current_block = (Rpc - LABEL_2_30);
      goto continuation_26;

    case 30:
      current_block = (Rpc - LABEL_2_34);
      goto continuation_39;

    case 31:
      current_block = (Rpc - LABEL_2_39);
      goto continuation_31;

    case 32:
      current_block = (Rpc - LABEL_2_42);
      goto continuation_29;

    case 33:
      current_block = (Rpc - LABEL_2_40);
      goto continuation_27;

    case 34:
      current_block = (Rpc - LABEL_2_44);
      goto continuation_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (equalP_73)
DEFLABEL (equalP_49)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_143;
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));
  (Wrd292.Obj) = ((SCHEME_OBJECT) 26);
  if (! ((Wrd292.uLng) == 26))
    goto label_142;
  (Wrd293.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! (((unsigned long) (Wrd293.Lng)) < ((unsigned long) (1 << TYPE_CODE_LENGTH))))
    goto label_142;
  Wrd11 = Wrd10;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd11.Obj) == (Wrd13.Obj))
    goto label_106;

DEFLABEL (label_105)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd152.Obj) = (current_block [OBJECT_2_2]);
  (Wrd155.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd155.Lng))))
    goto label_104;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd152.Obj));
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_97;

DEFLABEL (label_103)
  (Wrd142.Obj) = (current_block [OBJECT_2_3]);
  (Wrd145.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd145.Lng))))
    goto label_102;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd142.Obj));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd23.Obj) == (Wrd25.Obj))
    goto label_97;

DEFLABEL (label_101)
  (Wrd132.Obj) = (current_block [OBJECT_2_4]);
  (Wrd135.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd135.Lng))))
    goto label_100;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd132.Obj));
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd27.Obj) == (Wrd29.Obj))
    goto label_97;

DEFLABEL (label_99)
  (Wrd122.Obj) = (current_block [OBJECT_2_5]);
  (Wrd125.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd125.Lng))))
    goto label_98;
  (Wrd31.uLng) = (OBJECT_DATUM (Wrd122.Obj));
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd31.Obj) == (Wrd33.Obj))
    goto label_97;

DEFLABEL (label_96)
  (Wrd34.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd44.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd44.Lng)))
    goto label_76;

DEFLABEL (label_75)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_76)
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd38.Obj) == (Wrd40.Obj))
    goto label_78;
  (Wrd36.Obj) = (current_block [OBJECT_2_7]);
  goto label_77;

DEFLABEL (label_78)
  (Wrd36.Obj) = (current_block [OBJECT_2_0]);

DEFLABEL (label_77)
DEFLABEL (label_95)
  Rsp = (& (Rsp [3]));
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_82;

DEFLABEL (label_94)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd111.Obj) = (current_block [OBJECT_2_2]);
  (Wrd114.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd114.Lng))))
    goto label_93;
  (Wrd53.uLng) = (OBJECT_DATUM (Wrd111.Obj));
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd53.Obj) == (Wrd55.Obj))
    goto label_86;

DEFLABEL (label_92)
  (Wrd101.Obj) = (current_block [OBJECT_2_3]);
  (Wrd104.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd104.Lng))))
    goto label_91;
  (Wrd57.uLng) = (OBJECT_DATUM (Wrd101.Obj));
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd57.Obj) == (Wrd59.Obj))
    goto label_86;

DEFLABEL (label_90)
  (Wrd91.Obj) = (current_block [OBJECT_2_4]);
  (Wrd94.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd94.Lng))))
    goto label_89;
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd91.Obj));
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd61.Obj) == (Wrd63.Obj))
    goto label_86;

DEFLABEL (label_88)
  (Wrd81.Obj) = (current_block [OBJECT_2_5]);
  (Wrd84.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd84.Lng))))
    goto label_87;
  (Wrd65.uLng) = (OBJECT_DATUM (Wrd81.Obj));
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd65.Obj) == (Wrd67.Obj))
    goto label_86;

DEFLABEL (label_85)
  (Wrd68.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd78.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd78.Lng))))
    goto label_75;
  (Wrd72.uLng) = (OBJECT_DATUM (Wrd68.Obj));
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd72.Obj) == (Wrd74.Obj))
    goto label_80;
  (Wrd70.Obj) = (current_block [OBJECT_2_7]);
  goto label_79;

DEFLABEL (label_80)
  (Wrd70.Obj) = (current_block [OBJECT_2_0]);

DEFLABEL (label_79)
DEFLABEL (label_84)
  Rsp = (& (Rsp [3]));
  if ((Wrd70.Obj) == ((SCHEME_OBJECT) 0))
    goto label_82;

DEFLABEL (label_81)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_29]));

DEFLABEL (label_82)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_83)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_86)
  Rsp = (& (Rsp [2]));
  goto label_81;

DEFLABEL (label_87)
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_85;
  goto label_86;

DEFLABEL (label_89)
  (Wrd96.Obj) = (Rsp [0]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_52)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  goto label_86;

DEFLABEL (label_91)
  (Wrd106.Obj) = (Rsp [0]);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_90;
  goto label_86;

DEFLABEL (label_93)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_54)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  goto label_86;

DEFLABEL (label_97)
  Rsp = (& (Rsp [2]));
  goto label_94;

DEFLABEL (label_98)
  (Wrd127.Obj) = (Rsp [0]);
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_55)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_96;
  goto label_97;

DEFLABEL (label_100)
  (Wrd137.Obj) = (Rsp [0]);
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_56)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_99;
  goto label_97;

DEFLABEL (label_102)
  (Wrd147.Obj) = (Rsp [0]);
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_57)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  goto label_97;

DEFLABEL (label_104)
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_58)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_103;
  goto label_97;

DEFLABEL (label_106)
  (Wrd162.Obj) = (Rsp [1]);
  (Wrd163.uLng) = (OBJECT_TYPE (Wrd162.Obj));
  if ((Wrd163.uLng) == 1)
    goto label_132;
  if ((Wrd163.uLng) == 10)
    goto label_126;
  if (! ((Wrd163.uLng) == 30))
    goto label_107;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (label_107)
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  (Wrd235.Obj) = (current_block [OBJECT_2_2]);
  (Wrd238.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd238.Lng))))
    goto label_125;
  (Wrd173.uLng) = (OBJECT_DATUM (Wrd235.Obj));
  if ((Wrd173.Obj) == (Wrd163.Obj))
    goto label_86;

DEFLABEL (label_124)
  (Wrd225.Obj) = (current_block [OBJECT_2_3]);
  (Wrd228.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd228.Lng))))
    goto label_123;
  (Wrd177.uLng) = (OBJECT_DATUM (Wrd225.Obj));
  (Wrd178.Obj) = (Rsp [0]);
  (Wrd179.uLng) = (OBJECT_TYPE (Wrd178.Obj));
  if ((Wrd177.Obj) == (Wrd179.Obj))
    goto label_86;

DEFLABEL (label_122)
  (Wrd215.Obj) = (current_block [OBJECT_2_4]);
  (Wrd218.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd218.Lng))))
    goto label_121;
  (Wrd181.uLng) = (OBJECT_DATUM (Wrd215.Obj));
  (Wrd182.Obj) = (Rsp [0]);
  (Wrd183.uLng) = (OBJECT_TYPE (Wrd182.Obj));
  if ((Wrd181.Obj) == (Wrd183.Obj))
    goto label_86;

DEFLABEL (label_120)
  (Wrd205.Obj) = (current_block [OBJECT_2_5]);
  (Wrd208.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd208.Lng))))
    goto label_119;
  (Wrd185.uLng) = (OBJECT_DATUM (Wrd205.Obj));
  (Wrd186.Obj) = (Rsp [0]);
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd186.Obj));
  if ((Wrd185.Obj) == (Wrd187.Obj))
    goto label_86;

DEFLABEL (label_118)
  (Wrd188.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd198.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd198.Lng))))
    goto label_75;
  (Wrd192.uLng) = (OBJECT_DATUM (Wrd188.Obj));
  (Wrd193.Obj) = (Rsp [1]);
  (Wrd194.uLng) = (OBJECT_TYPE (Wrd193.Obj));
  if ((Wrd192.Obj) == (Wrd194.Obj))
    goto label_109;
  (Wrd190.Obj) = (current_block [OBJECT_2_7]);
  goto label_108;

DEFLABEL (label_109)
  (Wrd190.Obj) = (current_block [OBJECT_2_0]);

DEFLABEL (label_108)
DEFLABEL (label_117)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd190.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_81;

DEFLABEL (label_116)
  (Wrd202.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd202.Obj);
  (Wrd203.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd203.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_11]), 1);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_2_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_110;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_13]), 1);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_2_32);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_39]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_13]), 1);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_2_39);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (label_110)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 47))
    goto label_111;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_12]), 2);

DEFLABEL (label_111)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_31]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_2_30);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_113;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_42]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_31]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_2_42);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_112;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_43]));

DEFLABEL (label_112)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_40]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_2_40);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_114;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_114)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_44]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_2_44);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_115;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_45]));

DEFLABEL (label_115)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_119)
  (Wrd210.Obj) = (Rsp [0]);
  (Wrd213.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd213.Obj);
  (* (--Rsp)) = (Wrd210.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_59)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_118;
  goto label_86;

DEFLABEL (label_121)
  (Wrd220.Obj) = (Rsp [0]);
  (Wrd223.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd223.Obj);
  (* (--Rsp)) = (Wrd220.Obj);
  (* (--Rsp)) = (Wrd215.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_60)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_120;
  goto label_86;

DEFLABEL (label_123)
  (Wrd230.Obj) = (Rsp [0]);
  (Wrd233.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd233.Obj);
  (* (--Rsp)) = (Wrd230.Obj);
  (* (--Rsp)) = (Wrd225.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_61)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_122;
  goto label_86;

DEFLABEL (label_125)
  (Wrd243.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd243.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd235.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_62)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_124;
  goto label_86;

DEFLABEL (label_126)
  (Wrd250.Obj) = (Rsp [0]);
  (Wrd251.uLng) = (OBJECT_TYPE (Wrd250.Obj));
  if (! ((Wrd251.uLng) == 10))
    goto label_131;
  (Wrd247.pObj) = (OBJECT_ADDRESS (Wrd250.Obj));
  (Wrd248.Obj) = ((Wrd247.pObj) [0]);
  (Wrd249.Obj) = (MAKE_OBJECT (26, (Wrd248.uLng)));
  (* (--Rsp)) = (Wrd249.Obj);

DEFLABEL (label_130)
  (Wrd261.Obj) = (Rsp [2]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if (! ((Wrd262.uLng) == 10))
    goto label_129;
  (Wrd259.pObj) = (OBJECT_ADDRESS (Wrd261.Obj));
  (Wrd260.Obj) = ((Wrd259.pObj) [0]);
  (Wrd256.Obj) = (MAKE_OBJECT (26, (Wrd260.uLng)));

DEFLABEL (label_128)
  (Wrd267.Obj) = (Rsp [0]);
  if ((Wrd267.Obj) == (Wrd256.Obj))
    goto label_127;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_127)
  (Wrd270.Obj) = (current_block [OBJECT_2_10]);
  (* (--Rsp)) = (Wrd270.Obj);
  goto loop_41;

DEFLABEL (label_129)
  (Wrd266.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd266.Obj);
  (* (--Rsp)) = (Wrd261.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_9]), 1);

DEFLABEL (label_64)
  (Wrd256.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd255.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd255.Obj);
  (* (--Rsp)) = (Wrd250.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_9]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_130;

DEFLABEL (label_132)
  (Wrd273.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd273.Obj);
  if (! ((Wrd163.uLng) == 1))
    goto label_141;
  (Wrd275.pObj) = (OBJECT_ADDRESS (Wrd162.Obj));
  (Wrd276.Obj) = ((Wrd275.pObj) [0]);
  (* (--Rsp)) = (Wrd276.Obj);

DEFLABEL (label_140)
  (Wrd286.Obj) = (Rsp [2]);
  (Wrd287.uLng) = (OBJECT_TYPE (Wrd286.Obj));
  if (! ((Wrd287.uLng) == 1))
    goto label_139;
  (Wrd284.pObj) = (OBJECT_ADDRESS (Wrd286.Obj));
  (Wrd285.Obj) = ((Wrd284.pObj) [0]);
  (* (--Rsp)) = (Wrd285.Obj);

DEFLABEL (label_138)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_2_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_133;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_133)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_137;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_136)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_135;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_134)
  (Rsp [1]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (label_135)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_38]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_15]), 1);

DEFLABEL (label_71)
  (Wrd16.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_37]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_15]), 1);

DEFLABEL (label_70)
  (Wrd7.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd291.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd291.Obj);
  (* (--Rsp)) = (Wrd286.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 1);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  (Wrd282.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd282.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 1);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_140;

DEFLABEL (label_142)
  (Wrd297.Obj) = (Rsp [1]);
  (Wrd300.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd300.Obj);
  (* (--Rsp)) = (Wrd297.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_67)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_105;
  goto label_106;

DEFLABEL (label_143)
  Rvl = (current_block [OBJECT_2_0]);
  goto label_83;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_81;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_94;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_116;
  goto label_81;

DEFLABEL (loop_74)
DEFLABEL (loop_41)
  INTERRUPT_CHECK (26, LABEL_2_33);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_144;
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_144)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_149;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_149;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_149;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_148)
  (Wrd45.Obj) = (Rsp [4]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_147;
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_147;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) (Wrd40.Lng)) < ((unsigned long) (Wrd44.Lng))))
    goto label_147;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd37.Obj));
  (Wrd35.pObj) = (& ((Wrd42.pObj) [(Wrd32.Lng)]));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_146)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_2_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_145;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_41;

DEFLABEL (label_145)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_147)
  (Wrd47.Obj) = (Rsp [4]);
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_36]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_14]), 2);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_14]), 2);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_148;

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
equals_so_75be46788f12d61a (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 2)
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

static const struct liarc_code_S arr_decl_equals_so_75be46788f12d61a [2] =
  {
    { "equals_so_code_1", 20, equals_so_code_1 },
    { "equals_so_code_2", 35, equals_so_code_2 }
  };

int
decl_equals_so_75be46788f12d61a (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_equals_so_75be46788f12d61a);
  return (0);
}

DECLARE_COMPILED_CODE ("equals.so", 3, decl_equals_so_75be46788f12d61a, equals_so_75be46788f12d61a)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_equals_so_data_75be46788f12d61a [801] =
  "\x6d\x06\xca\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\x02\x06"
  "\x07\x02\x86\x02\x02\x02\xc2\xba\x28\x0d\xbb\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x82\x88\xc1\xc2\xc1\xc2"
  "\xc1\x80\xb1\xc1\x06\x02\x86\x02\x02\x02\xb2\x07\x28\x0d\xba\x28"
  "\x0d\x28\xb3\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbb\x99\xb9\x88\xb1\xb3\x2a\xb4\x2a\x99\xb2"
  "\x0d\x99\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72"
  "\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x65\x71\x75\x61\x6c\x73\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0e\x76\x65\x63\x74\x6f\x72"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x0b\x3d\x3b\x0f\x1b\x0d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x04\x0c\x6e\x75\x6d\x62\x65"
  "\x72\x3a\x65\x71\x76\x3f\x02\x17\x2a\x81\x85\x02\x16\x28\x81\x85"
  "\x02\x15\x26\x81\x85\x02\x14\x24\x81\x83\x02\x13\x22\x81\x83\x02"
  "\x12\x20\x81\x83\x02\x11\x1e\x81\x83\x02\x10\x1c\x81\x83\x02\x0f"
  "\x1a\x81\x83\x02\x0e\x18\x81\x83\x02\x0d\x16\x81\x83\x02\x0c\x14"
  "\x81\x83\x02\x0b\x12\x81\x83\x02\x0a\x10\x81\x83\x02\x09\x0e\x81"
  "\x83\x02\x08\x0c\x81\x85\x02\x07\x0a\x84\x06\x06\x08\x81\x85\x02"
  "\x05\x06\x81\x85\x02\x04\x04\x81\x85\x02\x29\x39\x02\x04\x63\x64"
  "\x72\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0e\x63\x65\x6c"
  "\x6c\x2d\x63\x6f\x6e\x74\x65\x6e\x74\x73\x0d\x62\x69\x74\x2d\x73"
  "\x74\x72\x69\x6e\x67\x3d\x3f\x06\x63\x65\x6c\x6c\x3f\x04\x63\x61"
  "\x72\x3d\x3b\x0f\x1b\x04\x07\x65\x71\x75\x61\x6c\x3f\x04\x09\x73"
  "\x74\x72\x69\x6e\x67\x3d\x3f\x04\x03\x0a\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x3f\x03\x0a\x63\x68\x61\x72\x2d\x73\x65\x74\x3f\x04\x0b"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x3d\x3f\x04\x0b\x63\x68\x61\x72"
  "\x2d\x73\x65\x74\x3d\x3f\x08\x3a\x48\x81\x85\x02\x39\x46\x81\x85"
  "\x02\x38\x44\x81\x85\x02\x37\x42\x81\x85\x02\x36\x40\x81\x89\x02"
  "\x35\x3e\x81\x85\x02\x34\x3c\x81\x85\x02\x33\x3a\x81\x85\x02\x32"
  "\x38\x81\x85\x02\x31\x36\x81\x85\x02\x30\x34\x81\x8d\x02\x2f\x32"
  "\x81\x8b\x02\x2e\x30\x81\x89\x02\x2d\x2e\x81\x85\x02\x2c\x2c\x81"
  "\x83\x02\x2b\x2a\x81\x83\x02\x2a\x28\x81\x83\x02\x29\x26\x81\x83"
  "\x02\x28\x24\x81\x87\x02\x27\x22\x81\x85\x02\x26\x20\x81\x89\x02"
  "\x25\x1e\x81\x87\x02\x24\x1c\x81\x83\x02\x23\x1a\x81\x83\x02\x22"
  "\x18\x81\x83\x02\x21\x16\x81\x83\x02\x20\x14\x81\x83\x02\x1f\x12"
  "\x81\x83\x02\x1e\x10\x81\x83\x02\x1d\x0e\x81\x83\x02\x1c\x0c\x81"
  "\x85\x02\x1b\x0a\x84\x06\x1a\x08\x81\x85\x02\x19\x06\x81\x85\x02"
  "\x18\x04\x81\x85\x02\x47\x69\x0a\x0a\x05\x65\x71\x76\x3f\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02"
  "\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07"
  "\x11";

SCHEME_OBJECT *
equals_so_data_75be46788f12d61a (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_equals_so_data_75be46788f12d61a [0]))), (sizeof (prog_equals_so_data_75be46788f12d61a)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("equals.so", equals_so_data_75be46788f12d61a)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("equals.so", "e106f8fc07e83e93")
