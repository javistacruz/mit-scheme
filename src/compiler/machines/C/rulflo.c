/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:19-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_7 7
#define LABEL_1_9 9
#define LABEL_1_11 11
#define ENVIRONMENT_LABEL_1_3 27
#define DEBUGGING_LABEL_1_2 26
#define OBJECT_1_6 25
#define OBJECT_1_5 24
#define OBJECT_1_4 23
#define OBJECT_1_3 22
#define OBJECT_1_2 21
#define OBJECT_1_1 20
#define OBJECT_1_0 19
#define EXECUTE_CACHE_1_12 13
#define EXECUTE_CACHE_1_10 15
#define EXECUTE_CACHE_1_8 17
#define FREE_REFERENCES_LABEL_1_0 12
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto lambda_52;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_56;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_35;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_36;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_55)
DEFLABEL (lambda_52)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_58;

DEFLABEL (label_57)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_1_0])))
    goto label_57;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_57;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_60;

DEFLABEL (label_59)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_1_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_59;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_59;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_1_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_61;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_62;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_64;

DEFLABEL (label_63)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_1_3])))
    goto label_63;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_63;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_66;

DEFLABEL (label_65)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
    goto label_65;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_65;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = ((Wrd85.pObj) [1]);
  if ((Wrd87.Obj) == (Wrd42.Obj))
    goto label_68;

DEFLABEL (label_67)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd93.Obj) = ((Wrd69.pObj) [1]);
  if (! ((Wrd93.Obj) == (Wrd42.Obj)))
    goto label_67;
  (Wrd97.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd97.Obj) == (Wrd42.Obj)))
    goto label_67;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd105.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 2;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd105.pObj)));
  Wrd108 = Wrd105;
  ((Wrd108.pObj) [2]) = (Wrd38.Obj);
  ((Wrd108.pObj) [3]) = (Wrd86.Obj);
  Rvl = (Wrd104.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd10.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_7 7
#define LABEL_2_9 9
#define LABEL_2_11 11
#define LABEL_2_12 13
#define ENVIRONMENT_LABEL_2_3 31
#define DEBUGGING_LABEL_2_2 30
#define OBJECT_2_6 29
#define OBJECT_2_5 28
#define OBJECT_2_4 27
#define OBJECT_2_3 26
#define OBJECT_2_2 25
#define OBJECT_2_1 24
#define OBJECT_2_0 23
#define EXECUTE_CACHE_2_14 15
#define EXECUTE_CACHE_2_13 17
#define EXECUTE_CACHE_2_10 19
#define EXECUTE_CACHE_2_8 21
#define FREE_REFERENCES_LABEL_2_0 14
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      goto lambda_53;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_57;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_35;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_36;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_38;

    case 5:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_56)
DEFLABEL (lambda_53)
  INTERRUPT_CHECK (26, LABEL_2_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_2_0])))
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
  (Wrd30.Obj) = (current_block [OBJECT_2_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
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
  (Wrd42.Obj) = (current_block [OBJECT_2_2]);
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
  if (! ((Wrd59.Obj) == (current_block [OBJECT_2_3])))
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
  if (! ((Wrd75.Obj) == (Wrd30.Obj)))
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
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 2;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd105.pObj)));
  Wrd108 = Wrd105;
  ((Wrd108.pObj) [2]) = (Wrd38.Obj);
  ((Wrd108.pObj) [3]) = (Wrd86.Obj);
  Rvl = (Wrd104.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_57)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (Wrd10.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_7 7
#define TAG_3_8 2
#define LABEL_3_10 9
#define LABEL_3_11 11
#define ENVIRONMENT_LABEL_3_3 27
#define DEBUGGING_LABEL_3_2 26
#define OBJECT_3_6 25
#define OBJECT_3_5 24
#define OBJECT_3_4 23
#define OBJECT_3_3 22
#define OBJECT_3_2 21
#define OBJECT_3_1 20
#define OBJECT_3_0 19
#define EXECUTE_CACHE_3_13 13
#define EXECUTE_CACHE_3_12 15
#define EXECUTE_CACHE_3_9 17
#define FREE_REFERENCES_LABEL_3_0 12
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto lambda_65;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_69;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto lambda_70;

    case 3:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_47;

    case 4:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_68)
DEFLABEL (lambda_65)
  INTERRUPT_CHECK (26, LABEL_3_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_3_0])))
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
  (Wrd30.Obj) = (current_block [OBJECT_3_1]);
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
  (Wrd42.Obj) = (current_block [OBJECT_3_2]);
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
  if (! ((Wrd59.Obj) == (current_block [OBJECT_3_3])))
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
  if (! ((Wrd107.Obj) == (current_block [OBJECT_3_4])))
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

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd19.Obj) = ((Wrd7.pObj) [4]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (lambda_70)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (lambda_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Wrd10.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define LABEL_4_7 7
#define LABEL_4_9 9
#define LABEL_4_10 11
#define LABEL_4_11 13
#define ENVIRONMENT_LABEL_4_3 29
#define DEBUGGING_LABEL_4_2 28
#define OBJECT_4_6 27
#define OBJECT_4_5 26
#define OBJECT_4_4 25
#define OBJECT_4_3 24
#define OBJECT_4_2 23
#define OBJECT_4_1 22
#define OBJECT_4_0 21
#define EXECUTE_CACHE_4_13 15
#define EXECUTE_CACHE_4_12 17
#define EXECUTE_CACHE_4_8 19
#define FREE_REFERENCES_LABEL_4_0 14
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto lambda_67;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_71;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_47;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_46;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_49;

    case 5:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_70)
DEFLABEL (lambda_67)
  INTERRUPT_CHECK (26, LABEL_4_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_4_0])))
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
  if (! ((Wrd27.Obj) == (current_block [OBJECT_4_1])))
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
  (Wrd46.Obj) = (current_block [OBJECT_4_2]);
  if (! ((Wrd43.Obj) == (Wrd46.Obj)))
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
  (Wrd58.Obj) = (current_block [OBJECT_4_3]);
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
  if (! ((Wrd75.Obj) == (current_block [OBJECT_4_4])))
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
    goto label_86;

DEFLABEL (label_85)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd111.Obj) = ((Wrd113.pObj) [0]);
  if (! ((Wrd111.Obj) == (Wrd46.Obj)))
    goto label_85;
  (Wrd115.Obj) = ((Wrd113.pObj) [1]);
  (Rsp [0]) = (Wrd115.Obj);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd119.uLng) == 1))
    goto label_85;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd123.Obj) = ((Wrd121.pObj) [1]);
  if ((Wrd123.Obj) == (Wrd58.Obj))
    goto label_88;

DEFLABEL (label_87)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd129.Obj) = ((Wrd105.pObj) [1]);
  if (! ((Wrd129.Obj) == (Wrd58.Obj)))
    goto label_87;
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 3;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd143 = Wrd138;
  ((Wrd143.pObj) [2]) = (Wrd54.Obj);
  ((Wrd143.pObj) [3]) = (Wrd86.Obj);
  ((Wrd143.pObj) [4]) = (Wrd122.Obj);
  Rvl = (Wrd137.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_71)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_51)
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

DEFLABEL (continuation_47)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (Wrd10.Obj) = (current_block [OBJECT_4_3]);
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
#define LABEL_5_10 11
#define ENVIRONMENT_LABEL_5_3 27
#define DEBUGGING_LABEL_5_2 26
#define OBJECT_5_6 25
#define OBJECT_5_5 24
#define OBJECT_5_4 23
#define OBJECT_5_3 22
#define OBJECT_5_2 21
#define OBJECT_5_1 20
#define OBJECT_5_0 19
#define EXECUTE_CACHE_5_12 13
#define EXECUTE_CACHE_5_11 15
#define EXECUTE_CACHE_5_8 17
#define FREE_REFERENCES_LABEL_5_0 12
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_65;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_69;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto lambda_48;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_47;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_68)
DEFLABEL (lambda_65)
  INTERRUPT_CHECK (26, LABEL_5_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_5_0])))
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
  (Wrd30.Obj) = (current_block [OBJECT_5_1]);
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
  (Wrd42.Obj) = (current_block [OBJECT_5_2]);
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
  if (! ((Wrd59.Obj) == (current_block [OBJECT_5_3])))
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

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_5_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_5_6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (Rsp [6]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (lambda_70)
DEFLABEL (lambda_48)
  INTERRUPT_CHECK (26, LABEL_5_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_5_9);
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
#define TAG_6_6 1
#define LABEL_6_7 7
#define LABEL_6_9 9
#define LABEL_6_10 11
#define LABEL_6_11 13
#define LABEL_6_12 15
#define ENVIRONMENT_LABEL_6_3 31
#define DEBUGGING_LABEL_6_2 30
#define OBJECT_6_6 29
#define OBJECT_6_5 28
#define OBJECT_6_4 27
#define OBJECT_6_3 26
#define OBJECT_6_2 25
#define OBJECT_6_1 24
#define OBJECT_6_0 23
#define EXECUTE_CACHE_6_14 17
#define EXECUTE_CACHE_6_13 19
#define EXECUTE_CACHE_6_8 21
#define FREE_REFERENCES_LABEL_6_0 16
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto lambda_68;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_72;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_47;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_46;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_48;

    case 5:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_50;

    case 6:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_71)
DEFLABEL (lambda_68)
  INTERRUPT_CHECK (26, LABEL_6_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_6_0])))
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
  if (! ((Wrd27.Obj) == (current_block [OBJECT_6_1])))
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
  (Wrd46.Obj) = (current_block [OBJECT_6_2]);
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
  (Wrd58.Obj) = (current_block [OBJECT_6_3]);
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
  if (! ((Wrd75.Obj) == (Wrd46.Obj)))
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
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
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
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_52)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (Wrd10.Obj) = (current_block [OBJECT_6_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define LABEL_7_7 7
#define TAG_7_8 2
#define LABEL_7_10 9
#define LABEL_7_11 11
#define LABEL_7_12 13
#define LABEL_7_13 15
#define ENVIRONMENT_LABEL_7_3 37
#define DEBUGGING_LABEL_7_2 36
#define OBJECT_7_8 35
#define OBJECT_7_7 34
#define OBJECT_7_6 33
#define OBJECT_7_5 32
#define OBJECT_7_4 31
#define OBJECT_7_3 30
#define OBJECT_7_2 29
#define OBJECT_7_1 28
#define OBJECT_7_0 27
#define EXECUTE_CACHE_7_17 17
#define EXECUTE_CACHE_7_16 19
#define EXECUTE_CACHE_7_15 21
#define EXECUTE_CACHE_7_14 23
#define EXECUTE_CACHE_7_9 25
#define FREE_REFERENCES_LABEL_7_0 16
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd198;
  machine_word Wrd190;
  machine_word Wrd191;
  machine_word Wrd181;
  machine_word Wrd177;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd167;
  machine_word Wrd163;
  machine_word Wrd159;
  machine_word Wrd161;
  machine_word Wrd156;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd149;
  machine_word Wrd147;
  machine_word Wrd141;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd131;
  machine_word Wrd127;
  machine_word Wrd126;
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
      current_block = (Rpc - LABEL_7_4);
      goto lambda_92;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_96;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto lambda_97;

    case 3:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_68;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_67;

    case 5:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_66;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_65;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_95)
DEFLABEL (lambda_92)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_99;

DEFLABEL (label_98)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_99)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_7_0])))
    goto label_98;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_98;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_101;

