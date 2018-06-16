/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:30-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_6 5
#define LABEL_1_4 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_11 13
#define LABEL_1_12 15
#define LABEL_1_13 17
#define LABEL_1_14 19
#define LABEL_1_16 21
#define LABEL_1_18 23
#define LABEL_1_9 25
#define LABEL_1_21 27
#define LABEL_1_22 29
#define LABEL_1_10 31
#define LABEL_1_17 33
#define LABEL_1_19 35
#define LABEL_1_27 37
#define LABEL_1_23 39
#define TAG_1_24 18
#define LABEL_1_26 41
#define LABEL_1_29 43
#define LABEL_1_28 45
#define LABEL_1_32 47
#define LABEL_1_30 49
#define TAG_1_31 23
#define LABEL_1_33 51
#define TAG_1_34 24
#define ENVIRONMENT_LABEL_1_3 66
#define DEBUGGING_LABEL_1_2 65
#define OBJECT_1_5 64
#define OBJECT_1_4 63
#define OBJECT_1_3 62
#define OBJECT_1_2 61
#define OBJECT_1_1 60
#define OBJECT_1_0 59
#define EXECUTE_CACHE_1_25 53
#define EXECUTE_CACHE_1_20 55
#define EXECUTE_CACHE_1_15 57
#define FREE_REFERENCES_LABEL_1_0 52
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd106;
  machine_word Wrd101;
  machine_word Wrd105;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd86;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd72;
  machine_word Wrd93;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd113;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd119;
  machine_word Wrd122;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd58;
  machine_word Wrd124;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd134;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd145;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd140;
  machine_word Wrd137;
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
      current_block = (Rpc - LABEL_1_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_4);
      goto ceiling__32;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_41;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_40;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_1_12);
      goto label_39;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_1_14);
      goto label_36;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto label_37;

    case 10:
      current_block = (Rpc - LABEL_1_18);
      goto label_38;

    case 11:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_1_21);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_1_22);
      goto label_43;

    case 14:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_20;

    case 16:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_25;

    case 17:
      current_block = (Rpc - LABEL_1_27);
      goto label_44;

    case 18:
      current_block = (Rpc - LABEL_1_23);
      goto lambda_49;

    case 19:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_18;

    case 20:
      current_block = (Rpc - LABEL_1_29);
      goto label_45;

    case 21:
      current_block = (Rpc - LABEL_1_28);
      goto continuation_27;

    case 22:
      current_block = (Rpc - LABEL_1_32);
      goto label_46;

    case 23:
      current_block = (Rpc - LABEL_1_30);
      goto lambda_50;

    case 24:
      current_block = (Rpc - LABEL_1_33);
      goto lambda_51;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ceiling__48)
DEFLABEL (ceiling__32)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd137.Obj) = (current_block [OBJECT_1_0]);
  (Wrd140.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd140.Lng))))
    goto label_93;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd137.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_92;

DEFLABEL (label_91)
  (Wrd13.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_53;

DEFLABEL (label_52)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_53)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_55;
  (Wrd15.Obj) = (current_block [OBJECT_1_4]);
  goto label_54;

DEFLABEL (label_55)
  (Wrd15.Obj) = (current_block [OBJECT_1_3]);

DEFLABEL (label_54)
DEFLABEL (label_90)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_61;

DEFLABEL (label_60)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_59;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_59;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd17.Lng), (Wrd19.Lng), (& (Wrd15.Lng))))
    goto label_59;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_58)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_57;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_57;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) - (Wrd32.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_57;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));

DEFLABEL (label_56)
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_23])));
  Rhp += 2;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd39 = Wrd36;
  (Wrd40.Obj) = (Rsp [1]);
  ((Wrd39.pObj) [2]) = (Wrd40.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  ((Wrd39.pObj) [3]) = (Wrd38.Obj);
  Rvl = (Wrd35.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_43)
  (Wrd25.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_42)
  (Wrd10.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd126.Obj) = (current_block [OBJECT_1_0]);
  (Wrd129.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd129.Lng))))
    goto label_89;
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd126.Obj));
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd38.Obj) == (Wrd40.Obj))
    goto label_88;

DEFLABEL (label_87)
  (Wrd41.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd51.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd51.Lng))))
    goto label_52;
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd45.Obj) == (Wrd47.Obj))
    goto label_63;
  (Wrd43.Obj) = (current_block [OBJECT_1_4]);
  goto label_62;

DEFLABEL (label_63)
  (Wrd43.Obj) = (current_block [OBJECT_1_3]);

DEFLABEL (label_62)
DEFLABEL (label_86)
  Rsp = (& (Rsp [3]));
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_60;

DEFLABEL (label_85)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_84;
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd124.Lng) < 0)
    goto label_81;

DEFLABEL (label_80)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_79;
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if ((Wrd113.Lng) < 0)
    goto label_72;

DEFLABEL (label_71)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_70;
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if ((Wrd93.Lng) < 0)
    goto label_65;

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (label_65)
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 26))
    goto label_69;
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  (Wrd81.Lng) = (0 - (Wrd85.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd81.Lng)))
    goto label_69;
  (Wrd86.Obj) = (LONG_TO_FIXNUM (Wrd81.Lng));
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_68)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd90.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_20)
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_18)
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_67;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = (0 - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_67;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_66)
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_30])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  (Wrd23.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  Rvl = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd6.Obj) = (current_block [OBJECT_1_5]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_45)
  (Wrd11.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd74.Obj) = (current_block [OBJECT_1_5]);
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_70)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  goto label_65;

DEFLABEL (label_72)
  (Wrd99.Obj) = (Rsp [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 26))
    goto label_78;
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  (Wrd101.Lng) = (0 - (Wrd105.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd101.Lng)))
    goto label_78;
  (Wrd106.Obj) = (LONG_TO_FIXNUM (Wrd101.Lng));
  (* (--Rsp)) = (Wrd106.Obj);

DEFLABEL (label_77)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd110.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd111.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_25)
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_76;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = (0 - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_76;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_75)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_27)
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_74;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = (0 - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_74;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_73)
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_33])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  (Wrd23.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  Rvl = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd6.Obj) = (current_block [OBJECT_1_5]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_46)
  (Wrd11.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd6.Obj) = (current_block [OBJECT_1_5]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_44)
  (Wrd11.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd94.Obj) = (current_block [OBJECT_1_5]);
  (Wrd95.Obj) = (Rsp [0]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_79)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_72;

DEFLABEL (label_81)
  (Wrd114.Obj) = (Rsp [1]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd115.uLng) == 26))
    goto label_83;
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  if (! ((Wrd122.Lng) < 0))
    goto label_80;

DEFLABEL (label_82)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (label_83)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  goto label_82;

DEFLABEL (label_84)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  goto label_81;

DEFLABEL (label_88)
  Rsp = (& (Rsp [2]));
  goto label_85;

DEFLABEL (label_89)
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_87;
  goto label_88;

DEFLABEL (label_92)
  Rsp = (& (Rsp [2]));
  goto label_61;

DEFLABEL (label_93)
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  goto label_92;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  goto label_85;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  goto label_61;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_1_23);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_1_30);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_1_33);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_8 11
#define LABEL_2_9 13
#define LABEL_2_10 15
#define LABEL_2_11 17
#define LABEL_2_12 19
#define TAG_2_13 8
#define LABEL_2_14 21
#define TAG_2_15 9
#define ENVIRONMENT_LABEL_2_3 24
#define DEBUGGING_LABEL_2_2 23
#define OBJECT_2_0 22
#define FREE_REFERENCES_LABEL_2_0 22
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd56;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto ceiling____13;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_2_9);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_2_10);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_2_11);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_2_12);
      goto lambda_22;

    case 9:
      current_block = (Rpc - LABEL_2_14);
      goto lambda_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ceiling____21)
DEFLABEL (ceiling____13)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_35;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = (0 - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_35;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_34)
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_33;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = (0 - (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_33;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_3)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_2)
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_31;
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd56.Lng) == 0)
    goto label_30;

DEFLABEL (label_29)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_28;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd21.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_28;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_27)
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_26;
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_26;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd32.Lng) = ((Wrd34.Lng) - (Wrd36.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_26;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_25)
  (Rsp [3]) = (Wrd27.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_12])));
  Rhp += 2;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  Wrd42 = Wrd39;
  (Wrd43.Obj) = (Rsp [1]);
  ((Wrd42.pObj) [2]) = (Wrd43.Obj);
  (Wrd41.Obj) = (Rsp [0]);
  ((Wrd42.pObj) [3]) = (Wrd41.Obj);
  Rvl = (Wrd38.Obj);

DEFLABEL (label_24)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_19)
  (Wrd27.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_18)
  (Wrd16.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd45.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd46.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd49.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_14])));
  Rhp += 2;
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd49.pObj)));
  Wrd52 = Wrd49;
  (Wrd53.Obj) = (Rsp [1]);
  ((Wrd52.pObj) [2]) = (Wrd53.Obj);
  (Wrd51.Obj) = (Rsp [0]);
  ((Wrd52.pObj) [3]) = (Wrd51.Obj);
  Rvl = (Wrd48.Obj);
  goto label_24;

DEFLABEL (label_31)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

DEFLABEL (label_33)
  (Wrd18.Obj) = (current_block [OBJECT_2_0]);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_16)
  (Wrd23.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_15)
  (Wrd10.Obj) = Rvl;
  goto label_34;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_2_12);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_2_14);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define LABEL_3_8 11
#define LABEL_3_9 13
#define LABEL_3_10 15
#define TAG_3_11 6
#define LABEL_3_12 17
#define TAG_3_13 7
#define ENVIRONMENT_LABEL_3_3 19
#define DEBUGGING_LABEL_3_2 18
#define FREE_REFERENCES_LABEL_3_0 18
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd56;
  machine_word Wrd6;
  machine_word Wrd5;
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
      goto ceiling____10;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_3_9);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_3_10);
      goto lambda_17;

    case 7:
      current_block = (Rpc - LABEL_3_12);
      goto lambda_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ceiling____16)
DEFLABEL (ceiling____10)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_1)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_0)
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_26;
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd56.Lng) == 0)
    goto label_25;

DEFLABEL (label_24)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_23;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd21.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_23;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_22)
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_21;
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_21;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd32.Lng) = ((Wrd34.Lng) - (Wrd36.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_21;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_20)
  (Rsp [3]) = (Wrd27.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_10])));
  Rhp += 2;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  Wrd42 = Wrd39;
  (Wrd43.Obj) = (Rsp [1]);
  ((Wrd42.pObj) [2]) = (Wrd43.Obj);
  (Wrd41.Obj) = (Rsp [0]);
  ((Wrd42.pObj) [3]) = (Wrd41.Obj);
  Rvl = (Wrd38.Obj);

DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_14)
  (Wrd27.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_13)
  (Wrd16.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd45.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd46.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd49.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_12])));
  Rhp += 2;
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd49.pObj)));
  Wrd52 = Wrd49;
  (Wrd53.Obj) = (Rsp [1]);
  ((Wrd52.pObj) [2]) = (Wrd53.Obj);
  (Wrd51.Obj) = (Rsp [0]);
  ((Wrd52.pObj) [3]) = (Wrd51.Obj);
  Rvl = (Wrd48.Obj);
  goto label_19;

DEFLABEL (label_26)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_3_10);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_3_12);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_5 3
#define LABEL_4_6 5
#define LABEL_4_4 7
#define LABEL_4_7 9
#define LABEL_4_8 11
#define LABEL_4_10 13
#define LABEL_4_11 15
#define LABEL_4_12 17
#define LABEL_4_13 19
#define LABEL_4_17 21
#define LABEL_4_19 23
#define LABEL_4_9 25
#define LABEL_4_14 27
#define LABEL_4_16 29
#define LABEL_4_18 31
#define LABEL_4_20 33
#define LABEL_4_23 35
#define LABEL_4_24 37
#define ENVIRONMENT_LABEL_4_3 52
#define DEBUGGING_LABEL_4_2 51
#define OBJECT_4_5 50
#define OBJECT_4_4 49
#define OBJECT_4_3 48
#define OBJECT_4_2 47
#define OBJECT_4_1 46
#define OBJECT_4_0 45
#define EXECUTE_CACHE_4_22 39
#define EXECUTE_CACHE_4_21 41
#define EXECUTE_CACHE_4_15 43
#define FREE_REFERENCES_LABEL_4_0 38
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd111;
  machine_word Wrd106;
  machine_word Wrd110;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd92;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd91;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd94;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd113;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd119;
  machine_word Wrd127;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd55;
  machine_word Wrd129;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd139;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd150;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd145;
  machine_word Wrd142;
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
      current_block = (Rpc - LABEL_4_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_4);
      goto ceiling_quotient_19;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_4_10);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_4_11);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_4_12);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_4_13);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_4_17);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_4_19);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_4_14);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_4_23);
      goto lambda_11;

    case 17:
      current_block = (Rpc - LABEL_4_24);
      goto lambda_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ceiling_quotient_30)
DEFLABEL (ceiling_quotient_19)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd142.Obj) = (current_block [OBJECT_4_0]);
  (Wrd145.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd145.Lng))))
    goto label_64;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd142.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_63;

DEFLABEL (label_62)
  (Wrd13.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_34;

DEFLABEL (label_33)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_34)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_36;
  (Wrd15.Obj) = (current_block [OBJECT_4_4]);
  goto label_35;

DEFLABEL (label_36)
  (Wrd15.Obj) = (current_block [OBJECT_4_3]);

DEFLABEL (label_35)
DEFLABEL (label_61)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_38;

DEFLABEL (label_37)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_22]));

DEFLABEL (label_38)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd131.Obj) = (current_block [OBJECT_4_0]);
  (Wrd134.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd134.Lng))))
    goto label_60;
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd131.Obj));
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_59;

DEFLABEL (label_58)
  (Wrd38.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd48.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd48.Lng))))
    goto label_33;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_40;
  (Wrd40.Obj) = (current_block [OBJECT_4_4]);
  goto label_39;

DEFLABEL (label_40)
  (Wrd40.Obj) = (current_block [OBJECT_4_3]);

DEFLABEL (label_39)
DEFLABEL (label_57)
  Rsp = (& (Rsp [3]));
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;

DEFLABEL (label_56)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_55;
  (Wrd129.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if ((Wrd129.Lng) < 0)
    goto label_52;

DEFLABEL (label_51)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_50;
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if ((Wrd113.Lng) < 0)
    goto label_48;

DEFLABEL (label_47)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_46;
  (Wrd94.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if ((Wrd94.Lng) < 0)
    goto label_42;

DEFLABEL (label_41)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_14);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_42)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd84.Obj) = (Rsp [2]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 26))
    goto label_45;
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  (Wrd86.Lng) = (0 - (Wrd90.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd86.Lng)))
    goto label_45;
  (Wrd91.Obj) = (LONG_TO_FIXNUM (Wrd86.Lng));
  (* (--Rsp)) = (Wrd91.Obj);

DEFLABEL (label_44)
  (Wrd92.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd92.Obj);

DEFLABEL (label_43)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (label_45)
  (Wrd79.Obj) = (current_block [OBJECT_4_5]);
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_42;

DEFLABEL (label_48)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd98.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd104.Obj) = (Rsp [2]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 26))
    goto label_49;
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd104.Obj));
  (Wrd106.Lng) = (0 - (Wrd110.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd106.Lng)))
    goto label_49;
  (Wrd111.Obj) = (LONG_TO_FIXNUM (Wrd106.Lng));
  (* (--Rsp)) = (Wrd111.Obj);
  goto label_43;

DEFLABEL (label_49)
  (Wrd99.Obj) = (current_block [OBJECT_4_5]);
  (Wrd100.Obj) = (Rsp [2]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_50)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_48;

DEFLABEL (label_52)
  (Wrd114.Obj) = (Rsp [1]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd115.uLng) == 26))
    goto label_54;
  (Wrd127.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  if (! ((Wrd127.Lng) < 0))
    goto label_51;

DEFLABEL (label_53)
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (Wrd124.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd125.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd125.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_21]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_54)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_53;

DEFLABEL (label_55)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_52;

DEFLABEL (label_59)
  Rsp = (& (Rsp [2]));
  goto label_56;

DEFLABEL (label_60)
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_59;

DEFLABEL (label_63)
  Rsp = (& (Rsp [2]));
  goto label_38;

DEFLABEL (label_64)
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_63;

DEFLABEL (continuation_14)
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_4_5]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 26)
    goto label_66;

DEFLABEL (label_65)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_66)
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = (0 - (Wrd14.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_65;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_16)
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_4_5]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 26)
    goto label_68;

DEFLABEL (label_67)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_68)
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = (0 - (Wrd14.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_67;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_56;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

DEFLABEL (lambda_31)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_4_23);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_32)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_4_24);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_5 3
#define LABEL_5_6 5
#define LABEL_5_4 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define LABEL_5_11 13
#define LABEL_5_12 15
#define LABEL_5_13 17
#define LABEL_5_14 19
#define LABEL_5_17 21
#define LABEL_5_19 23
#define LABEL_5_9 25
#define LABEL_5_22 27
#define LABEL_5_10 29
#define LABEL_5_15 31
#define LABEL_5_18 33
#define LABEL_5_20 35
#define LABEL_5_24 37
#define LABEL_5_25 39
#define ENVIRONMENT_LABEL_5_3 54
#define DEBUGGING_LABEL_5_2 53
#define OBJECT_5_5 52
#define OBJECT_5_4 51
#define OBJECT_5_3 50
#define OBJECT_5_2 49
#define OBJECT_5_1 48
#define OBJECT_5_0 47
#define EXECUTE_CACHE_5_23 41
#define EXECUTE_CACHE_5_21 43
#define EXECUTE_CACHE_5_16 45
#define FREE_REFERENCES_LABEL_5_0 40
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd110;
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd84;
  machine_word Wrd87;
  machine_word Wrd91;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd93;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd112;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd118;
  machine_word Wrd126;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd58;
  machine_word Wrd128;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd138;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd149;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd144;
  machine_word Wrd141;
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
      current_block = (Rpc - LABEL_5_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_4);
      goto ceiling_remainder_20;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_5_12);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_5_13);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_5_14);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_5_17);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_5_19);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_5_22);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_5_18);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_5_24);
      goto lambda_13;

    case 18:
      current_block = (Rpc - LABEL_5_25);
      goto lambda_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ceiling_remainder_32)
