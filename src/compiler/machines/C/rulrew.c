/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:19-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define LABEL_1_10 13
#define TAG_1_11 5
#define ENVIRONMENT_LABEL_1_3 23
#define DEBUGGING_LABEL_1_2 22
#define OBJECT_1_4 21
#define OBJECT_1_3 20
#define OBJECT_1_2 19
#define OBJECT_1_1 18
#define OBJECT_1_0 17
#define EXECUTE_CACHE_1_6 15
#define FREE_REFERENCES_LABEL_1_0 14
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd7;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd83;
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
      goto lambda_46;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_27;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_28;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_48;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_49;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto lambda_52;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_51)
DEFLABEL (lambda_46)
  INTERRUPT_CHECK (26, LABEL_1_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_1_0])))
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
  (Wrd30.Obj) = (current_block [OBJECT_1_1]);
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
  (Wrd42.Obj) = (current_block [OBJECT_1_2]);
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
  if (! ((Wrd59.Obj) == (Wrd30.Obj)))
    goto label_59;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_59;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = ((Wrd69.pObj) [1]);
  if ((Wrd71.Obj) == (Wrd42.Obj))
    goto label_62;

DEFLABEL (label_61)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd77.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd77.Obj) == (Wrd42.Obj)))
    goto label_61;
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_69;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_68)
  if ((Wrd10.Obj) == (current_block [OBJECT_1_4]))
    goto label_65;

DEFLABEL (label_64)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_63)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_67;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_66)
  if (! ((Wrd22.Obj) == (current_block [OBJECT_1_4])))
    goto label_64;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_10])));
  Rhp += 2;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  Wrd37 = Wrd34;
  (Wrd38.Obj) = (Rsp [1]);
  ((Wrd37.pObj) [2]) = (Wrd38.Obj);
  (Wrd36.Obj) = (Rsp [0]);
  ((Wrd37.pObj) [3]) = (Wrd36.Obj);
  Rvl = (Wrd33.Obj);
  goto label_63;

DEFLABEL (label_67)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 1);

DEFLABEL (label_49)
  (Wrd22.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 1);

DEFLABEL (label_48)
  (Wrd10.Obj) = Rvl;
  goto label_68;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_1_10);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd17.Obj) = ((Wrd9.pObj) [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define LABEL_2_8 7
#define LABEL_2_5 9
#define LABEL_2_11 11
#define LABEL_2_9 13
#define TAG_2_10 5
#define LABEL_2_13 15
#define ENVIRONMENT_LABEL_2_3 30
#define DEBUGGING_LABEL_2_2 29
#define OBJECT_2_7 28
#define OBJECT_2_6 27
#define OBJECT_2_5 26
#define OBJECT_2_4 25
#define OBJECT_2_3 24
#define OBJECT_2_2 23
#define OBJECT_2_1 22
#define OBJECT_2_0 21
#define EXECUTE_CACHE_2_12 17
#define EXECUTE_CACHE_2_6 19
#define FREE_REFERENCES_LABEL_2_0 16
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd64;
  machine_word Wrd55;
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
      goto lambda_40;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_22;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto label_43;

    case 3:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_19;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto label_42;

    case 5:
      current_block = (Rpc - LABEL_2_9);
      goto lambda_46;

    case 6:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_45)
DEFLABEL (lambda_40)
  INTERRUPT_CHECK (26, LABEL_2_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_2_0])))
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
  if (! ((Wrd27.Obj) == (current_block [OBJECT_2_1])))
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
  (Wrd42.Obj) = (current_block [OBJECT_2_2]);
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
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  if ((Wrd55.Obj) == (Wrd42.Obj))
    goto label_53;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_61;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_60)
  if (! ((Wrd8.Obj) == (current_block [OBJECT_2_5])))
    goto label_56;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Wrd28.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd28.uLng) == 1))
    goto label_59;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_58)
  if ((Wrd26.Obj) == (current_block [OBJECT_2_4]))
    goto label_55;

DEFLABEL (label_56)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_54;

DEFLABEL (label_55)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_9])));
  Rhp += 1;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd37 = Wrd36;
  (Wrd38.Obj) = (Rsp [1]);
  ((Wrd37.pObj) [2]) = (Wrd38.Obj);
  Rvl = (Wrd35.Obj);

DEFLABEL (label_54)
DEFLABEL (label_57)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_43)
  (Wrd26.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_42)
  (Wrd8.Obj) = Rvl;
  goto label_60;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_2_9);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (Wrd12.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_2_7]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define TAG_3_9 3
#define ENVIRONMENT_LABEL_3_3 19
#define DEBUGGING_LABEL_3_2 18
#define OBJECT_3_4 17
#define OBJECT_3_3 16
#define OBJECT_3_2 15
#define OBJECT_3_1 14
#define OBJECT_3_0 13
#define EXECUTE_CACHE_3_6 11
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd64;
  machine_word Wrd55;
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
      goto lambda_33;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_19;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_35;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto lambda_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_37)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_40;

DEFLABEL (label_39)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_3_0])))
    goto label_39;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_39;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_42;

DEFLABEL (label_41)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_3_1])))
    goto label_41;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_41;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_3_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_43;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_44;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  if ((Wrd55.Obj) == (Wrd42.Obj))
    goto label_45;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_51;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_50)
  if ((Wrd8.Obj) == (current_block [OBJECT_3_4]))
    goto label_47;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_46;

