/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:18-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define ENVIRONMENT_LABEL_1_3 13
#define DEBUGGING_LABEL_1_2 12
#define OBJECT_1_2 11
#define OBJECT_1_1 10
#define OBJECT_1_0 9
#define EXECUTE_CACHE_1_7 7
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd88;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_37;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_40)
DEFLABEL (lambda_37)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_43;

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_1_0])))
    goto label_42;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_42;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_45;

DEFLABEL (label_44)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_1_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_44;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_44;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_1_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_46;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_47;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_49;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (Wrd30.Obj)))
    goto label_48;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_48;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = ((Wrd69.pObj) [1]);
  if ((Wrd71.Obj) == (Wrd42.Obj))
    goto label_51;

DEFLABEL (label_50)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd77.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd77.Obj) == (Wrd42.Obj)))
    goto label_50;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd85.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 2;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd85.pObj)));
  Wrd88 = Wrd85;
  ((Wrd88.pObj) [2]) = (Wrd38.Obj);
  ((Wrd88.pObj) [3]) = (Wrd70.Obj);
  Rvl = (Wrd84.Obj);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_7 7
#define LABEL_2_9 9
#define LABEL_2_10 11
#define LABEL_2_12 13
#define LABEL_2_13 15
#define ENVIRONMENT_LABEL_2_3 33
#define DEBUGGING_LABEL_2_2 32
#define OBJECT_2_6 31
#define OBJECT_2_5 30
#define OBJECT_2_4 29
#define OBJECT_2_3 28
#define OBJECT_2_2 27
#define OBJECT_2_1 26
#define OBJECT_2_0 25
#define EXECUTE_CACHE_2_15 17
#define EXECUTE_CACHE_2_14 19
#define EXECUTE_CACHE_2_11 21
#define EXECUTE_CACHE_2_8 23
#define FREE_REFERENCES_LABEL_2_0 16
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_2_4);
      goto lambda_70;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_74;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_46;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_47;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_48;

    case 5:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_50;

    case 6:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_73)
DEFLABEL (lambda_70)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_2_0])))
    goto label_75;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_75;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_78;

DEFLABEL (label_77)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_2_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_77;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_77;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_2_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_79;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_80;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_82;

DEFLABEL (label_81)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_2_3])))
    goto label_81;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_81;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_84;

DEFLABEL (label_83)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_83;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_83;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_85;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_86;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_88;

DEFLABEL (label_87)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (Wrd30.Obj)))
    goto label_87;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_87;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_90;

DEFLABEL (label_89)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_90)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_89;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_89;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_74)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_54)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (Wrd10.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_7 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_12 13
#define LABEL_3_13 15
#define ENVIRONMENT_LABEL_3_3 33
#define DEBUGGING_LABEL_3_2 32
#define OBJECT_3_6 31
#define OBJECT_3_5 30
#define OBJECT_3_4 29
#define OBJECT_3_3 28
#define OBJECT_3_2 27
#define OBJECT_3_1 26
#define OBJECT_3_0 25
#define EXECUTE_CACHE_3_15 17
#define EXECUTE_CACHE_3_14 19
#define EXECUTE_CACHE_3_11 21
#define EXECUTE_CACHE_3_8 23
#define FREE_REFERENCES_LABEL_3_0 16
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_70;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_74;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_46;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_47;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_48;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_50;

    case 6:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_73)
DEFLABEL (lambda_70)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_3_0])))
    goto label_75;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_75;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_78;

DEFLABEL (label_77)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_3_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_77;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_77;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_3_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_79;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_80;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_82;

DEFLABEL (label_81)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_3_3])))
    goto label_81;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_81;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_84;

DEFLABEL (label_83)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_83;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_83;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_85;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_86;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_88;

DEFLABEL (label_87)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (Wrd30.Obj)))
    goto label_87;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_87;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_90;

DEFLABEL (label_89)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_90)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_89;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_89;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_74)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_54)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_3_12);
  (Wrd10.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define LABEL_4_7 7
#define LABEL_4_9 9
#define LABEL_4_11 11
#define LABEL_4_12 13
#define ENVIRONMENT_LABEL_4_3 31
#define DEBUGGING_LABEL_4_2 30
#define OBJECT_4_6 29
#define OBJECT_4_5 28
#define OBJECT_4_4 27
#define OBJECT_4_3 26
#define OBJECT_4_2 25
#define OBJECT_4_1 24
#define OBJECT_4_0 23
#define EXECUTE_CACHE_4_14 15
#define EXECUTE_CACHE_4_13 17
#define EXECUTE_CACHE_4_10 19
#define EXECUTE_CACHE_4_8 21
#define FREE_REFERENCES_LABEL_4_0 14
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_68;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_72;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_46;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_47;

    case 4:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_49;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_71)
DEFLABEL (lambda_68)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_4_0])))
    goto label_73;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_73;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_4_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_75;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_75;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_4_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_77;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_78;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_80;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_4_3])))
    goto label_79;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_79;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_82;

DEFLABEL (label_81)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (current_block [OBJECT_4_4])))
    goto label_81;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_81;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_83;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_83)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_84;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (Wrd30.Obj)))
    goto label_85;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_85;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_88;

DEFLABEL (label_87)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_87;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_87;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_72)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_52)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_4_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Wrd10.Obj) = (current_block [OBJECT_4_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_7 7
#define LABEL_5_9 9
#define LABEL_5_11 11
#define LABEL_5_12 13
#define ENVIRONMENT_LABEL_5_3 31
#define DEBUGGING_LABEL_5_2 30
#define OBJECT_5_6 29
#define OBJECT_5_5 28
#define OBJECT_5_4 27
#define OBJECT_5_3 26
#define OBJECT_5_2 25
#define OBJECT_5_1 24
#define OBJECT_5_0 23
#define EXECUTE_CACHE_5_14 15
#define EXECUTE_CACHE_5_13 17
#define EXECUTE_CACHE_5_10 19
#define EXECUTE_CACHE_5_8 21
#define FREE_REFERENCES_LABEL_5_0 14
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_68;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_72;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_46;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_47;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_49;

    case 5:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_71)
DEFLABEL (lambda_68)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_5_0])))
    goto label_73;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_73;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_5_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_75;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_75;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_5_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_77;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_78;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_80;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_5_3])))
    goto label_79;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_79;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_82;

DEFLABEL (label_81)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (current_block [OBJECT_5_4])))
    goto label_81;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_81;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_83;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_83)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_84;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (Wrd30.Obj)))
    goto label_85;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_85;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_88;

DEFLABEL (label_87)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_87;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_87;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_72)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_52)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_5_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (Wrd10.Obj) = (current_block [OBJECT_5_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define ENVIRONMENT_LABEL_6_3 14
#define DEBUGGING_LABEL_6_2 13
#define EXECUTE_CACHE_6_8 9
#define EXECUTE_CACHE_6_6 11
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto standard_unary_conversion_4;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_unary_conversion_7)
DEFLABEL (standard_unary_conversion_4)
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
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd6.Obj);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_8 9
#define ENVIRONMENT_LABEL_7_3 16
#define DEBUGGING_LABEL_7_2 15
#define EXECUTE_CACHE_7_9 11
#define EXECUTE_CACHE_7_6 13
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_7_4);
      goto standard_binary_conversion_6;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_binary_conversion_9)
DEFLABEL (standard_binary_conversion_6)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [9]);
  (Rsp [6]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [7]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [8]) = (Wrd7.Obj);
  (Rsp [9]) = Rvl;
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define ENVIRONMENT_LABEL_8_3 15
#define DEBUGGING_LABEL_8_2 14
#define OBJECT_8_0 13
#define EXECUTE_CACHE_8_8 9
#define EXECUTE_CACHE_8_7 11
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_8_4);
      goto object__type_2;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object__type_5)
DEFLABEL (object__type_2)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd10.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define ENVIRONMENT_LABEL_9_3 15
#define DEBUGGING_LABEL_9_2 14
#define OBJECT_9_0 13
#define EXECUTE_CACHE_9_8 9
#define EXECUTE_CACHE_9_7 11
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_9_4);
      goto object__datum_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object__datum_5)
DEFLABEL (object__datum_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd10.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define ENVIRONMENT_LABEL_10_3 15
#define DEBUGGING_LABEL_10_2 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_8 9
#define EXECUTE_CACHE_10_7 11
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_10_4);
      goto object__address_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object__address_5)
DEFLABEL (object__address_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd10.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define TAG_11_6 1
#define LABEL_11_7 7
#define ENVIRONMENT_LABEL_11_3 20
#define DEBUGGING_LABEL_11_2 19
#define OBJECT_11_5 18
#define OBJECT_11_4 17
#define OBJECT_11_3 16
#define OBJECT_11_2 15
#define OBJECT_11_1 14
#define OBJECT_11_0 13
#define EXECUTE_CACHE_11_8 9
#define FREE_REFERENCE_11_0 12
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_47;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_52;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_51)
DEFLABEL (lambda_47)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_54;

DEFLABEL (label_53)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_11_0])))
    goto label_53;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_53;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_56;

DEFLABEL (label_55)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_11_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_55;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_55;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_11_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_57;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_58;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_60;

DEFLABEL (label_59)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_11_3])))
    goto label_59;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_59;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_62;

DEFLABEL (label_61)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_61;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_61;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_64;

DEFLABEL (label_63)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd93.Obj) = ((Wrd69.pObj) [1]);
  if (! ((Wrd93.Obj) == (Wrd42.Obj)))
    goto label_63;
  (Wrd97.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd97.Obj) == (Wrd42.Obj)))
    goto label_63;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd105.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 2;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd105.pObj)));
  Wrd108 = Wrd105;
  ((Wrd108.pObj) [2]) = (Wrd38.Obj);
  ((Wrd108.pObj) [3]) = (Wrd86.Obj);
  Rvl = (Wrd104.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_66;
  Wrd14 = Wrd18;

DEFLABEL (label_65)
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_7])), (Wrd15.pObj));

DEFLABEL (label_49)
  (Wrd14.Obj) = Rvl;
  goto label_65;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define TAG_12_6 1
#define LABEL_12_7 7
#define ENVIRONMENT_LABEL_12_3 20
#define DEBUGGING_LABEL_12_2 19
#define OBJECT_12_5 18
#define OBJECT_12_4 17
#define OBJECT_12_3 16
#define OBJECT_12_2 15
#define OBJECT_12_1 14
#define OBJECT_12_0 13
#define EXECUTE_CACHE_12_8 9
#define FREE_REFERENCE_12_0 12
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_12_4);
      goto lambda_47;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_52;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_51)
DEFLABEL (lambda_47)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_54;

DEFLABEL (label_53)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_12_0])))
    goto label_53;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_53;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_56;

DEFLABEL (label_55)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_12_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_55;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_55;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_12_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_57;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_58;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_60;

DEFLABEL (label_59)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_12_3])))
    goto label_59;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_59;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_62;

DEFLABEL (label_61)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_61;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_61;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_64;

DEFLABEL (label_63)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd93.Obj) = ((Wrd69.pObj) [1]);
  if (! ((Wrd93.Obj) == (Wrd42.Obj)))
    goto label_63;
  (Wrd97.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd97.Obj) == (Wrd42.Obj)))
    goto label_63;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd105.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_5])));
  Rhp += 2;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd105.pObj)));
  Wrd108 = Wrd105;
  ((Wrd108.pObj) [2]) = (Wrd38.Obj);
  ((Wrd108.pObj) [3]) = (Wrd86.Obj);
  Rvl = (Wrd104.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_12_5);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_66;
  Wrd14 = Wrd18;

DEFLABEL (label_65)
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_7])), (Wrd15.pObj));

DEFLABEL (label_49)
  (Wrd14.Obj) = Rvl;
  goto label_65;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define TAG_13_6 1
#define LABEL_13_7 7
#define ENVIRONMENT_LABEL_13_3 20
#define DEBUGGING_LABEL_13_2 19
#define OBJECT_13_5 18
#define OBJECT_13_4 17
#define OBJECT_13_3 16
#define OBJECT_13_2 15
#define OBJECT_13_1 14
#define OBJECT_13_0 13
#define EXECUTE_CACHE_13_8 9
#define FREE_REFERENCE_13_0 12
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_47;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto lambda_52;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_51)
DEFLABEL (lambda_47)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_54;

DEFLABEL (label_53)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_13_0])))
    goto label_53;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_53;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_56;

DEFLABEL (label_55)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_13_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_55;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_55;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_13_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_57;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_58;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_60;

DEFLABEL (label_59)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_13_3])))
    goto label_59;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_59;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_62;

DEFLABEL (label_61)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_61;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_61;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_64;

DEFLABEL (label_63)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd93.Obj) = ((Wrd69.pObj) [1]);
  if (! ((Wrd93.Obj) == (Wrd42.Obj)))
    goto label_63;
  (Wrd97.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd97.Obj) == (Wrd42.Obj)))
    goto label_63;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd105.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_5])));
  Rhp += 2;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd105.pObj)));
  Wrd108 = Wrd105;
  ((Wrd108.pObj) [2]) = (Wrd38.Obj);
  ((Wrd108.pObj) [3]) = (Wrd86.Obj);
  Rvl = (Wrd104.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_13_5);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_13_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_66;
  Wrd14 = Wrd18;

DEFLABEL (label_65)
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_7])), (Wrd15.pObj));

DEFLABEL (label_49)
  (Wrd14.Obj) = Rvl;
  goto label_65;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define TAG_14_6 1
#define LABEL_14_7 7
#define LABEL_14_9 9
#define LABEL_14_10 11
#define ENVIRONMENT_LABEL_14_3 26
#define DEBUGGING_LABEL_14_2 25
#define OBJECT_14_5 24
#define OBJECT_14_4 23
#define OBJECT_14_3 22
#define OBJECT_14_2 21
#define OBJECT_14_1 20
#define OBJECT_14_0 19
#define EXECUTE_CACHE_14_12 13
#define EXECUTE_CACHE_14_11 15
#define EXECUTE_CACHE_14_8 17
#define FREE_REFERENCES_LABEL_14_0 12
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_65;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_69;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto lambda_48;

    case 3:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_47;

    case 4:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_68)
DEFLABEL (lambda_65)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_14_0])))
    goto label_71;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_71;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_14_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_73;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_73;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_14_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_75;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_76;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_78;

DEFLABEL (label_77)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_14_3])))
    goto label_77;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_77;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_80;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_79;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_79;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_81;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_82;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_84;

DEFLABEL (label_83)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (Wrd30.Obj)))
    goto label_83;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_83;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_85;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_85;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (lambda_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (Rsp [6]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (lambda_70)
DEFLABEL (lambda_48)
  INTERRUPT_CHECK (26, LABEL_14_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (Wrd10.Obj) = (current_block [OBJECT_14_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define LABEL_15_7 7
#define TAG_15_8 2
#define LABEL_15_10 9
#define LABEL_15_11 11
#define ENVIRONMENT_LABEL_15_3 26
#define DEBUGGING_LABEL_15_2 25
#define OBJECT_15_5 24
#define OBJECT_15_4 23
#define OBJECT_15_3 22
#define OBJECT_15_2 21
#define OBJECT_15_1 20
#define OBJECT_15_0 19
#define EXECUTE_CACHE_15_13 13
#define EXECUTE_CACHE_15_12 15
#define EXECUTE_CACHE_15_9 17
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_15_4);
      goto lambda_65;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_69;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto lambda_70;

    case 3:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_47;

    case 4:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_68)
DEFLABEL (lambda_65)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_15_0])))
    goto label_71;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_71;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_15_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_73;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_73;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_15_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_75;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_76;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_78;

DEFLABEL (label_77)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_15_3])))
    goto label_77;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_77;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_80;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_79;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_79;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_81;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_82;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_84;

DEFLABEL (label_83)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (current_block [OBJECT_15_4])))
    goto label_83;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_83;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_85;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_85;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_15_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_7])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd19.Obj) = ((Wrd7.pObj) [4]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (lambda_70)
  CLOSURE_HEADER (LABEL_15_7);

DEFLABEL (lambda_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_12]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_15_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_13]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (Wrd10.Obj) = (current_block [OBJECT_15_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define TAG_16_6 1
#define LABEL_16_7 7
#define LABEL_16_9 9
#define LABEL_16_10 11
#define ENVIRONMENT_LABEL_16_3 26
#define DEBUGGING_LABEL_16_2 25
#define OBJECT_16_5 24
#define OBJECT_16_4 23
#define OBJECT_16_3 22
#define OBJECT_16_2 21
#define OBJECT_16_1 20
#define OBJECT_16_0 19
#define EXECUTE_CACHE_16_12 13
#define EXECUTE_CACHE_16_11 15
#define EXECUTE_CACHE_16_8 17
#define FREE_REFERENCES_LABEL_16_0 12
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_65;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_69;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto lambda_48;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_47;

    case 4:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_68)
DEFLABEL (lambda_65)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_16_0])))
    goto label_71;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_71;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_16_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_73;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_73;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_16_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_75;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_76;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_78;

DEFLABEL (label_77)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_16_3])))
    goto label_77;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_77;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_80;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_79;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_79;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_81;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_82;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_84;

DEFLABEL (label_83)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (Wrd30.Obj)))
    goto label_83;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_83;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_85;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_85;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_16_5);

