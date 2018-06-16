/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:49-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_7 7
#define LABEL_1_5 9
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
#define ENVIRONMENT_LABEL_1_3 57
#define DEBUGGING_LABEL_1_2 56
#define OBJECT_1_15 55
#define OBJECT_1_14 54
#define OBJECT_1_13 53
#define OBJECT_1_12 52
#define OBJECT_1_11 51
#define OBJECT_1_10 50
#define OBJECT_1_9 49
#define OBJECT_1_8 48
#define OBJECT_1_7 47
#define OBJECT_1_6 46
#define OBJECT_1_5 45
#define OBJECT_1_4 44
#define OBJECT_1_3 43
#define OBJECT_1_2 42
#define OBJECT_1_1 41
#define OBJECT_1_0 40
#define FREE_REFERENCE_1_0 39
#define FREE_REFERENCES_LABEL_1_0 38
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd148;
  machine_word Wrd143;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd240;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd226;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd234;
  machine_word Wrd233;
  machine_word Wrd264;
  machine_word Wrd260;
  machine_word Wrd259;
  double Dbl247;
  machine_word Wrd245;
  machine_word Wrd242;
  machine_word Wrd248;
  machine_word Wrd256;
  machine_word Wrd255;
  machine_word Wrd254;
  machine_word Wrd252;
  machine_word Wrd250;
  machine_word Wrd249;
  machine_word Wrd258;
  machine_word Wrd257;
  machine_word Wrd223;
  machine_word Wrd220;
  machine_word Wrd211;
  double Dbl216;
  double Dbl215;
  machine_word Wrd214;
  double Dbl213;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd184;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd170;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd210;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd205;
  double Dbl192;
  machine_word Wrd189;
  machine_word Wrd186;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd202;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd198;
  machine_word Wrd196;
  machine_word Wrd195;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd271;
  machine_word Wrd268;
  double Dbl140;
  machine_word Wrd139;
  double Dbl138;
  machine_word Wrd266;
  machine_word Wrd265;
  machine_word Wrd136;
  machine_word Wrd129;
  double Dbl128;
  double Dbl127;
  double Dbl126;
  machine_word Wrd130;
  machine_word Wrd131;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd112;
  double Dbl116;
  double Dbl115;
  double Dbl113;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd92;
  double Dbl98;
  machine_word Wrd93;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd86;
  machine_word Wrd282;
  machine_word Wrd85;
  machine_word Wrd79;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd44;
  double Dbl43;
  machine_word Wrd38;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd54;
  machine_word Wrd53;
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
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_1_4);
      goto flo_random_element_26;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_29;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto label_33;

    case 9:
      current_block = (Rpc - LABEL_1_13);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_1_14);
      goto label_35;

    case 11:
      current_block = (Rpc - LABEL_1_15);
      goto label_41;

    case 12:
      current_block = (Rpc - LABEL_1_16);
      goto label_37;

    case 13:
      current_block = (Rpc - LABEL_1_17);
      goto label_36;

    case 14:
      current_block = (Rpc - LABEL_1_18);
      goto label_38;

    case 15:
      current_block = (Rpc - LABEL_1_19);
      goto label_40;

    case 16:
      current_block = (Rpc - LABEL_1_20);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_random_element_43)
DEFLABEL (flo_random_element_26)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_80;
  Wrd8 = Wrd12;

DEFLABEL (label_79)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_78;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_78;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_77)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_76;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_76;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_75)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 6))
    goto label_74;
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_74;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) (Wrd48.Lng)) < ((unsigned long) (Wrd52.Lng))))
    goto label_74;
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  Dbl43 = (((double *) (& ((Wrd50.pObj) [1]))) [(Wrd38.Lng)]);
  INLINE_DOUBLE_TO_FLONUM (Dbl43, (Wrd44.Obj));
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_73)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd72.Obj) = (Rsp [5]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_72;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd71.Lng))))
    goto label_72;
  (Wrd65.Obj) = ((Wrd69.pObj) [3]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_71)
  (Wrd80.Obj) = (Rsp [3]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  (Wrd84.Lng) = ((Wrd81.Lng) - 22L);
  (Wrd79.Obj) = (LONG_TO_FIXNUM (Wrd84.Lng));
  Wrd85 = Wrd84;
  if ((Wrd85.Lng) < 0)
    goto label_45;
  Wrd86 = Wrd79;
  goto label_44;

DEFLABEL (label_45)
  (Wrd282.Lng) = ((Wrd85.Lng) + 43L);
  (Wrd86.Obj) = (LONG_TO_FIXNUM (Wrd282.Lng));

DEFLABEL (label_44)
DEFLABEL (label_70)
  (Wrd105.Obj) = (Rsp [4]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd106.uLng) == 6))
    goto label_69;
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd99.uLng) == 26))
    goto label_69;
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if (! (((unsigned long) (Wrd100.Lng)) < ((unsigned long) (Wrd104.Lng))))
    goto label_69;
  (Wrd93.uLng) = (OBJECT_DATUM (Wrd86.Obj));
  Dbl98 = (((double *) (& ((Wrd102.pObj) [1]))) [(Wrd93.Lng)]);
  INLINE_DOUBLE_TO_FLONUM (Dbl98, (Wrd92.Obj));

DEFLABEL (label_68)
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd119.uLng) == 6))
    goto label_67;
  (Wrd117.Obj) = (Rsp [2]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 6))
    goto label_67;
  Dbl113 = (FLONUM_TO_DOUBLE (Wrd92.Obj));
  Dbl115 = (FLONUM_TO_DOUBLE (Wrd117.Obj));
  Dbl116 = (Dbl113 - Dbl115);
  INLINE_DOUBLE_TO_FLONUM (Dbl116, (Wrd112.Obj));

DEFLABEL (label_66)
  (Wrd125.Obj) = (* (Rsp++));
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd131.uLng) == 6))
    goto label_65;
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd130.uLng) == 6))
    goto label_65;
  Dbl126 = (FLONUM_TO_DOUBLE (Wrd112.Obj));
  Dbl127 = (FLONUM_TO_DOUBLE (Wrd125.Obj));
  Dbl128 = (Dbl126 - Dbl127);
  INLINE_DOUBLE_TO_FLONUM (Dbl128, (Wrd129.Obj));
  (* (--Rsp)) = (Wrd129.Obj);

DEFLABEL (label_64)
  (Wrd265.Obj) = (Rsp [0]);
  (Wrd266.uLng) = (OBJECT_TYPE (Wrd265.Obj));
  if (! ((Wrd266.uLng) == 6))
    goto label_63;
  Dbl138 = (FLONUM_TO_DOUBLE (Wrd265.Obj));
  (Wrd139.Obj) = (current_block [OBJECT_1_7]);
  Dbl140 = (FLONUM_TO_DOUBLE (Wrd139.Obj));
  if (Dbl138 < Dbl140)
    goto label_57;

DEFLABEL (label_56)
  (Wrd203.Obj) = (Rsp [4]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if (! ((Wrd204.uLng) == 6))
    goto label_55;
  (Wrd195.Obj) = (Rsp [3]);
  (Wrd196.uLng) = (OBJECT_TYPE (Wrd195.Obj));
  if (! ((Wrd196.uLng) == 26))
    goto label_55;
  (Wrd198.Lng) = (FIXNUM_TO_LONG (Wrd195.Obj));
  (Wrd200.pObj) = (OBJECT_ADDRESS (Wrd203.Obj));
  (Wrd201.Obj) = ((Wrd200.pObj) [0]);
  (Wrd202.Lng) = (FIXNUM_TO_LONG (Wrd201.Obj));
  if (! (((unsigned long) (Wrd198.Lng)) < ((unsigned long) (Wrd202.Lng))))
    goto label_55;
  (Wrd193.Obj) = (Rsp [0]);
  (Wrd194.uLng) = (OBJECT_TYPE (Wrd193.Obj));
  if (! ((Wrd194.uLng) == 6))
    goto label_55;
  (Wrd186.uLng) = (OBJECT_DATUM (Wrd195.Obj));
  (Wrd189.pObj) = (& ((Wrd200.pObj) [1]));
  Dbl192 = (FLONUM_TO_DOUBLE (Wrd193.Obj));
  ((Wrd189.pDbl) [(Wrd186.Lng)]) = Dbl192;

DEFLABEL (label_54)
  (Wrd177.Obj) = (Rsp [6]);
  (Wrd178.uLng) = (OBJECT_TYPE (Wrd177.Obj));
  if (! ((Wrd178.uLng) == 10))
    goto label_53;
  (Wrd174.pObj) = (OBJECT_ADDRESS (Wrd177.Obj));
  (Wrd175.Obj) = ((Wrd174.pObj) [0]);
  (Wrd176.Lng) = (FIXNUM_TO_LONG (Wrd175.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd176.Lng))))
    goto label_53;
  (Wrd170.Obj) = (current_block [OBJECT_1_7]);
  ((Wrd174.pObj) [3]) = (Wrd170.Obj);

DEFLABEL (label_52)
  (Wrd141.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd141.Obj);
  (Wrd142.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd142.Obj);
  (Wrd144.Obj) = (Rsp [5]);
  (Wrd145.Lng) = (FIXNUM_TO_LONG (Wrd144.Obj));
  (Wrd146.Lng) = ((Wrd145.Lng) + 1L);
  (Wrd143.Obj) = (LONG_TO_FIXNUM (Wrd146.Lng));
  if ((Wrd143.Obj) == (current_block [OBJECT_1_14]))
    goto label_47;
  Wrd148 = Wrd143;
  goto label_46;

DEFLABEL (label_47)
  (Wrd148.Obj) = (current_block [OBJECT_1_15]);

DEFLABEL (label_46)
DEFLABEL (label_51)
  (Rsp [2]) = (Wrd148.Obj);
  (Wrd166.Obj) = (Rsp [0]);
  (Wrd167.uLng) = (OBJECT_TYPE (Wrd166.Obj));
  if ((Wrd167.uLng) == 10)
    goto label_49;

DEFLABEL (label_48)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_10]), 3);

DEFLABEL (label_49)
  (Wrd163.pObj) = (OBJECT_ADDRESS (Wrd166.Obj));
  (Wrd164.Obj) = ((Wrd163.pObj) [0]);
  (Wrd165.Lng) = (FIXNUM_TO_LONG (Wrd164.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd165.Lng))))
    goto label_48;
  ((Wrd163.pObj) [2]) = (Wrd148.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_50)
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (Wrd156.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_21);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd179.Obj) = (Rsp [6]);
  (Wrd180.Obj) = (current_block [OBJECT_1_5]);
  (Wrd181.Obj) = (current_block [OBJECT_1_7]);
  (Wrd184.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd184.Obj);
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  (* (--Rsp)) = (Wrd179.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_10]), 3);

DEFLABEL (label_36)
  goto label_52;

DEFLABEL (label_55)
  (Wrd205.Obj) = (Rsp [4]);
  (Wrd206.Obj) = (Rsp [3]);
  (Wrd207.Obj) = (Rsp [0]);
  (Wrd210.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd210.Obj);
  (* (--Rsp)) = (Wrd207.Obj);
  (* (--Rsp)) = (Wrd206.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_9]), 3);

DEFLABEL (label_37)
  goto label_54;

DEFLABEL (label_57)
  (Wrd217.Obj) = (Rsp [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if (! ((Wrd218.uLng) == 6))
    goto label_62;
  Dbl213 = (FLONUM_TO_DOUBLE (Wrd217.Obj));
  (Wrd214.Obj) = (current_block [OBJECT_1_11]);
  Dbl215 = (FLONUM_TO_DOUBLE (Wrd214.Obj));
  Dbl216 = (Dbl213 + Dbl215);
  INLINE_DOUBLE_TO_FLONUM (Dbl216, (Wrd211.Obj));

DEFLABEL (label_61)
  (Wrd257.Obj) = (Rsp [4]);
  (Wrd258.uLng) = (OBJECT_TYPE (Wrd257.Obj));
  if (! ((Wrd258.uLng) == 6))
    goto label_60;
  (Wrd249.Obj) = (Rsp [3]);
  (Wrd250.uLng) = (OBJECT_TYPE (Wrd249.Obj));
  if (! ((Wrd250.uLng) == 26))
    goto label_60;
  (Wrd252.Lng) = (FIXNUM_TO_LONG (Wrd249.Obj));
  (Wrd254.pObj) = (OBJECT_ADDRESS (Wrd257.Obj));
  (Wrd255.Obj) = ((Wrd254.pObj) [0]);
  (Wrd256.Lng) = (FIXNUM_TO_LONG (Wrd255.Obj));
  if (! (((unsigned long) (Wrd252.Lng)) < ((unsigned long) (Wrd256.Lng))))
    goto label_60;
  (Wrd248.uLng) = (OBJECT_TYPE (Wrd211.Obj));
  if (! ((Wrd248.uLng) == 6))
    goto label_60;
  (Wrd242.uLng) = (OBJECT_DATUM (Wrd249.Obj));
  (Wrd245.pObj) = (& ((Wrd254.pObj) [1]));
  Dbl247 = (FLONUM_TO_DOUBLE (Wrd211.Obj));
  ((Wrd245.pDbl) [(Wrd242.Lng)]) = Dbl247;

DEFLABEL (label_59)
  (Wrd233.Obj) = (Rsp [6]);
  (Wrd234.uLng) = (OBJECT_TYPE (Wrd233.Obj));
  if (! ((Wrd234.uLng) == 10))
    goto label_58;
  (Wrd230.pObj) = (OBJECT_ADDRESS (Wrd233.Obj));
  (Wrd231.Obj) = ((Wrd230.pObj) [0]);
  (Wrd232.Lng) = (FIXNUM_TO_LONG (Wrd231.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd232.Lng))))
    goto label_58;
  (Wrd226.Obj) = (current_block [OBJECT_1_13]);
  ((Wrd230.pObj) [3]) = (Wrd226.Obj);
  goto label_52;

DEFLABEL (label_58)
  (Wrd235.Obj) = (Rsp [6]);
  (Wrd236.Obj) = (current_block [OBJECT_1_5]);
  (Wrd237.Obj) = (current_block [OBJECT_1_13]);
  (Wrd240.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd240.Obj);
  (* (--Rsp)) = (Wrd237.Obj);
  (* (--Rsp)) = (Wrd236.Obj);
  (* (--Rsp)) = (Wrd235.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_10]), 3);

DEFLABEL (label_39)
  goto label_52;