DEFLABEL (label_100)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_101)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_7_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_100;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_100;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_7_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_102;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_102)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_103;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_103)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_105;

DEFLABEL (label_104)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_105)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_7_3])))
    goto label_104;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_104;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_107;

DEFLABEL (label_106)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_107)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (current_block [OBJECT_7_4])))
    goto label_106;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_106;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd88.uLng) == 1)
    goto label_109;

DEFLABEL (label_108)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_109)
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd91.Obj) = ((Wrd93.pObj) [0]);
  if (! ((Wrd91.Obj) == (Wrd30.Obj)))
    goto label_108;
  (Wrd95.Obj) = ((Wrd93.pObj) [1]);
  (Rsp [0]) = (Wrd95.Obj);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_108;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd103.Obj) = ((Wrd101.pObj) [1]);
  if ((Wrd103.Obj) == (Wrd42.Obj))
    goto label_110;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_110)
  (Wrd111.Obj) = ((Wrd85.pObj) [1]);
  (* (--Rsp)) = (Wrd111.Obj);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd113.uLng) == 1)
    goto label_111;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_111)
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if ((Wrd120.uLng) == 1)
    goto label_113;

DEFLABEL (label_112)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd123.Obj) = ((Wrd125.pObj) [0]);
  (Wrd126.Obj) = (current_block [OBJECT_7_5]);
  if (! ((Wrd123.Obj) == (Wrd126.Obj)))
    goto label_112;
  (Wrd127.Obj) = ((Wrd125.pObj) [1]);
  (Rsp [0]) = (Wrd127.Obj);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if (! ((Wrd131.uLng) == 1))
    goto label_112;
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd127.Obj));
  (Wrd134.Obj) = ((Wrd133.pObj) [0]);
  (* (--Rsp)) = (Wrd134.Obj);
  (Wrd135.Obj) = ((Wrd133.pObj) [1]);
  if ((Wrd135.Obj) == (Wrd42.Obj))
    goto label_115;

DEFLABEL (label_114)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_115)
  (Wrd141.Obj) = ((Wrd117.pObj) [1]);
  if (! ((Wrd141.Obj) == (Wrd42.Obj)))
    goto label_114;
  (Wrd147.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd147.Obj);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if ((Wrd149.uLng) == 1)
    goto label_116;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (label_116)
  (Wrd153.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd154.Obj) = ((Wrd153.pObj) [0]);
  (* (--Rsp)) = (Wrd154.Obj);
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if ((Wrd156.uLng) == 1)
    goto label_118;

DEFLABEL (label_117)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (label_118)
  (Wrd161.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd159.Obj) = ((Wrd161.pObj) [0]);
  if (! ((Wrd159.Obj) == (Wrd126.Obj)))
    goto label_117;
  (Wrd163.Obj) = ((Wrd161.pObj) [1]);
  (Rsp [0]) = (Wrd163.Obj);
  (Wrd167.uLng) = (OBJECT_TYPE (Wrd163.Obj));
  if (! ((Wrd167.uLng) == 1))
    goto label_117;
  (Wrd169.pObj) = (OBJECT_ADDRESS (Wrd163.Obj));
  (Wrd170.Obj) = ((Wrd169.pObj) [0]);
  (* (--Rsp)) = (Wrd170.Obj);
  (Wrd171.Obj) = ((Wrd169.pObj) [1]);
  if ((Wrd171.Obj) == (Wrd42.Obj))
    goto label_120;

DEFLABEL (label_119)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (label_120)
  (Wrd177.Obj) = ((Wrd153.pObj) [1]);
  if (! ((Wrd177.Obj) == (Wrd42.Obj)))
    goto label_119;
  (Wrd181.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd181.Obj) == (Wrd42.Obj)))
    goto label_119;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd170.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd191.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 4;
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd191.pObj)));
  Wrd198 = Wrd191;
  ((Wrd198.pObj) [2]) = (Wrd38.Obj);
  ((Wrd198.pObj) [3]) = (Wrd102.Obj);
  ((Wrd198.pObj) [4]) = (Wrd134.Obj);
  ((Wrd198.pObj) [5]) = (Wrd170.Obj);
  Rvl = (Wrd190.Obj);
  Rsp = (& (Rsp [18]));
  goto pop_return;

DEFLABEL (lambda_96)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_70)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_7_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_7])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  (Wrd23.Obj) = ((Wrd7.pObj) [4]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd7.pObj) [5]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (lambda_97)
  CLOSURE_HEADER (LABEL_7_7);

DEFLABEL (lambda_69)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_7_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (Wrd10.Obj) = (current_block [OBJECT_7_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define TAG_8_6 1
#define LABEL_8_7 7
#define LABEL_8_9 9
#define LABEL_8_10 11
#define LABEL_8_11 13
#define LABEL_8_12 15
#define LABEL_8_13 17
#define ENVIRONMENT_LABEL_8_3 39
#define DEBUGGING_LABEL_8_2 38
#define OBJECT_8_8 37
#define OBJECT_8_7 36
#define OBJECT_8_6 35
#define OBJECT_8_5 34
#define OBJECT_8_4 33
#define OBJECT_8_3 32
#define OBJECT_8_2 31
#define OBJECT_8_1 30
#define OBJECT_8_0 29
#define EXECUTE_CACHE_8_17 19
#define EXECUTE_CACHE_8_16 21
#define EXECUTE_CACHE_8_15 23
#define EXECUTE_CACHE_8_14 25
#define EXECUTE_CACHE_8_8 27
#define FREE_REFERENCES_LABEL_8_0 18
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd198;
  machine_word Wrd190;
  machine_word Wrd191;
  machine_word Wrd181;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd171;
  machine_word Wrd167;
  machine_word Wrd163;
  machine_word Wrd165;
  machine_word Wrd160;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd153;
  machine_word Wrd151;
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
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd109;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_94;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto lambda_98;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_66;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_65;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_70;

    case 5:
      current_block = (Rpc - LABEL_8_11);
      goto continuation_69;

    case 6:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_68;

    case 7:
      current_block = (Rpc - LABEL_8_13);
      goto continuation_67;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_97)
DEFLABEL (lambda_94)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_100;

DEFLABEL (label_99)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_100)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_8_0])))
    goto label_99;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_99;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_102;

DEFLABEL (label_101)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_102)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_8_1])))
    goto label_101;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_101;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_104;

DEFLABEL (label_103)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_104)
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [0]);
  if (! ((Wrd43.Obj) == (current_block [OBJECT_8_2])))
    goto label_103;
  (Wrd47.Obj) = ((Wrd45.pObj) [1]);
  (Rsp [0]) = (Wrd47.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_103;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_106;

DEFLABEL (label_105)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_106)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  (Wrd62.Obj) = (current_block [OBJECT_8_3]);
  if (! ((Wrd59.Obj) == (Wrd62.Obj)))
    goto label_105;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_105;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = ((Wrd69.pObj) [1]);
  (Wrd74.Obj) = (current_block [OBJECT_8_4]);
  if ((Wrd71.Obj) == (Wrd74.Obj))
    goto label_107;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_107)
  (Wrd79.Obj) = ((Wrd53.pObj) [1]);
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd81.uLng) == 1)
    goto label_108;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_108)
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd88.uLng) == 1)
    goto label_110;

DEFLABEL (label_109)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_110)
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd91.Obj) = ((Wrd93.pObj) [0]);
  (Wrd94.Obj) = (current_block [OBJECT_8_5]);
  if (! ((Wrd91.Obj) == (Wrd94.Obj)))
    goto label_109;
  (Wrd95.Obj) = ((Wrd93.pObj) [1]);
  (Rsp [0]) = (Wrd95.Obj);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_109;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd103.Obj) = ((Wrd101.pObj) [1]);
  if ((Wrd103.Obj) == (Wrd74.Obj))
    goto label_112;

DEFLABEL (label_111)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_112)
  (Wrd109.Obj) = ((Wrd85.pObj) [1]);
  if (! ((Wrd109.Obj) == (Wrd74.Obj)))
    goto label_111;
  (Wrd115.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if ((Wrd117.uLng) == 1)
    goto label_113;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if ((Wrd124.uLng) == 1)
    goto label_115;

DEFLABEL (label_114)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_115)
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd122.Obj));
  (Wrd127.Obj) = ((Wrd129.pObj) [0]);
  if (! ((Wrd127.Obj) == (Wrd94.Obj)))
    goto label_114;
  (Wrd131.Obj) = ((Wrd129.pObj) [1]);
  (Rsp [0]) = (Wrd131.Obj);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd135.uLng) == 1))
    goto label_114;
  (Wrd137.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd138.Obj) = ((Wrd137.pObj) [0]);
  (* (--Rsp)) = (Wrd138.Obj);
  (Wrd139.Obj) = ((Wrd137.pObj) [1]);
  if ((Wrd139.Obj) == (Wrd74.Obj))
    goto label_117;

DEFLABEL (label_116)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_117)
  (Wrd145.Obj) = ((Wrd121.pObj) [1]);
  if (! ((Wrd145.Obj) == (Wrd74.Obj)))
    goto label_116;
  (Wrd151.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd151.Obj);
  (Wrd153.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if ((Wrd153.uLng) == 1)
    goto label_118;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (label_118)
  (Wrd157.pObj) = (OBJECT_ADDRESS (Wrd151.Obj));
  (Wrd158.Obj) = ((Wrd157.pObj) [0]);
  (* (--Rsp)) = (Wrd158.Obj);
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd158.Obj));
  if ((Wrd160.uLng) == 1)
    goto label_120;

DEFLABEL (label_119)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (label_120)
  (Wrd165.pObj) = (OBJECT_ADDRESS (Wrd158.Obj));
  (Wrd163.Obj) = ((Wrd165.pObj) [0]);
  if (! ((Wrd163.Obj) == (Wrd62.Obj)))
    goto label_119;
  (Wrd167.Obj) = ((Wrd165.pObj) [1]);
  (Rsp [0]) = (Wrd167.Obj);
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if (! ((Wrd171.uLng) == 1))
    goto label_119;
  (Wrd173.pObj) = (OBJECT_ADDRESS (Wrd167.Obj));
  (Wrd174.Obj) = ((Wrd173.pObj) [0]);
  (* (--Rsp)) = (Wrd174.Obj);
  (Wrd175.Obj) = ((Wrd173.pObj) [1]);
  if ((Wrd175.Obj) == (Wrd74.Obj))
    goto label_122;

DEFLABEL (label_121)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (label_122)
  (Wrd181.Obj) = ((Wrd157.pObj) [1]);
  if (! ((Wrd181.Obj) == (Wrd74.Obj)))
    goto label_121;
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd174.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd191.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_5])));
  Rhp += 4;
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd191.pObj)));
  Wrd198 = Wrd191;
  ((Wrd198.pObj) [2]) = (Wrd70.Obj);
  ((Wrd198.pObj) [3]) = (Wrd102.Obj);
  ((Wrd198.pObj) [4]) = (Wrd138.Obj);
  ((Wrd198.pObj) [5]) = (Wrd174.Obj);
  Rvl = (Wrd190.Obj);
  Rsp = (& (Rsp [18]));
  goto pop_return;

DEFLABEL (lambda_98)
  CLOSURE_HEADER (LABEL_8_5);