DEFLABEL (label_47)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_8])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  Rvl = (Wrd21.Obj);

DEFLABEL (label_46)
DEFLABEL (label_49)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_35)
  (Wrd8.Obj) = Rvl;
  goto label_50;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_3_8);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd17.Obj) = ((Wrd9.pObj) [3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define TAG_4_9 3
#define ENVIRONMENT_LABEL_4_3 19
#define DEBUGGING_LABEL_4_2 18
#define OBJECT_4_4 17
#define OBJECT_4_3 16
#define OBJECT_4_2 15
#define OBJECT_4_1 14
#define OBJECT_4_0 13
#define EXECUTE_CACHE_4_6 11
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd64;
  machine_word Wrd55;
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
      goto lambda_33;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_19;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_35;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto lambda_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_37)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_40;

DEFLABEL (label_39)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_4_0])))
    goto label_39;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_39;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_42;

DEFLABEL (label_41)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_4_1])))
    goto label_41;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_41;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_4_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_43;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_44;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  if ((Wrd55.Obj) == (Wrd42.Obj))
    goto label_45;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_51;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_50)
  if ((Wrd8.Obj) == (current_block [OBJECT_4_4]))
    goto label_47;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_46;

DEFLABEL (label_47)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_8])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  Rvl = (Wrd21.Obj);

DEFLABEL (label_46)
DEFLABEL (label_49)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 1);

DEFLABEL (label_35)
  (Wrd8.Obj) = Rvl;
  goto label_50;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_4_8);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.Obj) = (current_block [OBJECT_4_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd17.Obj) = ((Wrd9.pObj) [3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_7 5
#define LABEL_5_8 7
#define LABEL_5_5 9
#define LABEL_5_11 11
#define LABEL_5_9 13
#define TAG_5_10 5
#define LABEL_5_13 15
#define ENVIRONMENT_LABEL_5_3 30
#define DEBUGGING_LABEL_5_2 29
#define OBJECT_5_7 28
#define OBJECT_5_6 27
#define OBJECT_5_5 26
#define OBJECT_5_4 25
#define OBJECT_5_3 24
#define OBJECT_5_2 23
#define OBJECT_5_1 22
#define OBJECT_5_0 21
#define EXECUTE_CACHE_5_12 17
#define EXECUTE_CACHE_5_6 19
#define FREE_REFERENCES_LABEL_5_0 16
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd64;
  machine_word Wrd55;
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
      goto lambda_40;

    case 1:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_22;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto label_43;

    case 3:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_19;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto label_42;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto lambda_46;

    case 6:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_45)
DEFLABEL (lambda_40)
  INTERRUPT_CHECK (26, LABEL_5_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_5_0])))
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
  if (! ((Wrd27.Obj) == (current_block [OBJECT_5_1])))
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
  (Wrd42.Obj) = (current_block [OBJECT_5_2]);
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
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  if ((Wrd55.Obj) == (Wrd42.Obj))
    goto label_53;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_61;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_60)
  if (! ((Wrd8.Obj) == (current_block [OBJECT_5_5])))
    goto label_56;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_5_6]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Wrd28.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd28.uLng) == 1))
    goto label_59;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_58)
  if ((Wrd26.Obj) == (current_block [OBJECT_5_4]))
    goto label_55;

DEFLABEL (label_56)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_54;

DEFLABEL (label_55)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_9])));
  Rhp += 1;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd37 = Wrd36;
  (Wrd38.Obj) = (Rsp [1]);
  ((Wrd37.pObj) [2]) = (Wrd38.Obj);
  Rvl = (Wrd35.Obj);

DEFLABEL (label_54)
DEFLABEL (label_57)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_43)
  (Wrd26.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_42)
  (Wrd8.Obj) = Rvl;
  goto label_60;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_5_9);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (Wrd12.Obj) = (current_block [OBJECT_5_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_5_7]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_5_0]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_8 9
#define TAG_6_9 3
#define LABEL_6_10 11
#define ENVIRONMENT_LABEL_6_3 25
#define DEBUGGING_LABEL_6_2 24
#define OBJECT_6_6 23
#define OBJECT_6_5 22
#define OBJECT_6_4 21
#define OBJECT_6_3 20
#define OBJECT_6_2 19
#define OBJECT_6_1 18
#define OBJECT_6_0 17
#define EXECUTE_CACHE_6_11 13
#define EXECUTE_CACHE_6_6 15
#define FREE_REFERENCES_LABEL_6_0 12
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd51;
  machine_word Wrd45;
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
      goto lambda_29;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_16;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto label_31;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto lambda_34;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_33)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_36;

DEFLABEL (label_35)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_6_0])))
    goto label_35;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_35;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_38;

DEFLABEL (label_37)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_6_1])))
    goto label_37;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_37;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_6_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_40;

DEFLABEL (label_39)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd45.Obj) = ((Wrd21.pObj) [1]);
  if (! ((Wrd45.Obj) == (Wrd42.Obj)))
    goto label_39;
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_46;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_45)
  if ((Wrd8.Obj) == (current_block [OBJECT_6_4]))
    goto label_42;

DEFLABEL (label_43)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_41;