DEFLABEL (label_60)
  (Wrd259.Obj) = (Rsp [4]);
  (Wrd260.Obj) = (Rsp [3]);
  (Wrd264.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd264.Obj);
  (* (--Rsp)) = (Wrd211.Obj);
  (* (--Rsp)) = (Wrd260.Obj);
  (* (--Rsp)) = (Wrd259.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_9]), 3);

DEFLABEL (label_40)
  goto label_59;

DEFLABEL (label_62)
  (Wrd220.Obj) = (current_block [OBJECT_1_11]);
  (Wrd223.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd223.Obj);
  (* (--Rsp)) = (Wrd220.Obj);
  (* (--Rsp)) = (Wrd217.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_12]), 2);

DEFLABEL (label_38)
  (Wrd211.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_63)
  (Wrd268.Obj) = (current_block [OBJECT_1_7]);
  (Wrd271.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd271.Obj);
  (* (--Rsp)) = (Wrd268.Obj);
  (* (--Rsp)) = (Wrd265.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_8]), 2);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_57;

DEFLABEL (label_65)
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd121.Obj) = (Rsp [2]);
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 2);

DEFLABEL (label_34)
  (Wrd112.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd107.Obj) = (Rsp [4]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_33)
  (Wrd92.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_72)
  (Wrd74.Obj) = (Rsp [5]);
  (Wrd75.Obj) = (current_block [OBJECT_1_5]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_1_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_1_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd9.pObj));

DEFLABEL (label_28)
  (Wrd8.Obj) = Rvl;
  goto label_79;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_7);
  goto label_50;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 11
#define DEBUGGING_LABEL_2_2 10
#define OBJECT_2_0 9
#define EXECUTE_CACHE_2_6 7
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto int_random_element_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int_random_element_4)
DEFLABEL (int_random_element_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 14
#define DEBUGGING_LABEL_3_2 13
#define OBJECT_3_1 12
#define OBJECT_3_0 11
#define EXECUTE_CACHE_3_7 7
#define EXECUTE_CACHE_3_6 9
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_3_4);
      goto Z__random_integer_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__random_integer_5)
DEFLABEL (Z__random_integer_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

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
#define LABEL_4_12 17
#define LABEL_4_13 19
#define ENVIRONMENT_LABEL_4_3 32
#define DEBUGGING_LABEL_4_2 31
#define OBJECT_4_7 30
#define OBJECT_4_6 29
#define OBJECT_4_5 28
#define OBJECT_4_4 27
#define OBJECT_4_3 26
#define OBJECT_4_2 25
#define OBJECT_4_1 24
#define OBJECT_4_0 23
#define EXECUTE_CACHE_4_11 21
#define FREE_REFERENCES_LABEL_4_0 20
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  double Dbl16;
  double Dbl15;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  double Dbl30;
  machine_word Wrd29;
  double Dbl29;
  machine_word Wrd27;
  double Dbl27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  double Dbl19;
  machine_word Wrd18;
  double Dbl18;
  machine_word Wrd21;
  machine_word Wrd17;
  double Dbl13;
  machine_word Wrd13;
  machine_word Wrd5;
  double Dbl10;
  double Dbl6;
  machine_word Wrd6;
  machine_word Wrd12;
  double Dbl9;
  machine_word Wrd9;
  double Dbl8;
  machine_word Wrd8;
  double Dbl7;
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
      goto small_random_integer_15;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto loop_9;

    case 6:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_4_12);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_4_13);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (small_random_integer_23)
DEFLABEL (small_random_integer_15)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 6))
    goto label_30;
  (Wrd6.Obj) = (current_block [OBJECT_4_2]);
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd6.Obj));
  Dbl9 = (FLONUM_TO_DOUBLE (Rvl));
  Dbl10 = (Dbl7 / Dbl9);
  INLINE_DOUBLE_TO_FLONUM (Dbl10, (Wrd5.Obj));

DEFLABEL (label_29)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd21.uLng) == 6))
    goto label_28;
  Dbl18 = (FLONUM_TO_DOUBLE (Wrd5.Obj));
  Dbl19 = (DOUBLE_TRUNCATE (Dbl18));
  INLINE_DOUBLE_TO_FLONUM (Dbl19, (Wrd20.Obj));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_27)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 6))
    goto label_26;
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 6))
    goto label_26;
  Dbl27 = (FLONUM_TO_DOUBLE (Wrd34.Obj));
  Dbl29 = (FLONUM_TO_DOUBLE (Wrd32.Obj));
  Dbl30 = (Dbl27 * Dbl29);
  INLINE_DOUBLE_TO_FLONUM (Dbl30, (Wrd31.Obj));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_25)
  goto loop_9;

DEFLABEL (label_26)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd13.Obj) = (current_block [OBJECT_4_2]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 2);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_29;

DEFLABEL (loop_24)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_4_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (* (--Rsp)) = Rvl;
  (Wrd29.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd29.uLng) == 6))
    goto label_35;
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 6))
    goto label_35;
  Dbl6 = (FLONUM_TO_DOUBLE (Rvl));
  Dbl8 = (FLONUM_TO_DOUBLE (Wrd26.Obj));
  if (Dbl6 < Dbl8)
    goto label_32;

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_32)
  (Wrd11.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd19.uLng) == 6))
    goto label_34;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 6))
    goto label_34;
  Dbl13 = (FLONUM_TO_DOUBLE (Wrd11.Obj));
  Dbl15 = (FLONUM_TO_DOUBLE (Wrd17.Obj));
  Dbl16 = (Dbl13 / Dbl15);
  INLINE_DOUBLE_TO_FLONUM (Dbl16, (Wrd12.Obj));

DEFLABEL (label_33)
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [3]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 1);

DEFLABEL (label_34)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 2);

DEFLABEL (label_20)
  (Wrd12.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 2);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_8 7
#define LABEL_5_7 9
#define LABEL_5_11 11
#define LABEL_5_9 13
#define LABEL_5_12 15
#define LABEL_5_15 17
#define LABEL_5_13 19
#define TAG_5_14 8
#define LABEL_5_16 21
#define LABEL_5_18 23
#define ENVIRONMENT_LABEL_5_3 36
#define DEBUGGING_LABEL_5_2 35
#define OBJECT_5_5 34
#define OBJECT_5_4 33
#define OBJECT_5_3 32
#define OBJECT_5_2 31
#define OBJECT_5_1 30
#define OBJECT_5_0 29
#define EXECUTE_CACHE_5_17 25
#define EXECUTE_CACHE_5_10 27
#define FREE_REFERENCES_LABEL_5_0 24
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5_4);
      goto large_random_integer_22;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_29;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto loop_20;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_5_12);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_5_15);
      goto loop_7;

    case 8:
      current_block = (Rpc - LABEL_5_13);
      goto lambda_18;

    case 9:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_5_18);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (large_random_integer_28)
DEFLABEL (large_random_integer_22)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto loop_20;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_34;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_34;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (multiply_with_overflow ((Wrd20.Lng), (Wrd24.Lng), (& (Wrd18.Lng))))
    goto label_34;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_33)
  goto loop_7;

DEFLABEL (label_34)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (loop_30)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_5_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_13])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  (Rsp [0]) = (Wrd8.Obj);
  goto lambda_18;

DEFLABEL (label_35)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd17.Lng) + 1L);
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (Rsp [0]) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_5_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 2);

DEFLABEL (label_25)
  (Rsp [1]) = Rvl;
  goto loop_20;

DEFLABEL (loop_32)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_5_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_38;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_38;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd21.Lng) < (Wrd23.Lng))
    goto label_37;

DEFLABEL (label_36)
  Rsp = (& (Rsp [1]));
  goto loop_7;

DEFLABEL (label_37)
  (Wrd17.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_38)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_5]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_37;

DEFLABEL (lambda_31)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_5_13);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_11;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_8 9
#define LABEL_6_9 11
#define LABEL_6_11 13
#define LABEL_6_12 15
#define LABEL_6_10 17
#define ENVIRONMENT_LABEL_6_3 27
#define DEBUGGING_LABEL_6_2 26
#define OBJECT_6_4 25
#define OBJECT_6_3 24
#define OBJECT_6_2 23
#define OBJECT_6_1 22
#define OBJECT_6_0 21
#define EXECUTE_CACHE_6_7 19
#define FREE_REFERENCES_LABEL_6_0 18
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_6_4);
      goto int_large_random_element_11;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto loop_9;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_6_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_6_12);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (int_large_random_element_16)
DEFLABEL (int_large_random_element_11)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_9;

DEFLABEL (loop_17)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_6_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_18;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd14.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (current_block [OBJECT_6_2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 2);

DEFLABEL (label_13)
  (Wrd10.Obj) = Rvl;
  (Wrd13.Obj) = (* (Rsp++));
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 26))
    goto label_20;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_20;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd22.Lng) = ((Wrd23.Lng) + (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_20;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd19.Obj);
  goto loop_9;

DEFLABEL (label_20)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 2);

DEFLABEL (label_14)
  (Wrd19.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_7 5
#define LABEL_7_5 7
#define LABEL_7_8 9
#define LABEL_7_9 11
#define LABEL_7_14 13
#define LABEL_7_12 15
#define LABEL_7_10 17
#define ENVIRONMENT_LABEL_7_3 47
#define DEBUGGING_LABEL_7_2 46
#define OBJECT_7_12 45
#define OBJECT_7_11 44
#define OBJECT_7_10 43
#define OBJECT_7_9 42
#define OBJECT_7_8 41
#define OBJECT_7_7 40
#define OBJECT_7_6 39
#define OBJECT_7_5 38
#define OBJECT_7_4 37
#define OBJECT_7_3 36
#define OBJECT_7_2 35
#define OBJECT_7_1 34
#define OBJECT_7_0 33
#define EXECUTE_CACHE_7_18 19
#define EXECUTE_CACHE_7_17 21
#define EXECUTE_CACHE_7_16 23
#define EXECUTE_CACHE_7_15 25
#define EXECUTE_CACHE_7_13 27
#define EXECUTE_CACHE_7_11 29
#define EXECUTE_CACHE_7_6 31
#define FREE_REFERENCES_LABEL_7_0 18
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  double Dbl11;
  machine_word Wrd11;
  machine_word Wrd58;
  machine_word Wrd35;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd29;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd48;
  machine_word Wrd45;
  double Dbl34;
  machine_word Wrd33;
  double Dbl32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd75;
  machine_word Wrd12;
  double Dbl10;
  machine_word Wrd10;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd9;
  double Dbl8;
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
      current_block = (Rpc - LABEL_7_4);
      goto random_10;

    case 1:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_7_14);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (random_16)
DEFLABEL (random_10)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd67.Obj) = (current_block [OBJECT_7_1]);
  (Wrd70.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd70.Lng))))
    goto label_34;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd67.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_33;

DEFLABEL (label_32)
  (Wrd13.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_17;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_17)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_19;
  (Wrd15.Obj) = (current_block [OBJECT_7_5]);
  goto label_18;

DEFLABEL (label_19)
  (Wrd15.Obj) = (current_block [OBJECT_7_4]);

DEFLABEL (label_18)
DEFLABEL (label_31)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;

DEFLABEL (label_23)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_22;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if ((Wrd53.Lng) > 0L)
    goto label_21;

DEFLABEL (label_20)
  (Wrd35.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [2]) = (Wrd35.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (label_21)
  (Wrd58.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd58.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (label_22)
  (Wrd61.Obj) = (current_block [OBJECT_7_8]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_9]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_21;

DEFLABEL (label_24)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 6)
    goto label_26;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_11]);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

DEFLABEL (label_25)
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_7_10]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (label_26)
  if (! ((Wrd26.uLng) == 6))
    goto label_30;
  Dbl32 = (FLONUM_TO_DOUBLE (Wrd25.Obj));
  (Wrd33.Obj) = (current_block [OBJECT_7_6]);
  Dbl34 = (FLONUM_TO_DOUBLE (Wrd33.Obj));
  if (! (Dbl32 > Dbl34))
    goto label_20;

DEFLABEL (label_29)
  (Wrd37.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 6)
    goto label_28;

DEFLABEL (label_27)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_12]), 2);

DEFLABEL (label_28)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 6))
    goto label_27;
  Dbl8 = (FLONUM_TO_DOUBLE (Wrd15.Obj));
  Dbl10 = (FLONUM_TO_DOUBLE (Wrd13.Obj));
  Dbl11 = (Dbl8 * Dbl10);
  INLINE_DOUBLE_TO_FLONUM (Dbl11, Rvl);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd45.Obj) = (current_block [OBJECT_7_6]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_7]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_29;

DEFLABEL (label_33)
  Rsp = (& (Rsp [2]));
  goto label_23;

DEFLABEL (label_34)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_33;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_7 5
#define LABEL_8_8 7
#define LABEL_8_5 9
#define LABEL_8_10 11
#define LABEL_8_11 13
#define LABEL_8_6 15
#define ENVIRONMENT_LABEL_8_3 30
#define DEBUGGING_LABEL_8_2 29
#define OBJECT_8_6 28
#define OBJECT_8_5 27
#define OBJECT_8_4 26
#define OBJECT_8_3 25
#define OBJECT_8_2 24
#define OBJECT_8_1 23
#define OBJECT_8_0 22
#define EXECUTE_CACHE_8_9 17
#define FREE_REFERENCE_8_1 20
#define FREE_REFERENCE_8_0 21
#define FREE_REFERENCES_LABEL_8_0 16
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  double Dbl29;
  double Dbl28;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd10;
  double Dbl9;
  double Dbl6;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd30;
  double Dbl26;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  double Dbl8;
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
      current_block = (Rpc - LABEL_8_4);
      goto flo_random_unit_4;

    case 1:
      current_block = (Rpc - LABEL_8_7);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_8_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_8_11);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_random_unit_11)
DEFLABEL (flo_random_unit_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_21;
  Wrd14 = Wrd18;

DEFLABEL (label_20)
  Wrd13 = Wrd14;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_19;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd26.Lng) = ((Wrd27.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_19;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_6]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 6))
    goto label_17;
  Dbl6 = (FLONUM_TO_DOUBLE (Rvl));
  (Wrd7.Obj) = (current_block [OBJECT_8_3]);
  Dbl8 = (FLONUM_TO_DOUBLE (Wrd7.Obj));
  Dbl9 = (Dbl6 + Dbl8);
  INLINE_DOUBLE_TO_FLONUM (Dbl9, (Wrd10.Obj));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_15;
  Wrd18 = Wrd22;

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd18.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 6)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 2);