DEFLABEL (lambda_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_16_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (Rsp [6]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (lambda_70)
DEFLABEL (lambda_48)
  INTERRUPT_CHECK (26, LABEL_16_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_16_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (Wrd10.Obj) = (current_block [OBJECT_16_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define TAG_17_6 1
#define LABEL_17_7 7
#define TAG_17_8 2
#define LABEL_17_10 9
#define LABEL_17_11 11
#define LABEL_17_12 13
#define ENVIRONMENT_LABEL_17_3 31
#define DEBUGGING_LABEL_17_2 30
#define OBJECT_17_6 29
#define OBJECT_17_5 28
#define OBJECT_17_4 27
#define OBJECT_17_3 26
#define OBJECT_17_2 25
#define OBJECT_17_1 24
#define OBJECT_17_0 23
#define EXECUTE_CACHE_17_15 15
#define EXECUTE_CACHE_17_14 17
#define EXECUTE_CACHE_17_13 19
#define EXECUTE_CACHE_17_9 21
#define FREE_REFERENCES_LABEL_17_0 14
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_66;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_70;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto lambda_71;

    case 3:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_48;

    case 4:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_47;

    case 5:
      current_block = (Rpc - LABEL_17_12);
      goto continuation_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_69)
DEFLABEL (lambda_66)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_73;

DEFLABEL (label_72)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_17_0])))
    goto label_72;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_72;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_75;

DEFLABEL (label_74)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_17_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_74;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_74;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_17_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_76;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_77;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_79;

DEFLABEL (label_78)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_17_3])))
    goto label_78;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_78;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_81;

DEFLABEL (label_80)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_80;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_80;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_82;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_83;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_83)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_85;

DEFLABEL (label_84)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (current_block [OBJECT_17_4])))
    goto label_84;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_84;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_87;

DEFLABEL (label_86)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_86;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_86;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_70)
  CLOSURE_HEADER (LABEL_17_5);

DEFLABEL (lambda_50)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_17_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_7])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd19.Obj) = ((Wrd7.pObj) [4]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (lambda_71)
  CLOSURE_HEADER (LABEL_17_7);

DEFLABEL (lambda_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_17_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_17_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_17_10);
  (Wrd10.Obj) = (current_block [OBJECT_17_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define TAG_18_6 1
#define LABEL_18_7 7
#define LABEL_18_9 9
#define LABEL_18_10 11
#define ENVIRONMENT_LABEL_18_3 26
#define DEBUGGING_LABEL_18_2 25
#define OBJECT_18_5 24
#define OBJECT_18_4 23
#define OBJECT_18_3 22
#define OBJECT_18_2 21
#define OBJECT_18_1 20
#define OBJECT_18_0 19
#define EXECUTE_CACHE_18_12 13
#define EXECUTE_CACHE_18_11 15
#define EXECUTE_CACHE_18_8 17
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_65;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_69;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto lambda_48;

    case 3:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_47;

    case 4:
      current_block = (Rpc - LABEL_18_10);
      goto continuation_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_68)
DEFLABEL (lambda_65)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_18_0])))
    goto label_71;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_71;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_18_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_73;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_73;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_18_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_75;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_76;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_78;

DEFLABEL (label_77)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_18_3])))
    goto label_77;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_77;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_80;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_79;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_79;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_81;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_82;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_84;

DEFLABEL (label_83)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (Wrd30.Obj)))
    goto label_83;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_83;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_85;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_85;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_18_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (Rsp [6]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (lambda_70)
DEFLABEL (lambda_48)
  INTERRUPT_CHECK (26, LABEL_18_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_18_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (Wrd10.Obj) = (current_block [OBJECT_18_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define TAG_19_6 1
#define LABEL_19_7 7
#define TAG_19_8 2
#define LABEL_19_10 9
#define LABEL_19_11 11
#define ENVIRONMENT_LABEL_19_3 26
#define DEBUGGING_LABEL_19_2 25
#define OBJECT_19_5 24
#define OBJECT_19_4 23
#define OBJECT_19_3 22
#define OBJECT_19_2 21
#define OBJECT_19_1 20
#define OBJECT_19_0 19
#define EXECUTE_CACHE_19_13 13
#define EXECUTE_CACHE_19_12 15
#define EXECUTE_CACHE_19_9 17
#define FREE_REFERENCES_LABEL_19_0 12
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_65;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto lambda_69;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto lambda_70;

    case 3:
      current_block = (Rpc - LABEL_19_10);
      goto continuation_47;

    case 4:
      current_block = (Rpc - LABEL_19_11);
      goto continuation_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_68)
DEFLABEL (lambda_65)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_19_0])))
    goto label_71;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_71;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_19_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_73;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_73;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_19_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_75;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_76;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_78;

DEFLABEL (label_77)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_19_3])))
    goto label_77;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_77;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_80;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_79;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_79;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_81;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_82;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_84;

DEFLABEL (label_83)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (current_block [OBJECT_19_4])))
    goto label_83;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_83;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_85;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_85;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_19_5);

DEFLABEL (lambda_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_19_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_7])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd19.Obj) = ((Wrd7.pObj) [4]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (lambda_70)
  CLOSURE_HEADER (LABEL_19_7);

DEFLABEL (lambda_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_19_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_19_10);
  (Wrd10.Obj) = (current_block [OBJECT_19_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define TAG_20_6 1
#define LABEL_20_7 7
#define LABEL_20_9 9
#define LABEL_20_10 11
#define ENVIRONMENT_LABEL_20_3 26
#define DEBUGGING_LABEL_20_2 25
#define OBJECT_20_5 24
#define OBJECT_20_4 23
#define OBJECT_20_3 22
#define OBJECT_20_2 21
#define OBJECT_20_1 20
#define OBJECT_20_0 19
#define EXECUTE_CACHE_20_12 13
#define EXECUTE_CACHE_20_11 15
#define EXECUTE_CACHE_20_8 17
#define FREE_REFERENCES_LABEL_20_0 12
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd88;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_41;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto lambda_45;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_27;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_29;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_44)
DEFLABEL (lambda_41)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_47;

DEFLABEL (label_46)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_20_0])))
    goto label_46;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_46;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_49;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_20_1])))
    goto label_48;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_48;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_20_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_50;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_51;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_53;

DEFLABEL (label_52)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_20_3])))
    goto label_52;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_52;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = ((Wrd69.pObj) [1]);
  if ((Wrd71.Obj) == (Wrd42.Obj))
    goto label_55;

DEFLABEL (label_54)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd77.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd77.Obj) == (Wrd42.Obj)))
    goto label_54;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd85.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_5])));
  Rhp += 2;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd85.pObj)));
  Wrd88 = Wrd85;
  ((Wrd88.pObj) [2]) = (Wrd38.Obj);
  ((Wrd88.pObj) [3]) = (Wrd70.Obj);
  Rvl = (Wrd84.Obj);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_20_5);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_20_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (Wrd10.Obj) = (current_block [OBJECT_20_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define TAG_21_6 1
#define LABEL_21_7 7
#define LABEL_21_9 9
#define LABEL_21_10 11
#define LABEL_21_11 13
#define ENVIRONMENT_LABEL_21_3 29
#define DEBUGGING_LABEL_21_2 28
#define OBJECT_21_4 27
#define OBJECT_21_3 26
#define OBJECT_21_2 25
#define OBJECT_21_1 24
#define OBJECT_21_0 23
#define EXECUTE_CACHE_21_14 15
#define EXECUTE_CACHE_21_13 17
#define EXECUTE_CACHE_21_12 19
#define EXECUTE_CACHE_21_8 21
#define FREE_REFERENCES_LABEL_21_0 14
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd88;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_21_4);
      goto lambda_42;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto lambda_46;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_27;

    case 3:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_30;

    case 4:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_29;

    case 5:
      current_block = (Rpc - LABEL_21_11);
      goto continuation_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_45)
DEFLABEL (lambda_42)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_48;

DEFLABEL (label_47)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_21_0])))
    goto label_47;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_47;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_50;

DEFLABEL (label_49)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_21_1])))
    goto label_49;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_49;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_21_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_51;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_52;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_54;

DEFLABEL (label_53)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_21_3])))
    goto label_53;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_53;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = ((Wrd69.pObj) [1]);
  if ((Wrd71.Obj) == (Wrd42.Obj))
    goto label_56;

DEFLABEL (label_55)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd77.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd77.Obj) == (Wrd42.Obj)))
    goto label_55;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd85.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_5])));
  Rhp += 2;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd85.pObj)));
  Wrd88 = Wrd85;
  ((Wrd88.pObj) [2]) = (Wrd38.Obj);
  ((Wrd88.pObj) [3]) = (Wrd70.Obj);
  Rvl = (Wrd84.Obj);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_21_5);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_21_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_14]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_13]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_21_9);
  (Wrd10.Obj) = (current_block [OBJECT_21_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define TAG_22_6 1
#define LABEL_22_7 7
#define LABEL_22_9 9
#define LABEL_22_10 11
#define LABEL_22_11 13
#define LABEL_22_12 15
#define ENVIRONMENT_LABEL_22_3 34
#define DEBUGGING_LABEL_22_2 33
#define OBJECT_22_5 32
#define OBJECT_22_4 31
#define OBJECT_22_3 30
#define OBJECT_22_2 29
#define OBJECT_22_1 28
#define OBJECT_22_0 27
#define EXECUTE_CACHE_22_16 17
#define EXECUTE_CACHE_22_15 19
#define EXECUTE_CACHE_22_14 21
#define EXECUTE_CACHE_22_13 23
#define EXECUTE_CACHE_22_8 25
#define FREE_REFERENCES_LABEL_22_0 16
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_22_4);
      goto lambda_53;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto lambda_57;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_35;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_39;

    case 4:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_38;

    case 5:
      current_block = (Rpc - LABEL_22_11);
      goto continuation_37;

    case 6:
      current_block = (Rpc - LABEL_22_12);
      goto continuation_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_56)
DEFLABEL (lambda_53)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_59;

DEFLABEL (label_58)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_22_0])))
    goto label_58;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_58;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_61;

DEFLABEL (label_60)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_22_1])))
    goto label_60;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_60;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_22_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_62;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_63;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_65;

DEFLABEL (label_64)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_22_3])))
    goto label_64;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_64;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_67;

DEFLABEL (label_66)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (current_block [OBJECT_22_4])))
    goto label_66;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_66;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_69;

DEFLABEL (label_68)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd93.Obj) = ((Wrd69.pObj) [1]);
  if (! ((Wrd93.Obj) == (Wrd42.Obj)))
    goto label_68;
  (Wrd97.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd97.Obj) == (Wrd42.Obj)))
    goto label_68;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd105.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_5])));
  Rhp += 2;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd105.pObj)));
  Wrd108 = Wrd105;
  ((Wrd108.pObj) [2]) = (Wrd38.Obj);
  ((Wrd108.pObj) [3]) = (Wrd86.Obj);
  Rvl = (Wrd104.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_57)
  CLOSURE_HEADER (LABEL_22_5);

DEFLABEL (lambda_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_13]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_22_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_16]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_22_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_15]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_22_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (Wrd10.Obj) = (current_block [OBJECT_22_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define TAG_23_8 2
#define LABEL_23_9 9
#define LABEL_23_11 11
#define LABEL_23_12 13
#define LABEL_23_13 15
#define LABEL_23_14 17
#define ENVIRONMENT_LABEL_23_3 38
#define DEBUGGING_LABEL_23_2 37
#define OBJECT_23_5 36
#define OBJECT_23_4 35
#define OBJECT_23_3 34
#define OBJECT_23_2 33
#define OBJECT_23_1 32
#define OBJECT_23_0 31
#define EXECUTE_CACHE_23_18 19
#define EXECUTE_CACHE_23_17 21
#define EXECUTE_CACHE_23_16 23
#define EXECUTE_CACHE_23_15 25
#define EXECUTE_CACHE_23_10 27
#define EXECUTE_CACHE_23_6 29
#define FREE_REFERENCES_LABEL_23_0 18
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_23_4);
      goto lambda_54;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_35;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto lambda_58;

    case 3:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_36;

    case 4:
      current_block = (Rpc - LABEL_23_11);
      goto continuation_40;

    case 5:
      current_block = (Rpc - LABEL_23_12);
      goto continuation_39;

    case 6:
      current_block = (Rpc - LABEL_23_13);
      goto continuation_38;

    case 7:
      current_block = (Rpc - LABEL_23_14);
      goto continuation_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_57)
DEFLABEL (lambda_54)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_60;

DEFLABEL (label_59)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_23_0])))
    goto label_59;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_59;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_62;

DEFLABEL (label_61)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_23_1])))
    goto label_61;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_61;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_23_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_63;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_64;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_66;

DEFLABEL (label_65)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_23_3])))
    goto label_65;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_65;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_68;

DEFLABEL (label_67)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (current_block [OBJECT_23_4])))
    goto label_67;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_67;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_70;

DEFLABEL (label_69)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd93.Obj) = ((Wrd69.pObj) [1]);
  if (! ((Wrd93.Obj) == (Wrd42.Obj)))
    goto label_69;
  (Wrd97.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd97.Obj) == (Wrd42.Obj)))
    goto label_69;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_23_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_7])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [6]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_71;

DEFLABEL (label_72)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_71)
DEFLABEL (label_73)
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_23_7);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_23_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_15]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_23_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_18]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_23_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_17]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_23_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_16]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_23_11);
  (Wrd10.Obj) = (current_block [OBJECT_23_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define TAG_24_6 1
#define LABEL_24_7 7
#define LABEL_24_9 9
#define LABEL_24_10 11
#define ENVIRONMENT_LABEL_24_3 26
#define DEBUGGING_LABEL_24_2 25
#define OBJECT_24_5 24
#define OBJECT_24_4 23
#define OBJECT_24_3 22
#define OBJECT_24_2 21
#define OBJECT_24_1 20
#define OBJECT_24_0 19
#define EXECUTE_CACHE_24_12 13
#define EXECUTE_CACHE_24_11 15
#define EXECUTE_CACHE_24_8 17
#define FREE_REFERENCES_LABEL_24_0 12
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_24_4);
      goto lambda_66;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lambda_70;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_46;

    case 3:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_48;

    case 4:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_47;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_69)
DEFLABEL (lambda_66)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_24_0])))
    goto label_71;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_71;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_24_1])))
    goto label_73;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_73;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_24_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_75;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_76;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_78;

DEFLABEL (label_77)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_24_3])))
    goto label_77;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_77;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_80;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  (Wrd78.Obj) = (current_block [OBJECT_24_4]);
  if (! ((Wrd75.Obj) == (Wrd78.Obj)))
    goto label_79;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_79;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_81;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_82;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_84;

DEFLABEL (label_83)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (Wrd78.Obj)))
    goto label_83;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_83;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_85;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_85;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_70)
  CLOSURE_HEADER (LABEL_24_5);

DEFLABEL (lambda_50)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_24_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (Wrd10.Obj) = (current_block [OBJECT_24_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_7 7
#define LABEL_25_9 9
#define LABEL_25_10 11
#define LABEL_25_11 13
#define LABEL_25_12 15
#define ENVIRONMENT_LABEL_25_3 34
#define DEBUGGING_LABEL_25_2 33
#define OBJECT_25_5 32
#define OBJECT_25_4 31
#define OBJECT_25_3 30
#define OBJECT_25_2 29
#define OBJECT_25_1 28
#define OBJECT_25_0 27
#define EXECUTE_CACHE_25_16 17
#define EXECUTE_CACHE_25_15 19
#define EXECUTE_CACHE_25_14 21
#define EXECUTE_CACHE_25_13 23
#define EXECUTE_CACHE_25_8 25
#define FREE_REFERENCES_LABEL_25_0 16
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd88;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_25_4);
      goto lambda_43;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_47;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_27;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto continuation_31;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_30;

    case 5:
      current_block = (Rpc - LABEL_25_11);
      goto continuation_29;

    case 6:
      current_block = (Rpc - LABEL_25_12);
      goto continuation_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_46)
DEFLABEL (lambda_43)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_49;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_25_0])))
    goto label_48;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_48;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_51;

DEFLABEL (label_50)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_25_1])))
    goto label_50;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_50;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_25_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_52;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_53;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_55;

DEFLABEL (label_54)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_25_3])))
    goto label_54;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_54;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = ((Wrd69.pObj) [1]);
  if ((Wrd71.Obj) == (Wrd42.Obj))
    goto label_57;

DEFLABEL (label_56)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd77.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd77.Obj) == (Wrd42.Obj)))
    goto label_56;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd85.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 2;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd85.pObj)));
  Wrd88 = Wrd85;
  ((Wrd88.pObj) [2]) = (Wrd38.Obj);
  ((Wrd88.pObj) [3]) = (Wrd70.Obj);
  Rvl = (Wrd84.Obj);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_25_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_16]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_25_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_15]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_14]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_25_9);
  (Wrd10.Obj) = (current_block [OBJECT_25_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define TAG_26_6 1
#define LABEL_26_7 7
#define LABEL_26_9 9
#define LABEL_26_10 11
#define LABEL_26_11 13
#define LABEL_26_12 15
#define ENVIRONMENT_LABEL_26_3 34
#define DEBUGGING_LABEL_26_2 33
#define OBJECT_26_5 32
#define OBJECT_26_4 31
#define OBJECT_26_3 30
#define OBJECT_26_2 29
#define OBJECT_26_1 28
#define OBJECT_26_0 27
#define EXECUTE_CACHE_26_16 17
#define EXECUTE_CACHE_26_15 19
#define EXECUTE_CACHE_26_14 21
#define EXECUTE_CACHE_26_13 23
#define EXECUTE_CACHE_26_8 25
#define FREE_REFERENCES_LABEL_26_0 16
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd88;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_26_4);
      goto lambda_43;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto lambda_47;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_27;

    case 3:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_31;

    case 4:
      current_block = (Rpc - LABEL_26_10);
      goto continuation_30;

    case 5:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_29;

    case 6:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_46)