DEFLABEL (label_42)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_8])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd23 = Wrd22;
  (Wrd24.Obj) = (Rsp [0]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  Rvl = (Wrd21.Obj);

DEFLABEL (label_41)
DEFLABEL (label_44)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_31)
  (Wrd8.Obj) = Rvl;
  goto label_45;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_6_8);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (Wrd12.Obj) = (current_block [OBJECT_6_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_6_6]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define ENVIRONMENT_LABEL_7_3 17
#define DEBUGGING_LABEL_7_2 16
#define OBJECT_7_2 15
#define OBJECT_7_1 14
#define OBJECT_7_0 13
#define EXECUTE_CACHE_7_8 9
#define EXECUTE_CACHE_7_7 11
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_7_4);
      goto rtl_constant_non_pointerP_3;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_constant_non_pointerP_7)
DEFLABEL (rtl_constant_non_pointerP_3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_9)
  if ((Wrd5.Obj) == (current_block [OBJECT_7_1]))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_9 9
#define TAG_8_10 3
#define ENVIRONMENT_LABEL_8_3 21
#define DEBUGGING_LABEL_8_2 20
#define OBJECT_8_4 19
#define OBJECT_8_3 18
#define OBJECT_8_2 17
#define OBJECT_8_1 16
#define OBJECT_8_0 15
#define EXECUTE_CACHE_8_8 11
#define EXECUTE_CACHE_8_6 13
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd62;
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_34;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_19;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_20;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto lambda_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_37)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_40;

DEFLABEL (label_39)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_8_0])))
    goto label_39;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_39;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_41;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_43;

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  if (! ((Wrd37.Obj) == (current_block [OBJECT_8_1])))
    goto label_42;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_42;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_8_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_45;

DEFLABEL (label_44)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd55.Obj) = ((Wrd31.pObj) [1]);
  if (! ((Wrd55.Obj) == (Wrd52.Obj)))
    goto label_44;
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_46;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_8_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_9])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_47;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_47)
DEFLABEL (label_49)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_8_9);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_8_3]);
  (Wrd9.Obj) = (current_block [OBJECT_8_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_8_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_8_0]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_9 9
#define TAG_9_10 3
#define ENVIRONMENT_LABEL_9_3 21
#define DEBUGGING_LABEL_9_2 20
#define OBJECT_9_4 19
#define OBJECT_9_3 18
#define OBJECT_9_2 17
#define OBJECT_9_1 16
#define OBJECT_9_0 15
#define EXECUTE_CACHE_9_8 11
#define EXECUTE_CACHE_9_6 13
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd62;
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_34;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_19;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_20;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto lambda_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_37)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_40;

DEFLABEL (label_39)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_9_0])))
    goto label_39;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_39;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_41;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_43;

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  if (! ((Wrd37.Obj) == (current_block [OBJECT_9_1])))
    goto label_42;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_42;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_9_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_45;

DEFLABEL (label_44)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd55.Obj) = ((Wrd31.pObj) [1]);
  if (! ((Wrd55.Obj) == (Wrd52.Obj)))
    goto label_44;
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_46;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_9_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_9])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_47;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_47)
DEFLABEL (label_49)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_9_9);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_9_3]);
  (Wrd9.Obj) = (current_block [OBJECT_9_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_9_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define LABEL_10_9 9
#define TAG_10_10 3
#define ENVIRONMENT_LABEL_10_3 21
#define DEBUGGING_LABEL_10_2 20
#define OBJECT_10_4 19
#define OBJECT_10_3 18
#define OBJECT_10_2 17
#define OBJECT_10_1 16
#define OBJECT_10_0 15
#define EXECUTE_CACHE_10_8 11
#define EXECUTE_CACHE_10_6 13
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd64;
  machine_word Wrd55;
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_34;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_19;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_20;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto lambda_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_37)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_40;

DEFLABEL (label_39)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_10_0])))
    goto label_39;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_39;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_42;

DEFLABEL (label_41)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_10_1])))
    goto label_41;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_41;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_10_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_43;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_44;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd53.pObj) [1]);
  if ((Wrd55.Obj) == (Wrd42.Obj))
    goto label_45;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_46;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_10_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_9])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_47;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_47)
DEFLABEL (label_49)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_10_9);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_10_3]);
  (Wrd9.Obj) = (current_block [OBJECT_10_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_10_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_8 7
#define LABEL_11_11 9
#define LABEL_11_10 11
#define LABEL_11_12 13
#define LABEL_11_9 15
#define LABEL_11_6 17
#define LABEL_11_13 19
#define LABEL_11_16 21
#define LABEL_11_14 23
#define LABEL_11_18 25
#define LABEL_11_17 27
#define LABEL_11_19 29
#define ENVIRONMENT_LABEL_11_3 45
#define DEBUGGING_LABEL_11_2 44
#define OBJECT_11_8 43
#define OBJECT_11_7 42
#define OBJECT_11_6 41
#define OBJECT_11_5 40
#define OBJECT_11_4 39
#define OBJECT_11_3 38
#define OBJECT_11_2 37
#define OBJECT_11_1 36
#define OBJECT_11_0 35
#define EXECUTE_CACHE_11_15 31
#define EXECUTE_CACHE_11_7 33
#define FREE_REFERENCES_LABEL_11_0 30
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_11_4);
      goto rtl_immediate_zero_constantP_21;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_11_8);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_11_12);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_15;

    case 8:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_11_16);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_11_18);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_11_17);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_11_19);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_immediate_zero_constantP_29)
DEFLABEL (rtl_immediate_zero_constantP_21)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_48;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_47)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_11_1])))
    goto label_38;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_15]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_11_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;