DEFLABEL (ceiling_remainder_20)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd141.Obj) = (current_block [OBJECT_5_0]);
  (Wrd144.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd144.Lng))))
    goto label_70;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd141.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_69;

DEFLABEL (label_68)
  (Wrd13.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_36;

DEFLABEL (label_35)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_36)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_38;
  (Wrd15.Obj) = (current_block [OBJECT_5_4]);
  goto label_37;

DEFLABEL (label_38)
  (Wrd15.Obj) = (current_block [OBJECT_5_3]);

DEFLABEL (label_37)
DEFLABEL (label_67)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_44;

DEFLABEL (label_43)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (Wrd5.Obj) = Rvl;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_42;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_42;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd17.Lng), (Wrd18.Lng), (& (Wrd15.Lng))))
    goto label_42;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 26)
    goto label_40;

DEFLABEL (label_39)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_40)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_39;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) - (Wrd28.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_39;
  Rvl = (LONG_TO_FIXNUM (Wrd24.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_30)
  (Wrd11.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd130.Obj) = (current_block [OBJECT_5_0]);
  (Wrd133.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd133.Lng))))
    goto label_66;
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd130.Obj));
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd38.Obj) == (Wrd40.Obj))
    goto label_65;

DEFLABEL (label_64)
  (Wrd41.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd51.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd51.Lng))))
    goto label_35;
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd45.Obj) == (Wrd47.Obj))
    goto label_46;
  (Wrd43.Obj) = (current_block [OBJECT_5_4]);
  goto label_45;

DEFLABEL (label_46)
  (Wrd43.Obj) = (current_block [OBJECT_5_3]);

DEFLABEL (label_45)
DEFLABEL (label_63)
  Rsp = (& (Rsp [3]));
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;

DEFLABEL (label_62)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_61;
  (Wrd128.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd128.Lng) < 0)
    goto label_58;

DEFLABEL (label_57)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_56;
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if ((Wrd112.Lng) < 0)
    goto label_54;

DEFLABEL (label_53)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_52;
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if ((Wrd93.Lng) < 0)
    goto label_48;

DEFLABEL (label_47)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd78.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_48)
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 26))
    goto label_51;
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  (Wrd87.Lng) = (0 - (Wrd91.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd87.Lng)))
    goto label_51;
  (Wrd84.Obj) = (LONG_TO_FIXNUM (Wrd87.Lng));

DEFLABEL (label_50)
  (Rsp [1]) = (Wrd84.Obj);

DEFLABEL (label_49)
  INVOKE_INTERFACE_0 (56);

DEFLABEL (label_51)
  (Wrd79.Obj) = (current_block [OBJECT_5_5]);
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_25)
  (Wrd84.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_48;

DEFLABEL (label_54)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd97.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd103.Obj) = (Rsp [2]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 26))
    goto label_55;
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  (Wrd105.Lng) = (0 - (Wrd109.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd105.Lng)))
    goto label_55;
  (Wrd110.Obj) = (LONG_TO_FIXNUM (Wrd105.Lng));
  (* (--Rsp)) = (Wrd110.Obj);
  goto label_49;

DEFLABEL (label_55)
  (Wrd98.Obj) = (current_block [OBJECT_5_5]);
  (Wrd99.Obj) = (Rsp [2]);
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_56)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_54;

DEFLABEL (label_58)
  (Wrd113.Obj) = (Rsp [1]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 26))
    goto label_60;
  (Wrd126.Lng) = (FIXNUM_TO_LONG (Wrd113.Obj));
  if (! ((Wrd126.Lng) < 0))
    goto label_57;

DEFLABEL (label_59)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd123.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd123.Obj);
  (Wrd124.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd124.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_21]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_5_20);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_60)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_59;

DEFLABEL (label_61)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_58;

DEFLABEL (label_65)
  Rsp = (& (Rsp [2]));
  goto label_62;

DEFLABEL (label_66)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  goto label_65;

DEFLABEL (label_69)
  Rsp = (& (Rsp [2]));
  goto label_44;

DEFLABEL (label_70)
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_69;

DEFLABEL (continuation_17)
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_5_5]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 26)
    goto label_72;

DEFLABEL (label_71)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_72)
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = (0 - (Wrd14.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_71;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_62;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (lambda_33)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_5_24);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_34)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_5_25);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_5 3
#define LABEL_6_6 5
#define LABEL_6_4 7
#define LABEL_6_7 9
#define LABEL_6_8 11
#define LABEL_6_10 13
#define LABEL_6_13 15
#define LABEL_6_14 17
#define LABEL_6_15 19
#define LABEL_6_16 21
#define LABEL_6_18 23
#define LABEL_6_9 25
#define LABEL_6_22 27
#define LABEL_6_23 29
#define LABEL_6_11 31
#define LABEL_6_12 33
#define LABEL_6_17 35
#define LABEL_6_19 37
#define LABEL_6_24 39
#define TAG_6_25 18
#define LABEL_6_28 41
#define LABEL_6_29 43
#define LABEL_6_32 45
#define LABEL_6_30 47
#define TAG_6_31 22
#define LABEL_6_33 49
#define TAG_6_34 23
#define ENVIRONMENT_LABEL_6_3 66
#define DEBUGGING_LABEL_6_2 65
#define OBJECT_6_5 64
#define OBJECT_6_4 63
#define OBJECT_6_3 62
#define OBJECT_6_2 61
#define OBJECT_6_1 60
#define OBJECT_6_0 59
#define EXECUTE_CACHE_6_27 51
#define EXECUTE_CACHE_6_26 53
#define EXECUTE_CACHE_6_21 55
#define EXECUTE_CACHE_6_20 57
#define FREE_REFERENCES_LABEL_6_0 50
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd105;
  machine_word Wrd100;
  machine_word Wrd104;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd86;
  machine_word Wrd112;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd114;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd120;
  machine_word Wrd123;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd72;
  machine_word Wrd125;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd46;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd65;
  machine_word Wrd55;
  machine_word Wrd135;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd146;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd141;
  machine_word Wrd138;
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
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_4);
      goto euclidean__30;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto label_39;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto label_38;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_6_13);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_6_14);
      goto label_37;

    case 8:
      current_block = (Rpc - LABEL_6_15);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_6_16);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_6_18);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_6_22);
      goto label_40;

    case 13:
      current_block = (Rpc - LABEL_6_23);
      goto label_41;

    case 14:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_6_17);
      goto continuation_20;

    case 17:
      current_block = (Rpc - LABEL_6_19);
      goto continuation_26;

    case 18:
      current_block = (Rpc - LABEL_6_24);
      goto lambda_45;

    case 19:
      current_block = (Rpc - LABEL_6_28);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_6_29);
      goto continuation_24;

    case 21:
      current_block = (Rpc - LABEL_6_32);
      goto label_42;

    case 22:
      current_block = (Rpc - LABEL_6_30);
      goto lambda_46;

    case 23:
      current_block = (Rpc - LABEL_6_33);
      goto lambda_47;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (euclidean__44)
DEFLABEL (euclidean__30)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd138.Obj) = (current_block [OBJECT_6_0]);
  (Wrd141.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd141.Lng))))
    goto label_84;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd138.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_83;

DEFLABEL (label_82)
  (Wrd13.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_49;

DEFLABEL (label_48)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_49)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_51;
  (Wrd15.Obj) = (current_block [OBJECT_6_4]);
  goto label_50;

DEFLABEL (label_51)
  (Wrd15.Obj) = (current_block [OBJECT_6_3]);

DEFLABEL (label_50)
DEFLABEL (label_81)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_70;

DEFLABEL (label_80)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd127.Obj) = (current_block [OBJECT_6_0]);
  (Wrd130.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd130.Lng))))
    goto label_79;
  (Wrd52.uLng) = (OBJECT_DATUM (Wrd127.Obj));
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd52.Obj) == (Wrd54.Obj))
    goto label_78;

DEFLABEL (label_77)
  (Wrd55.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd65.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd65.Lng))))
    goto label_48;
  (Wrd59.uLng) = (OBJECT_DATUM (Wrd55.Obj));
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd59.Obj) == (Wrd61.Obj))
    goto label_53;
  (Wrd57.Obj) = (current_block [OBJECT_6_4]);
  goto label_52;

DEFLABEL (label_53)
  (Wrd57.Obj) = (current_block [OBJECT_6_3]);

DEFLABEL (label_52)
DEFLABEL (label_76)
  Rsp = (& (Rsp [3]));
  if ((Wrd57.Obj) == ((SCHEME_OBJECT) 0))
    goto label_70;

DEFLABEL (label_69)
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_68;
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if ((Wrd125.Lng) < 0)
    goto label_65;

DEFLABEL (label_64)
  (Wrd74.Obj) = (Rsp [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 26))
    goto label_63;
  (Wrd114.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! ((Wrd114.Lng) < 0))
    goto label_55;

DEFLABEL (label_54)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_20]));

DEFLABEL (label_55)
  (Wrd81.Obj) = (Rsp [1]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 26))
    goto label_62;
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if ((Wrd112.Lng) < 0)
    goto label_57;

DEFLABEL (label_56)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd92.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_20)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_19)
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_30])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  ((Wrd12.pObj) [2]) = (Wrd6.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd98.Obj) = (Rsp [1]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 26))
    goto label_61;
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  (Wrd100.Lng) = (0 - (Wrd104.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd100.Lng)))
    goto label_61;
  (Wrd105.Obj) = (LONG_TO_FIXNUM (Wrd100.Lng));
  (* (--Rsp)) = (Wrd105.Obj);

DEFLABEL (label_60)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (Wrd109.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd110.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_26)
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_29]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_24)
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_59;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = (0 - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_59;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_58)
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_33])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  (Wrd23.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  Rvl = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd6.Obj) = (current_block [OBJECT_6_5]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_42)
  (Wrd11.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd93.Obj) = (current_block [OBJECT_6_5]);
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_57;

DEFLABEL (label_63)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_54;

DEFLABEL (label_65)
  (Wrd115.Obj) = (Rsp [1]);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd116.uLng) == 26))
    goto label_67;
  (Wrd123.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  if (! ((Wrd123.Lng) < 0))
    goto label_64;

DEFLABEL (label_66)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_21]));

DEFLABEL (label_67)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  goto label_66;

DEFLABEL (label_68)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  goto label_65;

DEFLABEL (label_70)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_75;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if ((Wrd46.Lng) < 0)
    goto label_72;

DEFLABEL (label_73)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd37.Obj);
  goto label_71;

DEFLABEL (label_72)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_71)
DEFLABEL (label_74)
  (Wrd43.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (label_75)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  goto label_72;

DEFLABEL (label_78)
  Rsp = (& (Rsp [2]));
  goto label_69;

DEFLABEL (label_79)
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  goto label_78;

DEFLABEL (label_83)
  Rsp = (& (Rsp [2]));
  goto label_80;

DEFLABEL (label_84)
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_83;

DEFLABEL (continuation_8)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_26]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_88;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_88;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd17.Lng), (Wrd19.Lng), (& (Wrd15.Lng))))
    goto label_88;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_87)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_86;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_86;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) - (Wrd32.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_86;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));

DEFLABEL (label_85)
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_24])));
  Rhp += 2;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd39 = Wrd36;
  (Wrd40.Obj) = (Rsp [1]);
  ((Wrd39.pObj) [2]) = (Wrd40.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  ((Wrd39.pObj) [3]) = (Wrd38.Obj);
  Rvl = (Wrd35.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_41)
  (Wrd25.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_40)
  (Wrd10.Obj) = Rvl;
  goto label_87;

DEFLABEL (continuation_9)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_27]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  goto label_69;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  goto label_80;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_6_24);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_6_30);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_6_33);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_5 3
#define LABEL_7_6 5
#define LABEL_7_4 7
#define LABEL_7_7 9
#define LABEL_7_8 11
#define LABEL_7_9 13
#define LABEL_7_12 15
#define LABEL_7_13 17
#define LABEL_7_14 19
#define LABEL_7_15 21
#define LABEL_7_17 23
#define LABEL_7_10 25
#define LABEL_7_11 27
#define LABEL_7_16 29
#define LABEL_7_18 31
#define LABEL_7_20 33
#define LABEL_7_24 35
#define LABEL_7_25 37
#define ENVIRONMENT_LABEL_7_3 54
#define DEBUGGING_LABEL_7_2 53
#define OBJECT_7_5 52
#define OBJECT_7_4 51
#define OBJECT_7_3 50
#define OBJECT_7_2 49
#define OBJECT_7_1 48
#define OBJECT_7_0 47
#define EXECUTE_CACHE_7_23 39
#define EXECUTE_CACHE_7_22 41
#define EXECUTE_CACHE_7_21 43
#define EXECUTE_CACHE_7_19 45
#define FREE_REFERENCES_LABEL_7_0 38
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd101;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd100;
  machine_word Wrd95;
  machine_word Wrd99;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd103;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd110;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd116;
  machine_word Wrd124;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd69;
  machine_word Wrd126;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd43;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd52;
  machine_word Wrd136;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd147;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd142;
  machine_word Wrd139;
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
      current_block = (Rpc - LABEL_7_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_4);
      goto euclidean_quotient_19;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_7_12);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_7_13);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_7_14);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_7_15);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_7_17);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_7_20);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_7_24);
      goto lambda_15;

    case 17:
      current_block = (Rpc - LABEL_7_25);
      goto lambda_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (euclidean_quotient_30)
DEFLABEL (euclidean_quotient_19)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd139.Obj) = (current_block [OBJECT_7_0]);
  (Wrd142.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd142.Lng))))
    goto label_67;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd139.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_66;

DEFLABEL (label_65)
  (Wrd13.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_34;

DEFLABEL (label_33)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_34)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_36;
  (Wrd15.Obj) = (current_block [OBJECT_7_4]);
  goto label_35;

DEFLABEL (label_36)
  (Wrd15.Obj) = (current_block [OBJECT_7_3]);

DEFLABEL (label_35)
DEFLABEL (label_64)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;

DEFLABEL (label_63)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd128.Obj) = (current_block [OBJECT_7_0]);
  (Wrd131.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd131.Lng))))
    goto label_62;
  (Wrd49.uLng) = (OBJECT_DATUM (Wrd128.Obj));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.Obj) == (Wrd51.Obj))
    goto label_61;

DEFLABEL (label_60)
  (Wrd52.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd62.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd62.Lng))))
    goto label_33;
  (Wrd56.uLng) = (OBJECT_DATUM (Wrd52.Obj));
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd56.Obj) == (Wrd58.Obj))
    goto label_38;
  (Wrd54.Obj) = (current_block [OBJECT_7_4]);
  goto label_37;

DEFLABEL (label_38)
  (Wrd54.Obj) = (current_block [OBJECT_7_3]);

DEFLABEL (label_37)
DEFLABEL (label_59)
  Rsp = (& (Rsp [3]));
  if ((Wrd54.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;

DEFLABEL (label_52)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_51;
  (Wrd126.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if ((Wrd126.Lng) < 0)
    goto label_48;

DEFLABEL (label_47)
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 26))
    goto label_46;
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! ((Wrd110.Lng) < 0))
    goto label_40;

DEFLABEL (label_39)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd107.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd108.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd108.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_7_18);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_24]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_40)
  (Wrd78.Obj) = (Rsp [1]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 26))
    goto label_45;
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if ((Wrd103.Lng) < 0)
    goto label_42;

DEFLABEL (label_41)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (label_42)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd93.Obj) = (Rsp [2]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 26))
    goto label_44;
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  (Wrd95.Lng) = (0 - (Wrd99.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd95.Lng)))
    goto label_44;
  (Wrd100.Obj) = (LONG_TO_FIXNUM (Wrd95.Lng));
  (* (--Rsp)) = (Wrd100.Obj);

DEFLABEL (label_43)
  (Wrd101.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd101.Obj);
  goto label_41;

DEFLABEL (label_44)
  (Wrd88.Obj) = (current_block [OBJECT_7_5]);
  (Wrd89.Obj) = (Rsp [2]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_42;

DEFLABEL (label_46)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_39;

DEFLABEL (label_48)
  (Wrd111.Obj) = (Rsp [1]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd112.uLng) == 26))
    goto label_50;
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! ((Wrd124.Lng) < 0))
    goto label_47;

DEFLABEL (label_49)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd121.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd122.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd122.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_21]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_7_20);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_50)
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_49;

DEFLABEL (label_51)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_48;

DEFLABEL (label_53)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_58;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd43.Lng) < 0)
    goto label_55;

DEFLABEL (label_56)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  goto label_54;

DEFLABEL (label_55)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_54)
DEFLABEL (label_57)
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (label_58)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_55;

DEFLABEL (label_61)
  Rsp = (& (Rsp [2]));
  goto label_52;

DEFLABEL (label_62)
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  goto label_61;

DEFLABEL (label_66)
  Rsp = (& (Rsp [2]));
  goto label_63;

DEFLABEL (label_67)
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  goto label_66;