DEFLABEL (label_13)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd32.uLng) == 6))
    goto label_12;
  Dbl26 = (FLONUM_TO_DOUBLE (Wrd33.Obj));
  Dbl28 = (FLONUM_TO_DOUBLE (Wrd18.Obj));
  Dbl29 = (Dbl26 / Dbl28);
  INLINE_DOUBLE_TO_FLONUM (Dbl29, Rvl);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_11])), (Wrd19.pObj));

DEFLABEL (label_9)
  (Wrd18.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd13.Obj) = (current_block [OBJECT_8_3]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd21.Obj) = (current_block [OBJECT_8_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_7])), (Wrd15.pObj));

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_8 9
#define LABEL_9_9 11
#define LABEL_9_11 13
#define ENVIRONMENT_LABEL_9_3 25
#define DEBUGGING_LABEL_9_2 24
#define OBJECT_9_4 23
#define OBJECT_9_3 22
#define OBJECT_9_2 21
#define OBJECT_9_1 20
#define OBJECT_9_0 19
#define EXECUTE_CACHE_9_10 15
#define EXECUTE_CACHE_9_7 17
#define FREE_REFERENCES_LABEL_9_0 14
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_9_4);
      goto random_byte_vector_11;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto do_loop_8;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (random_byte_vector_15)
DEFLABEL (random_byte_vector_11)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_8;

DEFLABEL (do_loop_16)
DEFLABEL (do_loop_8)
  INTERRUPT_CHECK (26, LABEL_9_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_17;
  Rsp = (& (Rsp [1]));
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (Wrd5.Obj) = Rvl;
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 30))
    goto label_19;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_19;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_19;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 26))
    goto label_19;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd14.pChr) = (& ((Wrd21.pChr) [(Wrd11.Lng)]));
  ((Wrd14.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) ((unsigned long) Rvl));

DEFLABEL (label_18)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [0]) = (Wrd6.Obj);
  goto do_loop_8;

DEFLABEL (label_19)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 3);

DEFLABEL (label_13)
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define TAG_10_8 2
#define LABEL_10_9 9
#define ENVIRONMENT_LABEL_10_3 21
#define DEBUGGING_LABEL_10_2 20
#define OBJECT_10_2 19
#define OBJECT_10_1 18
#define OBJECT_10_0 17
#define EXECUTE_CACHE_10_11 11
#define EXECUTE_CACHE_10_10 13
#define EXECUTE_CACHE_10_6 15
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_10_4);
      goto random_source_make_integers_3;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (random_source_make_integers_7)
DEFLABEL (random_source_make_integers_3)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_10_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_11;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) > 0L)
    goto label_10;

DEFLABEL (label_9)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd11.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (label_10)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd16.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (label_11)
  (Wrd18.Obj) = (current_block [OBJECT_10_1]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_7 5
#define LABEL_11_8 7
#define LABEL_11_9 9
#define LABEL_11_5 11
#define LABEL_11_14 13
#define LABEL_11_19 15
#define LABEL_11_15 17
#define LABEL_11_16 19
#define LABEL_11_12 21
#define TAG_11_13 9
#define LABEL_11_20 23
#define TAG_11_21 10
#define LABEL_11_24 25
#define ENVIRONMENT_LABEL_11_3 51
#define DEBUGGING_LABEL_11_2 50
#define OBJECT_11_6 49
#define OBJECT_11_5 48
#define OBJECT_11_4 47
#define OBJECT_11_3 46
#define OBJECT_11_2 45
#define OBJECT_11_1 44
#define OBJECT_11_0 43
#define EXECUTE_CACHE_11_25 27
#define EXECUTE_CACHE_11_23 29
#define EXECUTE_CACHE_11_22 31
#define EXECUTE_CACHE_11_18 33
#define EXECUTE_CACHE_11_17 35
#define EXECUTE_CACHE_11_11 37
#define EXECUTE_CACHE_11_10 39
#define EXECUTE_CACHE_11_6 41
#define FREE_REFERENCES_LABEL_11_0 26
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_11_4);
      goto random_source_make_reals_16;

    case 1:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_11_19);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_11_16);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_11_12);
      goto lambda_21;

    case 10:
      current_block = (Rpc - LABEL_11_20);
      goto lambda_22;

    case 11:
      current_block = (Rpc - LABEL_11_24);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (random_source_make_reals_20)
DEFLABEL (random_source_make_reals_16)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_11_4]))
    goto label_29;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;

DEFLABEL (label_28)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_7);

DEFLABEL (label_27)
  (Wrd46.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_26)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 6))
    goto label_23;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_12])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd28 = Wrd27;
  (Wrd29.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  Rvl = (Wrd26.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_11_6]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_8)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (Wrd5.Obj) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_25;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd12.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_25;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_24)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_20])));
  Rhp += 3;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd21 = Wrd16;
  (Wrd22.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd21.pObj) [4]) = (Wrd18.Obj);
  Rvl = (Wrd15.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_29)
  (Wrd11.Obj) = (current_block [OBJECT_11_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_26;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_11_12);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_23]));

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_11_20);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_11_24);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_31)
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_30;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd13.Lng), (Wrd15.Lng), (& (Wrd11.Lng))))
    goto label_30;
  Rvl = (LONG_TO_FIXNUM (Wrd11.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_5 3
#define LABEL_12_4 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define LABEL_12_9 11
#define LABEL_12_13 13
#define LABEL_12_15 15
#define TAG_12_16 6
#define LABEL_12_18 17
#define LABEL_12_19 19
#define LABEL_12_21 21
#define LABEL_12_22 23
#define LABEL_12_23 25
#define LABEL_12_24 27
#define LABEL_12_25 29
#define LABEL_12_26 31
#define LABEL_12_27 33
#define LABEL_12_28 35
#define LABEL_12_29 37
#define ENVIRONMENT_LABEL_12_3 63
#define DEBUGGING_LABEL_12_2 62
#define OBJECT_12_8 61
#define OBJECT_12_7 60
#define OBJECT_12_6 59
#define OBJECT_12_5 58
#define OBJECT_12_4 57
#define OBJECT_12_3 56
#define OBJECT_12_2 55
#define OBJECT_12_1 54
#define OBJECT_12_0 53
#define EXECUTE_CACHE_12_20 39
#define EXECUTE_CACHE_12_17 41
#define EXECUTE_CACHE_12_14 43
#define EXECUTE_CACHE_12_12 45
#define EXECUTE_CACHE_12_11 47
#define EXECUTE_CACHE_12_10 49
#define EXECUTE_CACHE_12_8 51
#define FREE_REFERENCES_LABEL_12_0 38
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd45;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd40;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_12_4);
      goto make_random_state_23;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_12_13);
      goto lambda_22;

    case 6:
      current_block = (Rpc - LABEL_12_15);
      goto lambda_36;

    case 7:
      current_block = (Rpc - LABEL_12_18);
      goto outer_19;

    case 8:
      current_block = (Rpc - LABEL_12_19);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_12_21);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_12_22);
      goto inner_17;

    case 11:
      current_block = (Rpc - LABEL_12_23);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_12_24);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_12_25);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_12_26);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_12_27);
      goto label_30;

    case 16:
      current_block = (Rpc - LABEL_12_28);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_12_29);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_random_state_34)
DEFLABEL (make_random_state_23)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == (current_block [OBJECT_12_0])))
    goto label_41;

DEFLABEL (label_40)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_12_6]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd7.Obj) = (current_block [OBJECT_12_6]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (label_39)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (label_41)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_12_1]);
  (Wrd40.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd40.Lng))))
    goto label_49;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd37.Obj));
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd12.Obj) == (Wrd14.Obj))
    goto label_48;

DEFLABEL (label_47)
  (Wrd15.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd25.Lng)))
    goto label_42;
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_42)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_44;
  (Wrd17.Obj) = (current_block [OBJECT_12_4]);
  goto label_43;

DEFLABEL (label_44)
  (Wrd17.Obj) = (current_block [OBJECT_12_0]);

DEFLABEL (label_43)
DEFLABEL (label_46)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd17.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_40;

DEFLABEL (label_45)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_12_5]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (label_48)
  Rsp = (& (Rsp [2]));
  goto label_40;

DEFLABEL (label_49)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_48;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_40;

DEFLABEL (lambda_35)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_12_13);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_15])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_12_15);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  goto outer_19;

DEFLABEL (outer_37)
DEFLABEL (outer_19)
  INTERRUPT_CHECK (26, LABEL_12_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_19);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 2))
    goto label_51;
  (Wrd8.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_50)
  (Wrd14.Obj) = (current_block [OBJECT_12_8]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto inner_17;

DEFLABEL (label_51)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_7]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (inner_38)
DEFLABEL (inner_17)
  INTERRUPT_CHECK (26, LABEL_12_22);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_65;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_65;
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd52.Lng) < (Wrd54.Lng))
    goto label_56;

DEFLABEL (label_55)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_54;
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_54;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if ((Wrd29.Lng) < (Wrd31.Lng))
    goto label_53;

DEFLABEL (label_52)
  Rsp = (& (Rsp [2]));
  goto outer_19;

DEFLABEL (label_53)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_24]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_53;

DEFLABEL (label_56)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_64;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (multiply_with_overflow ((Wrd42.Lng), 256, (& (Wrd40.Lng))))
    goto label_64;
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));

DEFLABEL (label_63)
  (Rsp [0]) = (Wrd37.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_26]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [2]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_12_26);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 2))
    goto label_62;
  (Wrd8.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_61)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_60;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (multiply_with_overflow ((Wrd24.Lng), 256, (& (Wrd22.Lng))))
    goto label_60;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));

DEFLABEL (label_59)
  (Wrd27.Obj) = (* (Rsp++));
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_58;
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_58;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd36.Lng) = ((Wrd37.Lng) + (Wrd38.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd36.Lng)))
    goto label_58;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));

DEFLABEL (label_57)
  (Rsp [1]) = (Wrd33.Obj);
  goto inner_17;

DEFLABEL (label_58)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_29]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_32)
  (Wrd33.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.Obj) = (current_block [OBJECT_12_8]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_28]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_31)
  (Wrd19.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_27]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_7]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_12_8]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_25]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_29)
  (Wrd37.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_56;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_8 9
#define LABEL_13_9 11
#define LABEL_13_10 13
#define ENVIRONMENT_LABEL_13_3 25
#define DEBUGGING_LABEL_13_2 24
#define OBJECT_13_4 23
#define OBJECT_13_3 22
#define OBJECT_13_2 21
#define OBJECT_13_1 20
#define OBJECT_13_0 19
#define EXECUTE_CACHE_13_11 15
#define EXECUTE_CACHE_13_7 17
#define FREE_REFERENCES_LABEL_13_0 14
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_13_4);
      goto simple_random_state_5;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simple_random_state_10)
DEFLABEL (simple_random_state_5)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 0);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_14;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd15.Lng), 100000, (& (Wrd12.Lng))))
    goto label_14;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_13)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_12;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_12;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) + (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_12;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd6.Obj) = (current_block [OBJECT_13_1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 13
#define DEBUGGING_LABEL_14_2 12
#define OBJECT_14_0 11
#define EXECUTE_CACHE_14_7 7
#define EXECUTE_CACHE_14_6 9
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto make_random_source_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_random_source_4)
DEFLABEL (make_random_source_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define EXECUTE_CACHE_15_7 7
#define EXECUTE_CACHE_15_6 9
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_15_4);
      goto random_source_state_setB_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (random_source_state_setB_4)
DEFLABEL (random_source_state_setB_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 13
#define DEBUGGING_LABEL_16_2 12
#define OBJECT_16_0 11
#define EXECUTE_CACHE_16_7 7
#define EXECUTE_CACHE_16_6 9
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto random_source_randomizeB_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (random_source_randomizeB_4)
DEFLABEL (random_source_randomizeB_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 10
#define DEBUGGING_LABEL_17_2 9
#define OBJECT_17_1 8
#define OBJECT_17_0 7
#define EXECUTE_CACHE_17_5 5
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto random_source_pseudo_randomizeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (random_source_pseudo_randomizeB_3)
DEFLABEL (random_source_pseudo_randomizeB_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_1]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define LABEL_18_8 11
#define LABEL_18_10 13
#define LABEL_18_9 15
#define LABEL_18_11 17
#define LABEL_18_12 19
#define LABEL_18_13 21
#define LABEL_18_14 23
#define LABEL_18_15 25
#define LABEL_18_16 27
#define ENVIRONMENT_LABEL_18_3 41
#define DEBUGGING_LABEL_18_2 40
#define OBJECT_18_11 39
#define OBJECT_18_10 38
#define OBJECT_18_9 37
#define OBJECT_18_8 36
#define OBJECT_18_7 35
#define OBJECT_18_6 34
#define OBJECT_18_5 33
#define OBJECT_18_4 32
#define OBJECT_18_3 31
#define OBJECT_18_2 30
#define OBJECT_18_1 29
#define OBJECT_18_0 28
#define FREE_REFERENCES_LABEL_18_0 28
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd44;
  machine_word Wrd41;
  double Dbl32;
  machine_word Wrd31;
  double Dbl30;
  machine_word Wrd39;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd87;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd96;
  machine_word Wrd93;
  double Dbl74;
  machine_word Wrd73;
  double Dbl72;
  machine_word Wrd91;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd49;
  double Dbl56;
  machine_word Wrd51;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd47;
  machine_word Wrd6;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd16;
  double Dbl16;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  double Dbl14;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_18_4);
      goto initial_random_state_32;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto fill_29;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto do_loop_10;

    case 4:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_18_10);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_18_11);
      goto loop_26;

    case 8:
      current_block = (Rpc - LABEL_18_12);
      goto label_37;

    case 9:
      current_block = (Rpc - LABEL_18_13);
      goto label_38;

    case 10:
      current_block = (Rpc - LABEL_18_14);
      goto loop_18;

    case 11:
      current_block = (Rpc - LABEL_18_15);
      goto label_35;

    case 12:
      current_block = (Rpc - LABEL_18_16);
      goto label_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initial_random_state_40)
DEFLABEL (initial_random_state_32)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  goto fill_29;

DEFLABEL (fill_41)
DEFLABEL (fill_29)
  INTERRUPT_CHECK (26, LABEL_18_6);
  (Wrd5.Obj) = (current_block [OBJECT_18_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_10;

DEFLABEL (do_loop_42)
DEFLABEL (do_loop_10)
  INTERRUPT_CHECK (26, LABEL_18_7);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_18_0])))
    goto label_45;
  Rsp = (& (Rsp [1]));
  (Wrd17.Obj) = (current_block [OBJECT_18_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto loop_18;

DEFLABEL (label_45)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_18_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_18_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_6]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (Wrd5.Obj) = Rvl;
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 6))
    goto label_47;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_47;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_47;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 6))
    goto label_47;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd14.pObj) = (& ((Wrd23.pObj) [1]));
  Dbl16 = (FLONUM_TO_DOUBLE (Rvl));
  ((Wrd14.pDbl) [(Wrd11.Lng)]) = Dbl16;