DEFLABEL (label_30)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));
  (Wrd11.Obj) = ((SCHEME_OBJECT) 26);
  if (! ((Wrd11.uLng) == 26))
    goto label_37;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd23.Lng) == 0))
    goto label_30;

DEFLABEL (label_36)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 1);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_11_19);
  (Rsp [0]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_32;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_32)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd10.Lng) == 0)
    goto label_34;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_33;

DEFLABEL (label_34)
  Rvl = (current_block [OBJECT_11_4]);

DEFLABEL (label_33)
DEFLABEL (label_35)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_36;

DEFLABEL (label_38)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_46;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_45)
  if ((Wrd15.Obj) == (current_block [OBJECT_11_3]))
    goto label_39;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (* (--Rsp)) = Rvl;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 1))
    goto label_44;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_43)
  if ((Wrd14.Obj) == (current_block [OBJECT_11_6]))
    goto label_41;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_40)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_42)
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (label_44)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_25)
  (Wrd14.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_24)
  (Wrd15.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_47;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (Rsp [0]) = Rvl;
  (Wrd34.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd34.uLng) == 26)
    goto label_49;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_49)
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd36.Lng) == 0)
    goto label_51;
  (Wrd32.Obj) = (current_block [OBJECT_11_5]);
  goto label_50;

DEFLABEL (label_51)
  (Wrd32.Obj) = (current_block [OBJECT_11_4]);

DEFLABEL (label_50)
DEFLABEL (label_53)
  Rsp = (& (Rsp [2]));
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;

DEFLABEL (label_52)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_11_7]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto label_42;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_52;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (Rsp [0]) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 1))
    goto label_60;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);

DEFLABEL (label_59)
  if ((Wrd6.Obj) == (current_block [OBJECT_11_6]))
    goto label_54;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11_17);
  (Rsp [0]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_55;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_55)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd10.Lng) == 0)
    goto label_57;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_56;

DEFLABEL (label_57)
  Rvl = (current_block [OBJECT_11_4]);

DEFLABEL (label_56)
DEFLABEL (label_58)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_26)
  (Wrd6.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_9 9
#define TAG_12_10 3
#define ENVIRONMENT_LABEL_12_3 19
#define DEBUGGING_LABEL_12_2 18
#define OBJECT_12_2 17
#define OBJECT_12_1 16
#define OBJECT_12_0 15
#define EXECUTE_CACHE_12_8 11
#define EXECUTE_CACHE_12_6 13
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd51;
  machine_word Wrd45;
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
      current_block = (Rpc - LABEL_12_4);
      goto lambda_26;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_16;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_17;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto lambda_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_29)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_32;

DEFLABEL (label_31)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_12_0])))
    goto label_31;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_31;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_34;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_12_1])))
    goto label_33;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_33;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_12_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_36;

DEFLABEL (label_35)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd45.Obj) = ((Wrd21.pObj) [1]);
  if (! ((Wrd45.Obj) == (Wrd42.Obj)))
    goto label_35;
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_37;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_12_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_9])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_38;

DEFLABEL (label_39)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_38)
DEFLABEL (label_40)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_12_9);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.Obj) = (current_block [OBJECT_12_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define ENVIRONMENT_LABEL_13_3 17
#define DEBUGGING_LABEL_13_2 16
#define OBJECT_13_2 15
#define OBJECT_13_1 14
#define OBJECT_13_0 13
#define EXECUTE_CACHE_13_8 9
#define EXECUTE_CACHE_13_7 11
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_13_4);
      goto rtl_constant_fixnumP_3;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_constant_fixnumP_7)
DEFLABEL (rtl_constant_fixnumP_3)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_9)
  if ((Wrd5.Obj) == (current_block [OBJECT_13_1]))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_9 9
#define TAG_14_10 3
#define LABEL_14_11 11
#define LABEL_14_13 13
#define ENVIRONMENT_LABEL_14_3 29
#define DEBUGGING_LABEL_14_2 28
#define OBJECT_14_6 27
#define OBJECT_14_5 26
#define OBJECT_14_4 25
#define OBJECT_14_3 24
#define OBJECT_14_2 23
#define OBJECT_14_1 22
#define OBJECT_14_0 21
#define EXECUTE_CACHE_14_12 15
#define EXECUTE_CACHE_14_8 17
#define EXECUTE_CACHE_14_6 19
#define FREE_REFERENCES_LABEL_14_0 14
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd70;
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_44;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_28;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_29;

    case 3:
      current_block = (Rpc - LABEL_14_9);
      goto lambda_48;

    case 4:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_31;

    case 5:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_47)
DEFLABEL (lambda_44)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_50;

DEFLABEL (label_49)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_14_0])))
    goto label_49;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_49;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_52;

DEFLABEL (label_51)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  if (! ((Wrd27.Obj) == (current_block [OBJECT_14_1])))
    goto label_51;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_51;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_14_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_53;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_54;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_56;

DEFLABEL (label_55)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_14_3])))
    goto label_55;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_55;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd68.Obj) = ((Wrd70.pObj) [0]);
  if (! ((Wrd68.Obj) == (current_block [OBJECT_14_4])))
    goto label_55;
  (Wrd72.Obj) = ((Wrd70.pObj) [1]);
  if (! ((Wrd72.Obj) == (Wrd42.Obj)))
    goto label_55;
  (Wrd76.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd76.Obj) == (Wrd42.Obj)))
    goto label_55;
  Rsp = (& (Rsp [2]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd83.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd83.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_57;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_14_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_9])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_58;

