/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:43-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_7 5
#define LABEL_1_8 7
#define LABEL_1_5 9
#define ENVIRONMENT_LABEL_1_3 20
#define DEBUGGING_LABEL_1_2 19
#define EXECUTE_CACHE_1_11 11
#define EXECUTE_CACHE_1_10 13
#define EXECUTE_CACHE_1_9 15
#define EXECUTE_CACHE_1_6 17
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
msort_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_1_4);
      goto merge_sort_4;

    case 1:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_sort_7)
DEFLABEL (merge_sort_4)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (label_8)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_4 5
#define LABEL_2_7 7
#define LABEL_2_6 9
#define LABEL_2_8 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_13 17
#define LABEL_2_14 19
#define LABEL_2_15 21
#define LABEL_2_16 23
#define LABEL_2_17 25
#define LABEL_2_18 27
#define LABEL_2_19 29
#define LABEL_2_20 31
#define LABEL_2_21 33
#define ENVIRONMENT_LABEL_2_3 47
#define DEBUGGING_LABEL_2_2 46
#define OBJECT_2_6 45
#define OBJECT_2_5 44
#define OBJECT_2_4 43
#define OBJECT_2_3 42
#define OBJECT_2_2 41
#define OBJECT_2_1 40
#define OBJECT_2_0 39
#define EXECUTE_CACHE_2_10 35
#define EXECUTE_CACHE_2_9 37
#define FREE_REFERENCES_LABEL_2_0 34
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
msort_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd62;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd14;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd120;
  machine_word Wrd128;
  machine_word Wrd123;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd113;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd95;
  machine_word Wrd103;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd86;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd161;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd157;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd180;
  machine_word Wrd189;
  machine_word Wrd183;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd169;
  machine_word Wrd166;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd173;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd148;
  machine_word Wrd156;
  machine_word Wrd151;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd132;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd141;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd72;
  machine_word Wrd190;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_2_4);
      goto merge_sortB_32;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_34;

    case 3:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto sort_subvector_30;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_18;

    case 9:
      current_block = (Rpc - LABEL_2_15);
      goto merge_27;

    case 10:
      current_block = (Rpc - LABEL_2_16);
      goto label_39;

    case 11:
      current_block = (Rpc - LABEL_2_17);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_2_18);
      goto label_37;

    case 13:
      current_block = (Rpc - LABEL_2_19);
      goto label_38;

    case 14:
      current_block = (Rpc - LABEL_2_20);
      goto label_35;

    case 15:
      current_block = (Rpc - LABEL_2_21);
      goto label_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_sortB_42)
DEFLABEL (merge_sortB_32)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_47;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);

DEFLABEL (label_47)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.pObj) = (& (Rsp [1]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_46;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Obj) = (MAKE_OBJECT (26, (Wrd22.uLng)));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_45)
  (Wrd30.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto sort_subvector_30;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_6);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (sort_subvector_43)
DEFLABEL (sort_subvector_30)
  INTERRUPT_CHECK (26, LABEL_2_11);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd11.Lng) = ((Wrd7.Lng) - (Wrd9.Lng));
  if ((Wrd11.Lng) > 1L)
    goto label_48;
  Rvl = (current_block [OBJECT_2_4]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd22.Lng) = ((Wrd9.Lng) + (Wrd7.Lng));
  (Wrd25.Lng) = (((Wrd22.Lng) < 0) ? (RIGHT_SHIFT (((Wrd22.Lng) + 1), 1)) : (RIGHT_SHIFT ((Wrd22.Lng), 1)));
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd26.Obj);
  Rdl = (& (Rsp [6]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [7]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd38.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd39.Obj);
  goto sort_subvector_30;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto sort_subvector_30;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  goto merge_27;

DEFLABEL (merge_44)
DEFLABEL (merge_27)
  DLINK_INTERRUPT_CHECK (25, LABEL_2_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [7]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_49;
  Rvl = (current_block [OBJECT_2_4]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_49)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if ((Wrd11.Lng) < (Wrd13.Lng))
    goto label_55;

DEFLABEL (label_54)
  (Wrd28.Obj) = (Rsp [5]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_53;
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_53;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd23.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_53;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd20.Obj));
  (Wrd19.pObj) = (& ((Wrd25.pObj) [(Wrd16.Lng)]));
  (Wrd14.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_52)
  (Wrd60.Obj) = (Rsp [4]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_51;
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 26))
    goto label_51;
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) (Wrd55.Lng)) < ((unsigned long) (Wrd59.Lng))))
    goto label_51;
  (Wrd48.uLng) = (OBJECT_DATUM (Wrd52.Obj));
  (Wrd51.pObj) = (& ((Wrd57.pObj) [(Wrd48.Lng)]));
  ((Wrd51.pObj) [1]) = (Wrd14.Obj);