DEFLABEL (label_46)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [0]) = (Wrd6.Obj);
  goto do_loop_10;

DEFLABEL (label_47)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_5]), 3);

DEFLABEL (label_34)
  goto label_46;

DEFLABEL (loop_44)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_18_14);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_18_0]))
    goto label_53;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 6))
    goto label_52;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_52;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_52;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  Dbl14 = (((double *) (& ((Wrd20.pObj) [1]))) [(Wrd9.Lng)]);
  INLINE_DOUBLE_TO_FLONUM (Dbl14, (Wrd7.Obj));

DEFLABEL (label_51)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd39.uLng) == 6))
    goto label_50;
  Dbl30 = (FLONUM_TO_DOUBLE (Wrd7.Obj));
  (Wrd31.Obj) = (current_block [OBJECT_18_11]);
  Dbl32 = (FLONUM_TO_DOUBLE (Wrd31.Obj));
  if (Dbl30 == Dbl32)
    goto label_49;

DEFLABEL (label_48)
  Rsp = (& (Rsp [1]));
  (Wrd34.Obj) = (current_block [OBJECT_18_2]);
  (* (--Rsp)) = (Wrd34.Obj);
  goto loop_26;

DEFLABEL (label_49)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd38.Lng) = ((Wrd37.Lng) + 1L);
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (Rsp [0]) = (Wrd35.Obj);
  goto loop_18;

DEFLABEL (label_50)
  (Wrd41.Obj) = (current_block [OBJECT_18_11]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_16]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_9]), 2);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_49;

DEFLABEL (label_52)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_7]), 2);

DEFLABEL (label_35)
  (Wrd7.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_53)
  Rsp = (& (Rsp [1]));
  goto fill_29;

DEFLABEL (loop_43)
DEFLABEL (loop_26)
  INTERRUPT_CHECK (26, LABEL_18_11);
  (Wrd47.Obj) = (Rsp [0]);
  if ((Wrd47.Obj) == (current_block [OBJECT_18_0]))
    goto label_53;
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 6))
    goto label_58;
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_58;
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) (Wrd60.Lng)) < ((unsigned long) (Wrd64.Lng))))
    goto label_58;
  (Wrd51.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  Dbl56 = (((double *) (& ((Wrd62.pObj) [1]))) [(Wrd51.Lng)]);
  INLINE_DOUBLE_TO_FLONUM (Dbl56, (Wrd49.Obj));

DEFLABEL (label_57)
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd91.uLng) == 6))
    goto label_56;
  Dbl72 = (FLONUM_TO_DOUBLE (Wrd49.Obj));
  (Wrd73.Obj) = (current_block [OBJECT_18_8]);
  Dbl74 = (FLONUM_TO_DOUBLE (Wrd73.Obj));
  if (Dbl72 == Dbl74)
    goto label_55;

DEFLABEL (label_54)
  Rsp = (& (Rsp [1]));
  (Wrd83.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd84.Obj) = (current_block [OBJECT_18_10]);
  (Wrd85.Obj) = (current_block [OBJECT_18_2]);
  (Wrd86.Obj) = (current_block [OBJECT_18_11]);
  (* (Rhp++)) = (Wrd83.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd86.Obj);
  (Wrd80.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd78.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd78.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  (Wrd90.Lng) = ((Wrd89.Lng) + 1L);
  (Wrd87.Obj) = (LONG_TO_FIXNUM (Wrd90.Lng));
  (Rsp [0]) = (Wrd87.Obj);
  goto loop_26;

DEFLABEL (label_56)
  (Wrd93.Obj) = (current_block [OBJECT_18_8]);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_9]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_55;

DEFLABEL (label_58)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_7]), 2);

DEFLABEL (label_37)
  (Wrd49.Obj) = Rvl;
  goto label_57;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_7 9
#define TAG_19_8 3
#define LABEL_19_10 11
#define LABEL_19_9 13
#define LABEL_19_11 15
#define LABEL_19_12 17
#define ENVIRONMENT_LABEL_19_3 28
#define DEBUGGING_LABEL_19_2 27
#define OBJECT_19_8 26
#define OBJECT_19_7 25
#define OBJECT_19_6 24
#define OBJECT_19_5 23
#define OBJECT_19_4 22
#define OBJECT_19_3 21
#define OBJECT_19_2 20
#define OBJECT_19_1 19
#define OBJECT_19_0 18
#define FREE_REFERENCES_LABEL_19_0 18
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_19_4);
      goto congruential_rng_12;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto lambda_20;

    case 4:
      current_block = (Rpc - LABEL_19_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_19_11);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_19_12);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (congruential_rng_19)
DEFLABEL (congruential_rng_12)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_22;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_22;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd23.pObj) = (& (Rhp [-1]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd23.pObj)));
  (Rsp [0]) = (Wrd24.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_7])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  ((Wrd19.pObj) [2]) = (Wrd24.Obj);
  Rvl = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd7.Obj) = (current_block [OBJECT_19_2]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 2);

DEFLABEL (label_14)
  (Wrd11.Obj) = Rvl;
  goto label_21;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_19_7);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_28;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (multiply_with_overflow ((Wrd32.Lng), 16807, (& (Wrd24.Lng))))
    goto label_28;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_27)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  ((Wrd8.pObj) [0]) = Rvl;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 26))
    goto label_26;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd18.Lng) = ((Wrd20.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_26;
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));

DEFLABEL (label_25)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_24;
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_24;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (multiply_with_overflow ((Wrd33.Lng), (Wrd35.Lng), (& (Wrd32.Lng))))
    goto label_24;
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [2]) = (Wrd36.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_8]), 2);

DEFLABEL (label_24)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_6]), 2);

DEFLABEL (label_17)
  (Wrd28.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (current_block [OBJECT_19_2]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_7]), 2);

DEFLABEL (label_16)
  (Wrd15.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd9.Obj) = (current_block [OBJECT_19_5]);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd14.pObj) [0]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_6]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_7 5
#define LABEL_20_5 7
#define LABEL_20_9 9
#define LABEL_20_11 11
#define LABEL_20_12 13
#define LABEL_20_13 15
#define LABEL_20_15 17
#define LABEL_20_14 19
#define LABEL_20_17 21
#define LABEL_20_18 23
#define LABEL_20_19 25
#define LABEL_20_21 27
#define LABEL_20_20 29
#define LABEL_20_22 31
#define ENVIRONMENT_LABEL_20_3 54
#define DEBUGGING_LABEL_20_2 53
#define OBJECT_20_11 52
#define OBJECT_20_10 51
#define OBJECT_20_9 50
#define OBJECT_20_8 49
#define OBJECT_20_7 48
#define OBJECT_20_6 47
#define OBJECT_20_5 46
#define OBJECT_20_4 45
#define OBJECT_20_3 44
#define OBJECT_20_2 43
#define OBJECT_20_1 42
#define OBJECT_20_0 41
#define EXECUTE_CACHE_20_16 33
#define EXECUTE_CACHE_20_10 35
#define EXECUTE_CACHE_20_8 37
#define EXECUTE_CACHE_20_6 39
#define FREE_REFERENCES_LABEL_20_0 32
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd29;
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
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd58;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd10;
  machine_word Wrd9;
  double Dbl16;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_20_4);
      goto export_random_state_22;

    case 1:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_20_11);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_20_12);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_20_13);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_20_15);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_20_14);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_20_17);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_20_18);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_20_19);
      goto do_loop_18;

    case 12:
      current_block = (Rpc - LABEL_20_21);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_20_20);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_20_22);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (export_random_state_33)
DEFLABEL (export_random_state_22)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;

DEFLABEL (label_47)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (* (--Rsp)) = Rvl;
  (Wrd66.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd66.uLng) == 10))
    goto label_46;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd64.Lng))))
    goto label_46;
  (Wrd58.Obj) = (current_block [OBJECT_20_3]);
  ((Wrd62.pObj) [1]) = (Wrd58.Obj);

DEFLABEL (label_45)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_44;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_44;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_43)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_42;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd47.Lng))))
    goto label_42;
  ((Wrd45.pObj) [2]) = (Wrd5.Obj);

DEFLABEL (label_41)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_40;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_40;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_20_14);
  (Wrd5.Obj) = Rvl;
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_38;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_38;
  ((Wrd29.pObj) [3]) = Rvl;

DEFLABEL (label_37)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_36;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd14.Lng))))
    goto label_36;
  (Wrd8.Obj) = ((Wrd12.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_35)
  (Wrd22.Obj) = (current_block [OBJECT_20_9]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd23.Obj);
  goto do_loop_18;

DEFLABEL (label_36)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_20_9]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_18]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_7]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_20_8]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 3);

DEFLABEL (label_29)
  goto label_37;

DEFLABEL (label_40)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_20_8]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_7]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.Obj) = (current_block [OBJECT_20_6]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 3);

DEFLABEL (label_26)
  goto label_41;

DEFLABEL (label_44)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_20_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_7]), 2);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.Obj) = (current_block [OBJECT_20_4]);
  (Wrd69.Obj) = (current_block [OBJECT_20_3]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 3);

DEFLABEL (label_27)
  goto label_45;

DEFLABEL (label_48)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_7);
  goto label_47;

DEFLABEL (do_loop_34)
DEFLABEL (do_loop_18)
  INTERRUPT_CHECK (26, LABEL_20_19);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_20_10])))
    goto label_49;
  Rsp = (& (Rsp [3]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 6))
    goto label_53;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_53;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_53;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  Dbl16 = (((double *) (& ((Wrd23.pObj) [1]))) [(Wrd11.Lng)]);
  INLINE_DOUBLE_TO_FLONUM (Dbl16, (Wrd17.Obj));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_52)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_20_20);
  (Wrd5.Obj) = Rvl;
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_51;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_51;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_51;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd18.pObj) = (& ((Wrd24.pObj) [(Wrd15.Lng)]));
  ((Wrd18.pObj) [1]) = Rvl;

DEFLABEL (label_50)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd12.Lng) + 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (Rsp [1]) = (Wrd10.Obj);
  goto do_loop_18;

DEFLABEL (label_51)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_22]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 3);

DEFLABEL (label_31)
  goto label_50;

DEFLABEL (label_53)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_21]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_11]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_52;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_5 3
#define LABEL_21_4 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define LABEL_21_9 11
#define LABEL_21_11 13
#define LABEL_21_8 15
#define LABEL_21_12 17
#define LABEL_21_13 19
#define LABEL_21_14 21
#define LABEL_21_18 23
#define LABEL_21_21 25
#define LABEL_21_17 27
#define LABEL_21_22 29
#define LABEL_21_19 31
#define LABEL_21_23 33
#define LABEL_21_15 35
#define ENVIRONMENT_LABEL_21_3 59
#define DEBUGGING_LABEL_21_2 58
#define OBJECT_21_14 57
#define OBJECT_21_13 56
#define OBJECT_21_12 55
#define OBJECT_21_11 54
#define OBJECT_21_10 53
#define OBJECT_21_9 52
#define OBJECT_21_8 51
#define OBJECT_21_7 50
#define OBJECT_21_6 49
#define OBJECT_21_5 48
#define OBJECT_21_4 47
#define OBJECT_21_3 46
#define OBJECT_21_2 45
#define OBJECT_21_1 44
#define OBJECT_21_0 43
#define EXECUTE_CACHE_21_20 37
#define EXECUTE_CACHE_21_16 39
#define EXECUTE_CACHE_21_10 41
#define FREE_REFERENCES_LABEL_21_0 36
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd26;
  double Dbl22;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_21_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_21_4);
      goto import_random_state_32;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_34;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_35;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto lambda_0;

    case 5:
      current_block = (Rpc - LABEL_21_11);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_21_12);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_21_13);
      goto label_37;

    case 9:
      current_block = (Rpc - LABEL_21_14);
      goto do_loop_27;

    case 10:
      current_block = (Rpc - LABEL_21_18);
      goto label_38;

    case 11:
      current_block = (Rpc - LABEL_21_21);
      goto continuation_23;

    case 12:
      current_block = (Rpc - LABEL_21_17);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_21_22);
      goto continuation_22;

    case 14:
      current_block = (Rpc - LABEL_21_19);
      goto continuation_20;

    case 15:
      current_block = (Rpc - LABEL_21_23);
      goto label_39;

    case 16:
      current_block = (Rpc - LABEL_21_15);
      goto continuation_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (import_random_state_41)
DEFLABEL (import_random_state_32)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_53;

DEFLABEL (label_52)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.pObj) = (& (Rsp [1]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_0;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_5);

DEFLABEL (label_51)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_21_5]);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_6]), 1);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_50;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_50;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_49)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_48;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_48;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_47)
  (Wrd37.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd37.Obj))
    goto label_46;

DEFLABEL (label_45)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.pObj) = (& (Rsp [4]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  goto lambda_0;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_21_11);

DEFLABEL (label_44)
  (Wrd53.Obj) = (current_block [OBJECT_21_2]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_21_11]);
  (* (--Rsp)) = (Wrd54.Obj);
  goto do_loop_27;

DEFLABEL (label_46)
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! ((Wrd45.Lng) < 43L))
    goto label_45;
  (Wrd48.Obj) = (Rsp [1]);
  if (! (INDEX_FIXNUM_P (Wrd48.Obj)))
    goto label_45;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if ((Wrd50.Lng) < 2L)
    goto label_44;
  goto label_45;

DEFLABEL (label_48)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_21_10]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_21_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_53)
  if (! ((Wrd6.uLng) == 10))
    goto label_57;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd17.uLng)));

DEFLABEL (label_56)
  if (! ((Wrd13.Obj) == (current_block [OBJECT_21_1])))
    goto label_52;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_55;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd33.Lng))))
    goto label_55;
  (Wrd25.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_54)
  if ((Wrd25.Obj) == (current_block [OBJECT_21_4]))
    goto label_51;
  goto label_52;

DEFLABEL (label_55)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (current_block [OBJECT_21_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 2);

DEFLABEL (label_35)
  (Wrd25.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_34)
  (Wrd13.Obj) = Rvl;
  goto label_56;

DEFLABEL (lambda_42)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_21_9);
  (Wrd5.Obj) = (current_block [OBJECT_21_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21_8]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (do_loop_43)
DEFLABEL (do_loop_27)
  INTERRUPT_CHECK (26, LABEL_21_14);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_21_5])))
    goto label_58;
  Rsp = (& (Rsp [2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_16]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_21_15);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd14.Obj) = (current_block [OBJECT_21_14]);
  (Wrd15.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [6]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_66;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_66;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_66;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_65)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_19]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_20]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_21_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_64;

