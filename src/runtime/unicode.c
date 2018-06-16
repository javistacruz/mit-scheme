/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:58-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define LABEL_1_9 9
#define LABEL_1_10 11
#define LABEL_1_12 13
#define LABEL_1_13 15
#define LABEL_1_15 17
#define LABEL_1_16 19
#define LABEL_1_17 21
#define LABEL_1_18 23
#define LABEL_1_19 25
#define LABEL_1_20 27
#define LABEL_1_22 29
#define LABEL_1_23 31
#define LABEL_1_24 33
#define LABEL_1_25 35
#define LABEL_1_26 37
#define LABEL_1_27 39
#define TAG_1_28 18
#define ENVIRONMENT_LABEL_1_3 72
#define DEBUGGING_LABEL_1_2 71
#define OBJECT_1_15 70
#define OBJECT_1_14 69
#define OBJECT_1_13 68
#define OBJECT_1_12 67
#define OBJECT_1_11 66
#define OBJECT_1_10 65
#define OBJECT_1_9 64
#define OBJECT_1_8 63
#define OBJECT_1_7 62
#define OBJECT_1_6 61
#define OBJECT_1_5 60
#define OBJECT_1_4 59
#define OBJECT_1_3 58
#define OBJECT_1_2 57
#define OBJECT_1_1 56
#define OBJECT_1_0 55
#define EXECUTE_CACHE_1_30 41
#define EXECUTE_CACHE_1_29 43
#define EXECUTE_CACHE_1_21 45
#define EXECUTE_CACHE_1_14 47
#define EXECUTE_CACHE_1_11 49
#define EXECUTE_CACHE_1_8 51
#define EXECUTE_CACHE_1_7 53
#define FREE_REFERENCES_LABEL_1_0 40
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd120;
  machine_word Wrd122;
  machine_word Wrd115;
  machine_word Wrd117;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd114;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto lambda_68;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_70;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_62;

    case 12:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_61;

    case 13:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_41;

    case 14:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_55;

    case 15:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_34;

    case 16:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_54;

    case 17:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_13;

    case 18:
      current_block = (Rpc - LABEL_1_27);
      goto lambda_73;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_72)
DEFLABEL (lambda_68)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_76;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_75)
  (Wrd17.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_74;
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (label_74)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_1_23);
  (Wrd9.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_1_25);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_27])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [8]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  ((Wrd16.pObj) [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_1_9]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_1_10]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (Wrd54.Obj) = (current_block [OBJECT_1_11]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_1_10]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_1_11]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd38.Obj) = (current_block [OBJECT_1_12]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd42.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd54.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd68.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (* (Rhp++)) = (Wrd74.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd85.pObj) = (& (Rhp [-2]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd85.pObj)));
  (Wrd86.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd83.Obj);
  (* (Rhp++)) = (Wrd86.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));
  (Wrd90.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd90.Obj);
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (Wrd97.Obj) = (current_block [OBJECT_1_13]);
  (* (Rhp++)) = (Wrd97.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (Wrd96.pObj) = (& (Rhp [-2]));
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd96.pObj)));
  (* (Rhp++)) = (Wrd94.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd100.pObj) = (& (Rhp [-2]));
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd100.pObj)));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd104.pObj) = (& (Rhp [-2]));
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd104.pObj)));
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd102.Obj);
  (Wrd109.pObj) = (& (Rhp [-2]));
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd109.pObj)));
  (Wrd114.Obj) = (current_block [OBJECT_1_14]);
  (* (Rhp++)) = (Wrd114.Obj);
  (* (Rhp++)) = (Wrd107.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (* (Rhp++)) = (Wrd111.Obj);
  (* (Rhp++)) = (Wrd98.Obj);
  (Wrd117.pObj) = (& (Rhp [-2]));
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd117.pObj)));
  (Wrd122.Obj) = (current_block [OBJECT_1_15]);
  (* (Rhp++)) = (Wrd122.Obj);
  (* (Rhp++)) = (Wrd115.Obj);
  (Wrd120.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd120.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (lambda_73)
  CLOSURE_HEADER (LABEL_1_27);

DEFLABEL (lambda_59)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_30]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define LABEL_2_5 7
#define ENVIRONMENT_LABEL_2_3 14
#define DEBUGGING_LABEL_2_2 13
#define EXECUTE_CACHE_2_8 9
#define EXECUTE_CACHE_2_6 11
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_2_4);
      goto guarantee_limited_index_3;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_limited_index_6)
DEFLABEL (guarantee_limited_index_3)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) > (Wrd8.Lng))
    goto label_8;

DEFLABEL (label_7)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_7);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_6 9
#define LABEL_3_8 11
#define ENVIRONMENT_LABEL_3_3 21
#define DEBUGGING_LABEL_3_2 20
#define OBJECT_3_2 19
#define OBJECT_3_1 18
#define OBJECT_3_0 17
#define EXECUTE_CACHE_3_10 13
#define EXECUTE_CACHE_3_9 15
#define FREE_REFERENCES_LABEL_3_0 12
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_3_4);
      goto encoded_string_length_9;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encoded_string_length_12)
DEFLABEL (encoded_string_length_9)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_7;

DEFLABEL (loop_13)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_3_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_14;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_7;

DEFLABEL (label_16)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_7);
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define ENVIRONMENT_LABEL_4_3 10
#define DEBUGGING_LABEL_4_2 9
#define OBJECT_4_0 8
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_4_4);
      goto encoded_string_validP_6;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto loop_4;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encoded_string_validP_9)
DEFLABEL (encoded_string_validP_6)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_4;

DEFLABEL (loop_10)
DEFLABEL (loop_4)
  INTERRUPT_CHECK (26, LABEL_4_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_11;
  Rvl = (current_block [OBJECT_4_0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto loop_4;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_7 7
#define LABEL_5_9 9
#define LABEL_5_11 11
#define ENVIRONMENT_LABEL_5_3 21
#define DEBUGGING_LABEL_5_2 20
#define OBJECT_5_0 19
#define EXECUTE_CACHE_5_12 13
#define EXECUTE_CACHE_5_10 15
#define EXECUTE_CACHE_5_8 17
#define FREE_REFERENCES_LABEL_5_0 12
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_5_4);
      goto coded_input_opener_5;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (coded_input_opener_8)
DEFLABEL (coded_input_opener_5)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x204, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_11);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_7 7
#define LABEL_6_9 9
#define LABEL_6_11 11
#define ENVIRONMENT_LABEL_6_3 21
#define DEBUGGING_LABEL_6_2 20
#define OBJECT_6_0 19
#define EXECUTE_CACHE_6_12 13
#define EXECUTE_CACHE_6_10 15
#define EXECUTE_CACHE_6_8 17
#define FREE_REFERENCES_LABEL_6_0 12
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto coded_output_opener_5;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (coded_output_opener_8)
DEFLABEL (coded_output_opener_5)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_11);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define LABEL_7_7 7
#define ENVIRONMENT_LABEL_7_3 12
#define DEBUGGING_LABEL_7_2 11
#define EXECUTE_CACHE_7_8 9
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_7_4);
      goto ended_input_opener_2;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ended_input_opener_5)
DEFLABEL (ended_input_opener_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x204, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
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

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [0]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_7)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [0]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define TAG_8_6 1
#define LABEL_8_7 7
#define ENVIRONMENT_LABEL_8_3 12
#define DEBUGGING_LABEL_8_2 11
#define EXECUTE_CACHE_8_8 9
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_8_4);
      goto ended_output_opener_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ended_output_opener_5)
DEFLABEL (ended_output_opener_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_5])));
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

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_8_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [0]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_7)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [2]);
  (Rsp [0]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_7 7
#define LABEL_9_8 9
#define LABEL_9_9 11
#define ENVIRONMENT_LABEL_9_3 16
#define DEBUGGING_LABEL_9_2 15
#define EXECUTE_CACHE_9_10 13
#define FREE_REFERENCES_LABEL_9_0 12
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto input_string_caller_6;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (input_string_caller_9)
DEFLABEL (input_string_caller_6)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
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
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_7 7
#define LABEL_10_8 9
#define ENVIRONMENT_LABEL_10_3 14
#define DEBUGGING_LABEL_10_2 13
#define EXECUTE_CACHE_10_9 11
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_10_4);
      goto output_string_caller_4;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_string_caller_7)
DEFLABEL (output_string_caller_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto wide_string_contents_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_string_contents_3)
DEFLABEL (wide_string_contents_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

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

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define ENVIRONMENT_LABEL_12_3 17
#define DEBUGGING_LABEL_12_2 16
#define OBJECT_12_3 15
#define OBJECT_12_2 14
#define OBJECT_12_1 13
#define OBJECT_12_0 12
#define FREE_REFERENCE_12_0 11
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto wide_stringP_4;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_stringP_10)
DEFLABEL (wide_stringP_4)
  INTERRUPT_CHECK (26, LABEL_12_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
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
  Rvl = (current_block [OBJECT_12_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_12_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 13
#define DEBUGGING_LABEL_13_2 12
#define OBJECT_13_0 11
#define EXECUTE_CACHE_13_7 7
#define EXECUTE_CACHE_13_6 9
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto guarantee_wide_string_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_wide_string_4)
DEFLABEL (guarantee_wide_string_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_13_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 11
#define DEBUGGING_LABEL_14_2 10
#define OBJECT_14_2 9
#define OBJECT_14_1 8
#define OBJECT_14_0 7
#define EXECUTE_CACHE_14_5 5
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      goto error_not_wide_string_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_wide_string_5)
DEFLABEL (error_not_wide_string_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_14_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_14_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_5 3
#define LABEL_15_4 5
#define LABEL_15_6 7
#define ENVIRONMENT_LABEL_15_3 19
#define DEBUGGING_LABEL_15_2 18
#define OBJECT_15_2 17
#define OBJECT_15_1 16
#define OBJECT_15_0 15
#define EXECUTE_CACHE_15_9 9
#define EXECUTE_CACHE_15_8 11
#define EXECUTE_CACHE_15_7 13
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd19;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_15_4);
      goto make_wide_string_4;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_wide_string_7)
DEFLABEL (make_wide_string_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_15_0]))
    goto label_9;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_15_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_8)
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (label_9)
  (Wrd17.Obj) = (current_block [OBJECT_15_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_8 9
#define ENVIRONMENT_LABEL_16_3 21
#define DEBUGGING_LABEL_16_2 20
#define OBJECT_16_0 19
#define EXECUTE_CACHE_16_11 11
#define EXECUTE_CACHE_16_10 13
#define EXECUTE_CACHE_16_9 15
#define EXECUTE_CACHE_16_7 17
#define FREE_REFERENCES_LABEL_16_0 10
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_16_4);
      goto wide_string_3;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto lambda_0;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_string_6)
DEFLABEL (wide_string_3)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_16_6);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define ENVIRONMENT_LABEL_17_3 16
#define DEBUGGING_LABEL_17_2 15
#define OBJECT_17_3 14
#define OBJECT_17_2 13
#define OBJECT_17_1 12
#define OBJECT_17_0 11
#define EXECUTE_CACHE_17_6 9
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_17_4);
      goto wide_string_length_2;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_string_length_6)
DEFLABEL (wide_string_length_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_7;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  Rvl = (MAKE_OBJECT (26, (Wrd25.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_3]), 1);

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_17_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 10
#define DEBUGGING_LABEL_18_2 9
#define OBJECT_18_2 8
#define OBJECT_18_1 7
#define OBJECT_18_0 6
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_18_4);
      goto Z__wide_string_length_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__wide_string_length_5)
DEFLABEL (Z__wide_string_length_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_6;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  Rvl = (MAKE_OBJECT (26, (Wrd25.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_18_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_9 7
#define LABEL_19_7 9
#define LABEL_19_11 11
#define ENVIRONMENT_LABEL_19_3 24
#define DEBUGGING_LABEL_19_2 23
#define OBJECT_19_3 22
#define OBJECT_19_2 21
#define OBJECT_19_1 20
#define OBJECT_19_0 19
#define EXECUTE_CACHE_19_10 13
#define EXECUTE_CACHE_19_8 15
#define EXECUTE_CACHE_19_6 17
#define FREE_REFERENCES_LABEL_19_0 12
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd39;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
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
      goto wide_string_ref_4;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_19_11);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_string_ref_8)
DEFLABEL (wide_string_ref_4)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_9);

DEFLABEL (label_13)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_12;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd39.uLng) == 10)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 2);

DEFLABEL (label_10)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_9;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd33.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_9;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd28.pObj) = (& ((Wrd35.pObj) [(Wrd25.Lng)]));
  Rvl = ((Wrd28.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_19_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 10
#define DEBUGGING_LABEL_20_2 9
#define OBJECT_20_2 8
#define OBJECT_20_1 7
#define OBJECT_20_0 6
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd37;
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
      goto Z__wide_string_ref_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__wide_string_ref_5)
DEFLABEL (Z__wide_string_ref_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd37.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 2);

DEFLABEL (label_7)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_6;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd31.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_6;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd26.pObj) = (& ((Wrd33.pObj) [(Wrd23.Lng)]));
  Rvl = ((Wrd26.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_20_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_9 7
#define LABEL_21_7 9
#define LABEL_21_11 11
#define LABEL_21_13 13
#define ENVIRONMENT_LABEL_21_3 29
#define DEBUGGING_LABEL_21_2 28
#define OBJECT_21_4 27
#define OBJECT_21_3 26
#define OBJECT_21_2 25
#define OBJECT_21_1 24
#define OBJECT_21_0 23
#define EXECUTE_CACHE_21_12 15
#define EXECUTE_CACHE_21_10 17
#define EXECUTE_CACHE_21_8 19
#define EXECUTE_CACHE_21_6 21
#define FREE_REFERENCES_LABEL_21_0 14
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd38;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_21_4);
      goto wide_string_setB_5;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_21_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_21_13);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_string_setB_9)
DEFLABEL (wide_string_setB_5)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_11);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_13;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd38.uLng) == 10)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_4]), 3);

DEFLABEL (label_11)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_10;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) (Wrd32.Lng)) < ((unsigned long) (Wrd36.Lng))))
    goto label_10;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd26.pObj) = (& ((Wrd34.pObj) [(Wrd23.Lng)]));
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [1]) = (Wrd27.Obj);
  Rvl = (current_block [OBJECT_21_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_21_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_9);
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 11
#define DEBUGGING_LABEL_22_2 10
#define OBJECT_22_3 9
#define OBJECT_22_2 8
#define OBJECT_22_1 7
#define OBJECT_22_0 6
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_22_4);
      goto Z__wide_string_setB_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__wide_string_setB_5)
DEFLABEL (Z__wide_string_setB_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd38.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 3);

DEFLABEL (label_7)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_6;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) (Wrd32.Lng)) < ((unsigned long) (Wrd36.Lng))))
    goto label_6;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd26.pObj) = (& ((Wrd34.pObj) [(Wrd23.Lng)]));
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [1]) = (Wrd27.Obj);
  Rvl = (current_block [OBJECT_22_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_22_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_7 5
#define LABEL_23_5 7
#define LABEL_23_8 9
#define LABEL_23_9 11
#define ENVIRONMENT_LABEL_23_3 24
#define DEBUGGING_LABEL_23_2 23
#define OBJECT_23_3 22
#define OBJECT_23_2 21
#define OBJECT_23_1 20
#define OBJECT_23_0 19
#define EXECUTE_CACHE_23_11 13
#define EXECUTE_CACHE_23_10 15
#define EXECUTE_CACHE_23_6 17
#define FREE_REFERENCES_LABEL_23_0 12
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_23_4);
      goto wide_substring_8;

    case 1:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_23_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_substring_13)
DEFLABEL (wide_substring_8)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;

DEFLABEL (label_15)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_23_7);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (label_16)
  (Wrd7.Obj) = (Rsp [1]);
  if (! (INDEX_FIXNUM_P (Wrd7.Obj)))
    goto label_15;
  (Wrd15.Obj) = (Rsp [2]);
  if (! (INDEX_FIXNUM_P (Wrd15.Obj)))
    goto label_15;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if ((Wrd17.Lng) > (Wrd19.Lng))
    goto label_15;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_20;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd28.Lng))))
    goto label_20;
  (Wrd20.Obj) = ((Wrd26.pObj) [2]);

DEFLABEL (label_19)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_18;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd36.Obj) = (MAKE_OBJECT (26, (Wrd39.uLng)));

DEFLABEL (label_17)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if ((Wrd46.Lng) > (Wrd47.Lng))
    goto label_15;
  goto label_14;

DEFLABEL (label_18)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (label_11)
  (Wrd36.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (current_block [OBJECT_23_0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_10)
  (Wrd20.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define LABEL_24_10 13
#define LABEL_24_11 15
#define ENVIRONMENT_LABEL_24_3 26
#define DEBUGGING_LABEL_24_2 25
#define OBJECT_24_5 24
#define OBJECT_24_4 23
#define OBJECT_24_3 22
#define OBJECT_24_2 21
#define OBJECT_24_1 20
#define OBJECT_24_0 19
#define EXECUTE_CACHE_24_6 17
#define FREE_REFERENCES_LABEL_24_0 16
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd38;
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
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_24_4);
      goto Z__wide_substring_17;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto do_loop_13;

    case 5:
      current_block = (Rpc - LABEL_24_10);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_24_11);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__wide_substring_24)
DEFLABEL (Z__wide_substring_17)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd9.Lng) - (Wrd11.Lng));
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 62))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_29;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_28)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_27;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_27;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_26)
  (Wrd37.Obj) = (current_block [OBJECT_24_2]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd38.Obj);
  goto do_loop_13;

DEFLABEL (label_27)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_24_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_24_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (do_loop_25)
DEFLABEL (do_loop_13)
  INTERRUPT_CHECK (26, LABEL_24_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [7]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_31;
  (Wrd9.Obj) = (current_block [OBJECT_24_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_30;

DEFLABEL (label_31)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_30)
DEFLABEL (label_37)
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  Rsp = (& (Rsp [5]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_36;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_36;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_36;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd20.pObj) = (& ((Wrd26.pObj) [(Wrd17.Lng)]));
  (Wrd15.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_35)
  (Wrd58.Obj) = (Rsp [4]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_34;
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_34;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) (Wrd53.Lng)) < ((unsigned long) (Wrd57.Lng))))
    goto label_34;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd50.Obj));
  (Wrd49.pObj) = (& ((Wrd55.pObj) [(Wrd46.Lng)]));
  ((Wrd49.pObj) [1]) = (Wrd15.Obj);

DEFLABEL (label_33)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd39.Lng) = ((Wrd38.Lng) + 1L);
  (Wrd36.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (Rsp [1]) = (Wrd36.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd42.Lng) + 1L);
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (Rsp [2]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_13;

DEFLABEL (label_34)
  (Wrd60.Obj) = (Rsp [4]);
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_5]), 3);

DEFLABEL (label_22)
  goto label_33;

DEFLABEL (label_36)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_4]), 2);

DEFLABEL (label_21)
  (Wrd15.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define ENVIRONMENT_LABEL_25_3 13
#define DEBUGGING_LABEL_25_2 12
#define OBJECT_25_3 11
#define OBJECT_25_2 10
#define OBJECT_25_1 9
#define OBJECT_25_0 8
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto wide_string_indexP_3;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_string_indexP_8)
DEFLABEL (wide_string_indexP_3)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_15;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_15;
  (Wrd8.Obj) = ((Wrd14.pObj) [2]);

DEFLABEL (label_14)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_13;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd24.Obj) = (MAKE_OBJECT (26, (Wrd27.uLng)));

DEFLABEL (label_12)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! ((Wrd35.Lng) < (Wrd36.Lng)))
    goto label_10;
  Rvl = (current_block [OBJECT_25_3]);
  goto label_9;

DEFLABEL (label_13)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_6)
  (Wrd24.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_25_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 13
#define DEBUGGING_LABEL_26_2 12
#define OBJECT_26_0 11
#define EXECUTE_CACHE_26_7 7
#define EXECUTE_CACHE_26_6 9
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_26_4);
      goto guarantee_wide_string_index_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_wide_string_index_4)
DEFLABEL (guarantee_wide_string_index_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_26_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 9
#define DEBUGGING_LABEL_27_2 8
#define OBJECT_27_0 7
#define EXECUTE_CACHE_27_5 5
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto error_not_wide_string_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_wide_string_index_3)
DEFLABEL (error_not_wide_string_index_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define LABEL_28_8 9
#define ENVIRONMENT_LABEL_28_3 20
#define DEBUGGING_LABEL_28_2 19
#define OBJECT_28_3 18
#define OBJECT_28_2 17
#define OBJECT_28_1 16
#define OBJECT_28_0 15
#define EXECUTE_CACHE_28_9 11
#define EXECUTE_CACHE_28_6 13
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_28_4);
      goto guarantee_wide_substring_7;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_wide_substring_12)
DEFLABEL (guarantee_wide_substring_7)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (label_14)
  (Wrd7.Obj) = (Rsp [1]);
  if (! (INDEX_FIXNUM_P (Wrd7.Obj)))
    goto label_13;
  (Wrd8.Obj) = (Rsp [2]);
  if (! (INDEX_FIXNUM_P (Wrd8.Obj)))
    goto label_13;
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd10.Lng) > (Wrd12.Lng))
    goto label_13;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_18;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_18;
  (Wrd13.Obj) = ((Wrd19.pObj) [2]);

DEFLABEL (label_17)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_16;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd29.Obj) = (MAKE_OBJECT (26, (Wrd32.uLng)));

DEFLABEL (label_15)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if ((Wrd39.Lng) > (Wrd40.Lng))
    goto label_13;
  Rvl = (current_block [OBJECT_28_3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_10)
  (Wrd29.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (current_block [OBJECT_28_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_9)
  (Wrd13.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_8 7
#define LABEL_29_9 9
#define LABEL_29_7 11
#define ENVIRONMENT_LABEL_29_3 21
#define DEBUGGING_LABEL_29_2 20
#define OBJECT_29_2 19
#define OBJECT_29_1 18
#define OBJECT_29_0 17
#define EXECUTE_CACHE_29_10 13
#define EXECUTE_CACHE_29_6 15
#define FREE_REFERENCES_LABEL_29_0 12
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_29_4);
      goto guarantee_wide_substring_fail_4;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_wide_substring_fail_9)
DEFLABEL (guarantee_wide_substring_fail_4)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_13;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_13;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_12)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_11;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Obj) = (MAKE_OBJECT (26, (Wrd27.uLng)));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_10)
  (Wrd34.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_7);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (label_11)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_29_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define ENVIRONMENT_LABEL_30_3 15
#define DEBUGGING_LABEL_30_2 14
#define EXECUTE_CACHE_30_7 9
#define FREE_REFERENCE_30_1 12
#define FREE_REFERENCE_30_0 13
#define FREE_REFERENCES_LABEL_30_0 8
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_30_4);
      goto string__wide_string_0;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__wide_string_5)
DEFLABEL (string__wide_string_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define ENVIRONMENT_LABEL_31_3 15
#define DEBUGGING_LABEL_31_2 14
#define EXECUTE_CACHE_31_7 9
#define FREE_REFERENCE_31_1 12
#define FREE_REFERENCE_31_0 13
#define FREE_REFERENCES_LABEL_31_0 8
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_31_4);
      goto wide_string__string_0;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wide_string__string_5)
DEFLABEL (wide_string__string_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_7 9
#define LABEL_32_8 11
#define LABEL_32_10 13
#define LABEL_32_12 15
#define ENVIRONMENT_LABEL_32_3 26
#define DEBUGGING_LABEL_32_2 25
#define EXECUTE_CACHE_32_14 17
#define EXECUTE_CACHE_32_13 19
#define EXECUTE_CACHE_32_11 21
#define EXECUTE_CACHE_32_9 23
#define FREE_REFERENCES_LABEL_32_0 16
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_32_4);
      goto Z__convert_string_11;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_32_7);
      goto loop_8;

    case 4:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_32_12);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__convert_string_14)
DEFLABEL (Z__convert_string_11)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_6);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  goto loop_8;

DEFLABEL (loop_15)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_32_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_32_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rsp = (& (Rsp [1]));
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_14]));

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_32_12);
  Rsp = (& (Rsp [1]));
  goto loop_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define ENVIRONMENT_LABEL_33_3 14
#define DEBUGGING_LABEL_33_2 13
#define EXECUTE_CACHE_33_8 7
#define EXECUTE_CACHE_33_7 9
#define EXECUTE_CACHE_33_6 11
#define FREE_REFERENCES_LABEL_33_0 6
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_33_4);
      goto utf32_string__wide_string_1;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf32_string__wide_string_4)
DEFLABEL (utf32_string__wide_string_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define ENVIRONMENT_LABEL_34_3 15
#define DEBUGGING_LABEL_34_2 14
#define EXECUTE_CACHE_34_7 9
#define FREE_REFERENCE_34_1 12
#define FREE_REFERENCE_34_0 13
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_34_4);
      goto utf32_be_string__wide_string_0;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf32_be_string__wide_string_5)
DEFLABEL (utf32_be_string__wide_string_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define ENVIRONMENT_LABEL_35_3 15
#define DEBUGGING_LABEL_35_2 14
#define EXECUTE_CACHE_35_7 9
#define FREE_REFERENCE_35_1 12
#define FREE_REFERENCE_35_0 13
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_35_4);
      goto utf32_le_string__wide_string_0;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf32_le_string__wide_string_5)
DEFLABEL (utf32_le_string__wide_string_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define ENVIRONMENT_LABEL_36_3 14
#define DEBUGGING_LABEL_36_2 13
#define EXECUTE_CACHE_36_8 7
#define EXECUTE_CACHE_36_7 9
#define EXECUTE_CACHE_36_6 11
#define FREE_REFERENCES_LABEL_36_0 6
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_36_4);
      goto string__utf32_string_1;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__utf32_string_4)
DEFLABEL (string__utf32_string_1)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define ENVIRONMENT_LABEL_37_3 15
#define DEBUGGING_LABEL_37_2 14
#define EXECUTE_CACHE_37_7 9
#define FREE_REFERENCE_37_1 12
#define FREE_REFERENCE_37_0 13
#define FREE_REFERENCES_LABEL_37_0 8
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_37_4);
      goto string__utf32_be_string_0;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__utf32_be_string_5)
DEFLABEL (string__utf32_be_string_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define ENVIRONMENT_LABEL_38_3 15
#define DEBUGGING_LABEL_38_2 14
#define EXECUTE_CACHE_38_7 9
#define FREE_REFERENCE_38_1 12
#define FREE_REFERENCE_38_0 13
#define FREE_REFERENCES_LABEL_38_0 8
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_38_4);
      goto string__utf32_le_string_0;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__utf32_le_string_5)
DEFLABEL (string__utf32_le_string_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define ENVIRONMENT_LABEL_39_3 14
#define DEBUGGING_LABEL_39_2 13
#define EXECUTE_CACHE_39_8 7
#define EXECUTE_CACHE_39_7 9
#define EXECUTE_CACHE_39_6 11
#define FREE_REFERENCES_LABEL_39_0 6
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_39_4);
      goto utf32_string_length_1;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf32_string_length_4)
DEFLABEL (utf32_string_length_1)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define ENVIRONMENT_LABEL_40_3 14
#define DEBUGGING_LABEL_40_2 13
#define OBJECT_40_1 12
#define OBJECT_40_0 11
#define EXECUTE_CACHE_40_6 7
#define FREE_REFERENCE_40_0 10
#define FREE_REFERENCES_LABEL_40_0 6
#define NUMBER_OF_LINKER_SECTIONS_40_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_40_4);
      goto utf32_be_string_length_0;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf32_be_string_length_4)
DEFLABEL (utf32_be_string_length_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_6;
  Wrd10 = Wrd14;

DEFLABEL (label_5)
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_40_1]);
  (Rsp [5]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_5])), (Wrd11.pObj));

DEFLABEL (label_2)
  (Wrd10.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define ENVIRONMENT_LABEL_41_3 14
#define DEBUGGING_LABEL_41_2 13
#define OBJECT_41_1 12
#define OBJECT_41_0 11
#define EXECUTE_CACHE_41_6 7
#define FREE_REFERENCE_41_0 10
#define FREE_REFERENCES_LABEL_41_0 6
#define NUMBER_OF_LINKER_SECTIONS_41_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_41_4);
      goto utf32_le_string_length_0;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf32_le_string_length_4)
DEFLABEL (utf32_le_string_length_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_6;
  Wrd10 = Wrd14;

DEFLABEL (label_5)
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_41_1]);
  (Rsp [5]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_5])), (Wrd11.pObj));

DEFLABEL (label_2)
  (Wrd10.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_7 5
#define LABEL_42_8 7
#define LABEL_42_5 9
#define LABEL_42_9 11
#define LABEL_42_14 13
#define LABEL_42_10 15
#define TAG_42_11 6
#define ENVIRONMENT_LABEL_42_3 29
#define DEBUGGING_LABEL_42_2 28
#define OBJECT_42_2 27
#define OBJECT_42_1 26
#define OBJECT_42_0 25
#define EXECUTE_CACHE_42_15 17
#define EXECUTE_CACHE_42_13 19
#define EXECUTE_CACHE_42_12 21
#define EXECUTE_CACHE_42_6 23
#define FREE_REFERENCES_LABEL_42_0 16
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_42_4);
      goto Z__utf32_string_length_9;

    case 1:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_42_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_42_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_42_14);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_42_10);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__utf32_string_length_14)