DEFLABEL (continuation_14)
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_7_5]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 26)
    goto label_69;

DEFLABEL (label_68)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_69)
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = (0 - (Wrd14.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_68;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_7)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_22]));

DEFLABEL (continuation_8)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_23]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_52;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_63;

DEFLABEL (lambda_31)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_7_24);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_32)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_7_25);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_5 3
#define LABEL_8_6 5
#define LABEL_8_4 7
#define LABEL_8_7 9
#define LABEL_8_8 11
#define LABEL_8_10 13
#define LABEL_8_13 15
#define LABEL_8_14 17
#define LABEL_8_15 19
#define LABEL_8_16 21
#define LABEL_8_17 23
#define LABEL_8_9 25
#define LABEL_8_22 27
#define LABEL_8_11 29
#define LABEL_8_12 31
#define LABEL_8_18 33
#define LABEL_8_20 35
#define LABEL_8_25 37
#define LABEL_8_26 39
#define ENVIRONMENT_LABEL_8_3 56
#define DEBUGGING_LABEL_8_2 55
#define OBJECT_8_5 54
#define OBJECT_8_4 53
#define OBJECT_8_3 52
#define OBJECT_8_2 51
#define OBJECT_8_1 50
#define OBJECT_8_0 49
#define EXECUTE_CACHE_8_24 41
#define EXECUTE_CACHE_8_23 43
#define EXECUTE_CACHE_8_21 45
#define EXECUTE_CACHE_8_19 47
#define FREE_REFERENCES_LABEL_8_0 40
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd93;
  machine_word Wrd96;
  machine_word Wrd100;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd86;
  machine_word Wrd102;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd109;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd115;
  machine_word Wrd123;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd72;
  machine_word Wrd125;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd46;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd65;
  machine_word Wrd55;
  machine_word Wrd135;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd146;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd141;
  machine_word Wrd138;
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
      current_block = (Rpc - LABEL_8_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_4);
      goto euclidean_remainder_20;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_8_8);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_8_10);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_8_13);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_8_14);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_8_15);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_8_16);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_8_17);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_8_22);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_8_11);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_8_18);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_8_20);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_8_25);
      goto lambda_16;

    case 18:
      current_block = (Rpc - LABEL_8_26);
      goto lambda_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (euclidean_remainder_32)
DEFLABEL (euclidean_remainder_20)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd138.Obj) = (current_block [OBJECT_8_0]);
  (Wrd141.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd141.Lng))))
    goto label_69;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd138.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_68;

DEFLABEL (label_67)
  (Wrd13.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_36;

DEFLABEL (label_35)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_36)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_38;
  (Wrd15.Obj) = (current_block [OBJECT_8_4]);
  goto label_37;

DEFLABEL (label_38)
  (Wrd15.Obj) = (current_block [OBJECT_8_3]);

DEFLABEL (label_37)
DEFLABEL (label_66)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;

DEFLABEL (label_65)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd127.Obj) = (current_block [OBJECT_8_0]);
  (Wrd130.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd130.Lng))))
    goto label_64;
  (Wrd52.uLng) = (OBJECT_DATUM (Wrd127.Obj));
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd52.Obj) == (Wrd54.Obj))
    goto label_63;

DEFLABEL (label_62)
  (Wrd55.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd65.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd65.Lng))))
    goto label_35;
  (Wrd59.uLng) = (OBJECT_DATUM (Wrd55.Obj));
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd59.Obj) == (Wrd61.Obj))
    goto label_40;
  (Wrd57.Obj) = (current_block [OBJECT_8_4]);
  goto label_39;

DEFLABEL (label_40)
  (Wrd57.Obj) = (current_block [OBJECT_8_3]);

DEFLABEL (label_39)
DEFLABEL (label_61)
  Rsp = (& (Rsp [3]));
  if ((Wrd57.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;

DEFLABEL (label_54)
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_53;
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if ((Wrd125.Lng) < 0)
    goto label_50;

DEFLABEL (label_49)
  (Wrd74.Obj) = (Rsp [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 26))
    goto label_48;
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! ((Wrd109.Lng) < 0))
    goto label_42;

DEFLABEL (label_41)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd106.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd107.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd107.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_8_18);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_25]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_42)
  (Wrd81.Obj) = (Rsp [1]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 26))
    goto label_47;
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if ((Wrd102.Lng) < 0)
    goto label_44;

DEFLABEL (label_43)
  INVOKE_INTERFACE_0 (56);

DEFLABEL (label_44)
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 26))
    goto label_46;
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd94.Obj));
  (Wrd96.Lng) = (0 - (Wrd100.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd96.Lng)))
    goto label_46;
  (Wrd93.Obj) = (LONG_TO_FIXNUM (Wrd96.Lng));

DEFLABEL (label_45)
  (Rsp [1]) = (Wrd93.Obj);
  goto label_43;

DEFLABEL (label_46)
  (Wrd88.Obj) = (current_block [OBJECT_8_5]);
  (Wrd89.Obj) = (Rsp [1]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_26)
  (Wrd93.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (label_48)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_41;

DEFLABEL (label_50)
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 26))
    goto label_52;
  (Wrd123.Lng) = (FIXNUM_TO_LONG (Wrd110.Obj));
  if (! ((Wrd123.Lng) < 0))
    goto label_49;

DEFLABEL (label_51)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (Wrd120.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd121.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd121.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_21]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_8_20);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_26]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_52)
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_51;

DEFLABEL (label_53)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_50;

DEFLABEL (label_55)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_60;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if ((Wrd46.Lng) < 0)
    goto label_57;

DEFLABEL (label_58)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd37.Obj);
  goto label_56;

DEFLABEL (label_57)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_56)
DEFLABEL (label_59)
  (Wrd43.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (label_60)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_57;

DEFLABEL (label_63)
  Rsp = (& (Rsp [2]));
  goto label_54;

DEFLABEL (label_64)
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_63;

DEFLABEL (label_68)
  Rsp = (& (Rsp [2]));
  goto label_65;

DEFLABEL (label_69)
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  goto label_68;

DEFLABEL (continuation_8)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (Wrd5.Obj) = Rvl;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_73;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_73;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd17.Lng), (Wrd18.Lng), (& (Wrd15.Lng))))
    goto label_73;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_72)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 26)
    goto label_71;

DEFLABEL (label_70)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_71)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_70;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) - (Wrd28.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_70;
  Rvl = (LONG_TO_FIXNUM (Wrd24.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_30)
  (Wrd11.Obj) = Rvl;
  goto label_72;

DEFLABEL (continuation_9)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_24]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_54;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_65;

DEFLABEL (lambda_33)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_8_25);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_34)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_8_26);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_5 3
#define LABEL_9_6 5
#define LABEL_9_4 7
#define LABEL_9_7 9
#define LABEL_9_8 11
#define LABEL_9_11 13
#define LABEL_9_12 15
#define LABEL_9_13 17
#define LABEL_9_14 19
#define LABEL_9_18 21
#define LABEL_9_19 23
#define LABEL_9_9 25
#define LABEL_9_21 27
#define LABEL_9_22 29
#define LABEL_9_10 31
#define LABEL_9_15 33
#define LABEL_9_20 35
#define LABEL_9_27 37
#define LABEL_9_23 39
#define TAG_9_24 18
#define LABEL_9_26 41
#define LABEL_9_28 43
#define LABEL_9_29 45
#define TAG_9_30 21
#define LABEL_9_31 47
#define TAG_9_32 22
#define ENVIRONMENT_LABEL_9_3 62
#define DEBUGGING_LABEL_9_2 61
#define OBJECT_9_5 60
#define OBJECT_9_4 59
#define OBJECT_9_3 58
#define OBJECT_9_2 57
#define OBJECT_9_1 56
#define OBJECT_9_0 55
#define EXECUTE_CACHE_9_25 49
#define EXECUTE_CACHE_9_17 51
#define EXECUTE_CACHE_9_16 53
#define FREE_REFERENCES_LABEL_9_0 48
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd120;
  machine_word Wrd118;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd108;
  machine_word Wrd111;
  machine_word Wrd115;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd95;
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd80;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd82;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd88;
  machine_word Wrd122;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd58;
  machine_word Wrd124;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd134;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd145;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd140;
  machine_word Wrd137;
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
      current_block = (Rpc - LABEL_9_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_4);
      goto floor__29;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto label_38;

    case 4:
      current_block = (Rpc - LABEL_9_8);
      goto label_37;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_9_12);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_9_13);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_9_14);
      goto label_33;

    case 9:
      current_block = (Rpc - LABEL_9_18);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_9_19);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_9_21);
      goto label_39;

    case 13:
      current_block = (Rpc - LABEL_9_22);
      goto label_40;

    case 14:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_9_15);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_9_20);
      goto continuation_24;

    case 17:
      current_block = (Rpc - LABEL_9_27);
      goto label_41;

    case 18:
      current_block = (Rpc - LABEL_9_23);
      goto lambda_44;

    case 19:
      current_block = (Rpc - LABEL_9_26);
      goto continuation_17;

    case 20:
      current_block = (Rpc - LABEL_9_28);
      goto continuation_23;

    case 21:
      current_block = (Rpc - LABEL_9_29);
      goto lambda_45;

    case 22:
      current_block = (Rpc - LABEL_9_31);
      goto lambda_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (floor__43)
DEFLABEL (floor__29)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd137.Obj) = (current_block [OBJECT_9_0]);
  (Wrd140.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd140.Lng))))
    goto label_83;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd137.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_82;

DEFLABEL (label_81)
  (Wrd13.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_48;

DEFLABEL (label_47)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_48)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_50;
  (Wrd15.Obj) = (current_block [OBJECT_9_4]);
  goto label_49;

DEFLABEL (label_50)
  (Wrd15.Obj) = (current_block [OBJECT_9_3]);

DEFLABEL (label_49)
DEFLABEL (label_80)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_56;

DEFLABEL (label_55)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_25]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_54;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_54;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd17.Lng), (Wrd19.Lng), (& (Wrd15.Lng))))
    goto label_54;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_53)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_52;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_52;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) - (Wrd32.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_52;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));

DEFLABEL (label_51)
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_23])));
  Rhp += 2;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd39 = Wrd36;
  (Wrd40.Obj) = (Rsp [1]);
  ((Wrd39.pObj) [2]) = (Wrd40.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  ((Wrd39.pObj) [3]) = (Wrd38.Obj);
  Rvl = (Wrd35.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_40)
  (Wrd25.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_39)
  (Wrd10.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd126.Obj) = (current_block [OBJECT_9_0]);
  (Wrd129.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd129.Lng))))
    goto label_79;
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd126.Obj));
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd38.Obj) == (Wrd40.Obj))
    goto label_78;

DEFLABEL (label_77)
  (Wrd41.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd51.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd51.Lng))))
    goto label_47;
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd45.Obj) == (Wrd47.Obj))
    goto label_58;
  (Wrd43.Obj) = (current_block [OBJECT_9_4]);
  goto label_57;

DEFLABEL (label_58)
  (Wrd43.Obj) = (current_block [OBJECT_9_3]);

DEFLABEL (label_57)
DEFLABEL (label_76)
  Rsp = (& (Rsp [3]));
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;

DEFLABEL (label_75)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_74;
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd124.Lng) < 0)
    goto label_67;

DEFLABEL (label_66)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_65;
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! ((Wrd82.Lng) < 0))
    goto label_60;

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_17]));

DEFLABEL (label_60)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_64;
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! ((Wrd80.Lng) < 0))
    goto label_62;

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (label_62)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd77.Obj);

DEFLABEL (label_63)
  (Wrd120.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (label_64)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_61;

DEFLABEL (label_65)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  goto label_59;

DEFLABEL (label_67)
  (Wrd83.Obj) = (Rsp [1]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 26))
    goto label_73;
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! ((Wrd122.Lng) < 0))
    goto label_66;

DEFLABEL (label_72)
  (Wrd96.Obj) = (Rsp [0]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 26))
    goto label_71;
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  (Wrd98.Lng) = (0 - (Wrd102.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd98.Lng)))
    goto label_71;
  (Wrd95.Obj) = (LONG_TO_FIXNUM (Wrd98.Lng));

DEFLABEL (label_70)
  (Rsp [0]) = (Wrd95.Obj);
  (Wrd109.Obj) = (Rsp [1]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 26))
    goto label_69;
  (Wrd115.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  (Wrd111.Lng) = (0 - (Wrd115.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd111.Lng)))
    goto label_69;
  (Wrd108.Obj) = (LONG_TO_FIXNUM (Wrd111.Lng));

DEFLABEL (label_68)
  (Rsp [1]) = (Wrd108.Obj);
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  goto label_63;

DEFLABEL (label_69)
  (Wrd103.Obj) = (current_block [OBJECT_9_5]);
  (Wrd104.Obj) = (Rsp [1]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_36)
  (Wrd108.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd90.Obj) = (current_block [OBJECT_9_5]);
  (Wrd91.Obj) = (Rsp [0]);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_35)
  (Wrd95.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_72;

DEFLABEL (label_74)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_67;

DEFLABEL (label_78)
  Rsp = (& (Rsp [2]));
  goto label_75;

DEFLABEL (label_79)
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  goto label_78;

DEFLABEL (label_82)
  Rsp = (& (Rsp [2]));
  goto label_56;

DEFLABEL (label_83)
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  goto label_82;

DEFLABEL (continuation_18)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_17)
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_29])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  ((Wrd12.pObj) [2]) = (Wrd6.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_24)
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_85;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = (0 - (Wrd15.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_85;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_84)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_28]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_23)
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_31])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  ((Wrd12.pObj) [2]) = (Wrd6.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd6.Obj) = (current_block [OBJECT_9_5]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_75;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_56;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_9_23);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_9_29);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_9_31);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
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
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_8 11
#define LABEL_10_9 13
#define LABEL_10_10 15
#define LABEL_10_11 17
#define LABEL_10_14 19
#define LABEL_10_12 21
#define TAG_10_13 9
#define LABEL_10_15 23
#define TAG_10_16 10
#define ENVIRONMENT_LABEL_10_3 26
#define DEBUGGING_LABEL_10_2 25
#define OBJECT_10_0 24
#define FREE_REFERENCES_LABEL_10_0 24
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd80;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto floor____14;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_10_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_10_10);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_10_11);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_10_14);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_10_12);
      goto lambda_24;

    case 10:
      current_block = (Rpc - LABEL_10_15);
      goto lambda_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (floor____23)
DEFLABEL (floor____14)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_39;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = (0 - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_39;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_38)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_1)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_2)
  (Rsp [1]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_37;
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd80.Lng) == 0)
    goto label_34;

DEFLABEL (label_33)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_32;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = (0 - (Wrd25.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_32;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));

DEFLABEL (label_31)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_30;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd32.Lng) = ((Wrd33.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_30;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_29)
  (Rsp [2]) = (Wrd30.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_28;
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_28;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = ((Wrd46.Lng) - (Wrd48.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd44.Lng)))
    goto label_28;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd44.Lng));

DEFLABEL (label_27)
  (Rsp [3]) = (Wrd39.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd51.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_12])));
  Rhp += 2;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd51.pObj)));
  Wrd54 = Wrd51;
  (Wrd55.Obj) = (Rsp [1]);
  ((Wrd54.pObj) [2]) = (Wrd55.Obj);
  (Wrd53.Obj) = (Rsp [0]);
  ((Wrd54.pObj) [3]) = (Wrd53.Obj);
  Rvl = (Wrd50.Obj);

DEFLABEL (label_26)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_20)
  (Wrd39.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_19)
  (Wrd30.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd13.Obj) = (current_block [OBJECT_10_0]);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_18)
  (Wrd18.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 26))
    goto label_36;
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  (Wrd65.Lng) = (0 - (Wrd69.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd65.Lng)))
    goto label_36;
  (Wrd62.Obj) = (LONG_TO_FIXNUM (Wrd65.Lng));

DEFLABEL (label_35)
  (Rsp [2]) = (Wrd62.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd70.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd73.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_15])));
  Rhp += 2;
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd73.pObj)));
  Wrd76 = Wrd73;
  (Wrd77.Obj) = (Rsp [1]);
  ((Wrd76.pObj) [2]) = (Wrd77.Obj);
  (Wrd75.Obj) = (Rsp [0]);
  ((Wrd76.pObj) [3]) = (Wrd75.Obj);
  Rvl = (Wrd72.Obj);
  goto label_26;

DEFLABEL (label_36)
  (Wrd57.Obj) = (current_block [OBJECT_10_0]);
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_21)
  (Wrd62.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_34;

DEFLABEL (label_39)
  (Wrd5.Obj) = (current_block [OBJECT_10_0]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_10_12);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_10_15);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_8 11
#define LABEL_11_9 13
#define LABEL_11_10 15
#define LABEL_11_11 17
#define LABEL_11_14 19
#define LABEL_11_12 21
#define TAG_11_13 9
#define LABEL_11_15 23
#define TAG_11_16 10
#define ENVIRONMENT_LABEL_11_3 26
#define DEBUGGING_LABEL_11_2 25
#define OBJECT_11_0 24
#define FREE_REFERENCES_LABEL_11_0 24
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd79;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto floor____14;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_11_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_11_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_11_10);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_11_11);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_11_14);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_11_12);
      goto lambda_24;

    case 10:
      current_block = (Rpc - LABEL_11_15);
      goto lambda_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (floor____23)
DEFLABEL (floor____14)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_39;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = (0 - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_39;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_38)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_2)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_1)
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_37;
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd79.Lng) == 0)
    goto label_34;

DEFLABEL (label_33)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_32;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = (0 - (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_32;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));

DEFLABEL (label_31)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_30;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd31.Lng) = ((Wrd32.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd31.Lng)))
    goto label_30;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));