DEFLABEL (label_63)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_22]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.pObj) = (& (Rsp [8]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  goto lambda_0;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_21_22);

DEFLABEL (label_62)
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_21]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_16]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_21_21);
  (Rsp [2]) = Rvl;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 6)
    goto label_60;

DEFLABEL (label_59)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_12]), 3);

DEFLABEL (label_60)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_59;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) (Wrd28.Lng)) < ((unsigned long) (Wrd32.Lng))))
    goto label_59;
  (Wrd24.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd24.uLng) == 6))
    goto label_59;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd19.pObj) = (& ((Wrd30.pObj) [1]));
  Dbl22 = (FLONUM_TO_DOUBLE (Rvl));
  ((Wrd19.pDbl) [(Wrd16.Lng)]) = Dbl22;
  Rsp = (& (Rsp [4]));

DEFLABEL (label_61)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [1]) = (Wrd9.Obj);
  goto do_loop_27;

DEFLABEL (label_64)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_21_13]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_62;

DEFLABEL (label_66)
  (Wrd26.Obj) = (Rsp [6]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_18]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_21_17);
  goto label_61;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
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
random_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto Z__make_random_state_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__make_random_state_3)
DEFLABEL (Z__make_random_state_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (current_block [OBJECT_22_0]);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define ENVIRONMENT_LABEL_23_3 15
#define DEBUGGING_LABEL_23_2 14
#define OBJECT_23_5 13
#define OBJECT_23_4 12
#define OBJECT_23_3 11
#define OBJECT_23_2 10
#define OBJECT_23_1 9
#define OBJECT_23_0 8
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd19;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_23_4);
      goto random_stateP_4;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (random_stateP_9)
DEFLABEL (random_stateP_4)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_12;

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  if (! ((Wrd6.uLng) == 10))
    goto label_16;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_15)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_23_1])))
    goto label_11;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_14;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_14;
  (Wrd21.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_13)
  if (! ((Wrd21.Obj) == (current_block [OBJECT_23_4])))
    goto label_11;
  Rvl = (current_block [OBJECT_23_5]);
  goto label_10;

DEFLABEL (label_14)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_23_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 2);

DEFLABEL (label_7)
  (Wrd21.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 7
#define DEBUGGING_LABEL_24_2 6
#define OBJECT_24_1 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto random_state_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (random_state_index_3)
DEFLABEL (random_state_index_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

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

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 8
#define DEBUGGING_LABEL_25_2 7
#define OBJECT_25_2 6
#define OBJECT_25_1 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto set_random_state_indexB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_random_state_indexB_3)
DEFLABEL (set_random_state_indexB_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_25_1]);
  Rsp = (& (Rsp [3]));
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
random_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto random_state_borrow_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (random_state_borrow_3)
DEFLABEL (random_state_borrow_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
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
#define ENVIRONMENT_LABEL_27_3 8
#define DEBUGGING_LABEL_27_2 7
#define OBJECT_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto set_random_state_borrowB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_random_state_borrowB_3)
DEFLABEL (set_random_state_borrowB_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_27_1]);
  Rsp = (& (Rsp [3]));
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
random_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto random_state_vector_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (random_state_vector_3)
DEFLABEL (random_state_vector_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

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

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define LABEL_29_6 9
#define LABEL_29_9 11
#define ENVIRONMENT_LABEL_29_3 21
#define DEBUGGING_LABEL_29_2 20
#define OBJECT_29_4 19
#define OBJECT_29_3 18
#define OBJECT_29_2 17
#define OBJECT_29_1 16
#define OBJECT_29_0 15
#define EXECUTE_CACHE_29_8 13
#define FREE_REFERENCES_LABEL_29_0 12
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_29_4);
      goto copy_random_state_4;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_29_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_random_state_10)
DEFLABEL (copy_random_state_4)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_14;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_14;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_11)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd22.Obj) = (* (Rsp++));
  (Wrd29.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd30.Obj) = (current_block [OBJECT_29_4]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd25.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd25.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_29_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_29_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_29_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_7 9
#define LABEL_30_8 11
#define LABEL_30_9 13
#define ENVIRONMENT_LABEL_30_3 20
#define DEBUGGING_LABEL_30_2 19
#define OBJECT_30_4 18
#define OBJECT_30_3 17
#define OBJECT_30_2 16
#define OBJECT_30_1 15
#define OBJECT_30_0 14
#define FREE_REFERENCES_LABEL_30_0 14
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd52;
  double Dbl40;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd15;
  double Dbl14;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto flo_vector_copy_12;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto do_loop_8;

    case 4:
      current_block = (Rpc - LABEL_30_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_30_9);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flo_vector_copy_18)
DEFLABEL (flo_vector_copy_12)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 6))
    goto label_21;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd14.Lng) = (FIXNUM_QUOTIENT ((Wrd11.Lng), ((ADDRESS_UNITS_PER_FLOAT + (ADDRESS_UNITS_PER_OBJECT - 1)) / ADDRESS_UNITS_PER_OBJECT)));
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_20)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_8;

DEFLABEL (label_21)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (do_loop_19)
DEFLABEL (do_loop_8)
  INTERRUPT_CHECK (26, LABEL_30_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_22;
  Rsp = (& (Rsp [1]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 6))
    goto label_26;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_26;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_26;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  Dbl14 = (((double *) (& ((Wrd20.pObj) [1]))) [(Wrd9.Lng)]);
  INLINE_DOUBLE_TO_FLONUM (Dbl14, (Wrd7.Obj));

DEFLABEL (label_25)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 6))
    goto label_24;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_24;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) (Wrd45.Lng)) < ((unsigned long) (Wrd49.Lng))))
    goto label_24;
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd41.uLng) == 6))
    goto label_24;
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd38.pObj) = (& ((Wrd47.pObj) [1]));
  Dbl40 = (FLONUM_TO_DOUBLE (Wrd7.Obj));
  ((Wrd38.pDbl) [(Wrd35.Lng)]) = Dbl40;

DEFLABEL (label_23)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd32.Lng) + 1L);
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));
  (Rsp [0]) = (Wrd30.Obj);
  goto do_loop_8;

DEFLABEL (label_24)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 3);

DEFLABEL (label_16)
  goto label_23;

DEFLABEL (label_26)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 2);

DEFLABEL (label_15)
  (Wrd7.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define TAG_31_6 1
#define LABEL_31_8 7
#define LABEL_31_9 9
#define LABEL_31_10 11
#define LABEL_31_11 13
#define LABEL_31_12 15
#define LABEL_31_13 17
#define LABEL_31_14 19
#define LABEL_31_15 21
#define LABEL_31_16 23
#define ENVIRONMENT_LABEL_31_3 38
#define DEBUGGING_LABEL_31_2 37
#define OBJECT_31_9 36
#define OBJECT_31_8 35
#define OBJECT_31_7 34
#define OBJECT_31_6 33
#define OBJECT_31_5 32
#define OBJECT_31_4 31
#define OBJECT_31_3 30
#define OBJECT_31_2 29
#define OBJECT_31_1 28
#define OBJECT_31_0 27
#define EXECUTE_CACHE_31_7 25
#define FREE_REFERENCES_LABEL_31_0 24
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd53;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd26;
  double Dbl14;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd77;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd57;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd125;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd29;
  machine_word Wrd41;
  double Dbl40;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd149;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_31_4);
      goto copy_random_stateB_15;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto lambda_27;

    case 2:
      current_block = (Rpc - LABEL_31_8);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_31_9);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_31_10);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_31_11);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_31_12);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_31_13);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_31_14);
      goto do_loop_11;

    case 9:
      current_block = (Rpc - LABEL_31_15);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_31_16);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_random_stateB_26)
DEFLABEL (copy_random_stateB_15)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_31_5);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_40;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_40;
  (Wrd5.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_39)
  (Wrd138.Obj) = (Rsp [0]);
  (Wrd139.pObj) = (OBJECT_ADDRESS (Wrd138.Obj));
  (Wrd140.Obj) = ((Wrd139.pObj) [2]);
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd140.Obj));
  if (! ((Wrd141.uLng) == 10))
    goto label_38;
  (Wrd135.pObj) = (OBJECT_ADDRESS (Wrd140.Obj));
  (Wrd136.Obj) = ((Wrd135.pObj) [0]);
  (Wrd137.Lng) = (FIXNUM_TO_LONG (Wrd136.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd137.Lng))))
    goto label_38;
  ((Wrd135.pObj) [2]) = (Wrd5.Obj);

DEFLABEL (label_37)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [3]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_36;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd41.Lng))))
    goto label_36;
  (Wrd29.Obj) = ((Wrd39.pObj) [3]);

DEFLABEL (label_35)
  (Wrd114.Obj) = (Rsp [0]);
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [2]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 10))
    goto label_34;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd112.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd113.Lng))))
    goto label_34;
  ((Wrd111.pObj) [3]) = (Wrd29.Obj);

DEFLABEL (label_33)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [3]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 10))
    goto label_32;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd65.Lng))))
    goto label_32;
  (Wrd57.Obj) = ((Wrd63.pObj) [4]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_31)
  (Wrd90.Obj) = (Rsp [1]);
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [2]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 10))
    goto label_30;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd89.Lng))))
    goto label_30;
  (Wrd77.Obj) = ((Wrd87.pObj) [4]);

DEFLABEL (label_29)
  (Rsp [1]) = (Wrd77.Obj);
  (Wrd101.Obj) = (current_block [OBJECT_31_5]);
  (* (--Rsp)) = (Wrd101.Obj);
  goto do_loop_11;

DEFLABEL (label_30)
  (Wrd95.Obj) = (Rsp [1]);
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd94.Obj) = ((Wrd96.pObj) [2]);
  (Wrd97.Obj) = (current_block [OBJECT_31_4]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_20)
  (Wrd77.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [3]);
  (Wrd73.Obj) = (current_block [OBJECT_31_4]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd119.Obj) = (Rsp [0]);
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd118.Obj) = ((Wrd120.pObj) [2]);
  (Wrd121.Obj) = (current_block [OBJECT_31_3]);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 3);

DEFLABEL (label_21)
  goto label_33;

DEFLABEL (label_36)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [3]);
  (Wrd49.Obj) = (current_block [OBJECT_31_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_18)
  (Wrd29.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd143.Obj) = (Rsp [0]);
  (Wrd144.pObj) = (OBJECT_ADDRESS (Wrd143.Obj));
  (Wrd142.Obj) = ((Wrd144.pObj) [2]);
  (Wrd145.Obj) = (current_block [OBJECT_31_0]);
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 3);

DEFLABEL (label_22)
  goto label_37;

DEFLABEL (label_40)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd25.Obj) = (current_block [OBJECT_31_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_39;

DEFLABEL (do_loop_28)
DEFLABEL (do_loop_11)
  INTERRUPT_CHECK (26, LABEL_31_14);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_31_6])))
    goto label_41;
  Rvl = (current_block [OBJECT_31_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 6))
    goto label_45;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_45;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_45;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  Dbl14 = (((double *) (& ((Wrd20.pObj) [1]))) [(Wrd9.Lng)]);
  INLINE_DOUBLE_TO_FLONUM (Dbl14, (Wrd7.Obj));

DEFLABEL (label_44)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 6))
    goto label_43;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_43;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) (Wrd45.Lng)) < ((unsigned long) (Wrd49.Lng))))
    goto label_43;
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd41.uLng) == 6))
    goto label_43;
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd38.pObj) = (& ((Wrd47.pObj) [1]));
  Dbl40 = (FLONUM_TO_DOUBLE (Wrd7.Obj));
  ((Wrd38.pDbl) [(Wrd35.Lng)]) = Dbl40;

DEFLABEL (label_42)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd32.Lng) + 1L);
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));
  (Rsp [0]) = (Wrd30.Obj);
  goto do_loop_11;

DEFLABEL (label_43)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_16]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_9]), 3);

DEFLABEL (label_24)
  goto label_42;

DEFLABEL (label_45)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_8]), 2);

DEFLABEL (label_23)
  (Wrd7.Obj) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_9 7
#define LABEL_32_8 9
#define LABEL_32_11 11
#define LABEL_32_6 13
#define ENVIRONMENT_LABEL_32_3 27
#define DEBUGGING_LABEL_32_2 26
#define OBJECT_32_2 25
#define OBJECT_32_1 24
#define OBJECT_32_0 23
#define EXECUTE_CACHE_32_12 15
#define EXECUTE_CACHE_32_10 17
#define EXECUTE_CACHE_32_7 19
#define FREE_REFERENCE_32_0 22
#define FREE_REFERENCES_LABEL_32_0 14
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_32_4);
      goto guarantee_random_state_6;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_32_9);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_32_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_32_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_random_state_10)
DEFLABEL (guarantee_random_state_6)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_32_0]))
    goto label_13;
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_32_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_32_9);
  goto label_11;

DEFLABEL (label_13)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_17;
  Wrd14 = Wrd18;

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;

DEFLABEL (label_14)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_32_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_11);
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_5])), (Wrd15.pObj));