DEFLABEL (Z__utf32_string_length_9)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == (current_block [OBJECT_42_0]))
    goto label_21;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 30))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_19)
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_18)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  if ((Wrd40.Obj) == (current_block [OBJECT_42_0]))
    goto label_17;
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd44.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_42_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_16)
  (Wrd49.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd50.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd53.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_10])));
  Rhp += 1;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd53.pObj)));
  Wrd54 = Wrd53;
  (Wrd55.Obj) = (Rsp [6]);
  ((Wrd54.pObj) [2]) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [7]);
  (Rsp [6]) = (Wrd56.Obj);
  (Rsp [7]) = (Wrd52.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (label_17)
  (Wrd48.Obj) = (current_block [OBJECT_42_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_16;

DEFLABEL (label_20)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_23;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd26.Obj) = (MAKE_OBJECT (26, (Wrd30.uLng)));

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd26.Obj);
  goto label_18;

DEFLABEL (label_23)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (label_12)
  (Wrd26.Obj) = Rvl;
  goto label_22;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_42_10);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_15]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define ENVIRONMENT_LABEL_43_3 14
#define DEBUGGING_LABEL_43_2 13
#define EXECUTE_CACHE_43_8 7
#define EXECUTE_CACHE_43_7 9
#define EXECUTE_CACHE_43_6 11
#define FREE_REFERENCES_LABEL_43_0 6
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_43_4);
      goto utf32_string_validP_1;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf32_string_validP_4)
DEFLABEL (utf32_string_validP_1)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define ENVIRONMENT_LABEL_44_3 13
#define DEBUGGING_LABEL_44_2 12
#define OBJECT_44_0 11
#define EXECUTE_CACHE_44_6 7
#define FREE_REFERENCE_44_0 10
#define FREE_REFERENCES_LABEL_44_0 6
#define NUMBER_OF_LINKER_SECTIONS_44_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_44_4);
      goto utf32_be_string_validP_0;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf32_be_string_validP_4)
DEFLABEL (utf32_be_string_validP_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_6;
  Wrd9 = Wrd13;

DEFLABEL (label_5)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_44_0]);
  (Rsp [4]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define ENVIRONMENT_LABEL_45_3 13
#define DEBUGGING_LABEL_45_2 12
#define OBJECT_45_0 11
#define EXECUTE_CACHE_45_6 7
#define FREE_REFERENCE_45_0 10
#define FREE_REFERENCES_LABEL_45_0 6
#define NUMBER_OF_LINKER_SECTIONS_45_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_45_4);
      goto utf32_le_string_validP_0;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf32_le_string_validP_4)
DEFLABEL (utf32_le_string_validP_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_6;
  Wrd9 = Wrd13;

DEFLABEL (label_5)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_45_0]);
  (Rsp [4]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_7 5
#define LABEL_46_8 7
#define LABEL_46_5 9
#define LABEL_46_9 11
#define LABEL_46_14 13
#define LABEL_46_10 15
#define TAG_46_11 6
#define ENVIRONMENT_LABEL_46_3 29
#define DEBUGGING_LABEL_46_2 28
#define OBJECT_46_2 27
#define OBJECT_46_1 26
#define OBJECT_46_0 25
#define EXECUTE_CACHE_46_15 17
#define EXECUTE_CACHE_46_13 19
#define EXECUTE_CACHE_46_12 21
#define EXECUTE_CACHE_46_6 23
#define FREE_REFERENCES_LABEL_46_0 16
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_46_4);
      goto Z__utf32_string_validP_9;

    case 1:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_46_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_46_14);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_46_10);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__utf32_string_validP_14)
DEFLABEL (Z__utf32_string_validP_9)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == (current_block [OBJECT_46_0]))
    goto label_21;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 30))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_19)
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_46_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_18)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  if ((Wrd40.Obj) == (current_block [OBJECT_46_0]))
    goto label_17;
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd44.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_46_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_16)
  (Wrd49.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd50.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd53.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_10])));
  Rhp += 1;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd53.pObj)));
  Wrd54 = Wrd53;
  (Wrd55.Obj) = (Rsp [5]);
  ((Wrd54.pObj) [2]) = (Wrd55.Obj);
  (Rsp [6]) = (Wrd52.Obj);
  (Wrd56.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd56.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_12]));

DEFLABEL (label_17)
  (Wrd48.Obj) = (current_block [OBJECT_46_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_16;

DEFLABEL (label_20)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_23;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd26.Obj) = (MAKE_OBJECT (26, (Wrd30.uLng)));

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd26.Obj);
  goto label_18;

DEFLABEL (label_23)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 1);

DEFLABEL (label_12)
  (Wrd26.Obj) = Rvl;
  goto label_22;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_46_10);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_15]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_6 7
#define LABEL_47_7 9
#define ENVIRONMENT_LABEL_47_3 12
#define DEBUGGING_LABEL_47_2 11
#define OBJECT_47_0 10
#define FREE_REFERENCES_LABEL_47_0 10
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_47_4);
      goto utf32_be_octets__code_point_5;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_47_7);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf32_be_octets__code_point_11)
DEFLABEL (utf32_be_octets__code_point_5)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd10.Lng) = (LEFT_SHIFT ((Wrd7.Lng), 8));
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_19;
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_19;
  Wrd21 = Wrd10;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd21.Lng) + (Wrd23.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_19;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));

DEFLABEL (label_18)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd29.Lng) = (LEFT_SHIFT ((Wrd26.Lng), 16));
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_17;
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_17;
  Wrd39 = Wrd29;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd38.Lng) = ((Wrd39.Lng) + (Wrd40.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd38.Lng)))
    goto label_17;
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));

DEFLABEL (label_16)
  (Rsp [3]) = (Wrd35.Obj);
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_15;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (multiply_with_overflow ((Wrd51.Lng), 16777216, (& (Wrd49.Lng))))
    goto label_15;
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd46.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 26)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_13)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_12;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd59.Lng) = ((Wrd61.Lng) + (Wrd63.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd59.Lng)))
    goto label_12;
  Rvl = (LONG_TO_FIXNUM (Wrd59.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_47_0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_9)
  (Wrd46.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_8)
  (Wrd35.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_7)
  (Wrd16.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_7 9
#define ENVIRONMENT_LABEL_48_3 12
#define DEBUGGING_LABEL_48_2 11
#define OBJECT_48_0 10
#define FREE_REFERENCES_LABEL_48_0 10
#define NUMBER_OF_LINKER_SECTIONS_48_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_48_4);
      goto utf32_le_octets__code_point_5;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_48_7);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf32_le_octets__code_point_11)
DEFLABEL (utf32_le_octets__code_point_5)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd10.Lng) = (LEFT_SHIFT ((Wrd7.Lng), 8));
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_19;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_19;
  Wrd21 = Wrd10;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd21.Lng) + (Wrd23.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_19;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));

DEFLABEL (label_18)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd29.Lng) = (LEFT_SHIFT ((Wrd26.Lng), 16));
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_17;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_17;
  Wrd38 = Wrd29;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd37.Lng) = ((Wrd38.Lng) + (Wrd39.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd37.Lng)))
    goto label_17;
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_16)
  (Wrd47.Obj) = (Rsp [4]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_15;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (multiply_with_overflow ((Wrd51.Lng), 16777216, (& (Wrd49.Lng))))
    goto label_15;
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));

DEFLABEL (label_14)
  (Rsp [3]) = (Wrd46.Obj);
  (Wrd54.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd54.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 26)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_13)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_12;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd60.Lng) = ((Wrd62.Lng) + (Wrd64.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd60.Lng)))
    goto label_12;
  Rvl = (LONG_TO_FIXNUM (Wrd60.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [4]);
  (Wrd42.Obj) = (current_block [OBJECT_48_0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_9)
  (Wrd46.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_7)
  (Wrd16.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_7 5
#define LABEL_49_8 7
#define LABEL_49_9 9
#define LABEL_49_10 11
#define LABEL_49_5 13
#define LABEL_49_6 15
#define ENVIRONMENT_LABEL_49_3 21
#define DEBUGGING_LABEL_49_2 20
#define OBJECT_49_0 19
#define EXECUTE_CACHE_49_11 17
#define FREE_REFERENCES_LABEL_49_0 16
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd118;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd78;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_49_4);
      goto validate_utf32_char_15;

    case 1:
      current_block = (Rpc - LABEL_49_7);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_49_8);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_49_9);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_49_10);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_49_6);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (validate_utf32_char_22)
DEFLABEL (validate_utf32_char_15)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_24;
  Rvl = (Wrd5.Obj);

DEFLABEL (label_23)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd17.Lng) = ((Wrd6.Lng) + 4L);
  if ((Wrd17.Lng) > (Wrd8.Lng))
    goto label_36;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Lng) = ((Wrd6.Lng) + 3L);
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 30))
    goto label_35;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_35;
  Wrd40 = Wrd31;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) (Wrd40.Lng)) < ((unsigned long) (Wrd44.Lng))))
    goto label_35;
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd36.pChr) = (& ((Wrd42.pChr) [(Wrd33.Lng)]));
  (Wrd37.uLng) = ((unsigned long) (((unsigned char *) (Wrd36.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd38.Obj) = (MAKE_OBJECT (26, (Wrd37.uLng)));
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_34)
  (Wrd53.Obj) = (Rsp [4]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd57.Lng) = ((Wrd54.Lng) + 2L);
  (Wrd52.Obj) = (LONG_TO_FIXNUM (Wrd57.Lng));
  (Wrd71.Obj) = (Rsp [3]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 30))
    goto label_33;
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_33;
  Wrd66 = Wrd57;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [1]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) (Wrd66.Lng)) < ((unsigned long) (Wrd70.Lng))))
    goto label_33;
  (Wrd59.uLng) = (OBJECT_DATUM (Wrd52.Obj));
  (Wrd62.pChr) = (& ((Wrd68.pChr) [(Wrd59.Lng)]));
  (Wrd63.uLng) = ((unsigned long) (((unsigned char *) (Wrd62.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd64.Obj) = (MAKE_OBJECT (26, (Wrd63.uLng)));
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_32)
  (Wrd79.Obj) = (Rsp [5]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  (Wrd81.Lng) = ((Wrd80.Lng) + 1L);
  (Wrd78.Obj) = (LONG_TO_FIXNUM (Wrd81.Lng));
  (Wrd95.Obj) = (Rsp [4]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd96.uLng) == 30))
    goto label_31;
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd89.uLng) == 26))
    goto label_31;
  Wrd90 = Wrd81;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [1]);
  (Wrd94.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  if (! (((unsigned long) (Wrd90.Lng)) < ((unsigned long) (Wrd94.Lng))))
    goto label_31;
  (Wrd83.uLng) = (OBJECT_DATUM (Wrd78.Obj));
  (Wrd86.pChr) = (& ((Wrd92.pChr) [(Wrd83.Lng)]));
  (Wrd87.uLng) = ((unsigned long) (((unsigned char *) (Wrd86.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd88.Obj) = (MAKE_OBJECT (26, (Wrd87.uLng)));
  (* (--Rsp)) = (Wrd88.Obj);

DEFLABEL (label_30)
  (Wrd102.Obj) = (Rsp [6]);
  (Wrd116.Obj) = (Rsp [5]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 30))
    goto label_29;
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd110.uLng) == 26))
    goto label_29;
  (Wrd111.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd114.Obj) = ((Wrd113.pObj) [1]);
  (Wrd115.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  if (! (((unsigned long) (Wrd111.Lng)) < ((unsigned long) (Wrd115.Lng))))
    goto label_29;
  (Wrd104.uLng) = (OBJECT_DATUM (Wrd102.Obj));
  (Wrd107.pChr) = (& ((Wrd113.pChr) [(Wrd104.Lng)]));
  (Wrd108.uLng) = ((unsigned long) (((unsigned char *) (Wrd107.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd109.Obj) = (MAKE_OBJECT (26, (Wrd108.uLng)));
  (* (--Rsp)) = (Wrd109.Obj);

DEFLABEL (label_28)
  (Wrd123.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd123.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_49_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_11]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_49_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd12.Lng) = ((Wrd9.Lng) + 4L);
  Rvl = (LONG_TO_FIXNUM (Wrd12.Lng));
  goto label_25;

DEFLABEL (label_26)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_25)
DEFLABEL (label_27)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd118.Obj) = (Rsp [5]);
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd97.Obj) = (Rsp [4]);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd73.Obj) = (Rsp [3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define ENVIRONMENT_LABEL_50_3 8
#define DEBUGGING_LABEL_50_2 7
#define EXECUTE_CACHE_50_5 5
#define FREE_REFERENCES_LABEL_50_0 4
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_50_4);
      goto utf32_stringP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf32_stringP_4)
DEFLABEL (utf32_stringP_1)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define ENVIRONMENT_LABEL_51_3 8
#define DEBUGGING_LABEL_51_2 7
#define EXECUTE_CACHE_51_5 5
#define FREE_REFERENCES_LABEL_51_0 4
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_51_4);
      goto utf32_be_stringP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf32_be_stringP_4)
DEFLABEL (utf32_be_stringP_1)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define ENVIRONMENT_LABEL_52_3 8
#define DEBUGGING_LABEL_52_2 7
#define EXECUTE_CACHE_52_5 5
#define FREE_REFERENCES_LABEL_52_0 4
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto utf32_le_stringP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf32_le_stringP_4)
DEFLABEL (utf32_le_stringP_1)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define ENVIRONMENT_LABEL_53_3 13
#define DEBUGGING_LABEL_53_2 12
#define OBJECT_53_0 11
#define EXECUTE_CACHE_53_7 7
#define EXECUTE_CACHE_53_6 9
#define FREE_REFERENCES_LABEL_53_0 6
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto guarantee_utf32_string_1;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_utf32_string_4)
DEFLABEL (guarantee_utf32_string_1)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_53_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 11
#define DEBUGGING_LABEL_54_2 10
#define OBJECT_54_2 9
#define OBJECT_54_1 8
#define OBJECT_54_0 7
#define EXECUTE_CACHE_54_5 5
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_54_4);
      goto error_not_utf32_string_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_utf32_string_5)
DEFLABEL (error_not_utf32_string_2)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_54_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_54_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define ENVIRONMENT_LABEL_55_3 13
#define DEBUGGING_LABEL_55_2 12
#define OBJECT_55_0 11
#define EXECUTE_CACHE_55_7 7
#define EXECUTE_CACHE_55_6 9
#define FREE_REFERENCES_LABEL_55_0 6
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto guarantee_utf32_be_string_1;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_utf32_be_string_4)
DEFLABEL (guarantee_utf32_be_string_1)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_55_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 11
#define DEBUGGING_LABEL_56_2 10
#define OBJECT_56_2 9
#define OBJECT_56_1 8
#define OBJECT_56_0 7
#define EXECUTE_CACHE_56_5 5
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_56_4);
      goto error_not_utf32_be_string_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_utf32_be_string_5)
DEFLABEL (error_not_utf32_be_string_2)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_56_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_56_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define ENVIRONMENT_LABEL_57_3 13
#define DEBUGGING_LABEL_57_2 12
#define OBJECT_57_0 11
#define EXECUTE_CACHE_57_7 7
#define EXECUTE_CACHE_57_6 9
#define FREE_REFERENCES_LABEL_57_0 6
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto guarantee_utf32_le_string_1;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_utf32_le_string_4)
DEFLABEL (guarantee_utf32_le_string_1)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_57_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define ENVIRONMENT_LABEL_58_3 11
#define DEBUGGING_LABEL_58_2 10
#define OBJECT_58_2 9
#define OBJECT_58_1 8
#define OBJECT_58_0 7
#define EXECUTE_CACHE_58_5 5
#define FREE_REFERENCES_LABEL_58_0 4
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_58_4);
      goto error_not_utf32_le_string_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_utf32_le_string_5)
DEFLABEL (error_not_utf32_le_string_2)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_58_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_58_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_58_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define ENVIRONMENT_LABEL_59_3 14
#define DEBUGGING_LABEL_59_2 13
#define EXECUTE_CACHE_59_8 7
#define EXECUTE_CACHE_59_7 9
#define EXECUTE_CACHE_59_6 11
#define FREE_REFERENCES_LABEL_59_0 6
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_59_4);
      goto utf16_string__wide_string_1;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf16_string__wide_string_4)
DEFLABEL (utf16_string__wide_string_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_8]));

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_6 7
#define ENVIRONMENT_LABEL_60_3 15
#define DEBUGGING_LABEL_60_2 14
#define EXECUTE_CACHE_60_7 9
#define FREE_REFERENCE_60_1 12
#define FREE_REFERENCE_60_0 13
#define FREE_REFERENCES_LABEL_60_0 8
#define NUMBER_OF_LINKER_SECTIONS_60_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_60_4);
      goto utf16_be_string__wide_string_0;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_60_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf16_be_string__wide_string_5)
DEFLABEL (utf16_be_string__wide_string_0)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_6 7
#define ENVIRONMENT_LABEL_61_3 15
#define DEBUGGING_LABEL_61_2 14
#define EXECUTE_CACHE_61_7 9
#define FREE_REFERENCE_61_1 12
#define FREE_REFERENCE_61_0 13
#define FREE_REFERENCES_LABEL_61_0 8
#define NUMBER_OF_LINKER_SECTIONS_61_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_61_4);
      goto utf16_le_string__wide_string_0;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_61_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf16_le_string__wide_string_5)
DEFLABEL (utf16_le_string__wide_string_0)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define ENVIRONMENT_LABEL_62_3 14
#define DEBUGGING_LABEL_62_2 13
#define EXECUTE_CACHE_62_8 7
#define EXECUTE_CACHE_62_7 9
#define EXECUTE_CACHE_62_6 11
#define FREE_REFERENCES_LABEL_62_0 6
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_62_4);
      goto string__utf16_string_1;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__utf16_string_4)
DEFLABEL (string__utf16_string_1)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_8]));

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_6 7
#define ENVIRONMENT_LABEL_63_3 15
#define DEBUGGING_LABEL_63_2 14
#define EXECUTE_CACHE_63_7 9
#define FREE_REFERENCE_63_1 12
#define FREE_REFERENCE_63_0 13
#define FREE_REFERENCES_LABEL_63_0 8
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_63_4);
      goto string__utf16_be_string_0;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_63_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__utf16_be_string_5)
DEFLABEL (string__utf16_be_string_0)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_6 7
#define ENVIRONMENT_LABEL_64_3 15
#define DEBUGGING_LABEL_64_2 14
#define EXECUTE_CACHE_64_7 9
#define FREE_REFERENCE_64_1 12
#define FREE_REFERENCE_64_0 13
#define FREE_REFERENCES_LABEL_64_0 8
#define NUMBER_OF_LINKER_SECTIONS_64_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_64_4);
      goto string__utf16_le_string_0;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_64_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__utf16_le_string_5)
DEFLABEL (string__utf16_le_string_0)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define ENVIRONMENT_LABEL_65_3 14
#define DEBUGGING_LABEL_65_2 13
#define EXECUTE_CACHE_65_8 7
#define EXECUTE_CACHE_65_7 9
#define EXECUTE_CACHE_65_6 11
#define FREE_REFERENCES_LABEL_65_0 6
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_65_4);
      goto utf16_string_length_1;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf16_string_length_4)
DEFLABEL (utf16_string_length_1)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_8]));

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define ENVIRONMENT_LABEL_66_3 14
#define DEBUGGING_LABEL_66_2 13
#define OBJECT_66_1 12
#define OBJECT_66_0 11
#define EXECUTE_CACHE_66_6 7
#define FREE_REFERENCE_66_0 10
#define FREE_REFERENCES_LABEL_66_0 6
#define NUMBER_OF_LINKER_SECTIONS_66_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_66_4);
      goto utf16_be_string_length_0;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf16_be_string_length_4)
DEFLABEL (utf16_be_string_length_0)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66_0]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_6;
  Wrd10 = Wrd14;

DEFLABEL (label_5)
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_66_1]);
  (Rsp [5]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_5])), (Wrd11.pObj));

DEFLABEL (label_2)
  (Wrd10.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define ENVIRONMENT_LABEL_67_3 14
#define DEBUGGING_LABEL_67_2 13
#define OBJECT_67_1 12
#define OBJECT_67_0 11
#define EXECUTE_CACHE_67_6 7
#define FREE_REFERENCE_67_0 10
#define FREE_REFERENCES_LABEL_67_0 6
#define NUMBER_OF_LINKER_SECTIONS_67_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_67_4);
      goto utf16_le_string_length_0;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf16_le_string_length_4)
DEFLABEL (utf16_le_string_length_0)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67_0]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_6;
  Wrd10 = Wrd14;

DEFLABEL (label_5)
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_67_1]);
  (Rsp [5]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_5])), (Wrd11.pObj));

DEFLABEL (label_2)
  (Wrd10.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_7 5
#define LABEL_68_8 7
#define LABEL_68_5 9
#define LABEL_68_9 11
#define LABEL_68_14 13
#define LABEL_68_10 15
#define TAG_68_11 6
#define ENVIRONMENT_LABEL_68_3 29
#define DEBUGGING_LABEL_68_2 28
#define OBJECT_68_2 27
#define OBJECT_68_1 26
#define OBJECT_68_0 25
#define EXECUTE_CACHE_68_15 17
#define EXECUTE_CACHE_68_13 19
#define EXECUTE_CACHE_68_12 21
#define EXECUTE_CACHE_68_6 23
#define FREE_REFERENCES_LABEL_68_0 16
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_68_4);
      goto Z__utf16_string_length_9;

    case 1:
      current_block = (Rpc - LABEL_68_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_68_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_68_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_68_14);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_68_10);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__utf16_string_length_14)
DEFLABEL (Z__utf16_string_length_9)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == (current_block [OBJECT_68_0]))
    goto label_21;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 30))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_19)
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_68_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_18)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  if ((Wrd40.Obj) == (current_block [OBJECT_68_0]))
    goto label_17;
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd44.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_68_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_16)
  (Wrd49.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd50.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd53.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_68_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_68_10])));
  Rhp += 1;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd53.pObj)));
  Wrd54 = Wrd53;
  (Wrd55.Obj) = (Rsp [6]);
  ((Wrd54.pObj) [2]) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [7]);
  (Rsp [6]) = (Wrd56.Obj);
  (Rsp [7]) = (Wrd52.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_12]));

DEFLABEL (label_17)
  (Wrd48.Obj) = (current_block [OBJECT_68_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_16;

DEFLABEL (label_20)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_23;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd26.Obj) = (MAKE_OBJECT (26, (Wrd30.uLng)));

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd26.Obj);
  goto label_18;

DEFLABEL (label_23)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 1);

DEFLABEL (label_12)
  (Wrd26.Obj) = Rvl;
  goto label_22;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_68_10);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_15]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define ENVIRONMENT_LABEL_69_3 14
#define DEBUGGING_LABEL_69_2 13
#define EXECUTE_CACHE_69_8 7
#define EXECUTE_CACHE_69_7 9
#define EXECUTE_CACHE_69_6 11
#define FREE_REFERENCES_LABEL_69_0 6
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_69_4);
      goto utf16_string_validP_1;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf16_string_validP_4)
DEFLABEL (utf16_string_validP_1)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_69_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_8]));

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define ENVIRONMENT_LABEL_70_3 13
#define DEBUGGING_LABEL_70_2 12
#define OBJECT_70_0 11
#define EXECUTE_CACHE_70_6 7
#define FREE_REFERENCE_70_0 10
#define FREE_REFERENCES_LABEL_70_0 6
#define NUMBER_OF_LINKER_SECTIONS_70_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_70_4);
      goto utf16_be_string_validP_0;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf16_be_string_validP_4)
DEFLABEL (utf16_be_string_validP_0)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_6;
  Wrd9 = Wrd13;

DEFLABEL (label_5)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_70_0]);
  (Rsp [4]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define ENVIRONMENT_LABEL_71_3 13
#define DEBUGGING_LABEL_71_2 12
#define OBJECT_71_0 11
#define EXECUTE_CACHE_71_6 7
#define FREE_REFERENCE_71_0 10
#define FREE_REFERENCES_LABEL_71_0 6
#define NUMBER_OF_LINKER_SECTIONS_71_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_71_4);
      goto utf16_le_string_validP_0;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf16_le_string_validP_4)
DEFLABEL (utf16_le_string_validP_0)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_6;
  Wrd9 = Wrd13;

DEFLABEL (label_5)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_71_0]);
  (Rsp [4]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_7 5
#define LABEL_72_8 7
#define LABEL_72_5 9
#define LABEL_72_9 11
#define LABEL_72_14 13
#define LABEL_72_10 15
#define TAG_72_11 6
#define ENVIRONMENT_LABEL_72_3 29
#define DEBUGGING_LABEL_72_2 28
#define OBJECT_72_2 27
#define OBJECT_72_1 26
#define OBJECT_72_0 25
#define EXECUTE_CACHE_72_15 17
#define EXECUTE_CACHE_72_13 19
#define EXECUTE_CACHE_72_12 21
#define EXECUTE_CACHE_72_6 23
#define FREE_REFERENCES_LABEL_72_0 16
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_72_4);
      goto Z__utf16_string_validP_9;

    case 1:
      current_block = (Rpc - LABEL_72_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_72_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_72_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_72_14);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_72_10);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__utf16_string_validP_14)
DEFLABEL (Z__utf16_string_validP_9)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == (current_block [OBJECT_72_0]))
    goto label_21;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 30))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_19)
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_72_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_18)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  if ((Wrd40.Obj) == (current_block [OBJECT_72_0]))
    goto label_17;
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd44.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_72_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_16)
  (Wrd49.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd50.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd53.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_72_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_72_10])));
  Rhp += 1;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd53.pObj)));
  Wrd54 = Wrd53;
  (Wrd55.Obj) = (Rsp [5]);
  ((Wrd54.pObj) [2]) = (Wrd55.Obj);
  (Rsp [6]) = (Wrd52.Obj);
  (Wrd56.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd56.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_12]));

DEFLABEL (label_17)
  (Wrd48.Obj) = (current_block [OBJECT_72_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_16;

DEFLABEL (label_20)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_23;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd26.Obj) = (MAKE_OBJECT (26, (Wrd30.uLng)));

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd26.Obj);
  goto label_18;

DEFLABEL (label_23)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 1);

DEFLABEL (label_12)
  (Wrd26.Obj) = Rvl;
  goto label_22;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_72_10);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_15]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_6 5
#define LABEL_73_7 7
#define LABEL_73_5 9
#define LABEL_73_8 11
#define LABEL_73_14 13
#define LABEL_73_15 15
#define LABEL_73_12 17
#define LABEL_73_13 19
#define LABEL_73_10 21
#define ENVIRONMENT_LABEL_73_3 31
#define DEBUGGING_LABEL_73_2 30
#define OBJECT_73_0 29
#define EXECUTE_CACHE_73_16 23
#define EXECUTE_CACHE_73_11 25
#define EXECUTE_CACHE_73_9 27
#define FREE_REFERENCES_LABEL_73_0 22
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd29;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_73_4);
      goto validate_utf16_char_21;

    case 1:
      current_block = (Rpc - LABEL_73_6);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_73_7);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_73_8);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_73_14);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_73_15);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_73_12);
      goto continuation_17;

    case 8:
      current_block = (Rpc - LABEL_73_13);
      goto continuation_16;

    case 9:
      current_block = (Rpc - LABEL_73_10);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (validate_utf16_char_28)
DEFLABEL (validate_utf16_char_21)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_30;
  Rvl = (Wrd5.Obj);