DEFLABEL (label_29)
  (Rsp [3]) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_28;
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_28;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd45.Lng) - (Wrd47.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd43.Lng)))
    goto label_28;
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));

DEFLABEL (label_27)
  (Rsp [4]) = (Wrd38.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd50.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_12])));
  Rhp += 2;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd50.pObj)));
  Wrd53 = Wrd50;
  (Wrd54.Obj) = (Rsp [1]);
  ((Wrd53.pObj) [2]) = (Wrd54.Obj);
  (Wrd52.Obj) = (Rsp [0]);
  ((Wrd53.pObj) [3]) = (Wrd52.Obj);
  Rvl = (Wrd49.Obj);

DEFLABEL (label_26)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_20)
  (Wrd38.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_19)
  (Wrd29.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd12.Obj) = (current_block [OBJECT_11_0]);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_18)
  (Wrd17.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_36;
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  (Wrd64.Lng) = (0 - (Wrd68.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd64.Lng)))
    goto label_36;
  (Wrd61.Obj) = (LONG_TO_FIXNUM (Wrd64.Lng));

DEFLABEL (label_35)
  (Rsp [3]) = (Wrd61.Obj);
  (Wrd69.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd69.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd72.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_15])));
  Rhp += 2;
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd72.pObj)));
  Wrd75 = Wrd72;
  (Wrd76.Obj) = (Rsp [1]);
  ((Wrd75.pObj) [2]) = (Wrd76.Obj);
  (Wrd74.Obj) = (Rsp [0]);
  ((Wrd75.pObj) [3]) = (Wrd74.Obj);
  Rvl = (Wrd71.Obj);
  goto label_26;

DEFLABEL (label_36)
  (Wrd56.Obj) = (current_block [OBJECT_11_0]);
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_21)
  (Wrd61.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_34;

DEFLABEL (label_39)
  (Wrd5.Obj) = (current_block [OBJECT_11_0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_11_12);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_11_15);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_5 3
#define LABEL_12_6 5
#define LABEL_12_4 7
#define LABEL_12_7 9
#define LABEL_12_8 11
#define LABEL_12_10 13
#define LABEL_12_11 15
#define LABEL_12_12 17
#define LABEL_12_13 19
#define LABEL_12_18 21
#define LABEL_12_19 23
#define LABEL_12_9 25
#define LABEL_12_14 27
#define LABEL_12_16 29
#define LABEL_12_21 31
#define LABEL_12_22 33
#define ENVIRONMENT_LABEL_12_3 48
#define DEBUGGING_LABEL_12_2 47
#define OBJECT_12_5 46
#define OBJECT_12_4 45
#define OBJECT_12_3 44
#define OBJECT_12_2 43
#define OBJECT_12_1 42
#define OBJECT_12_0 41
#define EXECUTE_CACHE_12_20 35
#define EXECUTE_CACHE_12_17 37
#define EXECUTE_CACHE_12_15 39
#define FREE_REFERENCES_LABEL_12_0 34
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd110;
  machine_word Wrd113;
  machine_word Wrd117;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd97;
  machine_word Wrd100;
  machine_word Wrd104;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd77;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd84;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd90;
  machine_word Wrd119;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd55;
  machine_word Wrd121;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd131;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd142;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd137;
  machine_word Wrd134;
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
      current_block = (Rpc - LABEL_12_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_4);
      goto floor_quotient_17;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_12_11);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_12_12);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_12_13);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_12_18);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_12_19);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_12_14);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_12_16);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_12_21);
      goto lambda_11;

    case 15:
      current_block = (Rpc - LABEL_12_22);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (floor_quotient_28)
DEFLABEL (floor_quotient_17)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd134.Obj) = (current_block [OBJECT_12_0]);
  (Wrd137.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd137.Lng))))
    goto label_62;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd134.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_61;

DEFLABEL (label_60)
  (Wrd13.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_32;

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_32)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_34;
  (Wrd15.Obj) = (current_block [OBJECT_12_4]);
  goto label_33;

DEFLABEL (label_34)
  (Wrd15.Obj) = (current_block [OBJECT_12_3]);

DEFLABEL (label_33)
DEFLABEL (label_59)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_36;

DEFLABEL (label_35)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_20]));

DEFLABEL (label_36)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd123.Obj) = (current_block [OBJECT_12_0]);
  (Wrd126.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd126.Lng))))
    goto label_58;
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd123.Obj));
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_57;

DEFLABEL (label_56)
  (Wrd38.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd48.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd48.Lng))))
    goto label_31;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_38;
  (Wrd40.Obj) = (current_block [OBJECT_12_4]);
  goto label_37;

DEFLABEL (label_38)
  (Wrd40.Obj) = (current_block [OBJECT_12_3]);

DEFLABEL (label_37)
DEFLABEL (label_55)
  Rsp = (& (Rsp [3]));
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;

DEFLABEL (label_54)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_53;
  (Wrd121.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if ((Wrd121.Lng) < 0)
    goto label_46;

DEFLABEL (label_45)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_44;
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! ((Wrd84.Lng) < 0))
    goto label_40;

DEFLABEL (label_39)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_12_16);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_22]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_40)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_43;
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if ((Wrd77.Lng) < 0)
    goto label_42;

DEFLABEL (label_41)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (label_42)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_12_14);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_43)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_42;

DEFLABEL (label_44)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_39;

DEFLABEL (label_46)
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 26))
    goto label_52;
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! ((Wrd119.Lng) < 0))
    goto label_45;

DEFLABEL (label_51)
  (Wrd98.Obj) = (Rsp [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 26))
    goto label_50;
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  (Wrd100.Lng) = (0 - (Wrd104.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd100.Lng)))
    goto label_50;
  (Wrd97.Obj) = (LONG_TO_FIXNUM (Wrd100.Lng));

DEFLABEL (label_49)
  (Rsp [0]) = (Wrd97.Obj);
  (Wrd111.Obj) = (Rsp [1]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd112.uLng) == 26))
    goto label_48;
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  (Wrd113.Lng) = (0 - (Wrd117.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd113.Lng)))
    goto label_48;
  (Wrd110.Obj) = (LONG_TO_FIXNUM (Wrd113.Lng));

DEFLABEL (label_47)
  (Rsp [1]) = (Wrd110.Obj);
  goto label_41;

DEFLABEL (label_48)
  (Wrd105.Obj) = (current_block [OBJECT_12_5]);
  (Wrd106.Obj) = (Rsp [1]);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_24)
  (Wrd110.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd92.Obj) = (current_block [OBJECT_12_5]);
  (Wrd93.Obj) = (Rsp [0]);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_23)
  (Wrd97.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_51;

DEFLABEL (label_53)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_46;

DEFLABEL (label_57)
  Rsp = (& (Rsp [2]));
  goto label_54;

DEFLABEL (label_58)
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_57;

DEFLABEL (label_61)
  Rsp = (& (Rsp [2]));
  goto label_36;

DEFLABEL (label_62)
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  goto label_61;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_54;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_36;

DEFLABEL (lambda_29)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_12_21);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_30)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_12_22);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_5 3
#define LABEL_13_6 5
#define LABEL_13_4 7
#define LABEL_13_7 9
#define LABEL_13_8 11
#define LABEL_13_11 13
#define LABEL_13_12 15
#define LABEL_13_13 17
#define LABEL_13_14 19
#define LABEL_13_20 21
#define LABEL_13_21 23
#define LABEL_13_9 25
#define LABEL_13_22 27
#define LABEL_13_10 29
#define LABEL_13_15 31
#define LABEL_13_17 33
#define LABEL_13_19 35
#define LABEL_13_24 37
#define LABEL_13_25 39
#define ENVIRONMENT_LABEL_13_3 54
#define DEBUGGING_LABEL_13_2 53
#define OBJECT_13_5 52
#define OBJECT_13_4 51
#define OBJECT_13_3 50
#define OBJECT_13_2 49
#define OBJECT_13_1 48
#define OBJECT_13_0 47
#define EXECUTE_CACHE_13_23 41
#define EXECUTE_CACHE_13_18 43
#define EXECUTE_CACHE_13_16 45
#define FREE_REFERENCES_LABEL_13_0 40
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd123;
  machine_word Wrd118;
  machine_word Wrd122;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd110;
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd97;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd80;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd87;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd93;
  machine_word Wrd125;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd58;
  machine_word Wrd127;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd137;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd148;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd143;
  machine_word Wrd140;
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
      current_block = (Rpc - LABEL_13_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_4);
      goto floor_remainder_20;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_13_8);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_13_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_13_12);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_13_13);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_13_14);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_13_20);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_13_21);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_13_22);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_13_15);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_13_17);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_13_19);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_13_24);
      goto lambda_13;

    case 18:
      current_block = (Rpc - LABEL_13_25);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (floor_remainder_32)
DEFLABEL (floor_remainder_20)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd140.Obj) = (current_block [OBJECT_13_0]);
  (Wrd143.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd143.Lng))))
    goto label_69;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd140.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_68;

DEFLABEL (label_67)
  (Wrd13.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_36;

DEFLABEL (label_35)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_36)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_38;
  (Wrd15.Obj) = (current_block [OBJECT_13_4]);
  goto label_37;

DEFLABEL (label_38)
  (Wrd15.Obj) = (current_block [OBJECT_13_3]);

DEFLABEL (label_37)
DEFLABEL (label_66)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_44;

DEFLABEL (label_43)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (Wrd5.Obj) = Rvl;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_42;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_42;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd17.Lng), (Wrd18.Lng), (& (Wrd15.Lng))))
    goto label_42;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 26)
    goto label_40;

DEFLABEL (label_39)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_40)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_39;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) - (Wrd28.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_39;
  Rvl = (LONG_TO_FIXNUM (Wrd24.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_30)
  (Wrd11.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd129.Obj) = (current_block [OBJECT_13_0]);
  (Wrd132.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd132.Lng))))
    goto label_65;
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd129.Obj));
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd38.Obj) == (Wrd40.Obj))
    goto label_64;

DEFLABEL (label_63)
  (Wrd41.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd51.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd51.Lng))))
    goto label_35;
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd45.Obj) == (Wrd47.Obj))
    goto label_46;
  (Wrd43.Obj) = (current_block [OBJECT_13_4]);
  goto label_45;

DEFLABEL (label_46)
  (Wrd43.Obj) = (current_block [OBJECT_13_3]);

DEFLABEL (label_45)
DEFLABEL (label_62)
  Rsp = (& (Rsp [3]));
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;

DEFLABEL (label_61)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_60;
  (Wrd127.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd127.Lng) < 0)
    goto label_54;

DEFLABEL (label_53)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_52;
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! ((Wrd87.Lng) < 0))
    goto label_48;

DEFLABEL (label_47)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd85.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_18]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_13_17);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_25]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_48)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_51;
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if ((Wrd80.Lng) < 0)
    goto label_50;

DEFLABEL (label_49)
  INVOKE_INTERFACE_0 (56);

DEFLABEL (label_50)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd78.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_13_15);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_24]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_51)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_50;

DEFLABEL (label_52)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_47;

DEFLABEL (label_54)
  (Wrd88.Obj) = (Rsp [1]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 26))
    goto label_59;
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! ((Wrd125.Lng) < 0))
    goto label_53;

DEFLABEL (label_58)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd103.Obj) = (Rsp [2]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 26))
    goto label_57;
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  (Wrd105.Lng) = (0 - (Wrd109.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd105.Lng)))
    goto label_57;
  (Wrd110.Obj) = (LONG_TO_FIXNUM (Wrd105.Lng));
  (* (--Rsp)) = (Wrd110.Obj);

DEFLABEL (label_56)
  (Wrd116.Obj) = (Rsp [2]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 26))
    goto label_55;
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  (Wrd118.Lng) = (0 - (Wrd122.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd118.Lng)))
    goto label_55;
  (Wrd123.Obj) = (LONG_TO_FIXNUM (Wrd118.Lng));
  (* (--Rsp)) = (Wrd123.Obj);
  goto label_49;

DEFLABEL (label_55)
  (Wrd111.Obj) = (current_block [OBJECT_13_5]);
  (Wrd112.Obj) = (Rsp [2]);
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_57)
  (Wrd98.Obj) = (current_block [OBJECT_13_5]);
  (Wrd99.Obj) = (Rsp [2]);
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_58;

DEFLABEL (label_60)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_54;

DEFLABEL (label_64)
  Rsp = (& (Rsp [2]));
  goto label_61;

DEFLABEL (label_65)
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_64;

DEFLABEL (label_68)
  Rsp = (& (Rsp [2]));
  goto label_44;

DEFLABEL (label_69)
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  goto label_68;

DEFLABEL (continuation_19)
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_13_5]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 26)
    goto label_71;

DEFLABEL (label_70)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_71)
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = (0 - (Wrd14.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_70;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_61;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (lambda_33)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_13_24);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_34)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_13_25);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_5 3
#define LABEL_14_6 5
#define LABEL_14_4 7
#define LABEL_14_7 9
#define LABEL_14_8 11
#define LABEL_14_11 13
#define LABEL_14_12 15
#define LABEL_14_13 17
#define LABEL_14_14 19
#define LABEL_14_16 21
#define LABEL_14_19 23
#define LABEL_14_22 25
#define LABEL_14_23 27
#define LABEL_14_9 29
#define LABEL_14_26 31
#define LABEL_14_27 33
#define LABEL_14_10 35
#define LABEL_14_15 37
#define LABEL_14_33 39
#define LABEL_14_17 41
#define LABEL_14_35 43
#define LABEL_14_18 45
#define LABEL_14_38 47
#define LABEL_14_20 49
#define LABEL_14_41 51
#define LABEL_14_42 53
#define LABEL_14_21 55
#define LABEL_14_45 57
#define LABEL_14_46 59
#define LABEL_14_24 61
#define LABEL_14_49 63
#define LABEL_14_25 65
#define LABEL_14_52 67
#define LABEL_14_28 69
#define TAG_14_29 33
#define LABEL_14_31 71
#define TAG_14_32 34
#define LABEL_14_34 73
#define LABEL_14_36 75
#define TAG_14_37 36
#define LABEL_14_39 77
#define TAG_14_40 37
#define LABEL_14_43 79
#define TAG_14_44 38
#define LABEL_14_47 81
#define TAG_14_48 39
#define LABEL_14_50 83
#define TAG_14_51 40
#define LABEL_14_53 85
#define TAG_14_54 41
#define LABEL_14_56 87
#define LABEL_14_57 89
#define LABEL_14_59 91
#define LABEL_14_60 93
#define LABEL_14_61 95
#define LABEL_14_62 97
#define LABEL_14_63 99
#define LABEL_14_55 101
#define LABEL_14_65 103
#define LABEL_14_58 105
#define ENVIRONMENT_LABEL_14_3 123
#define DEBUGGING_LABEL_14_2 122
#define OBJECT_14_6 121
#define OBJECT_14_5 120
#define OBJECT_14_4 119
#define OBJECT_14_3 118
#define OBJECT_14_2 117
#define OBJECT_14_1 116
#define OBJECT_14_0 115
#define EXECUTE_CACHE_14_67 107
#define EXECUTE_CACHE_14_66 109
#define EXECUTE_CACHE_14_64 111
#define EXECUTE_CACHE_14_30 113
#define FREE_REFERENCES_LABEL_14_0 106
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd22;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd155;
  machine_word Wrd153;
  machine_word Wrd144;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd152;
  machine_word Wrd147;
  machine_word Wrd151;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd139;
  machine_word Wrd134;
  machine_word Wrd138;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd116;
  machine_word Wrd114;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd113;
  machine_word Wrd108;
  machine_word Wrd112;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd92;
  machine_word Wrd87;
  machine_word Wrd91;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd99;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd119;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd125;
  machine_word Wrd158;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd58;
  machine_word Wrd160;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd170;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd181;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd176;
  machine_word Wrd173;
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
      current_block = (Rpc - LABEL_14_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_4);
      goto round__64;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto label_75;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto label_74;

    case 5:
      current_block = (Rpc - LABEL_14_11);
      goto label_66;

    case 6:
      current_block = (Rpc - LABEL_14_12);
      goto label_71;

    case 7:
      current_block = (Rpc - LABEL_14_13);
      goto label_67;

    case 8:
      current_block = (Rpc - LABEL_14_14);
      goto label_68;

    case 9:
      current_block = (Rpc - LABEL_14_16);
      goto label_69;

    case 10:
      current_block = (Rpc - LABEL_14_19);
      goto label_70;

    case 11:
      current_block = (Rpc - LABEL_14_22);
      goto label_72;

    case 12:
      current_block = (Rpc - LABEL_14_23);
      goto label_73;

    case 13:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_14_26);
      goto label_76;

    case 15:
      current_block = (Rpc - LABEL_14_27);
      goto label_77;

    case 16:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_6;

    case 17:
      current_block = (Rpc - LABEL_14_15);
      goto lambda_19;

    case 18:
      current_block = (Rpc - LABEL_14_33);
      goto divide_63;

    case 19:
      current_block = (Rpc - LABEL_14_17);
      goto lambda_25;

    case 20:
      current_block = (Rpc - LABEL_14_35);
      goto label_78;

    case 21:
      current_block = (Rpc - LABEL_14_18);
      goto lambda_29;

    case 22:
      current_block = (Rpc - LABEL_14_38);
      goto label_79;

    case 23:
      current_block = (Rpc - LABEL_14_20);
      goto lambda_35;

    case 24:
      current_block = (Rpc - LABEL_14_41);
      goto label_80;

    case 25:
      current_block = (Rpc - LABEL_14_42);
      goto label_81;

    case 26:
      current_block = (Rpc - LABEL_14_21);
      goto lambda_40;

    case 27:
      current_block = (Rpc - LABEL_14_45);
      goto label_82;

    case 28:
      current_block = (Rpc - LABEL_14_46);
      goto label_83;

    case 29:
      current_block = (Rpc - LABEL_14_24);
      goto lambda_46;

    case 30:
      current_block = (Rpc - LABEL_14_49);
      goto label_84;

    case 31:
      current_block = (Rpc - LABEL_14_25);
      goto lambda_50;

    case 32:
      current_block = (Rpc - LABEL_14_52);
      goto label_85;

    case 33:
      current_block = (Rpc - LABEL_14_28);
      goto lambda_93;

    case 34:
      current_block = (Rpc - LABEL_14_31);
      goto lambda_95;

    case 35:
      current_block = (Rpc - LABEL_14_34);
      goto continuation_52;

    case 36:
      current_block = (Rpc - LABEL_14_36);
      goto lambda_98;

    case 37:
      current_block = (Rpc - LABEL_14_39);
      goto lambda_100;

    case 38:
      current_block = (Rpc - LABEL_14_43);
      goto lambda_102;

    case 39:
      current_block = (Rpc - LABEL_14_47);
      goto lambda_104;

    case 40:
      current_block = (Rpc - LABEL_14_50);
      goto lambda_106;

    case 41:
      current_block = (Rpc - LABEL_14_53);
      goto lambda_108;

    case 42:
      current_block = (Rpc - LABEL_14_56);
      goto continuation_57;

    case 43:
      current_block = (Rpc - LABEL_14_57);
      goto continuation_55;

    case 44:
      current_block = (Rpc - LABEL_14_59);
      goto continuation_54;

    case 45:
      current_block = (Rpc - LABEL_14_60);
      goto label_87;

    case 46:
      current_block = (Rpc - LABEL_14_61);
      goto label_88;

    case 47:
      current_block = (Rpc - LABEL_14_62);
      goto label_89;

    case 48:
      current_block = (Rpc - LABEL_14_63);
      goto label_90;

    case 49:
      current_block = (Rpc - LABEL_14_55);
      goto continuation_51;

    case 50:
      current_block = (Rpc - LABEL_14_65);
      goto label_86;

    case 51:
      current_block = (Rpc - LABEL_14_58);
      goto continuation_56;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (round__92)