DEFLABEL (label_59)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_58)
DEFLABEL (label_60)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_14_9);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_14_11);
  (Wrd9.Obj) = (current_block [OBJECT_14_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_14_6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_14_13);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_14_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_8 7
#define LABEL_15_9 9
#define LABEL_15_6 11
#define LABEL_15_10 13
#define LABEL_15_11 15
#define LABEL_15_13 17
#define LABEL_15_12 19
#define LABEL_15_14 21
#define LABEL_15_15 23
#define LABEL_15_16 25
#define LABEL_15_17 27
#define LABEL_15_18 29
#define LABEL_15_19 31
#define LABEL_15_20 33
#define LABEL_15_21 35
#define LABEL_15_22 37
#define ENVIRONMENT_LABEL_15_3 53
#define DEBUGGING_LABEL_15_2 52
#define OBJECT_15_10 51
#define OBJECT_15_9 50
#define OBJECT_15_8 49
#define OBJECT_15_7 48
#define OBJECT_15_6 47
#define OBJECT_15_5 46
#define OBJECT_15_4 45
#define OBJECT_15_3 44
#define OBJECT_15_2 43
#define OBJECT_15_1 42
#define OBJECT_15_0 41
#define EXECUTE_CACHE_15_7 39
#define FREE_REFERENCES_LABEL_15_0 38
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulrew_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd46;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_15_4);
      goto rtl_simple_float_offset_addressP_30;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto label_36;

    case 4:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_15_10);
      goto label_33;

    case 6:
      current_block = (Rpc - LABEL_15_11);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_15_13);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_15_12);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_15_14);
      goto label_37;

    case 10:
      current_block = (Rpc - LABEL_15_15);
      goto label_38;

    case 11:
      current_block = (Rpc - LABEL_15_16);
      goto continuation_18;

    case 12:
      current_block = (Rpc - LABEL_15_17);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_15_18);
      goto label_39;

    case 14:
      current_block = (Rpc - LABEL_15_19);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_15_20);
      goto label_41;

    case 16:
      current_block = (Rpc - LABEL_15_21);
      goto continuation_26;

    case 17:
      current_block = (Rpc - LABEL_15_22);
      goto label_42;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_simple_float_offset_addressP_44)
DEFLABEL (rtl_simple_float_offset_addressP_30)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_58;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_57)
  if ((Wrd5.Obj) == (current_block [OBJECT_15_1]))
    goto label_45;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_15_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (* (--Rsp)) = Rvl;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd9.uLng) == 1))
    goto label_56;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_55)
  if ((Wrd5.Obj) == (current_block [OBJECT_15_6]))
    goto label_51;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_54;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_53)
  if ((Wrd15.Obj) == (current_block [OBJECT_15_3]))
    goto label_51;
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_50;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_49)
  if ((Wrd25.Obj) == (current_block [OBJECT_15_7]))
    goto label_47;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_46)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_48)
  (Wrd47.Obj) = (current_block [OBJECT_15_8]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (label_50)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_35)
  (Wrd25.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_51)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_52)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd46.Obj);
  goto label_48;

DEFLABEL (label_54)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_34)
  (Wrd15.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_33)
  (Wrd5.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (Wrd52.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd52.uLng) == 1))
    goto label_63;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd50.Obj) = ((Wrd51.pObj) [0]);

DEFLABEL (label_62)
  if ((Wrd50.Obj) == (current_block [OBJECT_15_3]))
    goto label_60;
  (Wrd58.Obj) = (current_block [OBJECT_15_5]);
  goto label_59;

DEFLABEL (label_60)
  (Wrd58.Obj) = (current_block [OBJECT_15_4]);

DEFLABEL (label_59)
DEFLABEL (label_61)
  Rsp = (& (Rsp [1]));
  if ((Wrd58.Obj) == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_52;

DEFLABEL (label_63)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_36)
  (Wrd50.Obj) = Rvl;
  goto label_62;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_15_12);
  (Rsp [0]) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 1))
    goto label_85;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);

DEFLABEL (label_84)
  if ((Wrd6.Obj) == (current_block [OBJECT_15_3]))
    goto label_83;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_82;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_81)
  if (! ((Wrd16.Obj) == (current_block [OBJECT_15_9])))
    goto label_79;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_15_8]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_15_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_15_17);
  (Rsp [1]) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 1))
    goto label_78;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);

DEFLABEL (label_77)
  if ((Wrd6.Obj) == (current_block [OBJECT_15_6]))
    goto label_66;

DEFLABEL (label_65)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_64)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_76;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_75)
  if ((Wrd18.Obj) == (current_block [OBJECT_15_3]))
    goto label_74;
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_73;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);

DEFLABEL (label_72)
  if (! ((Wrd28.Obj) == (current_block [OBJECT_15_10])))
    goto label_65;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_21]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_15_8]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_15_21);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_71;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_70)
  if ((Wrd6.Obj) == (current_block [OBJECT_15_3]))
    goto label_68;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_67;

DEFLABEL (label_68)
  Rvl = (current_block [OBJECT_15_4]);

DEFLABEL (label_67)
DEFLABEL (label_69)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_22]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_42)
  (Wrd6.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_20]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_41)
  (Wrd28.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_74)
  Rvl = (current_block [OBJECT_15_4]);
  goto label_64;