DEFLABEL (label_29)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd17.Lng) = ((Wrd6.Lng) + 2L);
  if ((Wrd17.Lng) > (Wrd8.Lng))
    goto label_47;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 30))
    goto label_46;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_46;
  Wrd35 = Wrd26;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd35.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_46;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd23.Obj));
  (Wrd31.pChr) = (& ((Wrd37.pChr) [(Wrd28.Lng)]));
  (Wrd32.uLng) = ((unsigned long) (((unsigned char *) (Wrd31.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd33.Obj) = (MAKE_OBJECT (26, (Wrd32.uLng)));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_45)
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 30))
    goto label_44;
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_44;
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [1]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) (Wrd56.Lng)) < ((unsigned long) (Wrd60.Lng))))
    goto label_44;
  (Wrd49.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  (Wrd52.pChr) = (& ((Wrd58.pChr) [(Wrd49.Lng)]));
  (Wrd53.uLng) = ((unsigned long) (((unsigned char *) (Wrd52.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd54.Obj) = (MAKE_OBJECT (26, (Wrd53.uLng)));
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_43)
  (Wrd68.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd68.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_73_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_73_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_10]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_73_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd12.Lng) = ((Wrd9.Lng) + 2L);
  Rvl = (LONG_TO_FIXNUM (Wrd12.Lng));
  goto label_31;

DEFLABEL (label_32)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_31)
DEFLABEL (label_33)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd13.Lng) = ((Wrd9.Lng) + 4L);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! ((Wrd13.Lng) > (Wrd15.Lng)))
    goto label_35;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_13]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Lng) = ((Wrd9.Lng) + 3L);
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 30))
    goto label_42;
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_42;
  Wrd36 = Wrd27;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_42;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd32.pChr) = (& ((Wrd38.pChr) [(Wrd29.Lng)]));
  (Wrd33.uLng) = ((unsigned long) (((unsigned char *) (Wrd32.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd34.Obj) = (MAKE_OBJECT (26, (Wrd33.uLng)));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_41)
  (Wrd49.Obj) = (Rsp [5]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  (Wrd53.Lng) = ((Wrd50.Lng) + 2L);
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd53.Lng));
  (Wrd67.Obj) = (Rsp [4]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 30))
    goto label_40;
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_40;
  Wrd62 = Wrd53;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [1]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) (Wrd62.Lng)) < ((unsigned long) (Wrd66.Lng))))
    goto label_40;
  (Wrd55.uLng) = (OBJECT_DATUM (Wrd48.Obj));
  (Wrd58.pChr) = (& ((Wrd64.pChr) [(Wrd55.Lng)]));
  (Wrd59.uLng) = ((unsigned long) (((unsigned char *) (Wrd58.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd60.Obj) = (MAKE_OBJECT (26, (Wrd59.uLng)));
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_39)
  (Wrd74.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd74.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_73_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_16]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_73_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd12.Lng) = ((Wrd9.Lng) + 4L);
  Rvl = (LONG_TO_FIXNUM (Wrd12.Lng));
  goto label_36;

DEFLABEL (label_37)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_36)
DEFLABEL (label_38)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd69.Obj) = (Rsp [4]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_15]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_0]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_14]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_0]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd63.Obj) = (Rsp [2]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_7]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_0]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_6]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_0]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define ENVIRONMENT_LABEL_74_3 5
#define DEBUGGING_LABEL_74_2 4
#define FREE_REFERENCES_LABEL_74_0 4
#define NUMBER_OF_LINKER_SECTIONS_74_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_74_4);
      goto be_octets__digit16_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (be_octets__digit16_4)
DEFLABEL (be_octets__digit16_1)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd12.Lng) = (LEFT_SHIFT ((Wrd7.Lng), 8));
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd12.Lng) | (Wrd14.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd15.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define ENVIRONMENT_LABEL_75_3 5
#define DEBUGGING_LABEL_75_2 4
#define FREE_REFERENCES_LABEL_75_0 4
#define NUMBER_OF_LINKER_SECTIONS_75_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_75_4);
      goto le_octets__digit16_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (le_octets__digit16_4)
DEFLABEL (le_octets__digit16_1)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd12.Lng) = (LEFT_SHIFT ((Wrd7.Lng), 8));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd12.Lng) | (Wrd14.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd15.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define LABEL_76_7 7
#define ENVIRONMENT_LABEL_76_3 15
#define DEBUGGING_LABEL_76_2 14
#define OBJECT_76_0 13
#define EXECUTE_CACHE_76_8 9
#define EXECUTE_CACHE_76_6 11
#define FREE_REFERENCES_LABEL_76_0 8
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_76_4);
      goto combine_utf16_surrogates_6;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_76_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (combine_utf16_surrogates_9)
DEFLABEL (combine_utf16_surrogates_6)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_76_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_76_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_76_7);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd9.Lng) = 1023L;
  (Wrd12.Lng) = ((Wrd7.Lng) & (Wrd9.Lng));
  (Wrd15.Lng) = (LEFT_SHIFT ((Wrd12.Lng), 10));
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd21.Lng) = ((Wrd18.Lng) & (Wrd9.Lng));
  Wrd23 = Wrd15;
  (Wrd27.Lng) = ((Wrd23.Lng) + (Wrd21.Lng));
  (Wrd30.Lng) = ((Wrd27.Lng) + 65536L);
  Rvl = (LONG_TO_FIXNUM (Wrd30.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define LABEL_77_7 7
#define TAG_77_8 2
#define ENVIRONMENT_LABEL_77_3 13
#define DEBUGGING_LABEL_77_2 12
#define OBJECT_77_0 11
#define EXECUTE_CACHE_77_6 9
#define FREE_REFERENCES_LABEL_77_0 8
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_77_4);
      goto split_into_utf16_surrogates_10;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_77_7);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (split_into_utf16_surrogates_13)
DEFLABEL (split_into_utf16_surrogates_10)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) - 65536L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  Wrd13 = Wrd10;
  (Wrd18.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd13.Lng)), 10)));
  (Wrd20.Lng) = 1023L;
  (Wrd22.Lng) = ((Wrd18.Lng) & (Wrd20.Lng));
  (Wrd25.Lng) = ((Wrd22.Lng) | 55296L);
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd34.Lng) = ((Wrd13.Lng) & (Wrd20.Lng));
  (Wrd37.Lng) = ((Wrd34.Lng) | 56320L);
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  (Rsp [1]) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd40.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_77_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_77_7])));
  Rhp += 2;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd40.pObj)));
  Wrd43 = Wrd40;
  ((Wrd43.pObj) [2]) = (Wrd33.Obj);
  ((Wrd43.pObj) [3]) = (Wrd26.Obj);
  Rvl = (Wrd39.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_77_7);

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

#define LABEL_78_4 3
#define ENVIRONMENT_LABEL_78_3 8
#define DEBUGGING_LABEL_78_2 7
#define EXECUTE_CACHE_78_5 5
#define FREE_REFERENCES_LABEL_78_0 4
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_78_4);
      goto utf16_stringP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf16_stringP_4)
DEFLABEL (utf16_stringP_1)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define ENVIRONMENT_LABEL_79_3 8
#define DEBUGGING_LABEL_79_2 7
#define EXECUTE_CACHE_79_5 5
#define FREE_REFERENCES_LABEL_79_0 4
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_79_4);
      goto utf16_be_stringP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf16_be_stringP_4)
DEFLABEL (utf16_be_stringP_1)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define ENVIRONMENT_LABEL_80_3 8
#define DEBUGGING_LABEL_80_2 7
#define EXECUTE_CACHE_80_5 5
#define FREE_REFERENCES_LABEL_80_0 4
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_80_4);
      goto utf16_le_stringP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf16_le_stringP_4)
DEFLABEL (utf16_le_stringP_1)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define ENVIRONMENT_LABEL_81_3 7
#define DEBUGGING_LABEL_81_2 6
#define OBJECT_81_1 5
#define OBJECT_81_0 4
#define FREE_REFERENCES_LABEL_81_0 4
#define NUMBER_OF_LINKER_SECTIONS_81_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_81_4);
      goto utf16_high_surrogateP_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf16_high_surrogateP_5)
DEFLABEL (utf16_high_surrogateP_2)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_8;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.Lng) = ((Wrd12.Lng) & 64512L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  if (! ((Wrd8.Obj) == (current_block [OBJECT_81_0])))
    goto label_7;
  Rvl = (current_block [OBJECT_81_1]);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define ENVIRONMENT_LABEL_82_3 7
#define DEBUGGING_LABEL_82_2 6
#define OBJECT_82_1 5
#define OBJECT_82_0 4
#define FREE_REFERENCES_LABEL_82_0 4
#define NUMBER_OF_LINKER_SECTIONS_82_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_82_4);
      goto utf16_low_surrogateP_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf16_low_surrogateP_5)
DEFLABEL (utf16_low_surrogateP_2)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_8;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.Lng) = ((Wrd12.Lng) & 64512L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  if (! ((Wrd8.Obj) == (current_block [OBJECT_82_0])))
    goto label_7;
  Rvl = (current_block [OBJECT_82_1]);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define ENVIRONMENT_LABEL_83_3 13
#define DEBUGGING_LABEL_83_2 12
#define OBJECT_83_0 11
#define EXECUTE_CACHE_83_7 7
#define EXECUTE_CACHE_83_6 9
#define FREE_REFERENCES_LABEL_83_0 6
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_83_4);
      goto guarantee_utf16_string_1;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_utf16_string_4)
DEFLABEL (guarantee_utf16_string_1)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_83_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define ENVIRONMENT_LABEL_84_3 11
#define DEBUGGING_LABEL_84_2 10
#define OBJECT_84_2 9
#define OBJECT_84_1 8
#define OBJECT_84_0 7
#define EXECUTE_CACHE_84_5 5
#define FREE_REFERENCES_LABEL_84_0 4
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_84_4);
      goto error_not_utf16_string_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_utf16_string_5)
DEFLABEL (error_not_utf16_string_2)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_84_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_84_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_84_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define ENVIRONMENT_LABEL_85_3 13
#define DEBUGGING_LABEL_85_2 12
#define OBJECT_85_0 11
#define EXECUTE_CACHE_85_7 7
#define EXECUTE_CACHE_85_6 9
#define FREE_REFERENCES_LABEL_85_0 6
#define NUMBER_OF_LINKER_SECTIONS_85_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_85_4);
      goto guarantee_utf16_be_string_1;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_utf16_be_string_4)
DEFLABEL (guarantee_utf16_be_string_1)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_85_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_85_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define ENVIRONMENT_LABEL_86_3 11
#define DEBUGGING_LABEL_86_2 10
#define OBJECT_86_2 9
#define OBJECT_86_1 8
#define OBJECT_86_0 7
#define EXECUTE_CACHE_86_5 5
#define FREE_REFERENCES_LABEL_86_0 4
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_86_4);
      goto error_not_utf16_be_string_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_utf16_be_string_5)
DEFLABEL (error_not_utf16_be_string_2)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_86_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_86_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_86_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define ENVIRONMENT_LABEL_87_3 13
#define DEBUGGING_LABEL_87_2 12
#define OBJECT_87_0 11
#define EXECUTE_CACHE_87_7 7
#define EXECUTE_CACHE_87_6 9
#define FREE_REFERENCES_LABEL_87_0 6
#define NUMBER_OF_LINKER_SECTIONS_87_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_87_4);
      goto guarantee_utf16_le_string_1;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_utf16_le_string_4)
DEFLABEL (guarantee_utf16_le_string_1)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_87_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_87_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define ENVIRONMENT_LABEL_88_3 11
#define DEBUGGING_LABEL_88_2 10
#define OBJECT_88_2 9
#define OBJECT_88_1 8
#define OBJECT_88_0 7
#define EXECUTE_CACHE_88_5 5
#define FREE_REFERENCES_LABEL_88_0 4
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_88_4);
      goto error_not_utf16_le_string_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_utf16_le_string_5)
DEFLABEL (error_not_utf16_le_string_2)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_88_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_88_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_88_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define ENVIRONMENT_LABEL_89_3 13
#define DEBUGGING_LABEL_89_2 12
#define OBJECT_89_0 11
#define EXECUTE_CACHE_89_7 7
#define EXECUTE_CACHE_89_6 9
#define FREE_REFERENCES_LABEL_89_0 6
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_89_4);
      goto guarantee_utf16_high_surrogate_1;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_utf16_high_surrogate_4)
DEFLABEL (guarantee_utf16_high_surrogate_1)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_89_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_89_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define ENVIRONMENT_LABEL_90_3 11
#define DEBUGGING_LABEL_90_2 10
#define OBJECT_90_2 9
#define OBJECT_90_1 8
#define OBJECT_90_0 7
#define EXECUTE_CACHE_90_5 5
#define FREE_REFERENCES_LABEL_90_0 4
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_90_4);
      goto error_not_utf16_high_surrogate_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_utf16_high_surrogate_5)
DEFLABEL (error_not_utf16_high_surrogate_2)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_90_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_90_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_90_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define ENVIRONMENT_LABEL_91_3 13
#define DEBUGGING_LABEL_91_2 12
#define OBJECT_91_0 11
#define EXECUTE_CACHE_91_7 7
#define EXECUTE_CACHE_91_6 9
#define FREE_REFERENCES_LABEL_91_0 6
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_91_4);
      goto guarantee_utf16_low_surrogate_1;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_utf16_low_surrogate_4)
DEFLABEL (guarantee_utf16_low_surrogate_1)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_91_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_91_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define ENVIRONMENT_LABEL_92_3 11
#define DEBUGGING_LABEL_92_2 10
#define OBJECT_92_2 9
#define OBJECT_92_1 8
#define OBJECT_92_0 7
#define EXECUTE_CACHE_92_5 5
#define FREE_REFERENCES_LABEL_92_0 4
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_92_4);
      goto error_not_utf16_low_surrogate_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_utf16_low_surrogate_5)
DEFLABEL (error_not_utf16_low_surrogate_2)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_92_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_92_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_92_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define LABEL_93_6 7
#define ENVIRONMENT_LABEL_93_3 15
#define DEBUGGING_LABEL_93_2 14
#define EXECUTE_CACHE_93_7 9
#define FREE_REFERENCE_93_1 12
#define FREE_REFERENCE_93_0 13
#define FREE_REFERENCES_LABEL_93_0 8
#define NUMBER_OF_LINKER_SECTIONS_93_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_93_4);
      goto string__utf8_string_0;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_93_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__utf8_string_5)
DEFLABEL (string__utf8_string_0)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_93_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_93_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_6 7
#define ENVIRONMENT_LABEL_94_3 15
#define DEBUGGING_LABEL_94_2 14
#define EXECUTE_CACHE_94_7 9
#define FREE_REFERENCE_94_1 12
#define FREE_REFERENCE_94_0 13
#define FREE_REFERENCES_LABEL_94_0 8
#define NUMBER_OF_LINKER_SECTIONS_94_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_94_4);
      goto utf8_string__string_0;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_94_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf8_string__string_5)
DEFLABEL (utf8_string__string_0)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define LABEL_95_6 7
#define ENVIRONMENT_LABEL_95_3 15
#define DEBUGGING_LABEL_95_2 14
#define EXECUTE_CACHE_95_7 9
#define FREE_REFERENCE_95_1 12
#define FREE_REFERENCE_95_0 13
#define FREE_REFERENCES_LABEL_95_0 8
#define NUMBER_OF_LINKER_SECTIONS_95_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_95_4);
      goto utf8_string__wide_string_0;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_95_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf8_string__wide_string_5)
DEFLABEL (utf8_string__wide_string_0)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_95_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_95_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_7;
  Wrd16 = Wrd20;

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_95_6])), (Wrd17.pObj));

DEFLABEL (label_3)
  (Wrd16.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_95_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_7 5
#define LABEL_96_8 7
#define LABEL_96_5 9
#define LABEL_96_9 11
#define LABEL_96_10 13
#define LABEL_96_13 15
#define ENVIRONMENT_LABEL_96_3 31
#define DEBUGGING_LABEL_96_2 30
#define OBJECT_96_4 29
#define OBJECT_96_3 28
#define OBJECT_96_2 27
#define OBJECT_96_1 26
#define OBJECT_96_0 25
#define EXECUTE_CACHE_96_12 17
#define EXECUTE_CACHE_96_11 19
#define EXECUTE_CACHE_96_6 21
#define FREE_REFERENCE_96_0 24
#define FREE_REFERENCES_LABEL_96_0 16
#define NUMBER_OF_LINKER_SECTIONS_96_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_96_4);
      goto utf8_string_length_8;

    case 1:
      current_block = (Rpc - LABEL_96_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_96_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_96_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_96_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_96_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_96_13);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf8_string_length_14)
DEFLABEL (utf8_string_length_8)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_96_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_96_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == (current_block [OBJECT_96_1]))
    goto label_22;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd12.Obj) = (current_block [OBJECT_96_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 30))
    goto label_21;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_20)
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_96_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_19)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  if ((Wrd40.Obj) == (current_block [OBJECT_96_1]))
    goto label_18;
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd44.Obj) = (current_block [OBJECT_96_0]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_96_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_17)
  (Wrd49.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (current_block [OBJECT_96_4]);
  (Rsp [3]) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_96_0]);
  (Rsp [4]) = (Wrd51.Obj);
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_96_0]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_16;
  Wrd53 = Wrd57;

DEFLABEL (label_15)
  (Rsp [5]) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_11]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96_10])), (Wrd54.pObj));

DEFLABEL (label_12)
  (Wrd53.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd48.Obj) = (current_block [OBJECT_96_3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_17;

DEFLABEL (label_21)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_2]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_24;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd26.Obj) = (MAKE_OBJECT (26, (Wrd30.uLng)));

DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd26.Obj);
  goto label_19;

DEFLABEL (label_24)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_2]), 1);

DEFLABEL (label_11)
  (Wrd26.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define LABEL_97_7 5
#define LABEL_97_8 7
#define LABEL_97_5 9
#define LABEL_97_9 11
#define LABEL_97_10 13
#define LABEL_97_13 15
#define ENVIRONMENT_LABEL_97_3 30
#define DEBUGGING_LABEL_97_2 29
#define OBJECT_97_3 28
#define OBJECT_97_2 27
#define OBJECT_97_1 26
#define OBJECT_97_0 25
#define EXECUTE_CACHE_97_12 17
#define EXECUTE_CACHE_97_11 19
#define EXECUTE_CACHE_97_6 21
#define FREE_REFERENCE_97_0 24
#define FREE_REFERENCES_LABEL_97_0 16
#define NUMBER_OF_LINKER_SECTIONS_97_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_97_4);
      goto utf8_string_validP_8;

    case 1:
      current_block = (Rpc - LABEL_97_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_97_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_97_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_97_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_97_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_97_13);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf8_string_validP_14)
DEFLABEL (utf8_string_validP_8)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_97_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == (current_block [OBJECT_97_1]))
    goto label_22;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd12.Obj) = (current_block [OBJECT_97_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 30))
    goto label_21;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_20)
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_97_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_19)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  if ((Wrd40.Obj) == (current_block [OBJECT_97_1]))
    goto label_18;
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd44.Obj) = (current_block [OBJECT_97_0]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_97_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_17)
  (Wrd49.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd49.Obj);
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_97_0]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_16;
  Wrd51 = Wrd55;

DEFLABEL (label_15)
  (Rsp [4]) = (Wrd51.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd58.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_11]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_97_10])), (Wrd52.pObj));

DEFLABEL (label_12)
  (Wrd51.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd48.Obj) = (current_block [OBJECT_97_3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_17;

DEFLABEL (label_21)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_2]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_24;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd26.Obj) = (MAKE_OBJECT (26, (Wrd30.uLng)));

DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd26.Obj);
  goto label_19;

DEFLABEL (label_24)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_2]), 1);

DEFLABEL (label_11)
  (Wrd26.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define ENVIRONMENT_LABEL_98_3 8
#define DEBUGGING_LABEL_98_2 7
#define EXECUTE_CACHE_98_5 5
#define FREE_REFERENCES_LABEL_98_0 4
#define NUMBER_OF_LINKER_SECTIONS_98_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_98_4);
      goto utf8_stringP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (utf8_stringP_4)
DEFLABEL (utf8_stringP_1)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define LABEL_99_5 5
#define ENVIRONMENT_LABEL_99_3 13
#define DEBUGGING_LABEL_99_2 12
#define OBJECT_99_0 11
#define EXECUTE_CACHE_99_7 7
#define EXECUTE_CACHE_99_6 9
#define FREE_REFERENCES_LABEL_99_0 6
#define NUMBER_OF_LINKER_SECTIONS_99_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_99_4);
      goto guarantee_utf8_string_1;

    case 1:
      current_block = (Rpc - LABEL_99_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_utf8_string_4)
DEFLABEL (guarantee_utf8_string_1)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_99_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_99_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define ENVIRONMENT_LABEL_100_3 11
#define DEBUGGING_LABEL_100_2 10
#define OBJECT_100_2 9
#define OBJECT_100_1 8
#define OBJECT_100_0 7
#define EXECUTE_CACHE_100_5 5
#define FREE_REFERENCES_LABEL_100_0 4
#define NUMBER_OF_LINKER_SECTIONS_100_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_100_4);
      goto error_not_utf8_string_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_utf8_string_5)
DEFLABEL (error_not_utf8_string_2)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_100_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_100_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_100_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define LABEL_101_5 5
#define LABEL_101_6 7
#define LABEL_101_7 9
#define LABEL_101_8 11
#define LABEL_101_9 13
#define LABEL_101_11 15
#define LABEL_101_12 17
#define LABEL_101_14 19
#define LABEL_101_15 21
#define LABEL_101_16 23
#define LABEL_101_17 25
#define LABEL_101_10 27
#define ENVIRONMENT_LABEL_101_3 34
#define DEBUGGING_LABEL_101_2 33
#define OBJECT_101_1 32
#define OBJECT_101_0 31
#define EXECUTE_CACHE_101_13 29
#define FREE_REFERENCES_LABEL_101_0 28
#define NUMBER_OF_LINKER_SECTIONS_101_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd180;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd179;
  machine_word Wrd175;
  machine_word Wrd160;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd154;
  machine_word Wrd159;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd148;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd147;
  machine_word Wrd143;
  machine_word Wrd128;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd122;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd114;
  machine_word Wrd99;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd95;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd85;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd382;
  machine_word Wrd381;
  machine_word Wrd379;
  machine_word Wrd375;
  machine_word Wrd370;
  machine_word Wrd369;
  machine_word Wrd367;
  machine_word Wrd366;
  machine_word Wrd365;
  machine_word Wrd363;
  machine_word Wrd362;
  machine_word Wrd359;
  machine_word Wrd354;
  machine_word Wrd352;
  machine_word Wrd348;
  machine_word Wrd333;
  machine_word Wrd339;
  machine_word Wrd338;
  machine_word Wrd335;
  machine_word Wrd345;
  machine_word Wrd344;
  machine_word Wrd343;
  machine_word Wrd341;
  machine_word Wrd340;
  machine_word Wrd347;
  machine_word Wrd346;
  machine_word Wrd329;
  machine_word Wrd332;
  machine_word Wrd331;
  machine_word Wrd330;
  machine_word Wrd328;
  machine_word Wrd327;
  machine_word Wrd324;
  machine_word Wrd323;
  machine_word Wrd319;
  machine_word Wrd304;
  machine_word Wrd310;
  machine_word Wrd309;
  machine_word Wrd306;
  machine_word Wrd316;
  machine_word Wrd315;
  machine_word Wrd314;
  machine_word Wrd312;
  machine_word Wrd311;
  machine_word Wrd318;
  machine_word Wrd317;
  machine_word Wrd298;
  machine_word Wrd303;
  machine_word Wrd300;
  machine_word Wrd299;
  machine_word Wrd297;
  machine_word Wrd292;
  machine_word Wrd291;
  machine_word Wrd287;
  machine_word Wrd272;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd274;
  machine_word Wrd284;
  machine_word Wrd283;
  machine_word Wrd282;
  machine_word Wrd280;
  machine_word Wrd279;
  machine_word Wrd286;
  machine_word Wrd285;
  machine_word Wrd268;
  machine_word Wrd271;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd265;
  machine_word Wrd264;
  machine_word Wrd258;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd257;
  machine_word Wrd253;
  machine_word Wrd238;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd240;
  machine_word Wrd250;
  machine_word Wrd249;
  machine_word Wrd248;
  machine_word Wrd246;
  machine_word Wrd245;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd232;
  machine_word Wrd237;
  machine_word Wrd234;
  machine_word Wrd233;
  machine_word Wrd226;
  machine_word Wrd230;
  machine_word Wrd229;
  machine_word Wrd225;
  machine_word Wrd221;
  machine_word Wrd206;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd208;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd216;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd202;
  machine_word Wrd205;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd431;
  machine_word Wrd428;
  machine_word Wrd427;
  machine_word Wrd423;
  machine_word Wrd422;
  machine_word Wrd416;
  machine_word Wrd420;
  machine_word Wrd419;
  machine_word Wrd415;
  machine_word Wrd411;
  machine_word Wrd396;
  machine_word Wrd402;
  machine_word Wrd401;
  machine_word Wrd398;
  machine_word Wrd408;
  machine_word Wrd407;
  machine_word Wrd406;
  machine_word Wrd404;
  machine_word Wrd403;
  machine_word Wrd410;
  machine_word Wrd409;
  machine_word Wrd392;
  machine_word Wrd395;
  machine_word Wrd391;
  machine_word Wrd390;
  machine_word Wrd389;
  machine_word Wrd385;
  machine_word Wrd384;
  machine_word Wrd436;
  machine_word Wrd435;
  machine_word Wrd434;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_101_4);
      goto validate_utf8_char_64;

    case 1:
      current_block = (Rpc - LABEL_101_5);
      goto label_66;

    case 2:
      current_block = (Rpc - LABEL_101_6);
      goto label_76;

    case 3:
      current_block = (Rpc - LABEL_101_7);
      goto label_71;

    case 4:
      current_block = (Rpc - LABEL_101_8);
      goto label_72;

    case 5:
      current_block = (Rpc - LABEL_101_9);
      goto label_73;

    case 6:
      current_block = (Rpc - LABEL_101_11);
      goto label_74;

    case 7:
      current_block = (Rpc - LABEL_101_12);
      goto label_75;

    case 8:
      current_block = (Rpc - LABEL_101_14);
      goto label_67;

    case 9:
      current_block = (Rpc - LABEL_101_15);
      goto label_68;

    case 10:
      current_block = (Rpc - LABEL_101_16);
      goto label_69;

    case 11:
      current_block = (Rpc - LABEL_101_17);
      goto label_70;

    case 12:
      current_block = (Rpc - LABEL_101_10);
      goto continuation_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (validate_utf8_char_78)
DEFLABEL (validate_utf8_char_64)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_79;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 30))
    goto label_112;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_112;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_112;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd16.pChr) = (& ((Wrd24.pChr) [(Wrd13.Lng)]));
  (Wrd17.uLng) = ((unsigned long) (((unsigned char *) (Wrd16.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd18.Obj) = (MAKE_OBJECT (26, (Wrd17.uLng)));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_111)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if ((Wrd35.Lng) < 128L)
    goto label_110;
  if ((Wrd35.Lng) < 224L)
    goto label_107;
  if ((Wrd35.Lng) < 240L)
    goto label_92;
  if ((Wrd35.Lng) < 248L)
    goto label_82;

DEFLABEL (label_81)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_80)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd58.Lng) = ((Wrd54.Lng) + 4L);
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if ((Wrd58.Lng) > (Wrd60.Lng))
    goto label_81;
  (Wrd64.Lng) = ((Wrd54.Lng) + 1L);
  (Wrd61.Obj) = (LONG_TO_FIXNUM (Wrd64.Lng));
  (Wrd78.Obj) = (Rsp [1]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 30))
    goto label_91;
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd72.uLng) == 26))
    goto label_91;
  Wrd73 = Wrd64;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [1]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) (Wrd73.Lng)) < ((unsigned long) (Wrd77.Lng))))
    goto label_91;
  (Wrd67.uLng) = (OBJECT_DATUM (Wrd61.Obj));
  (Wrd70.pChr) = (& ((Wrd75.pChr) [(Wrd67.Lng)]));
  (Wrd71.uLng) = ((unsigned long) (((unsigned char *) (Wrd70.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd65.Obj) = (MAKE_OBJECT (26, (Wrd71.uLng)));

DEFLABEL (label_90)
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  (Wrd89.Lng) = ((Wrd88.Lng) & 192L);
  (Wrd85.Obj) = (LONG_TO_FIXNUM (Wrd89.Lng));
  if (! ((Wrd85.Obj) == (current_block [OBJECT_101_1])))
    goto label_81;
  (Wrd91.Obj) = (Rsp [0]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if ((Wrd92.Lng) > 240L)
    goto label_87;
  (Wrd96.Obj) = (Rsp [2]);
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  (Wrd98.Lng) = ((Wrd97.Lng) + 1L);
  (Wrd95.Obj) = (LONG_TO_FIXNUM (Wrd98.Lng));
  (Wrd112.Obj) = (Rsp [1]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd113.uLng) == 30))
    goto label_89;
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd106.uLng) == 26))
    goto label_89;
  Wrd107 = Wrd98;
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd110.Obj) = ((Wrd109.pObj) [1]);
  (Wrd111.Lng) = (FIXNUM_TO_LONG (Wrd110.Obj));
  if (! (((unsigned long) (Wrd107.Lng)) < ((unsigned long) (Wrd111.Lng))))
    goto label_89;
  (Wrd101.uLng) = (OBJECT_DATUM (Wrd95.Obj));
  (Wrd104.pChr) = (& ((Wrd109.pChr) [(Wrd101.Lng)]));
  (Wrd105.uLng) = ((unsigned long) (((unsigned char *) (Wrd104.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd99.Obj) = (MAKE_OBJECT (26, (Wrd105.uLng)));

DEFLABEL (label_88)
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! ((Wrd119.Lng) > 143L))
    goto label_81;

DEFLABEL (label_87)
  (Wrd123.Obj) = (Rsp [2]);
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  (Wrd127.Lng) = ((Wrd124.Lng) + 2L);
  (Wrd122.Obj) = (LONG_TO_FIXNUM (Wrd127.Lng));
  (Wrd141.Obj) = (Rsp [1]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd142.uLng) == 30))
    goto label_86;
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if (! ((Wrd135.uLng) == 26))
    goto label_86;
  Wrd136 = Wrd127;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [1]);
  (Wrd140.Lng) = (FIXNUM_TO_LONG (Wrd139.Obj));
  if (! (((unsigned long) (Wrd136.Lng)) < ((unsigned long) (Wrd140.Lng))))
    goto label_86;
  (Wrd130.uLng) = (OBJECT_DATUM (Wrd122.Obj));
  (Wrd133.pChr) = (& ((Wrd138.pChr) [(Wrd130.Lng)]));
  (Wrd134.uLng) = ((unsigned long) (((unsigned char *) (Wrd133.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd128.Obj) = (MAKE_OBJECT (26, (Wrd134.uLng)));

DEFLABEL (label_85)
  (Wrd151.Lng) = (FIXNUM_TO_LONG (Wrd128.Obj));
  (Wrd152.Lng) = ((Wrd151.Lng) & 192L);
  (Wrd148.Obj) = (LONG_TO_FIXNUM (Wrd152.Lng));
  if (! ((Wrd148.Obj) == (current_block [OBJECT_101_1])))
    goto label_81;
  (Wrd155.Obj) = (Rsp [2]);
  (Wrd156.Lng) = (FIXNUM_TO_LONG (Wrd155.Obj));
  (Wrd159.Lng) = ((Wrd156.Lng) + 3L);
  (Wrd154.Obj) = (LONG_TO_FIXNUM (Wrd159.Lng));
  (Wrd173.Obj) = (Rsp [1]);
  (Wrd174.uLng) = (OBJECT_TYPE (Wrd173.Obj));
  if (! ((Wrd174.uLng) == 30))
    goto label_84;
  (Wrd167.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd167.uLng) == 26))
    goto label_84;
  Wrd168 = Wrd159;
  (Wrd170.pObj) = (OBJECT_ADDRESS (Wrd173.Obj));
  (Wrd171.Obj) = ((Wrd170.pObj) [1]);
  (Wrd172.Lng) = (FIXNUM_TO_LONG (Wrd171.Obj));
  if (! (((unsigned long) (Wrd168.Lng)) < ((unsigned long) (Wrd172.Lng))))
    goto label_84;
  (Wrd162.uLng) = (OBJECT_DATUM (Wrd154.Obj));
  (Wrd165.pChr) = (& ((Wrd170.pChr) [(Wrd162.Lng)]));
  (Wrd166.uLng) = ((unsigned long) (((unsigned char *) (Wrd165.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd160.Obj) = (MAKE_OBJECT (26, (Wrd166.uLng)));

DEFLABEL (label_83)
  (Wrd183.Lng) = (FIXNUM_TO_LONG (Wrd160.Obj));
  (Wrd184.Lng) = ((Wrd183.Lng) & 192L);
  (Wrd180.Obj) = (LONG_TO_FIXNUM (Wrd184.Lng));
  if (! ((Wrd180.Obj) == (current_block [OBJECT_101_1])))
    goto label_81;
  (Wrd187.Obj) = (Rsp [2]);
  (Wrd188.Lng) = (FIXNUM_TO_LONG (Wrd187.Obj));
  (Wrd191.Lng) = ((Wrd188.Lng) + 4L);
  Rvl = (LONG_TO_FIXNUM (Wrd191.Lng));
  goto label_80;

DEFLABEL (label_84)
  (Wrd175.Obj) = (Rsp [1]);
  (Wrd179.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_17]))));
  (* (--Rsp)) = (Wrd179.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd175.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 2);