DEFLABEL (round__64)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd173.Obj) = (current_block [OBJECT_14_0]);
  (Wrd176.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd176.Lng))))
    goto label_148;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd173.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_147;

DEFLABEL (label_146)
  (Wrd13.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_110;

DEFLABEL (label_109)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_110)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_112;
  (Wrd15.Obj) = (current_block [OBJECT_14_4]);
  goto label_111;

DEFLABEL (label_112)
  (Wrd15.Obj) = (current_block [OBJECT_14_3]);

DEFLABEL (label_111)
DEFLABEL (label_145)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_118;

DEFLABEL (label_117)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_30]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_116;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_116;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd17.Lng), (Wrd19.Lng), (& (Wrd15.Lng))))
    goto label_116;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_115)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_114;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_114;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) - (Wrd32.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_114;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));

DEFLABEL (label_113)
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_28])));
  Rhp += 2;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd39 = Wrd36;
  (Wrd40.Obj) = (Rsp [1]);
  ((Wrd39.pObj) [2]) = (Wrd40.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  ((Wrd39.pObj) [3]) = (Wrd38.Obj);
  Rvl = (Wrd35.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_114)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_27]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_77)
  (Wrd25.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_76)
  (Wrd10.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd162.Obj) = (current_block [OBJECT_14_0]);
  (Wrd165.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd165.Lng))))
    goto label_144;
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd162.Obj));
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd38.Obj) == (Wrd40.Obj))
    goto label_143;

DEFLABEL (label_142)
  (Wrd41.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd51.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd51.Lng))))
    goto label_109;
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd45.Obj) == (Wrd47.Obj))
    goto label_120;
  (Wrd43.Obj) = (current_block [OBJECT_14_4]);
  goto label_119;

DEFLABEL (label_120)
  (Wrd43.Obj) = (current_block [OBJECT_14_3]);

DEFLABEL (label_119)
DEFLABEL (label_141)
  Rsp = (& (Rsp [3]));
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_117;

DEFLABEL (label_140)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_139;
  (Wrd160.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd160.Lng) < 0)
    goto label_132;

DEFLABEL (label_131)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_130;
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if ((Wrd119.Lng) < 0)
    goto label_127;

DEFLABEL (label_126)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_125;
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if ((Wrd99.Lng) < 0)
    goto label_122;

DEFLABEL (label_121)
  (Wrd74.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (Rsp [2]) = (Wrd76.Obj);
  (Rsp [3]) = (Wrd76.Obj);
  goto divide_63;

DEFLABEL (label_122)
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 26))
    goto label_124;
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  (Wrd87.Lng) = (0 - (Wrd91.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd87.Lng)))
    goto label_124;
  (Wrd92.Obj) = (LONG_TO_FIXNUM (Wrd87.Lng));
  (* (--Rsp)) = (Wrd92.Obj);

DEFLABEL (label_123)
  (Wrd93.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (Rsp [2]) = (Wrd94.Obj);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (Rsp [3]) = (Wrd96.Obj);
  goto divide_63;

DEFLABEL (label_124)
  (Wrd80.Obj) = (current_block [OBJECT_14_5]);
  (Wrd81.Obj) = (Rsp [1]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_123;

DEFLABEL (label_125)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_68)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_121;
  goto label_122;

DEFLABEL (label_127)
  (Wrd100.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd106.Obj) = (Rsp [1]);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd107.uLng) == 26))
    goto label_129;
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  (Wrd108.Lng) = (0 - (Wrd112.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd108.Lng)))
    goto label_129;
  (Wrd113.Obj) = (LONG_TO_FIXNUM (Wrd108.Lng));
  (* (--Rsp)) = (Wrd113.Obj);

DEFLABEL (label_128)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_20]))));
  (Rsp [2]) = (Wrd114.Obj);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_21]))));
  (Rsp [3]) = (Wrd116.Obj);
  goto divide_63;

DEFLABEL (label_129)
  (Wrd101.Obj) = (current_block [OBJECT_14_5]);
  (Wrd102.Obj) = (Rsp [1]);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_19]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_128;

DEFLABEL (label_130)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_67)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_126;
  goto label_127;

DEFLABEL (label_132)
  (Wrd120.Obj) = (Rsp [1]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if (! ((Wrd121.uLng) == 26))
    goto label_138;
  (Wrd158.Lng) = (FIXNUM_TO_LONG (Wrd120.Obj));
  if (! ((Wrd158.Lng) < 0))
    goto label_131;

DEFLABEL (label_137)
  (Wrd132.Obj) = (Rsp [1]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if (! ((Wrd133.uLng) == 26))
    goto label_136;
  (Wrd138.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  (Wrd134.Lng) = (0 - (Wrd138.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd134.Lng)))
    goto label_136;
  (Wrd139.Obj) = (LONG_TO_FIXNUM (Wrd134.Lng));
  (* (--Rsp)) = (Wrd139.Obj);

DEFLABEL (label_135)
  (Wrd145.Obj) = (Rsp [1]);
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if (! ((Wrd146.uLng) == 26))
    goto label_134;
  (Wrd151.Lng) = (FIXNUM_TO_LONG (Wrd145.Obj));
  (Wrd147.Lng) = (0 - (Wrd151.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd147.Lng)))
    goto label_134;
  (Wrd152.Obj) = (LONG_TO_FIXNUM (Wrd147.Lng));
  (* (--Rsp)) = (Wrd152.Obj);

DEFLABEL (label_133)
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_24]))));
  (Rsp [2]) = (Wrd153.Obj);
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_25]))));
  (Rsp [3]) = (Wrd155.Obj);
  goto divide_63;

DEFLABEL (label_134)
  (Wrd140.Obj) = (current_block [OBJECT_14_5]);
  (Wrd141.Obj) = (Rsp [1]);
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_23]))));
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd127.Obj) = (current_block [OBJECT_14_5]);
  (Wrd128.Obj) = (Rsp [1]);
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_22]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_71)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_131;
  goto label_137;

DEFLABEL (label_139)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_66)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_131;
  goto label_132;

DEFLABEL (label_143)
  Rsp = (& (Rsp [2]));
  goto label_140;

DEFLABEL (label_144)
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_74)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_142;
  goto label_143;

DEFLABEL (label_147)
  Rsp = (& (Rsp [2]));
  goto label_118;

DEFLABEL (label_148)
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_75)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_146;
  goto label_147;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_117;
  goto label_140;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_117;
  goto label_118;

DEFLABEL (lambda_94)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_14_15);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_31])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (divide_96)
DEFLABEL (divide_63)
  INTERRUPT_CHECK (26, LABEL_14_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_52)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_51)
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_161;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd21.Lng) == 0)
    goto label_156;

DEFLABEL (label_160)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_59]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_66]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_14_59);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_155;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_57]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_64]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_14_57);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_155;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_56]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_58]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd88.Obj) = (current_block [OBJECT_14_6]);
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_56)
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_67]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_14_56);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_155;

DEFLABEL (label_154)
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_153;
  (Wrd58.Obj) = (Rsp [3]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_153;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd60.Lng) = ((Wrd62.Lng) - (Wrd64.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd60.Lng)))
    goto label_153;
  (Wrd55.Obj) = (LONG_TO_FIXNUM (Wrd60.Lng));

DEFLABEL (label_152)
  (Rsp [5]) = (Wrd55.Obj);
  (Wrd65.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd65.Obj);
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 26))
    goto label_151;
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  (Wrd73.Lng) = ((Wrd75.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd73.Lng)))
    goto label_151;
  (Wrd70.Obj) = (LONG_TO_FIXNUM (Wrd73.Lng));

DEFLABEL (label_150)
  (Rsp [4]) = (Wrd70.Obj);

DEFLABEL (label_149)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_151)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_63]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_90)
  (Wrd70.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_62]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_89)
  (Wrd55.Obj) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_159;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (multiply_with_overflow ((Wrd40.Lng), 2, (& (Wrd36.Lng))))
    goto label_159;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));

DEFLABEL (label_158)
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_157;
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_157;
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if ((Wrd78.Lng) < (Wrd79.Lng))
    goto label_154;

DEFLABEL (label_156)
  (Wrd16.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd18.Obj);
  goto label_149;

DEFLABEL (label_157)
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_61]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_88)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_156;
  goto label_154;

DEFLABEL (label_159)
  (Wrd28.Obj) = (current_block [OBJECT_14_6]);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_60]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_87)
  (Wrd33.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_65]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_86)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_160;
  goto label_156;

DEFLABEL (lambda_97)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_14_17);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_163;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = (0 - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_163;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_162)
  (Rsp [0]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_36])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  ((Wrd23.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd19.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_163)
  (Wrd5.Obj) = (current_block [OBJECT_14_5]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_35]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_78)
  (Wrd10.Obj) = Rvl;
  goto label_162;

DEFLABEL (lambda_99)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_14_18);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_165;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = (0 - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_165;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_164)
  (Rsp [0]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_39])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  ((Wrd23.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd19.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_165)
  (Wrd5.Obj) = (current_block [OBJECT_14_5]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_38]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_79)
  (Wrd10.Obj) = Rvl;
  goto label_164;

DEFLABEL (lambda_101)
DEFLABEL (lambda_35)
  INTERRUPT_CHECK (26, LABEL_14_20);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_169;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = (0 - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_169;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_168)
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_167;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = (0 - (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_167;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));

DEFLABEL (label_166)
  (Rsp [1]) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_43])));
  Rhp += 2;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  Wrd36 = Wrd33;
  ((Wrd36.pObj) [2]) = (Wrd23.Obj);
  (Wrd35.Obj) = (Rsp [0]);
  ((Wrd36.pObj) [3]) = (Wrd35.Obj);
  Rvl = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_167)
  (Wrd18.Obj) = (current_block [OBJECT_14_5]);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_42]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_81)
  (Wrd23.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_169)
  (Wrd5.Obj) = (current_block [OBJECT_14_5]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_41]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_80)
  (Wrd10.Obj) = Rvl;
  goto label_168;

DEFLABEL (lambda_103)
DEFLABEL (lambda_40)
  INTERRUPT_CHECK (26, LABEL_14_21);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_173;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = (0 - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_173;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_172)
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_171;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = (0 - (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_171;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));

DEFLABEL (label_170)
  (Rsp [1]) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_48);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_47])));
  Rhp += 2;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  Wrd36 = Wrd33;
  ((Wrd36.pObj) [2]) = (Wrd23.Obj);
  (Wrd35.Obj) = (Rsp [0]);
  ((Wrd36.pObj) [3]) = (Wrd35.Obj);
  Rvl = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_171)
  (Wrd18.Obj) = (current_block [OBJECT_14_5]);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_46]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_83)
  (Wrd23.Obj) = Rvl;
  goto label_170;

DEFLABEL (label_173)
  (Wrd5.Obj) = (current_block [OBJECT_14_5]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_45]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_82)
  (Wrd10.Obj) = Rvl;
  goto label_172;

DEFLABEL (lambda_105)
DEFLABEL (lambda_46)
  INTERRUPT_CHECK (26, LABEL_14_24);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_175;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = (0 - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_175;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_174)
  (Rsp [1]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_51);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_50])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  ((Wrd23.pObj) [2]) = (Wrd10.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  Rvl = (Wrd19.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_175)
  (Wrd5.Obj) = (current_block [OBJECT_14_5]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_49]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_84)
  (Wrd10.Obj) = Rvl;
  goto label_174;

DEFLABEL (lambda_107)
DEFLABEL (lambda_50)
  INTERRUPT_CHECK (26, LABEL_14_25);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_177;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = (0 - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_177;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_176)
  (Rsp [1]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_54);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_53])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  ((Wrd23.pObj) [2]) = (Wrd10.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  Rvl = (Wrd19.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_177)
  (Wrd5.Obj) = (current_block [OBJECT_14_5]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_52]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_85)
  (Wrd10.Obj) = Rvl;
  goto label_176;

DEFLABEL (lambda_93)
  CLOSURE_HEADER (LABEL_14_28);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_95)
  CLOSURE_HEADER (LABEL_14_31);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_98)
  CLOSURE_HEADER (LABEL_14_36);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_100)
  CLOSURE_HEADER (LABEL_14_39);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_102)
  CLOSURE_HEADER (LABEL_14_43);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_104)
  CLOSURE_HEADER (LABEL_14_47);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_106)
  CLOSURE_HEADER (LABEL_14_50);

DEFLABEL (lambda_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_108)
  CLOSURE_HEADER (LABEL_14_53);

DEFLABEL (lambda_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 8
#define DEBUGGING_LABEL_15_2 7
#define OBJECT_15_0 6
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_15_4);
      goto divisibleP_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (divisibleP_4)
DEFLABEL (divisibleP_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_0)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_5;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_5)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd10.Lng) == 0)
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_15_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_5 3
#define LABEL_16_6 5
#define LABEL_16_4 7
#define LABEL_16_7 9
#define LABEL_16_8 11
#define LABEL_16_9 13
#define LABEL_16_10 15
#define LABEL_16_13 17
#define ENVIRONMENT_LABEL_16_3 29
#define DEBUGGING_LABEL_16_2 28
#define OBJECT_16_4 27
#define OBJECT_16_3 26
#define OBJECT_16_2 25
#define OBJECT_16_1 24
#define OBJECT_16_0 23
#define EXECUTE_CACHE_16_12 19
#define EXECUTE_CACHE_16_11 21
#define FREE_REFERENCES_LABEL_16_0 18
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd64;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd75;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd70;
  machine_word Wrd67;
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
      current_block = (Rpc - LABEL_16_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_4);
      goto round_quotient_9;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_16_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_16_13);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (round_quotient_14)
DEFLABEL (round_quotient_9)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd67.Obj) = (current_block [OBJECT_16_0]);
  (Wrd70.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd70.Lng))))
    goto label_32;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd67.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_31;

DEFLABEL (label_30)
  (Wrd13.Obj) = (current_block [OBJECT_16_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_17;

DEFLABEL (label_16)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_17)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_19;
  (Wrd15.Obj) = (current_block [OBJECT_16_4]);
  goto label_18;

DEFLABEL (label_19)
  (Wrd15.Obj) = (current_block [OBJECT_16_3]);

DEFLABEL (label_18)
DEFLABEL (label_29)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_21;

DEFLABEL (label_20)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (label_21)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_16_0]);
  (Wrd59.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd59.Lng))))
    goto label_28;
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd56.Obj));
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_27;

DEFLABEL (label_26)
  (Wrd38.Obj) = (current_block [OBJECT_16_2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd48.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd48.Lng))))
    goto label_16;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_23;
  (Wrd40.Obj) = (current_block [OBJECT_16_4]);
  goto label_22;

DEFLABEL (label_23)
  (Wrd40.Obj) = (current_block [OBJECT_16_3]);

DEFLABEL (label_22)
DEFLABEL (label_25)
  Rsp = (& (Rsp [3]));
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;

DEFLABEL (label_24)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16_10);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_27)
  Rsp = (& (Rsp [2]));
  goto label_24;

DEFLABEL (label_28)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

DEFLABEL (label_31)
  Rsp = (& (Rsp [2]));
  goto label_21;

DEFLABEL (label_32)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_31;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_24;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_21;