DEFLABEL (lambda_43)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_49;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_26_0])))
    goto label_48;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_48;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_51;

DEFLABEL (label_50)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_26_1])))
    goto label_50;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_50;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_26_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_52;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_53;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_55;

DEFLABEL (label_54)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_26_3])))
    goto label_54;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_54;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = ((Wrd69.pObj) [1]);
  if ((Wrd71.Obj) == (Wrd42.Obj))
    goto label_57;

DEFLABEL (label_56)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd77.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd77.Obj) == (Wrd42.Obj)))
    goto label_56;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd85.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_5])));
  Rhp += 2;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd85.pObj)));
  Wrd88 = Wrd85;
  ((Wrd88.pObj) [2]) = (Wrd38.Obj);
  ((Wrd88.pObj) [3]) = (Wrd70.Obj);
  Rvl = (Wrd84.Obj);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_26_5);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_13]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_26_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_16]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_15]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_26_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_14]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_26_9);
  (Wrd10.Obj) = (current_block [OBJECT_26_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define TAG_27_6 1
#define LABEL_27_7 7
#define LABEL_27_9 9
#define LABEL_27_10 11
#define LABEL_27_11 13
#define ENVIRONMENT_LABEL_27_3 29
#define DEBUGGING_LABEL_27_2 28
#define OBJECT_27_4 27
#define OBJECT_27_3 26
#define OBJECT_27_2 25
#define OBJECT_27_1 24
#define OBJECT_27_0 23
#define EXECUTE_CACHE_27_14 15
#define EXECUTE_CACHE_27_13 17
#define EXECUTE_CACHE_27_12 19
#define EXECUTE_CACHE_27_8 21
#define FREE_REFERENCES_LABEL_27_0 14
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd88;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_42;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto lambda_46;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_27;

    case 3:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_30;

    case 4:
      current_block = (Rpc - LABEL_27_10);
      goto continuation_29;

    case 5:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_45)
DEFLABEL (lambda_42)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_48;

DEFLABEL (label_47)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_27_0])))
    goto label_47;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_47;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_50;

DEFLABEL (label_49)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_27_1])))
    goto label_49;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_49;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_27_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_51;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_52;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_54;

DEFLABEL (label_53)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_27_3])))
    goto label_53;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_53;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = ((Wrd69.pObj) [1]);
  if ((Wrd71.Obj) == (Wrd42.Obj))
    goto label_56;

DEFLABEL (label_55)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd77.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd77.Obj) == (Wrd42.Obj)))
    goto label_55;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd85.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_5])));
  Rhp += 2;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd85.pObj)));
  Wrd88 = Wrd85;
  ((Wrd88.pObj) [2]) = (Wrd38.Obj);
  ((Wrd88.pObj) [3]) = (Wrd70.Obj);
  Rvl = (Wrd84.Obj);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_27_5);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_12]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_27_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_14]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_27_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_13]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_27_9);
  (Wrd10.Obj) = (current_block [OBJECT_27_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define TAG_28_6 1
#define LABEL_28_7 7
#define LABEL_28_9 9
#define LABEL_28_10 11
#define LABEL_28_11 13
#define ENVIRONMENT_LABEL_28_3 29
#define DEBUGGING_LABEL_28_2 28
#define OBJECT_28_4 27
#define OBJECT_28_3 26
#define OBJECT_28_2 25
#define OBJECT_28_1 24
#define OBJECT_28_0 23
#define EXECUTE_CACHE_28_14 15
#define EXECUTE_CACHE_28_13 17
#define EXECUTE_CACHE_28_12 19
#define EXECUTE_CACHE_28_8 21
#define FREE_REFERENCES_LABEL_28_0 14
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd88;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_28_4);
      goto lambda_42;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto lambda_46;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_27;

    case 3:
      current_block = (Rpc - LABEL_28_9);
      goto continuation_30;

    case 4:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_29;

    case 5:
      current_block = (Rpc - LABEL_28_11);
      goto continuation_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_45)
DEFLABEL (lambda_42)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_48;

DEFLABEL (label_47)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_28_0])))
    goto label_47;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_47;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_50;

DEFLABEL (label_49)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_28_1])))
    goto label_49;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_49;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_28_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_51;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_52;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_54;

DEFLABEL (label_53)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_28_3])))
    goto label_53;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_53;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = ((Wrd69.pObj) [1]);
  if ((Wrd71.Obj) == (Wrd42.Obj))
    goto label_56;

DEFLABEL (label_55)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd77.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd77.Obj) == (Wrd42.Obj)))
    goto label_55;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd85.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_5])));
  Rhp += 2;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd85.pObj)));
  Wrd88 = Wrd85;
  ((Wrd88.pObj) [2]) = (Wrd38.Obj);
  ((Wrd88.pObj) [3]) = (Wrd70.Obj);
  Rvl = (Wrd84.Obj);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_28_5);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_12]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_28_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_14]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_28_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_28_9);
  (Wrd10.Obj) = (current_block [OBJECT_28_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define TAG_29_6 1
#define LABEL_29_7 7
#define LABEL_29_9 9
#define LABEL_29_10 11
#define LABEL_29_11 13
#define LABEL_29_12 15
#define ENVIRONMENT_LABEL_29_3 35
#define DEBUGGING_LABEL_29_2 34
#define OBJECT_29_6 33
#define OBJECT_29_5 32
#define OBJECT_29_4 31
#define OBJECT_29_3 30
#define OBJECT_29_2 29
#define OBJECT_29_1 28
#define OBJECT_29_0 27
#define EXECUTE_CACHE_29_16 17
#define EXECUTE_CACHE_29_15 19
#define EXECUTE_CACHE_29_14 21
#define EXECUTE_CACHE_29_13 23
#define EXECUTE_CACHE_29_8 25
#define FREE_REFERENCES_LABEL_29_0 16
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_29_4);
      goto lambda_68;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto lambda_72;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_46;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_50;

    case 4:
      current_block = (Rpc - LABEL_29_10);
      goto continuation_49;

    case 5:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_48;

    case 6:
      current_block = (Rpc - LABEL_29_12);
      goto continuation_47;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_71)
DEFLABEL (lambda_68)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_29_0])))
    goto label_73;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_73;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_29_1])))
    goto label_75;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_75;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_29_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_77;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_78;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_80;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_29_3])))
    goto label_79;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_79;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_82;

DEFLABEL (label_81)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (current_block [OBJECT_29_4])))
    goto label_81;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_81;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_83;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_83)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_84;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (current_block [OBJECT_29_5])))
    goto label_85;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_85;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_88;

DEFLABEL (label_87)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_87;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_87;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_72)
  CLOSURE_HEADER (LABEL_29_5);

DEFLABEL (lambda_52)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_13]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_29_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_16]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_29_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_15]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_29_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_14]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_29_9);
  (Wrd10.Obj) = (current_block [OBJECT_29_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define TAG_30_6 1
#define LABEL_30_7 7
#define LABEL_30_9 9
#define LABEL_30_10 11
#define LABEL_30_11 13
#define LABEL_30_12 15
#define ENVIRONMENT_LABEL_30_3 35
#define DEBUGGING_LABEL_30_2 34
#define OBJECT_30_6 33
#define OBJECT_30_5 32
#define OBJECT_30_4 31
#define OBJECT_30_3 30
#define OBJECT_30_2 29
#define OBJECT_30_1 28
#define OBJECT_30_0 27
#define EXECUTE_CACHE_30_16 17
#define EXECUTE_CACHE_30_15 19
#define EXECUTE_CACHE_30_14 21
#define EXECUTE_CACHE_30_13 23
#define EXECUTE_CACHE_30_8 25
#define FREE_REFERENCES_LABEL_30_0 16
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_68;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto lambda_72;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_46;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_50;

    case 4:
      current_block = (Rpc - LABEL_30_10);
      goto continuation_49;

    case 5:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_48;

    case 6:
      current_block = (Rpc - LABEL_30_12);
      goto continuation_47;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_71)
DEFLABEL (lambda_68)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_30_0])))
    goto label_73;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_73;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_30_1])))
    goto label_75;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_75;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_30_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_77;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_78;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_80;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_30_3])))
    goto label_79;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_79;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_82;

DEFLABEL (label_81)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (current_block [OBJECT_30_4])))
    goto label_81;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_81;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_83;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_83)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_84;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (current_block [OBJECT_30_5])))
    goto label_85;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_85;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_88;

DEFLABEL (label_87)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_87;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_87;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_72)
  CLOSURE_HEADER (LABEL_30_5);

DEFLABEL (lambda_52)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_13]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_30_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_30_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_15]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_30_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (Wrd10.Obj) = (current_block [OBJECT_30_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define TAG_31_6 1
#define LABEL_31_7 7
#define TAG_31_8 2
#define LABEL_31_10 9
#define LABEL_31_11 11
#define ENVIRONMENT_LABEL_31_3 27
#define DEBUGGING_LABEL_31_2 26
#define OBJECT_31_6 25
#define OBJECT_31_5 24
#define OBJECT_31_4 23
#define OBJECT_31_3 22
#define OBJECT_31_2 21
#define OBJECT_31_1 20
#define OBJECT_31_0 19
#define EXECUTE_CACHE_31_13 13
#define EXECUTE_CACHE_31_12 15
#define EXECUTE_CACHE_31_9 17
#define FREE_REFERENCES_LABEL_31_0 12
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_65;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto lambda_69;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto lambda_70;

    case 3:
      current_block = (Rpc - LABEL_31_10);
      goto continuation_47;

    case 4:
      current_block = (Rpc - LABEL_31_11);
      goto continuation_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_68)
DEFLABEL (lambda_65)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_31_0])))
    goto label_71;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_71;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_31_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_73;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_73;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_31_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_75;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_76;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_78;

DEFLABEL (label_77)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_31_3])))
    goto label_77;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_77;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_80;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_79;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_79;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_81;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_82;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_84;

DEFLABEL (label_83)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (current_block [OBJECT_31_4])))
    goto label_83;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_83;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_85;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_85;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_31_5);

DEFLABEL (lambda_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_31_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_7])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd19.Obj) = ((Wrd7.pObj) [4]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (lambda_70)
  CLOSURE_HEADER (LABEL_31_7);

DEFLABEL (lambda_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_31_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_13]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_31_10);
  (Wrd10.Obj) = (current_block [OBJECT_31_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define TAG_32_7 2
#define LABEL_32_8 9
#define LABEL_32_10 11
#define LABEL_32_11 13
#define ENVIRONMENT_LABEL_32_3 28
#define DEBUGGING_LABEL_32_2 27
#define OBJECT_32_5 26
#define OBJECT_32_4 25
#define OBJECT_32_3 24
#define OBJECT_32_2 23
#define OBJECT_32_1 22
#define OBJECT_32_0 21
#define EXECUTE_CACHE_32_13 15
#define EXECUTE_CACHE_32_12 17
#define EXECUTE_CACHE_32_9 19
#define FREE_REFERENCES_LABEL_32_0 14
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd118;
  machine_word Wrd119;
  machine_word Wrd126;
  machine_word Wrd114;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_32_4);
      goto lambda_57;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_59;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto lambda_62;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_40;

    case 4:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_42;

    case 5:
      current_block = (Rpc - LABEL_32_11);
      goto continuation_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_61)
DEFLABEL (lambda_57)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_64;

DEFLABEL (label_63)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_32_0])))
    goto label_63;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_63;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_66;

DEFLABEL (label_65)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_32_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_65;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_65;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_32_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_67;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_68;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_70;

DEFLABEL (label_69)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_32_3])))
    goto label_69;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_69;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_71;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_71;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_73;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_74)
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd100.Obj) = ((Wrd102.pObj) [0]);
  (Wrd103.Obj) = (current_block [OBJECT_32_4]);
  if (! ((Wrd100.Obj) == (Wrd103.Obj)))
    goto label_75;
  (Wrd104.Obj) = ((Wrd102.pObj) [1]);
  if (! ((Wrd104.Obj) == (Wrd42.Obj)))
    goto label_75;
  (Wrd108.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd108.Obj) == (Wrd42.Obj)))
    goto label_75;
  (Rsp [0]) = (Wrd38.Obj);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd114.uLng) == 26))
    goto label_78;
  if (! ((Wrd86.Obj) == (Wrd103.Obj)))
    goto label_75;

DEFLABEL (label_77)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd119.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_6])));
  Rhp += 1;
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd119.pObj)));
  Wrd120 = Wrd119;
  (Wrd121.Obj) = (Rsp [5]);
  ((Wrd120.pObj) [2]) = (Wrd121.Obj);
  Rvl = (Wrd118.Obj);
  goto label_74;

DEFLABEL (label_78)
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_59)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  goto label_77;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_32_6);

DEFLABEL (lambda_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_32_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_13]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_32_10);
  (Wrd10.Obj) = (current_block [OBJECT_32_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define TAG_33_8 2
#define LABEL_33_9 9
#define LABEL_33_11 11
#define LABEL_33_12 13
#define LABEL_33_13 15
#define ENVIRONMENT_LABEL_33_3 34
#define DEBUGGING_LABEL_33_2 33
#define OBJECT_33_7 32
#define OBJECT_33_6 31
#define OBJECT_33_5 30
#define OBJECT_33_4 29
#define OBJECT_33_3 28
#define OBJECT_33_2 27
#define OBJECT_33_1 26
#define OBJECT_33_0 25
#define EXECUTE_CACHE_33_15 17
#define EXECUTE_CACHE_33_14 19
#define EXECUTE_CACHE_33_10 21
#define EXECUTE_CACHE_33_6 23
#define FREE_REFERENCES_LABEL_33_0 16
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd108;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_33_4);
      goto lambda_70;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_46;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto lambda_74;

    case 3:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_48;

    case 4:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_49;

    case 5:
      current_block = (Rpc - LABEL_33_12);
      goto continuation_51;

    case 6:
      current_block = (Rpc - LABEL_33_13);
      goto continuation_50;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_73)
DEFLABEL (lambda_70)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_33_0])))
    goto label_75;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_75;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_78;

DEFLABEL (label_77)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_33_1])))
    goto label_77;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_77;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_80;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [0]);
  (Wrd46.Obj) = (current_block [OBJECT_33_2]);
  if (! ((Wrd43.Obj) == (Wrd46.Obj)))
    goto label_79;
  (Wrd47.Obj) = ((Wrd45.pObj) [1]);
  (Rsp [0]) = (Wrd47.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_79;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  (Wrd58.Obj) = (current_block [OBJECT_33_3]);
  if ((Wrd55.Obj) == (Wrd58.Obj))
    goto label_81;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd63.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd65.uLng) == 1)
    goto label_82;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_84;

DEFLABEL (label_83)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (current_block [OBJECT_33_4])))
    goto label_83;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_83;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd58.Obj))
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd93.Obj) = ((Wrd69.pObj) [1]);
  if (! ((Wrd93.Obj) == (Wrd58.Obj)))
    goto label_85;
  (Wrd99.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd101.uLng) == 1)
    goto label_87;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if ((Wrd108.uLng) == 1)
    goto label_89;

DEFLABEL (label_88)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_89)
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd111.Obj) = ((Wrd113.pObj) [0]);
  if (! ((Wrd111.Obj) == (Wrd46.Obj)))
    goto label_88;
  (Wrd115.Obj) = ((Wrd113.pObj) [1]);
  (Rsp [0]) = (Wrd115.Obj);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd119.uLng) == 1))
    goto label_88;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd123.Obj) = ((Wrd121.pObj) [1]);
  if ((Wrd123.Obj) == (Wrd58.Obj))
    goto label_91;

DEFLABEL (label_90)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd129.Obj) = ((Wrd105.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd58.Obj)))
    goto label_90;
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_33_5);
  if (Rvl == (current_block [OBJECT_33_5]))
    goto label_93;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_92;

DEFLABEL (label_93)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_7])));
  Rhp += 3;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd16 = Wrd11;
  (Wrd17.Obj) = (Rsp [9]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  Rvl = (Wrd10.Obj);

DEFLABEL (label_92)
DEFLABEL (label_94)
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_74)
  CLOSURE_HEADER (LABEL_33_7);

DEFLABEL (lambda_54)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_33_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_33_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_14]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_33_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_15]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_33_12);
  (Wrd10.Obj) = (current_block [OBJECT_33_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define LABEL_34_8 9
#define TAG_34_9 3
#define LABEL_34_10 11
#define LABEL_34_12 13
#define LABEL_34_13 15
#define LABEL_34_14 17
#define LABEL_34_15 19
#define ENVIRONMENT_LABEL_34_3 42
#define DEBUGGING_LABEL_34_2 41
#define OBJECT_34_7 40
#define OBJECT_34_6 39
#define OBJECT_34_5 38
#define OBJECT_34_4 37
#define OBJECT_34_3 36
#define OBJECT_34_2 35
#define OBJECT_34_1 34
#define OBJECT_34_0 33
#define EXECUTE_CACHE_34_19 21
#define EXECUTE_CACHE_34_18 23
#define EXECUTE_CACHE_34_17 25
#define EXECUTE_CACHE_34_16 27
#define EXECUTE_CACHE_34_11 29
#define EXECUTE_CACHE_34_6 31
#define FREE_REFERENCES_LABEL_34_0 20
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd113;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_61;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_39;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto label_63;

    case 3:
      current_block = (Rpc - LABEL_34_8);
      goto lambda_66;

    case 4:
      current_block = (Rpc - LABEL_34_10);
      goto continuation_42;

    case 5:
      current_block = (Rpc - LABEL_34_12);
      goto continuation_46;

    case 6:
      current_block = (Rpc - LABEL_34_13);
      goto continuation_45;

    case 7:
      current_block = (Rpc - LABEL_34_14);
      goto continuation_44;

    case 8:
      current_block = (Rpc - LABEL_34_15);
      goto continuation_43;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_65)
DEFLABEL (lambda_61)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_68;

DEFLABEL (label_67)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_34_0])))
    goto label_67;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_67;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_70;