DEFLABEL (label_70)
  (Wrd160.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd143.Obj) = (Rsp [1]);
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_16]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 2);

DEFLABEL (label_69)
  (Wrd128.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_89)
  (Wrd114.Obj) = (Rsp [1]);
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_15]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 2);

DEFLABEL (label_68)
  (Wrd99.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_14]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 2);

DEFLABEL (label_67)
  (Wrd65.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_92)
  (Wrd194.Obj) = (Rsp [2]);
  (Wrd195.Lng) = (FIXNUM_TO_LONG (Wrd194.Obj));
  (Wrd199.Lng) = ((Wrd195.Lng) + 3L);
  (Wrd200.Obj) = (Rsp [3]);
  (Wrd201.Lng) = (FIXNUM_TO_LONG (Wrd200.Obj));
  if ((Wrd199.Lng) > (Wrd201.Lng))
    goto label_81;
  (Wrd205.Lng) = ((Wrd195.Lng) + 1L);
  (Wrd202.Obj) = (LONG_TO_FIXNUM (Wrd205.Lng));
  (Wrd219.Obj) = (Rsp [1]);
  (Wrd220.uLng) = (OBJECT_TYPE (Wrd219.Obj));
  if (! ((Wrd220.uLng) == 30))
    goto label_106;
  (Wrd213.uLng) = (OBJECT_TYPE (Wrd202.Obj));
  if (! ((Wrd213.uLng) == 26))
    goto label_106;
  Wrd214 = Wrd205;
  (Wrd216.pObj) = (OBJECT_ADDRESS (Wrd219.Obj));
  (Wrd217.Obj) = ((Wrd216.pObj) [1]);
  (Wrd218.Lng) = (FIXNUM_TO_LONG (Wrd217.Obj));
  if (! (((unsigned long) (Wrd214.Lng)) < ((unsigned long) (Wrd218.Lng))))
    goto label_106;
  (Wrd208.uLng) = (OBJECT_DATUM (Wrd202.Obj));
  (Wrd211.pChr) = (& ((Wrd216.pChr) [(Wrd208.Lng)]));
  (Wrd212.uLng) = ((unsigned long) (((unsigned char *) (Wrd211.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd206.Obj) = (MAKE_OBJECT (26, (Wrd212.uLng)));

DEFLABEL (label_105)
  (Wrd229.Lng) = (FIXNUM_TO_LONG (Wrd206.Obj));
  (Wrd230.Lng) = ((Wrd229.Lng) & 192L);
  (Wrd226.Obj) = (LONG_TO_FIXNUM (Wrd230.Lng));
  if (! ((Wrd226.Obj) == (current_block [OBJECT_101_1])))
    goto label_81;
  (Wrd233.Obj) = (Rsp [2]);
  (Wrd234.Lng) = (FIXNUM_TO_LONG (Wrd233.Obj));
  (Wrd237.Lng) = ((Wrd234.Lng) + 2L);
  (Wrd232.Obj) = (LONG_TO_FIXNUM (Wrd237.Lng));
  (Wrd251.Obj) = (Rsp [1]);
  (Wrd252.uLng) = (OBJECT_TYPE (Wrd251.Obj));
  if (! ((Wrd252.uLng) == 30))
    goto label_104;
  (Wrd245.uLng) = (OBJECT_TYPE (Wrd232.Obj));
  if (! ((Wrd245.uLng) == 26))
    goto label_104;
  Wrd246 = Wrd237;
  (Wrd248.pObj) = (OBJECT_ADDRESS (Wrd251.Obj));
  (Wrd249.Obj) = ((Wrd248.pObj) [1]);
  (Wrd250.Lng) = (FIXNUM_TO_LONG (Wrd249.Obj));
  if (! (((unsigned long) (Wrd246.Lng)) < ((unsigned long) (Wrd250.Lng))))
    goto label_104;
  (Wrd240.uLng) = (OBJECT_DATUM (Wrd232.Obj));
  (Wrd243.pChr) = (& ((Wrd248.pChr) [(Wrd240.Lng)]));
  (Wrd244.uLng) = ((unsigned long) (((unsigned char *) (Wrd243.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd238.Obj) = (MAKE_OBJECT (26, (Wrd244.uLng)));

DEFLABEL (label_103)
  (Wrd261.Lng) = (FIXNUM_TO_LONG (Wrd238.Obj));
  (Wrd262.Lng) = ((Wrd261.Lng) & 192L);
  (Wrd258.Obj) = (LONG_TO_FIXNUM (Wrd262.Lng));
  if (! ((Wrd258.Obj) == (current_block [OBJECT_101_1])))
    goto label_81;
  (Wrd264.Obj) = (Rsp [0]);
  (Wrd265.Lng) = (FIXNUM_TO_LONG (Wrd264.Obj));
  if ((Wrd265.Lng) > 224L)
    goto label_100;
  (Wrd269.Obj) = (Rsp [2]);
  (Wrd270.Lng) = (FIXNUM_TO_LONG (Wrd269.Obj));
  (Wrd271.Lng) = ((Wrd270.Lng) + 1L);
  (Wrd268.Obj) = (LONG_TO_FIXNUM (Wrd271.Lng));
  (Wrd285.Obj) = (Rsp [1]);
  (Wrd286.uLng) = (OBJECT_TYPE (Wrd285.Obj));
  if (! ((Wrd286.uLng) == 30))
    goto label_102;
  (Wrd279.uLng) = (OBJECT_TYPE (Wrd268.Obj));
  if (! ((Wrd279.uLng) == 26))
    goto label_102;
  Wrd280 = Wrd271;
  (Wrd282.pObj) = (OBJECT_ADDRESS (Wrd285.Obj));
  (Wrd283.Obj) = ((Wrd282.pObj) [1]);
  (Wrd284.Lng) = (FIXNUM_TO_LONG (Wrd283.Obj));
  if (! (((unsigned long) (Wrd280.Lng)) < ((unsigned long) (Wrd284.Lng))))
    goto label_102;
  (Wrd274.uLng) = (OBJECT_DATUM (Wrd268.Obj));
  (Wrd277.pChr) = (& ((Wrd282.pChr) [(Wrd274.Lng)]));
  (Wrd278.uLng) = ((unsigned long) (((unsigned char *) (Wrd277.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd272.Obj) = (MAKE_OBJECT (26, (Wrd278.uLng)));

DEFLABEL (label_101)
  (Wrd292.Lng) = (FIXNUM_TO_LONG (Wrd272.Obj));
  if (! ((Wrd292.Lng) > 159L))
    goto label_81;

DEFLABEL (label_100)
  (Wrd297.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_10]))));
  (* (--Rsp)) = (Wrd297.Obj);
  (Wrd299.Obj) = (Rsp [3]);
  (Wrd300.Lng) = (FIXNUM_TO_LONG (Wrd299.Obj));
  (Wrd303.Lng) = ((Wrd300.Lng) + 2L);
  (Wrd298.Obj) = (LONG_TO_FIXNUM (Wrd303.Lng));
  (Wrd317.Obj) = (Rsp [2]);
  (Wrd318.uLng) = (OBJECT_TYPE (Wrd317.Obj));
  if (! ((Wrd318.uLng) == 30))
    goto label_99;
  (Wrd311.uLng) = (OBJECT_TYPE (Wrd298.Obj));
  if (! ((Wrd311.uLng) == 26))
    goto label_99;
  Wrd312 = Wrd303;
  (Wrd314.pObj) = (OBJECT_ADDRESS (Wrd317.Obj));
  (Wrd315.Obj) = ((Wrd314.pObj) [1]);
  (Wrd316.Lng) = (FIXNUM_TO_LONG (Wrd315.Obj));
  if (! (((unsigned long) (Wrd312.Lng)) < ((unsigned long) (Wrd316.Lng))))
    goto label_99;
  (Wrd306.uLng) = (OBJECT_DATUM (Wrd298.Obj));
  (Wrd309.pChr) = (& ((Wrd314.pChr) [(Wrd306.Lng)]));
  (Wrd310.uLng) = ((unsigned long) (((unsigned char *) (Wrd309.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd304.Obj) = (MAKE_OBJECT (26, (Wrd310.uLng)));

DEFLABEL (label_98)
  (Wrd324.Lng) = (FIXNUM_TO_LONG (Wrd304.Obj));
  (Wrd327.Lng) = ((Wrd324.Lng) & 63L);
  (Wrd328.Obj) = (LONG_TO_FIXNUM (Wrd327.Lng));
  (* (--Rsp)) = (Wrd328.Obj);
  (Wrd330.Obj) = (Rsp [4]);
  (Wrd331.Lng) = (FIXNUM_TO_LONG (Wrd330.Obj));
  (Wrd332.Lng) = ((Wrd331.Lng) + 1L);
  (Wrd329.Obj) = (LONG_TO_FIXNUM (Wrd332.Lng));
  (Wrd346.Obj) = (Rsp [3]);
  (Wrd347.uLng) = (OBJECT_TYPE (Wrd346.Obj));
  if (! ((Wrd347.uLng) == 30))
    goto label_97;
  (Wrd340.uLng) = (OBJECT_TYPE (Wrd329.Obj));
  if (! ((Wrd340.uLng) == 26))
    goto label_97;
  Wrd341 = Wrd332;
  (Wrd343.pObj) = (OBJECT_ADDRESS (Wrd346.Obj));
  (Wrd344.Obj) = ((Wrd343.pObj) [1]);
  (Wrd345.Lng) = (FIXNUM_TO_LONG (Wrd344.Obj));
  if (! (((unsigned long) (Wrd341.Lng)) < ((unsigned long) (Wrd345.Lng))))
    goto label_97;
  (Wrd335.uLng) = (OBJECT_DATUM (Wrd329.Obj));
  (Wrd338.pChr) = (& ((Wrd343.pChr) [(Wrd335.Lng)]));
  (Wrd339.uLng) = ((unsigned long) (((unsigned char *) (Wrd338.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd333.Obj) = (MAKE_OBJECT (26, (Wrd339.uLng)));

DEFLABEL (label_96)
  (Wrd354.Lng) = (FIXNUM_TO_LONG (Wrd333.Obj));
  (Wrd359.Lng) = ((Wrd354.Lng) & 63L);
  (Wrd362.Lng) = (LEFT_SHIFT ((Wrd359.Lng), 6));
  (Wrd363.Obj) = (* (Rsp++));
  Wrd365 = Wrd362;
  (Wrd366.Lng) = (FIXNUM_TO_LONG (Wrd363.Obj));
  (Wrd367.Lng) = ((Wrd365.Lng) | (Wrd366.Lng));
  (Wrd369.Obj) = (Rsp [1]);
  (Wrd370.Lng) = (FIXNUM_TO_LONG (Wrd369.Obj));
  (Wrd375.Lng) = ((Wrd370.Lng) & 15L);
  (Wrd379.Lng) = (LEFT_SHIFT ((Wrd375.Lng), 12));
  (Wrd381.Lng) = ((Wrd379.Lng) | (Wrd367.Lng));
  (Wrd382.Obj) = (LONG_TO_FIXNUM (Wrd381.Lng));
  (* (--Rsp)) = (Wrd382.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_13]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_101_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd12.Lng) = ((Wrd9.Lng) + 3L);
  Rvl = (LONG_TO_FIXNUM (Wrd12.Lng));
  goto label_93;

DEFLABEL (label_94)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_93)
DEFLABEL (label_95)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_97)
  (Wrd348.Obj) = (Rsp [3]);
  (Wrd352.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_12]))));
  (* (--Rsp)) = (Wrd352.Obj);
  (* (--Rsp)) = (Wrd329.Obj);
  (* (--Rsp)) = (Wrd348.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 2);

DEFLABEL (label_75)
  (Wrd333.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd319.Obj) = (Rsp [2]);
  (Wrd323.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_11]))));
  (* (--Rsp)) = (Wrd323.Obj);
  (* (--Rsp)) = (Wrd298.Obj);
  (* (--Rsp)) = (Wrd319.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 2);

DEFLABEL (label_74)
  (Wrd304.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_102)
  (Wrd287.Obj) = (Rsp [1]);
  (Wrd291.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_9]))));
  (* (--Rsp)) = (Wrd291.Obj);
  (* (--Rsp)) = (Wrd268.Obj);
  (* (--Rsp)) = (Wrd287.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 2);

DEFLABEL (label_73)
  (Wrd272.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd253.Obj) = (Rsp [1]);
  (Wrd257.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_8]))));
  (* (--Rsp)) = (Wrd257.Obj);
  (* (--Rsp)) = (Wrd232.Obj);
  (* (--Rsp)) = (Wrd253.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 2);

DEFLABEL (label_72)
  (Wrd238.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd221.Obj) = (Rsp [1]);
  (Wrd225.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_7]))));
  (* (--Rsp)) = (Wrd225.Obj);
  (* (--Rsp)) = (Wrd202.Obj);
  (* (--Rsp)) = (Wrd221.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 2);

DEFLABEL (label_71)
  (Wrd206.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_107)
  (Wrd384.Obj) = (Rsp [2]);
  (Wrd385.Lng) = (FIXNUM_TO_LONG (Wrd384.Obj));
  (Wrd389.Lng) = ((Wrd385.Lng) + 2L);
  (Wrd390.Obj) = (Rsp [3]);
  (Wrd391.Lng) = (FIXNUM_TO_LONG (Wrd390.Obj));
  if ((Wrd389.Lng) > (Wrd391.Lng))
    goto label_81;
  (Wrd395.Lng) = ((Wrd385.Lng) + 1L);
  (Wrd392.Obj) = (LONG_TO_FIXNUM (Wrd395.Lng));
  (Wrd409.Obj) = (Rsp [1]);
  (Wrd410.uLng) = (OBJECT_TYPE (Wrd409.Obj));
  if (! ((Wrd410.uLng) == 30))
    goto label_109;
  (Wrd403.uLng) = (OBJECT_TYPE (Wrd392.Obj));
  if (! ((Wrd403.uLng) == 26))
    goto label_109;
  Wrd404 = Wrd395;
  (Wrd406.pObj) = (OBJECT_ADDRESS (Wrd409.Obj));
  (Wrd407.Obj) = ((Wrd406.pObj) [1]);
  (Wrd408.Lng) = (FIXNUM_TO_LONG (Wrd407.Obj));
  if (! (((unsigned long) (Wrd404.Lng)) < ((unsigned long) (Wrd408.Lng))))
    goto label_109;
  (Wrd398.uLng) = (OBJECT_DATUM (Wrd392.Obj));
  (Wrd401.pChr) = (& ((Wrd406.pChr) [(Wrd398.Lng)]));
  (Wrd402.uLng) = ((unsigned long) (((unsigned char *) (Wrd401.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd396.Obj) = (MAKE_OBJECT (26, (Wrd402.uLng)));

DEFLABEL (label_108)
  (Wrd419.Lng) = (FIXNUM_TO_LONG (Wrd396.Obj));
  (Wrd420.Lng) = ((Wrd419.Lng) & 192L);
  (Wrd416.Obj) = (LONG_TO_FIXNUM (Wrd420.Lng));
  if (! ((Wrd416.Obj) == (current_block [OBJECT_101_1])))
    goto label_81;
  (Wrd422.Obj) = (Rsp [0]);
  (Wrd423.Lng) = (FIXNUM_TO_LONG (Wrd422.Obj));
  if (! ((Wrd423.Lng) > 193L))
    goto label_81;
  (Wrd427.Obj) = (Rsp [2]);
  (Wrd428.Lng) = (FIXNUM_TO_LONG (Wrd427.Obj));
  (Wrd431.Lng) = ((Wrd428.Lng) + 2L);
  Rvl = (LONG_TO_FIXNUM (Wrd431.Lng));
  goto label_80;

DEFLABEL (label_109)
  (Wrd411.Obj) = (Rsp [1]);
  (Wrd415.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_6]))));
  (* (--Rsp)) = (Wrd415.Obj);
  (* (--Rsp)) = (Wrd392.Obj);
  (* (--Rsp)) = (Wrd411.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 2);

DEFLABEL (label_76)
  (Wrd396.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_110)
  (Wrd434.Obj) = (Rsp [2]);
  (Wrd435.Lng) = (FIXNUM_TO_LONG (Wrd434.Obj));
  (Wrd436.Lng) = ((Wrd435.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd436.Lng));
  goto label_80;

DEFLABEL (label_112)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_5]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 2);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_111;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define ENVIRONMENT_LABEL_102_3 6
#define DEBUGGING_LABEL_102_2 5
#define OBJECT_102_0 4
#define FREE_REFERENCES_LABEL_102_0 4
#define NUMBER_OF_LINKER_SECTIONS_102_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_102_4);
      goto Z__vs2_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__vs2_3)
DEFLABEL (Z__vs2_0)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd7.Lng) > 193L)
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_102_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_103_4 3
#define ENVIRONMENT_LABEL_103_3 6
#define DEBUGGING_LABEL_103_2 5
#define OBJECT_103_0 4
#define FREE_REFERENCES_LABEL_103_0 4
#define NUMBER_OF_LINKER_SECTIONS_103_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_103 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_103_4);
      goto Z__vs3_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__vs3_4)
DEFLABEL (Z__vs3_1)
  INTERRUPT_CHECK (26, LABEL_103_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 224L)
    goto label_6;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd11.Lng) > 159L)
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_103_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_104_4 3
#define ENVIRONMENT_LABEL_104_3 6
#define DEBUGGING_LABEL_104_2 5
#define OBJECT_104_0 4
#define FREE_REFERENCES_LABEL_104_0 4
#define NUMBER_OF_LINKER_SECTIONS_104_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_104 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_104_4);
      goto Z__vs4_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__vs4_4)
DEFLABEL (Z__vs4_1)
  INTERRUPT_CHECK (26, LABEL_104_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 240L)
    goto label_6;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd11.Lng) > 143L)
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_104_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_105_4 3
#define ENVIRONMENT_LABEL_105_3 5
#define DEBUGGING_LABEL_105_2 4
#define FREE_REFERENCES_LABEL_105_0 4
#define NUMBER_OF_LINKER_SECTIONS_105_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_105 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_105_4);
      goto Z__cp3_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__cp3_9)
DEFLABEL (Z__cp3_6)
  INTERRUPT_CHECK (26, LABEL_105_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd12.Lng) = ((Wrd7.Lng) & 15L);
  (Wrd15.Lng) = (LEFT_SHIFT ((Wrd12.Lng), 12));
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd20.Lng) = 63L;
  (Wrd23.Lng) = ((Wrd18.Lng) & (Wrd20.Lng));
  (Wrd26.Lng) = (LEFT_SHIFT ((Wrd23.Lng), 6));
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd32.Lng) = ((Wrd29.Lng) & (Wrd20.Lng));
  Wrd34 = Wrd26;
  (Wrd36.Lng) = ((Wrd34.Lng) | (Wrd32.Lng));
  Wrd38 = Wrd15;
  (Wrd40.Lng) = ((Wrd38.Lng) | (Wrd36.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd40.Lng));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_106_4 3
#define ENVIRONMENT_LABEL_106_3 7
#define DEBUGGING_LABEL_106_2 6
#define OBJECT_106_1 5
#define OBJECT_106_0 4
#define FREE_REFERENCES_LABEL_106_0 4
#define NUMBER_OF_LINKER_SECTIONS_106_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_106 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_106_4);
      goto Z__valid_trailerP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__valid_trailerP_4)
DEFLABEL (Z__valid_trailerP_1)
  INTERRUPT_CHECK (26, LABEL_106_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) & 192L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  if ((Wrd5.Obj) == (current_block [OBJECT_106_0]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_106_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_107_4 3
#define LABEL_107_5 5
#define LABEL_107_7 7
#define LABEL_107_8 9
#define LABEL_107_10 11
#define LABEL_107_12 13
#define ENVIRONMENT_LABEL_107_3 24
#define DEBUGGING_LABEL_107_2 23
#define OBJECT_107_1 22
#define OBJECT_107_0 21
#define EXECUTE_CACHE_107_11 15
#define EXECUTE_CACHE_107_9 17
#define EXECUTE_CACHE_107_6 19
#define FREE_REFERENCES_LABEL_107_0 14
#define NUMBER_OF_LINKER_SECTIONS_107_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_107 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_107_4);
      goto for_all_chars_in_stringP_9;

    case 1:
      current_block = (Rpc - LABEL_107_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_107_7);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_107_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_107_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_107_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_all_chars_in_stringP_12)
DEFLABEL (for_all_chars_in_stringP_9)
  INTERRUPT_CHECK (26, LABEL_107_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_107_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_107_5);
  (* (--Rsp)) = Rvl;
  goto loop_6;

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_107_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_107_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_107_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (current_block [OBJECT_107_1]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_107_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rsp = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (label_15)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_108_4 3
#define LABEL_108_5 5
#define LABEL_108_7 7
#define LABEL_108_8 9
#define LABEL_108_10 11
#define LABEL_108_12 13
#define ENVIRONMENT_LABEL_108_3 24
#define DEBUGGING_LABEL_108_2 23
#define OBJECT_108_1 22
#define OBJECT_108_0 21
#define EXECUTE_CACHE_108_11 15
#define EXECUTE_CACHE_108_9 17
#define EXECUTE_CACHE_108_6 19
#define FREE_REFERENCES_LABEL_108_0 14
#define NUMBER_OF_LINKER_SECTIONS_108_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_108 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_108_4);
      goto for_any_char_in_stringP_9;

    case 1:
      current_block = (Rpc - LABEL_108_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_108_7);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_108_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_108_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_108_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_any_char_in_stringP_12)
DEFLABEL (for_any_char_in_stringP_9)
  INTERRUPT_CHECK (26, LABEL_108_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_108_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_108_5);
  (* (--Rsp)) = Rvl;
  goto loop_6;

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_108_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_108_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_108_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_108_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (current_block [OBJECT_108_1]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  goto loop_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_109_5 3
#define LABEL_109_4 5
#define LABEL_109_6 7
#define LABEL_109_7 9
#define LABEL_109_8 11
#define LABEL_109_9 13
#define LABEL_109_10 15
#define LABEL_109_11 17
#define LABEL_109_12 19
#define LABEL_109_13 21
#define LABEL_109_15 23
#define ENVIRONMENT_LABEL_109_3 50
#define DEBUGGING_LABEL_109_2 49
#define OBJECT_109_8 48
#define OBJECT_109_7 47
#define OBJECT_109_6 46
#define OBJECT_109_5 45
#define OBJECT_109_4 44
#define OBJECT_109_3 43
#define OBJECT_109_2 42
#define OBJECT_109_1 41
#define OBJECT_109_0 40
#define EXECUTE_CACHE_109_17 25
#define EXECUTE_CACHE_109_16 27
#define EXECUTE_CACHE_109_14 29
#define FREE_REFERENCE_109_7 32
#define FREE_REFERENCE_109_6 33
#define FREE_REFERENCE_109_5 34
#define FREE_REFERENCE_109_4 35
#define FREE_REFERENCE_109_3 36
#define FREE_REFERENCE_109_2 37
#define FREE_REFERENCE_109_1 38
#define FREE_REFERENCE_109_0 39
#define FREE_REFERENCES_LABEL_109_0 24
#define NUMBER_OF_LINKER_SECTIONS_109_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unicode_so_code_109 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd30;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd59;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd66;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd73;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd80;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd87;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd39;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_109_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_109_4);
      goto open_string_12;

    case 2:
      current_block = (Rpc - LABEL_109_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_109_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_109_8);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_109_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_109_10);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_109_11);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_109_12);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_109_13);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_109_15);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_string_23)
DEFLABEL (open_string_12)
  INTERRUPT_CHECK (26, LABEL_109_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  if ((Wrd8.Obj) == (current_block [OBJECT_109_0]))
    goto label_49;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 30)
    goto label_26;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_109_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd7.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_109_5);
  (Wrd39.Obj) = Rvl;

DEFLABEL (label_24)
  (Wrd40.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd42.Obj);
  (Rsp [1]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_25)
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_109_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_17]));

DEFLABEL (label_26)
  if ((Wrd8.Obj) == (current_block [OBJECT_109_1]))
    goto label_46;
  if ((Wrd8.Obj) == (current_block [OBJECT_109_2]))
    goto label_43;
  if ((Wrd8.Obj) == (current_block [OBJECT_109_3]))
    goto label_40;
  if ((Wrd8.Obj) == (current_block [OBJECT_109_4]))
    goto label_37;
  if ((Wrd8.Obj) == (current_block [OBJECT_109_5]))
    goto label_34;
  if ((Wrd8.Obj) == (current_block [OBJECT_109_6]))
    goto label_31;
  if ((Wrd8.Obj) == (current_block [OBJECT_109_7]))
    goto label_27;
  (Wrd30.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_14]));

DEFLABEL (label_27)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_109_7]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_30;
  Wrd33 = Wrd37;

DEFLABEL (label_29)
  Wrd39 = Wrd33;

DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  goto label_24;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109_13])), (Wrd34.pObj));

DEFLABEL (label_14)
  (Wrd33.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_109_6]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_33;
  Wrd45 = Wrd49;

DEFLABEL (label_32)
  Wrd39 = Wrd45;
  goto label_28;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109_12])), (Wrd46.pObj));

DEFLABEL (label_15)
  (Wrd45.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_109_5]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_36;
  Wrd52 = Wrd56;

DEFLABEL (label_35)
  Wrd39 = Wrd52;
  goto label_28;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109_11])), (Wrd53.pObj));

DEFLABEL (label_16)
  (Wrd52.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd60.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_109_4]));
  (Wrd63.Obj) = ((Wrd60.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 50)
    goto label_39;
  Wrd59 = Wrd63;

DEFLABEL (label_38)
  Wrd39 = Wrd59;
  goto label_28;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109_10])), (Wrd60.pObj));