DEFLABEL (label_76)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_40)
  (Wrd18.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_18]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_39)
  (Wrd6.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_79)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_80)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_38)
  (Wrd16.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_83)
  Rvl = (current_block [OBJECT_15_4]);
  goto label_80;

DEFLABEL (label_85)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_37)
  (Wrd6.Obj) = Rvl;
  goto label_84;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
#define LABEL_17 27
#define LABEL_18 29
#define LABEL_19 31
#define LABEL_20 33
#define LABEL_21 35
#define ENVIRONMENT_LABEL_3 71
#define DEBUGGING_LABEL_2 70
#define PURIFICATION_ROOT 69
#define OBJECT_29 68
#define OBJECT_28 67
#define OBJECT_27 66
#define OBJECT_26 65
#define OBJECT_25 64
#define OBJECT_24 63
#define OBJECT_23 62
#define OBJECT_22 61
#define OBJECT_21 60
#define OBJECT_20 59
#define OBJECT_19 58
#define OBJECT_18 57
#define OBJECT_17 56
#define OBJECT_16 55
#define OBJECT_15 54
#define OBJECT_14 53
#define OBJECT_13 52
#define OBJECT_12 51
#define OBJECT_11 50
#define OBJECT_10 49
#define OBJECT_9 48
#define OBJECT_8 47
#define OBJECT_7 46
#define OBJECT_6 45
#define OBJECT_5 44
#define OBJECT_4 43
#define OBJECT_3 42
#define OBJECT_2 41
#define OBJECT_1 40
#define OBJECT_0 39
#define EXECUTE_CACHE_5 37
#define FREE_REFERENCES_LABEL_0 36
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rulrew_so_2434f3f4d7d3e09e (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto label_18;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto label_19;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto expression_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_15)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_20])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_19)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_18)
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 15)
      goto label_17;
    blocks = (current_block [OBJECT_29]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_19])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_17)
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
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_28]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rulrew_so_2434f3f4d7d3e09e [15] =
  {
    { "rulrew_so_code_1", 6, rulrew_so_code_1 },
    { "rulrew_so_code_2", 7, rulrew_so_code_2 },
    { "rulrew_so_code_3", 4, rulrew_so_code_3 },
    { "rulrew_so_code_4", 4, rulrew_so_code_4 },
    { "rulrew_so_code_5", 7, rulrew_so_code_5 },
    { "rulrew_so_code_6", 5, rulrew_so_code_6 },
    { "rulrew_so_code_7", 3, rulrew_so_code_7 },
    { "rulrew_so_code_8", 4, rulrew_so_code_8 },
    { "rulrew_so_code_9", 4, rulrew_so_code_9 },
    { "rulrew_so_code_10", 4, rulrew_so_code_10 },
    { "rulrew_so_code_11", 14, rulrew_so_code_11 },
    { "rulrew_so_code_12", 4, rulrew_so_code_12 },
    { "rulrew_so_code_13", 3, rulrew_so_code_13 },
    { "rulrew_so_code_14", 6, rulrew_so_code_14 },
    { "rulrew_so_code_15", 18, rulrew_so_code_15 }
  };

int
decl_rulrew_so_2434f3f4d7d3e09e (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rulrew_so_2434f3f4d7d3e09e);
  return (0);
}