DEFLABEL (label_69)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_34_1])))
    goto label_69;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_69;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [0]);
  (Wrd46.Obj) = (current_block [OBJECT_34_2]);
  if (! ((Wrd43.Obj) == (Wrd46.Obj)))
    goto label_71;
  (Wrd47.Obj) = ((Wrd45.pObj) [1]);
  (Rsp [0]) = (Wrd47.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_71;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  (Wrd58.Obj) = (current_block [OBJECT_34_3]);
  if ((Wrd55.Obj) == (Wrd58.Obj))
    goto label_73;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd63.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd65.uLng) == 1)
    goto label_75;

DEFLABEL (label_74)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd68.Obj) = ((Wrd70.pObj) [0]);
  if (! ((Wrd68.Obj) == (current_block [OBJECT_34_4])))
    goto label_74;
  (Wrd72.Obj) = ((Wrd70.pObj) [1]);
  if (! ((Wrd72.Obj) == (Wrd58.Obj)))
    goto label_74;
  (Wrd76.Obj) = ((Wrd21.pObj) [1]);
  (Rsp [0]) = (Wrd76.Obj);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_74;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if ((Wrd85.uLng) == 1)
    goto label_77;

DEFLABEL (label_76)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd88.Obj) = ((Wrd90.pObj) [0]);
  if (! ((Wrd88.Obj) == (Wrd46.Obj)))
    goto label_76;
  (Wrd92.Obj) = ((Wrd90.pObj) [1]);
  (Rsp [0]) = (Wrd92.Obj);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd96.uLng) == 1))
    goto label_76;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd100.Obj) = ((Wrd98.pObj) [1]);
  if ((Wrd100.Obj) == (Wrd58.Obj))
    goto label_79;

DEFLABEL (label_78)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd106.Obj) = ((Wrd82.pObj) [1]);
  if (! ((Wrd106.Obj) == (Wrd58.Obj)))
    goto label_78;
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_34_5);
  if (Rvl == (current_block [OBJECT_34_5]))
    goto label_82;

DEFLABEL (label_81)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_80)
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_84;
  if (! ((Wrd9.Obj) == (current_block [OBJECT_34_6])))
    goto label_81;

DEFLABEL (label_83)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_8])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  Rvl = (Wrd14.Obj);
  goto label_80;

DEFLABEL (label_84)
  (Wrd19.Obj) = (current_block [OBJECT_34_6]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_63)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  goto label_83;

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_34_8);

DEFLABEL (lambda_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_34_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_16]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_34_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_19]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_34_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_34_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_17]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_34_12);
  (Wrd10.Obj) = (current_block [OBJECT_34_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define LABEL_35_8 9
#define TAG_35_9 3
#define LABEL_35_10 11
#define LABEL_35_12 13
#define ENVIRONMENT_LABEL_35_3 30
#define DEBUGGING_LABEL_35_2 29
#define OBJECT_35_7 28
#define OBJECT_35_6 27
#define OBJECT_35_5 26
#define OBJECT_35_4 25
#define OBJECT_35_3 24
#define OBJECT_35_2 23
#define OBJECT_35_1 22
#define OBJECT_35_0 21
#define EXECUTE_CACHE_35_13 15
#define EXECUTE_CACHE_35_11 17
#define EXECUTE_CACHE_35_6 19
#define FREE_REFERENCES_LABEL_35_0 14
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd113;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_58;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_39;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto label_60;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto lambda_63;

    case 4:
      current_block = (Rpc - LABEL_35_10);
      goto continuation_42;

    case 5:
      current_block = (Rpc - LABEL_35_12);
      goto continuation_43;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_62)
DEFLABEL (lambda_58)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_65;

DEFLABEL (label_64)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_35_0])))
    goto label_64;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_64;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_67;

DEFLABEL (label_66)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_35_1])))
    goto label_66;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_66;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_69;

DEFLABEL (label_68)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [0]);
  (Wrd46.Obj) = (current_block [OBJECT_35_2]);
  if (! ((Wrd43.Obj) == (Wrd46.Obj)))
    goto label_68;
  (Wrd47.Obj) = ((Wrd45.pObj) [1]);
  (Rsp [0]) = (Wrd47.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_68;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  (Wrd58.Obj) = (current_block [OBJECT_35_3]);
  if ((Wrd55.Obj) == (Wrd58.Obj))
    goto label_70;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd63.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd65.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd68.Obj) = ((Wrd70.pObj) [0]);
  if (! ((Wrd68.Obj) == (current_block [OBJECT_35_4])))
    goto label_71;
  (Wrd72.Obj) = ((Wrd70.pObj) [1]);
  if (! ((Wrd72.Obj) == (Wrd58.Obj)))
    goto label_71;
  (Wrd76.Obj) = ((Wrd21.pObj) [1]);
  (Rsp [0]) = (Wrd76.Obj);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_71;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if ((Wrd85.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd88.Obj) = ((Wrd90.pObj) [0]);
  if (! ((Wrd88.Obj) == (Wrd46.Obj)))
    goto label_73;
  (Wrd92.Obj) = ((Wrd90.pObj) [1]);
  (Rsp [0]) = (Wrd92.Obj);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd96.uLng) == 1))
    goto label_73;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd100.Obj) = ((Wrd98.pObj) [1]);
  if ((Wrd100.Obj) == (Wrd58.Obj))
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd106.Obj) = ((Wrd82.pObj) [1]);
  if (! ((Wrd106.Obj) == (Wrd58.Obj)))
    goto label_75;
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_35_5);
  if (Rvl == (current_block [OBJECT_35_5]))
    goto label_79;

DEFLABEL (label_78)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_77)
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_81;
  if (! ((Wrd9.Obj) == (current_block [OBJECT_35_6])))
    goto label_78;

DEFLABEL (label_80)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_8])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  Rvl = (Wrd14.Obj);
  goto label_77;

DEFLABEL (label_81)
  (Wrd19.Obj) = (current_block [OBJECT_35_6]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_60)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_78;
  goto label_80;

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_35_8);

DEFLABEL (lambda_45)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_11]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_35_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_13]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_35_12);
  (Wrd10.Obj) = (current_block [OBJECT_35_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define TAG_36_6 1
#define LABEL_36_7 7
#define LABEL_36_9 9
#define LABEL_36_10 11
#define LABEL_36_12 13
#define ENVIRONMENT_LABEL_36_3 32
#define DEBUGGING_LABEL_36_2 31
#define OBJECT_36_7 30
#define OBJECT_36_6 29
#define OBJECT_36_5 28
#define OBJECT_36_4 27
#define OBJECT_36_3 26
#define OBJECT_36_2 25
#define OBJECT_36_1 24
#define OBJECT_36_0 23
#define EXECUTE_CACHE_36_14 15
#define EXECUTE_CACHE_36_13 17
#define EXECUTE_CACHE_36_11 19
#define EXECUTE_CACHE_36_8 21
#define FREE_REFERENCES_LABEL_36_0 14
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd139;
  machine_word Wrd135;
  machine_word Wrd136;
  machine_word Wrd128;
  machine_word Wrd124;
  machine_word Wrd120;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd108;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_36_4);
      goto lambda_67;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto lambda_71;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_47;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto continuation_50;

    case 4:
      current_block = (Rpc - LABEL_36_10);
      goto continuation_49;

    case 5:
      current_block = (Rpc - LABEL_36_12);
      goto continuation_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_70)
DEFLABEL (lambda_67)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_73;

DEFLABEL (label_72)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_36_0])))
    goto label_72;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_72;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_75;

DEFLABEL (label_74)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_36_1])))
    goto label_74;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_74;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_77;

DEFLABEL (label_76)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [0]);
  if (! ((Wrd43.Obj) == (current_block [OBJECT_36_2])))
    goto label_76;
  (Wrd47.Obj) = ((Wrd45.pObj) [1]);
  (Rsp [0]) = (Wrd47.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_76;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  (Wrd58.Obj) = (current_block [OBJECT_36_3]);
  if ((Wrd55.Obj) == (Wrd58.Obj))
    goto label_78;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd63.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd65.uLng) == 1)
    goto label_79;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_81;

DEFLABEL (label_80)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  (Wrd78.Obj) = (current_block [OBJECT_36_4]);
  if (! ((Wrd75.Obj) == (Wrd78.Obj)))
    goto label_80;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_80;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd58.Obj))
    goto label_83;

DEFLABEL (label_82)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_83)
  (Wrd93.Obj) = ((Wrd69.pObj) [1]);
  if (! ((Wrd93.Obj) == (Wrd58.Obj)))
    goto label_82;
  (Wrd99.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd101.uLng) == 1)
    goto label_84;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if ((Wrd108.uLng) == 1)
    goto label_87;

DEFLABEL (label_86)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_85)
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd111.Obj) = ((Wrd113.pObj) [0]);
  if (! ((Wrd111.Obj) == (Wrd78.Obj)))
    goto label_86;
  (Wrd115.Obj) = ((Wrd113.pObj) [1]);
  (Rsp [0]) = (Wrd115.Obj);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd119.uLng) == 1))
    goto label_86;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd120.Obj) = ((Wrd122.pObj) [0]);
  if (! ((Wrd120.Obj) == (current_block [OBJECT_36_5])))
    goto label_86;
  (Wrd124.Obj) = ((Wrd122.pObj) [1]);
  if (! ((Wrd124.Obj) == (Wrd58.Obj)))
    goto label_86;
  (Wrd128.Obj) = ((Wrd105.pObj) [1]);
  if (! ((Wrd128.Obj) == (Wrd58.Obj)))
    goto label_86;
  (Rsp [0]) = (Wrd86.Obj);
  (Rsp [1]) = (Wrd54.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd136.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_5])));
  Rhp += 2;
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd136.pObj)));
  Wrd139 = Wrd136;
  ((Wrd139.pObj) [2]) = (Wrd54.Obj);
  ((Wrd139.pObj) [3]) = (Wrd86.Obj);
  Rvl = (Wrd135.Obj);
  goto label_85;

DEFLABEL (lambda_71)
  CLOSURE_HEADER (LABEL_36_5);

DEFLABEL (lambda_52)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_36_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_36_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_36_7]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_36_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_13]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_36_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_14]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_36_9);
  (Wrd10.Obj) = (current_block [OBJECT_36_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define LABEL_37_7 9
#define LABEL_37_8 11
#define LABEL_37_10 13
#define LABEL_37_11 15
#define LABEL_37_12 17
#define ENVIRONMENT_LABEL_37_3 39
#define DEBUGGING_LABEL_37_2 38
#define OBJECT_37_8 37
#define OBJECT_37_7 36
#define OBJECT_37_6 35
#define OBJECT_37_5 34
#define OBJECT_37_4 33
#define OBJECT_37_3 32
#define OBJECT_37_2 31
#define OBJECT_37_1 30
#define OBJECT_37_0 29
#define EXECUTE_CACHE_37_16 19
#define EXECUTE_CACHE_37_15 21
#define EXECUTE_CACHE_37_14 23
#define EXECUTE_CACHE_37_13 25
#define EXECUTE_CACHE_37_9 27
#define FREE_REFERENCES_LABEL_37_0 18
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_58;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_60;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto lambda_46;

    case 3:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_45;

    case 4:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_44;

    case 5:
      current_block = (Rpc - LABEL_37_10);
      goto continuation_43;

    case 6:
      current_block = (Rpc - LABEL_37_11);
      goto continuation_42;

    case 7:
      current_block = (Rpc - LABEL_37_12);
      goto continuation_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_62)
DEFLABEL (lambda_58)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_65;

DEFLABEL (label_64)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_37_0])))
    goto label_64;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_64;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_67;

DEFLABEL (label_66)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_37_1])))
    goto label_66;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_66;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_69;

DEFLABEL (label_68)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [0]);
  if (! ((Wrd43.Obj) == (current_block [OBJECT_37_2])))
    goto label_68;
  (Wrd47.Obj) = ((Wrd45.pObj) [1]);
  (Rsp [0]) = (Wrd47.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_68;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  (Wrd58.Obj) = (current_block [OBJECT_37_3]);
  if ((Wrd55.Obj) == (Wrd58.Obj))
    goto label_72;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_70)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd63.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd65.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd68.Obj) = ((Wrd70.pObj) [0]);
  if (! ((Wrd68.Obj) == (current_block [OBJECT_37_4])))
    goto label_73;
  (Wrd72.Obj) = ((Wrd70.pObj) [1]);
  if (! ((Wrd72.Obj) == (Wrd58.Obj)))
    goto label_73;
  (Wrd76.Obj) = ((Wrd21.pObj) [1]);
  (Rsp [0]) = (Wrd76.Obj);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_73;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if ((Wrd85.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd88.Obj) = ((Wrd90.pObj) [0]);
  if (! ((Wrd88.Obj) == (current_block [OBJECT_37_5])))
    goto label_75;
  (Wrd92.Obj) = ((Wrd90.pObj) [1]);
  (Rsp [0]) = (Wrd92.Obj);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd96.uLng) == 1))
    goto label_75;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd97.Obj) = ((Wrd99.pObj) [0]);
  if (! ((Wrd97.Obj) == (current_block [OBJECT_37_6])))
    goto label_75;
  (Wrd101.Obj) = ((Wrd99.pObj) [1]);
  if (! ((Wrd101.Obj) == (Wrd58.Obj)))
    goto label_75;
  (Wrd105.Obj) = ((Wrd82.pObj) [1]);
  if (! ((Wrd105.Obj) == (Wrd58.Obj)))
    goto label_75;
  Rsp = (& (Rsp [2]));
  (Wrd109.Obj) = (Rsp [0]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 26))
    goto label_78;
  if (! ((Wrd109.Obj) == (current_block [OBJECT_37_7])))
    goto label_71;

DEFLABEL (label_77)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  goto label_70;

DEFLABEL (label_78)
  (Wrd117.Obj) = (current_block [OBJECT_37_7]);
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_60)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_77;

DEFLABEL (lambda_63)
DEFLABEL (lambda_46)
  INTERRUPT_CHECK (26, LABEL_37_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_37_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_37_8]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_37_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_13]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_37_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_16]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_37_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_15]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_37_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_14]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_37_7);
  (Wrd9.Obj) = (current_block [OBJECT_37_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define TAG_38_7 2
#define LABEL_38_8 9
#define LABEL_38_9 11
#define ENVIRONMENT_LABEL_38_3 26
#define DEBUGGING_LABEL_38_2 25
#define OBJECT_38_7 24
#define OBJECT_38_6 23
#define OBJECT_38_5 22
#define OBJECT_38_4 21
#define OBJECT_38_3 20
#define OBJECT_38_2 19
#define OBJECT_38_1 18
#define OBJECT_38_0 17
#define EXECUTE_CACHE_38_11 13
#define EXECUTE_CACHE_38_10 15
#define FREE_REFERENCES_LABEL_38_0 12
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd118;
  machine_word Wrd119;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd112;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_55;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_57;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto lambda_60;

    case 3:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_41;

    case 4:
      current_block = (Rpc - LABEL_38_9);
      goto continuation_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_59)
DEFLABEL (lambda_55)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_62;

DEFLABEL (label_61)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_38_0])))
    goto label_61;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_61;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_64;

DEFLABEL (label_63)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_38_1])))
    goto label_63;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_63;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_66;

DEFLABEL (label_65)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [0]);
  if (! ((Wrd43.Obj) == (current_block [OBJECT_38_2])))
    goto label_65;
  (Wrd47.Obj) = ((Wrd45.pObj) [1]);
  (Rsp [0]) = (Wrd47.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_65;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  (Wrd58.Obj) = (current_block [OBJECT_38_3]);
  if ((Wrd55.Obj) == (Wrd58.Obj))
    goto label_67;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd63.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd65.uLng) == 1)
    goto label_69;

DEFLABEL (label_68)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd68.Obj) = ((Wrd70.pObj) [0]);
  if (! ((Wrd68.Obj) == (current_block [OBJECT_38_4])))
    goto label_68;
  (Wrd72.Obj) = ((Wrd70.pObj) [1]);
  if (! ((Wrd72.Obj) == (Wrd58.Obj)))
    goto label_68;
  (Wrd76.Obj) = ((Wrd21.pObj) [1]);
  (Rsp [0]) = (Wrd76.Obj);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_68;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if ((Wrd85.uLng) == 1)
    goto label_71;

DEFLABEL (label_70)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd88.Obj) = ((Wrd90.pObj) [0]);
  if (! ((Wrd88.Obj) == (current_block [OBJECT_38_5])))
    goto label_70;
  (Wrd92.Obj) = ((Wrd90.pObj) [1]);
  (Rsp [0]) = (Wrd92.Obj);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd96.uLng) == 1))
    goto label_70;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd100.Obj) = ((Wrd98.pObj) [1]);
  if ((Wrd100.Obj) == (Wrd58.Obj))
    goto label_73;