DEFLABEL (label_17)
  (Wrd59.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_109_3]));
  (Wrd70.Obj) = ((Wrd67.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_42;
  Wrd66 = Wrd70;

DEFLABEL (label_41)
  Wrd39 = Wrd66;
  goto label_28;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109_9])), (Wrd67.pObj));

DEFLABEL (label_18)
  (Wrd66.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd74.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_109_2]));
  (Wrd77.Obj) = ((Wrd74.pObj) [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd78.uLng) == 50)
    goto label_45;
  Wrd73 = Wrd77;

DEFLABEL (label_44)
  Wrd39 = Wrd73;
  goto label_28;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109_8])), (Wrd74.pObj));

DEFLABEL (label_19)
  (Wrd73.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd81.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_109_1]));
  (Wrd84.Obj) = ((Wrd81.pObj) [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if ((Wrd85.uLng) == 50)
    goto label_48;
  Wrd80 = Wrd84;

DEFLABEL (label_47)
  Wrd39 = Wrd80;
  goto label_28;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109_7])), (Wrd81.pObj));

DEFLABEL (label_20)
  (Wrd80.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd88.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_109_0]));
  (Wrd91.Obj) = ((Wrd88.pObj) [0]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if ((Wrd92.uLng) == 50)
    goto label_51;
  Wrd87 = Wrd91;

DEFLABEL (label_50)
  Wrd39 = Wrd87;
  goto label_28;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109_6])), (Wrd88.pObj));

DEFLABEL (label_21)
  (Wrd87.Obj) = Rvl;
  goto label_50;

INVOKE_INTERFACE_TARGET_1
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
#define LABEL_22 29
#define LABEL_18 31
#define LABEL_20 33
#define LABEL_21 35
#define LABEL_24 37
#define LABEL_29 39
#define LABEL_25 41
#define TAG_26 19
#define LABEL_27 43
#define LABEL_28 45
#define LABEL_30 47
#define LABEL_31 49
#define LABEL_32 51
#define LABEL_33 53
#define LABEL_34 55
#define LABEL_35 57
#define LABEL_36 59
#define LABEL_37 61
#define LABEL_38 63
#define LABEL_39 65
#define LABEL_40 67
#define LABEL_41 69
#define LABEL_42 71
#define LABEL_43 73
#define LABEL_44 75
#define LABEL_45 77
#define LABEL_46 79
#define LABEL_47 81
#define LABEL_48 83
#define LABEL_49 85
#define LABEL_50 87
#define LABEL_51 89
#define LABEL_52 91
#define LABEL_54 93
#define LABEL_58 95
#define LABEL_59 97
#define LABEL_55 99
#define LABEL_56 101
#define LABEL_63 103
#define LABEL_57 105
#define LABEL_61 107
#define LABEL_67 109
#define LABEL_62 111
#define LABEL_65 113
#define LABEL_70 115
#define LABEL_66 117
#define LABEL_68 119
#define LABEL_69 121
#define LABEL_71 123
#define LABEL_72 125
#define LABEL_74 127
#define LABEL_78 129
#define LABEL_79 131
#define LABEL_75 133
#define LABEL_76 135
#define LABEL_83 137
#define LABEL_77 139
#define LABEL_81 141
#define LABEL_87 143
#define LABEL_82 145
#define LABEL_85 147
#define LABEL_90 149
#define LABEL_86 151
#define LABEL_88 153
#define LABEL_89 155
#define LABEL_91 157
#define LABEL_92 159
#define LABEL_93 161
#define LABEL_94 163
#define LABEL_95 165
#define LABEL_96 167
#define LABEL_97 169
#define LABEL_98 171
#define LABEL_99 173
#define LABEL_100 175
#define LABEL_101 177
#define LABEL_102 179
#define LABEL_103 181
#define LABEL_104 183
#define LABEL_105 185
#define LABEL_106 187
#define LABEL_107 189
#define LABEL_108 191
#define LABEL_109 193
#define LABEL_110 195
#define LABEL_111 197
#define LABEL_112 199
#define LABEL_113 201
#define LABEL_114 203
#define LABEL_115 205
#define LABEL_116 207
#define LABEL_117 209
#define LABEL_118 211
#define LABEL_119 213
#define LABEL_123 215
#define LABEL_124 217
#define LABEL_120 219
#define LABEL_121 221
#define LABEL_127 223
#define LABEL_122 225
#define LABEL_125 227
#define LABEL_130 229
#define LABEL_126 231
#define LABEL_128 233
#define LABEL_133 235
#define LABEL_129 237
#define LABEL_131 239
#define LABEL_132 241
#define LABEL_134 243
#define LABEL_135 245
#define LABEL_136 247
#define LABEL_140 249
#define LABEL_141 251
#define LABEL_137 253
#define LABEL_138 255
#define LABEL_144 257
#define LABEL_139 259
#define LABEL_142 261
#define LABEL_147 263
#define LABEL_143 265
#define LABEL_145 267
#define LABEL_150 269
#define LABEL_146 271
#define LABEL_148 273
#define LABEL_149 275
#define LABEL_151 277
#define LABEL_152 279
#define LABEL_153 281
#define LABEL_154 283
#define LABEL_155 285
#define LABEL_156 287
#define LABEL_157 289
#define LABEL_158 291
#define LABEL_159 293
#define LABEL_160 295
#define LABEL_161 297
#define LABEL_162 299
#define LABEL_163 301
#define LABEL_164 303
#define LABEL_165 305
#define LABEL_166 307
#define LABEL_167 309
#define LABEL_168 311
#define LABEL_169 313
#define LABEL_170 315
#define LABEL_171 317
#define LABEL_172 319
#define LABEL_173 321
#define LABEL_174 323
#define LABEL_175 325
#define LABEL_176 327
#define LABEL_177 329
#define LABEL_178 331
#define LABEL_179 333
#define LABEL_180 335
#define LABEL_181 337
#define LABEL_182 339
#define LABEL_183 341
#define LABEL_184 343
#define LABEL_185 345
#define LABEL_189 347
#define LABEL_186 349
#define LABEL_187 351
#define LABEL_188 353
#define LABEL_190 355
#define LABEL_194 357
#define LABEL_191 359
#define LABEL_192 361
#define LABEL_193 363
#define LABEL_195 365
#define LABEL_196 367
#define LABEL_197 369
#define LABEL_198 371
#define LABEL_199 373
#define LABEL_200 375
#define LABEL_201 377
#define LABEL_202 379
#define LABEL_203 381
#define LABEL_204 383
#define LABEL_205 385
#define LABEL_206 387
#define LABEL_207 389
#define LABEL_208 391
#define LABEL_209 393
#define LABEL_210 395
#define LABEL_211 397
#define LABEL_212 399
#define LABEL_213 401
#define ENVIRONMENT_LABEL_3 702
#define DEBUGGING_LABEL_2 701
#define PURIFICATION_ROOT 700
#define OBJECT_261 699
#define OBJECT_260 698
#define OBJECT_259 697
#define OBJECT_258 696
#define OBJECT_257 695
#define OBJECT_256 694
#define OBJECT_255 693
#define OBJECT_254 692
#define OBJECT_253 691
#define OBJECT_252 690
#define OBJECT_251 689
#define OBJECT_250 688
#define OBJECT_249 687
#define OBJECT_248 686
#define OBJECT_247 685
#define OBJECT_246 684
#define OBJECT_245 683
#define OBJECT_244 682
#define OBJECT_243 681
#define OBJECT_242 680
#define OBJECT_241 679
#define OBJECT_240 678
#define OBJECT_239 677
#define OBJECT_238 676
#define OBJECT_237 675
#define OBJECT_236 674
#define OBJECT_235 673
#define OBJECT_234 672
#define OBJECT_233 671
#define OBJECT_232 670
#define OBJECT_231 669
#define OBJECT_230 668
#define OBJECT_229 667
#define OBJECT_228 666
#define OBJECT_227 665
#define OBJECT_226 664
#define OBJECT_225 663
#define OBJECT_224 662
#define OBJECT_223 661
#define OBJECT_222 660
#define OBJECT_221 659
#define OBJECT_220 658
#define OBJECT_219 657
#define OBJECT_218 656
#define OBJECT_217 655
#define OBJECT_216 654
#define OBJECT_215 653
#define OBJECT_214 652
#define OBJECT_213 651
#define OBJECT_212 650
#define OBJECT_211 649
#define OBJECT_210 648
#define OBJECT_209 647
#define OBJECT_208 646
#define OBJECT_207 645
#define OBJECT_206 644
#define OBJECT_205 643
#define OBJECT_204 642
#define OBJECT_203 641
#define OBJECT_202 640
#define OBJECT_201 639
#define OBJECT_200 638
#define OBJECT_199 637
#define OBJECT_198 636
#define OBJECT_197 635
#define OBJECT_196 634
#define OBJECT_195 633
#define OBJECT_194 632
#define OBJECT_193 631
#define OBJECT_192 630
#define OBJECT_191 629
#define OBJECT_190 628
#define OBJECT_189 627
#define OBJECT_188 626
#define OBJECT_187 625
#define OBJECT_186 624
#define OBJECT_185 623
#define OBJECT_184 622
#define OBJECT_183 621
#define OBJECT_182 620
#define OBJECT_181 619
#define OBJECT_180 618
#define OBJECT_179 617
#define OBJECT_178 616
#define OBJECT_177 615
#define OBJECT_176 614
#define OBJECT_175 613
#define OBJECT_174 612
#define OBJECT_173 611
#define OBJECT_172 610
#define OBJECT_171 609
#define OBJECT_170 608
#define OBJECT_169 607
#define OBJECT_168 606
#define OBJECT_167 605
#define OBJECT_166 604
#define OBJECT_165 603
#define OBJECT_164 602
#define OBJECT_163 601
#define OBJECT_162 600
#define OBJECT_161 599
#define OBJECT_160 598
#define OBJECT_159 597
#define OBJECT_158 596
#define OBJECT_157 595
#define OBJECT_156 594
#define OBJECT_155 593
#define OBJECT_154 592
#define OBJECT_153 591
#define OBJECT_152 590
#define OBJECT_151 589
#define OBJECT_150 588
#define OBJECT_149 587
#define OBJECT_148 586
#define OBJECT_147 585
#define OBJECT_146 584
#define OBJECT_145 583
#define OBJECT_144 582
#define OBJECT_143 581
#define OBJECT_142 580
#define OBJECT_141 579
#define OBJECT_140 578
#define OBJECT_139 577
#define OBJECT_138 576
#define OBJECT_137 575
#define OBJECT_136 574
#define OBJECT_135 573
#define OBJECT_134 572
#define OBJECT_133 571
#define OBJECT_132 570
#define OBJECT_131 569
#define OBJECT_130 568
#define OBJECT_129 567
#define OBJECT_128 566
#define OBJECT_127 565
#define OBJECT_126 564
#define OBJECT_125 563
#define OBJECT_124 562
#define OBJECT_123 561
#define OBJECT_122 560
#define OBJECT_121 559
#define OBJECT_120 558
#define OBJECT_119 557
#define OBJECT_118 556
#define OBJECT_117 555
#define OBJECT_116 554
#define OBJECT_115 553
#define OBJECT_114 552
#define OBJECT_113 551
#define OBJECT_112 550
#define OBJECT_111 549
#define OBJECT_110 548
#define OBJECT_109 547
#define OBJECT_108 546
#define OBJECT_107 545
#define OBJECT_106 544
#define OBJECT_105 543
#define OBJECT_104 542
#define OBJECT_103 541
#define OBJECT_102 540
#define OBJECT_101 539
#define OBJECT_100 538
#define OBJECT_99 537
#define OBJECT_98 536
#define OBJECT_97 535
#define OBJECT_96 534
#define OBJECT_95 533
#define OBJECT_94 532
#define OBJECT_93 531
#define OBJECT_92 530
#define OBJECT_91 529
#define OBJECT_90 528
#define OBJECT_89 527
#define OBJECT_88 526
#define OBJECT_87 525
#define OBJECT_86 524
#define OBJECT_85 523
#define OBJECT_84 522
#define OBJECT_83 521
#define OBJECT_82 520
#define OBJECT_81 519
#define OBJECT_80 518
#define OBJECT_79 517
#define OBJECT_78 516
#define OBJECT_77 515
#define OBJECT_76 514
#define OBJECT_75 513
#define OBJECT_74 512
#define OBJECT_73 511
#define OBJECT_72 510
#define OBJECT_71 509
#define OBJECT_70 508
#define OBJECT_69 507
#define OBJECT_68 506
#define OBJECT_67 505
#define OBJECT_66 504
#define OBJECT_65 503
#define OBJECT_64 502
#define OBJECT_63 501
#define OBJECT_62 500
#define OBJECT_61 499
#define OBJECT_60 498
#define OBJECT_59 497
#define OBJECT_58 496
#define OBJECT_57 495
#define OBJECT_56 494
#define OBJECT_55 493
#define OBJECT_54 492
#define OBJECT_53 491
#define OBJECT_52 490
#define OBJECT_51 489
#define OBJECT_50 488
#define OBJECT_49 487
#define OBJECT_48 486
#define OBJECT_47 485
#define OBJECT_46 484
#define OBJECT_45 483
#define OBJECT_44 482
#define OBJECT_43 481
#define OBJECT_42 480
#define OBJECT_41 479
#define OBJECT_40 478
#define OBJECT_39 477
#define OBJECT_38 476
#define OBJECT_37 475
#define OBJECT_36 474
#define OBJECT_35 473
#define OBJECT_34 472
#define OBJECT_33 471
#define OBJECT_32 470
#define OBJECT_31 469
#define OBJECT_30 468
#define OBJECT_29 467
#define OBJECT_28 466
#define OBJECT_27 465
#define OBJECT_26 464
#define OBJECT_25 463
#define OBJECT_24 462
#define OBJECT_23 461
#define OBJECT_22 460
#define OBJECT_21 459
#define OBJECT_20 458
#define OBJECT_19 457
#define OBJECT_18 456
#define OBJECT_17 455
#define OBJECT_16 454
#define OBJECT_15 453
#define OBJECT_14 452
#define OBJECT_13 451
#define OBJECT_12 450
#define OBJECT_11 449
#define OBJECT_10 448
#define OBJECT_9 447
#define OBJECT_8 446
#define OBJECT_7 445
#define OBJECT_6 444
#define OBJECT_5 443
#define OBJECT_4 442
#define OBJECT_3 441
#define OBJECT_2 440
#define OBJECT_1 439
#define OBJECT_0 438
#define EXECUTE_CACHE_84 403
#define EXECUTE_CACHE_80 405
#define EXECUTE_CACHE_73 407
#define EXECUTE_CACHE_64 409
#define EXECUTE_CACHE_60 411
#define EXECUTE_CACHE_53 413
#define FREE_REFERENCE_14 416
#define FREE_REFERENCE_13 417
#define FREE_REFERENCE_12 418
#define FREE_REFERENCE_11 419
#define FREE_REFERENCE_10 420
#define FREE_REFERENCE_9 421
#define FREE_REFERENCE_8 422
#define FREE_REFERENCE_7 423
#define FREE_REFERENCE_6 424
#define FREE_REFERENCE_5 425
#define FREE_REFERENCE_4 426
#define FREE_REFERENCE_3 427
#define FREE_REFERENCE_2 428
#define FREE_REFERENCE_1 429
#define FREE_REFERENCE_0 430
#define GLOBAL_EXECUTE_CACHE_23 432
#define GLOBAL_EXECUTE_CACHE_19 434
#define GLOBAL_EXECUTE_CACHE_7 436
#define FREE_REFERENCES_LABEL_0 402
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
unicode_so_8b10fefb265c6c1c (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
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
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto label_179;

    case 14:
      current_block = (Rpc - LABEL_18);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto continuation_20;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_29);
      goto label_180;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto Z__make_wide_string_204;

    case 20:
      current_block = (Rpc - LABEL_27);
      goto continuation_23;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto continuation_24;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto continuation_25;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_26;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_27;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto continuation_28;

    case 27:
      current_block = (Rpc - LABEL_35);
      goto continuation_29;

    case 28:
      current_block = (Rpc - LABEL_36);
      goto continuation_30;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto continuation_31;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto continuation_32;

    case 31:
      current_block = (Rpc - LABEL_39);
      goto continuation_33;

    case 32:
      current_block = (Rpc - LABEL_40);
      goto continuation_34;

    case 33:
      current_block = (Rpc - LABEL_41);
      goto continuation_35;

    case 34:
      current_block = (Rpc - LABEL_42);
      goto continuation_36;

    case 35:
      current_block = (Rpc - LABEL_43);
      goto continuation_37;

    case 36:
      current_block = (Rpc - LABEL_44);
      goto continuation_38;

    case 37:
      current_block = (Rpc - LABEL_45);
      goto continuation_39;

    case 38:
      current_block = (Rpc - LABEL_46);
      goto continuation_40;

    case 39:
      current_block = (Rpc - LABEL_47);
      goto continuation_41;

    case 40:
      current_block = (Rpc - LABEL_48);
      goto continuation_42;

    case 41:
      current_block = (Rpc - LABEL_49);
      goto continuation_43;

    case 42:
      current_block = (Rpc - LABEL_50);
      goto continuation_44;

    case 43:
      current_block = (Rpc - LABEL_51);
      goto continuation_46;

    case 44:
      current_block = (Rpc - LABEL_52);
      goto continuation_45;

    case 45:
      current_block = (Rpc - LABEL_54);
      goto continuation_48;

    case 46:
      current_block = (Rpc - LABEL_58);
      goto label_181;

    case 47:
      current_block = (Rpc - LABEL_59);
      goto label_182;

    case 48:
      current_block = (Rpc - LABEL_55);
      goto continuation_47;

    case 49:
      current_block = (Rpc - LABEL_56);
      goto continuation_50;

    case 50:
      current_block = (Rpc - LABEL_63);
      goto label_183;

    case 51:
      current_block = (Rpc - LABEL_57);
      goto continuation_49;

    case 52:
      current_block = (Rpc - LABEL_61);
      goto continuation_52;

    case 53:
      current_block = (Rpc - LABEL_67);
      goto label_184;

    case 54:
      current_block = (Rpc - LABEL_62);
      goto continuation_51;

    case 55:
      current_block = (Rpc - LABEL_65);
      goto continuation_54;

    case 56:
      current_block = (Rpc - LABEL_70);
      goto label_185;

    case 57:
      current_block = (Rpc - LABEL_66);
      goto continuation_53;

    case 58:
      current_block = (Rpc - LABEL_68);
      goto continuation_56;

    case 59:
      current_block = (Rpc - LABEL_69);
      goto continuation_55;

    case 60:
      current_block = (Rpc - LABEL_71);
      goto continuation_58;

    case 61:
      current_block = (Rpc - LABEL_72);
      goto continuation_57;

    case 62:
      current_block = (Rpc - LABEL_74);
      goto continuation_60;

    case 63:
      current_block = (Rpc - LABEL_78);
      goto label_186;

    case 64:
      current_block = (Rpc - LABEL_79);
      goto label_187;

    case 65:
      current_block = (Rpc - LABEL_75);
      goto continuation_59;

    case 66:
      current_block = (Rpc - LABEL_76);
      goto continuation_62;

    case 67:
      current_block = (Rpc - LABEL_83);
      goto label_188;

    case 68:
      current_block = (Rpc - LABEL_77);
      goto continuation_61;

    case 69:
      current_block = (Rpc - LABEL_81);
      goto continuation_64;

    case 70:
      current_block = (Rpc - LABEL_87);
      goto label_189;

    case 71:
      current_block = (Rpc - LABEL_82);
      goto continuation_63;

    case 72:
      current_block = (Rpc - LABEL_85);
      goto continuation_66;

    case 73:
      current_block = (Rpc - LABEL_90);
      goto label_190;

    case 74:
      current_block = (Rpc - LABEL_86);
      goto continuation_65;

    case 75:
      current_block = (Rpc - LABEL_88);
      goto continuation_68;

    case 76:
      current_block = (Rpc - LABEL_89);
      goto continuation_67;

    case 77:
      current_block = (Rpc - LABEL_91);
      goto continuation_69;

    case 78:
      current_block = (Rpc - LABEL_92);
      goto continuation_70;

    case 79:
      current_block = (Rpc - LABEL_93);
      goto continuation_71;

    case 80:
      current_block = (Rpc - LABEL_94);
      goto continuation_72;

    case 81:
      current_block = (Rpc - LABEL_95);
      goto continuation_73;

    case 82:
      current_block = (Rpc - LABEL_96);
      goto continuation_74;

    case 83:
      current_block = (Rpc - LABEL_97);
      goto continuation_75;

    case 84:
      current_block = (Rpc - LABEL_98);
      goto continuation_76;

    case 85:
      current_block = (Rpc - LABEL_99);
      goto continuation_77;

    case 86:
      current_block = (Rpc - LABEL_100);
      goto continuation_78;

    case 87:
      current_block = (Rpc - LABEL_101);
      goto continuation_79;

    case 88:
      current_block = (Rpc - LABEL_102);
      goto continuation_80;

    case 89:
      current_block = (Rpc - LABEL_103);
      goto continuation_81;

    case 90:
      current_block = (Rpc - LABEL_104);
      goto continuation_82;

    case 91:
      current_block = (Rpc - LABEL_105);
      goto continuation_83;

    case 92:
      current_block = (Rpc - LABEL_106);
      goto continuation_84;

    case 93:
      current_block = (Rpc - LABEL_107);
      goto continuation_85;

    case 94:
      current_block = (Rpc - LABEL_108);
      goto continuation_86;

    case 95:
      current_block = (Rpc - LABEL_109);
      goto continuation_87;

    case 96:
      current_block = (Rpc - LABEL_110);
      goto continuation_88;

    case 97:
      current_block = (Rpc - LABEL_111);
      goto continuation_89;

    case 98:
      current_block = (Rpc - LABEL_112);
      goto continuation_90;

    case 99:
      current_block = (Rpc - LABEL_113);
      goto continuation_91;

    case 100:
      current_block = (Rpc - LABEL_114);
      goto continuation_92;

    case 101:
      current_block = (Rpc - LABEL_115);
      goto continuation_93;

    case 102:
      current_block = (Rpc - LABEL_116);
      goto continuation_94;

    case 103:
      current_block = (Rpc - LABEL_117);
      goto continuation_96;

    case 104:
      current_block = (Rpc - LABEL_118);
      goto continuation_95;

    case 105:
      current_block = (Rpc - LABEL_119);
      goto continuation_98;

    case 106:
      current_block = (Rpc - LABEL_123);
      goto label_191;

    case 107:
      current_block = (Rpc - LABEL_124);
      goto label_192;

    case 108:
      current_block = (Rpc - LABEL_120);
      goto continuation_97;

    case 109:
      current_block = (Rpc - LABEL_121);
      goto continuation_100;

    case 110:
      current_block = (Rpc - LABEL_127);
      goto label_193;

    case 111:
      current_block = (Rpc - LABEL_122);
      goto continuation_99;

    case 112:
      current_block = (Rpc - LABEL_125);
      goto continuation_102;

    case 113:
      current_block = (Rpc - LABEL_130);
      goto label_194;

    case 114:
      current_block = (Rpc - LABEL_126);
      goto continuation_101;

    case 115:
      current_block = (Rpc - LABEL_128);
      goto continuation_104;

    case 116:
      current_block = (Rpc - LABEL_133);
      goto label_195;

    case 117:
      current_block = (Rpc - LABEL_129);
      goto continuation_103;

    case 118:
      current_block = (Rpc - LABEL_131);
      goto continuation_106;

    case 119:
      current_block = (Rpc - LABEL_132);
      goto continuation_105;

    case 120:
      current_block = (Rpc - LABEL_134);
      goto continuation_108;

    case 121:
      current_block = (Rpc - LABEL_135);
      goto continuation_107;

    case 122:
      current_block = (Rpc - LABEL_136);
      goto continuation_110;

    case 123:
      current_block = (Rpc - LABEL_140);
      goto label_196;

    case 124:
      current_block = (Rpc - LABEL_141);
      goto label_197;

    case 125:
      current_block = (Rpc - LABEL_137);
      goto continuation_109;

    case 126:
      current_block = (Rpc - LABEL_138);
      goto continuation_112;

    case 127:
      current_block = (Rpc - LABEL_144);
      goto label_198;

    case 128:
      current_block = (Rpc - LABEL_139);
      goto continuation_111;

    case 129:
      current_block = (Rpc - LABEL_142);
      goto continuation_114;

    case 130:
      current_block = (Rpc - LABEL_147);
      goto label_199;

    case 131:
      current_block = (Rpc - LABEL_143);
      goto continuation_113;

    case 132:
      current_block = (Rpc - LABEL_145);
      goto continuation_116;

    case 133:
      current_block = (Rpc - LABEL_150);
      goto label_200;

    case 134:
      current_block = (Rpc - LABEL_146);
      goto continuation_115;

    case 135:
      current_block = (Rpc - LABEL_148);
      goto continuation_118;

    case 136:
      current_block = (Rpc - LABEL_149);
      goto continuation_117;

    case 137:
      current_block = (Rpc - LABEL_151);
      goto continuation_119;

    case 138:
      current_block = (Rpc - LABEL_152);
      goto continuation_120;

    case 139:
      current_block = (Rpc - LABEL_153);
      goto continuation_121;

    case 140:
      current_block = (Rpc - LABEL_154);
      goto continuation_122;

    case 141:
      current_block = (Rpc - LABEL_155);
      goto continuation_123;

    case 142:
      current_block = (Rpc - LABEL_156);
      goto continuation_124;

    case 143:
      current_block = (Rpc - LABEL_157);
      goto continuation_125;

    case 144:
      current_block = (Rpc - LABEL_158);
      goto continuation_126;

    case 145:
      current_block = (Rpc - LABEL_159);
      goto continuation_127;

    case 146:
      current_block = (Rpc - LABEL_160);
      goto continuation_128;

    case 147:
      current_block = (Rpc - LABEL_161);
      goto continuation_129;

    case 148:
      current_block = (Rpc - LABEL_162);
      goto continuation_130;

    case 149:
      current_block = (Rpc - LABEL_163);
      goto continuation_131;

    case 150:
      current_block = (Rpc - LABEL_164);
      goto continuation_132;

    case 151:
      current_block = (Rpc - LABEL_165);
      goto continuation_133;

    case 152:
      current_block = (Rpc - LABEL_166);
      goto continuation_134;

    case 153:
      current_block = (Rpc - LABEL_167);
      goto continuation_135;

    case 154:
      current_block = (Rpc - LABEL_168);
      goto continuation_136;

    case 155:
      current_block = (Rpc - LABEL_169);
      goto continuation_137;

    case 156:
      current_block = (Rpc - LABEL_170);
      goto continuation_138;

    case 157:
      current_block = (Rpc - LABEL_171);
      goto continuation_139;

    case 158:
      current_block = (Rpc - LABEL_172);
      goto continuation_140;

    case 159:
      current_block = (Rpc - LABEL_173);
      goto continuation_141;

    case 160:
      current_block = (Rpc - LABEL_174);
      goto continuation_142;

    case 161:
      current_block = (Rpc - LABEL_175);
      goto continuation_143;

    case 162:
      current_block = (Rpc - LABEL_176);
      goto continuation_144;

    case 163:
      current_block = (Rpc - LABEL_177);
      goto continuation_145;

    case 164:
      current_block = (Rpc - LABEL_178);
      goto continuation_146;

    case 165:
      current_block = (Rpc - LABEL_179);
      goto continuation_147;

    case 166:
      current_block = (Rpc - LABEL_180);
      goto continuation_148;

    case 167:
      current_block = (Rpc - LABEL_181);
      goto continuation_149;

    case 168:
      current_block = (Rpc - LABEL_182);
      goto continuation_150;

    case 169:
      current_block = (Rpc - LABEL_183);
      goto continuation_151;

    case 170:
      current_block = (Rpc - LABEL_184);
      goto continuation_152;

    case 171:
      current_block = (Rpc - LABEL_185);
      goto continuation_154;

    case 172:
      current_block = (Rpc - LABEL_189);
      goto label_201;

    case 173:
      current_block = (Rpc - LABEL_186);
      goto continuation_153;

    case 174:
      current_block = (Rpc - LABEL_187);
      goto continuation_156;

    case 175:
      current_block = (Rpc - LABEL_188);
      goto continuation_155;

    case 176:
      current_block = (Rpc - LABEL_190);
      goto continuation_158;

    case 177:
      current_block = (Rpc - LABEL_194);
      goto label_202;

    case 178:
      current_block = (Rpc - LABEL_191);
      goto continuation_157;

    case 179:
      current_block = (Rpc - LABEL_192);
      goto continuation_160;

    case 180:
      current_block = (Rpc - LABEL_193);
      goto continuation_159;

    case 181:
      current_block = (Rpc - LABEL_195);
      goto continuation_161;

    case 182:
      current_block = (Rpc - LABEL_196);
      goto continuation_162;

    case 183:
      current_block = (Rpc - LABEL_197);
      goto continuation_163;

    case 184:
      current_block = (Rpc - LABEL_198);
      goto continuation_164;

    case 185:
      current_block = (Rpc - LABEL_199);
      goto continuation_165;

    case 186:
      current_block = (Rpc - LABEL_200);
      goto continuation_166;

    case 187:
      current_block = (Rpc - LABEL_201);
      goto continuation_167;

    case 188:
      current_block = (Rpc - LABEL_202);
      goto continuation_168;

    case 189:
      current_block = (Rpc - LABEL_203);
      goto continuation_169;

    case 190:
      current_block = (Rpc - LABEL_204);
      goto continuation_170;

    case 191:
      current_block = (Rpc - LABEL_205);
      goto continuation_171;

    case 192:
      current_block = (Rpc - LABEL_206);
      goto continuation_172;

    case 193:
      current_block = (Rpc - LABEL_207);
      goto continuation_173;

    case 194:
      current_block = (Rpc - LABEL_208);
      goto continuation_174;

    case 195:
      current_block = (Rpc - LABEL_209);
      goto continuation_175;

    case 196:
      current_block = (Rpc - LABEL_210);
      goto continuation_176;

    case 197:
      current_block = (Rpc - LABEL_211);
      goto label_206;

    case 198:
      current_block = (Rpc - LABEL_212);
      goto label_207;

    case 199:
      current_block = (Rpc - LABEL_213);
      goto expression_178;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_178)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_212])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_207)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_206)
  {
    static const short sections [] =
      {
	0,
	2,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
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
	1,
	1,
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
	0,
	0,
	1,
	1,
	2,
	2,
	1,
	1,
	2,
	2,
	1,
	2,
	2,
	1,
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
	1,
	1,
	1,
	0,
	0,
	1,
	2,
	2,
	1,
	1,
	2,
	2,
	1,
	2,
	2,
	1,
	2,
	2,
	1,
	1,
	2,
	2,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	0,
	1,
	0,
	1,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 109)
      goto label_205;
    blocks = (current_block [OBJECT_261]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_211])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_205)
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
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_24]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_19]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_255;
  Wrd11 = Wrd15;