DEFLABEL (label_8)
  (Wrd14.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define LABEL_33_9 9
#define LABEL_33_10 11
#define LABEL_33_11 13
#define LABEL_33_12 15
#define LABEL_33_8 17
#define LABEL_33_13 19
#define LABEL_33_15 21
#define LABEL_33_14 23
#define LABEL_33_16 25
#define LABEL_33_17 27
#define LABEL_33_18 29
#define LABEL_33_20 31
#define LABEL_33_19 33
#define LABEL_33_22 35
#define LABEL_33_24 37
#define LABEL_33_23 39
#define LABEL_33_26 41
#define ENVIRONMENT_LABEL_33_3 68
#define DEBUGGING_LABEL_33_2 67
#define OBJECT_33_6 66
#define OBJECT_33_5 65
#define OBJECT_33_4 64
#define OBJECT_33_3 63
#define OBJECT_33_2 62
#define OBJECT_33_1 61
#define OBJECT_33_0 60
#define EXECUTE_CACHE_33_25 43
#define EXECUTE_CACHE_33_21 45
#define EXECUTE_CACHE_33_6 47
#define FREE_REFERENCE_33_2 50
#define FREE_REFERENCE_33_1 51
#define FREE_REFERENCE_33_0 52
#define FREE_ASSIGNMENT_33_5 54
#define FREE_ASSIGNMENT_33_4 55
#define FREE_ASSIGNMENT_33_3 56
#define FREE_ASSIGNMENT_33_2 57
#define FREE_ASSIGNMENT_33_1 58
#define FREE_ASSIGNMENT_33_0 59
#define FREE_REFERENCES_LABEL_33_0 42
#define NUMBER_OF_LINKER_SECTIONS_33_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd5;
  double Dbl62;
  double Dbl61;
  double Dbl59;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd43;
  double Dbl48;
  double Dbl47;
  machine_word Wrd46;
  double Dbl45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd70;
  machine_word Wrd67;
  double Dbl42;
  machine_word Wrd41;
  machine_word Wrd40;
  double Dbl40;
  machine_word Wrd65;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd32;
  double Dbl32;
  double Dbl31;
  machine_word Wrd30;
  double Dbl29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_33_4);
      goto initialize_packageB_11;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_33_9);
      goto loop_6;

    case 4:
      current_block = (Rpc - LABEL_33_10);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_33_11);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_33_12);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_33_8);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_33_13);
      goto label_14;

    case 9:
      current_block = (Rpc - LABEL_33_15);
      goto label_15;

    case 10:
      current_block = (Rpc - LABEL_33_14);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_33_16);
      goto label_19;

    case 12:
      current_block = (Rpc - LABEL_33_17);
      goto label_20;

    case 13:
      current_block = (Rpc - LABEL_33_18);
      goto label_21;

    case 14:
      current_block = (Rpc - LABEL_33_20);
      goto label_22;

    case 15:
      current_block = (Rpc - LABEL_33_19);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_33_22);
      goto label_23;

    case 17:
      current_block = (Rpc - LABEL_33_24);
      goto label_24;

    case 18:
      current_block = (Rpc - LABEL_33_23);
      goto continuation_10;

    case 19:
      current_block = (Rpc - LABEL_33_26);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_27)
DEFLABEL (initialize_packageB_11)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_53)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto loop_6;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_8);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_52)
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_51;

DEFLABEL (label_50)
  ((Wrd6.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_49)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_48;
  Wrd21 = Wrd25;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_5]), 1);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_33_14);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_44)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_43;
  Wrd18 = Wrd22;

DEFLABEL (label_42)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_3]));
  (Wrd32.Obj) = ((Wrd24.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd24.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_39)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_19]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_2]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_38;
  Wrd39 = Wrd43;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_33_19);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_34)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_33;
  Wrd21 = Wrd25;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_25]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_33_23);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_33_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_33_6]);
  goto pop_return;

DEFLABEL (label_31)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_26])), (Wrd6.pObj), Rvl);

DEFLABEL (label_25)
  goto label_29;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_24])), (Wrd22.pObj));

DEFLABEL (label_24)
  (Wrd21.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_36)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_22])), (Wrd6.pObj), Rvl);

DEFLABEL (label_23)
  goto label_34;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_20])), (Wrd40.pObj));

DEFLABEL (label_22)
  (Wrd39.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_41)
  if ((Wrd32.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_18])), (Wrd24.pObj), (Wrd18.Obj));

DEFLABEL (label_21)
  goto label_39;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_17])), (Wrd19.pObj));

DEFLABEL (label_20)
  (Wrd18.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_46)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_16])), (Wrd6.pObj), Rvl);

DEFLABEL (label_19)
  goto label_44;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_15])), (Wrd22.pObj));

DEFLABEL (label_15)
  (Wrd21.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_51)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_50;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_13])), (Wrd6.pObj), (Wrd5.Obj));

DEFLABEL (label_14)
  goto label_49;

DEFLABEL (label_55)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_54;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_33_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_13)
  goto label_53;

DEFLABEL (loop_28)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_33_9);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 6))
    goto label_63;
  Dbl29 = (FLONUM_TO_DOUBLE (Wrd33.Obj));
  (Wrd30.Obj) = (current_block [OBJECT_33_0]);
  Dbl31 = (FLONUM_TO_DOUBLE (Wrd30.Obj));
  Dbl32 = (Dbl29 + Dbl31);
  INLINE_DOUBLE_TO_FLONUM (Dbl32, (Wrd27.Obj));

DEFLABEL (label_62)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd65.uLng) == 6))
    goto label_61;
  Dbl40 = (FLONUM_TO_DOUBLE (Wrd27.Obj));
  (Wrd41.Obj) = (current_block [OBJECT_33_0]);
  Dbl42 = (FLONUM_TO_DOUBLE (Wrd41.Obj));
  if (Dbl40 == Dbl42)
    goto label_59;

DEFLABEL (label_58)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 6))
    goto label_57;
  Dbl45 = (FLONUM_TO_DOUBLE (Wrd49.Obj));
  (Wrd46.Obj) = (current_block [OBJECT_33_3]);
  Dbl47 = (FLONUM_TO_DOUBLE (Wrd46.Obj));
  Dbl48 = (Dbl45 / Dbl47);
  INLINE_DOUBLE_TO_FLONUM (Dbl48, (Wrd43.Obj));

DEFLABEL (label_56)
  (Rsp [0]) = (Wrd43.Obj);
  goto loop_6;

DEFLABEL (label_57)
  (Wrd52.Obj) = (current_block [OBJECT_33_3]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_4]), 2);

DEFLABEL (label_17)
  (Wrd43.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd56.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 6)
    goto label_60;
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_4]), 2);

DEFLABEL (label_60)
  Dbl59 = (FLONUM_TO_DOUBLE (Wrd56.Obj));
  Dbl61 = (FLONUM_TO_DOUBLE (Wrd63.Obj));
  Dbl62 = (Dbl59 / Dbl61);
  INLINE_DOUBLE_TO_FLONUM (Dbl62, (Wrd5.Obj));
  Rsp = (& (Rsp [3]));
  goto label_52;

DEFLABEL (label_61)
  (Wrd67.Obj) = (current_block [OBJECT_33_0]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_59;

DEFLABEL (label_63)
  (Wrd36.Obj) = (current_block [OBJECT_33_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_16)
  (Wrd27.Obj) = Rvl;
  goto label_62;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_7 5
#define LABEL_34_5 7
#define LABEL_34_6 9
#define LABEL_34_13 11
#define LABEL_34_9 13
#define LABEL_34_10 15
#define LABEL_34_12 17
#define LABEL_34_19 19
#define LABEL_34_20 21
#define LABEL_34_21 23
#define LABEL_34_16 25
#define LABEL_34_17 27
#define ENVIRONMENT_LABEL_34_3 54
#define DEBUGGING_LABEL_34_2 53
#define OBJECT_34_7 52
#define OBJECT_34_6 51
#define OBJECT_34_5 50
#define OBJECT_34_4 49
#define OBJECT_34_3 48
#define OBJECT_34_2 47
#define OBJECT_34_1 46
#define OBJECT_34_0 45
#define EXECUTE_CACHE_34_22 29
#define EXECUTE_CACHE_34_18 31
#define EXECUTE_CACHE_34_15 33
#define EXECUTE_CACHE_34_14 35
#define EXECUTE_CACHE_34_11 37
#define EXECUTE_CACHE_34_8 39
#define FREE_REFERENCE_34_2 42
#define FREE_REFERENCE_34_1 43
#define FREE_REFERENCE_34_0 44
#define FREE_REFERENCES_LABEL_34_0 28
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
random_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_34_4);
      goto finalize_random_state_typeB_8;

    case 1:
      current_block = (Rpc - LABEL_34_7);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_34_6);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_34_13);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_34_10);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_34_12);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_34_19);
      goto label_12;

    case 9:
      current_block = (Rpc - LABEL_34_20);
      goto label_13;

    case 10:
      current_block = (Rpc - LABEL_34_21);
      goto label_14;

    case 11:
      current_block = (Rpc - LABEL_34_16);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_34_17);
      goto lambda_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finalize_random_state_typeB_16)
DEFLABEL (finalize_random_state_typeB_8)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_20;
  Wrd10 = Wrd14;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd14.Obj) = (current_block [OBJECT_34_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_34_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_34_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_34_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_34_6]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_34_2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_34_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_15]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_7])), (Wrd11.pObj));

DEFLABEL (label_10)
  (Wrd10.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_17)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_34_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_29;
  Wrd8 = Wrd12;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;
  Wrd5 = Wrd9;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_25;
  Wrd12 = Wrd16;

DEFLABEL (label_24)
  (Wrd18.Obj) = (* (Rsp++));
  if (! ((Wrd12.Obj) == (Wrd18.Obj)))
    goto label_21;
  Rvl = (current_block [OBJECT_34_4]);
  goto pop_return;

DEFLABEL (label_21)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_2]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_23;
  Wrd19 = Wrd23;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_14]));

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_21])), (Wrd20.pObj));

DEFLABEL (label_14)
  (Wrd19.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_20])), (Wrd13.pObj));

DEFLABEL (label_13)
  (Wrd12.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_19])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_13])), (Wrd9.pObj));

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_18)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_34_17);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
random_so_aee22c55faeb92d3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	3,
	2,
	1,
	0,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 34)
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

static const struct liarc_code_S arr_decl_random_so_aee22c55faeb92d3 [34] =
  {
    { "random_so_code_1", 18, random_so_code_1 },
    { "random_so_code_2", 2, random_so_code_2 },
    { "random_so_code_3", 2, random_so_code_3 },
    { "random_so_code_4", 9, random_so_code_4 },
    { "random_so_code_5", 11, random_so_code_5 },
    { "random_so_code_6", 8, random_so_code_6 },
    { "random_so_code_7", 8, random_so_code_7 },
    { "random_so_code_8", 7, random_so_code_8 },
    { "random_so_code_9", 6, random_so_code_9 },
    { "random_so_code_10", 4, random_so_code_10 },
    { "random_so_code_11", 12, random_so_code_11 },
    { "random_so_code_12", 18, random_so_code_12 },
    { "random_so_code_13", 6, random_so_code_13 },
    { "random_so_code_14", 2, random_so_code_14 },
    { "random_so_code_15", 2, random_so_code_15 },
    { "random_so_code_16", 2, random_so_code_16 },
    { "random_so_code_17", 1, random_so_code_17 },
    { "random_so_code_18", 13, random_so_code_18 },
    { "random_so_code_19", 8, random_so_code_19 },
    { "random_so_code_20", 15, random_so_code_20 },
    { "random_so_code_21", 17, random_so_code_21 },
    { "random_so_code_22", 1, random_so_code_22 },
    { "random_so_code_23", 3, random_so_code_23 },
    { "random_so_code_24", 1, random_so_code_24 },
    { "random_so_code_25", 1, random_so_code_25 },
    { "random_so_code_26", 1, random_so_code_26 },
    { "random_so_code_27", 1, random_so_code_27 },
    { "random_so_code_28", 1, random_so_code_28 },
    { "random_so_code_29", 5, random_so_code_29 },
    { "random_so_code_30", 6, random_so_code_30 },
    { "random_so_code_31", 11, random_so_code_31 },
    { "random_so_code_32", 6, random_so_code_32 },
    { "random_so_code_33", 20, random_so_code_33 },
    { "random_so_code_34", 13, random_so_code_34 }
  };

int
decl_random_so_aee22c55faeb92d3 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_random_so_aee22c55faeb92d3);
  return (0);
}