DEFLABEL (label_72)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd106.Obj) = ((Wrd82.pObj) [1]);
  if (! ((Wrd106.Obj) == (Wrd58.Obj)))
    goto label_72;
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd112.uLng) == 26))
    goto label_78;
  if ((Wrd54.Obj) == (current_block [OBJECT_38_6]))
    goto label_75;

DEFLABEL (label_76)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_74;

DEFLABEL (label_75)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd119.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_6])));
  Rhp += 1;
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd119.pObj)));
  Wrd120 = Wrd119;
  (Wrd121.Obj) = (Rsp [1]);
  ((Wrd120.pObj) [2]) = (Wrd121.Obj);
  Rvl = (Wrd118.Obj);

DEFLABEL (label_74)
DEFLABEL (label_77)
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd123.Obj) = (current_block [OBJECT_38_6]);
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_57)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_75;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_38_6);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_38_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_38_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_38_8);
  (Wrd10.Obj) = (current_block [OBJECT_38_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define TAG_39_6 1
#define LABEL_39_7 7
#define TAG_39_8 2
#define LABEL_39_10 9
#define LABEL_39_11 11
#define LABEL_39_12 13
#define ENVIRONMENT_LABEL_39_3 33
#define DEBUGGING_LABEL_39_2 32
#define OBJECT_39_8 31
#define OBJECT_39_7 30
#define OBJECT_39_6 29
#define OBJECT_39_5 28
#define OBJECT_39_4 27
#define OBJECT_39_3 26
#define OBJECT_39_2 25
#define OBJECT_39_1 24
#define OBJECT_39_0 23
#define EXECUTE_CACHE_39_15 15
#define EXECUTE_CACHE_39_14 17
#define EXECUTE_CACHE_39_13 19
#define EXECUTE_CACHE_39_9 21
#define FREE_REFERENCES_LABEL_39_0 14
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd163;
  machine_word Wrd157;
  machine_word Wrd158;
  machine_word Wrd149;
  machine_word Wrd145;
  machine_word Wrd141;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd131;
  machine_word Wrd127;
  machine_word Wrd123;
  machine_word Wrd125;
  machine_word Wrd120;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd113;
  machine_word Wrd111;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd95;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_39_4);
      goto lambda_76;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto lambda_80;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto lambda_81;

    case 3:
      current_block = (Rpc - LABEL_39_10);
      goto continuation_56;

    case 4:
      current_block = (Rpc - LABEL_39_11);
      goto continuation_55;

    case 5:
      current_block = (Rpc - LABEL_39_12);
      goto continuation_54;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_79)
DEFLABEL (lambda_76)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_83;

DEFLABEL (label_82)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_83)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_39_0])))
    goto label_82;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_82;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_85;

DEFLABEL (label_84)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_39_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_84;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_84;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_39_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_86;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_87;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_89;

DEFLABEL (label_88)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_89)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_39_3])))
    goto label_88;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_88;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_91;

DEFLABEL (label_90)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (current_block [OBJECT_39_4])))
    goto label_90;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_90;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd88.uLng) == 1)
    goto label_93;

DEFLABEL (label_92)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd91.Obj) = ((Wrd93.pObj) [0]);
  if (! ((Wrd91.Obj) == (Wrd30.Obj)))
    goto label_92;
  (Wrd95.Obj) = ((Wrd93.pObj) [1]);
  (Rsp [0]) = (Wrd95.Obj);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_92;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd103.Obj) = ((Wrd101.pObj) [1]);
  if ((Wrd103.Obj) == (Wrd42.Obj))
    goto label_94;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_94)
  (Wrd111.Obj) = ((Wrd85.pObj) [1]);
  (* (--Rsp)) = (Wrd111.Obj);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd113.uLng) == 1)
    goto label_95;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_95)
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if ((Wrd120.uLng) == 1)
    goto label_97;

DEFLABEL (label_96)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_97)
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd123.Obj) = ((Wrd125.pObj) [0]);
  if (! ((Wrd123.Obj) == (current_block [OBJECT_39_5])))
    goto label_96;
  (Wrd127.Obj) = ((Wrd125.pObj) [1]);
  (Rsp [0]) = (Wrd127.Obj);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if (! ((Wrd131.uLng) == 1))
    goto label_96;
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd127.Obj));
  (Wrd134.Obj) = ((Wrd133.pObj) [0]);
  (* (--Rsp)) = (Wrd134.Obj);
  (Wrd135.Obj) = ((Wrd133.pObj) [1]);
  if ((Wrd135.Obj) == (Wrd42.Obj))
    goto label_99;

DEFLABEL (label_98)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_99)
  (Wrd141.Obj) = ((Wrd117.pObj) [1]);
  if (! ((Wrd141.Obj) == (Wrd42.Obj)))
    goto label_98;
  (Wrd145.Obj) = ((Wrd69.pObj) [1]);
  if (! ((Wrd145.Obj) == (Wrd42.Obj)))
    goto label_98;
  (Wrd149.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd149.Obj) == (Wrd42.Obj)))
    goto label_98;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd158.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_5])));
  Rhp += 3;
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd158.pObj)));
  Wrd163 = Wrd158;
  ((Wrd163.pObj) [2]) = (Wrd38.Obj);
  ((Wrd163.pObj) [3]) = (Wrd102.Obj);
  ((Wrd163.pObj) [4]) = (Wrd134.Obj);
  Rvl = (Wrd157.Obj);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (lambda_80)
  CLOSURE_HEADER (LABEL_39_5);

DEFLABEL (lambda_58)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_39_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_7])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd19.Obj) = ((Wrd7.pObj) [4]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (lambda_81)
  CLOSURE_HEADER (LABEL_39_7);

DEFLABEL (lambda_57)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_13]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_39_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_15]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_39_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_14]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_39_10);
  (Wrd10.Obj) = (current_block [OBJECT_39_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define TAG_40_6 1
#define LABEL_40_7 7
#define TAG_40_8 2
#define LABEL_40_10 9
#define LABEL_40_11 11
#define LABEL_40_12 13
#define LABEL_40_13 15
#define ENVIRONMENT_LABEL_40_3 34
#define DEBUGGING_LABEL_40_2 33
#define OBJECT_40_7 32
#define OBJECT_40_6 31
#define OBJECT_40_5 30
#define OBJECT_40_4 29
#define OBJECT_40_3 28
#define OBJECT_40_2 27
#define OBJECT_40_1 26
#define OBJECT_40_0 25
#define EXECUTE_CACHE_40_16 17
#define EXECUTE_CACHE_40_15 19
#define EXECUTE_CACHE_40_14 21
#define EXECUTE_CACHE_40_9 23
#define FREE_REFERENCES_LABEL_40_0 16
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_67;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto lambda_71;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto lambda_72;

    case 3:
      current_block = (Rpc - LABEL_40_10);
      goto continuation_49;

    case 4:
      current_block = (Rpc - LABEL_40_11);
      goto continuation_48;

    case 5:
      current_block = (Rpc - LABEL_40_12);
      goto continuation_47;

    case 6:
      current_block = (Rpc - LABEL_40_13);
      goto continuation_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_70)
DEFLABEL (lambda_67)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_40_0])))
    goto label_73;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_73;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_40_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_75;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_75;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_40_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_77;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_78;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_80;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_40_3])))
    goto label_79;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_79;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_82;

DEFLABEL (label_81)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_81;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_81;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_83;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_83)
  (Wrd95.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_84;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd104.uLng) == 1)
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [0]);
  if (! ((Wrd107.Obj) == (current_block [OBJECT_40_4])))
    goto label_85;
  (Wrd111.Obj) = ((Wrd109.pObj) [1]);
  (Rsp [0]) = (Wrd111.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_85;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = ((Wrd117.pObj) [1]);
  if ((Wrd119.Obj) == (Wrd42.Obj))
    goto label_88;

DEFLABEL (label_87)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd125.Obj) = ((Wrd101.pObj) [1]);
  if (! ((Wrd125.Obj) == (Wrd42.Obj)))
    goto label_87;
  (Wrd129.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd42.Obj)))
    goto label_87;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd38.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd118.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_71)
  CLOSURE_HEADER (LABEL_40_5);

DEFLABEL (lambda_51)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_40_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_7])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd19.Obj) = ((Wrd7.pObj) [4]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

DEFLABEL (lambda_72)
  CLOSURE_HEADER (LABEL_40_7);

DEFLABEL (lambda_50)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_40_7]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_14]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_40_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_16]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_40_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_14]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_40_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_15]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_40_10);
  (Wrd10.Obj) = (current_block [OBJECT_40_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define TAG_41_6 1
#define LABEL_41_7 7
#define LABEL_41_9 9
#define LABEL_41_10 11
#define ENVIRONMENT_LABEL_41_3 27
#define DEBUGGING_LABEL_41_2 26
#define OBJECT_41_6 25
#define OBJECT_41_5 24
#define OBJECT_41_4 23
#define OBJECT_41_3 22
#define OBJECT_41_2 21
#define OBJECT_41_1 20
#define OBJECT_41_0 19
#define EXECUTE_CACHE_41_12 13
#define EXECUTE_CACHE_41_11 15
#define EXECUTE_CACHE_41_8 17
#define FREE_REFERENCES_LABEL_41_0 12
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_50;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto lambda_54;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto lambda_37;

    case 3:
      current_block = (Rpc - LABEL_41_9);
      goto continuation_36;

    case 4:
      current_block = (Rpc - LABEL_41_10);
      goto continuation_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_53)
DEFLABEL (lambda_50)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_57;

DEFLABEL (label_56)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_41_0])))
    goto label_56;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_56;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_59;

DEFLABEL (label_58)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_41_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_58;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_58;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_41_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_60;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_61;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_63;

DEFLABEL (label_62)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_41_3])))
    goto label_62;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_62;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_65;

DEFLABEL (label_64)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_64;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_64;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_67;

DEFLABEL (label_66)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd93.Obj) = ((Wrd69.pObj) [1]);
  if (! ((Wrd93.Obj) == (Wrd42.Obj)))
    goto label_66;
  (Wrd97.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd97.Obj) == (Wrd42.Obj)))
    goto label_66;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd105.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_5])));
  Rhp += 2;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd105.pObj)));
  Wrd108 = Wrd105;
  ((Wrd108.pObj) [2]) = (Wrd38.Obj);
  ((Wrd108.pObj) [3]) = (Wrd86.Obj);
  Rvl = (Wrd104.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_41_5);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_41_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (Rsp [4]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

DEFLABEL (lambda_55)
DEFLABEL (lambda_37)
  INTERRUPT_CHECK (26, LABEL_41_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_41_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_11]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_41_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_41_9);
  (Wrd10.Obj) = (current_block [OBJECT_41_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define TAG_42_8 2
#define LABEL_42_9 9
#define LABEL_42_11 11
#define LABEL_42_12 13
#define ENVIRONMENT_LABEL_42_3 34
#define DEBUGGING_LABEL_42_2 33
#define OBJECT_42_9 32
#define OBJECT_42_8 31
#define OBJECT_42_7 30
#define OBJECT_42_6 29
#define OBJECT_42_5 28
#define OBJECT_42_4 27
#define OBJECT_42_3 26
#define OBJECT_42_2 25
#define OBJECT_42_1 24
#define OBJECT_42_0 23
#define EXECUTE_CACHE_42_14 15
#define EXECUTE_CACHE_42_13 17
#define EXECUTE_CACHE_42_10 19
#define EXECUTE_CACHE_42_6 21
#define FREE_REFERENCES_LABEL_42_0 14
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd131;
  machine_word Wrd127;
  machine_word Wrd129;
  machine_word Wrd124;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd108;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_42_4);
      goto lambda_76;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_48;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto lambda_80;

    case 3:
      current_block = (Rpc - LABEL_42_9);
      goto continuation_55;

    case 4:
      current_block = (Rpc - LABEL_42_11);
      goto continuation_57;

    case 5:
      current_block = (Rpc - LABEL_42_12);
      goto continuation_56;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_79)
DEFLABEL (lambda_76)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_82;

DEFLABEL (label_81)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_42_0])))
    goto label_81;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_81;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_84;

DEFLABEL (label_83)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_42_1])))
    goto label_83;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_83;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [0]);
  if (! ((Wrd43.Obj) == (current_block [OBJECT_42_2])))
    goto label_85;
  (Wrd47.Obj) = ((Wrd45.pObj) [1]);
  (Rsp [0]) = (Wrd47.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_85;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  (Wrd58.Obj) = (current_block [OBJECT_42_3]);
  if ((Wrd55.Obj) == (Wrd58.Obj))
    goto label_87;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd63.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd65.uLng) == 1)
    goto label_88;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_90;

DEFLABEL (label_89)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_90)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (current_block [OBJECT_42_4])))
    goto label_89;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_89;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd58.Obj))
    goto label_92;

DEFLABEL (label_91)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_92)
  (Wrd93.Obj) = ((Wrd69.pObj) [1]);
  if (! ((Wrd93.Obj) == (Wrd58.Obj)))
    goto label_91;
  (Wrd99.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd101.uLng) == 1)
    goto label_93;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if ((Wrd108.uLng) == 1)
    goto label_95;

DEFLABEL (label_94)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_95)
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd111.Obj) = ((Wrd113.pObj) [0]);
  if (! ((Wrd111.Obj) == (current_block [OBJECT_42_5])))
    goto label_94;
  (Wrd115.Obj) = ((Wrd113.pObj) [1]);
  (Rsp [0]) = (Wrd115.Obj);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd119.uLng) == 1))
    goto label_94;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if ((Wrd124.uLng) == 1)
    goto label_97;

DEFLABEL (label_96)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_97)
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd122.Obj));
  (Wrd127.Obj) = ((Wrd129.pObj) [0]);
  if (! ((Wrd127.Obj) == (current_block [OBJECT_42_6])))
    goto label_96;
  (Wrd131.Obj) = ((Wrd129.pObj) [1]);
  (Rsp [0]) = (Wrd131.Obj);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd135.uLng) == 1))
    goto label_96;
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (Wrd139.Obj) = (current_block [OBJECT_42_7]);
  (* (--Rsp)) = (Wrd139.Obj);
  (Wrd141.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd142.Obj) = ((Wrd141.pObj) [0]);
  (* (--Rsp)) = (Wrd142.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_42_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_99;

DEFLABEL (label_98)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_99)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);
  (Wrd10.Obj) = (current_block [OBJECT_42_3]);
  if (! ((Wrd7.Obj) == (Wrd10.Obj)))
    goto label_98;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);
  if (! ((Wrd13.Obj) == (Wrd10.Obj)))
    goto label_98;
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);
  if (! ((Wrd17.Obj) == (Wrd10.Obj)))
    goto label_98;
  (Wrd21.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (Rsp [2]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_7])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd28 = Wrd25;
  (Wrd29.Obj) = (Rsp [5]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  Rvl = (Wrd24.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_80)
  CLOSURE_HEADER (LABEL_42_7);

DEFLABEL (lambda_59)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_42_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_13]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_42_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_14]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_42_11);
  (Wrd10.Obj) = (current_block [OBJECT_42_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define TAG_43_6 1
#define LABEL_43_7 7
#define LABEL_43_9 9
#define LABEL_43_10 11
#define LABEL_43_11 13
#define LABEL_43_13 15
#define ENVIRONMENT_LABEL_43_3 34
#define DEBUGGING_LABEL_43_2 33
#define OBJECT_43_7 32
#define OBJECT_43_6 31
#define OBJECT_43_5 30
#define OBJECT_43_4 29
#define OBJECT_43_3 28
#define OBJECT_43_2 27
#define OBJECT_43_1 26
#define OBJECT_43_0 25
#define EXECUTE_CACHE_43_15 17
#define EXECUTE_CACHE_43_14 19
#define EXECUTE_CACHE_43_12 21
#define EXECUTE_CACHE_43_8 23
#define FREE_REFERENCES_LABEL_43_0 16
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd129;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd108;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_43_4);
      goto lambda_68;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto lambda_72;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_47;

    case 3:
      current_block = (Rpc - LABEL_43_9);
      goto continuation_46;

    case 4:
      current_block = (Rpc - LABEL_43_10);
      goto continuation_50;

    case 5:
      current_block = (Rpc - LABEL_43_11);
      goto continuation_49;

    case 6:
      current_block = (Rpc - LABEL_43_13);
      goto continuation_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_71)
DEFLABEL (lambda_68)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_43_0])))
    goto label_73;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_73;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_43_1])))
    goto label_75;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_75;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_78;

DEFLABEL (label_77)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [0]);
  (Wrd46.Obj) = (current_block [OBJECT_43_2]);
  if (! ((Wrd43.Obj) == (Wrd46.Obj)))
    goto label_77;
  (Wrd47.Obj) = ((Wrd45.pObj) [1]);
  (Rsp [0]) = (Wrd47.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_77;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  (Wrd58.Obj) = (current_block [OBJECT_43_3]);
  if ((Wrd55.Obj) == (Wrd58.Obj))
    goto label_79;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd63.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd65.uLng) == 1)
    goto label_80;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_82;

DEFLABEL (label_81)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (current_block [OBJECT_43_4])))
    goto label_81;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_81;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd58.Obj))
    goto label_84;

DEFLABEL (label_83)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd93.Obj) = ((Wrd69.pObj) [1]);
  if (! ((Wrd93.Obj) == (Wrd58.Obj)))
    goto label_83;
  (Wrd99.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd101.uLng) == 1)
    goto label_85;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if ((Wrd108.uLng) == 1)
    goto label_87;