DEFLABEL (lambda_15)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_16_13);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_5 3
#define LABEL_17_6 5
#define LABEL_17_4 7
#define LABEL_17_7 9
#define LABEL_17_8 11
#define LABEL_17_9 13
#define LABEL_17_13 15
#define LABEL_17_10 17
#define LABEL_17_11 19
#define LABEL_17_15 21
#define ENVIRONMENT_LABEL_17_3 33
#define DEBUGGING_LABEL_17_2 32
#define OBJECT_17_4 31
#define OBJECT_17_3 30
#define OBJECT_17_2 29
#define OBJECT_17_1 28
#define OBJECT_17_0 27
#define EXECUTE_CACHE_17_14 23
#define EXECUTE_CACHE_17_12 25
#define FREE_REFERENCES_LABEL_17_0 22
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd67;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd78;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd73;
  machine_word Wrd70;
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
      current_block = (Rpc - LABEL_17_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_4);
      goto round_remainder_11;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_17_8);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_17_13);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_17_15);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (round_remainder_17)
DEFLABEL (round_remainder_11)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd70.Obj) = (current_block [OBJECT_17_0]);
  (Wrd73.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd73.Lng))))
    goto label_39;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd70.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_38;

DEFLABEL (label_37)
  (Wrd13.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_20;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_20)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_22;
  (Wrd15.Obj) = (current_block [OBJECT_17_4]);
  goto label_21;

DEFLABEL (label_22)
  (Wrd15.Obj) = (current_block [OBJECT_17_3]);

DEFLABEL (label_21)
DEFLABEL (label_36)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_28;

DEFLABEL (label_27)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (Wrd5.Obj) = Rvl;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_26;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_26;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd17.Lng), (Wrd18.Lng), (& (Wrd15.Lng))))
    goto label_26;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 26)
    goto label_24;

DEFLABEL (label_23)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_24)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_23;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) - (Wrd28.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_23;
  Rvl = (LONG_TO_FIXNUM (Wrd24.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_15)
  (Wrd11.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd59.Obj) = (current_block [OBJECT_17_0]);
  (Wrd62.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd62.Lng))))
    goto label_35;
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd59.Obj));
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd38.Obj) == (Wrd40.Obj))
    goto label_34;

DEFLABEL (label_33)
  (Wrd41.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd51.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd51.Lng))))
    goto label_19;
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd45.Obj) == (Wrd47.Obj))
    goto label_30;
  (Wrd43.Obj) = (current_block [OBJECT_17_4]);
  goto label_29;

DEFLABEL (label_30)
  (Wrd43.Obj) = (current_block [OBJECT_17_3]);

DEFLABEL (label_29)
DEFLABEL (label_32)
  Rsp = (& (Rsp [3]));
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;

DEFLABEL (label_31)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17_11);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_34)
  Rsp = (& (Rsp [2]));
  goto label_31;

DEFLABEL (label_35)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_34;

DEFLABEL (label_38)
  Rsp = (& (Rsp [2]));
  goto label_28;

DEFLABEL (label_39)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_31;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_28;

DEFLABEL (lambda_18)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_17_15);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_5 3
#define LABEL_18_6 5
#define LABEL_18_4 7
#define LABEL_18_7 9
#define LABEL_18_8 11
#define LABEL_18_11 13
#define LABEL_18_12 15
#define LABEL_18_13 17
#define LABEL_18_14 19
#define LABEL_18_16 21
#define LABEL_18_18 23
#define LABEL_18_20 25
#define LABEL_18_21 27
#define LABEL_18_9 29
#define LABEL_18_23 31
#define LABEL_18_24 33
#define LABEL_18_10 35
#define LABEL_18_15 37
#define LABEL_18_17 39
#define LABEL_18_19 41
#define LABEL_18_30 43
#define LABEL_18_22 45
#define LABEL_18_32 47
#define LABEL_18_25 49
#define TAG_18_26 23
#define LABEL_18_28 51
#define LABEL_18_29 53
#define LABEL_18_36 55
#define LABEL_18_31 57
#define LABEL_18_39 59
#define LABEL_18_33 61
#define LABEL_18_34 63
#define TAG_18_35 30
#define LABEL_18_37 65
#define TAG_18_38 31
#define LABEL_18_40 67
#define TAG_18_41 32
#define LABEL_18_42 69
#define TAG_18_43 33
#define ENVIRONMENT_LABEL_18_3 80
#define DEBUGGING_LABEL_18_2 79
#define OBJECT_18_5 78
#define OBJECT_18_4 77
#define OBJECT_18_3 76
#define OBJECT_18_2 75
#define OBJECT_18_1 74
#define OBJECT_18_0 73
#define EXECUTE_CACHE_18_27 71
#define FREE_REFERENCES_LABEL_18_0 70
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd156;
  machine_word Wrd154;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd144;
  machine_word Wrd147;
  machine_word Wrd151;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd131;
  machine_word Wrd134;
  machine_word Wrd138;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd111;
  machine_word Wrd106;
  machine_word Wrd110;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd91;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd98;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd118;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd124;
  machine_word Wrd158;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd58;
  machine_word Wrd160;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd170;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd181;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd176;
  machine_word Wrd173;
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
      current_block = (Rpc - LABEL_18_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_4);
      goto truncate__44;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto label_55;

    case 4:
      current_block = (Rpc - LABEL_18_8);
      goto label_54;

    case 5:
      current_block = (Rpc - LABEL_18_11);
      goto label_46;

    case 6:
      current_block = (Rpc - LABEL_18_12);
      goto label_51;

    case 7:
      current_block = (Rpc - LABEL_18_13);
      goto label_47;

    case 8:
      current_block = (Rpc - LABEL_18_14);
      goto label_48;

    case 9:
      current_block = (Rpc - LABEL_18_16);
      goto label_49;

    case 10:
      current_block = (Rpc - LABEL_18_18);
      goto label_50;

    case 11:
      current_block = (Rpc - LABEL_18_20);
      goto label_52;

    case 12:
      current_block = (Rpc - LABEL_18_21);
      goto label_53;

    case 13:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_18_23);
      goto label_56;

    case 15:
      current_block = (Rpc - LABEL_18_24);
      goto label_57;

    case 16:
      current_block = (Rpc - LABEL_18_10);
      goto continuation_6;

    case 17:
      current_block = (Rpc - LABEL_18_15);
      goto continuation_18;

    case 18:
      current_block = (Rpc - LABEL_18_17);
      goto continuation_24;

    case 19:
      current_block = (Rpc - LABEL_18_19);
      goto continuation_29;

    case 20:
      current_block = (Rpc - LABEL_18_30);
      goto label_58;

    case 21:
      current_block = (Rpc - LABEL_18_22);
      goto continuation_39;

    case 22:
      current_block = (Rpc - LABEL_18_32);
      goto label_59;

    case 23:
      current_block = (Rpc - LABEL_18_25);
      goto lambda_64;

    case 24:
      current_block = (Rpc - LABEL_18_28);
      goto continuation_17;

    case 25:
      current_block = (Rpc - LABEL_18_29);
      goto continuation_22;

    case 26:
      current_block = (Rpc - LABEL_18_36);
      goto label_60;

    case 27:
      current_block = (Rpc - LABEL_18_31);
      goto continuation_31;

    case 28:
      current_block = (Rpc - LABEL_18_39);
      goto label_61;

    case 29:
      current_block = (Rpc - LABEL_18_33);
      goto continuation_38;

    case 30:
      current_block = (Rpc - LABEL_18_34);
      goto lambda_65;

    case 31:
      current_block = (Rpc - LABEL_18_37);
      goto lambda_66;

    case 32:
      current_block = (Rpc - LABEL_18_40);
      goto lambda_67;

    case 33:
      current_block = (Rpc - LABEL_18_42);
      goto lambda_68;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (truncate__63)
DEFLABEL (truncate__44)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd173.Obj) = (current_block [OBJECT_18_0]);
  (Wrd176.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd176.Lng))))
    goto label_115;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd173.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_114;

DEFLABEL (label_113)
  (Wrd13.Obj) = (current_block [OBJECT_18_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_70;

DEFLABEL (label_69)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_70)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_72;
  (Wrd15.Obj) = (current_block [OBJECT_18_4]);
  goto label_71;

DEFLABEL (label_72)
  (Wrd15.Obj) = (current_block [OBJECT_18_3]);

DEFLABEL (label_71)
DEFLABEL (label_112)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_78;

DEFLABEL (label_77)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_27]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_76;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_76;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd17.Lng), (Wrd19.Lng), (& (Wrd15.Lng))))
    goto label_76;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_75)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_74;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_74;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) - (Wrd32.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_74;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));

DEFLABEL (label_73)
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_25])));
  Rhp += 2;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd39 = Wrd36;
  (Wrd40.Obj) = (Rsp [1]);
  ((Wrd39.pObj) [2]) = (Wrd40.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  ((Wrd39.pObj) [3]) = (Wrd38.Obj);
  Rvl = (Wrd35.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_24]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_57)
  (Wrd25.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_56)
  (Wrd10.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd162.Obj) = (current_block [OBJECT_18_0]);
  (Wrd165.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd165.Lng))))
    goto label_111;
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd162.Obj));
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd38.Obj) == (Wrd40.Obj))
    goto label_110;

DEFLABEL (label_109)
  (Wrd41.Obj) = (current_block [OBJECT_18_2]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd51.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd51.Lng))))
    goto label_69;
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd45.Obj) == (Wrd47.Obj))
    goto label_80;
  (Wrd43.Obj) = (current_block [OBJECT_18_4]);
  goto label_79;

DEFLABEL (label_80)
  (Wrd43.Obj) = (current_block [OBJECT_18_3]);

DEFLABEL (label_79)
DEFLABEL (label_108)
  Rsp = (& (Rsp [3]));
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_77;

DEFLABEL (label_107)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_106;
  (Wrd160.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd160.Lng) < 0)
    goto label_99;

DEFLABEL (label_98)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_97;
  (Wrd118.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if ((Wrd118.Lng) < 0)
    goto label_90;

DEFLABEL (label_89)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_88;
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if ((Wrd98.Lng) < 0)
    goto label_83;

DEFLABEL (label_82)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd77.Obj);

DEFLABEL (label_81)
  (Wrd156.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (label_83)
  (Wrd84.Obj) = (Rsp [1]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 26))
    goto label_87;
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  (Wrd86.Lng) = (0 - (Wrd90.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd86.Lng)))
    goto label_87;
  (Wrd91.Obj) = (LONG_TO_FIXNUM (Wrd86.Lng));
  (* (--Rsp)) = (Wrd91.Obj);

DEFLABEL (label_86)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd95.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd96.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_24)
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_29]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_22)
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_85;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = (0 - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_85;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_84)
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_37])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  (Wrd23.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  Rvl = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd6.Obj) = (current_block [OBJECT_18_5]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_60)
  (Wrd11.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd79.Obj) = (current_block [OBJECT_18_5]);
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_16]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_88)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_48)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_83;

DEFLABEL (label_90)
  (Wrd104.Obj) = (Rsp [0]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 26))
    goto label_96;
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd104.Obj));
  (Wrd106.Lng) = (0 - (Wrd110.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd106.Lng)))
    goto label_96;
  (Wrd111.Obj) = (LONG_TO_FIXNUM (Wrd106.Lng));
  (* (--Rsp)) = (Wrd111.Obj);

DEFLABEL (label_95)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_19]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd115.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd116.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd116.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_29)
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_94;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = (0 - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_94;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_93)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_31]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_31)
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_92;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = (0 - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_92;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_91)
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_41);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_40])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  (Wrd23.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  Rvl = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_92)
  (Wrd6.Obj) = (current_block [OBJECT_18_5]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_61)
  (Wrd11.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd6.Obj) = (current_block [OBJECT_18_5]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_58)
  (Wrd11.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd99.Obj) = (current_block [OBJECT_18_5]);
  (Wrd100.Obj) = (Rsp [0]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_18]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_97)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_47)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  goto label_90;

DEFLABEL (label_99)
  (Wrd119.Obj) = (Rsp [1]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if (! ((Wrd120.uLng) == 26))
    goto label_105;
  (Wrd158.Lng) = (FIXNUM_TO_LONG (Wrd119.Obj));
  if (! ((Wrd158.Lng) < 0))
    goto label_98;

DEFLABEL (label_104)
  (Wrd132.Obj) = (Rsp [0]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if (! ((Wrd133.uLng) == 26))
    goto label_103;
  (Wrd138.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  (Wrd134.Lng) = (0 - (Wrd138.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd134.Lng)))
    goto label_103;
  (Wrd131.Obj) = (LONG_TO_FIXNUM (Wrd134.Lng));

DEFLABEL (label_102)
  (Rsp [0]) = (Wrd131.Obj);
  (Wrd145.Obj) = (Rsp [1]);
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if (! ((Wrd146.uLng) == 26))
    goto label_101;
  (Wrd151.Lng) = (FIXNUM_TO_LONG (Wrd145.Obj));
  (Wrd147.Lng) = (0 - (Wrd151.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd147.Lng)))
    goto label_101;
  (Wrd144.Obj) = (LONG_TO_FIXNUM (Wrd147.Lng));

DEFLABEL (label_100)
  (Rsp [1]) = (Wrd144.Obj);
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_22]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  goto label_81;

DEFLABEL (label_101)
  (Wrd139.Obj) = (current_block [OBJECT_18_5]);
  (Wrd140.Obj) = (Rsp [1]);
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_21]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_53)
  (Wrd144.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd126.Obj) = (current_block [OBJECT_18_5]);
  (Wrd127.Obj) = (Rsp [0]);
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_20]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_52)
  (Wrd131.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  goto label_104;

DEFLABEL (label_106)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_46)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  goto label_99;

DEFLABEL (label_110)
  Rsp = (& (Rsp [2]));
  goto label_107;

DEFLABEL (label_111)
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_54)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_109;
  goto label_110;

DEFLABEL (label_114)
  Rsp = (& (Rsp [2]));
  goto label_78;

DEFLABEL (label_115)
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_55)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_113;
  goto label_114;

DEFLABEL (continuation_18)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_17)
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_34])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  ((Wrd12.pObj) [2]) = (Wrd6.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_39)
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_117;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = (0 - (Wrd15.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_117;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_116)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_33]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_38)
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_43);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_42])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  ((Wrd12.pObj) [2]) = (Wrd6.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_117)
  (Wrd6.Obj) = (current_block [OBJECT_18_5]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_116;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  goto label_107;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  goto label_78;

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_18_25);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_18_34);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_18_37);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_67)
  CLOSURE_HEADER (LABEL_18_40);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_68)
  CLOSURE_HEADER (LABEL_18_42);

DEFLABEL (lambda_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_5 3
#define LABEL_19_6 5
#define LABEL_19_4 7
#define LABEL_19_7 9
#define LABEL_19_8 11
#define LABEL_19_10 13
#define LABEL_19_11 15
#define LABEL_19_12 17
#define LABEL_19_13 19
#define LABEL_19_15 21
#define LABEL_19_17 23
#define LABEL_19_18 25
#define LABEL_19_19 27
#define LABEL_19_9 29
#define LABEL_19_14 31
#define LABEL_19_16 33
#define ENVIRONMENT_LABEL_19_3 44
#define DEBUGGING_LABEL_19_2 43
#define OBJECT_19_5 42
#define OBJECT_19_4 41
#define OBJECT_19_3 40
#define OBJECT_19_2 39
#define OBJECT_19_1 38
#define OBJECT_19_0 37
#define EXECUTE_CACHE_19_20 35
#define FREE_REFERENCES_LABEL_19_0 34
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd134;
  machine_word Wrd137;
  machine_word Wrd141;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd121;
  machine_word Wrd124;
  machine_word Wrd128;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd106;
  machine_word Wrd101;
  machine_word Wrd105;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd87;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd86;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd89;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd108;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd114;
  machine_word Wrd143;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd55;
  machine_word Wrd145;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd155;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd150;
  machine_word Wrd147;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd166;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd161;
  machine_word Wrd158;
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
      current_block = (Rpc - LABEL_19_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_4);
      goto truncate_quotient_17;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_19_10);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_19_11);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_19_12);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_19_13);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_19_15);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_19_17);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_19_18);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_19_19);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_19_14);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_19_16);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (truncate_quotient_30)
DEFLABEL (truncate_quotient_17)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd158.Obj) = (current_block [OBJECT_19_0]);
  (Wrd161.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd161.Lng))))
    goto label_65;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd158.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_64;

DEFLABEL (label_63)
  (Wrd13.Obj) = (current_block [OBJECT_19_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_32;

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_32)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_34;
  (Wrd15.Obj) = (current_block [OBJECT_19_4]);
  goto label_33;

DEFLABEL (label_34)
  (Wrd15.Obj) = (current_block [OBJECT_19_3]);

DEFLABEL (label_33)
DEFLABEL (label_62)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_36;

DEFLABEL (label_35)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_20]));

DEFLABEL (label_36)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd147.Obj) = (current_block [OBJECT_19_0]);
  (Wrd150.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd150.Lng))))
    goto label_61;
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd147.Obj));
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_60;

DEFLABEL (label_59)
  (Wrd38.Obj) = (current_block [OBJECT_19_2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd48.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd48.Lng))))
    goto label_31;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_38;
  (Wrd40.Obj) = (current_block [OBJECT_19_4]);
  goto label_37;

DEFLABEL (label_38)
  (Wrd40.Obj) = (current_block [OBJECT_19_3]);

DEFLABEL (label_37)
DEFLABEL (label_58)
  Rsp = (& (Rsp [3]));
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;

DEFLABEL (label_57)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_56;
  (Wrd145.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if ((Wrd145.Lng) < 0)
    goto label_49;

DEFLABEL (label_48)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_47;
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if ((Wrd108.Lng) < 0)
    goto label_45;

DEFLABEL (label_44)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_43;
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if ((Wrd89.Lng) < 0)
    goto label_40;

DEFLABEL (label_39)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (label_40)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd79.Obj) = (Rsp [2]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 26))
    goto label_42;
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  (Wrd81.Lng) = (0 - (Wrd85.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd81.Lng)))
    goto label_42;
  (Wrd86.Obj) = (LONG_TO_FIXNUM (Wrd81.Lng));
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_41)
  (Wrd87.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd87.Obj);
  goto label_39;