DECLARE_COMPILED_CODE ("random.so", 3, decl_random_so_aee22c55faeb92d3, random_so_aee22c55faeb92d3)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_random_so_data_aee22c55faeb92d3 [5287] =
  "\x68\x47\xbd\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x80\x02\x09\xc2"
  "\xb9\x09\xba\xc3\xbb\xc3\xbc\xc2\xbd\x09\xc2\x82\xc2\xbe\x81\xc2"
  "\xbf\x83\xc1\x0d\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82"
  "\x88\xc1\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x83\x88\xc2\x1c\x04\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x1b\xb5\xc2\xbd\xc1\xc2"
  "\x1c\xb2\xc2\x1c\x82\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x85\x88\xc2\x1b\xc2\x1c\xc2\x1c\x82\x04\x28\x0d\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xc2\x1c"
  "\x1b\x1b\x1b\x81\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5"
  "\x0c\x0c\x1b\x80\xc2\x09\x06\x07\x02\xc2\xbd\x02\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xb1\x09"
  "\xc2\x1c\x81\x82\x0d\x1c\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc3\x02\x80\x0d\x1c\xc1\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x80\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x02\x0a\x09"
  "\x1d\x80\x81\x0c\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xc1\x0c\x0d\x1c\x06\x02\xb5\x02"
  "\x07\x28\x1b\x28\x0d\x28\x0d\xbd\x28\x0d\x1c\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\xc0\x1b\x02\xc0\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x09\x0d\x1c\xc2\x1c\x09\xb6\x1b\xb4\x1b\x82"
  "\x80\xc1\x1c\x02\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x02\x04\x1b\x81\xc2\x04\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x02\x83\x82\xb7\x81\xb3\x80\x0d"
  "\x1c\x02\x0c\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xb4\x83\x81\x82\x1b\x0c\x1b\x02"
  "\x1b\xb7\x80\x02\xc1\x1c\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x1b\xb7\x80\x84\x1b\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb7\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb7"
  "\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x82\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb7\x83\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x81\x83\xb7\x82\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4"
  "\xb6\x80\x1b\xc1\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\xb6\x07\x02\x80\x83\x82\xb3"
  "\xb7\x81\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d"
  "\xb0\x02\x88\x0c\x0c\x1d\x0d\xbe\x24\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x1b\x1b\x09\x1b\xb1\x09\xb6\x1b\x1b\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x25\x1b\xb6\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\xbc\xb4\x0d\x0d\x9a\x83\x82\x81\x9a\x1d\x83\x0d\x1b\x84\x0d"
  "\xb6\x1b\x24\x28\x0d\x28\x0d\x28\x0d\xbc\x28\x0d\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17"
  "\xbb\x88\xb3\x1b\x2a\x1b\x2a\x1e\x1e\x1e\x1e\x1e\x1e\x1b\x2a\xb7"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x02\x1b\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\xb2\x1b\x02\x02\x17\x0d\x0d\x1b\x1b\x1b\x1b\x1b\xb6\x1b\x1b\x1b"
  "\xb5\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x1b\x1b\x0d\x0d\x1b\x1b\x1b"
  "\xb4\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b"
  "\x0d\x0d\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x72\x61\x6e\x64"
  "\x6f\x6d\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x2c\x03\x31\x2e"
  "\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x61\x64\x64\x0c\x34\x32\x39\x34"
  "\x39\x36\x37\x32\x39\x31\x2e\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73"
  "\x65\x74\x21\x15\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x76\x65\x63"
  "\x74\x6f\x72\x2d\x73\x65\x74\x21\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x6c\x65\x73\x73\x3f\x03\x30\x2e\x10\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x73\x75\x62\x74\x72\x61\x63\x74\x14\x66\x6c\x6f\x61\x74\x69\x6e"
  "\x67\x2d\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0b\x76\x65\x63"
  "\x74\x6f\x72\x2d\x72\x65\x66\x17\x73\x65\x74\x2d\x69\x6e\x74\x65"
  "\x72\x72\x75\x70\x74\x2d\x65\x6e\x61\x62\x6c\x65\x73\x21\x15\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x2f\x67\x63"
  "\x2d\x6f\x6b\x02\x15\x26\x81\x8b\x02\x14\x24\x81\x83\x02\x13\x22"
  "\x81\x83\x02\x12\x20\x81\x83\x02\x11\x1e\x81\x83\x02\x10\x1c\x81"
  "\x83\x02\x0f\x1a\x81\x83\x02\x0e\x18\x81\x8d\x02\x0d\x16\x81\x8f"
  "\x02\x0c\x14\x81\x8f\x02\x0b\x12\x81\x8d\x02\x0a\x10\x81\x89\x02"
  "\x09\x0e\x81\x87\x02\x08\x0c\x81\x85\x02\x07\x0a\x81\x83\x02\x06"
  "\x08\x81\x8b\x02\x05\x06\x81\x85\x02\x04\x04\x83\x04\x25\x3a\x09"
  "\x02\x17\x66\x6c\x6f\x6e\x75\x6d\x2d\x74\x72\x75\x6e\x63\x61\x74"
  "\x65\x2d\x3e\x65\x78\x61\x63\x74\x0a\x03\x13\x66\x6c\x6f\x3a\x72"
  "\x61\x6e\x64\x6f\x6d\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x0b\x02\x17"
  "\x06\x81\x83\x02\x16\x04\x83\x04\x05\x0c\x0c\x02\x11\x69\x6e\x74"
  "\x65\x67\x65\x72\x2d\x67\x72\x65\x61\x74\x65\x72\x3f\x0d\x09\x66"
  "\x66\x66\x66\x66\x66\x66\x62\x0e\x04\x15\x73\x6d\x61\x6c\x6c\x2d"
  "\x72\x61\x6e\x64\x6f\x6d\x2d\x69\x6e\x74\x65\x67\x65\x72\x0f\x04"
  "\x15\x6c\x61\x72\x67\x65\x2d\x72\x61\x6e\x64\x6f\x6d\x2d\x69\x6e"
  "\x74\x65\x67\x65\x72\x10\x03\x19\x06\x81\x85\x02\x18\x04\x84\x06"
  "\x05\x0f\x11\x02\x0a\x10\x66\x6c\x6f\x6e\x75\x6d\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x79\x10\x66\x6c\x6f\x6e\x75\x6d\x2d\x74\x72\x75"
  "\x6e\x63\x61\x74\x65\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d\x64\x69\x76"
  "\x69\x64\x65\x12\x10\x69\x6e\x74\x65\x67\x65\x72\x2d\x3e\x66\x6c"
  "\x6f\x6e\x75\x6d\x13\x03\x0b\x02\x22\x14\x81\x89\x02\x21\x12\x81"
  "\x8d\x02\x20\x10\x81\x8b\x02\x1f\x0e\x81\x8b\x02\x1e\x0c\x81\x89"
  "\x02\x1d\x0a\x81\x87\x02\x1c\x08\x81\x87\x02\x1b\x06\x81\x85\x02"
  "\x1a\x04\x84\x06\x13\x21\x14\x02\x0e\x69\x6e\x74\x65\x67\x65\x72"
  "\x2d\x6c\x65\x73\x73\x3f\x0e\x11\x69\x6e\x74\x65\x67\x65\x72\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x79\x15\x11\x69\x6e\x74\x65\x67\x65"
  "\x72\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x16\x11\x66\x66\x66\x66"
  "\x66\x66\x66\x36\x30\x30\x30\x30\x30\x30\x31\x39\x04\x07\x69\x6e"
  "\x74\x3a\x3c\x3d\x04\x19\x69\x6e\x74\x3a\x6c\x61\x72\x67\x65\x2d"
  "\x72\x61\x6e\x64\x6f\x6d\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x17\x03"
  "\x2d\x18\x81\x8d\x02\x2c\x16\x81\x8b\x02\x2b\x14\x81\x85\x02\x2a"
  "\x12\x81\x8b\x02\x29\x10\x81\x89\x02\x28\x0e\x81\x89\x02\x27\x0c"
  "\x81\x89\x02\x26\x0a\x81\x87\x02\x25\x08\x81\x89\x02\x24\x06\x81"
  "\x87\x02\x23\x04\x84\x06\x17\x25\x18\x02\x0c\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x61\x64\x64\x19\x15\x0e\x0a\x03\x0b\x02\x35\x12\x81"
  "\x8b\x02\x34\x10\x81\x89\x02\x33\x0e\x81\x8b\x02\x32\x0c\x81\x89"
  "\x02\x31\x0a\x81\x89\x02\x30\x08\x81\x87\x02\x2f\x06\x81\x85\x02"
  "\x2e\x04\x84\x06\x11\x1c\x1a\x02\x08\x15\x55\x6e\x73\x75\x70\x70"
  "\x6f\x72\x74\x65\x64\x20\x6d\x6f\x64\x75\x6c\x75\x73\x3a\x0c\x72"
  "\x65\x61\x6c\x20\x6e\x75\x6d\x62\x65\x72\x0d\x10\x66\x6c\x6f\x6e"
  "\x75\x6d\x2d\x67\x72\x65\x61\x74\x65\x72\x3f\x03\x30\x2e\x0f\x0d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1b\x07\x72\x61"
  "\x6e\x64\x6f\x6d\x1b\x04\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65"
  "\x2d\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x74\x61\x74\x65\x1c\x03\x10"
  "\x66\x6c\x6f\x3a\x72\x61\x6e\x64\x6f\x6d\x2d\x75\x6e\x69\x74\x1d"
  "\x03\x06\x72\x65\x61\x6c\x3f\x1e\x04\x19\x65\x72\x72\x6f\x72\x3a"
  "\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65"
  "\x6e\x74\x1f\x04\x10\x25\x72\x61\x6e\x64\x6f\x6d\x2d\x69\x6e\x74"
  "\x65\x67\x65\x72\x20\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f"
  "\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74"
  "\x21\x04\x06\x65\x72\x72\x6f\x72\x22\x08\x3d\x12\x81\x87\x02\x3c"
  "\x10\x81\x87\x02\x3b\x0e\x81\x87\x02\x3a\x0c\x81\x87\x02\x39\x0a"
  "\x81\x83\x02\x38\x08\x81\x85\x02\x37\x06\x81\x87\x02\x36\x04\x84"
  "\x04\x11\x30\x23\x02\x09\x13\x12\x03\x31\x2e\x11\x69\x6e\x74\x65"
  "\x67\x65\x72\x2d\x73\x75\x62\x74\x72\x61\x63\x74\x24\x07\x66\x6c"
  "\x69\x6d\x69\x74\x25\x08\x66\x6c\x69\x6d\x69\x74\x2e\x26\x03\x04"
  "\x20\x02\x44\x10\x81\x87\x02\x43\x0e\x81\x85\x02\x42\x0c\x81\x83"
  "\x02\x41\x0a\x81\x83\x02\x40\x08\x81\x8b\x02\x3f\x06\x81\x8b\x02"
  "\x3e\x04\x83\x04\x0f\x1f\x27\x02\x0a\x0f\x76\x65\x63\x74\x6f\x72"
  "\x2d\x38\x62\x2d\x73\x65\x74\x21\x81\x02\x13\x72\x61\x6e\x64\x6f"
  "\x6d\x2d\x62\x79\x74\x65\x2d\x76\x65\x63\x74\x6f\x72\x28\x10\x73"
  "\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x04\x1c"
  "\x04\x0f\x03\x4a\x0e\x81\x8b\x02\x49\x0c\x81\x8b\x02\x48\x0a\x81"
  "\x8b\x02\x47\x08\x81\x87\x02\x46\x06\x81\x85\x02\x45\x04\x84\x04"
  "\x0d\x1a\x29\x02\x0b\x0d\x1c\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x6f"
  "\x75\x72\x63\x65\x2d\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x67\x65"
  "\x72\x73\x0d\x04\x1c\x04\x1f\x04\x20\x04\x4e\x0a\x81\x85\x02\x4d"
  "\x08\x81\x85\x02\x4c\x06\x81\x83\x02\x4b\x04\x83\x04\x09\x16\x1f"
  "\x02\x0c\x81\x80\x04\x03\x2e\x35\x08\x0a\x72\x65\x61\x6c\x20\x75"
  "\x6e\x69\x74\x19\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x6f\x75\x72\x63"
  "\x65\x2d\x6d\x61\x6b\x65\x2d\x72\x65\x61\x6c\x73\x2a\x04\x1c\x05"
  "\x21\x05\x02\x3c\x04\x04\x6d\x69\x6e\x03\x1e\x03\x09\x74\x72\x75"
  "\x6e\x63\x61\x74\x65\x03\x1d\x04\x20\x09\x5a\x1a\x81\x85\x02\x59"
  "\x18\x81\x83\x02\x58\x16\x81\x83\x02\x57\x14\x81\x8b\x02\x56\x12"
  "\x81\x89\x02\x55\x10\x81\x87\x02\x54\x0e\x81\x87\x02\x53\x0c\x81"
  "\x85\x02\x52\x0a\x81\x85\x02\x51\x08\x81\x85\x02\x50\x06\x81\x85"
  "\x02\x4f\x04\x84\x04\x19\x34\x1e\x02\x0d\x81\x02\x0e\x63\x68\x61"
  "\x72\x2d\x3e\x69\x6e\x74\x65\x67\x65\x72\x0d\x2f\x64\x65\x76\x2f"
  "\x75\x72\x61\x6e\x64\x6f\x6d\x12\x6d\x61\x6b\x65\x2d\x72\x61\x6e"
  "\x64\x6f\x6d\x2d\x73\x74\x61\x74\x65\x2b\x0f\x1b\x04\x1c\x03\x0f"
  "\x66\x69\x6c\x65\x2d\x72\x65\x61\x64\x61\x62\x6c\x65\x3f\x03\x12"
  "\x63\x6f\x70\x79\x2d\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x74\x61\x74"
  "\x65\x02\x14\x73\x69\x6d\x70\x6c\x65\x2d\x72\x61\x6e\x64\x6f\x6d"
  "\x2d\x73\x74\x61\x74\x65\x2c\x04\x15\x63\x61\x6c\x6c\x2d\x77\x69"
  "\x74\x68\x2d\x69\x6e\x70\x75\x74\x2d\x66\x69\x6c\x65\x03\x15\x69"
  "\x6e\x69\x74\x69\x61\x6c\x2d\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x74"
  "\x61\x74\x65\x2d\x03\x0a\x72\x65\x61\x64\x2d\x63\x68\x61\x72\x08"
  "\x6c\x26\x81\x89\x02\x6b\x24\x81\x8b\x02\x6a\x22\x81\x89\x02\x69"
  "\x20\x81\x89\x02\x68\x1e\x81\x89\x02\x67\x1c\x81\x89\x02\x66\x1a"
  "\x81\x89\x02\x65\x18\x81\x89\x02\x64\x16\x81\x85\x02\x63\x14\x81"
  "\x85\x02\x62\x12\x81\x85\x02\x61\x10\x81\x85\x02\x60\x0e\x83\x04"
  "\x5f\x0c\x81\x83\x02\x5e\x0a\x81\x83\x02\x5d\x08\x81\x83\x02\x5c"
  "\x06\x83\x02\x5b\x04\x81\x83\x02\x25\x40\x2e\x02\x0e\x19\x10\x72"
  "\x65\x61\x6c\x2d\x74\x69\x6d\x65\x2d\x63\x6c\x6f\x63\x6b\x15\xa1"
  "\x8d\x06\x0d\x73\x79\x73\x74\x65\x6d\x2d\x63\x6c\x6f\x63\x6b\x03"
  "\x2d\x03\x11\x63\x6f\x6e\x67\x72\x75\x65\x6e\x74\x69\x61\x6c\x2d"
  "\x72\x6e\x67\x2f\x03\x72\x0e\x81\x83\x02\x71\x0c\x81\x85\x02\x70"
  "\x0a\x81\x83\x02\x6f\x08\x81\x83\x02\x6e\x06\x81\x81\x02\x6d\x04"
  "\x82\x02\x0d\x1a\x30\x02\x0f\x03\x2f\x03\x2d\x03\x74\x06\x81\x81"
  "\x02\x73\x04\x82\x02\x05\x0e\x31\x02\x10\x03\x14\x69\x6d\x70\x6f"
  "\x72\x74\x2d\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x74\x61\x74\x65\x32"
  "\x04\x13\x63\x6f\x70\x79\x2d\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x74"
  "\x61\x74\x65\x21\x33\x03\x76\x06\x81\x87\x02\x75\x04\x84\x06\x05"
  "\x0d\x34\x02\x11\x03\x2b\x04\x33\x03\x78\x06\x81\x83\x02\x77\x04"
  "\x83\x04\x05\x0e\x35\x02\x12\x20\x72\x61\x6e\x64\x6f\x6d\x2d\x73"
  "\x6f\x75\x72\x63\x65\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72\x61\x6e"
  "\x64\x6f\x6d\x69\x7a\x65\x21\x36\x19\x55\x6e\x69\x6d\x70\x6c\x65"
  "\x6d\x65\x6e\x74\x65\x64\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x3a\x04\x22\x02\x79\x04\x85\x08\x03\x0b\x37\x02\x13\x03\x30\x2e"
  "\x27\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x72\x61\x6e\x64"
  "\x6f\x6d\x2d\x6e\x75\x6d\x62\x65\x72\x29\x72\x61\x6e\x64\x6f\x6d"
  "\x2d\x73\x74\x61\x74\x65\x5d\x38\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x65\x71\x75\x61\x6c\x3f\x39\x0c\x34\x32\x39\x34\x39\x36\x37\x32"
  "\x39\x30\x2e\x13\x0e\x15\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x76"
  "\x65\x63\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x13\x2c\x86\x01\x1c\x81"
  "\x87\x02\x85\x01\x1a\x81\x87\x02\x84\x01\x18\x81\x87\x02\x83\x01"
  "\x16\x81\x87\x02\x82\x01\x14\x81\x87\x02\x81\x01\x12\x81\x87\x02"
  "\x80\x01\x10\x81\x8b\x02\x7f\x0e\x81\x87\x02\x7e\x0c\x81\x87\x02"
  "\x7d\x0a\x81\x87\x02\x7c\x08\x81\x85\x02\x7b\x06\x81\x83\x02\x7a"
  "\x04\x83\x04\x1b\x2a\x3a\x02\x14\x16\x24\x15\xa8\x83\x01\x09\x37"
  "\x66\x66\x66\x66\x66\x66\x66\x19\x12\x69\x6e\x74\x65\x67\x65\x72"
  "\x2d\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x09\x37\x66\x66\x66\x66"
  "\x66\x66\x65\x8e\x01\x12\x81\x87\x02\x8d\x01\x10\x81\x87\x02\x8c"
  "\x01\x0e\x81\x85\x02\x8b\x01\x0c\x81\x89\x02\x8a\x01\x0a\x81\x85"
  "\x02\x89\x01\x08\x81\x83\x02\x88\x01\x06\x81\x83\x02\x87\x01\x04"
  "\x83\x04\x11\x1d\x24\x02\x15\x2c\x10\x72\x61\x6e\x64\x6f\x6d\x2d"
  "\x73\x74\x61\x74\x65\x2d\x76\x31\x19\x2f\x0d\x72\x61\x6e\x64\x6f"
  "\x6d\x20\x73\x74\x61\x74\x65\x14\x65\x78\x70\x6f\x72\x74\x2d\x72"
  "\x61\x6e\x64\x6f\x6d\x2d\x73\x74\x61\x74\x65\x16\x03\x0e\x72\x61"
  "\x6e\x64\x6f\x6d\x2d\x73\x74\x61\x74\x65\x3f\x15\x05\x21\x03\x0c"
  "\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x3b\x03\x0f\x69\x6e"
  "\x65\x78\x61\x63\x74\x2d\x3e\x65\x78\x61\x63\x74\x05\x9d\x01\x20"
  "\x81\x8b\x02\x9c\x01\x1e\x81\x8b\x02\x9b\x01\x1c\x81\x8d\x02\x9a"
  "\x01\x1a\x81\x8b\x02\x99\x01\x18\x81\x85\x02\x98\x01\x16\x81\x85"
  "\x02\x97\x01\x14\x81\x85\x02\x96\x01\x12\x81\x87\x02\x95\x01\x10"
  "\x81\x85\x02\x94\x01\x0e\x81\x85\x02\x93\x01\x0c\x81\x85\x02\x92"
  "\x01\x0a\x81\x83\x02\x91\x01\x08\x81\x83\x02\x90\x01\x06\x81\x83"
  "\x02\x8f\x01\x04\x83\x04\x1f\x37\x3c\x02\x16\x38\x0e\x32\x16\x65"
  "\x78\x74\x65\x72\x6e\x61\x6c\x20\x72\x61\x6e\x64\x6f\x6d\x20\x73"
  "\x74\x61\x74\x65\x13\x2c\x19\x2f\x0e\x76\x65\x63\x74\x6f\x72\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x3d\x05\x21\x03\x0f\x65\x78\x61\x63\x74"
  "\x2d\x3e\x69\x6e\x65\x78\x61\x63\x74\x03\x1b\x65\x78\x61\x63\x74"
  "\x2d\x6e\x6f\x6e\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x69\x6e\x74"
  "\x65\x67\x65\x72\x3f\x04\xae\x01\x24\x81\x89\x02\xad\x01\x22\x81"
  "\x83\x02\xac\x01\x20\x81\x83\x02\xab\x01\x1e\x81\x83\x02\xaa\x01"
  "\x1c\x81\x8d\x02\xa9\x01\x1a\x81\x87\x02\xa8\x01\x18\x81\x8f\x02"
  "\xa7\x01\x16\x81\x8d\x02\xa6\x01\x14\x81\x87\x02\xa5\x01\x12\x81"
  "\x85\x02\xa4\x01\x10\x81\x83\x02\xa3\x01\x0e\x81\x89\x02\xa2\x01"
  "\x0c\x81\x83\x02\xa1\x01\x0a\x81\x83\x02\xa0\x01\x08\x81\x83\x02"
  "\x9f\x01\x06\x83\x04\x9e\x01\x04\x81\x83\x02\x23\x3c\x3e\x02\x17"
  "\x38\xaf\x01\x04\x85\x08\x03\x3f\x02\x18\x38\x3d\xb2\x01\x08\x81"
  "\x83\x02\xb1\x01\x06\x81\x83\x02\xb0\x01\x04\x83\x04\x07\x10\x3d"
  "\x02\x19\xb3\x01\x04\x83\x04\x03\x40\x02\x1a\x02\xb4\x01\x04\x84"
  "\x06\x03\x41\x02\x1b\xb5\x01\x04\x83\x04\x03\x42\x02\x1c\x02\xb6"
  "\x01\x04\x84\x06\x03\x43\x02\x1d\xb7\x01\x04\x83\x04\x03\x44\x02"
  "\x1e\x38\x03\x10\x66\x6c\x6f\x3a\x76\x65\x63\x74\x6f\x72\x2d\x63"
  "\x6f\x70\x79\x45\x02\xbc\x01\x0c\x81\x87\x02\xbb\x01\x0a\x81\x85"
  "\x02\xba\x01\x08\x81\x87\x02\xb9\x01\x06\x81\x83\x02\xb8\x01\x04"
  "\x83\x04\x0b\x16\x46\x02\x1f\x13\x17\x66\x6c\x6f\x61\x74\x69\x6e"
  "\x67\x2d\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\xc2"
  "\x01\x0e\x81\x89\x02\xc1\x01\x0c\x81\x89\x02\xc0\x01\x0a\x81\x89"
  "\x02\xbf\x01\x08\x81\x85\x02\xbe\x01\x06\x81\x83\x02\xbd\x01\x04"
  "\x83\x04\x0d\x15\x13\x02\x20\x2c\x03\x13\x77\x69\x74\x68\x6f\x75"
  "\x74\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x02\xcd\x01\x18"
  "\x81\x87\x02\xcc\x01\x16\x81\x87\x02\xcb\x01\x14\x81\x87\x02\xca"
  "\x01\x12\x81\x85\x02\xc9\x01\x10\x81\x83\x02\xc8\x01\x0e\x81\x83"
  "\x02\xc7\x01\x0c\x81\x83\x02\xc6\x01\x0a\x81\x83\x02\xc5\x01\x08"
  "\x81\x83\x02\xc4\x01\x06\x81\x83\x02\xc3\x01\x04\x84\x06\x17\x27"
  "\x02\x21\x18\x49\x6e\x76\x61\x6c\x69\x64\x20\x2a\x72\x61\x6e\x64"
  "\x6f\x6d\x2d\x73\x74\x61\x74\x65\x2a\x3a\x0d\x72\x61\x6e\x64\x6f"
  "\x6d\x20\x73\x74\x61\x74\x65\x08\x0f\x2a\x72\x61\x6e\x64\x6f\x6d"
  "\x2d\x73\x74\x61\x74\x65\x2a\x02\x03\x15\x05\x21\x04\x22\x04\xd3"
  "\x01\x0e\x81\x83\x02\xd2\x01\x0c\x81\x83\x02\xd1\x01\x0a\x81\x85"
  "\x02\xd0\x01\x08\x81\x85\x02\xcf\x01\x06\x81\x85\x02\xce\x01\x04"
  "\x84\x06\x0d\x1c\x22\x02\x22\x02\x0a\x12\x03\x32\x2e\x39\x03\x31"
  "\x2e\x26\x25\x16\x64\x65\x66\x61\x75\x6c\x74\x2d\x72\x61\x6e\x64"
  "\x6f\x6d\x2d\x73\x6f\x75\x72\x63\x65\x39\x0f\x72\x61\x6e\x64\x6f"
  "\x6d\x2d\x69\x6e\x74\x65\x67\x65\x72\x21\x0c\x72\x61\x6e\x64\x6f"
  "\x6d\x2d\x72\x65\x61\x6c\x12\x07\x26\x39\x04\x02\x2c\x03\x0d\x03"
  "\x2a\x04\xe7\x01\x2a\x81\x81\x02\xe6\x01\x28\x81\x81\x02\xe5\x01"
  "\x26\x81\x83\x02\xe4\x01\x24\x81\x81\x02\xe3\x01\x22\x81\x81\x02"
  "\xe2\x01\x20\x81\x83\x02\xe1\x01\x1e\x81\x81\x02\xe0\x01\x1c\x81"
  "\x81\x02\xdf\x01\x1a\x81\x81\x02\xde\x01\x18\x81\x81\x02\xdd\x01"
  "\x16\x81\x83\x02\xdc\x01\x14\x81\x81\x02\xdb\x01\x12\x81\x81\x02"
  "\xda\x01\x10\x81\x83\x02\xd9\x01\x0e\x81\x83\x02\xd8\x01\x0c\x81"
  "\x83\x02\xd7\x01\x0a\x81\x83\x02\xd6\x01\x08\x81\x81\x02\xd5\x01"
  "\x06\x81\x81\x02\xd4\x01\x04\x82\x02\x29\x45\x0a\x02\x23\x07\x76"
  "\x65\x63\x74\x6f\x72\x07\x62\x6f\x72\x72\x6f\x77\x06\x69\x6e\x64"
  "\x65\x78\x02\x0d\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x74\x61\x74\x65"
  "\x38\x14\x65\x76\x65\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d\x72\x65"
  "\x73\x74\x61\x72\x74\x39\x04\x04\x14\x61\x64\x64\x2d\x65\x76\x65"
  "\x6e\x74\x2d\x72\x65\x63\x65\x69\x76\x65\x72\x21\x04\x19\x73\x74"
  "\x61\x6e\x64\x61\x72\x64\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d"
  "\x6d\x65\x74\x68\x6f\x64\x03\x19\x72\x61\x6e\x64\x6f\x6d\x2d\x73"
  "\x6f\x75\x72\x63\x65\x2d\x72\x61\x6e\x64\x6f\x6d\x69\x7a\x65\x21"
  "\x04\x25\x6e\x61\x6d\x65\x64\x2d\x73\x74\x72\x75\x63\x74\x75\x72"
  "\x65\x2f\x73\x65\x74\x2d\x74\x61\x67\x2d\x64\x65\x73\x63\x72\x69"
  "\x70\x74\x69\x6f\x6e\x21\x04\x3b\x0a\x1b\x6d\x61\x6b\x65\x2d\x64"
  "\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d"
  "\x74\x79\x70\x65\x07\xf4\x01\x1c\x82\x02\xf3\x01\x1a\x81\x89\x02"
  "\xf2\x01\x18\x81\x81\x02\xf1\x01\x16\x81\x83\x02\xf0\x01\x14\x81"
  "\x81\x02\xef\x01\x12\x81\x81\x02\xee\x01\x10\x81\x87\x02\xed\x01"
  "\x0e\x81\x81\x02\xec\x01\x0c\x81\x83\x02\xeb\x01\x0a\x82\x02\xea"
  "\x01\x08\x81\x81\x02\xe9\x01\x06\x81\x85\x02\xe8\x01\x04\x82\x02"
  "\x1b\x37\x3b\x23\x3b\x04\x0a\x04\x22\x04\x04\x13\x04\x46\x04\x44"
  "\x04\x43\x04\x42\x04\x41\x04\x40\x04\x38\x3d\x04\x3f\x04\x3e\x06"
  "\x3c\x04\x2f\x19\x24\x04\x3a\x04\x37\x04\x35\x04\x34\x04\x31\x04"
  "\x30\x04\x2e\x06\x1e\x04\x1f\x04\x29\x04\x27\x04\x23\x04\x1a\x04"
  "\x18\x04\x14\x04\x11\x04\x0c\x04\x09\x04\x0e\x17\x2c\x30\x1c\x66"
  "\x69\x6e\x61\x6c\x69\x7a\x65\x2d\x72\x61\x6e\x64\x6f\x6d\x2d\x73"
  "\x74\x61\x74\x65\x2d\x74\x79\x70\x65\x21\x14\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x12\x21"
  "\x39\x25\x26\x1c\x33\x45\x14\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x74"
  "\x61\x74\x65\x2d\x76\x65\x63\x74\x6f\x72\x19\x73\x65\x74\x2d\x72"
  "\x61\x6e\x64\x6f\x6d\x2d\x73\x74\x61\x74\x65\x2d\x62\x6f\x72\x72"
  "\x6f\x77\x21\x14\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x74\x61\x74\x65"
  "\x2d\x62\x6f\x72\x72\x6f\x77\x18\x73\x65\x74\x2d\x72\x61\x6e\x64"
  "\x6f\x6d\x2d\x73\x74\x61\x74\x65\x2d\x69\x6e\x64\x65\x78\x21\x13"
  "\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x74\x61\x74\x65\x2d\x69\x6e\x64"
  "\x65\x78\x11\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x74\x61\x74\x65\x2d"
  "\x74\x61\x67\x15\x13\x25\x6d\x61\x6b\x65\x2d\x72\x61\x6e\x64\x6f"
  "\x6d\x2d\x73\x74\x61\x74\x65\x32\x16\x0b\x65\x72\x73\x3a\x6c\x65"
  "\x6e\x67\x74\x68\x08\x65\x72\x73\x3a\x74\x61\x67\x2f\x2d\x36\x19"
  "\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x6f\x75\x72\x63\x65\x2d\x73\x74"
  "\x61\x74\x65\x2d\x73\x65\x74\x21\x13\x6d\x61\x6b\x65\x2d\x72\x61"
  "\x6e\x64\x6f\x6d\x2d\x73\x6f\x75\x72\x63\x65\x2c\x2b\x2a\x0d\x28"
  "\x1d\x1b\x17\x10\x0f\x20\x13\x69\x6e\x74\x3a\x72\x61\x6e\x64\x6f"
  "\x6d\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x0b\x03\x62\x2e\x02\x62\x02"
  "\x73\x02\x72\x30\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02"
  "\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
random_so_data_aee22c55faeb92d3 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_random_so_data_aee22c55faeb92d3 [0]))), (sizeof (prog_random_so_data_aee22c55faeb92d3)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("random.so", random_so_data_aee22c55faeb92d3)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("random.so", "3c1666d713c8bca7")