DEFLABEL (lambda_72)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_8_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_17]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_8_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_16]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_8_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (Wrd10.Obj) = (current_block [OBJECT_8_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_7 7
#define TAG_9_8 2
#define LABEL_9_10 9
#define LABEL_9_11 11
#define LABEL_9_12 13
#define LABEL_9_13 15
#define ENVIRONMENT_LABEL_9_3 38
#define DEBUGGING_LABEL_9_2 37
#define OBJECT_9_9 36
#define OBJECT_9_8 35
#define OBJECT_9_7 34
#define OBJECT_9_6 33
#define OBJECT_9_5 32
#define OBJECT_9_4 31
#define OBJECT_9_3 30
#define OBJECT_9_2 29
#define OBJECT_9_1 28
#define OBJECT_9_0 27
#define EXECUTE_CACHE_9_17 17
#define EXECUTE_CACHE_9_16 19
#define EXECUTE_CACHE_9_15 21
#define EXECUTE_CACHE_9_14 23
#define EXECUTE_CACHE_9_9 25
#define FREE_REFERENCES_LABEL_9_0 16
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd198;
  machine_word Wrd190;
  machine_word Wrd191;
  machine_word Wrd181;
  machine_word Wrd177;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd167;
  machine_word Wrd163;
  machine_word Wrd159;
  machine_word Wrd161;
  machine_word Wrd156;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd149;
  machine_word Wrd147;
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_92;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_96;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto lambda_97;

    case 3:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_68;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_67;

    case 5:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_66;

    case 6:
      current_block = (Rpc - LABEL_9_13);
      goto continuation_65;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_95)
DEFLABEL (lambda_92)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_99;

DEFLABEL (label_98)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_99)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_9_0])))
    goto label_98;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_98;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_101;

DEFLABEL (label_100)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_101)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_9_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_100;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_100;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_9_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_102;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_102)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_103;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_103)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_105;

DEFLABEL (label_104)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_105)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_9_3])))
    goto label_104;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_104;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd72.uLng) == 1)
    goto label_107;

DEFLABEL (label_106)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_107)
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [0]);
  if (! ((Wrd75.Obj) == (current_block [OBJECT_9_4])))
    goto label_106;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_106;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd88.uLng) == 1)
    goto label_109;

DEFLABEL (label_108)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_109)
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd91.Obj) = ((Wrd93.pObj) [0]);
  if (! ((Wrd91.Obj) == (Wrd30.Obj)))
    goto label_108;
  (Wrd95.Obj) = ((Wrd93.pObj) [1]);
  (Rsp [0]) = (Wrd95.Obj);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_108;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd103.Obj) = ((Wrd101.pObj) [1]);
  if ((Wrd103.Obj) == (Wrd42.Obj))
    goto label_110;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_110)
  (Wrd111.Obj) = ((Wrd85.pObj) [1]);
  (* (--Rsp)) = (Wrd111.Obj);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd113.uLng) == 1)
    goto label_111;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_111)
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if ((Wrd120.uLng) == 1)
    goto label_113;

DEFLABEL (label_112)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd123.Obj) = ((Wrd125.pObj) [0]);
  if (! ((Wrd123.Obj) == (current_block [OBJECT_9_5])))
    goto label_112;
  (Wrd127.Obj) = ((Wrd125.pObj) [1]);
  (Rsp [0]) = (Wrd127.Obj);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if (! ((Wrd131.uLng) == 1))
    goto label_112;
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd127.Obj));
  (Wrd134.Obj) = ((Wrd133.pObj) [0]);
  (* (--Rsp)) = (Wrd134.Obj);
  (Wrd135.Obj) = ((Wrd133.pObj) [1]);
  if ((Wrd135.Obj) == (Wrd42.Obj))
    goto label_115;

DEFLABEL (label_114)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_115)
  (Wrd141.Obj) = ((Wrd117.pObj) [1]);
  if (! ((Wrd141.Obj) == (Wrd42.Obj)))
    goto label_114;
  (Wrd147.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd147.Obj);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if ((Wrd149.uLng) == 1)
    goto label_116;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (label_116)
  (Wrd153.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd154.Obj) = ((Wrd153.pObj) [0]);
  (* (--Rsp)) = (Wrd154.Obj);
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if ((Wrd156.uLng) == 1)
    goto label_118;

DEFLABEL (label_117)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (label_118)
  (Wrd161.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd159.Obj) = ((Wrd161.pObj) [0]);
  if (! ((Wrd159.Obj) == (Wrd30.Obj)))
    goto label_117;
  (Wrd163.Obj) = ((Wrd161.pObj) [1]);
  (Rsp [0]) = (Wrd163.Obj);
  (Wrd167.uLng) = (OBJECT_TYPE (Wrd163.Obj));
  if (! ((Wrd167.uLng) == 1))
    goto label_117;
  (Wrd169.pObj) = (OBJECT_ADDRESS (Wrd163.Obj));
  (Wrd170.Obj) = ((Wrd169.pObj) [0]);
  (* (--Rsp)) = (Wrd170.Obj);
  (Wrd171.Obj) = ((Wrd169.pObj) [1]);
  if ((Wrd171.Obj) == (Wrd42.Obj))
    goto label_120;

DEFLABEL (label_119)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (label_120)
  (Wrd177.Obj) = ((Wrd153.pObj) [1]);
  if (! ((Wrd177.Obj) == (Wrd42.Obj)))
    goto label_119;
  (Wrd181.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd181.Obj) == (Wrd42.Obj)))
    goto label_119;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd170.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd191.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 4;
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd191.pObj)));
  Wrd198 = Wrd191;
  ((Wrd198.pObj) [2]) = (Wrd38.Obj);
  ((Wrd198.pObj) [3]) = (Wrd102.Obj);
  ((Wrd198.pObj) [4]) = (Wrd134.Obj);
  ((Wrd198.pObj) [5]) = (Wrd170.Obj);
  Rvl = (Wrd190.Obj);
  Rsp = (& (Rsp [18]));
  goto pop_return;

DEFLABEL (lambda_96)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_70)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_9_8]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_7])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd20 = Wrd19;
  (Wrd23.Obj) = ((Wrd7.pObj) [4]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Rsp [6]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (lambda_97)
  CLOSURE_HEADER (LABEL_9_7);

DEFLABEL (lambda_69)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_9_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_17]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (Wrd10.Obj) = (current_block [OBJECT_9_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_7 7
#define LABEL_10_9 9
#define LABEL_10_10 11
#define LABEL_10_11 13
#define LABEL_10_12 15
#define LABEL_10_13 17
#define LABEL_10_14 19
#define ENVIRONMENT_LABEL_10_3 42
#define DEBUGGING_LABEL_10_2 41
#define OBJECT_10_9 40
#define OBJECT_10_8 39
#define OBJECT_10_7 38
#define OBJECT_10_6 37
#define OBJECT_10_5 36
#define OBJECT_10_4 35
#define OBJECT_10_3 34
#define OBJECT_10_2 33
#define OBJECT_10_1 32
#define OBJECT_10_0 31
#define EXECUTE_CACHE_10_18 21
#define EXECUTE_CACHE_10_17 23
#define EXECUTE_CACHE_10_16 25
#define EXECUTE_CACHE_10_15 27
#define EXECUTE_CACHE_10_8 29
#define FREE_REFERENCES_LABEL_10_0 20
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd198;
  machine_word Wrd190;
  machine_word Wrd191;
  machine_word Wrd181;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd171;
  machine_word Wrd167;
  machine_word Wrd163;
  machine_word Wrd165;
  machine_word Wrd160;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd153;
  machine_word Wrd151;
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
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd109;
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
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_95;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_99;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_67;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_66;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_65;

    case 5:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_71;

    case 6:
      current_block = (Rpc - LABEL_10_12);
      goto continuation_70;

    case 7:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_69;

    case 8:
      current_block = (Rpc - LABEL_10_14);
      goto continuation_68;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_98)
DEFLABEL (lambda_95)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_101;

DEFLABEL (label_100)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_101)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_10_0])))
    goto label_100;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_100;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_103;

DEFLABEL (label_102)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_103)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_10_1])))
    goto label_102;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_102;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd40.uLng) == 1)
    goto label_105;

DEFLABEL (label_104)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_105)
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [0]);
  if (! ((Wrd43.Obj) == (current_block [OBJECT_10_2])))
    goto label_104;
  (Wrd47.Obj) = ((Wrd45.pObj) [1]);
  (Rsp [0]) = (Wrd47.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_104;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_107;

DEFLABEL (label_106)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_107)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  (Wrd62.Obj) = (current_block [OBJECT_10_3]);
  if (! ((Wrd59.Obj) == (Wrd62.Obj)))
    goto label_106;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_106;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = ((Wrd69.pObj) [1]);
  (Wrd74.Obj) = (current_block [OBJECT_10_4]);
  if ((Wrd71.Obj) == (Wrd74.Obj))
    goto label_108;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_108)
  (Wrd79.Obj) = ((Wrd53.pObj) [1]);
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd81.uLng) == 1)
    goto label_109;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_109)
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd88.uLng) == 1)
    goto label_111;

DEFLABEL (label_110)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_111)
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd91.Obj) = ((Wrd93.pObj) [0]);
  if (! ((Wrd91.Obj) == (current_block [OBJECT_10_5])))
    goto label_110;
  (Wrd95.Obj) = ((Wrd93.pObj) [1]);
  (Rsp [0]) = (Wrd95.Obj);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_110;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd103.Obj) = ((Wrd101.pObj) [1]);
  if ((Wrd103.Obj) == (Wrd74.Obj))
    goto label_113;

DEFLABEL (label_112)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd109.Obj) = ((Wrd85.pObj) [1]);
  if (! ((Wrd109.Obj) == (Wrd74.Obj)))
    goto label_112;
  (Wrd115.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if ((Wrd117.uLng) == 1)
    goto label_114;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_114)
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if ((Wrd124.uLng) == 1)
    goto label_116;

DEFLABEL (label_115)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_116)
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd122.Obj));
  (Wrd127.Obj) = ((Wrd129.pObj) [0]);
  if (! ((Wrd127.Obj) == (Wrd62.Obj)))
    goto label_115;
  (Wrd131.Obj) = ((Wrd129.pObj) [1]);
  (Rsp [0]) = (Wrd131.Obj);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd135.uLng) == 1))
    goto label_115;
  (Wrd137.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd138.Obj) = ((Wrd137.pObj) [0]);
  (* (--Rsp)) = (Wrd138.Obj);
  (Wrd139.Obj) = ((Wrd137.pObj) [1]);
  if ((Wrd139.Obj) == (Wrd74.Obj))
    goto label_118;

DEFLABEL (label_117)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_118)
  (Wrd145.Obj) = ((Wrd121.pObj) [1]);
  if (! ((Wrd145.Obj) == (Wrd74.Obj)))
    goto label_117;
  (Wrd151.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd151.Obj);
  (Wrd153.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if ((Wrd153.uLng) == 1)
    goto label_119;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (label_119)
  (Wrd157.pObj) = (OBJECT_ADDRESS (Wrd151.Obj));
  (Wrd158.Obj) = ((Wrd157.pObj) [0]);
  (* (--Rsp)) = (Wrd158.Obj);
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd158.Obj));
  if ((Wrd160.uLng) == 1)
    goto label_121;