DEFLABEL (label_50)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd41.Lng) + 1L);
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (Rsp [0]) = (Wrd39.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd46.Lng) = ((Wrd45.Lng) + 1L);
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  (Rsp [2]) = (Wrd43.Obj);
  goto merge_27;

DEFLABEL (label_51)
  (Wrd66.Obj) = (Rsp [4]);
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 3);

DEFLABEL (label_36)
  (Wrd62.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd62.Obj));
  goto label_50;

DEFLABEL (label_53)
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 2);

DEFLABEL (label_35)
  (Wrd30.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd14.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd72.Obj) = (Rsp [2]);
  if ((Wrd72.Obj) == (Wrd7.Obj))
    goto label_60;
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd93.Obj) = (Rsp [7]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 10))
    goto label_64;
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd86.uLng) == 26))
    goto label_64;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [0]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (! (((unsigned long) (Wrd11.Lng)) < ((unsigned long) (Wrd92.Lng))))
    goto label_64;
  (Wrd80.uLng) = (OBJECT_DATUM (Wrd10.Obj));
  (Wrd83.pObj) = (& ((Wrd90.pObj) [(Wrd80.Lng)]));
  (Wrd84.Obj) = ((Wrd83.pObj) [1]);
  (* (--Rsp)) = (Wrd84.Obj);

DEFLABEL (label_63)
  (Wrd118.Obj) = (Rsp [8]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 10))
    goto label_62;
  (Wrd110.Obj) = (Rsp [5]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 26))
    goto label_62;
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd110.Obj));
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [0]);
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  if (! (((unsigned long) (Wrd113.Lng)) < ((unsigned long) (Wrd117.Lng))))
    goto label_62;
  (Wrd105.uLng) = (OBJECT_DATUM (Wrd110.Obj));
  (Wrd108.pObj) = (& ((Wrd115.pObj) [(Wrd105.Lng)]));
  (Wrd109.Obj) = ((Wrd108.pObj) [1]);
  (* (--Rsp)) = (Wrd109.Obj);

DEFLABEL (label_61)
  (Wrd129.Obj) = (Rsp [12]);
  (Wrd130.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd131.Obj) = ((Wrd130.pObj) [1]);
  (* (--Rsp)) = (Wrd131.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (Wrd190.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd190.Obj));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_54;