DEFLABEL (label_86)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd111.Obj) = ((Wrd113.pObj) [0]);
  if (! ((Wrd111.Obj) == (Wrd46.Obj)))
    goto label_86;
  (Wrd115.Obj) = ((Wrd113.pObj) [1]);
  (Rsp [0]) = (Wrd115.Obj);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd119.uLng) == 1))
    goto label_86;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd123.Obj) = ((Wrd121.pObj) [1]);
  if ((Wrd123.Obj) == (Wrd58.Obj))
    goto label_89;

DEFLABEL (label_88)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_89)
  (Wrd129.Obj) = ((Wrd105.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd58.Obj)))
    goto label_88;
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd54.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd122.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_72)
  CLOSURE_HEADER (LABEL_43_5);

DEFLABEL (lambda_52)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_43_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_43_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_43_7]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_43_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_14]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_43_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_15]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_43_10);
  (Wrd10.Obj) = (current_block [OBJECT_43_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define TAG_44_6 1
#define LABEL_44_7 7
#define LABEL_44_9 9
#define LABEL_44_10 11
#define LABEL_44_11 13
#define LABEL_44_12 15
#define LABEL_44_14 17
#define ENVIRONMENT_LABEL_44_3 40
#define DEBUGGING_LABEL_44_2 39
#define OBJECT_44_9 38
#define OBJECT_44_8 37
#define OBJECT_44_7 36
#define OBJECT_44_6 35
#define OBJECT_44_5 34
#define OBJECT_44_4 33
#define OBJECT_44_3 32
#define OBJECT_44_2 31
#define OBJECT_44_1 30
#define OBJECT_44_0 29
#define EXECUTE_CACHE_44_17 19
#define EXECUTE_CACHE_44_16 21
#define EXECUTE_CACHE_44_15 23
#define EXECUTE_CACHE_44_13 25
#define EXECUTE_CACHE_44_8 27
#define FREE_REFERENCES_LABEL_44_0 18
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rules1_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd163;
  machine_word Wrd157;
  machine_word Wrd158;
  machine_word Wrd149;
  machine_word Wrd145;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd135;
  machine_word Wrd131;
  machine_word Wrd127;
  machine_word Wrd129;
  machine_word Wrd124;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd108;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto lambda_79;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto lambda_83;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto continuation_55;

    case 3:
      current_block = (Rpc - LABEL_44_9);
      goto continuation_54;

    case 4:
      current_block = (Rpc - LABEL_44_10);
      goto continuation_59;

    case 5:
      current_block = (Rpc - LABEL_44_11);
      goto continuation_58;

    case 6:
      current_block = (Rpc - LABEL_44_12);
      goto continuation_57;

    case 7:
      current_block = (Rpc - LABEL_44_14);
      goto continuation_56;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_82)
DEFLABEL (lambda_79)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_85;

DEFLABEL (label_84)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_44_0])))
    goto label_84;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_84;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_87;

DEFLABEL (label_86)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_44_1])))
    goto label_86;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_86;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_89;

DEFLABEL (label_88)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_89)
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [0]);
  (Wrd46.Obj) = (current_block [OBJECT_44_2]);
  if (! ((Wrd43.Obj) == (Wrd46.Obj)))
    goto label_88;
  (Wrd47.Obj) = ((Wrd45.pObj) [1]);
  (Rsp [0]) = (Wrd47.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_88;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  (Wrd58.Obj) = (current_block [OBJECT_44_3]);
  if ((Wrd55.Obj) == (Wrd58.Obj))
    goto label_90;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_90)
  (Wrd63.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd65.uLng) == 1)
    goto label_91;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_93;

DEFLABEL (label_92)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (current_block [OBJECT_44_4])))
    goto label_92;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_92;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd58.Obj))
    goto label_95;

DEFLABEL (label_94)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_95)
  (Wrd93.Obj) = ((Wrd69.pObj) [1]);
  if (! ((Wrd93.Obj) == (Wrd58.Obj)))
    goto label_94;
  (Wrd99.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd101.uLng) == 1)
    goto label_96;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_96)
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if ((Wrd108.uLng) == 1)
    goto label_98;

DEFLABEL (label_97)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_98)
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd111.Obj) = ((Wrd113.pObj) [0]);
  if (! ((Wrd111.Obj) == (current_block [OBJECT_44_5])))
    goto label_97;
  (Wrd115.Obj) = ((Wrd113.pObj) [1]);
  (Rsp [0]) = (Wrd115.Obj);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd119.uLng) == 1))
    goto label_97;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if ((Wrd124.uLng) == 1)
    goto label_100;

DEFLABEL (label_99)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_100)
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd122.Obj));
  (Wrd127.Obj) = ((Wrd129.pObj) [0]);
  if (! ((Wrd127.Obj) == (Wrd46.Obj)))
    goto label_99;
  (Wrd131.Obj) = ((Wrd129.pObj) [1]);
  (Rsp [0]) = (Wrd131.Obj);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd135.uLng) == 1))
    goto label_99;
  (Wrd137.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd138.Obj) = ((Wrd137.pObj) [0]);
  (* (--Rsp)) = (Wrd138.Obj);
  (Wrd139.Obj) = ((Wrd137.pObj) [1]);
  if ((Wrd139.Obj) == (Wrd58.Obj))
    goto label_102;

DEFLABEL (label_101)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_102)
  (Wrd145.Obj) = ((Wrd121.pObj) [1]);
  if (! ((Wrd145.Obj) == (Wrd58.Obj)))
    goto label_101;
  (Wrd149.Obj) = ((Wrd105.pObj) [1]);
  if (! ((Wrd149.Obj) == (Wrd58.Obj)))
    goto label_101;
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd158.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_5])));
  Rhp += 3;
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd158.pObj)));
  Wrd163 = Wrd158;
  ((Wrd163.pObj) [2]) = (Wrd54.Obj);
  ((Wrd163.pObj) [3]) = (Wrd86.Obj);
  ((Wrd163.pObj) [4]) = (Wrd138.Obj);
  Rvl = (Wrd157.Obj);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (lambda_83)
  CLOSURE_HEADER (LABEL_44_5);

DEFLABEL (lambda_61)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_44_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_44_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_44_8]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_13]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_44_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_44_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_16]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_44_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_15]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_44_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_17]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_44_10);
  (Wrd10.Obj) = (current_block [OBJECT_44_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_12 15
#define LABEL_13 17
#define LABEL_14 19
#define LABEL_15 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_18 27
#define LABEL_19 29
#define LABEL_20 31
#define LABEL_21 33
#define LABEL_22 35
#define LABEL_23 37
#define LABEL_24 39
#define LABEL_25 41
#define LABEL_26 43
#define LABEL_27 45
#define LABEL_28 47
#define LABEL_29 49
#define LABEL_30 51
#define LABEL_31 53
#define LABEL_32 55
#define LABEL_33 57
#define LABEL_34 59
#define LABEL_35 61
#define LABEL_36 63
#define LABEL_37 65
#define LABEL_38 67
#define LABEL_39 69
#define LABEL_40 71
#define LABEL_41 73
#define LABEL_42 75
#define LABEL_43 77
#define LABEL_44 79
#define LABEL_45 81
#define LABEL_46 83
#define LABEL_47 85
#define ENVIRONMENT_LABEL_3 175
#define DEBUGGING_LABEL_2 174
#define PURIFICATION_ROOT 173
#define OBJECT_80 172
#define OBJECT_79 171
#define OBJECT_78 170
#define OBJECT_77 169
#define OBJECT_76 168
#define OBJECT_75 167
#define OBJECT_74 166
#define OBJECT_73 165
#define OBJECT_72 164
#define OBJECT_71 163
#define OBJECT_70 162
#define OBJECT_69 161
#define OBJECT_68 160
#define OBJECT_67 159
#define OBJECT_66 158
#define OBJECT_65 157
#define OBJECT_64 156
#define OBJECT_63 155
#define OBJECT_62 154
#define OBJECT_61 153
#define OBJECT_60 152
#define OBJECT_59 151
#define OBJECT_58 150
#define OBJECT_57 149
#define OBJECT_56 148
#define OBJECT_55 147
#define OBJECT_54 146
#define OBJECT_53 145
#define OBJECT_52 144
#define OBJECT_51 143
#define OBJECT_50 142
#define OBJECT_49 141
#define OBJECT_48 140
#define OBJECT_47 139
#define OBJECT_46 138
#define OBJECT_45 137
#define OBJECT_44 136
#define OBJECT_43 135
#define OBJECT_42 134
#define OBJECT_41 133
#define OBJECT_40 132
#define OBJECT_39 131
#define OBJECT_38 130
#define OBJECT_37 129
#define OBJECT_36 128
#define OBJECT_35 127
#define OBJECT_34 126
#define OBJECT_33 125
#define OBJECT_32 124
#define OBJECT_31 123
#define OBJECT_30 122
#define OBJECT_29 121
#define OBJECT_28 120
#define OBJECT_27 119
#define OBJECT_26 118
#define OBJECT_25 117
#define OBJECT_24 116
#define OBJECT_23 115
#define OBJECT_22 114
#define OBJECT_21 113
#define OBJECT_20 112
#define OBJECT_19 111
#define OBJECT_18 110
#define OBJECT_17 109
#define OBJECT_16 108
#define OBJECT_15 107
#define OBJECT_14 106
#define OBJECT_13 105
#define OBJECT_12 104
#define OBJECT_11 103
#define OBJECT_10 102
#define OBJECT_9 101
#define OBJECT_8 100
#define OBJECT_7 99
#define OBJECT_6 98
#define OBJECT_5 97
#define OBJECT_4 96
#define OBJECT_3 95
#define OBJECT_2 94
#define OBJECT_1 93
#define OBJECT_0 92
#define EXECUTE_CACHE_5 87
#define GLOBAL_EXECUTE_CACHE_11 90
#define FREE_REFERENCES_LABEL_0 86
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rules1_so_ebd33486afe4251b (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_24);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_26);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_27);
      goto continuation_21;

    case 22:
      current_block = (Rpc - LABEL_28);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto continuation_24;

    case 25:
      current_block = (Rpc - LABEL_31);
      goto continuation_25;

    case 26:
      current_block = (Rpc - LABEL_32);
      goto continuation_26;

    case 27:
      current_block = (Rpc - LABEL_33);
      goto continuation_27;

    case 28:
      current_block = (Rpc - LABEL_34);
      goto continuation_28;

    case 29:
      current_block = (Rpc - LABEL_35);
      goto continuation_29;

    case 30:
      current_block = (Rpc - LABEL_36);
      goto continuation_30;

    case 31:
      current_block = (Rpc - LABEL_37);
      goto continuation_31;

    case 32:
      current_block = (Rpc - LABEL_38);
      goto continuation_32;

    case 33:
      current_block = (Rpc - LABEL_39);
      goto continuation_33;

    case 34:
      current_block = (Rpc - LABEL_40);
      goto continuation_34;

    case 35:
      current_block = (Rpc - LABEL_41);
      goto continuation_35;

    case 36:
      current_block = (Rpc - LABEL_42);
      goto continuation_36;

    case 37:
      current_block = (Rpc - LABEL_43);
      goto continuation_37;

    case 38:
      current_block = (Rpc - LABEL_44);
      goto continuation_38;

    case 39:
      current_block = (Rpc - LABEL_45);
      goto label_43;

    case 40:
      current_block = (Rpc - LABEL_46);
      goto label_44;

    case 41:
      current_block = (Rpc - LABEL_47);
      goto expression_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_40)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_46])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_44)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_43)
  {
    static const short sections [] =
      {
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 44)
      goto label_42;
    blocks = (current_block [OBJECT_80]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_45])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_42)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd5.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_79]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

INVOKE_INTERFACE_TARGET_1
}

static const struct liarc_code_S arr_decl_rules1_so_ebd33486afe4251b [44] =
  {
    { "rules1_so_code_1", 2, rules1_so_code_1 },
    { "rules1_so_code_2", 7, rules1_so_code_2 },
    { "rules1_so_code_3", 7, rules1_so_code_3 },
    { "rules1_so_code_4", 6, rules1_so_code_4 },
    { "rules1_so_code_5", 6, rules1_so_code_5 },
    { "rules1_so_code_6", 3, rules1_so_code_6 },
    { "rules1_so_code_7", 4, rules1_so_code_7 },
    { "rules1_so_code_8", 3, rules1_so_code_8 },
    { "rules1_so_code_9", 3, rules1_so_code_9 },
    { "rules1_so_code_10", 3, rules1_so_code_10 },
    { "rules1_so_code_11", 3, rules1_so_code_11 },
    { "rules1_so_code_12", 3, rules1_so_code_12 },
    { "rules1_so_code_13", 3, rules1_so_code_13 },
    { "rules1_so_code_14", 5, rules1_so_code_14 },
    { "rules1_so_code_15", 5, rules1_so_code_15 },
    { "rules1_so_code_16", 5, rules1_so_code_16 },
    { "rules1_so_code_17", 6, rules1_so_code_17 },
    { "rules1_so_code_18", 5, rules1_so_code_18 },
    { "rules1_so_code_19", 5, rules1_so_code_19 },
    { "rules1_so_code_20", 5, rules1_so_code_20 },
    { "rules1_so_code_21", 6, rules1_so_code_21 },
    { "rules1_so_code_22", 7, rules1_so_code_22 },
    { "rules1_so_code_23", 8, rules1_so_code_23 },
    { "rules1_so_code_24", 5, rules1_so_code_24 },
    { "rules1_so_code_25", 7, rules1_so_code_25 },
    { "rules1_so_code_26", 7, rules1_so_code_26 },
    { "rules1_so_code_27", 6, rules1_so_code_27 },
    { "rules1_so_code_28", 6, rules1_so_code_28 },
    { "rules1_so_code_29", 7, rules1_so_code_29 },
    { "rules1_so_code_30", 7, rules1_so_code_30 },
    { "rules1_so_code_31", 5, rules1_so_code_31 },
    { "rules1_so_code_32", 6, rules1_so_code_32 },
    { "rules1_so_code_33", 7, rules1_so_code_33 },
    { "rules1_so_code_34", 9, rules1_so_code_34 },
    { "rules1_so_code_35", 6, rules1_so_code_35 },
    { "rules1_so_code_36", 6, rules1_so_code_36 },
    { "rules1_so_code_37", 8, rules1_so_code_37 },
    { "rules1_so_code_38", 5, rules1_so_code_38 },
    { "rules1_so_code_39", 6, rules1_so_code_39 },
    { "rules1_so_code_40", 7, rules1_so_code_40 },
    { "rules1_so_code_41", 5, rules1_so_code_41 },
    { "rules1_so_code_42", 6, rules1_so_code_42 },
    { "rules1_so_code_43", 7, rules1_so_code_43 },
    { "rules1_so_code_44", 8, rules1_so_code_44 }
  };

int
decl_rules1_so_ebd33486afe4251b (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rules1_so_ebd33486afe4251b);
  return (0);
}