DEFLABEL (label_120)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (label_121)
  (Wrd165.pObj) = (OBJECT_ADDRESS (Wrd158.Obj));
  (Wrd163.Obj) = ((Wrd165.pObj) [0]);
  if (! ((Wrd163.Obj) == (Wrd62.Obj)))
    goto label_120;
  (Wrd167.Obj) = ((Wrd165.pObj) [1]);
  (Rsp [0]) = (Wrd167.Obj);
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if (! ((Wrd171.uLng) == 1))
    goto label_120;
  (Wrd173.pObj) = (OBJECT_ADDRESS (Wrd167.Obj));
  (Wrd174.Obj) = ((Wrd173.pObj) [0]);
  (* (--Rsp)) = (Wrd174.Obj);
  (Wrd175.Obj) = ((Wrd173.pObj) [1]);
  if ((Wrd175.Obj) == (Wrd74.Obj))
    goto label_123;

DEFLABEL (label_122)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (label_123)
  (Wrd181.Obj) = ((Wrd157.pObj) [1]);
  if (! ((Wrd181.Obj) == (Wrd74.Obj)))
    goto label_122;
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd174.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd191.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 4;
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd191.pObj)));
  Wrd198 = Wrd191;
  ((Wrd198.pObj) [2]) = (Wrd70.Obj);
  ((Wrd198.pObj) [3]) = (Wrd102.Obj);
  ((Wrd198.pObj) [4]) = (Wrd138.Obj);
  ((Wrd198.pObj) [5]) = (Wrd174.Obj);
  Rvl = (Wrd190.Obj);
  Rsp = (& (Rsp [18]));
  goto pop_return;

DEFLABEL (lambda_99)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_73)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [9]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_15]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_10_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_18]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_10_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_16]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (Wrd10.Obj) = (current_block [OBJECT_10_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define TAG_11_6 1
#define LABEL_11_7 7
#define LABEL_11_9 9
#define LABEL_11_11 11
#define ENVIRONMENT_LABEL_11_3 25
#define DEBUGGING_LABEL_11_2 24
#define OBJECT_11_4 23
#define OBJECT_11_3 22
#define OBJECT_11_2 21
#define OBJECT_11_1 20
#define OBJECT_11_0 19
#define EXECUTE_CACHE_11_12 13
#define EXECUTE_CACHE_11_10 15
#define EXECUTE_CACHE_11_8 17
#define FREE_REFERENCES_LABEL_11_0 12
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd134;
  machine_word Wrd128;
  machine_word Wrd129;
  machine_word Wrd119;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd93;
  machine_word Wrd89;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd73;
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
      goto lambda_61;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_65;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_41;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_43;

    case 4:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_42;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_64)
DEFLABEL (lambda_61)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_67;

DEFLABEL (label_66)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_11_0])))
    goto label_66;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_66;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_69;

DEFLABEL (label_68)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_11_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_68;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_68;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_11_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_70;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_71;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_73;

DEFLABEL (label_72)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_11_3])))
    goto label_72;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_72;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd73.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd75.uLng) == 1)
    goto label_74;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd82.uLng) == 1)
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [0]);
  if (! ((Wrd85.Obj) == (Wrd30.Obj)))
    goto label_75;
  (Wrd89.Obj) = ((Wrd87.pObj) [1]);
  (Rsp [0]) = (Wrd89.Obj);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd93.uLng) == 1))
    goto label_75;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd97.Obj) = ((Wrd95.pObj) [1]);
  if ((Wrd97.Obj) == (Wrd42.Obj))
    goto label_77;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd105.Obj) = ((Wrd79.pObj) [1]);
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd107.uLng) == 1)
    goto label_78;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (* (--Rsp)) = (Wrd112.Obj);
  (Wrd113.Obj) = ((Wrd111.pObj) [1]);
  if ((Wrd113.Obj) == (Wrd42.Obj))
    goto label_80;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd119.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd119.Obj) == (Wrd42.Obj)))
    goto label_79;
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (Rsp [2]) = (Wrd70.Obj);
  (Rsp [3]) = (Wrd38.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd129.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 3;
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd129.pObj)));
  Wrd134 = Wrd129;
  ((Wrd134.pObj) [2]) = (Wrd38.Obj);
  ((Wrd134.pObj) [3]) = (Wrd70.Obj);
  ((Wrd134.pObj) [4]) = (Wrd96.Obj);
  Rvl = (Wrd128.Obj);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_45)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 12
#define DEBUGGING_LABEL_12_2 11
#define EXECUTE_CACHE_12_6 7
#define FREE_REFERENCE_12_0 10
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_12_4);
      goto flonum_1_arg_operator_0;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flonum_1_arg_operator_4)
DEFLABEL (flonum_1_arg_operator_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_7 9
#define LABEL_13_10 11
#define ENVIRONMENT_LABEL_13_3 24
#define DEBUGGING_LABEL_13_2 23
#define OBJECT_13_1 22
#define OBJECT_13_0 21
#define EXECUTE_CACHE_13_12 13
#define EXECUTE_CACHE_13_11 15
#define EXECUTE_CACHE_13_9 17
#define EXECUTE_CACHE_13_8 19
#define FREE_REFERENCES_LABEL_13_0 12
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd10.Obj) = (current_block [OBJECT_13_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define ENVIRONMENT_LABEL_14_3 15
#define DEBUGGING_LABEL_14_2 14
#define OBJECT_14_0 13
#define EXECUTE_CACHE_14_8 9
#define EXECUTE_CACHE_14_7 11
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Wrd10.Obj) = (current_block [OBJECT_14_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define LABEL_15_7 7
#define LABEL_15_9 9
#define LABEL_15_10 11
#define LABEL_15_12 13
#define ENVIRONMENT_LABEL_15_3 27
#define DEBUGGING_LABEL_15_2 26
#define OBJECT_15_4 25
#define OBJECT_15_3 24
#define OBJECT_15_2 23
#define OBJECT_15_1 22
#define OBJECT_15_0 21
#define EXECUTE_CACHE_15_13 15
#define EXECUTE_CACHE_15_11 17
#define EXECUTE_CACHE_15_8 19
#define FREE_REFERENCES_LABEL_15_0 14
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd169;
  machine_word Wrd161;
  machine_word Wrd162;
  machine_word Wrd151;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd139;
  machine_word Wrd137;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd125;
  machine_word Wrd121;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd114;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd93;
  machine_word Wrd89;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd73;
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
      goto lambda_77;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_81;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_53;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_52;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_55;

    case 5:
      current_block = (Rpc - LABEL_15_12);
      goto continuation_54;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_80)
DEFLABEL (lambda_77)
  INTERRUPT_CHECK (26, LABEL_15_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_15_0])))
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
  (Wrd30.Obj) = (current_block [OBJECT_15_1]);
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
  (Wrd42.Obj) = (current_block [OBJECT_15_2]);
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
  if (! ((Wrd59.Obj) == (current_block [OBJECT_15_3])))
    goto label_88;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_88;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd73.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd75.uLng) == 1)
    goto label_90;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_90)
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd82.uLng) == 1)
    goto label_92;

DEFLABEL (label_91)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_92)
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [0]);
  if (! ((Wrd85.Obj) == (Wrd30.Obj)))
    goto label_91;
  (Wrd89.Obj) = ((Wrd87.pObj) [1]);
  (Rsp [0]) = (Wrd89.Obj);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd93.uLng) == 1))
    goto label_91;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd97.Obj) = ((Wrd95.pObj) [1]);
  if ((Wrd97.Obj) == (Wrd42.Obj))
    goto label_93;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd105.Obj) = ((Wrd79.pObj) [1]);
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd107.uLng) == 1)
    goto label_94;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_94)
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (* (--Rsp)) = (Wrd112.Obj);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if ((Wrd114.uLng) == 1)
    goto label_96;

DEFLABEL (label_95)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_96)
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd117.Obj) = ((Wrd119.pObj) [0]);
  if (! ((Wrd117.Obj) == (Wrd30.Obj)))
    goto label_95;
  (Wrd121.Obj) = ((Wrd119.pObj) [1]);
  (Rsp [0]) = (Wrd121.Obj);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd125.uLng) == 1))
    goto label_95;
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd121.Obj));
  (Wrd128.Obj) = ((Wrd127.pObj) [0]);
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd129.Obj) = ((Wrd127.pObj) [1]);
  if ((Wrd129.Obj) == (Wrd42.Obj))
    goto label_97;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (label_97)
  (Wrd137.Obj) = ((Wrd111.pObj) [1]);
  (* (--Rsp)) = (Wrd137.Obj);
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if ((Wrd139.uLng) == 1)
    goto label_98;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (label_98)
  (Wrd143.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd144.Obj) = ((Wrd143.pObj) [0]);
  (* (--Rsp)) = (Wrd144.Obj);
  (Wrd145.Obj) = ((Wrd143.pObj) [1]);
  if ((Wrd145.Obj) == (Wrd42.Obj))
    goto label_100;

DEFLABEL (label_99)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (label_100)
  (Wrd151.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd151.Obj) == (Wrd42.Obj)))
    goto label_99;
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  (Rsp [3]) = (Wrd70.Obj);
  (Rsp [4]) = (Wrd38.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd162.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 4;
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd162.pObj)));
  Wrd169 = Wrd162;
  ((Wrd169.pObj) [2]) = (Wrd38.Obj);
  ((Wrd169.pObj) [3]) = (Wrd70.Obj);
  ((Wrd169.pObj) [4]) = (Wrd96.Obj);
  ((Wrd169.pObj) [5]) = (Wrd128.Obj);
  Rvl = (Wrd161.Obj);
  Rsp = (& (Rsp [17]));
  goto pop_return;

DEFLABEL (lambda_81)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_57)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_15_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_13]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_15_12);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 12
#define DEBUGGING_LABEL_16_2 11
#define EXECUTE_CACHE_16_6 7
#define FREE_REFERENCE_16_0 10
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_16_4);
      goto flonum_2_args_operator_0;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flonum_2_args_operator_4)
DEFLABEL (flonum_2_args_operator_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define ENVIRONMENT_LABEL_17_3 15
#define DEBUGGING_LABEL_17_2 14
#define OBJECT_17_0 13
#define EXECUTE_CACHE_17_8 9
#define EXECUTE_CACHE_17_7 11
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_17_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd10.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define ENVIRONMENT_LABEL_18_3 15
#define DEBUGGING_LABEL_18_2 14
#define OBJECT_18_0 13
#define EXECUTE_CACHE_18_8 9
#define EXECUTE_CACHE_18_7 11
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_2;

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

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd10.Obj) = (current_block [OBJECT_18_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define ENVIRONMENT_LABEL_19_3 15
#define DEBUGGING_LABEL_19_2 14
#define OBJECT_19_0 13
#define EXECUTE_CACHE_19_8 9
#define EXECUTE_CACHE_19_7 11
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_2;

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

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd10.Obj) = (current_block [OBJECT_19_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define ENVIRONMENT_LABEL_20_3 15
#define DEBUGGING_LABEL_20_2 14
#define OBJECT_20_0 13
#define EXECUTE_CACHE_20_8 9
#define EXECUTE_CACHE_20_7 11
#define FREE_REFERENCES_LABEL_20_0 8
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_2;

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

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Wrd10.Obj) = (current_block [OBJECT_20_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define ENVIRONMENT_LABEL_21_3 16
#define DEBUGGING_LABEL_21_2 15
#define OBJECT_21_1 14
#define OBJECT_21_0 13
#define EXECUTE_CACHE_21_8 9
#define EXECUTE_CACHE_21_7 11
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_21_4);
      goto lambda_2;

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

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Wrd10.Obj) = (current_block [OBJECT_21_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define TAG_22_6 1
#define LABEL_22_9 7
#define LABEL_22_7 9
#define LABEL_22_10 11
#define LABEL_22_11 13
#define LABEL_22_12 15
#define ENVIRONMENT_LABEL_22_3 37
#define DEBUGGING_LABEL_22_2 36
#define OBJECT_22_8 35
#define OBJECT_22_7 34
#define OBJECT_22_6 33
#define OBJECT_22_5 32
#define OBJECT_22_4 31
#define OBJECT_22_3 30
#define OBJECT_22_2 29
#define OBJECT_22_1 28
#define OBJECT_22_0 27
#define EXECUTE_CACHE_22_14 17
#define EXECUTE_CACHE_22_13 19
#define EXECUTE_CACHE_22_8 21
#define FREE_REFERENCE_22_2 24
#define FREE_REFERENCE_22_1 25
#define FREE_REFERENCE_22_0 26
#define FREE_REFERENCES_LABEL_22_0 16
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
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
      goto lambda_33;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto lambda_40;

    case 2:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_19;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_24;

    case 4:
      current_block = (Rpc - LABEL_22_10);
      goto label_37;

    case 5:
      current_block = (Rpc - LABEL_22_11);
      goto label_36;

    case 6:
      current_block = (Rpc - LABEL_22_12);
      goto label_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_39)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_42;

DEFLABEL (label_41)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_22_0])))
    goto label_41;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_41;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_43;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_45;