DEFLABEL (label_60)
  (Wrd146.Obj) = (Rsp [5]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  if (! ((Wrd147.uLng) == 10))
    goto label_59;
  (Wrd138.Obj) = (Rsp [1]);
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if (! ((Wrd139.uLng) == 26))
    goto label_59;
  (Wrd141.Lng) = (FIXNUM_TO_LONG (Wrd138.Obj));
  (Wrd143.pObj) = (OBJECT_ADDRESS (Wrd146.Obj));
  (Wrd144.Obj) = ((Wrd143.pObj) [0]);
  (Wrd145.Lng) = (FIXNUM_TO_LONG (Wrd144.Obj));
  if (! (((unsigned long) (Wrd141.Lng)) < ((unsigned long) (Wrd145.Lng))))
    goto label_59;
  (Wrd134.uLng) = (OBJECT_DATUM (Wrd138.Obj));
  (Wrd137.pObj) = (& ((Wrd143.pObj) [(Wrd134.Lng)]));
  (Wrd132.Obj) = ((Wrd137.pObj) [1]);

DEFLABEL (label_58)
  (Wrd178.Obj) = (Rsp [4]);
  (Wrd179.uLng) = (OBJECT_TYPE (Wrd178.Obj));
  if (! ((Wrd179.uLng) == 10))
    goto label_57;
  (Wrd170.Obj) = (Rsp [0]);
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd170.Obj));
  if (! ((Wrd171.uLng) == 26))
    goto label_57;
  (Wrd173.Lng) = (FIXNUM_TO_LONG (Wrd170.Obj));
  (Wrd175.pObj) = (OBJECT_ADDRESS (Wrd178.Obj));
  (Wrd176.Obj) = ((Wrd175.pObj) [0]);
  (Wrd177.Lng) = (FIXNUM_TO_LONG (Wrd176.Obj));
  if (! (((unsigned long) (Wrd173.Lng)) < ((unsigned long) (Wrd177.Lng))))
    goto label_57;
  (Wrd166.uLng) = (OBJECT_DATUM (Wrd170.Obj));
  (Wrd169.pObj) = (& ((Wrd175.pObj) [(Wrd166.Lng)]));
  ((Wrd169.pObj) [1]) = (Wrd132.Obj);

DEFLABEL (label_56)
  (Wrd158.Obj) = (Rsp [0]);
  (Wrd159.Lng) = (FIXNUM_TO_LONG (Wrd158.Obj));
  (Wrd160.Lng) = ((Wrd159.Lng) + 1L);
  (Wrd157.Obj) = (LONG_TO_FIXNUM (Wrd160.Lng));
  (Rsp [0]) = (Wrd157.Obj);
  (Wrd162.Obj) = (Rsp [1]);
  (Wrd163.Lng) = (FIXNUM_TO_LONG (Wrd162.Obj));
  (Wrd164.Lng) = ((Wrd163.Lng) + 1L);
  (Wrd161.Obj) = (LONG_TO_FIXNUM (Wrd164.Lng));
  (Rsp [1]) = (Wrd161.Obj);
  goto merge_27;

DEFLABEL (label_57)
  (Wrd184.Obj) = (Rsp [4]);
  (Wrd185.Obj) = (Rsp [0]);
  (Wrd183.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd183.Obj);
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd189.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd185.Obj);
  (* (--Rsp)) = (Wrd184.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 3);

DEFLABEL (label_40)
  (Wrd180.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd180.Obj));
  goto label_56;

DEFLABEL (label_59)
  (Wrd152.Obj) = (Rsp [5]);
  (Wrd153.Obj) = (Rsp [1]);
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd151.Obj);
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (* (--Rsp)) = (Wrd153.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 2);

DEFLABEL (label_39)
  (Wrd148.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd148.Obj));
  (Wrd132.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_62)
  (Wrd124.Obj) = (Rsp [8]);
  (Wrd125.Obj) = (Rsp [5]);
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd123.Obj);
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 2);

DEFLABEL (label_38)
  (Wrd120.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd120.Obj));
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd99.Obj) = (Rsp [7]);
  (Wrd100.Obj) = (Rsp [3]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 2);

DEFLABEL (label_37)
  (Wrd95.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd95.Obj));
  (* (--Rsp)) = Rvl;
  goto label_63;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_11 15