DECLARE_COMPILED_CODE ("rules1.so", 42, decl_rules1_so_ebd33486afe4251b, rules1_so_ebd33486afe4251b)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rules1_so_data_ebd33486afe4251b [6190] =
  "\xb0\x01\x4c\xee\x13\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x0d\xb9"
  "\x0d\xba\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82"
  "\x88\x0d\xbc\x0d\xbd\x0d\xbe\x0d\xbf\x08\xb1\xb2\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xb4"
  "\xb5\xb6\x0d\x1c\x08\xb1\xb2\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x84\x88\xb4\xb6\x0d\x1c\xb7\x08\xb1\xb2\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xb4\xb5\x1b\x1b"
  "\x08\xb1\xb2\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb4\xb5\x0d\x1c\x08\xb1\xb2\x1b\x24\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb4\xb5\x0d\x1c\x08\xb1\xb2\x1b\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\xb6\x0d\x1c\x08"
  "\xb1\xb2\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\xb6\x0d\x1c\x08\xb1\xb2\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x1b\x1b\x08\xb1\xb2\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x0d\x1c\x08\xb1\xb2\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb5\x1b\x1b\x08\xb1\xb2\x28"
  "\x1b\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c"
  "\x0d\x1c\x08\xb1\xb2\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x1b\x08\xb1\xb2\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\xb4"
  "\x1b\x08\xb1\xb2\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x0d\x1c"
  "\x08\xb1\xb2\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb5\x1b\x1b\x08\xb1\xb2\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x1b\x1b\x08\xb1\xb2\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb4\x1b\x1b\x08\xb1\xb2\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\xb6\x0d\x1c\x08\xb1\xb2\x28\x1b\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb6\x0d\x1c"
  "\x08\xb1\xb2\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb6\x0d\x1c\x08\xb1\xb2\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x0d\x1c\x08\xb1\xb2\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x1b\xb7"
  "\x08\xb1\xb2\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb4\x1b\x1b\xb7\x08\xb1\xb2\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\xb4\x1b\x0d"
  "\x1c\x08\xb1\xb2\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x81"
  "\x0d\x1c\x08\xb1\xb2\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb6\xb4\x0d\x1c\x1b\x08\xb1\x1b\xb2\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x82\x1b\x81\x08\xb1\x1b"
  "\xb2\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x81\x1b\x87\x08"
  "\xb1\x0d\x1c\xb2\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\xb6\x80\x1b\x08\xb1\x1b\xb2\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x82\x80\x1b\x81\x08\xb1\x1b\xb2\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x81\x1b\x87\x08\xb1\x1b\xb2\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\xb6\xb5\x1b\x1b\x0d\x1c\x08\xb1\xb2\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b\xb5\x1b\x0d\xbe\x08\xb1"
  "\xb2\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\xb4\xb5\x1b\x08\xb1\xb2\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x1b\x0f\x1b\x1b\x1b\x08\xb1\xb6\xb2\x28\x0d\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\xb5\x1b\x08\xb1\xb6\xb2"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x02\x88\x1b"
  "\x0c\x1b\xb4\x1b\x1b\x08\xb1\xb6\xb2\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\xb2\xb6"
  "\xb1\x0d\x1c\x0d\x1c\x88\x08\x89\x1b\x1b\x1b\x88\x08\x89\x08\x8a"
  "\x1b\xb1\x1b\x0d\x1c\x88\x08\x89\x08\x89\x08\x8a\xb2\xb6\xb1\x1b"
  "\x1b\x88\x08\x89\x1b\x1b\x1b\x88\x08\x89\x08\x8a\xb1\x1b\x1b\x88"
  "\x08\x89\x08\x8a\xb5\x2a\xb2\xb6\xb1\x1b\x1b\x88\x08\x89\x1b\x1b"
  "\x1b\x88\x08\x89\x08\x8a\x1b\x1b\x0f\x08\x89\x08\x89\x08\x8a\x1b"
  "\x2a\xb2\xb1\x1b\x0d\x1c\x88\x08\x89\x1b\xb1\x1b\x1b\x88\x08\x89"
  "\x08\x89\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\xb6\xb1\x1b"
  "\x1b\x88\x08\x89\x1b\x1b\x1b\x88\x08\x89\x08\x8a\x08\x8a\x1b\x2a"
  "\xb2\xb1\x1b\x1b\x88\x08\x89\x1b\x1b\xb1\x1b\x1b\x88\x08\x89\x1b"
  "\x1b\x1b\x88\x08\x89\x08\x8a\x08\x89\x08\x8a\x1b\x2a\xb2\x1b\xb1"
  "\x1b\x0d\x1c\x88\x08\x89\x87\x08\x8a\x1b\x1b\x0d\x88\x08\x89\x08"
  "\x8a\x1b\x2a\xb2\x1b\xb1\x1b\x0d\x1c\x88\x08\x89\x81\x08\x8a\x1b"
  "\x80\x08\x89\x08\x8a\x1b\x2a\xb2\x1b\xb1\x1b\x1b\x88\x08\x89\x1b"
  "\x1b\x1b\x88\x08\x89\x08\x8a\x1b\x80\x08\x89\x08\x8a\x1b\x2a\xb2"
  "\x1b\xb1\x1b\x1b\x88\x08\x89\x87\x08\x8a\xb1\x1b\x1b\x88\x08\x89"
  "\x08\x8a\x1b\x2a\xb2\x1b\xb1\x1b\x1b\x88\x08\x89\x81\x08\x8a\xb1"
  "\x1b\x1b\x88\x08\x89\x08\x8a\x1b\x2a\xb2\x1b\xb1\x1b\x1b\x88\x08"
  "\x89\x1b\x1b\x1b\x88\x08\x89\x08\x8a\xb1\x1b\x1b\x88\x08\x89\x08"
  "\x8a\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\x1b\xb1\x1b\x1b\x88\x08"
  "\x89\x81\x08\x8a\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\x1b"
  "\xb1\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x88\x08\x89\x08\x8a\x08\x8a"
  "\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\xb7\x1b\x1b\x0d\x1c\x88\x08"
  "\x89\x1b\x1b\x0d\x1c\x88\x08\x89\x08\x8a\x08\x8a\x1b\x2a\xb2\xb1"
  "\x1b\x1b\x88\x08\x89\xb7\x1b\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x88"
  "\x08\x89\x08\x8a\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\x1b"
  "\x1b\x1b\x88\x08\x89\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89"
  "\x1b\x1b\x1b\x88\x08\x89\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08"
  "\x89\x1b\x1b\x0d\x1c\x88\x08\x89\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b"
  "\x88\x08\x89\x1b\x1b\x1b\x88\x08\x89\x08\x8a\x1b\x2a\xb2\xb1\x1b"
  "\x1b\x88\x08\x89\x1b\x1b\x1b\x1b\x88\x08\x89\x1b\x1b\x0d\x1c\x88"
  "\x08\x89\x08\x8a\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\x1b"
  "\x1b\x1b\x1b\x88\x08\x89\x08\x89\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b"
  "\x88\x08\x89\x1b\x1b\x1b\x1b\x88\x08\x89\x08\x89\x08\x8a\x1b\x2a"
  "\xb2\xb1\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x88\x08\x89\x08\x8a\x1b"
  "\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x88\x08\x89\x08\x8a"
  "\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\x1b\xb1\x1b\x1b\x88\x08\x89"
  "\x1b\x1b\x1b\x88\x08\x89\x08\x8a\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b"
  "\x88\x08\x89\x1b\xb1\x1b\x0d\x1c\x88\x08\x89\xb1\x1b\x0d\x1c\x88"
  "\x08\x89\x08\x8a\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\x1b"
  "\xb1\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x88\x08\x89\x08\x8a\x08\x8a"
  "\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\x1b\xb1\x1b\x1b\x88\x08\x89"
  "\xb1\x1b\x1b\x88\x08\x89\x08\x8a\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b"
  "\x88\x08\x89\x1b\xb1\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x88\x08\x89"
  "\x08\x8a\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\x1b\xb1\x1b"
  "\x1b\x88\x08\x89\xb1\x1b\x1b\x88\x08\x89\x08\x8a\x08\x8a\x1b\x2a"
  "\xb2\xb1\x1b\x1b\x88\x08\x89\x1b\xb1\x1b\x1b\x88\x08\x89\x08\x89"
  "\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\x1b\xb1\x1b\x1b\x88"
  "\x08\x89\x08\x89\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\x1b"
  "\xb1\x1b\x1b\x88\x08\x89\x08\x89\x08\x8a\x1b\x2a\x1b\x1b\x1b\x1b"
  "\x1b\x9c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9c\xb2\xb1\x1b"
  "\x1b\x88\x08\x89\x1b\x1b\x1b\x1b\x88\x08\x89\xb1\x1b\x1b\x88\x08"
  "\x89\x08\x8a\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\xb7\x1b"
  "\x1b\x1b\x88\x08\x89\xb1\x1b\x1b\x88\x08\x89\x08\x8a\x08\x8a\x1b"
  "\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\x1b\xb1\x1b\x1b\x88\x08\x89\xb1"
  "\x1b\x1b\x88\x08\x89\x08\x8a\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b\x88"
  "\x08\x89\xb7\xb1\x1b\x1b\x88\x08\x89\xb1\x1b\x1b\x88\x08\x89\x08"
  "\x8a\x08\x8a\x1b\x2a\xb2\xb1\x1b\x1b\x88\x08\x89\xb1\x1b\x1b\x88"
  "\x08\x89\x08\x8a\xb3\x2a\x28\x0d\x26\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x5f\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x6d\x61\x63"
  "\x68\x69\x6e\x65\x73\x2f\x43\x2f\x72\x75\x6c\x65\x73\x31\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x09\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x07\x61\x73\x73\x69\x67\x6e\x04\x19\x73\x74\x61\x6e\x64\x61"
  "\x72\x64\x2d\x6d\x6f\x76\x65\x2d\x74\x6f\x2d\x74\x61\x72\x67\x65"
  "\x74\x21\x02\x2c\x06\x81\x83\x02\x2b\x04\x83\x04\x05\x0e\x02\x0e"
  "\x73\x63\x68\x65\x6d\x65\x5f\x6f\x62\x6a\x65\x63\x74\x06\x75\x6c"
  "\x6f\x6e\x67\x0f\x73\x63\x68\x65\x6d\x65\x5f\x6f\x62\x6a\x65\x63"
  "\x74\x2a\x0d\x63\x6f\x6e\x73\x2d\x70\x6f\x69\x6e\x74\x65\x72\x04"
  "\x11\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x73\x6f\x75\x72\x63\x65"
  "\x21\x09\x04\x11\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x74\x61\x72"
  "\x67\x65\x74\x21\x0a\x04\x16\x63\x3a\x6d\x61\x6b\x65\x2d\x70\x6f"
  "\x69\x6e\x74\x65\x72\x2d\x6f\x62\x6a\x65\x63\x74\x0b\x04\x04\x63"
  "\x3a\x3d\x0c\x05\x33\x10\x81\x8b\x02\x32\x0e\x81\x89\x02\x31\x0c"
  "\x81\x87\x02\x30\x0a\x81\x85\x02\x2f\x08\x81\x83\x02\x2e\x06\x81"
  "\x83\x02\x2d\x04\x83\x04\x0f\x22\x0d\x02\x11\x63\x6f\x6e\x73\x2d"
  "\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72\x0e\x04\x09\x04\x0a"
  "\x04\x0e\x63\x3a\x6d\x61\x6b\x65\x2d\x6f\x62\x6a\x65\x63\x74\x0f"
  "\x04\x0c\x05\x3a\x10\x81\x8b\x02\x39\x0e\x81\x89\x02\x38\x0c\x81"
  "\x87\x02\x37\x0a\x81\x85\x02\x36\x08\x81\x83\x02\x35\x06\x81\x83"
  "\x02\x34\x04\x83\x04\x0f\x22\x10\x02\x11\x6d\x61\x63\x68\x69\x6e"
  "\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x11\x04\x09\x04\x0a\x04"
  "\x0b\x04\x0c\x05\x40\x0e\x81\x89\x02\x3f\x0c\x81\x87\x02\x3e\x0a"
  "\x81\x85\x02\x3d\x08\x81\x83\x02\x3c\x06\x81\x83\x02\x3b\x04\x83"
  "\x04\x0d\x20\x12\x02\x11\x0e\x04\x09\x04\x0a\x04\x0f\x04\x0c\x05"
  "\x46\x0e\x81\x89\x02\x45\x0c\x81\x87\x02\x44\x0a\x81\x85\x02\x43"
  "\x08\x81\x83\x02\x42\x06\x81\x83\x02\x41\x04\x83\x04\x0d\x20\x13"
  "\x02\x04\x09\x04\x0a\x03\x49\x08\x81\x8d\x02\x48\x06\x81\x8b\x02"
  "\x47\x04\x87\x0c\x07\x0f\x14\x02\x08\x04\x09\x04\x0a\x03\x4d\x0a"
  "\x81\x93\x02\x4c\x08\x81\x91\x02\x4b\x06\x81\x8f\x02\x4a\x04\x89"
  "\x10\x09\x11\x15\x02\x09\x03\x0e\x63\x3a\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x74\x79\x70\x65\x16\x04\x0c\x03\x50\x08\x81\x87\x02\x4f\x06"
  "\x81\x85\x02\x4e\x04\x84\x06\x07\x10\x17\x02\x0a\x03\x0f\x63\x3a"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x64\x61\x74\x75\x6d\x18\x04\x0c\x03"
  "\x53\x08\x81\x87\x02\x52\x06\x81\x85\x02\x51\x04\x84\x06\x07\x10"
  "\x19\x02\x0b\x03\x11\x63\x3a\x6f\x62\x6a\x65\x63\x74\x2d\x61\x64"
  "\x64\x72\x65\x73\x73\x04\x0c\x03\x56\x08\x81\x87\x02\x55\x06\x81"
  "\x85\x02\x54\x04\x84\x06\x07\x10\x1a\x02\x0c\x0d\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x3e\x74\x79\x70\x65\x1b\x1b\x02\x07\x1a\x73\x74\x61"
  "\x6e\x64\x61\x72\x64\x2d\x75\x6e\x61\x72\x79\x2d\x63\x6f\x6e\x76"
  "\x65\x72\x73\x69\x6f\x6e\x1c\x02\x59\x08\x81\x8b\x02\x58\x06\x81"
  "\x83\x02\x57\x04\x83\x04\x07\x15\x1d\x02\x0d\x0e\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x3e\x64\x61\x74\x75\x6d\x1e\x1e\x02\x07\x1c\x02\x5c"
  "\x08\x81\x8b\x02\x5b\x06\x81\x83\x02\x5a\x04\x83\x04\x07\x15\x1f"
  "\x02\x0e\x10\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x61\x64\x64\x72\x65"
  "\x73\x73\x20\x20\x02\x07\x1c\x02\x5f\x08\x81\x8b\x02\x5e\x06\x81"
  "\x83\x02\x5d\x04\x83\x04\x07\x15\x21\x02\x0f\x05\x6c\x6f\x6e\x67"
  "\x22\x0f\x6f\x66\x66\x73\x65\x74\x2d\x61\x64\x64\x72\x65\x73\x73"
  "\x23\x09\x1b\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x62\x69\x6e\x61"
  "\x72\x79\x2d\x63\x6f\x6e\x76\x65\x72\x73\x69\x6f\x6e\x24\x04\x07"
  "\x63\x3a\x61\x70\x74\x72\x25\x04\x0c\x04\x64\x0c\x81\x89\x02\x63"
  "\x0a\x81\x87\x02\x62\x08\x85\x08\x61\x06\x81\x83\x02\x60\x04\x83"
  "\x04\x0b\x1b\x26\x02\x10\x11\x23\x07\x1c\x04\x25\x04\x0c\x04\x69"
  "\x0c\x81\x89\x02\x68\x0a\x81\x87\x02\x67\x08\x81\x87\x02\x66\x06"
  "\x81\x83\x02\x65\x04\x83\x04\x0b\x1b\x27\x02\x11\x22\x06\x63\x68"
  "\x61\x72\x2a\x28\x14\x62\x79\x74\x65\x2d\x6f\x66\x66\x73\x65\x74"
  "\x2d\x61\x64\x64\x72\x65\x73\x73\x29\x09\x24\x04\x25\x04\x0c\x04"
  "\x6e\x0c\x81\x89\x02\x6d\x0a\x81\x87\x02\x6c\x08\x85\x08\x6b\x06"
  "\x81\x83\x02\x6a\x04\x83\x04\x0b\x1b\x2a\x02\x12\x22\x11\x29\x07"
  "\x1c\x04\x04\x63\x3a\x2b\x04\x0c\x04\x07\x63\x3a\x63\x61\x73\x74"
  "\x2b\x05\x74\x0e\x81\x8b\x02\x73\x0c\x81\x89\x02\x72\x0a\x81\x87"
  "\x02\x71\x08\x81\x87\x02\x70\x06\x81\x83\x02\x6f\x04\x83\x04\x0d"
  "\x20\x2c\x02\x13\x22\x08\x64\x6f\x75\x62\x6c\x65\x2a\x22\x15\x66"
  "\x6c\x6f\x61\x74\x2d\x6f\x66\x66\x73\x65\x74\x2d\x61\x64\x64\x72"
  "\x65\x73\x73\x2d\x09\x24\x04\x25\x04\x0c\x04\x79\x0c\x81\x89\x02"
  "\x78\x0a\x81\x87\x02\x77\x08\x85\x08\x76\x06\x81\x83\x02\x75\x04"
  "\x83\x04\x0b\x1b\x2e\x02\x14\x22\x11\x2d\x07\x1c\x04\x25\x04\x0c"
  "\x04\x7e\x0c\x81\x89\x02\x7d\x0a\x81\x87\x02\x7c\x08\x81\x87\x02"
  "\x7b\x06\x81\x83\x02\x7a\x04\x83\x04\x0b\x1b\x25\x02\x15\x05\x73"
  "\x6f\x62\x6a\x22\x11\x04\x0a\x04\x2b\x04\x0c\x04\x83\x01\x0c\x81"
  "\x87\x02\x82\x01\x0a\x81\x85\x02\x81\x01\x08\x81\x83\x02\x80\x01"
  "\x06\x81\x83\x02\x7f\x04\x83\x04\x0b\x1b\x2f\x02\x16\x09\x63\x6f"
  "\x6e\x73\x74\x61\x6e\x74\x30\x04\x0a\x03\x0f\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x3e\x6f\x66\x66\x73\x65\x74\x31\x04\x0c\x03\x07\x63\x3a"
  "\x63\x72\x65\x66\x32\x05\x89\x01\x0e\x81\x89\x02\x88\x01\x0c\x81"
  "\x87\x02\x87\x01\x0a\x81\x85\x02\x86\x01\x08\x81\x83\x02\x85\x01"
  "\x06\x81\x83\x02\x84\x01\x04\x83\x04\x0d\x1e\x33\x02\x17\x30\x1b"
  "\x04\x0a\x03\x31\x04\x0c\x03\x16\x03\x32\x06\x90\x01\x10\x81\x8b"
  "\x02\x8f\x01\x0e\x81\x89\x02\x8e\x01\x0c\x81\x87\x02\x8d\x01\x0a"
  "\x81\x85\x02\x8c\x01\x08\x81\x83\x02\x8b\x01\x06\x81\x83\x02\x8a"
  "\x01\x04\x83\x04\x0f\x23\x16\x02\x18\x30\x1e\x03\x14\x6e\x6f\x6e"
  "\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x6f\x62\x6a\x65\x63\x74\x3f"
  "\x04\x0a\x03\x31\x04\x0c\x03\x18\x03\x32\x07\x98\x01\x12\x81\x8b"
  "\x02\x97\x01\x10\x81\x89\x02\x96\x01\x0e\x81\x87\x02\x95\x01\x0c"
  "\x81\x85\x02\x94\x01\x0a\x81\x83\x02\x93\x01\x08\x81\x83\x02\x92"
  "\x01\x06\x81\x93\x02\x91\x01\x04\x83\x04\x11\x27\x31\x02\x19\x11"
  "\x0e\x04\x0a\x04\x0f\x04\x0c\x04\x9d\x01\x0c\x81\x87\x02\x9c\x01"
  "\x0a\x81\x85\x02\x9b\x01\x08\x81\x83\x02\x9a\x01\x06\x81\x83\x02"
  "\x99\x01\x04\x83\x04\x0b\x1b\x18\x02\x1a\x06\x73\x6f\x62\x6a\x2a"
  "\x0f\x0f\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x63\x61\x63\x68\x65"
  "\x34\x04\x0a\x03\x17\x66\x72\x65\x65\x2d\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x2d\x3e\x6f\x66\x66\x73\x65\x74\x04\x0c\x04\x2b\x03"
  "\x32\x06\xa4\x01\x10\x81\x8b\x02\xa3\x01\x0e\x81\x89\x02\xa2\x01"
  "\x0c\x81\x87\x02\xa1\x01\x0a\x81\x85\x02\xa0\x01\x08\x81\x83\x02"
  "\x9f\x01\x06\x81\x83\x02\x9e\x01\x04\x83\x04\x0f\x23\x35\x02\x1b"
  "\x0f\x11\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x63\x61\x63"
  "\x68\x65\x0f\x04\x0a\x03\x18\x66\x72\x65\x65\x2d\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x2d\x3e\x6f\x66\x66\x73\x65\x74\x04\x0c"
  "\x04\x2b\x03\x32\x06\xab\x01\x10\x81\x8b\x02\xaa\x01\x0e\x81\x89"
  "\x02\xa9\x01\x0c\x81\x87\x02\xa8\x01\x0a\x81\x85\x02\xa7\x01\x08"
  "\x81\x83\x02\xa6\x01\x06\x81\x83\x02\xa5\x01\x04\x83\x04\x0f\x23"
  "\x32\x02\x1c\x10\x65\x6e\x74\x72\x79\x3a\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x36\x04\x0a\x03\x0e\x6c\x61\x62\x65\x6c\x2d\x3e\x6f"
  "\x66\x66\x73\x65\x74\x37\x04\x0c\x03\x07\x63\x3a\x63\x70\x74\x72"
  "\x38\x05\xb1\x01\x0e\x81\x89\x02\xb0\x01\x0c\x81\x87\x02\xaf\x01"
  "\x0a\x81\x85\x02\xae\x01\x08\x81\x83\x02\xad\x01\x06\x81\x83\x02"
  "\xac\x01\x04\x83\x04\x0d\x1e\x39\x02\x1d\x13\x65\x6e\x74\x72\x79"
  "\x3a\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x3a\x04\x0a"
  "\x03\x37\x04\x0c\x03\x38\x05\xb7\x01\x0e\x81\x89\x02\xb6\x01\x0c"
  "\x81\x87\x02\xb5\x01\x0a\x81\x85\x02\xb4\x01\x08\x81\x83\x02\xb3"
  "\x01\x06\x81\x83\x02\xb2\x01\x04\x83\x04\x0d\x1e\x3b\x02\x1e\x36"
  "\x11\x04\x0a\x03\x37\x04\x0c\x04\x0b\x03\x38\x06\xbe\x01\x10\x81"
  "\x8b\x02\xbd\x01\x0e\x81\x89\x02\xbc\x01\x0c\x81\x87\x02\xbb\x01"
  "\x0a\x81\x85\x02\xba\x01\x08\x81\x83\x02\xb9\x01\x06\x81\x83\x02"
  "\xb8\x01\x04\x83\x04\x0f\x24\x3c\x02\x1f\x3a\x11\x04\x0a\x03\x37"
  "\x04\x0c\x04\x0b\x03\x38\x06\xc5\x01\x10\x81\x8b\x02\xc4\x01\x0e"
  "\x81\x89\x02\xc3\x01\x0c\x81\x87\x02\xc2\x01\x0a\x81\x85\x02\xc1"
  "\x01\x08\x81\x83\x02\xc0\x01\x06\x81\x83\x02\xbf\x01\x04\x83\x04"
  "\x0f\x24\x38\x02\x20\x11\x07\x6f\x66\x66\x73\x65\x74\x37\x07\x1c"
  "\x04\x07\x63\x3a\x61\x72\x65\x66\x0b\x04\x0c\x04\xca\x01\x0c\x81"
  "\x89\x02\xc9\x01\x0a\x81\x87\x02\xc8\x01\x08\x81\x87\x02\xc7\x01"
  "\x06\x81\x83\x02\xc6\x01\x04\x83\x04\x0b\x1c\x3d\x02\x21\x0f\x70"
  "\x6f\x73\x74\x2d\x69\x6e\x63\x72\x65\x6d\x65\x6e\x74\x3e\x04\x0a"
  "\x02\x06\x63\x3a\x70\x6f\x70\x04\x0c\x04\xd0\x01\x0e\x81\x85\x02"
  "\xcf\x01\x0c\x81\x83\x02\xce\x01\x0a\x81\x83\x02\xcd\x01\x08\x81"
  "\x83\x02\xcc\x01\x06\x81\x91\x02\xcb\x01\x04\x83\x04\x0d\x1d\x0a"
  "\x02\x22\x05\x77\x6f\x72\x64\x3f\x11\x37\x03\x0e\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x2d\x74\x79\x70\x65\x40\x04\x09\x04\x0b\x04\x0c"
  "\x05\xd7\x01\x10\x81\x8b\x02\xd6\x01\x0e\x81\x87\x02\xd5\x01\x0c"
  "\x81\x85\x02\xd4\x01\x0a\x81\x83\x02\xd3\x01\x08\x81\x83\x02\xd2"
  "\x01\x06\x81\x9b\x02\xd1\x01\x04\x83\x04\x0f\x23\x41\x02\x23\x3f"
  "\x3e\x03\x40\x04\x09\x02\x0b\x63\x3a\x66\x72\x65\x65\x2d\x72\x65"
  "\x67\x42\x04\x0c\x03\x04\x63\x3a\x2a\x43\x03\x0a\x63\x3a\x70\x6f"
  "\x73\x74\x69\x6e\x63\x44\x07\xe0\x01\x14\x81\x8b\x02\xdf\x01\x12"
  "\x81\x89\x02\xde\x01\x10\x81\x87\x02\xdd\x01\x0e\x81\x83\x02\xdc"
  "\x01\x0c\x81\x83\x02\xdb\x01\x0a\x81\x83\x02\xda\x01\x08\x81\x91"
  "\x02\xd9\x01\x06\x81\x91\x02\xd8\x01\x04\x83\x04\x13\x2b\x45\x02"
  "\x24\x3f\x0e\x70\x72\x65\x2d\x69\x6e\x63\x72\x65\x6d\x65\x6e\x74"
  "\x3f\x03\x40\x04\x09\x03\x07\x63\x3a\x70\x75\x73\x68\x40\x04\xe6"
  "\x01\x0e\x81\x83\x02\xe5\x01\x0c\x81\x83\x02\xe4\x01\x0a\x81\x83"
  "\x02\xe3\x01\x08\x81\x91\x02\xe2\x01\x06\x81\x91\x02\xe1\x01\x04"
  "\x83\x04\x0d\x1f\x46\x02\x25\x22\x11\x37\x04\x09\x04\x2b\x04\x0b"
  "\x04\x0c\x05\xec\x01\x0e\x81\x89\x02\xeb\x01\x0c\x81\x87\x02\xea"
  "\x01\x0a\x81\x85\x02\xe9\x01\x08\x81\x83\x02\xe8\x01\x06\x81\x83"
  "\x02\xe7\x01\x04\x83\x04\x0d\x21\x47\x02\x26\x22\x11\x3e\x04\x2b"
  "\x02\x42\x04\x0c\x03\x43\x03\x44\x06\xf4\x01\x12\x81\x89\x02\xf3"
  "\x01\x10\x81\x87\x02\xf2\x01\x0e\x81\x85\x02\xf1\x01\x0c\x81\x83"
  "\x02\xf0\x01\x0a\x81\x81\x02\xef\x01\x08\x82\x02\xee\x01\x06\x81"
  "\x89\x02\xed\x01\x04\x83\x04\x11\x28\x44\x02\x27\x22\x11\x3f\x04"
  "\x2b\x03\x40\x03\xf9\x01\x0c\x81\x85\x02\xf8\x01\x0a\x81\x83\x02"
  "\xf7\x01\x08\x81\x83\x02\xf6\x01\x06\x81\x91\x02\xf5\x01\x04\x83"
  "\x04\x0b\x1b\x43\x02\x28\x0e\x43\x48\x41\x52\x5f\x54\x4f\x5f\x41"
  "\x53\x43\x49\x49\x11\x37\x0c\x63\x68\x61\x72\x2d\x3e\x61\x73\x63"
  "\x69\x69\x42\x07\x1c\x04\x0b\x04\x0c\x04\x08\x63\x3a\x65\x63\x61"
  "\x6c\x6c\x40\x05\xff\x01\x0e\x81\x8b\x02\xfe\x01\x0c\x81\x89\x02"
  "\xfd\x01\x0a\x81\x87\x02\xfc\x01\x08\x81\x87\x02\xfb\x01\x06\x81"
  "\x83\x02\xfa\x01\x04\x83\x04\x0d\x22\x22\x02\x29\x07\x75\x63\x68"
  "\x61\x72\x2a\x28\x11\x0c\x62\x79\x74\x65\x2d\x6f\x66\x66\x73\x65"
  "\x74\x07\x1c\x04\x2b\x04\x0c\x04\x0b\x05\x86\x02\x10\x81\x8f\x02"
  "\x85\x02\x0e\x81\x8b\x02\x84\x02\x0c\x81\x89\x02\x83\x02\x0a\x81"
  "\x87\x02\x82\x02\x08\x81\x87\x02\x81\x02\x06\x81\x83\x02\x80\x02"
  "\x04\x83\x04\x0f\x23\x48\x02\x2a\x0e\x43\x48\x41\x52\x5f\x54\x4f"
  "\x5f\x41\x53\x43\x49\x49\x42\x07\x1c\x04\x40\x04\x0c\x04\x8b\x02"
  "\x0c\x81\x87\x02\x8a\x02\x0a\x81\x85\x02\x89\x02\x08\x84\x06\x88"
  "\x02\x06\x81\x83\x02\x87\x02\x04\x83\x04\x0b\x1c\x49\x02\x2b\x05"
  "\x27\x5c\x30\x27\x28\x01\x01\x30\x42\x11\x04\x05\x65\x71\x76\x3f"
  "\x04\x09\x04\x0b\x04\x0c\x05\x91\x02\x0e\x81\x89\x02\x90\x02\x0c"
  "\x81\x85\x02\x8f\x02\x0a\x81\x83\x02\x8e\x02\x08\x81\x83\x02\x8d"
  "\x02\x06\x81\x95\x02\x8c\x02\x04\x83\x04\x0d\x23\x4a\x02\x2c\x05"
  "\x63\x68\x61\x72\x4b\x28\x11\x04\x09\x04\x2b\x04\x0b\x04\x0c\x05"
  "\x98\x02\x10\x81\x8b\x02\x97\x02\x0e\x81\x89\x02\x96\x02\x0c\x81"
  "\x87\x02\x95\x02\x0a\x81\x85\x02\x94\x02\x08\x81\x83\x02\x93\x02"
  "\x06\x81\x83\x02\x92\x02\x04\x83\x04\x0f\x23\x02\x2d\x4b\x0e\x43"
  "\x48\x41\x52\x5f\x54\x4f\x5f\x41\x53\x43\x49\x49\x28\x42\x11\x04"
  "\x09\x04\x40\x04\x0b\x04\x2b\x04\x0c\x06\xa0\x02\x12\x81\x8b\x02"
  "\x9f\x02\x10\x81\x8b\x02\x9e\x02\x0e\x81\x89\x02\x9d\x02\x0c\x81"
  "\x87\x02\x9c\x02\x0a\x81\x85\x02\x9b\x02\x08\x81\x83\x02\x9a\x02"
  "\x06\x81\x83\x02\x99\x02\x04\x83\x04\x11\x29\x4b\x2d\x40\x40\x4b"
  "\x04\x35\x23\x5b\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x70\x61"
  "\x74\x74\x65\x72\x6e\x2d\x6d\x61\x74\x63\x68\x65\x72\x2f\x6c\x6f"
  "\x6f\x6b\x75\x70\x29\x70\x61\x74\x74\x65\x72\x6e\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x5d\x4b\x08\x61\x64\x64\x72\x65\x73\x73\x40"
  "\x11\x4b\x37\x42\x4b\x07\x73\x6f\x75\x72\x63\x65\x2b\x4b\x40\x11"
  "\x4b\x37\x4b\x2b\x04\x4b\x40\x11\x4b\x37\x42\x30\x01\x01\x4a\x04"
  "\x4b\x07\x74\x61\x72\x67\x65\x74\x4a\x42\x4b\x2b\x49\x04\x4b\x4a"
  "\x4b\x40\x11\x4b\x37\x48\x04\x4b\x4a\x42\x37\x4b\x40\x11\x4b\x37"
  "\x22\x04\x3f\x4b\x04\x72\x73\x70\x49\x11\x4b\x06\x63\x6f\x6e\x73"
  "\x74\x43\x04\x3e\x4b\x06\x72\x66\x72\x65\x65\x48\x11\x44\x04\x37"
  "\x4b\x40\x11\x4b\x37\x11\x47\x04\x3f\x4b\x49\x4b\x2b\x46\x04\x3e"
  "\x4b\x48\x4b\x2b\x45\x04\x37\x4b\x40\x11\x4b\x37\x4b\x2b\x41\x04"
  "\x4b\x4a\x3e\x4b\x49\x0a\x04\x4b\x4a\x37\x4b\x40\x11\x4b\x37\x3d"
  "\x04\x4b\x4a\x11\x4b\x05\x74\x79\x70\x65\x49\x3a\x4b\x06\x6c\x61"
  "\x62\x65\x6c\x48\x38\x04\x4b\x4a\x11\x4b\x49\x36\x4b\x48\x3c\x04"
  "\x4b\x4a\x3a\x4b\x48\x3b\x04\x4b\x4a\x36\x4b\x48\x39\x04\x4b\x4a"
  "\x0f\x4b\x05\x6e\x61\x6d\x65\x48\x32\x04\x4b\x4a\x34\x4b\x48\x35"
  "\x04\x4b\x4a\x0e\x11\x4b\x49\x11\x4b\x06\x64\x61\x74\x75\x6d\x48"
  "\x18\x04\x4b\x4a\x1e\x30\x4b\x30\x31\x04\x4b\x4a\x1b\x30\x4b\x30"
  "\x16\x04\x4b\x4a\x30\x4b\x2b\x33\x04\x4b\x4a\x11\x4b\x2b\x2f\x04"
  "\x4b\x4a\x2d\x4b\x2b\x11\x4b\x37\x25\x04\x4b\x4a\x2d\x4b\x05\x62"
  "\x61\x73\x65\x47\x4b\x06\x69\x6e\x64\x65\x78\x46\x2e\x04\x4b\x4a"
  "\x29\x4b\x2b\x11\x4b\x37\x2c\x04\x4b\x4a\x29\x4b\x47\x4b\x46\x2a"
  "\x04\x4b\x4a\x23\x4b\x2b\x11\x4b\x37\x27\x04\x4b\x4a\x23\x4b\x47"
  "\x4b\x46\x26\x04\x4b\x4a\x20\x4b\x2b\x21\x04\x4b\x4a\x1e\x4b\x2b"
  "\x1f\x04\x4b\x4a\x1b\x4b\x2b\x1d\x04\x20\x1e\x1b\x24\x1c\x1a\x04"
  "\x19\x04\x17\x04\x15\x04\x14\x04\x4b\x4a\x0e\x11\x4b\x49\x4b\x2b"
  "\x13\x04\x4b\x4a\x11\x4b\x49\x4b\x2b\x12\x04\x4b\x4a\x0e\x4b\x49"
  "\x4b\x48\x10\x04\x4b\x4a\x4b\x49\x4b\x48\x0d\x04\x4b\x4a\x4b\x2b"
  "\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x02\x04\x14\x61\x64\x64\x2d\x73\x74\x61\x74\x65\x6d\x65"
  "\x6e\x74\x2d\x72\x75\x6c\x65\x21\x02\x2a\x56\x80\x80\x04\x29\x54"
  "\x81\x81\x02\x28\x52\x81\x81\x02\x27\x50\x81\x83\x02\x26\x4e\x81"
  "\x83\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x83"
  "\x02\x22\x46\x81\x83\x02\x21\x44\x81\x83\x02\x20\x42\x81\x83\x02"
  "\x1f\x40\x81\x83\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x83\x02\x1c"
  "\x3a\x81\x83\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x83\x02\x19\x34"
  "\x81\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81"
  "\x83\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x83"
  "\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81\x83\x02"
  "\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c"
  "\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14"
  "\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81"
  "\x83\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x83"
  "\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x55\xb0\x01";

SCHEME_OBJECT *
rules1_so_data_ebd33486afe4251b (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rules1_so_data_ebd33486afe4251b [0]))), (sizeof (prog_rules1_so_data_ebd33486afe4251b)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_47]));
}

DECLARE_COMPILED_DATA_NS ("rules1.so", rules1_so_data_ebd33486afe4251b)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rules1.so", "e7003554803cea59")