DEFLABEL (label_42)
  (Wrd74.Obj) = (current_block [OBJECT_19_5]);
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_40;

DEFLABEL (label_45)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd93.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd99.Obj) = (Rsp [2]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 26))
    goto label_46;
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  (Wrd101.Lng) = (0 - (Wrd105.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd101.Lng)))
    goto label_46;
  (Wrd106.Obj) = (LONG_TO_FIXNUM (Wrd101.Lng));
  (* (--Rsp)) = (Wrd106.Obj);
  goto label_39;

DEFLABEL (label_46)
  (Wrd94.Obj) = (current_block [OBJECT_19_5]);
  (Wrd95.Obj) = (Rsp [2]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_17]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_47)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_45;

DEFLABEL (label_49)
  (Wrd109.Obj) = (Rsp [1]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 26))
    goto label_55;
  (Wrd143.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  if (! ((Wrd143.Lng) < 0))
    goto label_48;

DEFLABEL (label_54)
  (Wrd122.Obj) = (Rsp [0]);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if (! ((Wrd123.uLng) == 26))
    goto label_53;
  (Wrd128.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  (Wrd124.Lng) = (0 - (Wrd128.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd124.Lng)))
    goto label_53;
  (Wrd121.Obj) = (LONG_TO_FIXNUM (Wrd124.Lng));

DEFLABEL (label_52)
  (Rsp [0]) = (Wrd121.Obj);
  (Wrd135.Obj) = (Rsp [1]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if (! ((Wrd136.uLng) == 26))
    goto label_51;
  (Wrd141.Lng) = (FIXNUM_TO_LONG (Wrd135.Obj));
  (Wrd137.Lng) = (0 - (Wrd141.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd137.Lng)))
    goto label_51;
  (Wrd134.Obj) = (LONG_TO_FIXNUM (Wrd137.Lng));

DEFLABEL (label_50)
  (Rsp [1]) = (Wrd134.Obj);
  goto label_39;

DEFLABEL (label_51)
  (Wrd129.Obj) = (current_block [OBJECT_19_5]);
  (Wrd130.Obj) = (Rsp [1]);
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_26)
  (Wrd134.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd116.Obj) = (current_block [OBJECT_19_5]);
  (Wrd117.Obj) = (Rsp [0]);
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_25)
  (Wrd121.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_54;

DEFLABEL (label_56)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_49;

DEFLABEL (label_60)
  Rsp = (& (Rsp [2]));
  goto label_57;

DEFLABEL (label_61)
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_60;

DEFLABEL (label_64)
  Rsp = (& (Rsp [2]));
  goto label_36;

DEFLABEL (label_65)
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd158.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_64;

DEFLABEL (continuation_12)
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_19_5]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 26)
    goto label_67;

DEFLABEL (label_66)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_67)
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = (0 - (Wrd14.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_66;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_14)
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_19_5]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 26)
    goto label_69;

DEFLABEL (label_68)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_69)
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = (0 - (Wrd14.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_68;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_57;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_5 3
#define LABEL_20_6 5
#define LABEL_20_4 7
#define LABEL_20_7 9
#define LABEL_20_8 11
#define LABEL_20_11 13
#define LABEL_20_12 15
#define LABEL_20_13 17
#define LABEL_20_14 19
#define LABEL_20_15 21
#define LABEL_20_17 23
#define LABEL_20_19 25
#define LABEL_20_20 27
#define LABEL_20_9 29
#define LABEL_20_21 31
#define LABEL_20_10 33
#define LABEL_20_16 35
#define LABEL_20_18 37
#define ENVIRONMENT_LABEL_20_3 48
#define DEBUGGING_LABEL_20_2 47
#define OBJECT_20_5 46
#define OBJECT_20_4 45
#define OBJECT_20_3 44
#define OBJECT_20_2 43
#define OBJECT_20_1 42
#define OBJECT_20_0 41
#define EXECUTE_CACHE_20_22 39
#define FREE_REFERENCES_LABEL_20_0 38
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
division_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd135;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd143;
  machine_word Wrd138;
  machine_word Wrd142;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd130;
  machine_word Wrd125;
  machine_word Wrd129;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd117;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd105;
  machine_word Wrd100;
  machine_word Wrd104;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd79;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd88;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd107;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd113;
  machine_word Wrd145;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd58;
  machine_word Wrd147;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd157;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd168;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd163;
  machine_word Wrd160;
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
      current_block = (Rpc - LABEL_20_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_20_4);
      goto truncate_remainder_19;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_20_8);
      goto label_29;

    case 5:
      current_block = (Rpc - LABEL_20_11);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_20_12);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_20_13);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_20_14);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_20_15);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_20_17);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_20_19);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_20_20);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_20_21);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_6;

    case 16:
      current_block = (Rpc - LABEL_20_16);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_20_18);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (truncate_remainder_33)
DEFLABEL (truncate_remainder_19)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd160.Obj) = (current_block [OBJECT_20_0]);
  (Wrd163.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd163.Lng))))
    goto label_72;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd160.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_71;

DEFLABEL (label_70)
  (Wrd13.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_35;

DEFLABEL (label_34)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_35)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_37;
  (Wrd15.Obj) = (current_block [OBJECT_20_4]);
  goto label_36;

DEFLABEL (label_37)
  (Wrd15.Obj) = (current_block [OBJECT_20_3]);

DEFLABEL (label_36)
DEFLABEL (label_69)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_43;

DEFLABEL (label_42)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (Wrd5.Obj) = Rvl;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_41;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_41;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd17.Lng), (Wrd18.Lng), (& (Wrd15.Lng))))
    goto label_41;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_40)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 26)
    goto label_39;

DEFLABEL (label_38)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_39)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_38;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) - (Wrd28.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_38;
  Rvl = (LONG_TO_FIXNUM (Wrd24.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_31)
  (Wrd11.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd149.Obj) = (current_block [OBJECT_20_0]);
  (Wrd152.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd152.Lng))))
    goto label_68;
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd149.Obj));
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd38.Obj) == (Wrd40.Obj))
    goto label_67;

DEFLABEL (label_66)
  (Wrd41.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd51.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd51.Lng))))
    goto label_34;
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd45.Obj) == (Wrd47.Obj))
    goto label_45;
  (Wrd43.Obj) = (current_block [OBJECT_20_4]);
  goto label_44;

DEFLABEL (label_45)
  (Wrd43.Obj) = (current_block [OBJECT_20_3]);

DEFLABEL (label_44)
DEFLABEL (label_65)
  Rsp = (& (Rsp [3]));
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;

DEFLABEL (label_64)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_63;
  (Wrd147.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd147.Lng) < 0)
    goto label_57;

DEFLABEL (label_56)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_55;
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if ((Wrd107.Lng) < 0)
    goto label_52;

DEFLABEL (label_51)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_50;
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if ((Wrd88.Lng) < 0)
    goto label_47;

DEFLABEL (label_46)
  INVOKE_INTERFACE_0 (56);

DEFLABEL (label_47)
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 26))
    goto label_49;
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  (Wrd82.Lng) = (0 - (Wrd86.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd82.Lng)))
    goto label_49;
  (Wrd79.Obj) = (LONG_TO_FIXNUM (Wrd82.Lng));

DEFLABEL (label_48)
  (Rsp [1]) = (Wrd79.Obj);
  goto label_46;

DEFLABEL (label_49)
  (Wrd74.Obj) = (current_block [OBJECT_20_5]);
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_24)
  (Wrd79.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_47;

DEFLABEL (label_52)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd92.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd98.Obj) = (Rsp [2]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 26))
    goto label_53;
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  (Wrd100.Lng) = (0 - (Wrd104.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd100.Lng)))
    goto label_53;
  (Wrd105.Obj) = (LONG_TO_FIXNUM (Wrd100.Lng));
  (* (--Rsp)) = (Wrd105.Obj);
  goto label_46;

DEFLABEL (label_53)
  (Wrd93.Obj) = (current_block [OBJECT_20_5]);
  (Wrd94.Obj) = (Rsp [2]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_25)
DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_55)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_52;

DEFLABEL (label_57)
  (Wrd108.Obj) = (Rsp [1]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 26))
    goto label_62;
  (Wrd145.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! ((Wrd145.Lng) < 0))
    goto label_56;

DEFLABEL (label_61)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_18]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd123.Obj) = (Rsp [2]);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd124.uLng) == 26))
    goto label_60;
  (Wrd129.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  (Wrd125.Lng) = (0 - (Wrd129.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd125.Lng)))
    goto label_60;
  (Wrd130.Obj) = (LONG_TO_FIXNUM (Wrd125.Lng));
  (* (--Rsp)) = (Wrd130.Obj);

DEFLABEL (label_59)
  (Wrd136.Obj) = (Rsp [2]);
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd136.Obj));
  if (! ((Wrd137.uLng) == 26))
    goto label_58;
  (Wrd142.Lng) = (FIXNUM_TO_LONG (Wrd136.Obj));
  (Wrd138.Lng) = (0 - (Wrd142.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd138.Lng)))
    goto label_58;
  (Wrd143.Obj) = (LONG_TO_FIXNUM (Wrd138.Lng));
  (* (--Rsp)) = (Wrd143.Obj);
  goto label_46;

DEFLABEL (label_58)
  (Wrd131.Obj) = (current_block [OBJECT_20_5]);
  (Wrd132.Obj) = (Rsp [2]);
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_20]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_28)
  goto label_54;

DEFLABEL (label_60)
  (Wrd118.Obj) = (current_block [OBJECT_20_5]);
  (Wrd119.Obj) = (Rsp [2]);
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_61;

DEFLABEL (label_63)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_57;

DEFLABEL (label_67)
  Rsp = (& (Rsp [2]));
  goto label_64;

DEFLABEL (label_68)
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd149.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_67;

DEFLABEL (label_71)
  Rsp = (& (Rsp [2]));
  goto label_43;

DEFLABEL (label_72)
  (Wrd168.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd160.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  goto label_71;

DEFLABEL (continuation_15)
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_20_5]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 26)
    goto label_74;

DEFLABEL (label_73)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_74)
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = (0 - (Wrd14.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_73;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_18)
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_20_5]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 26)
    goto label_76;

DEFLABEL (label_75)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_76)
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = (0 - (Wrd14.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_75;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_64;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_43;

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
division_so_1fb7d512c3eb3342 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 20)
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

static const struct liarc_code_S arr_decl_division_so_1fb7d512c3eb3342 [20] =
  {
    { "division_so_code_1", 25, division_so_code_1 },
    { "division_so_code_2", 10, division_so_code_2 },
    { "division_so_code_3", 8, division_so_code_3 },
    { "division_so_code_4", 18, division_so_code_4 },
    { "division_so_code_5", 19, division_so_code_5 },
    { "division_so_code_6", 24, division_so_code_6 },
    { "division_so_code_7", 18, division_so_code_7 },
    { "division_so_code_8", 19, division_so_code_8 },
    { "division_so_code_9", 23, division_so_code_9 },
    { "division_so_code_10", 11, division_so_code_10 },
    { "division_so_code_11", 11, division_so_code_11 },
    { "division_so_code_12", 16, division_so_code_12 },
    { "division_so_code_13", 19, division_so_code_13 },
    { "division_so_code_14", 52, division_so_code_14 },
    { "division_so_code_15", 2, division_so_code_15 },
    { "division_so_code_16", 8, division_so_code_16 },
    { "division_so_code_17", 10, division_so_code_17 },
    { "division_so_code_18", 34, division_so_code_18 },
    { "division_so_code_19", 16, division_so_code_19 },
    { "division_so_code_20", 18, division_so_code_20 }
  };

int
decl_division_so_1fb7d512c3eb3342 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_division_so_1fb7d512c3eb3342);
  return (0);
}