#define ENVIRONMENT_LABEL_3 30
#define DEBUGGING_LABEL_2 29
#define PURIFICATION_ROOT 28
#define OBJECT_5 27
#define OBJECT_4 26
#define OBJECT_3 25
#define OBJECT_2 24
#define OBJECT_1 23
#define OBJECT_0 22
#define FREE_REFERENCE_1 17
#define FREE_REFERENCE_0 18
#define GLOBAL_EXECUTE_CACHE_5 20
#define FREE_REFERENCES_LABEL_0 16
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
msort_so_ac08cd2ead830e85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto expression_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_3)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_10])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_9)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_8)
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
      goto label_7;
    blocks = (current_block [OBJECT_5]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_7)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_13;
  Wrd8 = Wrd12;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (Rsp [2]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_msort_so_ac08cd2ead830e85 [2] =
  {
    { "msort_so_code_1", 4, msort_so_code_1 },
    { "msort_so_code_2", 16, msort_so_code_2 }
  };

int
decl_msort_so_ac08cd2ead830e85 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_msort_so_ac08cd2ead830e85);
  return (0);
}

DECLARE_COMPILED_CODE ("msort.so", 7, decl_msort_so_ac08cd2ead830e85, msort_so_ac08cd2ead830e85)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_msort_so_data_ac08cd2ead830e85 [560] =
  "\x34\x05\x7a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9\x28\x0d"
  "\x28\x0d\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbb\x1d\xb0\x82\x88\xc3\xc2\x1d\x0c\xb2\x80\xc1\x28\xb1\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xb9\x99\xb8\x88\xb0\x0d\xc3\x0d\xb2\x0d\xb8"
  "\x99\xb1\x2a\xb3\x2a\x99\x28\x0d\x26\xb0\xb2\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x54\x2f\x55"
  "\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72"
  "\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c"
  "\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75"
  "\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x6d\x73\x6f\x72\x74\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x03\x0c\x76\x65\x63\x74\x6f\x72\x2d"
  "\x63\x6f\x70\x79\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74"
  "\x6f\x72\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73\x74"
  "\x04\x0c\x6d\x65\x72\x67\x65\x2d\x73\x6f\x72\x74\x21\x05\x0b\x0a"
  "\x81\x85\x02\x0a\x08\x81\x89\x02\x09\x06\x81\x85\x02\x08\x04\x84"
  "\x06\x09\x15\x02\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21"
  "\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x02\x07\x76\x65\x63"
  "\x74\x6f\x72\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x03\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d"
  "\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x03\x1b\x22"
  "\xfd\xff\x03\x1a\x20\xfd\xff\x03\x19\x1e\xfd\xff\x03\x18\x1c\xfd"
  "\xff\x03\x17\x1a\xfd\xff\x03\x16\x18\xfd\xff\x03\x15\x16\xff\xff"
  "\x03\x14\x14\xfd\xff\x03\x13\x12\xfd\xff\x03\x12\x10\xfd\xff\x03"
  "\x11\x0e\x81\x8b\x02\x10\x0c\x81\x8d\x02\x0f\x0a\x81\x85\x02\x0e"
  "\x08\x81\x89\x02\x0d\x06\x84\x06\x0c\x04\x81\x85\x02\x21\x30\x06"
  "\x73\x6f\x72\x74\x21\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x05\x73\x6f\x72\x74\x0b\x6d\x65\x72\x67"
  "\x65\x2d\x73\x6f\x72\x74\x06\x04\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x07\x10\x80\x80\x04"
  "\x06\x0e\x81\x81\x02\x05\x0c\x81\x81\x02\x04\x0a\x81\x87\x02\x03"
  "\x08\x81\x83\x02\x02\x06\x81\x85\x02\x01\x04\x81\x83\x02\x0f\x1f";

SCHEME_OBJECT *
msort_so_data_ac08cd2ead830e85 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_msort_so_data_ac08cd2ead830e85 [0]))), (sizeof (prog_msort_so_data_ac08cd2ead830e85)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_11]));
}

DECLARE_COMPILED_DATA_NS ("msort.so", msort_so_data_ac08cd2ead830e85)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("msort.so", "84c10bb8a364e217")