DEFLABEL (label_44)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  if (! ((Wrd37.Obj) == (current_block [OBJECT_22_1])))
    goto label_44;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_44;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_22_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_47;

DEFLABEL (label_46)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd55.Obj) = ((Wrd31.pObj) [1]);
  if (! ((Wrd55.Obj) == (Wrd52.Obj)))
    goto label_46;
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd63.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_5])));
  Rhp += 2;
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd63.pObj)));
  Wrd66 = Wrd63;
  ((Wrd66.pObj) [2]) = (Wrd22.Obj);
  ((Wrd66.pObj) [3]) = (Wrd48.Obj);
  Rvl = (Wrd62.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_22_5);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  if ((Wrd10.Obj) == (current_block [OBJECT_22_4]))
    goto label_55;
  if ((Wrd10.Obj) == (current_block [OBJECT_22_5]))
    goto label_52;
  if ((Wrd10.Obj) == (current_block [OBJECT_22_6]))
    goto label_48;
  (Wrd17.Obj) = (current_block [OBJECT_22_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (label_48)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_51;
  Wrd23 = Wrd27;

DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_49)
  (Wrd29.Obj) = (current_block [OBJECT_22_7]);
  (Rsp [2]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_13]));

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_12])), (Wrd24.pObj));

DEFLABEL (label_35)
  (Wrd23.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_54;
  Wrd32 = Wrd36;

DEFLABEL (label_53)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd32.Obj);
  goto label_49;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_11])), (Wrd33.pObj));

DEFLABEL (label_36)
  (Wrd32.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_57;
  Wrd40 = Wrd44;

DEFLABEL (label_56)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd40.Obj);
  goto label_49;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_10])), (Wrd41.pObj));

DEFLABEL (label_37)
  (Wrd40.Obj) = Rvl;
  goto label_56;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (* (--Rsp)) = Rvl;
  goto label_49;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define TAG_23_6 1
#define LABEL_23_9 7
#define LABEL_23_7 9
#define LABEL_23_10 11
#define LABEL_23_11 13
#define LABEL_23_12 15
#define LABEL_23_13 17
#define ENVIRONMENT_LABEL_23_3 38
#define DEBUGGING_LABEL_23_2 37
#define OBJECT_23_7 36
#define OBJECT_23_6 35
#define OBJECT_23_5 34
#define OBJECT_23_4 33
#define OBJECT_23_3 32
#define OBJECT_23_2 31
#define OBJECT_23_1 30
#define OBJECT_23_0 29
#define EXECUTE_CACHE_23_15 19
#define EXECUTE_CACHE_23_14 21
#define EXECUTE_CACHE_23_8 23
#define FREE_REFERENCE_23_2 26
#define FREE_REFERENCE_23_1 27
#define FREE_REFERENCE_23_0 28
#define FREE_REFERENCES_LABEL_23_0 18
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulflo_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd101;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd87;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
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
      goto lambda_49;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto lambda_56;

    case 2:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_30;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_35;

    case 4:
      current_block = (Rpc - LABEL_23_10);
      goto label_53;

    case 5:
      current_block = (Rpc - LABEL_23_11);
      goto label_52;

    case 6:
      current_block = (Rpc - LABEL_23_12);
      goto label_51;

    case 7:
      current_block = (Rpc - LABEL_23_13);
      goto continuation_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_55)
DEFLABEL (lambda_49)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_58;

DEFLABEL (label_57)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_23_0])))
    goto label_57;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_57;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_59;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_61;

DEFLABEL (label_60)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  (Wrd40.Obj) = (current_block [OBJECT_23_1]);
  if (! ((Wrd37.Obj) == (Wrd40.Obj)))
    goto label_60;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_60;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_23_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_62;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd57.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd59.uLng) == 1)
    goto label_63;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd66.uLng) == 1)
    goto label_65;

DEFLABEL (label_64)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd69.Obj) = ((Wrd71.pObj) [0]);
  if (! ((Wrd69.Obj) == (Wrd40.Obj)))
    goto label_64;
  (Wrd73.Obj) = ((Wrd71.pObj) [1]);
  (Rsp [0]) = (Wrd73.Obj);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_64;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = ((Wrd79.pObj) [1]);
  if ((Wrd81.Obj) == (Wrd52.Obj))
    goto label_67;

DEFLABEL (label_66)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd87.Obj) = ((Wrd63.pObj) [1]);
  if (! ((Wrd87.Obj) == (Wrd52.Obj)))
    goto label_66;
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd96.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_5])));
  Rhp += 3;
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd96.pObj)));
  Wrd101 = Wrd96;
  ((Wrd101.pObj) [2]) = (Wrd22.Obj);
  ((Wrd101.pObj) [3]) = (Wrd48.Obj);
  ((Wrd101.pObj) [4]) = (Wrd80.Obj);
  Rvl = (Wrd95.Obj);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_23_5);

DEFLABEL (lambda_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  if ((Wrd10.Obj) == (current_block [OBJECT_23_4]))
    goto label_75;
  if ((Wrd10.Obj) == (current_block [OBJECT_23_5]))
    goto label_72;
  if ((Wrd10.Obj) == (current_block [OBJECT_23_6]))
    goto label_68;
  (Wrd17.Obj) = (current_block [OBJECT_23_7]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_14]));

DEFLABEL (label_68)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_71;
  Wrd23 = Wrd27;

DEFLABEL (label_70)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_69)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_23_3]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [4]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_23_13);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_15]));

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_12])), (Wrd24.pObj));

DEFLABEL (label_51)
  (Wrd23.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_1]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_74;
  Wrd38 = Wrd42;

DEFLABEL (label_73)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd38.Obj);
  goto label_69;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_11])), (Wrd39.pObj));

DEFLABEL (label_52)
  (Wrd38.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_75)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_77;
  Wrd46 = Wrd50;

DEFLABEL (label_76)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd46.Obj);
  goto label_69;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_10])), (Wrd47.pObj));

DEFLABEL (label_53)
  (Wrd46.Obj) = Rvl;
  goto label_76;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_23_9);
  (* (--Rsp)) = Rvl;
  goto label_69;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_13 19
#define LABEL_14 21
#define LABEL_15 23
#define LABEL_16 25
#define LABEL_19 27
#define LABEL_18 29
#define LABEL_22 31
#define LABEL_21 33
#define LABEL_23 35
#define LABEL_24 37
#define LABEL_27 39
#define LABEL_28 41
#define LABEL_25 43
#define LABEL_26 45
#define LABEL_29 47
#define TAG_30 22
#define LABEL_31 49
#define LABEL_37 51
#define LABEL_32 53
#define LABEL_33 55
#define LABEL_34 57
#define LABEL_36 59
#define LABEL_41 61
#define LABEL_38 63
#define LABEL_40 65
#define LABEL_44 67
#define LABEL_42 69
#define LABEL_43 71
#define LABEL_47 73
#define LABEL_45 75
#define LABEL_46 77
#define LABEL_50 79
#define LABEL_48 81
#define LABEL_49 83
#define LABEL_51 85
#define LABEL_52 87
#define LABEL_53 89
#define LABEL_54 91
#define LABEL_55 93
#define LABEL_56 95
#define LABEL_57 97
#define LABEL_58 99
#define LABEL_59 101
#define LABEL_60 103
#define LABEL_61 105
#define ENVIRONMENT_LABEL_3 203
#define DEBUGGING_LABEL_2 202
#define PURIFICATION_ROOT 201
#define OBJECT_79 200
#define OBJECT_78 199
#define OBJECT_77 198
#define OBJECT_76 197
#define OBJECT_75 196
#define OBJECT_74 195
#define OBJECT_73 194
#define OBJECT_72 193
#define OBJECT_71 192
#define OBJECT_70 191
#define OBJECT_69 190
#define OBJECT_68 189
#define OBJECT_67 188
#define OBJECT_66 187
#define OBJECT_65 186
#define OBJECT_64 185
#define OBJECT_63 184
#define OBJECT_62 183
#define OBJECT_61 182
#define OBJECT_60 181
#define OBJECT_59 180
#define OBJECT_58 179
#define OBJECT_57 178
#define OBJECT_56 177
#define OBJECT_55 176
#define OBJECT_54 175
#define OBJECT_53 174
#define OBJECT_52 173
#define OBJECT_51 172
#define OBJECT_50 171
#define OBJECT_49 170
#define OBJECT_48 169
#define OBJECT_47 168
#define OBJECT_46 167
#define OBJECT_45 166
#define OBJECT_44 165
#define OBJECT_43 164
#define OBJECT_42 163
#define OBJECT_41 162
#define OBJECT_40 161
#define OBJECT_39 160
#define OBJECT_38 159
#define OBJECT_37 158
#define OBJECT_36 157
#define OBJECT_35 156
#define OBJECT_34 155
#define OBJECT_33 154
#define OBJECT_32 153
#define OBJECT_31 152
#define OBJECT_30 151
#define OBJECT_29 150
#define OBJECT_28 149
#define OBJECT_27 148
#define OBJECT_26 147
#define OBJECT_25 146
#define OBJECT_24 145
#define OBJECT_23 144
#define OBJECT_22 143
#define OBJECT_21 142
#define OBJECT_20 141
#define OBJECT_19 140
#define OBJECT_18 139
#define OBJECT_17 138
#define OBJECT_16 137
#define OBJECT_15 136
#define OBJECT_14 135
#define OBJECT_13 134
#define OBJECT_12 133
#define OBJECT_11 132
#define OBJECT_10 131
#define OBJECT_9 130
#define OBJECT_8 129
#define OBJECT_7 128
#define OBJECT_6 127
#define OBJECT_5 126
#define OBJECT_4 125
#define OBJECT_3 124
#define OBJECT_2 123
#define OBJECT_1 122
#define OBJECT_0 121
#define EXECUTE_CACHE_39 107
#define EXECUTE_CACHE_35 109
#define EXECUTE_CACHE_20 111
#define EXECUTE_CACHE_5 113
#define FREE_REFERENCE_1 116
#define FREE_REFERENCE_0 117
#define GLOBAL_EXECUTE_CACHE_17 119
#define FREE_REFERENCES_LABEL_0 106
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rulflo_so_34b5bea5d58ff1e8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_11);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto label_48;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto label_49;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto continuation_20;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto lambda_19;

    case 19:
      current_block = (Rpc - LABEL_28);
      goto label_50;

    case 20:
      current_block = (Rpc - LABEL_25);
      goto continuation_36;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto lambda_58;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto continuation_39;

    case 24:
      current_block = (Rpc - LABEL_37);
      goto label_51;

    case 25:
      current_block = (Rpc - LABEL_32);
      goto continuation_23;

    case 26:
      current_block = (Rpc - LABEL_33);
      goto continuation_17;

    case 27:
      current_block = (Rpc - LABEL_34);
      goto continuation_16;

    case 28:
      current_block = (Rpc - LABEL_36);
      goto continuation_40;

    case 29:
      current_block = (Rpc - LABEL_41);
      goto label_52;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto continuation_24;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto continuation_41;

    case 32:
      current_block = (Rpc - LABEL_44);
      goto label_53;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto continuation_25;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto continuation_42;

    case 35:
      current_block = (Rpc - LABEL_47);
      goto label_54;

    case 36:
      current_block = (Rpc - LABEL_45);
      goto continuation_26;

    case 37:
      current_block = (Rpc - LABEL_46);
      goto continuation_43;

    case 38:
      current_block = (Rpc - LABEL_50);
      goto label_55;

    case 39:
      current_block = (Rpc - LABEL_48);
      goto continuation_27;

    case 40:
      current_block = (Rpc - LABEL_49);
      goto continuation_44;

    case 41:
      current_block = (Rpc - LABEL_51);
      goto continuation_28;

    case 42:
      current_block = (Rpc - LABEL_52);
      goto continuation_45;

    case 43:
      current_block = (Rpc - LABEL_53);
      goto continuation_29;

    case 44:
      current_block = (Rpc - LABEL_54);
      goto continuation_30;

    case 45:
      current_block = (Rpc - LABEL_55);
      goto continuation_31;

    case 46:
      current_block = (Rpc - LABEL_56);
      goto continuation_32;

    case 47:
      current_block = (Rpc - LABEL_57);
      goto continuation_33;

    case 48:
      current_block = (Rpc - LABEL_58);
      goto continuation_34;

    case 49:
      current_block = (Rpc - LABEL_59);
      goto label_60;

    case 50:
      current_block = (Rpc - LABEL_60);
      goto label_61;

    case 51:
      current_block = (Rpc - LABEL_61);
      goto expression_47;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_47)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_60])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_61)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_60)
  {
    static const short sections [] =
      {
	0,
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	2,
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
    if (counter > 23)
      goto label_59;
    blocks = (current_block [OBJECT_79]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_59])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_59)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd18.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd19.Obj) = (current_block [OBJECT_24]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-3]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_17]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_65;
  Wrd9 = Wrd13;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_63;
  Wrd9 = Wrd13;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_19;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_19;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_19;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_19;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_19;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_19;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_19;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_19;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_19;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_19;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_19;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_19;

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_19;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_19;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd5.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto lambda_19;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd10.pObj));