DECLARE_COMPILED_CODE ("division.so", 3, decl_division_so_1fb7d512c3eb3342, division_so_1fb7d512c3eb3342)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_division_so_data_1fb7d512c3eb3342 [3877] =
  "\x8c\x01\x1d\x8d\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x80\x06\x07"
  "\x02\xc2\xb9\x02\x28\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbd\x1d\xb0\x82\x88\x80\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbe\x1d\xb0\x83\x88\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x84\x88\x80\x06\x07"
  "\x02\xb1\x02\x28\xb2\x28\xb3\x28\xb4\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x85\x88\x80\x06\x07\x02\xb1\x02\x28\xb2\x28\xb3"
  "\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86"
  "\x88\x80\x06\x07\x02\xb1\x02\x28\x0d\x1c\x28\xb3\x28\x0d\x1c\x28"
  "\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x06\x07\x02\xb1\x02"
  "\x28\x1b\x28\xb3\x28\x1b\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x80\x06\x07\x02\xb1\x02\x28\x1b\x28\xb3\x28"
  "\x1b\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0"
  "\x02\x88\x80\x06\x07\x02\xb1\x02\x28\x0d\x1c\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x80\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x80\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x80\x06\x07\x02\xb1\x02\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x06\x07\x02\xb1\x02\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x82\x80\x06\x07\x02\xb1\x02\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x06\x07\x02\xb1\x02\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x06\x07\x02\xb1\x02\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x06\x07\x02"
  "\xb1\x02\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x80\x06\x07\x02\xb1\x02\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x80\x06\x07\x02\xb1\x02\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x17\xb9\x88\xb1\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\xb4\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\xb5\x2a"
  "\x17\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x0d\x0d\x1b\x1b\x0d\x0d\x0d\x0d"
  "\x0d\x0d\xb2\xb3\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x57\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x64\x69\x76"
  "\x69\x73\x69\x6f\x6e\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0f"
  "\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1b\x04\x0b"
  "\x63\x65\x69\x6c\x69\x6e\x67\x2b\x2f\x2b\x04\x0b\x63\x65\x69\x6c"
  "\x69\x6e\x67\x2d\x2f\x2d\x03\x08\x63\x65\x69\x6c\x69\x6e\x67\x04"
  "\x1c\x34\x81\x85\x02\x1b\x32\x81\x85\x02\x1a\x30\x81\x87\x02\x19"
  "\x2e\x81\x87\x02\x18\x2c\x81\x87\x02\x17\x2a\x81\x87\x02\x16\x28"
  "\x81\x85\x02\x15\x26\x81\x87\x02\x14\x24\x81\x87\x02\x13\x22\x81"
  "\x87\x02\x12\x20\x81\x87\x02\x11\x1e\x81\x87\x02\x10\x1c\x81\x87"
  "\x02\x0f\x1a\x81\x85\x02\x0e\x18\x81\x85\x02\x0d\x16\x81\x85\x02"
  "\x0c\x14\x81\x85\x02\x0b\x12\x81\x85\x02\x0a\x10\x81\x85\x02\x09"
  "\x0e\x81\x85\x02\x08\x0c\x81\x83\x02\x07\x0a\x81\x83\x02\x06\x08"
  "\x84\x06\x05\x06\x81\x85\x02\x04\x04\x81\x85\x02\x33\x43\x02\x26"
  "\x16\x81\x85\x02\x25\x14\x81\x85\x02\x24\x12\x81\x89\x02\x23\x10"
  "\x81\x89\x02\x22\x0e\x81\x89\x02\x21\x0c\x81\x87\x02\x20\x0a\x81"
  "\x85\x02\x1f\x08\x81\x85\x02\x1e\x06\x81\x85\x02\x1d\x04\x84\x06"
  "\x15\x19\x02\x2e\x12\x81\x85\x02\x2d\x10\x81\x85\x02\x2c\x0e\x81"
  "\x89\x02\x2b\x0c\x81\x89\x02\x2a\x0a\x81\x89\x02\x29\x08\x81\x87"
  "\x02\x28\x06\x81\x85\x02\x27\x04\x84\x06\x11\x14\x02\x0f\x1b\x04"
  "\x04\x03\x04\x40\x26\x84\x06\x3f\x24\x84\x06\x3e\x22\x81\x85\x02"
  "\x3d\x20\x81\x85\x02\x3c\x1e\x81\x85\x02\x3b\x1c\x81\x85\x02\x3a"
  "\x1a\x81\x85\x02\x39\x18\x81\x89\x02\x38\x16\x81\x87\x02\x37\x14"
  "\x81\x85\x02\x36\x12\x81\x85\x02\x35\x10\x81\x85\x02\x34\x0e\x81"
  "\x85\x02\x33\x0c\x81\x83\x02\x32\x0a\x81\x83\x02\x31\x08\x84\x06"
  "\x30\x06\x81\x85\x02\x2f\x04\x81\x85\x02\x25\x35\x09\x02\x0f\x1b"
  "\x04\x04\x03\x04\x53\x28\x84\x06\x52\x26\x84\x06\x51\x24\x81\x85"
  "\x02\x50\x22\x81\x85\x02\x4f\x20\x81\x85\x02\x4e\x1e\x81\x87\x02"
  "\x4d\x1c\x81\x85\x02\x4c\x1a\x81\x85\x02\x4b\x18\x81\x89\x02\x4a"
  "\x16\x81\x85\x02\x49\x14\x81\x85\x02\x48\x12\x81\x85\x02\x47\x10"
  "\x81\x85\x02\x46\x0e\x81\x85\x02\x45\x0c\x81\x83\x02\x44\x0a\x81"
  "\x83\x02\x43\x08\x84\x06\x42\x06\x81\x85\x02\x41\x04\x81\x85\x02"
  "\x27\x37\x0a\x02\x0f\x1b\x04\x09\x66\x6c\x6f\x6f\x72\x2d\x2f\x2b"
  "\x0b\x04\x03\x06\x66\x6c\x6f\x6f\x72\x0c\x03\x05\x6b\x32\x81\x85"
  "\x02\x6a\x30\x81\x85\x02\x69\x2e\x81\x87\x02\x68\x2c\x81\x87\x02"
  "\x67\x2a\x81\x87\x02\x66\x28\x81\x85\x02\x65\x26\x81\x87\x02\x64"
  "\x24\x81\x85\x02\x63\x22\x81\x87\x02\x62\x20\x81\x87\x02\x61\x1e"
  "\x81\x87\x02\x60\x1c\x81\x87\x02\x5f\x1a\x81\x85\x02\x5e\x18\x81"
  "\x85\x02\x5d\x16\x81\x85\x02\x5c\x14\x81\x85\x02\x5b\x12\x81\x85"
  "\x02\x5a\x10\x81\x85\x02\x59\x0e\x81\x87\x02\x58\x0c\x81\x83\x02"
  "\x57\x0a\x81\x83\x02\x56\x08\x84\x06\x55\x06\x81\x85\x02\x54\x04"
  "\x81\x85\x02\x31\x43\x0d\x02\x08\x0f\x1b\x04\x0b\x04\x03\x0c\x03"
  "\x05\x7d\x26\x84\x06\x7c\x24\x84\x06\x7b\x22\x81\x85\x02\x7a\x20"
  "\x81\x85\x02\x79\x1e\x81\x85\x02\x78\x1c\x81\x85\x02\x77\x1a\x81"
  "\x85\x02\x76\x18\x81\x87\x02\x75\x16\x81\x85\x02\x74\x14\x81\x85"
  "\x02\x73\x12\x81\x85\x02\x72\x10\x81\x85\x02\x71\x0e\x81\x85\x02"
  "\x70\x0c\x81\x83\x02\x6f\x0a\x81\x83\x02\x6e\x08\x84\x06\x6d\x06"
  "\x81\x85\x02\x6c\x04\x81\x85\x02\x25\x37\x0e\x02\x09\x0f\x1b\x04"
  "\x0b\x04\x03\x0c\x03\x05\x90\x01\x28\x84\x06\x8f\x01\x26\x84\x06"
  "\x8e\x01\x24\x81\x85\x02\x8d\x01\x22\x81\x85\x02\x8c\x01\x20\x81"
  "\x87\x02\x8b\x01\x1e\x81\x87\x02\x8a\x01\x1c\x81\x85\x02\x89\x01"
  "\x1a\x81\x85\x02\x88\x01\x18\x81\x85\x02\x87\x01\x16\x81\x85\x02"
  "\x86\x01\x14\x81\x85\x02\x85\x01\x12\x81\x85\x02\x84\x01\x10\x81"
  "\x85\x02\x83\x01\x0e\x81\x87\x02\x82\x01\x0c\x81\x83\x02\x81\x01"
  "\x0a\x81\x83\x02\x80\x01\x08\x84\x06\x7f\x06\x81\x85\x02\x7e\x04"
  "\x81\x85\x02\x27\x39\x02\x0a\x0f\x1b\x04\x09\x66\x6c\x6f\x6f\x72"
  "\x2b\x2f\x2d\x0f\x04\x0b\x03\x0c\x04\xa7\x01\x30\x81\x85\x02\xa6"
  "\x01\x2e\x81\x85\x02\xa5\x01\x2c\x81\x87\x02\xa4\x01\x2a\x81\x87"
  "\x02\xa3\x01\x28\x81\x85\x02\xa2\x01\x26\x81\x85\x02\xa1\x01\x24"
  "\x81\x85\x02\xa0\x01\x22\x81\x85\x02\x9f\x01\x20\x81\x87\x02\x9e"
  "\x01\x1e\x81\x87\x02\x9d\x01\x1c\x81\x87\x02\x9c\x01\x1a\x81\x85"
  "\x02\x9b\x01\x18\x81\x85\x02\x9a\x01\x16\x81\x85\x02\x99\x01\x14"
  "\x81\x85\x02\x98\x01\x12\x81\x85\x02\x97\x01\x10\x81\x85\x02\x96"
  "\x01\x0e\x81\x85\x02\x95\x01\x0c\x81\x83\x02\x94\x01\x0a\x81\x83"
  "\x02\x93\x01\x08\x84\x06\x92\x01\x06\x81\x85\x02\x91\x01\x04\x81"
  "\x85\x02\x2f\x3f\x10\x02\x0b\xb2\x01\x18\x81\x85\x02\xb1\x01\x16"
  "\x81\x85\x02\xb0\x01\x14\x81\x89\x02\xaf\x01\x12\x81\x89\x02\xae"
  "\x01\x10\x81\x89\x02\xad\x01\x0e\x81\x89\x02\xac\x01\x0c\x81\x89"
  "\x02\xab\x01\x0a\x81\x89\x02\xaa\x01\x08\x81\x87\x02\xa9\x01\x06"
  "\x81\x85\x02\xa8\x01\x04\x84\x06\x17\x1b\x11\x02\x0c\xbd\x01\x18"
  "\x81\x85\x02\xbc\x01\x16\x81\x85\x02\xbb\x01\x14\x81\x8b\x02\xba"
  "\x01\x12\x81\x8b\x02\xb9\x01\x10\x81\x8b\x02\xb8\x01\x0e\x81\x8b"
  "\x02\xb7\x01\x0c\x81\x8b\x02\xb6\x01\x0a\x81\x89\x02\xb5\x01\x08"
  "\x81\x87\x02\xb4\x01\x06\x81\x85\x02\xb3\x01\x04\x84\x06\x17\x1b"
  "\x12\x02\x0d\x0f\x1b\x04\x0f\x04\x0b\x03\x0c\x04\xcd\x01\x22\x84"
  "\x06\xcc\x01\x20\x84\x06\xcb\x01\x1e\x81\x85\x02\xca\x01\x1c\x81"
  "\x85\x02\xc9\x01\x1a\x81\x85\x02\xc8\x01\x18\x81\x85\x02\xc7\x01"
  "\x16\x81\x85\x02\xc6\x01\x14\x81\x85\x02\xc5\x01\x12\x81\x85\x02"
  "\xc4\x01\x10\x81\x85\x02\xc3\x01\x0e\x81\x85\x02\xc2\x01\x0c\x81"
  "\x83\x02\xc1\x01\x0a\x81\x83\x02\xc0\x01\x08\x84\x06\xbf\x01\x06"
  "\x81\x85\x02\xbe\x01\x04\x81\x85\x02\x21\x31\x13\x02\x0e\x0f\x1b"
  "\x04\x0f\x04\x0b\x03\x0c\x04\xe0\x01\x28\x84\x06\xdf\x01\x26\x84"
  "\x06\xde\x01\x24\x81\x85\x02\xdd\x01\x22\x81\x85\x02\xdc\x01\x20"
  "\x81\x85\x02\xdb\x01\x1e\x81\x87\x02\xda\x01\x1c\x81\x85\x02\xd9"
  "\x01\x1a\x81\x85\x02\xd8\x01\x18\x81\x89\x02\xd7\x01\x16\x81\x87"
  "\x02\xd6\x01\x14\x81\x85\x02\xd5\x01\x12\x81\x85\x02\xd4\x01\x10"
  "\x81\x85\x02\xd3\x01\x0e\x81\x85\x02\xd2\x01\x0c\x81\x83\x02\xd1"
  "\x01\x0a\x81\x83\x02\xd0\x01\x08\x84\x06\xcf\x01\x06\x81\x85\x02"
  "\xce\x01\x04\x81\x85\x02\x27\x37\x0c\x02\x0f\x0f\x1b\x03\x06\x72"
  "\x6f\x75\x6e\x64\x14\x03\x06\x65\x76\x65\x6e\x3f\x03\x05\x6f\x64"
  "\x64\x3f\x04\x0b\x64\x69\x76\x69\x73\x69\x62\x6c\x65\x3f\x15\x05"
  "\x94\x02\x6a\x81\x8f\x02\x93\x02\x68\x81\x8d\x02\x92\x02\x66\x81"
  "\x8b\x02\x91\x02\x64\x81\x8d\x02\x90\x02\x62\x81\x8d\x02\x8f\x02"
  "\x60\x81\x8d\x02\x8e\x02\x5e\x81\x8d\x02\x8d\x02\x5c\x81\x8d\x02"
  "\x8c\x02\x5a\x81\x8d\x02\x8b\x02\x58\x81\x8d\x02\x8a\x02\x56\x81"
  "\x85\x02\x89\x02\x54\x81\x85\x02\x88\x02\x52\x81\x85\x02\x87\x02"
  "\x50\x81\x85\x02\x86\x02\x4e\x81\x85\x02\x85\x02\x4c\x81\x85\x02"
  "\x84\x02\x4a\x81\x89\x02\x83\x02\x48\x81\x85\x02\x82\x02\x46\x81"
  "\x85\x02\x81\x02\x44\x81\x85\x02\x80\x02\x42\x84\x06\xff\x01\x40"
  "\x81\x85\x02\xfe\x01\x3e\x84\x06\xfd\x01\x3c\x81\x85\x02\xfc\x01"
  "\x3a\x81\x85\x02\xfb\x01\x38\x84\x06\xfa\x01\x36\x81\x85\x02\xf9"
  "\x01\x34\x81\x85\x02\xf8\x01\x32\x84\x06\xf7\x01\x30\x81\x85\x02"
  "\xf6\x01\x2e\x84\x06\xf5\x01\x2c\x81\x85\x02\xf4\x01\x2a\x84\x06"
  "\xf3\x01\x28\x81\x89\x02\xf2\x01\x26\x84\x06\xf1\x01\x24\x81\x87"
  "\x02\xf0\x01\x22\x81\x87\x02\xef\x01\x20\x81\x87\x02\xee\x01\x1e"
  "\x81\x85\x02\xed\x01\x1c\x81\x87\x02\xec\x01\x1a\x81\x85\x02\xeb"
  "\x01\x18\x81\x87\x02\xea\x01\x16\x81\x85\x02\xe9\x01\x14\x81\x85"
  "\x02\xe8\x01\x12\x81\x85\x02\xe7\x01\x10\x81\x85\x02\xe6\x01\x0e"
  "\x81\x85\x02\xe5\x01\x0c\x81\x83\x02\xe4\x01\x0a\x81\x83\x02\xe3"
  "\x01\x08\x84\x06\xe2\x01\x06\x81\x85\x02\xe1\x01\x04\x81\x85\x02"
  "\x69\x7c\x16\x02\x10\x96\x02\x06\x81\x85\x02\x95\x02\x04\x84\x06"
  "\x05\x17\x02\x11\x0f\x1b\x04\x07\x72\x6f\x75\x6e\x64\x2f\x18\x03"
  "\x14\x03\x9e\x02\x12\x84\x06\x9d\x02\x10\x81\x85\x02\x9c\x02\x0e"
  "\x81\x85\x02\x9b\x02\x0c\x81\x83\x02\x9a\x02\x0a\x81\x83\x02\x99"
  "\x02\x08\x84\x06\x98\x02\x06\x81\x85\x02\x97\x02\x04\x81\x85\x02"
  "\x11\x1e\x19\x02\x12\x0f\x1b\x04\x18\x03\x14\x03\xa8\x02\x16\x84"
  "\x06\xa7\x02\x14\x81\x85\x02\xa6\x02\x12\x81\x87\x02\xa5\x02\x10"
  "\x81\x85\x02\xa4\x02\x0e\x81\x85\x02\xa3\x02\x0c\x81\x83\x02\xa2"
  "\x02\x0a\x81\x83\x02\xa1\x02\x08\x84\x06\xa0\x02\x06\x81\x85\x02"
  "\x9f\x02\x04\x81\x85\x02\x15\x22\x14\x02\x13\x0f\x1b\x03\x09\x74"
  "\x72\x75\x6e\x63\x61\x74\x65\x1a\x02\xca\x02\x46\x81\x85\x02\xc9"
  "\x02\x44\x81\x85\x02\xc8\x02\x42\x81\x85\x02\xc7\x02\x40\x81\x85"
  "\x02\xc6\x02\x3e\x81\x87\x02\xc5\x02\x3c\x81\x87\x02\xc4\x02\x3a"
  "\x81\x87\x02\xc3\x02\x38\x81\x87\x02\xc2\x02\x36\x81\x87\x02\xc1"
  "\x02\x34\x81\x87\x02\xc0\x02\x32\x81\x85\x02\xbf\x02\x30\x81\x85"
  "\x02\xbe\x02\x2e\x81\x85\x02\xbd\x02\x2c\x81\x87\x02\xbc\x02\x2a"
  "\x81\x87\x02\xbb\x02\x28\x81\x87\x02\xba\x02\x26\x81\x85\x02\xb9"
  "\x02\x24\x81\x87\x02\xb8\x02\x22\x81\x87\x02\xb7\x02\x20\x81\x87"
  "\x02\xb6\x02\x1e\x81\x85\x02\xb5\x02\x1c\x81\x85\x02\xb4\x02\x1a"
  "\x81\x85\x02\xb3\x02\x18\x81\x85\x02\xb2\x02\x16\x81\x85\x02\xb1"
  "\x02\x14\x81\x85\x02\xb0\x02\x12\x81\x85\x02\xaf\x02\x10\x81\x85"
  "\x02\xae\x02\x0e\x81\x85\x02\xad\x02\x0c\x81\x83\x02\xac\x02\x0a"
  "\x81\x83\x02\xab\x02\x08\x84\x06\xaa\x02\x06\x81\x85\x02\xa9\x02"
  "\x04\x81\x85\x02\x45\x51\x1b\x02\x14\x0f\x1b\x03\x1a\x02\xda\x02"
  "\x22\x81\x85\x02\xd9\x02\x20\x81\x85\x02\xd8\x02\x1e\x81\x85\x02"
  "\xd7\x02\x1c\x81\x85\x02\xd6\x02\x1a\x81\x85\x02\xd5\x02\x18\x81"
  "\x89\x02\xd4\x02\x16\x81\x87\x02\xd3\x02\x14\x81\x85\x02\xd2\x02"
  "\x12\x81\x85\x02\xd1\x02\x10\x81\x85\x02\xd0\x02\x0e\x81\x85\x02"
  "\xcf\x02\x0c\x81\x83\x02\xce\x02\x0a\x81\x83\x02\xcd\x02\x08\x84"
  "\x06\xcc\x02\x06\x81\x85\x02\xcb\x02\x04\x81\x85\x02\x21\x2d\x1c"
  "\x02\x15\x0f\x1b\x03\x1a\x02\xec\x02\x26\x81\x85\x02\xeb\x02\x24"
  "\x81\x85\x02\xea\x02\x22\x81\x87\x02\xe9\x02\x20\x81\x85\x02\xe8"
  "\x02\x1e\x81\x85\x02\xe7\x02\x1c\x81\x89\x02\xe6\x02\x1a\x81\x87"
  "\x02\xe5\x02\x18\x81\x89\x02\xe4\x02\x16\x81\x85\x02\xe3\x02\x14"
  "\x81\x85\x02\xe2\x02\x12\x81\x85\x02\xe1\x02\x10\x81\x85\x02\xe0"
  "\x02\x0e\x81\x85\x02\xdf\x02\x0c\x81\x83\x02\xde\x02\x0a\x81\x83"
  "\x02\xdd\x02\x08\x84\x06\xdc\x02\x06\x81\x85\x02\xdb\x02\x04\x81"
  "\x85\x02\x25\x31\x1a\x15\x1a\x08\x1c\x08\x1b\x08\x14\x08\x19\x08"
  "\x17\x04\x16\x08\x0c\x08\x13\x08\x12\x04\x11\x04\x10\x08\x08\x0e"
  "\x08\x0d\x08\x0a\x08\x09\x08\x04\x04\x08\x15\x13\x74\x72\x75\x6e"
  "\x63\x61\x74\x65\x2d\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x12\x74"
  "\x72\x75\x6e\x63\x61\x74\x65\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74"
  "\x0a\x74\x72\x75\x6e\x63\x61\x74\x65\x2f\x10\x72\x6f\x75\x6e\x64"
  "\x2d\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x0f\x72\x6f\x75\x6e\x64"
  "\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x15\x18\x10\x66\x6c\x6f\x6f"
  "\x72\x2d\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x0f\x66\x6c\x6f\x6f"
  "\x72\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x0f\x0b\x07\x66\x6c\x6f"
  "\x6f\x72\x2f\x14\x65\x75\x63\x6c\x69\x64\x65\x61\x6e\x2d\x72\x65"
  "\x6d\x61\x69\x6e\x64\x65\x72\x13\x65\x75\x63\x6c\x69\x64\x65\x61"
  "\x6e\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x0b\x65\x75\x63\x6c\x69"
  "\x64\x65\x61\x6e\x2f\x12\x63\x65\x69\x6c\x69\x6e\x67\x2d\x72\x65"
  "\x6d\x61\x69\x6e\x64\x65\x72\x11\x63\x65\x69\x6c\x69\x6e\x67\x2d"
  "\x71\x75\x6f\x74\x69\x65\x6e\x74\x09\x63\x65\x69\x6c\x69\x6e\x67"
  "\x2f\x15\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04"
  "\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
division_so_data_1fb7d512c3eb3342 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_division_so_data_1fb7d512c3eb3342 [0]))), (sizeof (prog_division_so_data_1fb7d512c3eb3342)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("division.so", division_so_data_1fb7d512c3eb3342)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("division.so", "31aa1a101780a019")