DEFLABEL (label_254)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_253;
  Wrd11 = Wrd15;

DEFLABEL (label_252)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_55);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_251;
  Wrd11 = Wrd15;

DEFLABEL (label_250)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_249;
  Wrd17 = Wrd21;

DEFLABEL (label_248)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_57);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_247;
  Wrd11 = Wrd15;

DEFLABEL (label_246)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_62);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_245;
  Wrd11 = Wrd15;

DEFLABEL (label_244)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_66);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_243;
  Wrd11 = Wrd15;

DEFLABEL (label_242)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_69);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_72);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_75);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_241;
  Wrd11 = Wrd15;

DEFLABEL (label_240)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_239;
  Wrd17 = Wrd21;

DEFLABEL (label_238)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_77);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_237;
  Wrd11 = Wrd15;

DEFLABEL (label_236)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_82);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_235;
  Wrd11 = Wrd15;

DEFLABEL (label_234)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_86);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_233;
  Wrd11 = Wrd15;

DEFLABEL (label_232)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_89);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_118);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_120);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_231;
  Wrd11 = Wrd15;

DEFLABEL (label_230)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_229;
  Wrd17 = Wrd21;

DEFLABEL (label_228)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60]));

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_122);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_227;
  Wrd11 = Wrd15;

DEFLABEL (label_226)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_126);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_225;
  Wrd11 = Wrd15;

DEFLABEL (label_224)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_129);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_128);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_223;
  Wrd11 = Wrd15;

DEFLABEL (label_222)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_132);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_131);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_135);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_134);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_137);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_136);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_221;
  Wrd11 = Wrd15;

DEFLABEL (label_220)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_219;
  Wrd17 = Wrd21;

DEFLABEL (label_218)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80]));

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_139);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_138);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_217;
  Wrd11 = Wrd15;

DEFLABEL (label_216)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84]));

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_143);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_142);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_145]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_215;
  Wrd11 = Wrd15;

DEFLABEL (label_214)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84]));

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_146);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_145);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_213;
  Wrd11 = Wrd15;

DEFLABEL (label_212)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84]));

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_149);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_148);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_151);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_152);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_153);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_154);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_155);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_156);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_157]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_157);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_158);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_159]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_171]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_159);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_160]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_160);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_161]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_161);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_162]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_162);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_163]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_163);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_164]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_132)
  INTERRUPT_CHECK (27, LABEL_164);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_165);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_166);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_167);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_168);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_191]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_169);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_170]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_192]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_193]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_138)
  INTERRUPT_CHECK (27, LABEL_170);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_194]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_195]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_171);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_172]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_196]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_197]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_172);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_173]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_198]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_199]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_173);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_174]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_200]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_201]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_174);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_202]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_143)
  INTERRUPT_CHECK (27, LABEL_175);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_176]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_204]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_205]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_144)
  INTERRUPT_CHECK (27, LABEL_176);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_177]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_206]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_207]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_145)
  INTERRUPT_CHECK (27, LABEL_177);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_178]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_209]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_146)
  INTERRUPT_CHECK (27, LABEL_178);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_179]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_210]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_211]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_147)
  INTERRUPT_CHECK (27, LABEL_179);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_180]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_212]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_213]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_148)
  INTERRUPT_CHECK (27, LABEL_180);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_181]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_214]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_215]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_149)
  INTERRUPT_CHECK (27, LABEL_181);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_182]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_216]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_217]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_150)
  INTERRUPT_CHECK (27, LABEL_182);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_183]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_218]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_219]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_151)
  INTERRUPT_CHECK (27, LABEL_183);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_184]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_220]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_221]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_152)
  INTERRUPT_CHECK (27, LABEL_184);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_185]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_186]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_222]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_153)
  INTERRUPT_CHECK (27, LABEL_186);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_223]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_154)
  INTERRUPT_CHECK (27, LABEL_185);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_187]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_188]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_211;
  Wrd11 = Wrd15;

DEFLABEL (label_210)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (continuation_155)
  INTERRUPT_CHECK (27, LABEL_188);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_224]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_156)
  INTERRUPT_CHECK (27, LABEL_187);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_190]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_191]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_222]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_157)
  INTERRUPT_CHECK (27, LABEL_191);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_225]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_158)
  INTERRUPT_CHECK (27, LABEL_190);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_192]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_193]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_209;
  Wrd11 = Wrd15;

DEFLABEL (label_208)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84]));

DEFLABEL (continuation_159)
  INTERRUPT_CHECK (27, LABEL_193);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_228]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_160)
  INTERRUPT_CHECK (27, LABEL_192);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_195]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_226]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_227]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_161)
  INTERRUPT_CHECK (27, LABEL_195);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_196]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_229]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_230]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_162)
  INTERRUPT_CHECK (27, LABEL_196);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_197]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_231]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_232]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_163)
  INTERRUPT_CHECK (27, LABEL_197);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_198]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_233]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_234]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_164)
  INTERRUPT_CHECK (27, LABEL_198);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_199]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_235]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_236]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_165)
  INTERRUPT_CHECK (27, LABEL_199);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_200]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_237]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_238]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_166)
  INTERRUPT_CHECK (27, LABEL_200);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_201]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_239]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_240]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_167)
  INTERRUPT_CHECK (27, LABEL_201);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_202]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_241]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_242]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_168)
  INTERRUPT_CHECK (27, LABEL_202);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_203]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_243]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_244]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_169)
  INTERRUPT_CHECK (27, LABEL_203);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_204]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_245]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_246]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_170)
  INTERRUPT_CHECK (27, LABEL_204);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_205]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_247]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_248]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_171)
  INTERRUPT_CHECK (27, LABEL_205);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_206]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_249]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_250]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_172)
  INTERRUPT_CHECK (27, LABEL_206);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_207]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_251]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_252]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_173)
  INTERRUPT_CHECK (27, LABEL_207);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_208]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_253]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_254]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_174)
  INTERRUPT_CHECK (27, LABEL_208);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_209]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_255]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_256]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_175)
  INTERRUPT_CHECK (27, LABEL_209);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_210]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_257]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_258]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_176)
  INTERRUPT_CHECK (27, LABEL_210);
  (Wrd5.Obj) = (current_block [OBJECT_259]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_260]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_209)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_194])), (Wrd12.pObj));

DEFLABEL (label_202)
  (Wrd11.Obj) = Rvl;
  goto label_208;

DEFLABEL (label_211)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_189])), (Wrd12.pObj));

DEFLABEL (label_201)
  (Wrd11.Obj) = Rvl;
  goto label_210;

DEFLABEL (label_213)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_150])), (Wrd12.pObj));

DEFLABEL (label_200)
  (Wrd11.Obj) = Rvl;
  goto label_212;

DEFLABEL (label_215)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_147])), (Wrd12.pObj));

DEFLABEL (label_199)
  (Wrd11.Obj) = Rvl;
  goto label_214;

DEFLABEL (label_217)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_144])), (Wrd12.pObj));

DEFLABEL (label_198)
  (Wrd11.Obj) = Rvl;
  goto label_216;

DEFLABEL (label_219)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_141])), (Wrd18.pObj));

DEFLABEL (label_197)
  (Wrd17.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_140])), (Wrd12.pObj));

DEFLABEL (label_196)
  (Wrd11.Obj) = Rvl;
  goto label_220;

DEFLABEL (label_223)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_133])), (Wrd12.pObj));

DEFLABEL (label_195)
  (Wrd11.Obj) = Rvl;
  goto label_222;

DEFLABEL (label_225)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_130])), (Wrd12.pObj));

DEFLABEL (label_194)
  (Wrd11.Obj) = Rvl;
  goto label_224;

DEFLABEL (label_227)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_127])), (Wrd12.pObj));

DEFLABEL (label_193)
  (Wrd11.Obj) = Rvl;
  goto label_226;

DEFLABEL (label_229)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_124])), (Wrd18.pObj));

DEFLABEL (label_192)
  (Wrd17.Obj) = Rvl;
  goto label_228;

DEFLABEL (label_231)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_123])), (Wrd12.pObj));

DEFLABEL (label_191)
  (Wrd11.Obj) = Rvl;
  goto label_230;

DEFLABEL (label_233)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90])), (Wrd12.pObj));

DEFLABEL (label_190)
  (Wrd11.Obj) = Rvl;
  goto label_232;

DEFLABEL (label_235)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87])), (Wrd12.pObj));

DEFLABEL (label_189)
  (Wrd11.Obj) = Rvl;
  goto label_234;

DEFLABEL (label_237)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83])), (Wrd12.pObj));

DEFLABEL (label_188)
  (Wrd11.Obj) = Rvl;
  goto label_236;

DEFLABEL (label_239)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79])), (Wrd18.pObj));

DEFLABEL (label_187)
  (Wrd17.Obj) = Rvl;
  goto label_238;

DEFLABEL (label_241)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78])), (Wrd12.pObj));

DEFLABEL (label_186)
  (Wrd11.Obj) = Rvl;
  goto label_240;

DEFLABEL (label_243)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70])), (Wrd12.pObj));

DEFLABEL (label_185)
  (Wrd11.Obj) = Rvl;
  goto label_242;

DEFLABEL (label_245)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67])), (Wrd12.pObj));

DEFLABEL (label_184)
  (Wrd11.Obj) = Rvl;
  goto label_244;

DEFLABEL (label_247)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63])), (Wrd12.pObj));

DEFLABEL (label_183)
  (Wrd11.Obj) = Rvl;
  goto label_246;

DEFLABEL (label_249)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59])), (Wrd18.pObj));

DEFLABEL (label_182)
  (Wrd17.Obj) = Rvl;
  goto label_248;

DEFLABEL (label_251)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58])), (Wrd12.pObj));

DEFLABEL (label_181)
  (Wrd11.Obj) = Rvl;
  goto label_250;

DEFLABEL (label_253)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd12.pObj));

DEFLABEL (label_180)
  (Wrd11.Obj) = Rvl;
  goto label_252;

DEFLABEL (label_255)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd12.pObj));

DEFLABEL (label_179)
  (Wrd11.Obj) = Rvl;
  goto label_254;

DEFLABEL (Z__make_wide_string_204)
  CLOSURE_HEADER (LABEL_25);

DEFLABEL (Z__make_wide_string_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd7.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_unicode_so_8b10fefb265c6c1c [109] =
  {
    { "unicode_so_code_1", 19, unicode_so_code_1 },
    { "unicode_so_code_2", 3, unicode_so_code_2 },
    { "unicode_so_code_3", 5, unicode_so_code_3 },
    { "unicode_so_code_4", 3, unicode_so_code_4 },
    { "unicode_so_code_5", 5, unicode_so_code_5 },
    { "unicode_so_code_6", 5, unicode_so_code_6 },
    { "unicode_so_code_7", 3, unicode_so_code_7 },
    { "unicode_so_code_8", 3, unicode_so_code_8 },
    { "unicode_so_code_9", 5, unicode_so_code_9 },
    { "unicode_so_code_10", 4, unicode_so_code_10 },
    { "unicode_so_code_11", 1, unicode_so_code_11 },
    { "unicode_so_code_12", 4, unicode_so_code_12 },
    { "unicode_so_code_13", 2, unicode_so_code_13 },
    { "unicode_so_code_14", 1, unicode_so_code_14 },
    { "unicode_so_code_15", 3, unicode_so_code_15 },
    { "unicode_so_code_16", 4, unicode_so_code_16 },
    { "unicode_so_code_17", 3, unicode_so_code_17 },
    { "unicode_so_code_18", 2, unicode_so_code_18 },
    { "unicode_so_code_19", 5, unicode_so_code_19 },
    { "unicode_so_code_20", 2, unicode_so_code_20 },
    { "unicode_so_code_21", 6, unicode_so_code_21 },
    { "unicode_so_code_22", 2, unicode_so_code_22 },
    { "unicode_so_code_23", 5, unicode_so_code_23 },
    { "unicode_so_code_24", 7, unicode_so_code_24 },
    { "unicode_so_code_25", 3, unicode_so_code_25 },
    { "unicode_so_code_26", 2, unicode_so_code_26 },
    { "unicode_so_code_27", 1, unicode_so_code_27 },
    { "unicode_so_code_28", 4, unicode_so_code_28 },
    { "unicode_so_code_29", 5, unicode_so_code_29 },
    { "unicode_so_code_30", 3, unicode_so_code_30 },
    { "unicode_so_code_31", 3, unicode_so_code_31 },
    { "unicode_so_code_32", 7, unicode_so_code_32 },
    { "unicode_so_code_33", 2, unicode_so_code_33 },
    { "unicode_so_code_34", 3, unicode_so_code_34 },
    { "unicode_so_code_35", 3, unicode_so_code_35 },
    { "unicode_so_code_36", 2, unicode_so_code_36 },
    { "unicode_so_code_37", 3, unicode_so_code_37 },
    { "unicode_so_code_38", 3, unicode_so_code_38 },
    { "unicode_so_code_39", 2, unicode_so_code_39 },
    { "unicode_so_code_40", 2, unicode_so_code_40 },
    { "unicode_so_code_41", 2, unicode_so_code_41 },
    { "unicode_so_code_42", 7, unicode_so_code_42 },
    { "unicode_so_code_43", 2, unicode_so_code_43 },
    { "unicode_so_code_44", 2, unicode_so_code_44 },
    { "unicode_so_code_45", 2, unicode_so_code_45 },
    { "unicode_so_code_46", 7, unicode_so_code_46 },
    { "unicode_so_code_47", 4, unicode_so_code_47 },
    { "unicode_so_code_48", 4, unicode_so_code_48 },
    { "unicode_so_code_49", 7, unicode_so_code_49 },
    { "unicode_so_code_50", 1, unicode_so_code_50 },
    { "unicode_so_code_51", 1, unicode_so_code_51 },
    { "unicode_so_code_52", 1, unicode_so_code_52 },
    { "unicode_so_code_53", 2, unicode_so_code_53 },
    { "unicode_so_code_54", 1, unicode_so_code_54 },
    { "unicode_so_code_55", 2, unicode_so_code_55 },
    { "unicode_so_code_56", 1, unicode_so_code_56 },
    { "unicode_so_code_57", 2, unicode_so_code_57 },
    { "unicode_so_code_58", 1, unicode_so_code_58 },
    { "unicode_so_code_59", 2, unicode_so_code_59 },
    { "unicode_so_code_60", 3, unicode_so_code_60 },
    { "unicode_so_code_61", 3, unicode_so_code_61 },
    { "unicode_so_code_62", 2, unicode_so_code_62 },
    { "unicode_so_code_63", 3, unicode_so_code_63 },
    { "unicode_so_code_64", 3, unicode_so_code_64 },
    { "unicode_so_code_65", 2, unicode_so_code_65 },
    { "unicode_so_code_66", 2, unicode_so_code_66 },
    { "unicode_so_code_67", 2, unicode_so_code_67 },
    { "unicode_so_code_68", 7, unicode_so_code_68 },
    { "unicode_so_code_69", 2, unicode_so_code_69 },
    { "unicode_so_code_70", 2, unicode_so_code_70 },
    { "unicode_so_code_71", 2, unicode_so_code_71 },
    { "unicode_so_code_72", 7, unicode_so_code_72 },
    { "unicode_so_code_73", 10, unicode_so_code_73 },
    { "unicode_so_code_74", 1, unicode_so_code_74 },
    { "unicode_so_code_75", 1, unicode_so_code_75 },
    { "unicode_so_code_76", 3, unicode_so_code_76 },
    { "unicode_so_code_77", 3, unicode_so_code_77 },
    { "unicode_so_code_78", 1, unicode_so_code_78 },
    { "unicode_so_code_79", 1, unicode_so_code_79 },
    { "unicode_so_code_80", 1, unicode_so_code_80 },
    { "unicode_so_code_81", 1, unicode_so_code_81 },
    { "unicode_so_code_82", 1, unicode_so_code_82 },
    { "unicode_so_code_83", 2, unicode_so_code_83 },
    { "unicode_so_code_84", 1, unicode_so_code_84 },
    { "unicode_so_code_85", 2, unicode_so_code_85 },
    { "unicode_so_code_86", 1, unicode_so_code_86 },
    { "unicode_so_code_87", 2, unicode_so_code_87 },
    { "unicode_so_code_88", 1, unicode_so_code_88 },
    { "unicode_so_code_89", 2, unicode_so_code_89 },
    { "unicode_so_code_90", 1, unicode_so_code_90 },
    { "unicode_so_code_91", 2, unicode_so_code_91 },
    { "unicode_so_code_92", 1, unicode_so_code_92 },
    { "unicode_so_code_93", 3, unicode_so_code_93 },
    { "unicode_so_code_94", 3, unicode_so_code_94 },
    { "unicode_so_code_95", 3, unicode_so_code_95 },
    { "unicode_so_code_96", 7, unicode_so_code_96 },
    { "unicode_so_code_97", 7, unicode_so_code_97 },
    { "unicode_so_code_98", 1, unicode_so_code_98 },
    { "unicode_so_code_99", 2, unicode_so_code_99 },
    { "unicode_so_code_100", 1, unicode_so_code_100 },
    { "unicode_so_code_101", 13, unicode_so_code_101 },
    { "unicode_so_code_102", 1, unicode_so_code_102 },
    { "unicode_so_code_103", 1, unicode_so_code_103 },
    { "unicode_so_code_104", 1, unicode_so_code_104 },
    { "unicode_so_code_105", 1, unicode_so_code_105 },
    { "unicode_so_code_106", 1, unicode_so_code_106 },
    { "unicode_so_code_107", 6, unicode_so_code_107 },
    { "unicode_so_code_108", 6, unicode_so_code_108 },
    { "unicode_so_code_109", 11, unicode_so_code_109 }
  };

int
decl_unicode_so_8b10fefb265c6c1c (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_unicode_so_8b10fefb265c6c1c);
  return (0);
}