DEFLABEL (label_49)
  (Wrd9.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd10.pObj));

DEFLABEL (label_48)
  (Wrd9.Obj) = Rvl;
  goto label_64;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_36]);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd18.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd19.Obj) = (current_block [OBJECT_37]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-3]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_17]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_75;
  Wrd9 = Wrd13;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_73;
  Wrd9 = Wrd13;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_71;
  Wrd9 = Wrd13;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_69;
  Wrd9 = Wrd13;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_67;
  Wrd9 = Wrd13;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd5.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_66]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50])), (Wrd10.pObj));

DEFLABEL (label_55)
  (Wrd9.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47])), (Wrd10.pObj));

DEFLABEL (label_54)
  (Wrd9.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44])), (Wrd10.pObj));

DEFLABEL (label_53)
  (Wrd9.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd10.pObj));

DEFLABEL (label_52)
  (Wrd9.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd10.pObj));

DEFLABEL (label_51)
  (Wrd9.Obj) = Rvl;
  goto label_74;

DEFLABEL (lambda_57)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_27);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_77;
  Wrd7 = Wrd11;

DEFLABEL (label_76)
  (Rsp [1]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd8.pObj));

DEFLABEL (label_50)
  (Wrd7.Obj) = Rvl;
  goto label_76;

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_29);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd10.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

static const struct liarc_code_S arr_decl_rulflo_so_34b5bea5d58ff1e8 [23] =
  {
    { "rulflo_so_code_1", 5, rulflo_so_code_1 },
    { "rulflo_so_code_2", 6, rulflo_so_code_2 },
    { "rulflo_so_code_3", 5, rulflo_so_code_3 },
    { "rulflo_so_code_4", 6, rulflo_so_code_4 },
    { "rulflo_so_code_5", 5, rulflo_so_code_5 },
    { "rulflo_so_code_6", 7, rulflo_so_code_6 },
    { "rulflo_so_code_7", 7, rulflo_so_code_7 },
    { "rulflo_so_code_8", 8, rulflo_so_code_8 },
    { "rulflo_so_code_9", 7, rulflo_so_code_9 },
    { "rulflo_so_code_10", 9, rulflo_so_code_10 },
    { "rulflo_so_code_11", 5, rulflo_so_code_11 },
    { "rulflo_so_code_12", 2, rulflo_so_code_12 },
    { "rulflo_so_code_13", 5, rulflo_so_code_13 },
    { "rulflo_so_code_14", 3, rulflo_so_code_14 },
    { "rulflo_so_code_15", 6, rulflo_so_code_15 },
    { "rulflo_so_code_16", 2, rulflo_so_code_16 },
    { "rulflo_so_code_17", 3, rulflo_so_code_17 },
    { "rulflo_so_code_18", 3, rulflo_so_code_18 },
    { "rulflo_so_code_19", 3, rulflo_so_code_19 },
    { "rulflo_so_code_20", 3, rulflo_so_code_20 },
    { "rulflo_so_code_21", 3, rulflo_so_code_21 },
    { "rulflo_so_code_22", 7, rulflo_so_code_22 },
    { "rulflo_so_code_23", 8, rulflo_so_code_23 }
  };

int
decl_rulflo_so_34b5bea5d58ff1e8 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rulflo_so_34b5bea5d58ff1e8);
  return (0);
}