DECLARE_COMPILED_CODE ("rulrew.so", 17, decl_rulrew_so_2434f3f4d7d3e09e, rulrew_so_2434f3f4d7d3e09e)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rulrew_so_data_2434f3f4d7d3e09e [2055] =
  "\x48\x1e\xa3\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\xc1\xba"
  "\x08\x0d\xbb\x0d\xbc\x28\x0d\xbd\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x82\x88\xb1\x86\x0d"
  "\xbf\x0d\x1c\xb2\x08\xb3\x0d\x1c\x28\xb5\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x83\x88\xb1\xb2\x08\xb3\x1b\x28\xb5\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xb1\xb2\x08\xb3"
  "\xb4\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x85\x88\xb1\x86\xb7\x1b\xb2\x08\xb3\xb4\x28\xb5\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x86\x88\xb1\x86\x1b\xb2\x08\xb3\xb7\x28\xb5"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x86\x1b\xb2\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x80\x08\xb3"
  "\x0d\x1c\x28\xb5\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x80\x08\xb3\x0d\x1c\x28\xb5"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb1\x80\x08\xb3\x1b\x28\xb5\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x02\xb1"
  "\x06\x07\xb4\x86\x1b\xb2\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\xb3\x0d\x1c\x28\xb5\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86\x1b\xb2\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86"
  "\x02\x80\xb1\x08\xb3\x0d\x1c\x28\xb5\x28\x0d\xbd\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x0d\x86\x0d\xb1\x06\x07\xb3\x02\x0d\xb2\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xba\x88\xb2\x1b\x2a\xb5"
  "\x1b\xb3\x0d\x1c\x0d\x88\x08\x89\xb1\x80\x08\x89\x08\x8a\x1b\x2a"
  "\x1b\x1b\x2a\x1b\xb3\x1b\x0d\x1c\x88\x08\x89\x08\x89\x1b\x2a\x1b"
  "\x1b\x2a\x1b\xb3\x1b\x0d\x1c\x88\x08\x89\x1b\x1b\x88\x08\x8a\x1b"
  "\x2a\x1b\x1b\x1b\x88\xb3\x1b\x1b\x88\x08\x89\x08\x8a\x1b\x2a\x1b"
  "\x1b\x0d\x88\xb3\x1b\x1b\x88\x08\x89\x08\x8a\x1b\x2a\xc3\x0d\x1b"
  "\x2a\xb7\xb3\x1b\x1b\x88\x08\x89\x08\x89\x1b\x2a\x1b\x2a\xb4\xb3"
  "\x1b\x0d\x1c\x88\x08\x89\x1b\x0d\x1c\x88\x08\x8a\x1b\x2a\x1b\x2a"
  "\x1b\xb3\x1b\x1b\x88\x08\x89\x1b\x1b\x88\x08\x8a\x1b\x2a\xb4\xb3"
  "\x1b\x1b\x88\x08\x89\xb3\x1b\x1b\x88\x08\x89\x08\x8a\xb6\x2a\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x5f\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x2f\x6d\x61\x63\x68\x69\x6e\x65\x73\x2f\x43\x2f\x72\x75\x6c\x72"
  "\x65\x77\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x11\x6d\x61\x63"
  "\x68\x69\x6e\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x04\x63\x61"
  "\x72\x09\x72\x65\x67\x69\x73\x74\x65\x72\x11\x63\x6f\x6e\x73\x2d"
  "\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72\x03\x15\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2d\x6b\x6e\x6f\x77\x6e\x2d\x76\x61\x6c\x75"
  "\x65\x02\x17\x0e\x81\x83\x02\x16\x0c\x81\x85\x02\x15\x0a\x81\x85"
  "\x02\x14\x08\x81\x8d\x02\x13\x06\x81\x8d\x02\x12\x04\x83\x04\x0d"
  "\x18\x02\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x74\x79\x70\x65\x09"
  "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x09\x0d\x63\x6f\x6e\x73\x2d\x70"
  "\x6f\x69\x6e\x74\x65\x72\x0a\x03\x04\x10\x67\x65\x6e\x65\x72\x61"
  "\x6c\x2d\x63\x61\x72\x2d\x63\x64\x72\x0b\x03\x1e\x10\x81\x83\x02"
  "\x1d\x0e\x81\x83\x02\x1c\x0c\x81\x8d\x02\x1b\x0a\x81\x8d\x02\x1a"
  "\x08\x81\x8d\x02\x19\x06\x81\x8d\x02\x18\x04\x83\x04\x0f\x1f\x0c"
  "\x02\x0a\x03\x02\x22\x0a\x81\x83\x02\x21\x08\x81\x8d\x02\x20\x06"
  "\x81\x8d\x02\x1f\x04\x83\x04\x09\x14\x0d\x02\x03\x02\x26\x0a\x81"
  "\x83\x02\x25\x08\x81\x8d\x02\x24\x06\x81\x8d\x02\x23\x04\x83\x04"
  "\x09\x14\x0e\x02\x09\x03\x04\x0b\x03\x2d\x10\x81\x83\x02\x2c\x0e"
  "\x81\x83\x02\x2b\x0c\x81\x8d\x02\x2a\x0a\x81\x8d\x02\x29\x08\x81"
  "\x8d\x02\x28\x06\x81\x8d\x02\x27\x04\x83\x04\x0f\x1f\x0f\x02\x09"
  "\x03\x04\x0b\x03\x32\x0c\x81\x83\x02\x31\x0a\x81\x83\x02\x30\x08"
  "\x81\x83\x02\x2f\x06\x81\x87\x02\x2e\x04\x83\x04\x0b\x1a\x10\x02"
  "\x08\x09\x04\x0b\x03\x14\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65"
  "\x72\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x11\x03\x35\x08\x81\x83\x02"
  "\x34\x06\x81\x83\x02\x33\x04\x83\x04\x07\x12\x12\x02\x09\x07\x61"
  "\x73\x73\x69\x67\x6e\x13\x03\x03\x1d\x72\x74\x6c\x3a\x69\x6d\x6d"
  "\x65\x64\x69\x61\x74\x65\x2d\x7a\x65\x72\x6f\x2d\x63\x6f\x6e\x73"
  "\x74\x61\x6e\x74\x3f\x14\x03\x39\x0a\x81\x83\x02\x38\x08\x81\x87"
  "\x02\x37\x06\x81\x8d\x02\x36\x04\x83\x04\x09\x16\x15\x02\x0a\x08"
  "\x65\x71\x2d\x74\x65\x73\x74\x16\x03\x03\x14\x03\x3d\x0a\x81\x83"
  "\x02\x3c\x08\x81\x87\x02\x3b\x06\x81\x8d\x02\x3a\x04\x83\x04\x09"
  "\x16\x17\x02\x0b\x16\x03\x03\x14\x03\x41\x0a\x81\x83\x02\x40\x08"
  "\x81\x8d\x02\x3f\x06\x81\x8d\x02\x3e\x04\x83\x04\x09\x16\x18\x02"
  "\x0c\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x64\x61\x74\x75\x6d\x0d\x09"
  "\x04\x0b\x03\x11\x03\x4f\x1e\x81\x83\x02\x4e\x1c\x81\x83\x02\x4d"
  "\x1a\x81\x83\x02\x4c\x18\x81\x83\x02\x4b\x16\x81\x83\x02\x4a\x14"
  "\x81\x83\x02\x49\x12\x81\x83\x02\x48\x10\x81\x83\x02\x47\x0e\x81"
  "\x83\x02\x46\x0c\x81\x85\x02\x45\x0a\x81\x83\x02\x44\x08\x81\x83"
  "\x02\x43\x06\x81\x83\x02\x42\x04\x83\x04\x1d\x2e\x11\x02\x0d\x0f"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x19\x03"
  "\x03\x15\x72\x74\x6c\x3a\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x66"
  "\x69\x78\x6e\x75\x6d\x3f\x1a\x03\x53\x0a\x81\x83\x02\x52\x08\x81"
  "\x83\x02\x51\x06\x81\x87\x02\x50\x04\x83\x04\x09\x14\x1b\x02\x0e"
  "\x09\x04\x0b\x03\x0f\x73\x69\x67\x6e\x65\x64\x2d\x66\x69\x78\x6e"
  "\x75\x6d\x3f\x03\x56\x08\x81\x83\x02\x55\x06\x81\x83\x02\x54\x04"
  "\x83\x04\x07\x12\x09\x02\x0f\x0d\x0d\x66\x6c\x6f\x61\x74\x2d\x6f"
  "\x66\x66\x73\x65\x74\x1c\x03\x03\x21\x72\x74\x6c\x3a\x73\x69\x6d"
  "\x70\x6c\x65\x2d\x66\x6c\x6f\x61\x74\x2d\x6f\x66\x66\x73\x65\x74"
  "\x2d\x61\x64\x64\x72\x65\x73\x73\x3f\x04\x0b\x04\x5c\x0e\x81\x85"
  "\x02\x5b\x0c\x81\x83\x02\x5a\x0a\x81\x83\x02\x59\x08\x81\x83\x02"
  "\x58\x06\x81\x87\x02\x57\x04\x83\x04\x0d\x1e\x1d\x02\x10\x10\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x3e\x61\x64\x64\x72\x65\x73\x73\x0f\x6f"
  "\x66\x66\x73\x65\x74\x2d\x61\x64\x64\x72\x65\x73\x73\x0e\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x3e\x64\x61\x74\x75\x6d\x0d\x15\x66\x6c\x6f"
  "\x61\x74\x2d\x6f\x66\x66\x73\x65\x74\x2d\x61\x64\x64\x72\x65\x73"
  "\x73\x04\x0b\x02\x6e\x26\x81\x85\x02\x6d\x24\x81\x85\x02\x6c\x22"
  "\x81\x85\x02\x6b\x20\x81\x85\x02\x6a\x1e\x81\x85\x02\x69\x1c\x81"
  "\x85\x02\x68\x1a\x81\x83\x02\x67\x18\x81\x83\x02\x66\x16\x81\x83"
  "\x02\x65\x14\x81\x83\x02\x64\x12\x81\x85\x02\x63\x10\x81\x85\x02"
  "\x62\x0e\x81\x85\x02\x61\x0c\x81\x83\x02\x60\x0a\x81\x85\x02\x5f"
  "\x08\x81\x85\x02\x5e\x06\x81\x83\x02\x5d\x04\x83\x04\x25\x36\x0b"
  "\x10\x0b\x04\x1c\x35\x23\x5b\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x20\x70\x61\x74\x74\x65\x72\x6e\x2d\x6d\x61\x74\x63\x68\x65\x72"
  "\x2f\x6c\x6f\x6f\x6b\x75\x70\x29\x70\x61\x74\x74\x65\x72\x6e\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x5d\x1c\x05\x62\x61\x73\x65\x1d"
  "\x04\x1a\x09\x04\x19\x1c\x07\x73\x6f\x75\x72\x63\x65\x1d\x1b\x04"
  "\x14\x11\x04\x16\x1c\x0a\x63\x6f\x6d\x70\x61\x72\x61\x6e\x64\x1b"
  "\x1c\x1d\x18\x04\x16\x1c\x1d\x1c\x1b\x17\x04\x13\x1c\x07\x74\x61"
  "\x72\x67\x65\x74\x1c\x1b\x15\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x1a\x72\x74\x6c\x3a\x63\x6f"
  "\x6e\x73\x74\x61\x6e\x74\x2d\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74"
  "\x65\x72\x3f\x12\x04\x1c\x1d\x10\x04\x0f\x04\x1c\x05\x74\x79\x70"
  "\x65\x1d\x1c\x06\x64\x61\x74\x75\x6d\x1b\x0e\x04\x0d\x04\x0a\x1c"
  "\x1d\x1c\x1b\x0c\x04\x1c\x1d\x1c\x1b\x04\x04\x14\x61\x64\x64\x2d"
  "\x72\x65\x77\x72\x69\x74\x69\x6e\x67\x2d\x72\x75\x6c\x65\x21\x02"
  "\x11\x24\x80\x80\x04\x10\x22\x81\x81\x02\x0f\x20\x81\x81\x02\x0e"
  "\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18"
  "\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12\x81"
  "\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x83"
  "\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x83\x02\x02\x06\x81\x83\x02"
  "\x01\x04\x81\x83\x02\x23\x48";

SCHEME_OBJECT *
rulrew_so_data_2434f3f4d7d3e09e (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rulrew_so_data_2434f3f4d7d3e09e [0]))), (sizeof (prog_rulrew_so_data_2434f3f4d7d3e09e)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_21]));
}

DECLARE_COMPILED_DATA_NS ("rulrew.so", rulrew_so_data_2434f3f4d7d3e09e)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rulrew.so", "bcb320d19c2ea480")