DECLARE_COMPILED_CODE ("unicode.so", 200, decl_unicode_so_8b10fefb265c6c1c, unicode_so_8b10fefb265c6c1c)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_unicode_so_data_8b10fefb265c6c1c [12410] =
  "\xbf\x05\xcb\x01\x81\x19\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x0d"
  "\xb9\x0d\x0d\x0d\x0d\x80\x0d\xba\x08\x85\x81\x82\x83\x84\x0d\xbb"
  "\xb3\xb3\xb3\x0d\xb3\x08\x8d\xc1\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbb\x1d\xb0\x82\x88\x28\x0d\x28\x0d\xbc\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbd\x1d\xb0\x83\x88\x0c\x0c\x80\x28\x0d\x28\x0d"
  "\xbe\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf"
  "\x1d\xb0\x84\x88\x07\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x85\x88\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88"
  "\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x81\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x1b\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d"
  "\x0c\x28\xb6\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x0f\x1d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x0d\x28\x0d\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\x1c\x1b\x81\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x81\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x1b\x81\x0d"
  "\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x81\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x1b\x81"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x1b\x1b\x81\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x07\x80\x1b\x81\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b"
  "\x1b\x81\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\xb6\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x1b\x1b\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x81\x28\x1b\x28\xb2"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x0c\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x0d\x1c\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\xc1\x1c\x1d"
  "\x28\xb1\x28\x0d\x1c\x28\xb2\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x1b\x1d\x28\xb1"
  "\x28\x0d\x1c\x28\xb2\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\xb6\x23\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\xb6"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06"
  "\x1d\x0c\x28\xb6\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x0c\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x0d\x1c\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x1b\x1d\x28\xb1"
  "\x28\x1b\x28\xb2\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x1b\x1d\x28\xb1\x28\x1b\x28"
  "\xb2\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x06\x1d\x0c\x28\xb6\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\xb6\x23\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\xb6"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d"
  "\x0c\x28\xb6\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x06\x1d\x0c\x28\xb6\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x80\x1b\x1d\x0d\x1c\x0d\x1c\x24\x28\xb1\x28\x1b\x28\xb2\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x80\x1b\x1d\x0d\x1c\x1b\x24\x28\xb1\x28\x1b"
  "\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\xb6\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x07\x02\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x0d\xb8\x0d\x0d\x1c\x0d\x1c\x0d"
  "\x0d\x1c\x1d\x1b\x1b\x0d\x1c\x1b\x1b\x0d\x1c\x1b\x1b\x24\x28\xb4"
  "\x28\x1b\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x17"
  "\xbc\x88\xb4\xb6\x2a\x1b\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\xb1\x2a\x1b\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x0d\x1b\x2a\x1b\x0d\x1b\x1b\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a"
  "\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x0d"
  "\x1b\x2a\x0d\x0d\x0d\x1c\x1b\x1b\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x0d\x1b\x2a\x0d"
  "\x0d\x0d\x1c\x1b\x1b\x0d\x0d\x0d\x1b\x1b\x1b\x1b\xb0\x1b\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b"
  "\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x2a\x1b\x0d\x1b"
  "\x2a\x0d\x1c\x0c\x0d\x08\x88\x08\x0d\x1c\x1b\x2a\x0d\x1c\x1b\x2a"
  "\x0d\x1c\x1b\x2a\x0d\x1c\x1b\x2a\x0d\x1c\x1b\x2a\x0d\x1c\x1b\x2a"
  "\x1b\x1b\x2a\x1b\xb7\x2a\xc2\x02\x02\x0d\xc3\xb2\xb5\x2a\xb3\x2a"
  "\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
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
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x56\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f"
  "\x2e\x2f\x75\x6e\x69\x63\x6f\x64\x65\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x06\x62\x65\x67\x69\x6e\x11\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x73\x74\x72\x69\x6e\x67\x05\x6c\x65\x74\x2a\x0e"
  "\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x03\x69\x66"
  "\x10\x64\x65\x66\x61\x75\x6c\x74\x2d\x6f\x62\x6a\x65\x63\x74\x3f"
  "\x18\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6c\x69\x6d\x69\x74"
  "\x65\x64\x2d\x69\x6e\x64\x65\x78\x0b\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x02\x2b\x04\x63\x64\x72\x04\x0e\x73\x79\x6e\x74\x61"
  "\x78\x2d\x6d\x61\x74\x63\x68\x3f\x03\x12\x69\x6c\x6c\x2d\x66\x6f"
  "\x72\x6d\x65\x64\x2d\x73\x79\x6e\x74\x61\x78\x04\x09\x6c\x69\x73"
  "\x74\x2d\x72\x65\x66\x04\x0d\x63\x6c\x6f\x73\x65\x2d\x73\x79\x6e"
  "\x74\x61\x78\x04\x0a\x6c\x69\x73\x74\x2d\x74\x61\x69\x6c\x04\x04"
  "\x6d\x61\x70\x05\x17\x6d\x61\x6b\x65\x2d\x73\x79\x6e\x74\x61\x63"
  "\x74\x69\x63\x2d\x63\x6c\x6f\x73\x75\x72\x65\x08\xdb\x01\x28\x81"
  "\x85\x02\xda\x01\x26\x81\x91\x02\xd9\x01\x24\x81\x93\x02\xd8\x01"
  "\x22\x81\x91\x02\xd7\x01\x20\x81\x91\x02\xd6\x01\x1e\x81\x8f\x02"
  "\xd5\x01\x1c\x81\x8f\x02\xd4\x01\x1a\x81\x8d\x02\xd3\x01\x18\x81"
  "\x8f\x02\xd2\x01\x16\x81\x8b\x02\xd1\x01\x14\x81\x8d\x02\xd0\x01"
  "\x12\x81\x89\x02\xcf\x01\x10\x81\x8b\x02\xce\x01\x0e\x81\x87\x02"
  "\xcd\x01\x0c\x81\x89\x02\xcc\x01\x0a\x81\x85\x02\xcb\x01\x08\x81"
  "\x85\x02\xca\x01\x06\x81\x87\x02\xc9\x01\x04\x84\x06\x27\x49\x02"
  "\x04\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x69\x6e\x64\x65"
  "\x78\x2d\x66\x69\x78\x6e\x75\x6d\x04\x19\x65\x72\x72\x6f\x72\x3a"
  "\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65"
  "\x6e\x74\x03\xde\x01\x08\x81\x87\x02\xdd\x01\x06\x81\x87\x02\xdc"
  "\x01\x04\x85\x08\x07\x0f\x02\x07\x61\x20\x55\x54\x46\x2d\x08\x20"
  "\x73\x74\x72\x69\x6e\x67\x05\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61"
  "\x70\x70\x65\x6e\x64\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f"
  "\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74"
  "\x03\xe3\x01\x0c\x81\x97\x02\xe2\x01\x0a\x81\x91\x02\xe1\x01\x08"
  "\x81\x93\x02\xe0\x01\x06\x81\x91\x02\xdf\x01\x04\x88\x0e\x0b\x16"
  "\x02\xe6\x01\x08\x81\x8b\x02\xe5\x01\x06\x81\x8b\x02\xe4\x01\x04"
  "\x86\x0a\x07\x0b\x09\x02\x08\x6e\x65\x77\x6c\x69\x6e\x65\x0a\x05"
  "\x12\x6f\x70\x65\x6e\x2d\x69\x6e\x70\x75\x74\x2d\x6f\x63\x74\x65"
  "\x74\x73\x04\x10\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d\x63\x6f\x64"
  "\x69\x6e\x67\x0b\x04\x15\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d\x6c"
  "\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67\x0c\x04\xeb\x01\x0c\x81"
  "\x8b\x02\xea\x01\x0a\x81\x8b\x02\xe9\x01\x08\x81\x89\x02\xe8\x01"
  "\x06\x81\x89\x02\xe7\x01\x04\x83\x04\x0b\x16\x0d\x02\x0a\x02\x13"
  "\x6f\x70\x65\x6e\x2d\x6f\x75\x74\x70\x75\x74\x2d\x6f\x63\x74\x65"
  "\x74\x73\x04\x0b\x04\x0c\x04\xf0\x01\x0c\x81\x85\x02\xef\x01\x0a"
  "\x81\x85\x02\xee\x01\x08\x81\x83\x02\xed\x01\x06\x81\x83\x02\xec"
  "\x01\x04\x83\x04\x0b\x16\x0c\x02\x08\x02\x11\x68\x6f\x73\x74\x2d"
  "\x62\x69\x67\x2d\x65\x6e\x64\x69\x61\x6e\x3f\x0b\x02\xf3\x01\x08"
  "\x81\x89\x02\xf2\x01\x06\x81\x89\x02\xf1\x01\x04\x84\x06\x07\x0d"
  "\x0a\x02\x09\x02\x0b\x02\xf6\x01\x08\x81\x83\x02\xf5\x01\x06\x81"
  "\x83\x02\xf4\x01\x04\x84\x06\x07\x0d\x0e\x02\x0a\x03\x11\x63\x6c"
  "\x6f\x73\x65\x2d\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x02\xfb"
  "\x01\x0c\x81\x8b\x02\xfa\x01\x0a\x81\x89\x02\xf9\x01\x08\x81\x87"
  "\x02\xf8\x01\x06\x81\x87\x02\xf7\x01\x04\x83\x04\x0b\x11\x0f\x02"
  "\x0b\x03\x13\x67\x65\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x21\x10\x02\xff\x01\x0a\x81\x87\x02\xfe\x01\x08"
  "\x81\x85\x02\xfd\x01\x06\x81\x85\x02\xfc\x01\x04\x83\x04\x09\x0f"
  "\x11\x02\x0c\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x12"
  "\x80\x02\x04\x83\x04\x03\x13\x02\x0d\x12\x0f\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31"
  "\x14\x02\x84\x02\x0a\x81\x85\x02\x83\x02\x08\x81\x83\x02\x82\x02"
  "\x06\x81\x83\x02\x81\x02\x04\x83\x04\x09\x12\x15\x02\x0e\x02\x03"
  "\x0d\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x3f\x16\x04\x16"
  "\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x77\x69\x64\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x17\x03\x86\x02\x06\x81\x85\x02\x85\x02\x04"
  "\x84\x04\x05\x0e\x18\x02\x0f\x08\x11\x61\x20\x55\x6e\x69\x63\x6f"
  "\x64\x65\x20\x73\x74\x72\x69\x6e\x67\x05\x02\x87\x02\x04\x84\x04"
  "\x03\x0c\x19\x02\x10\x11\x6d\x61\x6b\x65\x2d\x77\x69\x64\x65\x2d"
  "\x73\x74\x72\x69\x6e\x67\x1a\x01\x01\x08\x04\x0c\x6d\x61\x6b\x65"
  "\x2d\x76\x65\x63\x74\x6f\x72\x04\x17\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x75\x6e\x69\x63\x6f\x64\x65\x2d\x63\x68\x61\x72\x1b"
  "\x03\x12\x25\x6d\x61\x6b\x65\x2d\x77\x69\x64\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x1c\x04\x8a\x02\x08\x81\x85\x02\x89\x02\x06\x84\x04"
  "\x88\x02\x04\x81\x87\x02\x07\x14\x1d\x02\x11\x0c\x77\x69\x64\x65"
  "\x2d\x73\x74\x72\x69\x6e\x67\x1e\x04\x09\x66\x6f\x72\x2d\x65\x61"
  "\x63\x68\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72"
  "\x04\x1b\x03\x1c\x05\x8e\x02\x0a\x81\x83\x02\x8d\x02\x08\x83\x04"
  "\x8c\x02\x06\x81\x83\x02\x8b\x02\x04\xff\x03\x09\x16\x1f\x02\x12"
  "\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x20\x12"
  "\x13\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x21\x04\x16\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x22\x02\x91\x02\x08"
  "\x81\x83\x02\x90\x02\x06\x81\x83\x02\x8f\x02\x04\x83\x04\x07\x11"
  "\x23\x02\x13\x20\x12\x93\x02\x06\x81\x83\x02\x92\x02\x04\x83\x04"
  "\x05\x0b\x24\x02\x14\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66"
  "\x25\x12\x10\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x72"
  "\x65\x66\x26\x04\x22\x04\x13\x77\x69\x64\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x69\x6e\x64\x65\x78\x3f\x27\x04\x1c\x65\x72\x72\x6f"
  "\x72\x3a\x6e\x6f\x74\x2d\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2d\x69\x6e\x64\x65\x78\x28\x04\x98\x02\x0c\x81\x85\x02\x97"
  "\x02\x0a\x81\x85\x02\x96\x02\x08\x81\x85\x02\x95\x02\x06\x81\x85"
  "\x02\x94\x02\x04\x84\x06\x0b\x19\x29\x02\x15\x25\x12\x9a\x02\x06"
  "\x81\x85\x02\x99\x02\x04\x84\x06\x05\x0b\x2a\x02\x16\x0c\x76\x65"
  "\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x2b\x02\x12\x11\x77\x69\x64"
  "\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x74\x21\x2c\x04\x22"
  "\x04\x27\x04\x28\x04\x1b\x05\xa0\x02\x0e\x81\x87\x02\x9f\x02\x0c"
  "\x81\x87\x02\x9e\x02\x0a\x81\x87\x02\x9d\x02\x08\x81\x87\x02\x9c"
  "\x02\x06\x81\x87\x02\x9b\x02\x04\x85\x08\x0d\x1e\x1b\x02\x17\x2b"
  "\x02\x12\xa2\x02\x06\x81\x87\x02\xa1\x02\x04\x85\x08\x05\x0c\x2d"
  "\x02\x18\x0f\x77\x69\x64\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e"
  "\x67\x2e\x20\x12\x03\x16\x05\x10\x25\x77\x69\x64\x65\x2d\x73\x75"
  "\x62\x73\x74\x72\x69\x6e\x67\x2f\x06\x1e\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x77\x69\x64\x65\x2d\x73\x75\x62\x73\x74\x72\x69"
  "\x6e\x67\x2f\x66\x61\x69\x6c\x30\x04\xa7\x02\x0c\x81\x87\x02\xa6"
  "\x02\x0a\x81\x87\x02\xa5\x02\x08\x81\x87\x02\xa4\x02\x06\x81\x87"
  "\x02\xa3\x02\x04\x85\x08\x0b\x19\x31\x02\x19\x2b\x25\x12\x03\x1a"
  "\x02\xae\x02\x10\x81\x93\x02\xad\x02\x0e\x81\x93\x02\xac\x02\x0c"
  "\x81\x91\x02\xab\x02\x0a\x81\x8b\x02\xaa\x02\x08\x81\x89\x02\xa9"
  "\x02\x06\x81\x87\x02\xa8\x02\x04\x85\x08\x0f\x1b\x2b\x02\x1a\x20"
  "\x12\xb1\x02\x08\x81\x85\x02\xb0\x02\x06\x81\x85\x02\xaf\x02\x04"
  "\x84\x06\x07\x0e\x25\x02\x1b\x02\x04\x27\x04\x28\x03\xb3\x02\x06"
  "\x81\x87\x02\xb2\x02\x04\x85\x08\x05\x0e\x32\x02\x1c\x17\x61\x20"
  "\x55\x6e\x69\x63\x6f\x64\x65\x20\x73\x74\x72\x69\x6e\x67\x20\x69"
  "\x6e\x64\x65\x78\x05\x02\xb4\x02\x04\x84\x06\x03\x0a\x33\x02\x1d"
  "\x02\x20\x12\x03\x16\x06\x30\x03\xb8\x02\x0a\x81\x89\x02\xb7\x02"
  "\x08\x81\x89\x02\xb6\x02\x06\x81\x89\x02\xb5\x02\x04\x86\x0a\x09"
  "\x15\x34\x02\x1e\x20\x12\x04\x22\x05\x03\xbd\x02\x0c\x81\x89\x02"
  "\xbc\x02\x0a\x81\x8d\x02\xbb\x02\x08\x81\x8d\x02\xba\x02\x06\x81"
  "\x89\x02\xb9\x02\x04\x86\x0a\x0b\x16\x20\x02\x1f\x12\x6f\x70\x65"
  "\x6e\x2d\x69\x6e\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x12\x18"
  "\x6f\x70\x65\x6e\x2d\x77\x69\x64\x65\x2d\x6f\x75\x74\x70\x75\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\x35\x03\x07\x10\x25\x63\x6f\x6e\x76"
  "\x65\x72\x74\x2d\x73\x74\x72\x69\x6e\x67\x36\x02\xc0\x02\x08\x81"
  "\x8b\x02\xbf\x02\x06\x81\x8b\x02\xbe\x02\x04\x85\x04\x07\x10\x37"
  "\x02\x20\x12\x1a\x6f\x70\x65\x6e\x2d\x6e\x61\x72\x72\x6f\x77\x2d"
  "\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x38\x03\x07"
  "\x36\x02\xc3\x02\x08\x81\x8b\x02\xc2\x02\x06\x81\x8b\x02\xc1\x02"
  "\x04\x85\x04\x07\x10\x39\x02\x21\x03\x0b\x25\x72\x65\x61\x64\x2d"
  "\x63\x68\x61\x72\x3a\x03\x0c\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x3f\x3b\x04\x0c\x25\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72"
  "\x03\x10\x05\xca\x02\x10\x81\x87\x02\xc9\x02\x0e\x81\x87\x02\xc8"
  "\x02\x0c\x81\x85\x02\xc7\x02\x0a\x81\x85\x02\xc6\x02\x08\x81\x8b"
  "\x02\xc5\x02\x06\x81\x8b\x02\xc4\x02\x04\x87\x0c\x0f\x1b\x10\x02"
  "\x22\x02\x0b\x05\x1d\x75\x74\x66\x33\x32\x2d\x6c\x65\x2d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x3e\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x3c\x05\x1d\x75\x74\x66\x33\x32\x2d\x62\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x3e\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e\x67"
  "\x3d\x04\xcc\x02\x06\x81\x87\x02\xcb\x02\x04\x85\x04\x05\x0f\x3e"
  "\x02\x23\x1b\x6f\x70\x65\x6e\x2d\x75\x74\x66\x33\x32\x2d\x62\x65"
  "\x2d\x69\x6e\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x3f\x35\x03"
  "\x07\x36\x02\xcf\x02\x08\x81\x8b\x02\xce\x02\x06\x81\x8b\x02\xcd"
  "\x02\x04\x85\x04\x07\x10\x40\x02\x24\x1b\x6f\x70\x65\x6e\x2d\x75"
  "\x74\x66\x33\x32\x2d\x6c\x65\x2d\x69\x6e\x70\x75\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x41\x35\x03\x07\x36\x02\xd2\x02\x08\x81\x8b\x02"
  "\xd1\x02\x06\x81\x8b\x02\xd0\x02\x04\x85\x04\x07\x10\x42\x02\x25"
  "\x02\x0b\x05\x18\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x74\x66\x33"
  "\x32\x2d\x6c\x65\x2d\x73\x74\x72\x69\x6e\x67\x43\x05\x18\x73\x74"
  "\x72\x69\x6e\x67\x2d\x3e\x75\x74\x66\x33\x32\x2d\x62\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x44\x04\xd4\x02\x06\x81\x87\x02\xd3\x02\x04"
  "\x85\x04\x05\x0f\x45\x02\x26\x12\x1c\x6f\x70\x65\x6e\x2d\x75\x74"
  "\x66\x33\x32\x2d\x62\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x46\x03\x07\x36\x02\xd7\x02\x08\x81\x8b\x02\xd6"
  "\x02\x06\x81\x8b\x02\xd5\x02\x04\x85\x04\x07\x10\x47\x02\x27\x12"
  "\x1c\x6f\x70\x65\x6e\x2d\x75\x74\x66\x33\x32\x2d\x6c\x65\x2d\x6f"
  "\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x48\x03\x07\x36"
  "\x02\xda\x02\x08\x81\x8b\x02\xd9\x02\x06\x81\x8b\x02\xd8\x02\x04"
  "\x85\x04\x07\x10\x49\x02\x28\x02\x0b\x05\x17\x75\x74\x66\x33\x32"
  "\x2d\x6c\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x4a\x05\x17\x75\x74\x66\x33\x32\x2d\x62\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x4b\x04\xdc\x02\x06\x81"
  "\x87\x02\xdb\x02\x04\x85\x04\x05\x0f\x4c\x02\x29\x4b\x05\x33\x32"
  "\x42\x45\x1c\x75\x74\x66\x33\x32\x2d\x62\x65\x2d\x6f\x63\x74\x65"
  "\x74\x73\x2d\x3e\x63\x6f\x64\x65\x2d\x70\x6f\x69\x6e\x74\x4d\x02"
  "\x08\x15\x25\x75\x74\x66\x33\x32\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x4e\x02\xde\x02\x06\x81\x8d\x02\xdd\x02"
  "\x04\x85\x04\x05\x0f\x4f\x02\x2a\x4a\x05\x33\x32\x4c\x45\x1c\x75"
  "\x74\x66\x33\x32\x2d\x6c\x65\x2d\x6f\x63\x74\x65\x74\x73\x2d\x3e"
  "\x63\x6f\x64\x65\x2d\x70\x6f\x69\x6e\x74\x50\x02\x08\x4e\x02\xe0"
  "\x02\x06\x81\x8d\x02\xdf\x02\x04\x85\x04\x05\x0f\x51\x02\x2b\x0e"
  "\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x52\x08\x04"
  "\x08\x16\x65\x6e\x63\x6f\x64\x65\x64\x2d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x53\x05\x06\x14\x76\x61\x6c\x69\x64"
  "\x61\x74\x65\x2d\x75\x74\x66\x33\x32\x2d\x63\x68\x61\x72\x54\x05"
  "\xe7\x02\x10\x81\x89\x02\xe6\x02\x0e\x81\x91\x02\xe5\x02\x0c\x81"
  "\x8f\x02\xe4\x02\x0a\x81\x8d\x02\xe3\x02\x08\x81\x8d\x02\xe2\x02"
  "\x06\x81\x8f\x02\xe1\x02\x04\x88\x0e\x0f\x1e\x55\x02\x2c\x02\x0b"
  "\x05\x17\x75\x74\x66\x33\x32\x2d\x6c\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x2d\x76\x61\x6c\x69\x64\x3f\x56\x05\x17\x75\x74\x66\x33\x32"
  "\x2d\x62\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x76\x61\x6c\x69\x64"
  "\x3f\x57\x04\xe9\x02\x06\x81\x87\x02\xe8\x02\x04\x85\x04\x05\x0f"
  "\x58\x02\x2d\x57\x4d\x02\x07\x15\x25\x75\x74\x66\x33\x32\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x76\x61\x6c\x69\x64\x3f\x59\x02\xeb\x02"
  "\x06\x81\x8b\x02\xea\x02\x04\x85\x04\x05\x0e\x5a\x02\x2e\x56\x50"
  "\x02\x07\x59\x02\xed\x02\x06\x81\x8b\x02\xec\x02\x04\x85\x04\x05"
  "\x0e\x5b\x02\x2f\x52\x08\x04\x06\x16\x65\x6e\x63\x6f\x64\x65\x64"
  "\x2d\x73\x74\x72\x69\x6e\x67\x2d\x76\x61\x6c\x69\x64\x3f\x5c\x05"
  "\x06\x54\x05\xf4\x02\x10\x81\x89\x02\xf3\x02\x0e\x81\x8f\x02\xf2"
  "\x02\x0c\x81\x8d\x02\xf1\x02\x0a\x81\x8b\x02\xf0\x02\x08\x81\x8b"
  "\x02\xef\x02\x06\x81\x8d\x02\xee\x02\x04\x87\x0c\x0f\x1e\x5d\x02"
  "\x30\x81\x80\x80\x08\xf8\x02\x0a\x81\x89\x02\xf7\x02\x08\x81\x89"
  "\x02\xf6\x02\x06\x81\x89\x02\xf5\x02\x04\x86\x0a\x09\x0d\x5e\x02"
  "\x31\x81\x80\x80\x08\xfc\x02\x0a\x81\x8b\x02\xfb\x02\x08\x81\x89"
  "\x02\xfa\x02\x06\x81\x89\x02\xf9\x02\x04\x86\x0a\x09\x0d\x5f\x02"
  "\x32\x0e\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x72\x65\x66\x60"
  "\x03\x0f\x6c\x65\x67\x61\x6c\x2d\x63\x6f\x64\x65\x2d\x33\x32\x3f"
  "\x02\x83\x03\x10\x81\x8b\x02\x82\x03\x0e\x81\x89\x02\x81\x03\x0c"
  "\x81\x93\x02\x80\x03\x0a\x81\x91\x02\xff\x02\x08\x81\x8f\x02\xfe"
  "\x02\x06\x81\x8d\x02\xfd\x02\x04\x86\x0a\x0f\x16\x61\x02\x33\x03"
  "\x14\x75\x74\x66\x33\x32\x2d\x73\x74\x72\x69\x6e\x67\x2d\x76\x61"
  "\x6c\x69\x64\x3f\x62\x02\x84\x03\x04\x83\x04\x03\x63\x02\x34\x03"
  "\x57\x02\x85\x03\x04\x83\x04\x03\x64\x02\x35\x03\x56\x02\x86\x03"
  "\x04\x83\x04\x03\x65\x02\x36\x02\x03\x0e\x75\x74\x66\x33\x32\x2d"
  "\x73\x74\x72\x69\x6e\x67\x3f\x66\x04\x17\x65\x72\x72\x6f\x72\x3a"
  "\x6e\x6f\x74\x2d\x75\x74\x66\x33\x32\x2d\x73\x74\x72\x69\x6e\x67"
  "\x67\x03\x88\x03\x06\x81\x85\x02\x87\x03\x04\x84\x04\x05\x0e\x68"
  "\x02\x37\x08\x0e\x55\x54\x46\x2d\x33\x32\x20\x73\x74\x72\x69\x6e"
  "\x67\x05\x02\x89\x03\x04\x84\x04\x03\x0c\x69\x02\x38\x02\x03\x11"
  "\x75\x74\x66\x33\x32\x2d\x62\x65\x2d\x73\x74\x72\x69\x6e\x67\x3f"
  "\x6a\x04\x1a\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x75\x74\x66"
  "\x33\x32\x2d\x62\x65\x2d\x73\x74\x72\x69\x6e\x67\x6b\x03\x8b\x03"
  "\x06\x81\x85\x02\x8a\x03\x04\x84\x04\x05\x0e\x6c\x02\x39\x08\x10"
  "\x55\x54\x46\x2d\x33\x32\x42\x45\x20\x73\x74\x72\x69\x6e\x67\x05"
  "\x02\x8c\x03\x04\x84\x04\x03\x0c\x6d\x02\x3a\x02\x03\x11\x75\x74"
  "\x66\x33\x32\x2d\x6c\x65\x2d\x73\x74\x72\x69\x6e\x67\x3f\x6e\x04"
  "\x1a\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x75\x74\x66\x33\x32"
  "\x2d\x6c\x65\x2d\x73\x74\x72\x69\x6e\x67\x6f\x03\x8e\x03\x06\x81"
  "\x85\x02\x8d\x03\x04\x84\x04\x05\x0e\x70\x02\x3b\x08\x10\x55\x54"
  "\x46\x2d\x33\x32\x4c\x45\x20\x73\x74\x72\x69\x6e\x67\x05\x02\x8f"
  "\x03\x04\x84\x04\x03\x0c\x71\x02\x3c\x02\x0b\x05\x1d\x75\x74\x66"
  "\x31\x36\x2d\x6c\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x77\x69"
  "\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x72\x05\x1d\x75\x74\x66\x31"
  "\x36\x2d\x62\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x77\x69\x64"
  "\x65\x2d\x73\x74\x72\x69\x6e\x67\x73\x04\x91\x03\x06\x81\x87\x02"
  "\x90\x03\x04\x85\x04\x05\x0f\x74\x02\x3d\x1b\x6f\x70\x65\x6e\x2d"
  "\x75\x74\x66\x31\x36\x2d\x62\x65\x2d\x69\x6e\x70\x75\x74\x2d\x73"
  "\x74\x72\x69\x6e\x67\x75\x35\x03\x07\x36\x02\x94\x03\x08\x81\x8b"
  "\x02\x93\x03\x06\x81\x8b\x02\x92\x03\x04\x85\x04\x07\x10\x76\x02"
  "\x3e\x1b\x6f\x70\x65\x6e\x2d\x75\x74\x66\x31\x36\x2d\x6c\x65\x2d"
  "\x69\x6e\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x77\x35\x03\x07"
  "\x36\x02\x97\x03\x08\x81\x8b\x02\x96\x03\x06\x81\x8b\x02\x95\x03"
  "\x04\x85\x04\x07\x10\x78\x02\x3f\x02\x0b\x05\x18\x73\x74\x72\x69"
  "\x6e\x67\x2d\x3e\x75\x74\x66\x31\x36\x2d\x6c\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x79\x05\x18\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x74"
  "\x66\x31\x36\x2d\x62\x65\x2d\x73\x74\x72\x69\x6e\x67\x7a\x04\x99"
  "\x03\x06\x81\x87\x02\x98\x03\x04\x85\x04\x05\x0f\x7b\x02\x40\x12"
  "\x1c\x6f\x70\x65\x6e\x2d\x75\x74\x66\x31\x36\x2d\x62\x65\x2d\x6f"
  "\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x7c\x03\x07\x36"
  "\x02\x9c\x03\x08\x81\x8b\x02\x9b\x03\x06\x81\x8b\x02\x9a\x03\x04"
  "\x85\x04\x07\x10\x7d\x02\x41\x12\x1c\x6f\x70\x65\x6e\x2d\x75\x74"
  "\x66\x31\x36\x2d\x6c\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x7e\x03\x07\x36\x02\x9f\x03\x08\x81\x8b\x02\x9e"
  "\x03\x06\x81\x8b\x02\x9d\x03\x04\x85\x04\x07\x10\x7f\x02\x42\x02"
  "\x0b\x05\x17\x75\x74\x66\x31\x36\x2d\x6c\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x80\x01\x05\x17\x75\x74\x66"
  "\x31\x36\x2d\x62\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x81\x01\x04\xa1\x03\x06\x81\x87\x02\xa0\x03\x04\x85"
  "\x04\x05\x0f\x82\x01\x02\x43\x81\x01\x05\x31\x36\x42\x45\x13\x62"
  "\x65\x2d\x6f\x63\x74\x65\x74\x73\x2d\x3e\x64\x69\x67\x69\x74\x31"
  "\x36\x83\x01\x02\x08\x15\x25\x75\x74\x66\x31\x36\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x84\x01\x02\xa3\x03\x06"
  "\x81\x8d\x02\xa2\x03\x04\x85\x04\x05\x0f\x85\x01\x02\x44\x80\x01"
  "\x05\x31\x36\x4c\x45\x13\x6c\x65\x2d\x6f\x63\x74\x65\x74\x73\x2d"
  "\x3e\x64\x69\x67\x69\x74\x31\x36\x86\x01\x02\x08\x84\x01\x02\xa5"
  "\x03\x06\x81\x8d\x02\xa4\x03\x04\x85\x04\x05\x0f\x87\x01\x02\x45"
  "\x52\x08\x04\x08\x53\x05\x06\x14\x76\x61\x6c\x69\x64\x61\x74\x65"
  "\x2d\x75\x74\x66\x31\x36\x2d\x63\x68\x61\x72\x88\x01\x05\xac\x03"
  "\x10\x81\x89\x02\xab\x03\x0e\x81\x91\x02\xaa\x03\x0c\x81\x8f\x02"
  "\xa9\x03\x0a\x81\x8d\x02\xa8\x03\x08\x81\x8d\x02\xa7\x03\x06\x81"
  "\x8f\x02\xa6\x03\x04\x88\x0e\x0f\x1e\x89\x01\x02\x46\x02\x0b\x05"
  "\x17\x75\x74\x66\x31\x36\x2d\x6c\x65\x2d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x76\x61\x6c\x69\x64\x3f\x0b\x05\x17\x75\x74\x66\x31\x36\x2d"
  "\x62\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x76\x61\x6c\x69\x64\x3f"
  "\x8a\x01\x04\xae\x03\x06\x81\x87\x02\xad\x03\x04\x85\x04\x05\x0f"
  "\x8b\x01\x02\x47\x8a\x01\x83\x01\x02\x07\x15\x25\x75\x74\x66\x31"
  "\x36\x2d\x73\x74\x72\x69\x6e\x67\x2d\x76\x61\x6c\x69\x64\x3f\x8c"
  "\x01\x02\xb0\x03\x06\x81\x8b\x02\xaf\x03\x04\x85\x04\x05\x0e\x8d"
  "\x01\x02\x48\x0b\x86\x01\x02\x07\x8c\x01\x02\xb2\x03\x06\x81\x8b"
  "\x02\xb1\x03\x04\x85\x04\x05\x0e\x8e\x01\x02\x49\x52\x08\x04\x06"
  "\x5c\x05\x06\x88\x01\x05\xb9\x03\x10\x81\x89\x02\xb8\x03\x0e\x81"
  "\x8f\x02\xb7\x03\x0c\x81\x8d\x02\xb6\x03\x0a\x81\x8b\x02\xb5\x03"
  "\x08\x81\x8b\x02\xb4\x03\x06\x81\x8d\x02\xb3\x03\x04\x87\x0c\x0f"
  "\x1e\x8f\x01\x02\x4a\x60\x03\x16\x75\x74\x66\x31\x36\x2d\x68\x69"
  "\x67\x68\x2d\x73\x75\x72\x72\x6f\x67\x61\x74\x65\x3f\x90\x01\x03"
  "\x0f\x6c\x65\x67\x61\x6c\x2d\x63\x6f\x64\x65\x2d\x31\x36\x3f\x91"
  "\x01\x03\x15\x75\x74\x66\x31\x36\x2d\x6c\x6f\x77\x2d\x73\x75\x72"
  "\x72\x6f\x67\x61\x74\x65\x3f\x92\x01\x04\xc3\x03\x16\x81\x8b\x02"
  "\xc2\x03\x14\x81\x8d\x02\xc1\x03\x12\x81\x8b\x02\xc0\x03\x10\x81"
  "\x91\x02\xbf\x03\x0e\x81\x8f\x02\xbe\x03\x0c\x81\x8b\x02\xbd\x03"
  "\x0a\x81\x89\x02\xbc\x03\x08\x81\x8d\x02\xbb\x03\x06\x81\x8b\x02"
  "\xba\x03\x04\x86\x0a\x15\x20\x93\x01\x02\x4b\xc4\x03\x04\x84\x06"
  "\x03\x94\x01\x02\x4c\xc5\x03\x04\x84\x06\x03\x95\x01\x02\x4d\x19"
  "\x63\x6f\x6d\x62\x69\x6e\x65\x2d\x75\x74\x66\x31\x36\x2d\x73\x75"
  "\x72\x72\x6f\x67\x61\x74\x65\x73\x96\x01\x04\x1f\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x2d\x75\x74\x66\x31\x36\x2d\x68\x69\x67\x68"
  "\x2d\x73\x75\x72\x72\x6f\x67\x61\x74\x65\x97\x01\x04\x1e\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x75\x74\x66\x31\x36\x2d\x6c\x6f"
  "\x77\x2d\x73\x75\x72\x72\x6f\x67\x61\x74\x65\x98\x01\x03\xc8\x03"
  "\x08\x81\x85\x02\xc7\x03\x06\x81\x85\x02\xc6\x03\x04\x84\x06\x07"
  "\x10\x99\x01\x02\x4e\x1c\x73\x70\x6c\x69\x74\x2d\x69\x6e\x74\x6f"
  "\x2d\x75\x74\x66\x31\x36\x2d\x73\x75\x72\x72\x6f\x67\x61\x74\x65"
  "\x73\x9a\x01\x04\x1f\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x75"
  "\x6e\x69\x63\x6f\x64\x65\x2d\x73\x63\x61\x6c\x61\x72\x2d\x76\x61"
  "\x6c\x75\x65\x02\xcb\x03\x08\x81\x85\x02\xca\x03\x06\x81\x83\x02"
  "\xc9\x03\x04\x83\x04\x07\x0e\x9b\x01\x02\x4f\x03\x14\x75\x74\x66"
  "\x31\x36\x2d\x73\x74\x72\x69\x6e\x67\x2d\x76\x61\x6c\x69\x64\x3f"
  "\x9c\x01\x02\xcc\x03\x04\x83\x04\x03\x9d\x01\x02\x50\x03\x8a\x01"
  "\x02\xcd\x03\x04\x83\x04\x03\x9e\x01\x02\x51\x03\x0b\x02\xce\x03"
  "\x04\x83\x04\x03\x9f\x01\x02\x52\x81\xb0\x03\xcf\x03\x04\x83\x04"
  "\x03\xa0\x01\x02\x53\x81\xb8\x03\xd0\x03\x04\x83\x04\x03\xa1\x01"
  "\x02\x54\x02\x03\x0e\x75\x74\x66\x31\x36\x2d\x73\x74\x72\x69\x6e"
  "\x67\x3f\xa2\x01\x04\x17\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d"
  "\x75\x74\x66\x31\x36\x2d\x73\x74\x72\x69\x6e\x67\xa3\x01\x03\xd2"
  "\x03\x06\x81\x85\x02\xd1\x03\x04\x84\x04\x05\x0e\xa4\x01\x02\x55"
  "\x08\x0e\x55\x54\x46\x2d\x31\x36\x20\x73\x74\x72\x69\x6e\x67\x05"
  "\x02\xd3\x03\x04\x84\x04\x03\x0c\xa5\x01\x02\x56\x02\x03\x11\x75"
  "\x74\x66\x31\x36\x2d\x62\x65\x2d\x73\x74\x72\x69\x6e\x67\x3f\xa6"
  "\x01\x04\x1a\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x75\x74\x66"
  "\x31\x36\x2d\x62\x65\x2d\x73\x74\x72\x69\x6e\x67\xa7\x01\x03\xd5"
  "\x03\x06\x81\x85\x02\xd4\x03\x04\x84\x04\x05\x0e\xa8\x01\x02\x57"
  "\x08\x10\x55\x54\x46\x2d\x31\x36\x42\x45\x20\x73\x74\x72\x69\x6e"
  "\x67\x05\x02\xd6\x03\x04\x84\x04\x03\x0c\xa9\x01\x02\x58\x02\x03"
  "\x11\x75\x74\x66\x31\x36\x2d\x6c\x65\x2d\x73\x74\x72\x69\x6e\x67"
  "\x3f\xaa\x01\x04\x1a\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x75"
  "\x74\x66\x31\x36\x2d\x6c\x65\x2d\x73\x74\x72\x69\x6e\x67\xab\x01"
  "\x03\xd8\x03\x06\x81\x85\x02\xd7\x03\x04\x84\x04\x05\x0e\xac\x01"
  "\x02\x59\x08\x10\x55\x54\x46\x2d\x31\x36\x4c\x45\x20\x73\x74\x72"
  "\x69\x6e\x67\x05\x02\xd9\x03\x04\x84\x04\x03\x0c\xad\x01\x02\x5a"
  "\x02\x03\x90\x01\x04\x1f\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d"
  "\x75\x74\x66\x31\x36\x2d\x68\x69\x67\x68\x2d\x73\x75\x72\x72\x6f"
  "\x67\x61\x74\x65\xae\x01\x03\xdb\x03\x06\x81\x85\x02\xda\x03\x04"
  "\x84\x04\x05\x0e\xaf\x01\x02\x5b\x08\x16\x55\x54\x46\x2d\x31\x36"
  "\x20\x68\x69\x67\x68\x20\x73\x75\x72\x72\x6f\x67\x61\x74\x65\x05"
  "\x02\xdc\x03\x04\x84\x04\x03\x0c\xb0\x01\x02\x5c\x02\x03\x92\x01"
  "\x04\x1e\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x75\x74\x66\x31"
  "\x36\x2d\x6c\x6f\x77\x2d\x73\x75\x72\x72\x6f\x67\x61\x74\x65\xb1"
  "\x01\x03\xde\x03\x06\x81\x85\x02\xdd\x03\x04\x84\x04\x05\x0e\xb2"
  "\x01\x02\x5d\x08\x15\x55\x54\x46\x2d\x31\x36\x20\x6c\x6f\x77\x20"
  "\x73\x75\x72\x72\x6f\x67\x61\x74\x65\x05\x02\xdf\x03\x04\x84\x04"
  "\x03\x0c\xb3\x01\x02\x5e\x12\x18\x6f\x70\x65\x6e\x2d\x75\x74\x66"
  "\x38\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\xb4"
  "\x01\x03\x07\x36\x02\xe2\x03\x08\x81\x8b\x02\xe1\x03\x06\x81\x8b"
  "\x02\xe0\x03\x04\x85\x04\x07\x10\xb5\x01\x02\x5f\x17\x6f\x70\x65"
  "\x6e\x2d\x75\x74\x66\x38\x2d\x69\x6e\x70\x75\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\xb6\x01\x38\x03\x07\x36\x02\xe5\x03\x08\x81\x8b\x02"
  "\xe4\x03\x06\x81\x8b\x02\xe3\x03\x04\x85\x04\x07\x10\x38\x02\x60"
  "\xb6\x01\x35\x03\x07\x36\x02\xe8\x03\x08\x81\x8b\x02\xe7\x03\x06"
  "\x81\x8b\x02\xe6\x03\x04\x85\x04\x07\x10\x35\x02\x61\x02\x38\x52"
  "\x08\x13\x75\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65"
  "\x6e\x67\x74\x68\xb7\x01\x13\x76\x61\x6c\x69\x64\x61\x74\x65\x2d"
  "\x75\x74\x66\x38\x2d\x63\x68\x61\x72\xb8\x01\x02\x04\x08\x53\x05"
  "\x04\xef\x03\x10\x81\x8b\x02\xee\x03\x0e\x81\x8d\x02\xed\x03\x0c"
  "\x81\x89\x02\xec\x03\x0a\x81\x87\x02\xeb\x03\x08\x81\x87\x02\xea"
  "\x03\x06\x81\x89\x02\xe9\x03\x04\x85\x04\x0f\x20\xb9\x01\x02\x62"
  "\x52\x08\x13\x75\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67\x2d\x76"
  "\x61\x6c\x69\x64\x3f\x52\xb8\x01\x02\x04\x06\x5c\x05\x04\xf6\x03"
  "\x10\x81\x8b\x02\xf5\x03\x0e\x81\x8b\x02\xf4\x03\x0c\x81\x89\x02"
  "\xf3\x03\x0a\x81\x87\x02\xf2\x03\x08\x81\x87\x02\xf1\x03\x06\x81"
  "\x89\x02\xf0\x03\x04\x85\x04\x0f\x1f\x02\x63\x03\x52\x02\xf7\x03"
  "\x04\x83\x04\x03\xba\x01\x02\x64\x02\x03\x0d\x75\x74\x66\x38\x2d"
  "\x73\x74\x72\x69\x6e\x67\x3f\xbb\x01\x04\x16\x65\x72\x72\x6f\x72"
  "\x3a\x6e\x6f\x74\x2d\x75\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67"
  "\xbc\x01\x03\xf9\x03\x06\x81\x85\x02\xf8\x03\x04\x84\x04\x05\x0e"
  "\xbd\x01\x02\x65\x08\x0d\x55\x54\x46\x2d\x38\x20\x73\x74\x72\x69"
  "\x6e\x67\x05\x02\xfa\x03\x04\x84\x04\x03\x0c\xbe\x01\x02\x66\x81"
  "\x01\x60\x03\x91\x01\x02\x87\x04\x1c\x81\x89\x02\x86\x04\x1a\x81"
  "\x89\x02\x85\x04\x18\x81\x89\x02\x84\x04\x16\x81\x89\x02\x83\x04"
  "\x14\x81\x89\x02\x82\x04\x12\x81\x8d\x02\x81\x04\x10\x81\x8b\x02"
  "\x80\x04\x0e\x81\x89\x02\xff\x03\x0c\x81\x89\x02\xfe\x03\x0a\x81"
  "\x89\x02\xfd\x03\x08\x81\x89\x02\xfc\x03\x06\x81\x87\x02\xfb\x03"
  "\x04\x85\x08\x1b\x23\x91\x01\x02\x67\x88\x04\x04\x83\x04\x03\x60"
  "\x02\x68\x89\x04\x04\x84\x06\x03\xbf\x01\x02\x69\x8a\x04\x04\x84"
  "\x06\x03\xc0\x01\x02\x6a\x8b\x04\x04\x85\x08\x03\xc1\x01\x02\x6b"
  "\x81\x01\x8c\x04\x04\x83\x04\x03\xc2\x01\x02\x6c\x19\x66\x6f\x72"
  "\x2d\x61\x6c\x6c\x2d\x63\x68\x61\x72\x73\x2d\x69\x6e\x2d\x73\x74"
  "\x72\x69\x6e\x67\x3f\xc3\x01\x07\x0c\x6f\x70\x65\x6e\x2d\x73\x74"
  "\x72\x69\x6e\x67\xc4\x01\x03\x3a\x03\x3b\x04\x92\x04\x0e\x81\x8f"
  "\x02\x91\x04\x0c\x81\x8f\x02\x90\x04\x0a\x81\x8d\x02\x8f\x04\x08"
  "\x81\x8d\x02\x8e\x04\x06\x81\x8b\x02\x8d\x04\x04\x87\x06\x0d\x19"
  "\xc5\x01\x02\x6d\x18\x66\x6f\x72\x2d\x61\x6e\x79\x2d\x63\x68\x61"
  "\x72\x2d\x69\x6e\x2d\x73\x74\x72\x69\x6e\x67\x3f\xc6\x01\x07\xc4"
  "\x01\x03\x3a\x03\x3b\x04\x98\x04\x0e\x81\x8f\x02\x97\x04\x0c\x81"
  "\x8f\x02\x96\x04\x0a\x81\x8d\x02\x95\x04\x08\x81\x8d\x02\x94\x04"
  "\x06\x81\x8b\x02\x93\x04\x04\x87\x06\x0d\x19\x3b\x02\x6e\x07\x73"
  "\x74\x72\x69\x6e\x67\x09\x75\x74\x66\x2d\x33\x32\x6c\x65\x3a\x09"
  "\x75\x74\x66\x2d\x33\x32\x62\x65\x07\x75\x74\x66\x2d\x33\x32\x09"
  "\x75\x74\x66\x2d\x31\x36\x6c\x65\xc7\x01\x09\x75\x74\x66\x2d\x31"
  "\x36\x62\x65\xc8\x01\x07\x75\x74\x66\x2d\x31\x36\x06\x75\x74\x66"
  "\x2d\x38\xc9\x01\x08\x12\xb6\x01\x18\x6f\x70\x65\x6e\x2d\x75\x74"
  "\x66\x31\x36\x2d\x69\x6e\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x12\x75\x77\x18\x6f\x70\x65\x6e\x2d\x75\x74\x66\x33\x32\x2d\x69"
  "\x6e\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\xca\x01\x3f\x41\x09"
  "\x04\x03\x16\x05\x04\xa3\x04\x18\x81\x8d\x02\xa2\x04\x16\x81\x81"
  "\x02\xa1\x04\x14\x81\x81\x02\xa0\x04\x12\x81\x81\x02\x9f\x04\x10"
  "\x81\x81\x02\x9e\x04\x0e\x81\x81\x02\x9d\x04\x0c\x81\x81\x02\x9c"
  "\x04\x0a\x81\x81\x02\x9b\x04\x08\x81\x8d\x02\x9a\x04\x06\x87\x0c"
  "\x99\x04\x04\x81\x8b\x02\x17\x33\x6e\x06\xc4\x01\xc6\x01\x3b\x04"
  "\xc3\x01\xc5\x01\x04\x10\x25\x76\x61\x6c\x69\x64\x2d\x74\x72\x61"
  "\x69\x6c\x65\x72\x3f\xc2\x01\x04\x05\x25\x63\x70\x33\xc1\x01\x04"
  "\x05\x25\x76\x73\x34\xc0\x01\x04\x05\x25\x76\x73\x33\xbf\x01\x04"
  "\x05\x25\x76\x73\x32\x60\x04\xb8\x01\x91\x01\x04\xbc\x01\xbe\x01"
  "\x04\x16\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x75\x74\x66\x38"
  "\x2d\x73\x74\x72\x69\x6e\x67\xbd\x01\x04\xbb\x01\xba\x01\x04\x52"
  "\x04\xb7\x01\xb9\x01\x04\x19\x75\x74\x66\x38\x2d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x3e\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x35"
  "\x04\x14\x75\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73"
  "\x74\x72\x69\x6e\x67\x38\x04\x1d\x63\x61\x6c\x6c\x2d\x77\x69\x74"
  "\x68\x2d\x75\x74\x66\x38\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x14\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x74\x66"
  "\x38\x2d\x73\x74\x72\x69\x6e\x67\xb5\x01\x04\xb4\x01\x1c\x63\x61"
  "\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x75\x74\x66\x38\x2d\x69\x6e\x70"
  "\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\xb6\x01\xc9\x01\xb1\x01\xb3"
  "\x01\x04\x98\x01\xb2\x01\x04\xae\x01\xb0\x01\x04\x97\x01\xaf\x01"
  "\x04\xab\x01\xad\x01\x04\x1a\x67\x75\x61\x72\x61\x6e\x74\x65\x65"
  "\x2d\x75\x74\x66\x31\x36\x2d\x6c\x65\x2d\x73\x74\x72\x69\x6e\x67"
  "\xac\x01\x04\xa7\x01\xa9\x01\x04\x1a\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x75\x74\x66\x31\x36\x2d\x62\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\xa8\x01\x04\xa3\x01\xa5\x01\x04\x17\x67\x75\x61\x72\x61"
  "\x6e\x74\x65\x65\x2d\x75\x74\x66\x31\x36\x2d\x73\x74\x72\x69\x6e"
  "\x67\xa4\x01\x04\x92\x01\xa1\x01\x04\x90\x01\xa0\x01\x04\xaa\x01"
  "\x9f\x01\x04\xa6\x01\x9e\x01\x04\xa2\x01\x9d\x01\x04\x9a\x01\x9b"
  "\x01\x04\x96\x01\x99\x01\x04\x86\x01\x95\x01\x04\x83\x01\x94\x01"
  "\x04\x88\x01\x93\x01\x04\x8c\x01\x8f\x01\x04\x0b\x8e\x01\x04\x8a"
  "\x01\x8d\x01\x04\x9c\x01\x8b\x01\x04\x84\x01\x89\x01\x04\x80\x01"
  "\x87\x01\x04\x81\x01\x85\x01\x04\x14\x75\x74\x66\x31\x36\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x82\x01\x04\x79"
  "\x7f\x04\x7a\x7d\x04\x15\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x74"
  "\x66\x31\x36\x2d\x73\x74\x72\x69\x6e\x67\x7b\x04\x72\x78\x04\x73"
  "\x76\x04\x1e\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x75\x74\x66"
  "\x31\x36\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x1a\x75\x74\x66\x31\x36\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x77"
  "\x69\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x74\x04\x21\x63\x61\x6c"
  "\x6c\x2d\x77\x69\x74\x68\x2d\x75\x74\x66\x31\x36\x2d\x6c\x65\x2d"
  "\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x21\x63\x61"
  "\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x75\x74\x66\x31\x36\x2d\x62\x65"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x19\x6f"
  "\x70\x65\x6e\x2d\x75\x74\x66\x31\x36\x2d\x6f\x75\x74\x70\x75\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\xc9\x01\x7e\x7c\x1d\x63\x61\x6c\x6c"
  "\x2d\x77\x69\x74\x68\x2d\x75\x74\x66\x31\x36\x2d\x69\x6e\x70\x75"
  "\x74\x2d\x73\x74\x72\x69\x6e\x67\x20\x63\x61\x6c\x6c\x2d\x77\x69"
  "\x74\x68\x2d\x75\x74\x66\x31\x36\x2d\x6c\x65\x2d\x69\x6e\x70\x75"
  "\x74\x2d\x73\x74\x72\x69\x6e\x67\x20\x63\x61\x6c\x6c\x2d\x77\x69"
  "\x74\x68\x2d\x75\x74\x66\x31\x36\x2d\x62\x65\x2d\x69\x6e\x70\x75"
  "\x74\x2d\x73\x74\x72\x69\x6e\x67\x12\x77\x75\xc7\x01\xc8\x01\x6f"
  "\x71\x04\x1a\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x75\x74\x66"
  "\x33\x32\x2d\x6c\x65\x2d\x73\x74\x72\x69\x6e\x67\x70\x04\x6b\x6d"
  "\x04\x1a\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x75\x74\x66\x33"
  "\x32\x2d\x62\x65\x2d\x73\x74\x72\x69\x6e\x67\x6c\x04\x67\x69\x04"
  "\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x75\x74\x66\x33\x32"
  "\x2d\x73\x74\x72\x69\x6e\x67\x68\x04\x6e\x65\x04\x6a\x64\x04\x66"
  "\x63\x04\x54\x61\x04\x50\x5f\x04\x4d\x5e\x04\x59\x5d\x04\x56\x5b"
  "\x04\x57\x5a\x04\x62\x58\x04\x4e\x55\x04\x4a\x51\x04\x4b\x4f\x04"
  "\x14\x75\x74\x66\x33\x32\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x4c\x04\x43\x49\x04\x44\x47\x04\x15\x73\x74\x72"
  "\x69\x6e\x67\x2d\x3e\x75\x74\x66\x33\x32\x2d\x73\x74\x72\x69\x6e"
  "\x67\x45\x04\x3c\x42\x04\x3d\x40\x04\x1e\x63\x61\x6c\x6c\x2d\x77"
  "\x69\x74\x68\x2d\x75\x74\x66\x33\x32\x2d\x6f\x75\x74\x70\x75\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\x1a\x75\x74\x66\x33\x32\x2d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x3e\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x3e\x04\x21\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x75\x74"
  "\x66\x33\x32\x2d\x6c\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x21\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x75"
  "\x74\x66\x33\x32\x2d\x62\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73"
  "\x74\x72\x69\x6e\x67\x19\x6f\x70\x65\x6e\x2d\x75\x74\x66\x33\x32"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\xc8\x01"
  "\x48\x46\x1d\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x75\x74\x66"
  "\x33\x32\x2d\x69\x6e\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x20"
  "\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x75\x74\x66\x33\x32\x2d"
  "\x6c\x65\x2d\x69\x6e\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x20"
  "\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x75\x74\x66\x33\x32\x2d"
  "\x62\x65\x2d\x69\x6e\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\xca"
  "\x01\x41\x3f\x3a\x36\x10\x04\x14\x77\x69\x64\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x3e\x73\x74\x72\x69\x6e\x67\x39\x04\x14\x73\x74"
  "\x72\x69\x6e\x67\x2d\x3e\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x37\x04\x30\x20\x04\x19\x67\x75\x61\x72\x61\x6e\x74\x65\x65"
  "\x2d\x77\x69\x64\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x34"
  "\x04\x28\x33\x04\x1c\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x77"
  "\x69\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x69\x6e\x64\x65\x78"
  "\x32\x04\x27\x25\x04\x2f\x2b\x04\x2e\x31\x04\x12\x25\x77\x69\x64"
  "\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x74\x21\x2d\x04\x2c"
  "\x1b\x04\x11\x25\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x72\x65\x66\x2a\x04\x26\x29\x04\x14\x25\x77\x69\x64\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x24\x04\x21\x23"
  "\x04\x1e\x1f\x04\x1a\x1d\x06\x17\x19\x04\x22\x18\x04\x14\x16\x15"
  "\x04\x1c\x15\x77\x69\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d\x63"
  "\x6f\x6e\x74\x65\x6e\x74\x73\x13\x04\x0e\x3c\x77\x69\x64\x65\x2d"
  "\x73\x74\x72\x69\x6e\x67\x3e\xc7\x01\x0c\x77\x69\x64\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x09\x63\x6f\x6e\x74\x65\x6e\x74\x73\x15\x6f"
  "\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x63\x61\x6c"
  "\x6c\x65\x72\xc6\x01\x11\x04\x14\x69\x6e\x70\x75\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x63\x61\x6c\x6c\x65\x72\xc5\x01\x0f\x04\x14"
  "\x65\x6e\x64\x65\x64\x2d\x6f\x75\x74\x70\x75\x74\x2d\x6f\x70\x65"
  "\x6e\x65\x72\xc4\x01\x0e\x04\x13\x65\x6e\x64\x65\x64\x2d\x69\x6e"
  "\x70\x75\x74\x2d\x6f\x70\x65\x6e\x65\x72\xc3\x01\x0a\x04\x14\x63"
  "\x6f\x64\x65\x64\x2d\x6f\x75\x74\x70\x75\x74\x2d\x6f\x70\x65\x6e"
  "\x65\x72\xc2\x01\x0c\x04\x13\x63\x6f\x64\x65\x64\x2d\x69\x6e\x70"
  "\x75\x74\x2d\x6f\x70\x65\x6e\x65\x72\xc1\x01\x0d\x04\x5c\x09\x04"
  "\x53\x04\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x33\x10\x14\x77"
  "\x69\x74\x68\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x61\x72"
  "\x67\x73\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x04\x04\x04\x1f\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d"
  "\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70"
  "\x61\x6e\x64\x65\x72\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d"
  "\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61"
  "\x67\x04\xc7\x01\x41\x3f\xca\x01\x48\x46\xc8\x01\x77\x75\x12\x7e"
  "\x7c\xc9\x01\xb6\x01\xb4\x01\x10\x03\xc1\x01\x04\xc3\x01\x03\xc5"
  "\x01\x03\xc2\x01\x04\xc4\x01\x03\xc6\x01\x07\xc8\x01\x92\x03\x80"
  "\x80\x04\xc7\x01\x90\x03\x81\x81\x02\xc6\x01\x8e\x03\x81\x81\x02"
  "\xc5\x01\x8c\x03\x81\x83\x02\xc4\x01\x8a\x03\x81\x83\x02\xc3\x01"
  "\x88\x03\x81\x83\x02\xc2\x01\x86\x03\x81\x83\x02\xc1\x01\x84\x03"
  "\x81\x83\x02\xc0\x01\x82\x03\x81\x83\x02\xbf\x01\x80\x03\x81\x83"
  "\x02\xbe\x01\xfe\x02\x81\x83\x02\xbd\x01\xfc\x02\x81\x83\x02\xbc"
  "\x01\xfa\x02\x81\x83\x02\xbb\x01\xf8\x02\x81\x83\x02\xba\x01\xf6"
  "\x02\x81\x83\x02\xb9\x01\xf4\x02\x81\x83\x02\xb8\x01\xf2\x02\x81"
  "\x83\x02\xb7\x01\xf0\x02\x81\x83\x02\xb6\x01\xee\x02\x81\x83\x02"
  "\xb5\x01\xec\x02\x81\x85\x02\xb4\x01\xea\x02\x81\x83\x02\xb3\x01"
  "\xe8\x02\x81\x85\x02\xb2\x01\xe6\x02\x81\x87\x02\xb1\x01\xe4\x02"
  "\x81\x83\x02\xb0\x01\xe2\x02\x81\x85\x02\xaf\x01\xe0\x02\x81\x83"
  "\x02\xae\x01\xde\x02\x81\x85\x02\xad\x01\xdc\x02\x81\x87\x02\xac"
  "\x01\xda\x02\x81\x83\x02\xab\x01\xd8\x02\x81\x83\x02\xaa\x01\xd6"
  "\x02\x81\x83\x02\xa9\x01\xd4\x02\x81\x83\x02\xa8\x01\xd2\x02\x81"
  "\x83\x02\xa7\x01\xd0\x02\x81\x83\x02\xa6\x01\xce\x02\x81\x83\x02"
  "\xa5\x01\xcc\x02\x81\x83\x02\xa4\x01\xca\x02\x81\x83\x02\xa3\x01"
  "\xc8\x02\x81\x83\x02\xa2\x01\xc6\x02\x81\x83\x02\xa1\x01\xc4\x02"
  "\x81\x83\x02\xa0\x01\xc2\x02\x81\x83\x02\x9f\x01\xc0\x02\x81\x83"
  "\x02\x9e\x01\xbe\x02\x81\x83\x02\x9d\x01\xbc\x02\x81\x83\x02\x9c"
  "\x01\xba\x02\x81\x83\x02\x9b\x01\xb8\x02\x81\x83\x02\x9a\x01\xb6"
  "\x02\x81\x83\x02\x99\x01\xb4\x02\x81\x83\x02\x98\x01\xb2\x02\x81"
  "\x83\x02\x97\x01\xb0\x02\x81\x83\x02\x96\x01\xae\x02\x81\x83\x02"
  "\x95\x01\xac\x02\x81\x83\x02\x94\x01\xaa\x02\x81\x83\x02\x93\x01"
  "\xa8\x02\x81\x83\x02\x92\x01\xa6\x02\x81\x83\x02\x91\x01\xa4\x02"
  "\x81\x83\x02\x90\x01\xa2\x02\x81\x83\x02\x8f\x01\xa0\x02\x81\x83"
  "\x02\x8e\x01\x9e\x02\x81\x83\x02\x8d\x01\x9c\x02\x81\x83\x02\x8c"
  "\x01\x9a\x02\x81\x83\x02\x8b\x01\x98\x02\x81\x83\x02\x8a\x01\x96"
  "\x02\x81\x83\x02\x89\x01\x94\x02\x81\x85\x02\x88\x01\x92\x02\x81"
  "\x83\x02\x87\x01\x90\x02\x81\x85\x02\x86\x01\x8e\x02\x81\x87\x02"
  "\x85\x01\x8c\x02\x81\x83\x02\x84\x01\x8a\x02\x81\x85\x02\x83\x01"
  "\x88\x02\x81\x87\x02\x82\x01\x86\x02\x81\x83\x02\x81\x01\x84\x02"
  "\x81\x85\x02\x80\x01\x82\x02\x81\x87\x02\x7f\x80\x02\x81\x83\x02"
  "\x7e\xfe\x01\x81\x85\x02\x7d\xfc\x01\x81\x89\x02\x7c\xfa\x01\x81"
  "\x87\x02\x7b\xf8\x01\x81\x83\x02\x7a\xf6\x01\x81\x85\x02\x79\xf4"
  "\x01\x81\x83\x02\x78\xf2\x01\x81\x85\x02\x77\xf0\x01\x81\x83\x02"
  "\x76\xee\x01\x81\x85\x02\x75\xec\x01\x81\x87\x02\x74\xea\x01\x81"
  "\x83\x02\x73\xe8\x01\x81\x85\x02\x72\xe6\x01\x81\x87\x02\x71\xe4"
  "\x01\x81\x83\x02\x70\xe2\x01\x81\x85\x02\x6f\xe0\x01\x81\x87\x02"
  "\x6e\xde\x01\x81\x83\x02\x6d\xdc\x01\x81\x85\x02\x6c\xda\x01\x81"
  "\x89\x02\x6b\xd8\x01\x81\x87\x02\x6a\xd6\x01\x81\x83\x02\x69\xd4"
  "\x01\x81\x85\x02\x68\xd2\x01\x81\x83\x02\x67\xd0\x01\x81\x83\x02"
  "\x66\xce\x01\x81\x83\x02\x65\xcc\x01\x81\x83\x02\x64\xca\x01\x81"
  "\x83\x02\x63\xc8\x01\x81\x83\x02\x62\xc6\x01\x81\x83\x02\x61\xc4"
  "\x01\x81\x83\x02\x60\xc2\x01\x81\x83\x02\x5f\xc0\x01\x81\x83\x02"
  "\x5e\xbe\x01\x81\x83\x02\x5d\xbc\x01\x81\x83\x02\x5c\xba\x01\x81"
  "\x83\x02\x5b\xb8\x01\x81\x83\x02\x5a\xb6\x01\x81\x83\x02\x59\xb4"
  "\x01\x81\x83\x02\x58\xb2\x01\x81\x83\x02\x57\xb0\x01\x81\x83\x02"
  "\x56\xae\x01\x81\x83\x02\x55\xac\x01\x81\x83\x02\x54\xaa\x01\x81"
  "\x83\x02\x53\xa8\x01\x81\x83\x02\x52\xa6\x01\x81\x83\x02\x51\xa4"
  "\x01\x81\x83\x02\x50\xa2\x01\x81\x83\x02\x4f\xa0\x01\x81\x83\x02"
  "\x4e\x9e\x01\x81\x83\x02\x4d\x9c\x01\x81\x85\x02\x4c\x9a\x01\x81"
  "\x83\x02\x4b\x98\x01\x81\x85\x02\x4a\x96\x01\x81\x87\x02\x49\x94"
  "\x01\x81\x83\x02\x48\x92\x01\x81\x85\x02\x47\x90\x01\x81\x87\x02"
  "\x46\x8e\x01\x81\x83\x02\x45\x8c\x01\x81\x85\x02\x44\x8a\x01\x81"
  "\x87\x02\x43\x88\x01\x81\x83\x02\x42\x86\x01\x81\x85\x02\x41\x84"
  "\x01\x81\x89\x02\x40\x82\x01\x81\x87\x02\x3f\x80\x01\x81\x83\x02"
  "\x3e\x7e\x81\x85\x02\x3d\x7c\x81\x83\x02\x3c\x7a\x81\x85\x02\x3b"
  "\x78\x81\x83\x02\x3a\x76\x81\x85\x02\x39\x74\x81\x87\x02\x38\x72"
  "\x81\x83\x02\x37\x70\x81\x85\x02\x36\x6e\x81\x87\x02\x35\x6c\x81"
  "\x83\x02\x34\x6a\x81\x85\x02\x33\x68\x81\x87\x02\x32\x66\x81\x83"
  "\x02\x31\x64\x81\x85\x02\x30\x62\x81\x89\x02\x2f\x60\x81\x87\x02"
  "\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x85\x02\x2c\x5a\x81\x83\x02\x2b"
  "\x58\x81\x83\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x83\x02\x28\x52"
  "\x81\x83\x02\x27\x50\x81\x83\x02\x26\x4e\x81\x83\x02\x25\x4c\x81"
  "\x83\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x83\x02\x22\x46\x81\x83"
  "\x02\x21\x44\x81\x83\x02\x20\x42\x81\x83\x02\x1f\x40\x81\x83\x02"
  "\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x83\x02\x1b"
  "\x38\x81\x83\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x83\x02\x18\x32"
  "\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x85\x02\x15\x2c\x81"
  "\x83\x02\x14\x2a\x81\x85\x02\x13\x28\x81\x87\x02\x12\x26\x81\x83"
  "\x02\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x85\x02"
  "\x0e\x1e\x81\x87\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b"
  "\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12"
  "\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81"
  "\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x87\x02\x02\x06\x81\x85"
  "\x02\x01\x04\x81\x83\x02\x91\x03\xbf\x05";

SCHEME_OBJECT *
unicode_so_data_8b10fefb265c6c1c (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_unicode_so_data_8b10fefb265c6c1c [0]))), (sizeof (prog_unicode_so_data_8b10fefb265c6c1c)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_213]));
}

DECLARE_COMPILED_DATA_NS ("unicode.so", unicode_so_data_8b10fefb265c6c1c)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("unicode.so", "c72a63d2e8bdf710")