DECLARE_COMPILED_CODE ("rulflo.so", 52, decl_rulflo_so_34b5bea5d58ff1e8, rulflo_so_34b5bea5d58ff1e8)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rulflo_so_data_34b5bea5d58ff1e8 [4170] =
  "\xcc\x01\x2f\xb0\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0d\xb9"
  "\x0d\xba\x0d\xbb\x08\x0d\xbc\x0d\xbd\x28\x0d\xbe\x28\x0d\xbf\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x82\x88\x0c\xb2\xb1\x0d\xb9\x08\xb4\xb5\x28\xb6\x28\xb7"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x0d\x1c\xb2\x0d\x1c"
  "\x0d\x1c\x08\xb4\xb5\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88"
  "\x1b\xb2\x1b\x08\xb4\x1b\xb5\x28\xb6\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x85\x88\x1b\x0d\x1c\xb2\x1b\x08\xb4\xb5\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\x1b\x1b\xb2\x08\xb4\x1b\xb5\x28\xb6\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\xb2\x1b\x0d\x1c\x1b"
  "\x08\xb4\xb5\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\xb2\x1b\x08\xb4\x1b\x1b\xb5\x28"
  "\xb6\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x1b\xb2\x1b\x1b\x1b\x08\xb4\xb5\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b"
  "\xb2\x1b\x08\xb4\x1b\x1b\xb5\x28\xb6\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x0d\x1c\x08"
  "\xb4\xb5\x28\xb6\x28\x0d\x1c\x28\xb7\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x09"
  "\x08\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb2\x0d\x1c\x08\xb4\xb5\x28\xb6\x28\x0d\x1c\x28\xb7\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf"
  "\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0d\x0d\x0d"
  "\xb2\x08\xb4\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x24\x28\xb6\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x0d\x0d\xb2\x08"
  "\xb4\x0d\xba\x1b\x1b\x1b\x24\x28\xb6\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x17\x1c\x88\x1b\x0d\x0c\x0d\x0c\x0d\x0c\x0d\x0c\x0d\x0c"
  "\x0d\x0c\x1b\x2a\xb2\x0d\x1c\x0d\x1c\x88\xb4\x1b\x0d\x1c\x88\x08"
  "\x89\xb4\x1b\x0d\x1c\x88\x08\x89\x08\x8b\x0d\x0c\x1b\x1b\x1b\x88"
  "\xb4\x1b\x0d\x1c\x88\x08\x89\x08\x8a\x1b\x2a\x0d\x0c\x0d\x1b\x2a"
  "\x0d\x0c\x0d\x1b\x2a\x0d\x0c\x0d\x1b\x2a\x0d\x0c\x0d\x1b\x2a\x0d"
  "\x0c\x0d\x1b\x2a\x0d\x0c\x1b\x1b\x99\x1b\x2a\x1b\x0d\x0c\xb5\xb4"
  "\x1b\x0d\x1c\x88\x08\x89\x1b\x1b\x0d\x1c\x88\xb4\x1b\x1b\x88\x08"
  "\x89\xb4\x1b\x1b\x88\x08\x89\x1b\x0d\x1c\x88\x08\x8c\x08\x8a\xb7"
  "\x2a\x0d\x0c\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x99\x1b\x2a\x08\x1b"
  "\xb5\xb4\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x88\xb4\x1b\x1b\x88\x08"
  "\x89\x1b\x1b\x88\x08\x8b\x08\x8a\x1b\x2a\xb5\x1b\x1b\xb4\x1b\x0d"
  "\x1c\x88\x08\x89\x1b\x1b\x0d\x1c\x88\x08\x89\x08\x8a\xb4\x1b\x0d"
  "\x1c\x88\x08\x89\x08\x8a\xb4\x1b\x1b\x88\x08\x89\x08\x8a\x1b\x2a"
  "\xb5\xb4\x1b\x1b\x88\x08\x89\x1b\x1b\xb4\x1b\x1b\x88\x08\x89\x1b"
  "\x1b\x1b\x88\x08\x89\x08\x8a\xb4\x1b\x1b\x88\x08\x89\x08\x8a\x08"
  "\x8a\x1b\x2a\xb5\x1b\x1b\xb4\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x88"
  "\x08\x89\x08\x8a\x1b\x1b\x0d\x1c\x88\x08\x89\x08\x8a\xb4\x1b\x1b"
  "\x88\x08\x89\x08\x8a\x1b\x2a\xb5\xb4\x1b\x1b\x88\x08\x89\x1b\x1b"
  "\xb4\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x88\x08\x89\x08\x8a\x1b\x1b"
  "\x1b\x88\x08\x89\x08\x8a\x08\x8a\x1b\x2a\xb5\x1b\xb4\x1b\x1b\x88"
  "\x08\x89\xb4\x1b\x1b\x88\x08\x89\x08\x8a\xb4\x1b\x1b\x88\x08\x89"
  "\x08\x8a\x1b\x2a\xb5\xb4\x1b\x1b\x88\x08\x89\x1b\xb4\x1b\x1b\x88"
  "\x08\x89\xb4\x1b\x1b\x88\x08\x89\x08\x8a\x08\x8a\x1b\x2a\xb5\x1b"
  "\xb4\x1b\x1b\x88\x08\x89\x1b\x1b\x0d\x1c\x88\x08\x89\x08\x8a\xb4"
  "\x1b\x1b\x88\x08\x89\x08\x8a\x1b\x2a\xb5\xb4\x1b\x1b\x88\x08\x89"
  "\x1b\xb4\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x88\x08\x89\x08\x8a\x08"
  "\x8a\x1b\x2a\xb5\xb4\x1b\x1b\x88\x08\x89\xb1\xb4\x1b\x1b\x88\x08"
  "\x89\x08\x89\x08\x8a\x1b\x2a\xb5\xb4\x1b\x1b\x88\x08\x89\xb3\xb4"
  "\x1b\x1b\x88\x08\x89\x08\x89\x08\x8a\x1b\x2a\x28\x0d\x26\x1b\x1b"
  "\x24\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x5f\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x6d"
  "\x61\x63\x68\x69\x6e\x65\x73\x2f\x43\x2f\x72\x75\x6c\x66\x6c\x6f"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x18\x49\x4e\x4c\x49\x4e"
  "\x45\x5f\x44\x4f\x55\x42\x4c\x45\x5f\x54\x4f\x5f\x46\x4c\x4f\x4e"
  "\x55\x4d\x0e\x73\x63\x68\x65\x6d\x65\x5f\x6f\x62\x6a\x65\x63\x74"
  "\x07\x64\x6f\x75\x62\x6c\x65\x0e\x66\x6c\x6f\x61\x74\x2d\x3e\x6f"
  "\x62\x6a\x65\x63\x74\x09\x72\x65\x67\x69\x73\x74\x65\x72\x07\x61"
  "\x73\x73\x69\x67\x6e\x04\x11\x73\x74\x61\x6e\x64\x61\x72\x64\x2d"
  "\x73\x6f\x75\x72\x63\x65\x21\x04\x11\x73\x74\x61\x6e\x64\x61\x72"
  "\x64\x2d\x74\x61\x72\x67\x65\x74\x21\x05\x08\x63\x3a\x73\x63\x61"
  "\x6c\x6c\x04\x39\x0c\x81\x87\x02\x38\x0a\x81\x85\x02\x37\x08\x81"
  "\x83\x02\x36\x06\x81\x83\x02\x35\x04\x83\x04\x0b\x1c\x09\x02\x11"
  "\x46\x4c\x4f\x4e\x55\x4d\x5f\x54\x4f\x5f\x44\x4f\x55\x42\x4c\x45"
  "\x0e\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x66\x6c\x6f\x61\x74\x04\x04"
  "\x04\x08\x63\x3a\x65\x63\x61\x6c\x6c\x0a\x04\x04\x63\x3a\x3d\x0b"
  "\x05\x3f\x0e\x81\x89\x02\x3e\x0c\x81\x87\x02\x3d\x0a\x81\x85\x02"
  "\x3c\x08\x81\x83\x02\x3b\x06\x81\x83\x02\x3a\x04\x83\x04\x0d\x20"
  "\x0c\x02\x08\x64\x6f\x75\x62\x6c\x65\x2a\x0d\x11\x6d\x61\x63\x68"
  "\x69\x6e\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x0e\x0d\x66\x6c"
  "\x6f\x61\x74\x2d\x6f\x66\x66\x73\x65\x74\x0f\x07\x1a\x73\x74\x61"
  "\x6e\x64\x61\x72\x64\x2d\x75\x6e\x61\x72\x79\x2d\x63\x6f\x6e\x76"
  "\x65\x72\x73\x69\x6f\x6e\x10\x04\x07\x63\x3a\x61\x72\x65\x66\x11"
  "\x04\x0b\x04\x44\x0c\x81\x89\x02\x43\x0a\x81\x87\x02\x42\x08\x81"
  "\x87\x02\x41\x06\x81\x83\x02\x40\x04\x83\x04\x0b\x1c\x12\x02\x0d"
  "\x0e\x0f\x04\x04\x11\x04\x0b\x04\x4a\x0e\x81\x8b\x02\x49\x0c\x81"
  "\x87\x02\x48\x0a\x81\x85\x02\x47\x08\x81\x83\x02\x46\x06\x81\x83"
  "\x02\x45\x04\x83\x04\x0d\x1e\x13\x02\x0d\x05\x6c\x6f\x6e\x67\x14"
  "\x0f\x09\x1b\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x62\x69\x6e\x61"
  "\x72\x79\x2d\x63\x6f\x6e\x76\x65\x72\x73\x69\x6f\x6e\x15\x04\x11"
  "\x04\x0b\x04\x4f\x0c\x81\x89\x02\x4e\x0a\x81\x87\x02\x4d\x08\x85"
  "\x08\x4c\x06\x81\x83\x02\x4b\x04\x83\x04\x0b\x1c\x16\x02\x14\x0d"
  "\x0f\x04\x04\x11\x04\x0b\x04\x56\x10\x81\x8b\x02\x55\x0e\x81\x87"
  "\x02\x54\x0c\x81\x87\x02\x53\x0a\x81\x85\x02\x52\x08\x81\x83\x02"
  "\x51\x06\x81\x83\x02\x50\x04\x83\x04\x0f\x20\x17\x02\x08\x0d\x0f"
  "\x73\x63\x68\x65\x6d\x65\x5f\x6f\x62\x6a\x65\x63\x74\x2a\x18\x0e"
  "\x0f\x6f\x66\x66\x73\x65\x74\x2d\x61\x64\x64\x72\x65\x73\x73\x19"
  "\x0f\x07\x10\x04\x07\x63\x3a\x61\x70\x74\x72\x10\x04\x0b\x04\x11"
  "\x04\x07\x63\x3a\x63\x61\x73\x74\x1a\x06\x5d\x10\x81\x8f\x02\x5c"
  "\x0e\x81\x8d\x02\x5b\x0c\x81\x89\x02\x5a\x0a\x81\x87\x02\x59\x08"
  "\x81\x87\x02\x58\x06\x81\x83\x02\x57\x04\x83\x04\x0f\x26\x1b\x02"
  "\x09\x0d\x18\x0e\x19\x0f\x04\x04\x10\x04\x0b\x04\x11\x04\x1a\x06"
  "\x65\x12\x81\x91\x02\x64\x10\x81\x8f\x02\x63\x0e\x81\x8b\x02\x62"
  "\x0c\x81\x87\x02\x61\x0a\x81\x85\x02\x60\x08\x81\x83\x02\x5f\x06"
  "\x81\x83\x02\x5e\x04\x83\x04\x11\x28\x1c\x02\x0a\x0d\x18\x14\x0e"
  "\x19\x0f\x09\x15\x04\x10\x04\x0b\x04\x11\x04\x1a\x06\x6c\x10\x81"
  "\x91\x02\x6b\x0e\x81\x8f\x02\x6a\x0c\x81\x8b\x02\x69\x0a\x81\x89"
  "\x02\x68\x08\x81\x89\x02\x67\x06\x81\x83\x02\x66\x04\x83\x04\x0f"
  "\x27\x15\x02\x0b\x0d\x18\x14\x0e\x19\x0f\x04\x04\x10\x04\x0b\x04"
  "\x11\x04\x1a\x06\x75\x14\x81\x93\x02\x74\x12\x81\x91\x02\x73\x10"
  "\x81\x8d\x02\x72\x0e\x81\x89\x02\x71\x0c\x81\x87\x02\x70\x0a\x81"
  "\x85\x02\x6f\x08\x81\x83\x02\x6e\x06\x81\x83\x02\x6d\x04\x83\x04"
  "\x13\x2b\x1a\x02\x0c\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x31\x2d\x61"
  "\x72\x67\x18\x04\x03\x16\x66\x6c\x6f\x6e\x75\x6d\x2d\x31\x2d\x61"
  "\x72\x67\x2f\x6f\x70\x65\x72\x61\x74\x6f\x72\x14\x04\x04\x7a\x0c"
  "\x81\x89\x02\x79\x0a\x81\x85\x02\x78\x08\x81\x83\x02\x77\x06\x81"
  "\x83\x02\x76\x04\x83\x04\x0b\x1a\x11\x02\x0d\x15\x66\x6c\x6f\x6e"
  "\x75\x6d\x2d\x6d\x65\x74\x68\x6f\x64\x73\x2f\x31\x2d\x61\x72\x67"
  "\x10\x02\x04\x19\x6c\x6f\x6f\x6b\x75\x70\x2d\x61\x72\x69\x74\x68"
  "\x6d\x65\x74\x69\x63\x2d\x6d\x65\x74\x68\x6f\x64\x0d\x02\x7c\x06"
  "\x81\x85\x02\x7b\x04\x83\x04\x05\x0d\x1d\x02\x0e\x03\x30\x2e\x03"
  "\x04\x63\x3a\x2d\x1e\x04\x0b\x04\x04\x63\x3a\x3c\x1f\x05\x05\x63"
  "\x3a\x3f\x3a\x05\x81\x01\x0c\x81\x8d\x02\x80\x01\x0a\x81\x8b\x02"
  "\x7f\x08\x81\x87\x02\x7e\x06\x81\x85\x02\x7d\x04\x84\x06\x0b\x19"
  "\x20\x02\x0f\x03\x1e\x04\x0b\x03\x84\x01\x08\x81\x87\x02\x83\x01"
  "\x06\x81\x85\x02\x82\x01\x04\x84\x06\x07\x10\x21\x02\x10\x0e\x66"
  "\x6c\x6f\x6e\x75\x6d\x2d\x32\x2d\x61\x72\x67\x73\x22\x04\x03\x17"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x32\x2d\x61\x72\x67\x73\x2f\x6f\x70"
  "\x65\x72\x61\x74\x6f\x72\x23\x04\x04\x8a\x01\x0e\x81\x89\x02\x89"
  "\x01\x0c\x81\x87\x02\x88\x01\x0a\x81\x85\x02\x87\x01\x08\x81\x83"
  "\x02\x86\x01\x06\x81\x83\x02\x85\x01\x04\x83\x04\x0d\x1c\x02\x11"
  "\x16\x66\x6c\x6f\x6e\x75\x6d\x2d\x6d\x65\x74\x68\x6f\x64\x73\x2f"
  "\x32\x2d\x61\x72\x67\x73\x24\x02\x04\x0d\x02\x8c\x01\x06\x81\x85"
  "\x02\x8b\x01\x04\x83\x04\x05\x0d\x0d\x02\x12\x04\x04\x63\x3a\x2b"
  "\x04\x0b\x03\x8f\x01\x08\x81\x89\x02\x8e\x01\x06\x81\x87\x02\x8d"
  "\x01\x04\x85\x08\x07\x10\x25\x02\x13\x04\x1e\x04\x0b\x03\x92\x01"
  "\x08\x81\x89\x02\x91\x01\x06\x81\x87\x02\x90\x01\x04\x85\x08\x07"
  "\x10\x1e\x02\x14\x04\x04\x63\x3a\x2a\x04\x0b\x03\x95\x01\x08\x81"
  "\x89\x02\x94\x01\x06\x81\x87\x02\x93\x01\x04\x85\x08\x07\x10\x26"
  "\x02\x15\x04\x04\x63\x3a\x2f\x04\x0b\x03\x98\x01\x08\x81\x89\x02"
  "\x97\x01\x06\x81\x87\x02\x96\x01\x04\x85\x08\x07\x10\x27\x02\x16"
  "\x0d\x44\x4f\x55\x42\x4c\x45\x5f\x41\x54\x41\x4e\x32\x05\x0a\x04"
  "\x0b\x03\x9b\x01\x08\x81\x89\x02\x9a\x01\x06\x81\x87\x02\x99\x01"
  "\x04\x85\x08\x07\x11\x28\x02\x17\x19\x75\x6e\x6b\x6e\x6f\x77\x6e"
  "\x20\x66\x6c\x6f\x6e\x75\x6d\x20\x70\x72\x65\x64\x69\x63\x61\x74"
  "\x65\x04\x30\x2e\x30\x11\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x6f\x73"
  "\x69\x74\x69\x76\x65\x3f\x11\x66\x6c\x6f\x6e\x75\x6d\x2d\x6e\x65"
  "\x67\x61\x74\x69\x76\x65\x3f\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x7a"
  "\x65\x72\x6f\x3f\x12\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x72\x65\x64"
  "\x2d\x31\x2d\x61\x72\x67\x29\x05\x63\x3a\x3d\x3d\x2a\x1f\x04\x63"
  "\x3a\x3e\x2b\x04\x04\x05\x08\x63\x6f\x6d\x70\x61\x72\x65\x2c\x04"
  "\x06\x65\x72\x72\x6f\x72\x2d\x04\xa2\x01\x10\x81\x83\x02\xa1\x01"
  "\x0e\x81\x83\x02\xa0\x01\x0c\x81\x83\x02\x9f\x01\x0a\x81\x83\x02"
  "\x9e\x01\x08\x81\x85\x02\x9d\x01\x06\x81\x83\x02\x9c\x01\x04\x83"
  "\x04\x0f\x26\x2e\x02\x18\x19\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x66"
  "\x6c\x6f\x6e\x75\x6d\x20\x70\x72\x65\x64\x69\x63\x61\x74\x65\x10"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x67\x72\x65\x61\x74\x65\x72\x3f\x0d"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x6c\x65\x73\x73\x3f\x0e\x66\x6c\x6f"
  "\x6e\x75\x6d\x2d\x65\x71\x75\x61\x6c\x3f\x13\x66\x6c\x6f\x6e\x75"
  "\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x2a\x1f\x2b"
  "\x04\x04\x04\x2d\x05\x2c\x04\xaa\x01\x12\x81\x87\x02\xa9\x01\x10"
  "\x81\x83\x02\xa8\x01\x0e\x81\x83\x02\xa7\x01\x0c\x81\x83\x02\xa6"
  "\x01\x0a\x81\x83\x02\xa5\x01\x08\x81\x85\x02\xa4\x01\x06\x81\x83"
  "\x02\xa3\x01\x04\x83\x04\x11\x27\x2d\x18\x2c\x2c\x10\x66\x6c\x6f"
  "\x6e\x75\x6d\x2d\x74\x72\x75\x6e\x63\x61\x74\x65\x10\x44\x4f\x55"
  "\x42\x4c\x45\x5f\x54\x52\x55\x4e\x43\x41\x54\x45\x0b\x66\x6c\x6f"
  "\x6e\x75\x6d\x2d\x74\x61\x6e\x0b\x44\x4f\x55\x42\x4c\x45\x5f\x54"
  "\x41\x4e\x0c\x66\x6c\x6f\x6e\x75\x6d\x2d\x73\x71\x72\x74\x0c\x44"
  "\x4f\x55\x42\x4c\x45\x5f\x53\x51\x52\x54\x0b\x66\x6c\x6f\x6e\x75"
  "\x6d\x2d\x73\x69\x6e\x0b\x44\x4f\x55\x42\x4c\x45\x5f\x53\x49\x4e"
  "\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x72\x6f\x75\x6e\x64\x0d\x44\x4f"
  "\x55\x42\x4c\x45\x5f\x52\x4f\x55\x4e\x44\x0d\x66\x6c\x6f\x6e\x75"
  "\x6d\x2d\x6c\x6f\x67\x31\x70\x0d\x44\x4f\x55\x42\x4c\x45\x5f\x4c"
  "\x4f\x47\x31\x50\x2d\x04\x35\x23\x5b\x28\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x20\x70\x61\x74\x74\x65\x72\x6e\x2d\x6d\x61\x74\x63\x68"
  "\x65\x72\x2f\x6c\x6f\x6f\x6b\x75\x70\x29\x70\x61\x74\x74\x65\x72"
  "\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x5d\x2d\x0a\x70\x72\x65"
  "\x64\x69\x63\x61\x74\x65\x2c\x2d\x08\x73\x6f\x75\x72\x63\x65\x31"
  "\x2b\x2d\x08\x73\x6f\x75\x72\x63\x65\x32\x2a\x0b\x66\x6c\x6f\x6e"
  "\x75\x6d\x2d\x6c\x6f\x67\x0b\x44\x4f\x55\x42\x4c\x45\x5f\x4c\x4f"
  "\x47\x29\x2d\x2c\x2d\x07\x73\x6f\x75\x72\x63\x65\x2c\x2e\x04\x0d"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x66\x6c\x6f\x6f\x72\x0d\x44\x4f\x55"
  "\x42\x4c\x45\x5f\x46\x4c\x4f\x4f\x52\x0d\x66\x6c\x6f\x6e\x75\x6d"
  "\x2d\x61\x74\x61\x6e\x32\x28\x04\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x65\x78\x70\x6d\x31\x0d\x44\x4f\x55\x42\x4c\x45\x5f\x45\x58\x50"
  "\x4d\x31\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d\x64\x69\x76\x69\x64\x65"
  "\x27\x04\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x65\x78\x70\x0b\x44\x4f"
  "\x55\x42\x4c\x45\x5f\x45\x58\x50\x10\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x79\x26\x04\x0b\x66\x6c\x6f\x6e\x75"
  "\x6d\x2d\x63\x6f\x73\x0b\x44\x4f\x55\x42\x4c\x45\x5f\x43\x4f\x53"
  "\x10\x66\x6c\x6f\x6e\x75\x6d\x2d\x73\x75\x62\x74\x72\x61\x63\x74"
  "\x1e\x04\x0f\x66\x6c\x6f\x6e\x75\x6d\x2d\x63\x65\x69\x6c\x69\x6e"
  "\x67\x0f\x44\x4f\x55\x42\x4c\x45\x5f\x43\x45\x49\x4c\x49\x4e\x47"
  "\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x61\x64\x64\x25\x04\x0c\x66\x6c"
  "\x6f\x6e\x75\x6d\x2d\x61\x74\x61\x6e\x0c\x44\x4f\x55\x42\x4c\x45"
  "\x5f\x41\x54\x41\x4e\x24\x23\x0d\x04\x24\x0c\x66\x6c\x6f\x6e\x75"
  "\x6d\x2d\x61\x73\x69\x6e\x0c\x44\x4f\x55\x42\x4c\x45\x5f\x41\x53"
  "\x49\x4e\x2d\x07\x74\x61\x72\x67\x65\x74\x2e\x22\x2d\x0a\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x29\x2d\x2b\x2d\x2a\x2d\x0a\x6f\x76"
  "\x65\x72\x66\x6c\x6f\x77\x3f\x2b\x04\x0c\x66\x6c\x6f\x6e\x75\x6d"
  "\x2d\x61\x63\x6f\x73\x0c\x44\x4f\x55\x42\x4c\x45\x5f\x41\x43\x4f"
  "\x53\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d\x6e\x65\x67\x61\x74\x65\x21"
  "\x04\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x61\x62\x73\x20\x04\x10\x14"
  "\x1d\x04\x10\x2d\x2e\x18\x2d\x29\x2d\x2c\x2d\x2b\x11\x04\x0f\x19"
  "\x2d\x05\x62\x61\x73\x65\x2b\x0e\x2d\x09\x77\x2d\x6f\x66\x66\x73"
  "\x65\x74\x2a\x2d\x06\x69\x6e\x64\x65\x78\x29\x2d\x2c\x1a\x04\x2d"
  "\x2e\x0f\x19\x2d\x2b\x0e\x2d\x2a\x2d\x29\x15\x04\x0f\x19\x2d\x2b"
  "\x0e\x2d\x2a\x0e\x2d\x09\x66\x2d\x6f\x66\x66\x73\x65\x74\x28\x2d"
  "\x2c\x1c\x04\x2d\x2e\x0f\x19\x2d\x2b\x0e\x2d\x2a\x0e\x2d\x28\x1b"
  "\x04\x0f\x2d\x2b\x2d\x29\x2d\x2c\x17\x04\x2d\x2e\x0f\x2d\x2b\x2d"
  "\x29\x16\x04\x0f\x2d\x2b\x0e\x2d\x07\x6f\x66\x66\x73\x65\x74\x2a"
  "\x2d\x2c\x13\x04\x2d\x2e\x0f\x2d\x2b\x0e\x2d\x2a\x12\x04\x2d\x2e"
  "\x2d\x2c\x0c\x04\x2d\x2e\x2d\x2c\x09\x04\x05\x10\x64\x65\x66\x69"
  "\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x10\x24\x03\x04"
  "\x14\x61\x64\x64\x2d\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2d\x72"
  "\x75\x6c\x65\x21\x05\x19\x64\x65\x66\x69\x6e\x65\x2d\x61\x72\x69"
  "\x74\x68\x6d\x65\x74\x69\x63\x2d\x6d\x65\x74\x68\x6f\x64\x04\x0a"
  "\x04\x0b\x05\x34\x6a\x80\x80\x04\x33\x68\x81\x81\x02\x32\x66\x81"
  "\x81\x02\x31\x64\x81\x81\x02\x30\x62\x81\x81\x02\x2f\x60\x81\x81"
  "\x02\x2e\x5e\x81\x81\x02\x2d\x5c\x81\x81\x02\x2c\x5a\x81\x81\x02"
  "\x2b\x58\x81\x83\x02\x2a\x56\x81\x81\x02\x29\x54\x81\x83\x02\x28"
  "\x52\x81\x81\x02\x27\x50\x81\x87\x02\x26\x4e\x81\x83\x02\x25\x4c"
  "\x81\x81\x02\x24\x4a\x81\x87\x02\x23\x48\x81\x83\x02\x22\x46\x81"
  "\x81\x02\x21\x44\x81\x87\x02\x20\x42\x81\x83\x02\x1f\x40\x81\x81"
  "\x02\x1e\x3e\x81\x87\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x89\x02"
  "\x1b\x38\x81\x87\x02\x1a\x36\x81\x81\x02\x19\x34\x81\x87\x02\x18"
  "\x32\x81\x83\x02\x17\x30\x81\x87\x02\x16\x2e\x81\x81\x02\x15\x2c"
  "\x81\x83\x02\x14\x2a\x81\x87\x02\x13\x28\x81\x85\x02\x12\x26\x81"
  "\x81\x02\x11\x24\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x87"
  "\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x87\x02\x0c\x1a\x81\x83\x02"
  "\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08"
  "\x12\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c"
  "\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x83\x02\x02\x06\x81"
  "\x83\x02\x01\x04\x81\x83\x02\x69\xcc\x01";

SCHEME_OBJECT *
rulflo_so_data_34b5bea5d58ff1e8 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rulflo_so_data_34b5bea5d58ff1e8 [0]))), (sizeof (prog_rulflo_so_data_34b5bea5d58ff1e8)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_61]));
}

DECLARE_COMPILED_DATA_NS ("rulflo.so", rulflo_so_data_34b5bea5d58ff1e8)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rulflo.so", "e4f329200498324e")
