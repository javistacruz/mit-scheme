/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:19-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define ENVIRONMENT_LABEL_1_3 16
#define DEBUGGING_LABEL_1_2 15
#define OBJECT_1_1 14
#define OBJECT_1_0 13
#define EXECUTE_CACHE_1_8 9
#define EXECUTE_CACHE_1_7 11
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto object__fixnum_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object__fixnum_5)
DEFLABEL (object__fixnum_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd10.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define ENVIRONMENT_LABEL_2_3 16
#define DEBUGGING_LABEL_2_2 15
#define OBJECT_2_1 14
#define OBJECT_2_0 13
#define EXECUTE_CACHE_2_8 9
#define EXECUTE_CACHE_2_7 11
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto address__fixnum_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (address__fixnum_5)
DEFLABEL (address__fixnum_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd10.Obj) = (current_block [OBJECT_2_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define ENVIRONMENT_LABEL_3_3 16
#define DEBUGGING_LABEL_3_2 15
#define OBJECT_3_1 14
#define OBJECT_3_0 13
#define EXECUTE_CACHE_3_8 9
#define EXECUTE_CACHE_3_7 11
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto fixnum__object_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixnum__object_5)
DEFLABEL (fixnum__object_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd10.Obj) = (current_block [OBJECT_3_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define ENVIRONMENT_LABEL_4_3 16
#define DEBUGGING_LABEL_4_2 15
#define OBJECT_4_1 14
#define OBJECT_4_0 13
#define EXECUTE_CACHE_4_8 9
#define EXECUTE_CACHE_4_7 11
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto fixnum__address_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixnum__address_5)
DEFLABEL (fixnum__address_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd10.Obj) = (current_block [OBJECT_4_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_7 7
#define ENVIRONMENT_LABEL_5_3 20
#define DEBUGGING_LABEL_5_2 19
#define OBJECT_5_5 18
#define OBJECT_5_4 17
#define OBJECT_5_3 16
#define OBJECT_5_2 15
#define OBJECT_5_1 14
#define OBJECT_5_0 13
#define EXECUTE_CACHE_5_8 9
#define FREE_REFERENCE_5_0 12
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_47;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_52;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_51)
DEFLABEL (lambda_47)
  INTERRUPT_CHECK (26, LABEL_5_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_5_0])))
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
  (Wrd30.Obj) = (current_block [OBJECT_5_1]);
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
  (Wrd42.Obj) = (current_block [OBJECT_5_2]);
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
  if (! ((Wrd59.Obj) == (current_block [OBJECT_5_3])))
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
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 2;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd105.pObj)));
  Wrd108 = Wrd105;
  ((Wrd108.pObj) [2]) = (Wrd38.Obj);
  ((Wrd108.pObj) [3]) = (Wrd86.Obj);
  Rvl = (Wrd104.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_5_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_66;
  Wrd14 = Wrd18;

DEFLABEL (label_65)
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_7])), (Wrd15.pObj));

DEFLABEL (label_49)
  (Wrd14.Obj) = Rvl;
  goto label_65;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_7 7
#define LABEL_6_9 9
#define LABEL_6_10 11
#define ENVIRONMENT_LABEL_6_3 26
#define DEBUGGING_LABEL_6_2 25
#define OBJECT_6_5 24
#define OBJECT_6_4 23
#define OBJECT_6_3 22
#define OBJECT_6_2 21
#define OBJECT_6_1 20
#define OBJECT_6_0 19
#define EXECUTE_CACHE_6_12 13
#define EXECUTE_CACHE_6_11 15
#define EXECUTE_CACHE_6_8 17
#define FREE_REFERENCES_LABEL_6_0 12
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_51;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_55;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_35;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_37;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_54)
DEFLABEL (lambda_51)
  INTERRUPT_CHECK (26, LABEL_6_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_6_0])))
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
  if (! ((Wrd27.Obj) == (current_block [OBJECT_6_1])))
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
  (Wrd42.Obj) = (current_block [OBJECT_6_2]);
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
  if (! ((Wrd59.Obj) == (current_block [OBJECT_6_3])))
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
  if (! ((Wrd75.Obj) == (current_block [OBJECT_6_4])))
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
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 2;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd105.pObj)));
  Wrd108 = Wrd105;
  ((Wrd108.pObj) [2]) = (Wrd38.Obj);
  ((Wrd108.pObj) [3]) = (Wrd86.Obj);
  Rvl = (Wrd104.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_55)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_39)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (Wrd10.Obj) = (current_block [OBJECT_6_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define LABEL_7_7 7
#define ENVIRONMENT_LABEL_7_3 20
#define DEBUGGING_LABEL_7_2 19
#define OBJECT_7_5 18
#define OBJECT_7_4 17
#define OBJECT_7_3 16
#define OBJECT_7_2 15
#define OBJECT_7_1 14
#define OBJECT_7_0 13
#define EXECUTE_CACHE_7_8 9
#define FREE_REFERENCE_7_0 12
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto lambda_47;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_52;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_51)
DEFLABEL (lambda_47)
  INTERRUPT_CHECK (26, LABEL_7_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_7_0])))
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
  (Wrd30.Obj) = (current_block [OBJECT_7_1]);
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
  (Wrd42.Obj) = (current_block [OBJECT_7_2]);
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
  if (! ((Wrd59.Obj) == (current_block [OBJECT_7_3])))
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
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 2;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd105.pObj)));
  Wrd108 = Wrd105;
  ((Wrd108.pObj) [2]) = (Wrd38.Obj);
  ((Wrd108.pObj) [3]) = (Wrd86.Obj);
  Rvl = (Wrd104.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_7_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_66;
  Wrd14 = Wrd18;

DEFLABEL (label_65)
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_7])), (Wrd15.pObj));

DEFLABEL (label_49)
  (Wrd14.Obj) = Rvl;
  goto label_65;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define TAG_8_6 1
#define LABEL_8_7 7
#define ENVIRONMENT_LABEL_8_3 21
#define DEBUGGING_LABEL_8_2 20
#define OBJECT_8_6 19
#define OBJECT_8_5 18
#define OBJECT_8_4 17
#define OBJECT_8_3 16
#define OBJECT_8_2 15
#define OBJECT_8_1 14
#define OBJECT_8_0 13
#define EXECUTE_CACHE_8_8 9
#define FREE_REFERENCE_8_0 12
#define FREE_REFERENCES_LABEL_8_0 8
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd128;
  machine_word Wrd124;
  machine_word Wrd125;
  machine_word Wrd117;
  machine_word Wrd113;
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_57;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto lambda_62;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto label_59;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_61)
DEFLABEL (lambda_57)
  INTERRUPT_CHECK (26, LABEL_8_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_8_0])))
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
  (Wrd30.Obj) = (current_block [OBJECT_8_1]);
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
  (Wrd42.Obj) = (current_block [OBJECT_8_2]);
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
  if (! ((Wrd59.Obj) == (current_block [OBJECT_8_3])))
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
  if (! ((Wrd75.Obj) == (current_block [OBJECT_8_4])))
    goto label_71;
  (Wrd79.Obj) = ((Wrd77.pObj) [1]);
  (Rsp [0]) = (Wrd79.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_71;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd88.uLng) == 1)
    goto label_74;

DEFLABEL (label_73)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd91.Obj) = ((Wrd93.pObj) [0]);
  if (! ((Wrd91.Obj) == (Wrd30.Obj)))
    goto label_73;
  (Wrd95.Obj) = ((Wrd93.pObj) [1]);
  (Rsp [0]) = (Wrd95.Obj);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_73;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd103.Obj) = ((Wrd101.pObj) [1]);
  if ((Wrd103.Obj) == (Wrd42.Obj))
    goto label_76;

DEFLABEL (label_75)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd109.Obj) = ((Wrd85.pObj) [1]);
  if (! ((Wrd109.Obj) == (Wrd42.Obj)))
    goto label_75;
  (Wrd113.Obj) = ((Wrd69.pObj) [1]);
  if (! ((Wrd113.Obj) == (Wrd42.Obj)))
    goto label_75;
  (Wrd117.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd117.Obj) == (Wrd42.Obj)))
    goto label_75;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd125.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_5])));
  Rhp += 2;
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd125.pObj)));
  Wrd128 = Wrd125;
  ((Wrd128.pObj) [2]) = (Wrd38.Obj);
  ((Wrd128.pObj) [3]) = (Wrd102.Obj);
  Rvl = (Wrd124.Obj);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_8_5);

DEFLABEL (lambda_43)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_8_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_78;
  Wrd14 = Wrd18;

DEFLABEL (label_77)
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_7])), (Wrd15.pObj));

DEFLABEL (label_59)
  (Wrd14.Obj) = Rvl;
  goto label_77;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_7 7
#define ENVIRONMENT_LABEL_9_3 20
#define DEBUGGING_LABEL_9_2 19
#define OBJECT_9_5 18
#define OBJECT_9_4 17
#define OBJECT_9_3 16
#define OBJECT_9_2 15
#define OBJECT_9_1 14
#define OBJECT_9_0 13
#define EXECUTE_CACHE_9_8 9
#define FREE_REFERENCE_9_0 12
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_47;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_52;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_51)
DEFLABEL (lambda_47)
  INTERRUPT_CHECK (26, LABEL_9_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_9_0])))
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
  (Wrd30.Obj) = (current_block [OBJECT_9_1]);
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
  (Wrd42.Obj) = (current_block [OBJECT_9_2]);
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
  if (! ((Wrd59.Obj) == (current_block [OBJECT_9_3])))
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
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 2;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd105.pObj)));
  Wrd108 = Wrd105;
  ((Wrd108.pObj) [2]) = (Wrd38.Obj);
  ((Wrd108.pObj) [3]) = (Wrd86.Obj);
  Rvl = (Wrd104.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_9_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_66;
  Wrd14 = Wrd18;

DEFLABEL (label_65)
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_7])), (Wrd15.pObj));

DEFLABEL (label_49)
  (Wrd14.Obj) = Rvl;
  goto label_65;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_7 7
#define ENVIRONMENT_LABEL_10_3 20
#define DEBUGGING_LABEL_10_2 19
#define OBJECT_10_5 18
#define OBJECT_10_4 17
#define OBJECT_10_3 16
#define OBJECT_10_2 15
#define OBJECT_10_1 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_8 9
#define FREE_REFERENCE_10_0 12
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_47;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_52;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_51)
DEFLABEL (lambda_47)
  INTERRUPT_CHECK (26, LABEL_10_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_10_0])))
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
  (Wrd30.Obj) = (current_block [OBJECT_10_1]);
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
  (Wrd42.Obj) = (current_block [OBJECT_10_2]);
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
  if (! ((Wrd59.Obj) == (current_block [OBJECT_10_3])))
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
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 2;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd105.pObj)));
  Wrd108 = Wrd105;
  ((Wrd108.pObj) [2]) = (Wrd38.Obj);
  ((Wrd108.pObj) [3]) = (Wrd86.Obj);
  Rvl = (Wrd104.Obj);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_10_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_66;
  Wrd14 = Wrd18;

DEFLABEL (label_65)
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_7])), (Wrd15.pObj));

DEFLABEL (label_49)
  (Wrd14.Obj) = Rvl;
  goto label_65;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_9 9
#define LABEL_11_6 11
#define LABEL_11_8 13
#define LABEL_11_10 15
#define ENVIRONMENT_LABEL_11_3 27
#define DEBUGGING_LABEL_11_2 26
#define OBJECT_11_4 25
#define OBJECT_11_3 24
#define OBJECT_11_2 23
#define OBJECT_11_1 22
#define OBJECT_11_0 21
#define EXECUTE_CACHE_11_11 17
#define FREE_REFERENCE_11_0 20
#define FREE_REFERENCES_LABEL_11_0 16
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_11_4);
      goto no_overflow_branchesB_4;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_11_6);
      goto lambda_0;

    case 5:
      current_block = (Rpc - LABEL_11_8);
      goto lambda_3;

    case 6:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (no_overflow_branchesB_10)
DEFLABEL (no_overflow_branchesB_4)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_20;
  Wrd6 = Wrd10;

DEFLABEL (label_19)
  Wrd5 = Wrd6;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_18;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd43.Lng))))
    goto label_18;
  ((Wrd41.pObj) [15]) = (Wrd12.Obj);

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_16;
  Wrd17 = Wrd21;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd35.uLng) == 10)
    goto label_14;

DEFLABEL (label_13)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 3);

DEFLABEL (label_14)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd33.Lng))))
    goto label_13;
  (Wrd26.Obj) = (Rsp [2]);
  ((Wrd31.pObj) [16]) = (Wrd26.Obj);
  Rvl = (current_block [OBJECT_11_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_9])), (Wrd18.pObj));

DEFLABEL (label_7)
  (Wrd17.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd46.Obj) = (current_block [OBJECT_11_0]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 3);

DEFLABEL (label_8)
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_11)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_11_6);
  Rvl = (current_block [OBJECT_11_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_12)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_11_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (Wrd10.Obj) = (current_block [OBJECT_11_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define ENVIRONMENT_LABEL_12_3 18
#define DEBUGGING_LABEL_12_2 17
#define OBJECT_12_1 16
#define OBJECT_12_0 15
#define EXECUTE_CACHE_12_9 9
#define EXECUTE_CACHE_12_8 11
#define EXECUTE_CACHE_12_7 13
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      goto standard_overflow_branchesB_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_overflow_branchesB_5)
DEFLABEL (standard_overflow_branchesB_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = (current_block [OBJECT_12_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_5 7
#define ENVIRONMENT_LABEL_13_3 15
#define DEBUGGING_LABEL_13_2 14
#define OBJECT_13_0 13
#define EXECUTE_CACHE_13_8 9
#define EXECUTE_CACHE_13_6 11
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_13_4);
      goto guarantee_signed_fixnum_2;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_signed_fixnum_5)
DEFLABEL (guarantee_signed_fixnum_2)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_6)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_5 3
#define LABEL_14_4 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define LABEL_14_8 11
#define LABEL_14_9 13
#define ENVIRONMENT_LABEL_14_3 23
#define DEBUGGING_LABEL_14_2 22
#define OBJECT_14_4 21
#define OBJECT_14_3 20
#define OBJECT_14_2 19
#define OBJECT_14_1 18
#define OBJECT_14_0 17
#define FREE_REFERENCE_14_1 15
#define FREE_REFERENCE_14_0 16
#define FREE_REFERENCES_LABEL_14_0 14
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd37;
  machine_word Wrd64;
  machine_word Wrd63;
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
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_14_4);
      goto signed_fixnumP_4;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_14_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (signed_fixnumP_11)
DEFLABEL (signed_fixnumP_4)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd66.Obj) = (current_block [OBJECT_14_0]);
  (Wrd69.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd69.Lng))))
    goto label_31;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd66.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_30;

DEFLABEL (label_29)
  (Wrd13.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_12;
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_12)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_14;
  (Wrd15.Obj) = (current_block [OBJECT_14_4]);
  goto label_13;

DEFLABEL (label_14)
  (Wrd15.Obj) = (current_block [OBJECT_14_3]);

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
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_27;
  Wrd28 = Wrd32;

DEFLABEL (label_26)
  Wrd27 = Wrd28;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_25;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_25;
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if ((Wrd63.Lng) < (Wrd64.Lng))
    goto label_15;

DEFLABEL (label_24)
  (Wrd43.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
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
  Rvl = (current_block [OBJECT_14_3]);

DEFLABEL (label_19)
DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_9])), (Wrd46.pObj));

DEFLABEL (label_8)
  (Wrd45.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_15;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_7])), (Wrd29.pObj));

DEFLABEL (label_6)
  (Wrd28.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  Rsp = (& (Rsp [2]));
  goto label_16;

DEFLABEL (label_31)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define LABEL_15_7 7
#define TAG_15_8 2
#define LABEL_15_10 9
#define ENVIRONMENT_LABEL_15_3 21
#define DEBUGGING_LABEL_15_2 20
#define OBJECT_15_4 19
#define OBJECT_15_3 18
#define OBJECT_15_2 17
#define OBJECT_15_1 16
#define OBJECT_15_0 15
#define EXECUTE_CACHE_15_11 11
#define EXECUTE_CACHE_15_9 13
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd136;
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
      current_block = (Rpc - LABEL_15_4);
      goto lambda_59;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_63;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto lambda_64;

    case 3:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_62)
DEFLABEL (lambda_59)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_66;

DEFLABEL (label_65)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_15_0])))
    goto label_65;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_65;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_68;

DEFLABEL (label_67)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_15_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_67;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_67;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_15_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_69;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_70;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_15_3])))
    goto label_71;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_71;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd73.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd75.uLng) == 1)
    goto label_73;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd82.uLng) == 1)
    goto label_75;

DEFLABEL (label_74)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [0]);
  if (! ((Wrd85.Obj) == (Wrd30.Obj)))
    goto label_74;
  (Wrd89.Obj) = ((Wrd87.pObj) [1]);
  (Rsp [0]) = (Wrd89.Obj);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd93.uLng) == 1))
    goto label_74;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd97.Obj) = ((Wrd95.pObj) [1]);
  if ((Wrd97.Obj) == (Wrd42.Obj))
    goto label_76;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd105.Obj) = ((Wrd79.pObj) [1]);
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd107.uLng) == 1)
    goto label_77;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (* (--Rsp)) = (Wrd112.Obj);
  (Wrd113.Obj) = ((Wrd111.pObj) [1]);
  if ((Wrd113.Obj) == (Wrd42.Obj))
    goto label_79;

DEFLABEL (label_78)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd119.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd119.Obj) == (Wrd42.Obj)))
    goto label_78;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd129.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 4;
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd129.pObj)));
  Wrd136 = Wrd129;
  ((Wrd136.pObj) [2]) = (Wrd38.Obj);
  ((Wrd136.pObj) [3]) = (Wrd70.Obj);
  ((Wrd136.pObj) [4]) = (Wrd96.Obj);
  ((Wrd136.pObj) [5]) = (Wrd112.Obj);
  Rvl = (Wrd128.Obj);
  Rsp = (& (Rsp [15]));
  goto pop_return;

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_43)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_7])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  (Wrd23.Obj) = ((Wrd7.pObj) [3]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd7.pObj) [5]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_15_7);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Wrd8.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [3]) = (Wrd5.Obj);
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
rulfix_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto fixnum_1_arg_operator_0;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixnum_1_arg_operator_4)
DEFLABEL (fixnum_1_arg_operator_0)
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
#define ENVIRONMENT_LABEL_17_3 9
#define DEBUGGING_LABEL_17_2 8
#define OBJECT_17_0 7
#define EXECUTE_CACHE_17_5 5
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 9
#define DEBUGGING_LABEL_18_2 8
#define OBJECT_18_0 7
#define EXECUTE_CACHE_18_5 5
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define LABEL_19_11 9
#define LABEL_19_9 11
#define LABEL_19_12 13
#define LABEL_19_13 15
#define LABEL_19_14 17
#define LABEL_19_15 19
#define LABEL_19_16 21
#define LABEL_19_19 23
#define LABEL_19_8 25
#define LABEL_19_17 27
#define LABEL_19_18 29
#define ENVIRONMENT_LABEL_19_3 54
#define DEBUGGING_LABEL_19_2 53
#define OBJECT_19_9 52
#define OBJECT_19_8 51
#define OBJECT_19_7 50
#define OBJECT_19_6 49
#define OBJECT_19_5 48
#define OBJECT_19_4 47
#define OBJECT_19_3 46
#define OBJECT_19_2 45
#define OBJECT_19_1 44
#define OBJECT_19_0 43
#define EXECUTE_CACHE_19_23 31
#define EXECUTE_CACHE_19_22 33
#define EXECUTE_CACHE_19_21 35
#define EXECUTE_CACHE_19_20 37
#define EXECUTE_CACHE_19_10 39
#define EXECUTE_CACHE_19_6 41
#define FREE_REFERENCES_LABEL_19_0 30
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd68;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd51;
  machine_word Wrd70;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd110;
  machine_word Wrd17;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_19_4);
      goto fixnum_add_constant_14;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_13;

    case 3:
      current_block = (Rpc - LABEL_19_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_19_12);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_19_13);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_19_14);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_19_15);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_19_16);
      goto label_16;

    case 10:
      current_block = (Rpc - LABEL_19_19);
      goto label_17;

    case 11:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_19_17);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_19_18);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixnum_add_constant_23)
DEFLABEL (fixnum_add_constant_14)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd9.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_24)
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (Wrd10.Obj) = (current_block [OBJECT_19_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd102.Obj) = (current_block [OBJECT_19_2]);
  (Wrd105.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd105.Lng))))
    goto label_44;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd102.Obj));
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd15.Obj) == (Wrd17.Obj))
    goto label_37;

DEFLABEL (label_43)
  (Wrd92.Obj) = (current_block [OBJECT_19_4]);
  (Wrd95.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd95.Lng))))
    goto label_42;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd92.Obj));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_37;

DEFLABEL (label_41)
  (Wrd82.Obj) = (current_block [OBJECT_19_5]);
  (Wrd85.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd85.Lng))))
    goto label_40;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd82.Obj));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd23.Obj) == (Wrd25.Obj))
    goto label_37;

DEFLABEL (label_39)
  (Wrd72.Obj) = (current_block [OBJECT_19_6]);
  (Wrd75.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd75.Lng))))
    goto label_38;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd72.Obj));
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd27.Obj) == (Wrd29.Obj))
    goto label_37;

DEFLABEL (label_36)
  (Wrd30.Obj) = (current_block [OBJECT_19_7]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd40.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd40.Lng)))
    goto label_26;
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 2);

DEFLABEL (label_26)
  (Wrd34.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd34.Obj) == (Wrd36.Obj))
    goto label_28;
  (Wrd32.Obj) = (current_block [OBJECT_19_9]);
  goto label_27;

DEFLABEL (label_28)
  (Wrd32.Obj) = (current_block [OBJECT_19_8]);

DEFLABEL (label_27)
DEFLABEL (label_35)
  Rsp = (& (Rsp [3]));
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;

DEFLABEL (label_34)
  (Wrd46.Obj) = (Rsp [4]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 26))
    goto label_33;
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if ((Wrd70.Lng) < 0)
    goto label_31;

DEFLABEL (label_30)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_17]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_20]));

DEFLABEL (label_31)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd61.Obj) = (Rsp [5]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 26))
    goto label_32;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd63.Lng) = (0 - (Wrd67.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd63.Lng)))
    goto label_32;
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd63.Lng));
  (* (--Rsp)) = (Wrd68.Obj);
  goto label_29;

DEFLABEL (label_32)
  (Wrd56.Obj) = (current_block [OBJECT_19_0]);
  (Wrd57.Obj) = (Rsp [5]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_33)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_31;

DEFLABEL (label_37)
  Rsp = (& (Rsp [2]));
  goto label_34;

DEFLABEL (label_38)
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_37;

DEFLABEL (label_40)
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 2);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_37;

DEFLABEL (label_42)
  (Wrd97.Obj) = (Rsp [0]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 2);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_37;

DEFLABEL (label_44)
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 2);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_37;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_22]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_19_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_23]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_5 3
#define LABEL_20_4 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define ENVIRONMENT_LABEL_20_3 19
#define DEBUGGING_LABEL_20_2 18
#define OBJECT_20_0 17
#define EXECUTE_CACHE_20_10 11
#define EXECUTE_CACHE_20_9 13
#define EXECUTE_CACHE_20_8 15
#define FREE_REFERENCES_LABEL_20_0 10
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_20_4);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);

DEFLABEL (label_7)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_6);
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
#define TAG_21_6 1
#define LABEL_21_7 7
#define TAG_21_8 2
#define LABEL_21_10 9
#define ENVIRONMENT_LABEL_21_3 21
#define DEBUGGING_LABEL_21_2 20
#define OBJECT_21_4 19
#define OBJECT_21_3 18
#define OBJECT_21_2 17
#define OBJECT_21_1 16
#define OBJECT_21_0 15
#define EXECUTE_CACHE_21_11 11
#define EXECUTE_CACHE_21_9 13
#define FREE_REFERENCES_LABEL_21_0 10
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd171;
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
      current_block = (Rpc - LABEL_21_4);
      goto lambda_74;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto lambda_78;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto lambda_79;

    case 3:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_52;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_77)
DEFLABEL (lambda_74)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_81;

DEFLABEL (label_80)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_21_0])))
    goto label_80;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_80;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_83;

DEFLABEL (label_82)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_83)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_21_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_82;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_82;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_21_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_84;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_85;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_87;

DEFLABEL (label_86)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_21_3])))
    goto label_86;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_86;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd73.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd75.uLng) == 1)
    goto label_88;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd82.uLng) == 1)
    goto label_90;

DEFLABEL (label_89)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_90)
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [0]);
  if (! ((Wrd85.Obj) == (Wrd30.Obj)))
    goto label_89;
  (Wrd89.Obj) = ((Wrd87.pObj) [1]);
  (Rsp [0]) = (Wrd89.Obj);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd93.uLng) == 1))
    goto label_89;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd97.Obj) = ((Wrd95.pObj) [1]);
  if ((Wrd97.Obj) == (Wrd42.Obj))
    goto label_91;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd105.Obj) = ((Wrd79.pObj) [1]);
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd107.uLng) == 1)
    goto label_92;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_92)
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (* (--Rsp)) = (Wrd112.Obj);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if ((Wrd114.uLng) == 1)
    goto label_94;

DEFLABEL (label_93)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_94)
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd117.Obj) = ((Wrd119.pObj) [0]);
  if (! ((Wrd117.Obj) == (Wrd30.Obj)))
    goto label_93;
  (Wrd121.Obj) = ((Wrd119.pObj) [1]);
  (Rsp [0]) = (Wrd121.Obj);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd125.uLng) == 1))
    goto label_93;
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd121.Obj));
  (Wrd128.Obj) = ((Wrd127.pObj) [0]);
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd129.Obj) = ((Wrd127.pObj) [1]);
  if ((Wrd129.Obj) == (Wrd42.Obj))
    goto label_95;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (label_95)
  (Wrd137.Obj) = ((Wrd111.pObj) [1]);
  (* (--Rsp)) = (Wrd137.Obj);
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if ((Wrd139.uLng) == 1)
    goto label_96;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (label_96)
  (Wrd143.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd144.Obj) = ((Wrd143.pObj) [0]);
  (* (--Rsp)) = (Wrd144.Obj);
  (Wrd145.Obj) = ((Wrd143.pObj) [1]);
  if ((Wrd145.Obj) == (Wrd42.Obj))
    goto label_98;

DEFLABEL (label_97)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (label_98)
  (Wrd151.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd151.Obj) == (Wrd42.Obj)))
    goto label_97;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd162.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_5])));
  Rhp += 5;
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd162.pObj)));
  Wrd171 = Wrd162;
  ((Wrd171.pObj) [2]) = (Wrd38.Obj);
  ((Wrd171.pObj) [3]) = (Wrd70.Obj);
  ((Wrd171.pObj) [4]) = (Wrd96.Obj);
  ((Wrd171.pObj) [5]) = (Wrd128.Obj);
  ((Wrd171.pObj) [6]) = (Wrd144.Obj);
  Rvl = (Wrd161.Obj);
  Rsp = (& (Rsp [19]));
  goto pop_return;

DEFLABEL (lambda_78)
  CLOSURE_HEADER (LABEL_21_5);

DEFLABEL (lambda_54)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_21_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_7])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd24 = Wrd19;
  (Wrd27.Obj) = ((Wrd7.pObj) [3]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd7.pObj) [6]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Rsp [6]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (lambda_79)
  CLOSURE_HEADER (LABEL_21_7);

DEFLABEL (lambda_53)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [4]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define EXECUTE_CACHE_22_6 7
#define FREE_REFERENCE_22_0 10
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto fixnum_2_args_operator_0;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixnum_2_args_operator_4)
DEFLABEL (fixnum_2_args_operator_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_5 3
#define LABEL_23_4 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define ENVIRONMENT_LABEL_23_3 19
#define DEBUGGING_LABEL_23_2 18
#define OBJECT_23_0 17
#define EXECUTE_CACHE_23_10 11
#define EXECUTE_CACHE_23_9 13
#define EXECUTE_CACHE_23_8 15
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_23_4);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);

DEFLABEL (label_7)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_6);
  (Wrd10.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_5 3
#define LABEL_24_4 5
#define LABEL_24_6 7
#define LABEL_24_7 9
#define ENVIRONMENT_LABEL_24_3 19
#define DEBUGGING_LABEL_24_2 18
#define OBJECT_24_0 17
#define EXECUTE_CACHE_24_10 11
#define EXECUTE_CACHE_24_9 13
#define EXECUTE_CACHE_24_8 15
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_24_4);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);

DEFLABEL (label_7)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_6);
  (Wrd10.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_5 3
#define LABEL_25_4 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define ENVIRONMENT_LABEL_25_3 19
#define DEBUGGING_LABEL_25_2 18
#define OBJECT_25_0 17
#define EXECUTE_CACHE_25_10 11
#define EXECUTE_CACHE_25_9 13
#define EXECUTE_CACHE_25_8 15
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_25_4);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);

DEFLABEL (label_7)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_6);
  (Wrd10.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_5 3
#define LABEL_26_4 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define ENVIRONMENT_LABEL_26_3 19
#define DEBUGGING_LABEL_26_2 18
#define OBJECT_26_0 17
#define EXECUTE_CACHE_26_10 11
#define EXECUTE_CACHE_26_9 13
#define EXECUTE_CACHE_26_8 15
#define FREE_REFERENCES_LABEL_26_0 10
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_26_4);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);

DEFLABEL (label_7)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_6);
  (Wrd10.Obj) = (current_block [OBJECT_26_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_5 3
#define LABEL_27_4 5
#define LABEL_27_6 7
#define LABEL_27_7 9
#define ENVIRONMENT_LABEL_27_3 20
#define DEBUGGING_LABEL_27_2 19
#define OBJECT_27_1 18
#define OBJECT_27_0 17
#define EXECUTE_CACHE_27_10 11
#define EXECUTE_CACHE_27_9 13
#define EXECUTE_CACHE_27_8 15
#define FREE_REFERENCES_LABEL_27_0 10
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_27_4);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);

DEFLABEL (label_7)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_6);
  (Wrd10.Obj) = (current_block [OBJECT_27_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_5 3
#define LABEL_28_4 5
#define LABEL_28_6 7
#define LABEL_28_7 9
#define ENVIRONMENT_LABEL_28_3 20
#define DEBUGGING_LABEL_28_2 19
#define OBJECT_28_1 18
#define OBJECT_28_0 17
#define EXECUTE_CACHE_28_10 11
#define EXECUTE_CACHE_28_9 13
#define EXECUTE_CACHE_28_8 15
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_28_4);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);

DEFLABEL (label_7)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_6);
  (Wrd10.Obj) = (current_block [OBJECT_28_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define LABEL_29_8 9
#define ENVIRONMENT_LABEL_29_3 20
#define DEBUGGING_LABEL_29_2 19
#define OBJECT_29_1 18
#define OBJECT_29_0 17
#define EXECUTE_CACHE_29_10 11
#define EXECUTE_CACHE_29_9 13
#define EXECUTE_CACHE_29_6 15
#define FREE_REFERENCES_LABEL_29_0 10
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_29_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (Wrd10.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_7 7
#define LABEL_30_8 9
#define ENVIRONMENT_LABEL_30_3 19
#define DEBUGGING_LABEL_30_2 18
#define OBJECT_30_0 17
#define EXECUTE_CACHE_30_10 11
#define EXECUTE_CACHE_30_9 13
#define EXECUTE_CACHE_30_6 15
#define FREE_REFERENCES_LABEL_30_0 10
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_30_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (Wrd10.Obj) = (current_block [OBJECT_30_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_8 5
#define LABEL_31_5 7
#define LABEL_31_6 9
#define LABEL_31_11 11
#define LABEL_31_14 13
#define LABEL_31_15 15
#define ENVIRONMENT_LABEL_31_3 29
#define DEBUGGING_LABEL_31_2 28
#define OBJECT_31_0 27
#define EXECUTE_CACHE_31_13 17
#define EXECUTE_CACHE_31_12 19
#define EXECUTE_CACHE_31_10 21
#define EXECUTE_CACHE_31_9 23
#define EXECUTE_CACHE_31_7 25
#define FREE_REFERENCES_LABEL_31_0 16
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_31_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_31_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_31_14);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_31_15);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_31_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_31_14);
  (Wrd10.Obj) = (current_block [OBJECT_31_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Wrd10.Obj) = (current_block [OBJECT_31_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define ENVIRONMENT_LABEL_32_3 20
#define DEBUGGING_LABEL_32_2 19
#define OBJECT_32_1 18
#define OBJECT_32_0 17
#define EXECUTE_CACHE_32_10 11
#define EXECUTE_CACHE_32_9 13
#define EXECUTE_CACHE_32_6 15
#define FREE_REFERENCES_LABEL_32_0 10
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      goto do_overflow_subtraction_3;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (do_overflow_subtraction_6)
DEFLABEL (do_overflow_subtraction_3)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (Wrd10.Obj) = (current_block [OBJECT_32_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define ENVIRONMENT_LABEL_33_3 17
#define DEBUGGING_LABEL_33_2 16
#define OBJECT_33_0 15
#define EXECUTE_CACHE_33_9 9
#define EXECUTE_CACHE_33_8 11
#define EXECUTE_CACHE_33_7 13
#define FREE_REFERENCES_LABEL_33_0 8
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (label_6)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Wrd10.Obj) = (current_block [OBJECT_33_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define ENVIRONMENT_LABEL_34_3 17
#define DEBUGGING_LABEL_34_2 16
#define OBJECT_34_0 15
#define EXECUTE_CACHE_34_9 9
#define EXECUTE_CACHE_34_8 11
#define EXECUTE_CACHE_34_7 13
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_34_4);
      goto overflow_productB_2;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (overflow_productB_5)
DEFLABEL (overflow_productB_2)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define TAG_35_6 1
#define LABEL_35_7 7
#define TAG_35_8 2
#define LABEL_35_10 9
#define ENVIRONMENT_LABEL_35_3 23
#define DEBUGGING_LABEL_35_2 22
#define OBJECT_35_6 21
#define OBJECT_35_5 20
#define OBJECT_35_4 19
#define OBJECT_35_3 18
#define OBJECT_35_2 17
#define OBJECT_35_1 16
#define OBJECT_35_0 15
#define EXECUTE_CACHE_35_11 11
#define EXECUTE_CACHE_35_9 13
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd191;
  machine_word Wrd181;
  machine_word Wrd182;
  machine_word Wrd171;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd159;
  machine_word Wrd157;
  machine_word Wrd151;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd141;
  machine_word Wrd137;
  machine_word Wrd133;
  machine_word Wrd135;
  machine_word Wrd130;
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
      current_block = (Rpc - LABEL_35_4);
      goto lambda_84;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto lambda_88;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto lambda_89;

    case 3:
      current_block = (Rpc - LABEL_35_10);
      goto continuation_60;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_87)
DEFLABEL (lambda_84)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_91;

DEFLABEL (label_90)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_35_0])))
    goto label_90;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_90;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_93;

DEFLABEL (label_92)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_35_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_92;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_92;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_35_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_94;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_94)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_95;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_95)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_97;

DEFLABEL (label_96)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_97)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_35_3])))
    goto label_96;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_96;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd73.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd75.uLng) == 1)
    goto label_98;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_98)
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd82.uLng) == 1)
    goto label_100;

DEFLABEL (label_99)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_100)
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [0]);
  if (! ((Wrd85.Obj) == (Wrd30.Obj)))
    goto label_99;
  (Wrd89.Obj) = ((Wrd87.pObj) [1]);
  (Rsp [0]) = (Wrd89.Obj);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd93.uLng) == 1))
    goto label_99;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd97.Obj) = ((Wrd95.pObj) [1]);
  if ((Wrd97.Obj) == (Wrd42.Obj))
    goto label_101;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_101)
  (Wrd105.Obj) = ((Wrd79.pObj) [1]);
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd107.uLng) == 1)
    goto label_102;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_102)
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (* (--Rsp)) = (Wrd112.Obj);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if ((Wrd114.uLng) == 1)
    goto label_104;

DEFLABEL (label_103)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_104)
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd117.Obj) = ((Wrd119.pObj) [0]);
  if (! ((Wrd117.Obj) == (current_block [OBJECT_35_4])))
    goto label_103;
  (Wrd121.Obj) = ((Wrd119.pObj) [1]);
  (Rsp [0]) = (Wrd121.Obj);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd125.uLng) == 1))
    goto label_103;
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd121.Obj));
  (Wrd128.Obj) = ((Wrd127.pObj) [0]);
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if ((Wrd130.uLng) == 1)
    goto label_106;

DEFLABEL (label_105)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (label_106)
  (Wrd135.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd133.Obj) = ((Wrd135.pObj) [0]);
  if (! ((Wrd133.Obj) == (current_block [OBJECT_35_5])))
    goto label_105;
  (Wrd137.Obj) = ((Wrd135.pObj) [1]);
  (Rsp [0]) = (Wrd137.Obj);
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if (! ((Wrd141.uLng) == 1))
    goto label_105;
  (Wrd143.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd144.Obj) = ((Wrd143.pObj) [0]);
  (* (--Rsp)) = (Wrd144.Obj);
  (Wrd145.Obj) = ((Wrd143.pObj) [1]);
  if ((Wrd145.Obj) == (Wrd42.Obj))
    goto label_108;

DEFLABEL (label_107)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (label_108)
  (Wrd151.Obj) = ((Wrd127.pObj) [1]);
  if (! ((Wrd151.Obj) == (Wrd42.Obj)))
    goto label_107;
  (Wrd157.Obj) = ((Wrd111.pObj) [1]);
  (* (--Rsp)) = (Wrd157.Obj);
  (Wrd159.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd159.uLng) == 1)
    goto label_109;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (label_109)
  (Wrd163.pObj) = (OBJECT_ADDRESS (Wrd157.Obj));
  (Wrd164.Obj) = ((Wrd163.pObj) [0]);
  (* (--Rsp)) = (Wrd164.Obj);
  (Wrd165.Obj) = ((Wrd163.pObj) [1]);
  if ((Wrd165.Obj) == (Wrd42.Obj))
    goto label_111;

DEFLABEL (label_110)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [15]));
  goto pop_return;

DEFLABEL (label_111)
  (Wrd171.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd171.Obj) == (Wrd42.Obj)))
    goto label_110;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd182.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_5])));
  Rhp += 5;
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd182.pObj)));
  Wrd191 = Wrd182;
  ((Wrd191.pObj) [2]) = (Wrd38.Obj);
  ((Wrd191.pObj) [3]) = (Wrd70.Obj);
  ((Wrd191.pObj) [4]) = (Wrd96.Obj);
  ((Wrd191.pObj) [5]) = (Wrd144.Obj);
  ((Wrd191.pObj) [6]) = (Wrd164.Obj);
  Rvl = (Wrd181.Obj);
  Rsp = (& (Rsp [20]));
  goto pop_return;

DEFLABEL (lambda_88)
  CLOSURE_HEADER (LABEL_35_5);

DEFLABEL (lambda_62)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_35_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_7])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd24 = Wrd15;
  (Wrd27.Obj) = ((Wrd7.pObj) [3]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd7.pObj) [5]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd7.pObj) [6]);
  ((Wrd24.pObj) [4]) = (Wrd19.Obj);
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (lambda_89)
  CLOSURE_HEADER (LABEL_35_7);

DEFLABEL (lambda_61)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_11]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_35_10);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define TAG_36_8 2
#define LABEL_36_9 9
#define TAG_36_10 3
#define LABEL_36_12 11
#define LABEL_36_16 13
#define LABEL_36_14 15
#define ENVIRONMENT_LABEL_36_3 36
#define DEBUGGING_LABEL_36_2 35
#define OBJECT_36_7 34
#define OBJECT_36_6 33
#define OBJECT_36_5 32
#define OBJECT_36_4 31
#define OBJECT_36_3 30
#define OBJECT_36_2 29
#define OBJECT_36_1 28
#define OBJECT_36_0 27
#define EXECUTE_CACHE_36_17 17
#define EXECUTE_CACHE_36_15 19
#define EXECUTE_CACHE_36_13 21
#define EXECUTE_CACHE_36_11 23
#define EXECUTE_CACHE_36_6 25
#define FREE_REFERENCES_LABEL_36_0 16
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd171;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd159;
  machine_word Wrd157;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd145;
  machine_word Wrd141;
  machine_word Wrd137;
  machine_word Wrd139;
  machine_word Wrd134;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd127;
  machine_word Wrd125;
  machine_word Wrd119;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd98;
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
      current_block = (Rpc - LABEL_36_4);
      goto lambda_87;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_60;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto lambda_91;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto lambda_92;

    case 4:
      current_block = (Rpc - LABEL_36_12);
      goto continuation_61;

    case 5:
      current_block = (Rpc - LABEL_36_16);
      goto continuation_63;

    case 6:
      current_block = (Rpc - LABEL_36_14);
      goto continuation_62;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_90)
DEFLABEL (lambda_87)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_94;

DEFLABEL (label_93)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_94)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_36_0])))
    goto label_93;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_93;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_96;

DEFLABEL (label_95)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_96)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (current_block [OBJECT_36_1]);
  if (! ((Wrd27.Obj) == (Wrd30.Obj)))
    goto label_95;
  (Wrd31.Obj) = ((Wrd29.pObj) [1]);
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_95;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = ((Wrd37.pObj) [1]);
  (Wrd42.Obj) = (current_block [OBJECT_36_2]);
  if ((Wrd39.Obj) == (Wrd42.Obj))
    goto label_97;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_97)
  (Wrd47.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_98;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_98)
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd56.uLng) == 1)
    goto label_100;

DEFLABEL (label_99)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_100)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [0]);
  if (! ((Wrd59.Obj) == (current_block [OBJECT_36_3])))
    goto label_99;
  (Wrd63.Obj) = ((Wrd61.pObj) [1]);
  (Rsp [0]) = (Wrd63.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_99;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd73.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd75.uLng) == 1)
    goto label_101;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_101)
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd82.uLng) == 1)
    goto label_103;

DEFLABEL (label_102)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_103)
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [0]);
  if (! ((Wrd85.Obj) == (current_block [OBJECT_36_4])))
    goto label_102;
  (Wrd89.Obj) = ((Wrd87.pObj) [1]);
  (Rsp [0]) = (Wrd89.Obj);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd93.uLng) == 1))
    goto label_102;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if ((Wrd98.uLng) == 1)
    goto label_105;

DEFLABEL (label_104)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_105)
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd101.Obj) = ((Wrd103.pObj) [0]);
  if (! ((Wrd101.Obj) == (current_block [OBJECT_36_5])))
    goto label_104;
  (Wrd105.Obj) = ((Wrd103.pObj) [1]);
  (Rsp [0]) = (Wrd105.Obj);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd109.uLng) == 1))
    goto label_104;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (* (--Rsp)) = (Wrd112.Obj);
  (Wrd113.Obj) = ((Wrd111.pObj) [1]);
  if ((Wrd113.Obj) == (Wrd42.Obj))
    goto label_107;

DEFLABEL (label_106)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_107)
  (Wrd119.Obj) = ((Wrd95.pObj) [1]);
  if (! ((Wrd119.Obj) == (Wrd42.Obj)))
    goto label_106;
  (Wrd125.Obj) = ((Wrd79.pObj) [1]);
  (* (--Rsp)) = (Wrd125.Obj);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if ((Wrd127.uLng) == 1)
    goto label_108;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_108)
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd132.Obj) = ((Wrd131.pObj) [0]);
  (* (--Rsp)) = (Wrd132.Obj);
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if ((Wrd134.uLng) == 1)
    goto label_110;

DEFLABEL (label_109)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (label_110)
  (Wrd139.pObj) = (OBJECT_ADDRESS (Wrd132.Obj));
  (Wrd137.Obj) = ((Wrd139.pObj) [0]);
  if (! ((Wrd137.Obj) == (Wrd30.Obj)))
    goto label_109;
  (Wrd141.Obj) = ((Wrd139.pObj) [1]);
  (Rsp [0]) = (Wrd141.Obj);
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd145.uLng) == 1))
    goto label_109;
  (Wrd147.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd148.Obj) = ((Wrd147.pObj) [0]);
  (* (--Rsp)) = (Wrd148.Obj);
  (Wrd149.Obj) = ((Wrd147.pObj) [1]);
  if ((Wrd149.Obj) == (Wrd42.Obj))
    goto label_111;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (label_111)
  (Wrd157.Obj) = ((Wrd131.pObj) [1]);
  (* (--Rsp)) = (Wrd157.Obj);
  (Wrd159.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd159.uLng) == 1)
    goto label_112;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (label_112)
  (Wrd163.pObj) = (OBJECT_ADDRESS (Wrd157.Obj));
  (Wrd164.Obj) = ((Wrd163.pObj) [0]);
  (* (--Rsp)) = (Wrd164.Obj);
  (Wrd165.Obj) = ((Wrd163.pObj) [1]);
  if ((Wrd165.Obj) == (Wrd42.Obj))
    goto label_114;

DEFLABEL (label_113)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [15]));
  goto pop_return;

DEFLABEL (label_114)
  (Wrd171.Obj) = ((Wrd53.pObj) [1]);
  if (! ((Wrd171.Obj) == (Wrd42.Obj)))
    goto label_113;
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  (Wrd182.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd182.Obj);
  (Wrd183.Obj) = (current_block [OBJECT_36_6]);
  (* (--Rsp)) = (Wrd183.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_36_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_116;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_115;

DEFLABEL (label_116)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_7])));
  Rhp += 5;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd20 = Wrd11;
  (Wrd21.Obj) = (Rsp [17]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [14]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [10]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [7]);
  ((Wrd20.pObj) [5]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  ((Wrd20.pObj) [6]) = (Wrd13.Obj);
  Rvl = (Wrd10.Obj);

DEFLABEL (label_115)
DEFLABEL (label_117)
  Rsp = (& (Rsp [20]));
  goto pop_return;

DEFLABEL (lambda_91)
  CLOSURE_HEADER (LABEL_36_7);

DEFLABEL (lambda_65)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_36_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_9])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd24 = Wrd15;
  (Wrd27.Obj) = ((Wrd7.pObj) [3]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd7.pObj) [4]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd7.pObj) [6]);
  ((Wrd24.pObj) [4]) = (Wrd19.Obj);
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (lambda_92)
  CLOSURE_HEADER (LABEL_36_9);

DEFLABEL (lambda_64)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_13]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_36_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_118;
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_17]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_36_16);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_118)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_15]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_36_14);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [2]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 9
#define DEBUGGING_LABEL_37_2 8
#define OBJECT_37_0 7
#define EXECUTE_CACHE_37_5 5
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto fixnum_2_args_commutativeP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixnum_2_args_commutativeP_3)
DEFLABEL (fixnum_2_args_commutativeP_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_37_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 12
#define DEBUGGING_LABEL_38_2 11
#define EXECUTE_CACHE_38_6 7
#define FREE_REFERENCE_38_0 10
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto fixnum_2_args_operator_register_constant_0;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixnum_2_args_operator_register_constant_4)
DEFLABEL (fixnum_2_args_operator_register_constant_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define ENVIRONMENT_LABEL_39_3 12
#define DEBUGGING_LABEL_39_2 11
#define EXECUTE_CACHE_39_6 7
#define FREE_REFERENCE_39_0 10
#define FREE_REFERENCES_LABEL_39_0 6
#define NUMBER_OF_LINKER_SECTIONS_39_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto fixnum_2_args_operator_constant_register_0;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fixnum_2_args_operator_constant_register_4)
DEFLABEL (fixnum_2_args_operator_constant_register_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define ENVIRONMENT_LABEL_40_3 12
#define DEBUGGING_LABEL_40_2 11
#define EXECUTE_CACHE_40_7 7
#define EXECUTE_CACHE_40_6 9
#define FREE_REFERENCES_LABEL_40_0 6
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_7 7
#define ENVIRONMENT_LABEL_41_3 17
#define DEBUGGING_LABEL_41_2 16
#define OBJECT_41_0 15
#define EXECUTE_CACHE_41_9 9
#define EXECUTE_CACHE_41_8 11
#define EXECUTE_CACHE_41_6 13
#define FREE_REFERENCES_LABEL_41_0 8
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_41_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_7);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_6 7
#define LABEL_42_7 9
#define LABEL_42_8 11
#define LABEL_42_10 13
#define LABEL_42_11 15
#define ENVIRONMENT_LABEL_42_3 23
#define DEBUGGING_LABEL_42_2 22
#define OBJECT_42_2 21
#define OBJECT_42_1 20
#define OBJECT_42_0 19
#define EXECUTE_CACHE_42_9 17
#define FREE_REFERENCES_LABEL_42_0 16
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_42_4);
      goto power_of_2P_9;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_42_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_42_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_42_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_42_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_42_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (power_of_2P_14)
DEFLABEL (power_of_2P_9)
  INTERRUPT_CHECK (26, LABEL_42_4);
  goto loop_7;

DEFLABEL (loop_15)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_42_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_27;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd31.Lng) > 0)
    goto label_18;

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_26;
  if ((Wrd14.Obj) == (current_block [OBJECT_42_0]))
    goto label_25;

DEFLABEL (label_24)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_42_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_42_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_4)
  (* (--Rsp)) = Rvl;
  goto loop_7;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_42_10);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd10.uLng) == 26)
    goto label_21;

DEFLABEL (label_20)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_21)
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd13.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_20;
  Rvl = (LONG_TO_FIXNUM (Wrd11.Lng));

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_22;

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_42_1]);
  goto label_16;

DEFLABEL (label_26)
  (Wrd25.Obj) = (current_block [OBJECT_42_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

DEFLABEL (label_27)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_7 5
#define LABEL_43_5 7
#define LABEL_43_9 9
#define LABEL_43_10 11
#define LABEL_43_14 13
#define LABEL_43_15 15
#define LABEL_43_16 17
#define LABEL_43_8 19
#define LABEL_43_17 21
#define LABEL_43_18 23
#define LABEL_43_19 25
#define LABEL_43_20 27
#define LABEL_43_32 29
#define LABEL_43_25 31
#define LABEL_43_27 33
#define LABEL_43_33 35
#define LABEL_43_26 37
#define LABEL_43_21 39
#define LABEL_43_22 41
#define LABEL_43_23 43
#define LABEL_43_30 45
#define ENVIRONMENT_LABEL_43_3 83
#define DEBUGGING_LABEL_43_2 82
#define OBJECT_43_12 81
#define OBJECT_43_11 80
#define OBJECT_43_10 79
#define OBJECT_43_9 78
#define OBJECT_43_8 77
#define OBJECT_43_7 76
#define OBJECT_43_6 75
#define OBJECT_43_5 74
#define OBJECT_43_4 73
#define OBJECT_43_3 72
#define OBJECT_43_2 71
#define OBJECT_43_1 70
#define OBJECT_43_0 69
#define EXECUTE_CACHE_43_36 47
#define EXECUTE_CACHE_43_35 49
#define EXECUTE_CACHE_43_34 51
#define EXECUTE_CACHE_43_31 53
#define EXECUTE_CACHE_43_29 55
#define EXECUTE_CACHE_43_28 57
#define EXECUTE_CACHE_43_24 59
#define EXECUTE_CACHE_43_13 61
#define EXECUTE_CACHE_43_12 63
#define EXECUTE_CACHE_43_11 65
#define EXECUTE_CACHE_43_6 67
#define FREE_REFERENCES_LABEL_43_0 46
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd74;
  machine_word Wrd54;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd133;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_43_4);
      goto lambda_25;

    case 1:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_22;

    case 2:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_43_9);
      goto continuation_24;

    case 4:
      current_block = (Rpc - LABEL_43_10);
      goto continuation_23;

    case 5:
      current_block = (Rpc - LABEL_43_14);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_43_15);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_43_16);
      goto continuation_20;

    case 8:
      current_block = (Rpc - LABEL_43_8);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_43_17);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_43_18);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_43_19);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_43_20);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_43_32);
      goto continuation_21;

    case 14:
      current_block = (Rpc - LABEL_43_25);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_43_27);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_43_33);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_43_26);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_43_21);
      goto continuation_12;

    case 19:
      current_block = (Rpc - LABEL_43_22);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_43_23);
      goto continuation_10;

    case 21:
      current_block = (Rpc - LABEL_43_30);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_33)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_59;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_43_1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd7.Obj) = (Rsp [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_43_16);

DEFLABEL (label_34)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_32]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_13]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_43_32);
  (Wrd10.Obj) = (current_block [OBJECT_43_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd125.Obj) = (current_block [OBJECT_43_4]);
  (Wrd128.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd128.Lng))))
    goto label_58;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd125.Obj));
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd25.Obj) == (Wrd27.Obj))
    goto label_51;

DEFLABEL (label_57)
  (Wrd115.Obj) = (current_block [OBJECT_43_6]);
  (Wrd118.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd118.Lng))))
    goto label_56;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd115.Obj));
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_51;

DEFLABEL (label_55)
  (Wrd105.Obj) = (current_block [OBJECT_43_7]);
  (Wrd108.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd108.Lng))))
    goto label_54;
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd105.Obj));
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd33.Obj) == (Wrd35.Obj))
    goto label_51;

DEFLABEL (label_53)
  (Wrd95.Obj) = (current_block [OBJECT_43_8]);
  (Wrd98.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd98.Lng))))
    goto label_52;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd95.Obj));
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd37.Obj) == (Wrd39.Obj))
    goto label_51;

DEFLABEL (label_50)
  (Wrd40.Obj) = (current_block [OBJECT_43_9]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd50.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd50.Lng)))
    goto label_36;
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_5]), 2);

DEFLABEL (label_36)
  (Wrd44.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd44.Obj) == (Wrd46.Obj))
    goto label_38;
  (Wrd42.Obj) = (current_block [OBJECT_43_11]);
  goto label_37;

DEFLABEL (label_38)
  (Wrd42.Obj) = (current_block [OBJECT_43_10]);

DEFLABEL (label_37)
DEFLABEL (label_49)
  Rsp = (& (Rsp [3]));
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;

DEFLABEL (label_47)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_30]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd93.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd93.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_31]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_43_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_36]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_43_15);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_46)
  (Wrd54.Obj) = (Rsp [0]);
  if ((Wrd54.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd56.Obj) = (Rsp [4]);
  if ((Wrd56.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;

DEFLABEL (label_39)
  (Wrd76.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd77.Obj);
  (Wrd78.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd78.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_29]));

DEFLABEL (label_40)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_25]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_26]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_27]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd72.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (current_block [OBJECT_43_12]);
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_28]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_43_27);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [6]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_44;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if (! ((Wrd16.Lng) < 0))
    goto label_42;

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_34]));

DEFLABEL (label_42)
  (Wrd14.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_43)
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_13]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_43_25);
  (Wrd10.Obj) = (current_block [OBJECT_43_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_33]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_41;

DEFLABEL (label_45)
  (Wrd74.Obj) = (Rsp [4]);
  if (! ((Wrd74.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_39;
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_21]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_22]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_23]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd89.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_43_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_35]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_43_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_13]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_43_21);
  (Wrd10.Obj) = (current_block [OBJECT_43_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_48)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_46;

DEFLABEL (label_51)
  Rsp = (& (Rsp [2]));
  goto label_47;

DEFLABEL (label_52)
  (Wrd100.Obj) = (Rsp [0]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_20]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_5]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  goto label_51;

DEFLABEL (label_54)
  (Wrd110.Obj) = (Rsp [0]);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_19]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_5]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_51;

DEFLABEL (label_56)
  (Wrd120.Obj) = (Rsp [0]);
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_18]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_5]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_51;

DEFLABEL (label_58)
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_17]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_5]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_51;

DEFLABEL (label_59)
  (Wrd7.Obj) = (Rsp [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_43_7);

DEFLABEL (label_60)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_43_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_11]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_43_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_13]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_43_9);
  (Wrd10.Obj) = (current_block [OBJECT_43_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_43_26);
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_43_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_47;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_7 7
#define LABEL_44_8 9
#define LABEL_44_9 11
#define ENVIRONMENT_LABEL_44_3 25
#define DEBUGGING_LABEL_44_2 24
#define OBJECT_44_0 23
#define EXECUTE_CACHE_44_13 13
#define EXECUTE_CACHE_44_12 15
#define EXECUTE_CACHE_44_11 17
#define EXECUTE_CACHE_44_10 19
#define EXECUTE_CACHE_44_6 21
#define FREE_REFERENCES_LABEL_44_0 12
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_44_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_44_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_44_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_44_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_44_7);
  (Wrd10.Obj) = (current_block [OBJECT_44_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_9 7
#define LABEL_45_7 9
#define LABEL_45_11 11
#define LABEL_45_14 13
#define LABEL_45_15 15
#define LABEL_45_16 17
#define LABEL_45_10 19
#define LABEL_45_17 21
#define LABEL_45_18 23
#define LABEL_45_19 25
#define LABEL_45_20 27
#define LABEL_45_30 29
#define LABEL_45_23 31
#define LABEL_45_25 33
#define LABEL_45_34 35
#define LABEL_45_24 37
#define LABEL_45_26 39
#define LABEL_45_21 41
#define LABEL_45_28 43
#define LABEL_45_31 45
#define LABEL_45_32 47
#define LABEL_45_35 49
#define LABEL_45_36 51
#define LABEL_45_37 53
#define LABEL_45_45 55
#define LABEL_45_38 57
#define LABEL_45_39 59
#define LABEL_45_40 61
#define LABEL_45_43 63
#define ENVIRONMENT_LABEL_45_3 107
#define DEBUGGING_LABEL_45_2 106
#define OBJECT_45_14 105
#define OBJECT_45_13 104
#define OBJECT_45_12 103
#define OBJECT_45_11 102
#define OBJECT_45_10 101
#define OBJECT_45_9 100
#define OBJECT_45_8 99
#define OBJECT_45_7 98
#define OBJECT_45_6 97
#define OBJECT_45_5 96
#define OBJECT_45_4 95
#define OBJECT_45_3 94
#define OBJECT_45_2 93
#define OBJECT_45_1 92
#define OBJECT_45_0 91
#define EXECUTE_CACHE_45_47 65
#define EXECUTE_CACHE_45_46 67
#define EXECUTE_CACHE_45_44 69
#define EXECUTE_CACHE_45_42 71
#define EXECUTE_CACHE_45_41 73
#define EXECUTE_CACHE_45_33 75
#define EXECUTE_CACHE_45_29 77
#define EXECUTE_CACHE_45_27 79
#define EXECUTE_CACHE_45_22 81
#define EXECUTE_CACHE_45_13 83
#define EXECUTE_CACHE_45_12 85
#define EXECUTE_CACHE_45_8 87
#define EXECUTE_CACHE_45_6 89
#define FREE_REFERENCES_LABEL_45_0 64
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd55;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd51;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd49;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd119;
  machine_word Wrd22;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_45_4);
      goto lambda_34;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_32;

    case 3:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_45_11);
      goto continuation_33;

    case 5:
      current_block = (Rpc - LABEL_45_14);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_45_15);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_45_16);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_45_10);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_45_17);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_45_18);
      goto label_38;

    case 11:
      current_block = (Rpc - LABEL_45_19);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_45_20);
      goto label_36;

    case 13:
      current_block = (Rpc - LABEL_45_30);
      goto continuation_29;

    case 14:
      current_block = (Rpc - LABEL_45_23);
      goto continuation_26;

    case 15:
      current_block = (Rpc - LABEL_45_25);
      goto continuation_22;

    case 16:
      current_block = (Rpc - LABEL_45_34);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_45_24);
      goto continuation_23;

    case 18:
      current_block = (Rpc - LABEL_45_26);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_45_21);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_45_28);
      goto continuation_10;

    case 21:
      current_block = (Rpc - LABEL_45_31);
      goto continuation_31;

    case 22:
      current_block = (Rpc - LABEL_45_32);
      goto continuation_30;

    case 23:
      current_block = (Rpc - LABEL_45_35);
      goto continuation_20;

    case 24:
      current_block = (Rpc - LABEL_45_36);
      goto continuation_19;

    case 25:
      current_block = (Rpc - LABEL_45_37);
      goto continuation_17;

    case 26:
      current_block = (Rpc - LABEL_45_45);
      goto label_41;

    case 27:
      current_block = (Rpc - LABEL_45_38);
      goto continuation_14;

    case 28:
      current_block = (Rpc - LABEL_45_39);
      goto continuation_13;

    case 29:
      current_block = (Rpc - LABEL_45_40);
      goto continuation_12;

    case 30:
      current_block = (Rpc - LABEL_45_43);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_43)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd7.Obj) = (current_block [OBJECT_45_2]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (label_44)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_45_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_70;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_45_3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_22]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_45_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_33]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_45_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_45_31);
  (Wrd10.Obj) = (current_block [OBJECT_45_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd111.Obj) = (current_block [OBJECT_45_5]);
  (Wrd114.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd114.Lng))))
    goto label_69;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd111.Obj));
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd20.Obj) == (Wrd22.Obj))
    goto label_62;

DEFLABEL (label_68)
  (Wrd101.Obj) = (current_block [OBJECT_45_7]);
  (Wrd104.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd104.Lng))))
    goto label_67;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd101.Obj));
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd24.Obj) == (Wrd26.Obj))
    goto label_62;

DEFLABEL (label_66)
  (Wrd91.Obj) = (current_block [OBJECT_45_8]);
  (Wrd94.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd94.Lng))))
    goto label_65;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd91.Obj));
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd28.Obj) == (Wrd30.Obj))
    goto label_62;

DEFLABEL (label_64)
  (Wrd81.Obj) = (current_block [OBJECT_45_9]);
  (Wrd84.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd84.Lng))))
    goto label_63;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd81.Obj));
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd32.Obj) == (Wrd34.Obj))
    goto label_62;

DEFLABEL (label_61)
  (Wrd35.Obj) = (current_block [OBJECT_45_10]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd45.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd45.Lng)))
    goto label_46;
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_6]), 2);

DEFLABEL (label_46)
  (Wrd39.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd39.Obj) == (Wrd41.Obj))
    goto label_48;
  (Wrd37.Obj) = (current_block [OBJECT_45_12]);
  goto label_47;

DEFLABEL (label_48)
  (Wrd37.Obj) = (current_block [OBJECT_45_11]);

DEFLABEL (label_47)
DEFLABEL (label_60)
  Rsp = (& (Rsp [3]));
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_59;

DEFLABEL (label_58)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_28]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_29]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_45_28);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_42]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_45_16);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_57)
  (Wrd49.Obj) = (Rsp [0]);
  if (! ((Wrd49.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_49;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_21]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_45_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_40]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_41]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_45_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_45_14]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_27]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_45_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_45_38);
  (Wrd10.Obj) = (current_block [OBJECT_45_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd51.Obj) = (Rsp [4]);
  if ((Wrd51.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_14]))));
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_45_14);

DEFLABEL (label_56)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_23]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_24]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_25]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_26]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (current_block [OBJECT_45_13]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_27]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_45_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_36]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_37]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_29]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_45_37);
  (Wrd5.Obj) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_55;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd12.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_55;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_54)
  (Wrd14.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_46]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_45_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_45_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_27]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_45_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_44]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_45_43);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_47]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_45_25);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [6]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_53;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if (! ((Wrd16.Lng) < 0))
    goto label_51;

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_33]));

DEFLABEL (label_51)
  (Wrd14.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_52)
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_45_23);
  (Wrd10.Obj) = (current_block [OBJECT_45_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_50;

DEFLABEL (label_55)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_45]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_59)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_57;

DEFLABEL (label_62)
  Rsp = (& (Rsp [2]));
  goto label_58;

DEFLABEL (label_63)
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_20]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_6]), 2);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_62;

DEFLABEL (label_65)
  (Wrd96.Obj) = (Rsp [0]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_19]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_6]), 2);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  goto label_62;

DEFLABEL (label_67)
  (Wrd106.Obj) = (Rsp [0]);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_18]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_6]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_62;

DEFLABEL (label_69)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_17]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_6]), 2);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_62;

DEFLABEL (label_70)
  (Wrd7.Obj) = (Rsp [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_13]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_45_9);

DEFLABEL (label_71)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_45_11);
  (Wrd10.Obj) = (current_block [OBJECT_45_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_45_24);
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_45_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_58;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_7 5
#define LABEL_46_5 7
#define LABEL_46_8 9
#define LABEL_46_13 11
#define LABEL_46_14 13
#define LABEL_46_11 15
#define LABEL_46_15 17
#define LABEL_46_16 19
#define LABEL_46_17 21
#define LABEL_46_18 23
#define LABEL_46_31 25
#define LABEL_46_23 27
#define LABEL_46_24 29
#define LABEL_46_36 31
#define LABEL_46_25 33
#define LABEL_46_26 35
#define LABEL_46_27 37
#define LABEL_46_28 39
#define LABEL_46_19 41
#define LABEL_46_20 43
#define LABEL_46_21 45
#define LABEL_46_33 47
#define LABEL_46_34 49
#define LABEL_46_35 51
#define LABEL_46_37 53
#define LABEL_46_44 55
#define ENVIRONMENT_LABEL_46_3 107
#define DEBUGGING_LABEL_46_2 106
#define OBJECT_46_16 105
#define OBJECT_46_15 104
#define OBJECT_46_14 103
#define OBJECT_46_13 102
#define OBJECT_46_12 101
#define OBJECT_46_11 100
#define OBJECT_46_10 99
#define OBJECT_46_9 98
#define OBJECT_46_8 97
#define OBJECT_46_7 96
#define OBJECT_46_6 95
#define OBJECT_46_5 94
#define OBJECT_46_4 93
#define OBJECT_46_3 92
#define OBJECT_46_2 91
#define OBJECT_46_1 90
#define OBJECT_46_0 89
#define EXECUTE_CACHE_46_46 57
#define EXECUTE_CACHE_46_45 59
#define EXECUTE_CACHE_46_43 61
#define EXECUTE_CACHE_46_42 63
#define EXECUTE_CACHE_46_41 65
#define EXECUTE_CACHE_46_40 67
#define EXECUTE_CACHE_46_39 69
#define EXECUTE_CACHE_46_38 71
#define EXECUTE_CACHE_46_32 73
#define EXECUTE_CACHE_46_30 75
#define EXECUTE_CACHE_46_29 77
#define EXECUTE_CACHE_46_22 79
#define EXECUTE_CACHE_46_12 81
#define EXECUTE_CACHE_46_10 83
#define EXECUTE_CACHE_46_9 85
#define EXECUTE_CACHE_46_6 87
#define FREE_REFERENCES_LABEL_46_0 56
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd82;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd49;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd122;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_46_4);
      goto lambda_30;

    case 1:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_46_13);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_46_14);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_46_11);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_46_15);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_46_16);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_46_17);
      goto label_33;

    case 10:
      current_block = (Rpc - LABEL_46_18);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_46_31);
      goto continuation_28;

    case 12:
      current_block = (Rpc - LABEL_46_23);
      goto continuation_25;

    case 13:
      current_block = (Rpc - LABEL_46_24);
      goto continuation_24;

    case 14:
      current_block = (Rpc - LABEL_46_36);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_46_25);
      goto continuation_23;

    case 16:
      current_block = (Rpc - LABEL_46_26);
      goto continuation_22;

    case 17:
      current_block = (Rpc - LABEL_46_27);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_46_28);
      goto continuation_20;

    case 19:
      current_block = (Rpc - LABEL_46_19);
      goto continuation_13;

    case 20:
      current_block = (Rpc - LABEL_46_20);
      goto continuation_12;

    case 21:
      current_block = (Rpc - LABEL_46_21);
      goto continuation_11;

    case 22:
      current_block = (Rpc - LABEL_46_33);
      goto continuation_17;

    case 23:
      current_block = (Rpc - LABEL_46_34);
      goto continuation_16;

    case 24:
      current_block = (Rpc - LABEL_46_35);
      goto continuation_15;

    case 25:
      current_block = (Rpc - LABEL_46_37);
      goto continuation_19;

    case 26:
      current_block = (Rpc - LABEL_46_44);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_38)
DEFLABEL (lambda_30)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_7);

DEFLABEL (label_60)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_46_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd7.Obj) = (current_block [OBJECT_46_2]);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_12]));

DEFLABEL (label_39)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_46_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_31]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_32]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_46_31);
  (Wrd10.Obj) = (current_block [OBJECT_46_13]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd114.Obj) = (current_block [OBJECT_46_3]);
  (Wrd117.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd117.Lng))))
    goto label_59;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd114.Obj));
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd20.Obj) == (Wrd22.Obj))
    goto label_52;

DEFLABEL (label_58)
  (Wrd104.Obj) = (current_block [OBJECT_46_5]);
  (Wrd107.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd107.Lng))))
    goto label_57;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd104.Obj));
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd24.Obj) == (Wrd26.Obj))
    goto label_52;

DEFLABEL (label_56)
  (Wrd94.Obj) = (current_block [OBJECT_46_6]);
  (Wrd97.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd97.Lng))))
    goto label_55;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd94.Obj));
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd28.Obj) == (Wrd30.Obj))
    goto label_52;

DEFLABEL (label_54)
  (Wrd84.Obj) = (current_block [OBJECT_46_7]);
  (Wrd87.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd87.Lng))))
    goto label_53;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd84.Obj));
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd32.Obj) == (Wrd34.Obj))
    goto label_52;

DEFLABEL (label_51)
  (Wrd35.Obj) = (current_block [OBJECT_46_8]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd45.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd45.Lng)))
    goto label_41;
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_41)
  (Wrd39.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd39.Obj) == (Wrd41.Obj))
    goto label_43;
  (Wrd37.Obj) = (current_block [OBJECT_46_10]);
  goto label_42;

DEFLABEL (label_43)
  (Wrd37.Obj) = (current_block [OBJECT_46_9]);

DEFLABEL (label_42)
DEFLABEL (label_50)
  Rsp = (& (Rsp [3]));
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;

DEFLABEL (label_48)
  (Wrd82.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_30]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_46_14);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_47)
  (Wrd49.Obj) = (Rsp [0]);
  if ((Wrd49.Obj) == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_23]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_24]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_25]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_26]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_27]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_28]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (current_block [OBJECT_46_11]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (current_block [OBJECT_46_12]);
  (* (--Rsp)) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_29]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_46_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_40]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_46_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_39]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_46_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_37]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_46_14]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_38]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_46_37);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_44]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_45]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_46_44);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_46]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_46_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_32]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_46_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_45;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd22.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_45;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_44)
  (Wrd24.Obj) = (current_block [OBJECT_46_12]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_29]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_46_35);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_43]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_46_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_46_12]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_42]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_46_33);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_41]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_46_23);
  (Wrd10.Obj) = (current_block [OBJECT_46_13]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd14.Obj) = (Rsp [6]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_36]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_19]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_20]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_21]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd81.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_46_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_46_16]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_40]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_46_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_32]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_46_19);
  (Wrd10.Obj) = (current_block [OBJECT_46_13]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_47;

DEFLABEL (label_52)
  Rsp = (& (Rsp [2]));
  goto label_48;

DEFLABEL (label_53)
  (Wrd89.Obj) = (Rsp [0]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_18]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_52;

DEFLABEL (label_55)
  (Wrd99.Obj) = (Rsp [0]);
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_17]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_52;

DEFLABEL (label_57)
  (Wrd109.Obj) = (Rsp [0]);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_16]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_52;

DEFLABEL (label_59)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_15]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_52;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_46_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_48;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_8 5
#define LABEL_47_5 7
#define LABEL_47_9 9
#define LABEL_47_10 11
#define LABEL_47_11 13
#define LABEL_47_12 15
#define LABEL_47_16 17
#define LABEL_47_20 19
#define LABEL_47_25 21
#define LABEL_47_13 23
#define LABEL_47_14 25
#define LABEL_47_17 27
#define LABEL_47_18 29
#define LABEL_47_19 31
#define LABEL_47_21 33
#define LABEL_47_23 35
#define LABEL_47_24 37
#define ENVIRONMENT_LABEL_47_3 66
#define DEBUGGING_LABEL_47_2 65
#define OBJECT_47_15 64
#define OBJECT_47_14 63
#define OBJECT_47_13 62
#define OBJECT_47_12 61
#define OBJECT_47_11 60
#define OBJECT_47_10 59
#define OBJECT_47_9 58
#define OBJECT_47_8 57
#define OBJECT_47_7 56
#define OBJECT_47_6 55
#define OBJECT_47_5 54
#define OBJECT_47_4 53
#define OBJECT_47_3 52
#define OBJECT_47_2 51
#define OBJECT_47_1 50
#define OBJECT_47_0 49
#define EXECUTE_CACHE_47_26 39
#define EXECUTE_CACHE_47_22 41
#define EXECUTE_CACHE_47_15 43
#define EXECUTE_CACHE_47_7 45
#define EXECUTE_CACHE_47_6 47
#define FREE_REFERENCES_LABEL_47_0 38
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd81;
  machine_word Wrd76;
  machine_word Wrd80;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd97;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd32;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd137;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_47_4);
      goto lambda_18;

    case 1:
      current_block = (Rpc - LABEL_47_8);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_47_9);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_47_10);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_47_11);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_47_12);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_47_16);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_47_20);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_47_25);
      goto continuation_17;

    case 10:
      current_block = (Rpc - LABEL_47_13);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_47_14);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_47_17);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_47_18);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_47_19);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_47_21);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_47_23);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_47_24);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd7.Obj) = (current_block [OBJECT_47_1]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (label_28)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_26]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_47_25);
  (Wrd10.Obj) = (current_block [OBJECT_47_13]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd129.Obj) = (current_block [OBJECT_47_2]);
  (Wrd132.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd132.Lng))))
    goto label_49;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd129.Obj));
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_42;

DEFLABEL (label_48)
  (Wrd119.Obj) = (current_block [OBJECT_47_4]);
  (Wrd122.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd122.Lng))))
    goto label_47;
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd119.Obj));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd21.Obj) == (Wrd23.Obj))
    goto label_42;

DEFLABEL (label_46)
  (Wrd109.Obj) = (current_block [OBJECT_47_5]);
  (Wrd112.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd112.Lng))))
    goto label_45;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd109.Obj));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd25.Obj) == (Wrd27.Obj))
    goto label_42;

DEFLABEL (label_44)
  (Wrd99.Obj) = (current_block [OBJECT_47_6]);
  (Wrd102.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd102.Lng))))
    goto label_43;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd99.Obj));
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_42;

DEFLABEL (label_41)
  (Wrd32.Obj) = (current_block [OBJECT_47_7]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd42.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd42.Lng)))
    goto label_30;
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_3]), 2);

DEFLABEL (label_30)
  (Wrd36.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd36.Obj) == (Wrd38.Obj))
    goto label_32;
  (Wrd34.Obj) = (current_block [OBJECT_47_9]);
  goto label_31;

DEFLABEL (label_32)
  (Wrd34.Obj) = (current_block [OBJECT_47_8]);

DEFLABEL (label_31)
DEFLABEL (label_40)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd34.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_34;

DEFLABEL (label_33)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_13]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_14]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_47_10]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_15]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_47_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_26]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_47_13);
  (Wrd10.Obj) = (current_block [OBJECT_47_13]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_39;
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! ((Wrd97.Lng) > 0))
    goto label_36;

DEFLABEL (label_35)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_23]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_24]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd93.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd94.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd95.Obj) = (current_block [OBJECT_47_12]);
  (* (--Rsp)) = (Wrd95.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_47_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_26]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_47_23);
  (Wrd10.Obj) = (current_block [OBJECT_47_13]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_17]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_18]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_19]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd74.Obj) = (Rsp [5]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 26))
    goto label_38;
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd76.Lng) = (0 - (Wrd80.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd76.Lng)))
    goto label_38;
  (Wrd81.Obj) = (LONG_TO_FIXNUM (Wrd76.Lng));
  (* (--Rsp)) = (Wrd81.Obj);

DEFLABEL (label_37)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_21]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd86.Obj) = (current_block [OBJECT_47_11]);
  (* (--Rsp)) = (Wrd86.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_47_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_47_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_47_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_47_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_47_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_26]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_47_17);
  (Wrd10.Obj) = (current_block [OBJECT_47_13]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd69.Obj) = (current_block [OBJECT_47_0]);
  (Wrd70.Obj) = (Rsp [5]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_20]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_16]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_35;

DEFLABEL (label_42)
  Rsp = (& (Rsp [2]));
  goto label_34;

DEFLABEL (label_43)
  (Wrd104.Obj) = (Rsp [0]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_12]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_3]), 2);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_42;

DEFLABEL (label_45)
  (Wrd114.Obj) = (Rsp [0]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_11]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_3]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_42;

DEFLABEL (label_47)
  (Wrd124.Obj) = (Rsp [0]);
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_3]), 2);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_42;

DEFLABEL (label_49)
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_3]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_42;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_5 3
#define LABEL_48_4 5
#define LABEL_48_6 7
#define LABEL_48_7 9
#define LABEL_48_8 11
#define ENVIRONMENT_LABEL_48_3 23
#define DEBUGGING_LABEL_48_2 22
#define OBJECT_48_0 21
#define EXECUTE_CACHE_48_12 13
#define EXECUTE_CACHE_48_11 15
#define EXECUTE_CACHE_48_10 17
#define EXECUTE_CACHE_48_9 19
#define FREE_REFERENCES_LABEL_48_0 12
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_48_4);
      goto lambda_4;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);

DEFLABEL (label_8)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_48_6);
  (Wrd10.Obj) = (current_block [OBJECT_48_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_5 3
#define LABEL_49_4 5
#define LABEL_49_6 7
#define LABEL_49_7 9
#define LABEL_49_8 11
#define ENVIRONMENT_LABEL_49_3 23
#define DEBUGGING_LABEL_49_2 22
#define OBJECT_49_0 21
#define EXECUTE_CACHE_49_12 13
#define EXECUTE_CACHE_49_11 15
#define EXECUTE_CACHE_49_10 17
#define EXECUTE_CACHE_49_9 19
#define FREE_REFERENCES_LABEL_49_0 12
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_49_4);
      goto lambda_4;

    case 2:
      current_block = (Rpc - LABEL_49_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_49_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);

DEFLABEL (label_8)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_49_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_49_6);
  (Wrd10.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_5 3
#define LABEL_50_4 5
#define LABEL_50_6 7
#define LABEL_50_7 9
#define LABEL_50_8 11
#define ENVIRONMENT_LABEL_50_3 23
#define DEBUGGING_LABEL_50_2 22
#define OBJECT_50_0 21
#define EXECUTE_CACHE_50_12 13
#define EXECUTE_CACHE_50_11 15
#define EXECUTE_CACHE_50_10 17
#define EXECUTE_CACHE_50_9 19
#define FREE_REFERENCES_LABEL_50_0 12
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_50_4);
      goto lambda_4;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_50_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);

DEFLABEL (label_8)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_50_6);
  (Wrd10.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_5 3
#define LABEL_51_4 5
#define LABEL_51_6 7
#define LABEL_51_7 9
#define LABEL_51_8 11
#define ENVIRONMENT_LABEL_51_3 23
#define DEBUGGING_LABEL_51_2 22
#define OBJECT_51_0 21
#define EXECUTE_CACHE_51_12 13
#define EXECUTE_CACHE_51_11 15
#define EXECUTE_CACHE_51_10 17
#define EXECUTE_CACHE_51_9 19
#define FREE_REFERENCES_LABEL_51_0 12
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_51_4);
      goto lambda_4;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_51_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);

DEFLABEL (label_8)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_51_6);
  (Wrd10.Obj) = (current_block [OBJECT_51_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_5 3
#define LABEL_52_4 5
#define LABEL_52_6 7
#define LABEL_52_7 9
#define LABEL_52_8 11
#define ENVIRONMENT_LABEL_52_3 23
#define DEBUGGING_LABEL_52_2 22
#define OBJECT_52_0 21
#define EXECUTE_CACHE_52_12 13
#define EXECUTE_CACHE_52_11 15
#define EXECUTE_CACHE_52_10 17
#define EXECUTE_CACHE_52_9 19
#define FREE_REFERENCES_LABEL_52_0 12
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_52_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_52_4);
      goto lambda_4;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_52_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_5);

DEFLABEL (label_8)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_52_6);
  (Wrd10.Obj) = (current_block [OBJECT_52_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define ENVIRONMENT_LABEL_53_3 9
#define DEBUGGING_LABEL_53_2 8
#define OBJECT_53_1 7
#define OBJECT_53_0 6
#define FREE_REFERENCES_LABEL_53_0 6
#define NUMBER_OF_LINKER_SECTIONS_53_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_53_4);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_53_0])))
    goto label_13;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  if (! ((Wrd13.Obj) == (current_block [OBJECT_53_1])))
    goto label_13;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  goto label_12;

DEFLABEL (lambda_11)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_53_5);
  Rvl = (current_block [OBJECT_53_1]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define TAG_54_6 1
#define LABEL_54_9 7
#define LABEL_54_7 9
#define LABEL_54_10 11
#define LABEL_54_11 13
#define LABEL_54_12 15
#define ENVIRONMENT_LABEL_54_3 37
#define DEBUGGING_LABEL_54_2 36
#define OBJECT_54_8 35
#define OBJECT_54_7 34
#define OBJECT_54_6 33
#define OBJECT_54_5 32
#define OBJECT_54_4 31
#define OBJECT_54_3 30
#define OBJECT_54_2 29
#define OBJECT_54_1 28
#define OBJECT_54_0 27
#define EXECUTE_CACHE_54_14 17
#define EXECUTE_CACHE_54_13 19
#define EXECUTE_CACHE_54_8 21
#define FREE_REFERENCE_54_2 24
#define FREE_REFERENCE_54_1 25
#define FREE_REFERENCE_54_0 26
#define FREE_REFERENCES_LABEL_54_0 16
#define NUMBER_OF_LINKER_SECTIONS_54_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto lambda_33;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto lambda_40;

    case 2:
      current_block = (Rpc - LABEL_54_9);
      goto continuation_19;

    case 3:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_24;

    case 4:
      current_block = (Rpc - LABEL_54_10);
      goto label_37;

    case 5:
      current_block = (Rpc - LABEL_54_11);
      goto label_36;

    case 6:
      current_block = (Rpc - LABEL_54_12);
      goto label_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_39)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_54_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_54_0])))
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
  if (! ((Wrd37.Obj) == (current_block [OBJECT_54_1])))
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
  (Wrd52.Obj) = (current_block [OBJECT_54_2]);
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
  (* (Rhp++)) = (dispatch_base + TAG_54_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_5])));
  Rhp += 2;
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd63.pObj)));
  Wrd66 = Wrd63;
  ((Wrd66.pObj) [2]) = (Wrd22.Obj);
  ((Wrd66.pObj) [3]) = (Wrd48.Obj);
  Rvl = (Wrd62.Obj);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_54_5);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_54_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  if ((Wrd10.Obj) == (current_block [OBJECT_54_4]))
    goto label_55;
  if ((Wrd10.Obj) == (current_block [OBJECT_54_5]))
    goto label_52;
  if ((Wrd10.Obj) == (current_block [OBJECT_54_6]))
    goto label_48;
  (Wrd17.Obj) = (current_block [OBJECT_54_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_14]));

DEFLABEL (label_48)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_51;
  Wrd23 = Wrd27;

DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_49)
  (Wrd29.Obj) = (current_block [OBJECT_54_7]);
  (Rsp [2]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_13]));

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_12])), (Wrd24.pObj));

DEFLABEL (label_35)
  (Wrd23.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_1]));
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
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_11])), (Wrd33.pObj));

DEFLABEL (label_36)
  (Wrd32.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
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
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_10])), (Wrd41.pObj));

DEFLABEL (label_37)
  (Wrd40.Obj) = Rvl;
  goto label_56;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_54_9);
  (* (--Rsp)) = Rvl;
  goto label_49;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define TAG_55_6 1
#define LABEL_55_7 7
#define LABEL_55_9 9
#define ENVIRONMENT_LABEL_55_3 20
#define DEBUGGING_LABEL_55_2 19
#define OBJECT_55_3 18
#define OBJECT_55_2 17
#define OBJECT_55_1 16
#define OBJECT_55_0 15
#define EXECUTE_CACHE_55_10 11
#define EXECUTE_CACHE_55_8 13
#define FREE_REFERENCES_LABEL_55_0 10
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_55_4);
      goto lambda_44;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto lambda_48;

    case 2:
      current_block = (Rpc - LABEL_55_7);
      goto continuation_30;

    case 3:
      current_block = (Rpc - LABEL_55_9);
      goto continuation_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_47)
DEFLABEL (lambda_44)
  INTERRUPT_CHECK (26, LABEL_55_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_55_0])))
    goto label_49;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_49;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_51;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_53;

DEFLABEL (label_52)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  (Wrd40.Obj) = (current_block [OBJECT_55_1]);
  if (! ((Wrd37.Obj) == (Wrd40.Obj)))
    goto label_52;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_52;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_55_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_54;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd57.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd59.uLng) == 1)
    goto label_55;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd66.uLng) == 1)
    goto label_57;

DEFLABEL (label_56)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd69.Obj) = ((Wrd71.pObj) [0]);
  if (! ((Wrd69.Obj) == (Wrd40.Obj)))
    goto label_56;
  (Wrd73.Obj) = ((Wrd71.pObj) [1]);
  (Rsp [0]) = (Wrd73.Obj);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_56;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = ((Wrd79.pObj) [1]);
  if ((Wrd81.Obj) == (Wrd52.Obj))
    goto label_59;

DEFLABEL (label_58)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd87.Obj) = ((Wrd63.pObj) [1]);
  if (! ((Wrd87.Obj) == (Wrd52.Obj)))
    goto label_58;
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd96.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55_5])));
  Rhp += 3;
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd96.pObj)));
  Wrd101 = Wrd96;
  ((Wrd101.pObj) [2]) = (Wrd22.Obj);
  ((Wrd101.pObj) [3]) = (Wrd48.Obj);
  ((Wrd101.pObj) [4]) = (Wrd80.Obj);
  Rvl = (Wrd95.Obj);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_55_5);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_8]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_55_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_55_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_8]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_55_9);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define TAG_56_6 1
#define LABEL_56_7 7
#define LABEL_56_9 9
#define ENVIRONMENT_LABEL_56_3 24
#define DEBUGGING_LABEL_56_2 23
#define OBJECT_56_5 22
#define OBJECT_56_4 21
#define OBJECT_56_3 20
#define OBJECT_56_2 19
#define OBJECT_56_1 18
#define OBJECT_56_0 17
#define EXECUTE_CACHE_56_11 11
#define EXECUTE_CACHE_56_10 13
#define EXECUTE_CACHE_56_8 15
#define FREE_REFERENCES_LABEL_56_0 10
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd121;
  machine_word Wrd115;
  machine_word Wrd116;
  machine_word Wrd107;
  machine_word Wrd103;
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
      current_block = (Rpc - LABEL_56_4);
      goto lambda_54;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto lambda_58;

    case 2:
      current_block = (Rpc - LABEL_56_7);
      goto continuation_38;

    case 3:
      current_block = (Rpc - LABEL_56_9);
      goto continuation_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_57)
DEFLABEL (lambda_54)
  INTERRUPT_CHECK (26, LABEL_56_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_56_0])))
    goto label_59;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_59;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_61;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_63;

DEFLABEL (label_62)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  if (! ((Wrd37.Obj) == (current_block [OBJECT_56_1])))
    goto label_62;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_62;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = ((Wrd47.pObj) [1]);
  (Wrd52.Obj) = (current_block [OBJECT_56_2]);
  if ((Wrd49.Obj) == (Wrd52.Obj))
    goto label_64;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd57.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd59.uLng) == 1)
    goto label_65;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd66.uLng) == 1)
    goto label_67;

DEFLABEL (label_66)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd69.Obj) = ((Wrd71.pObj) [0]);
  if (! ((Wrd69.Obj) == (current_block [OBJECT_56_3])))
    goto label_66;
  (Wrd73.Obj) = ((Wrd71.pObj) [1]);
  (Rsp [0]) = (Wrd73.Obj);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_66;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd82.uLng) == 1)
    goto label_69;

DEFLABEL (label_68)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [0]);
  if (! ((Wrd85.Obj) == (current_block [OBJECT_56_4])))
    goto label_68;
  (Wrd89.Obj) = ((Wrd87.pObj) [1]);
  (Rsp [0]) = (Wrd89.Obj);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd93.uLng) == 1))
    goto label_68;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd97.Obj) = ((Wrd95.pObj) [1]);
  if ((Wrd97.Obj) == (Wrd52.Obj))
    goto label_71;

DEFLABEL (label_70)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd103.Obj) = ((Wrd79.pObj) [1]);
  if (! ((Wrd103.Obj) == (Wrd52.Obj)))
    goto label_70;
  (Wrd107.Obj) = ((Wrd63.pObj) [1]);
  if (! ((Wrd107.Obj) == (Wrd52.Obj)))
    goto label_70;
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd116.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_56_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_56_5])));
  Rhp += 3;
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd116.pObj)));
  Wrd121 = Wrd116;
  ((Wrd121.pObj) [2]) = (Wrd22.Obj);
  ((Wrd121.pObj) [3]) = (Wrd48.Obj);
  ((Wrd121.pObj) [4]) = (Wrd96.Obj);
  Rvl = (Wrd115.Obj);
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_56_5);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_8]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_56_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_10]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_56_9);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define TAG_57_6 1
#define LABEL_57_7 7
#define LABEL_57_9 9
#define ENVIRONMENT_LABEL_57_3 24
#define DEBUGGING_LABEL_57_2 23
#define OBJECT_57_5 22
#define OBJECT_57_4 21
#define OBJECT_57_3 20
#define OBJECT_57_2 19
#define OBJECT_57_1 18
#define OBJECT_57_0 17
#define EXECUTE_CACHE_57_11 11
#define EXECUTE_CACHE_57_10 13
#define EXECUTE_CACHE_57_8 15
#define FREE_REFERENCES_LABEL_57_0 10
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd121;
  machine_word Wrd115;
  machine_word Wrd116;
  machine_word Wrd107;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd86;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd50;
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
      current_block = (Rpc - LABEL_57_4);
      goto lambda_54;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto lambda_58;

    case 2:
      current_block = (Rpc - LABEL_57_7);
      goto continuation_38;

    case 3:
      current_block = (Rpc - LABEL_57_9);
      goto continuation_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_57)
DEFLABEL (lambda_54)
  INTERRUPT_CHECK (26, LABEL_57_4);
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
  if (! ((Wrd9.Obj) == (current_block [OBJECT_57_0])))
    goto label_59;
  (Wrd13.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_59;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_61;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_63;

DEFLABEL (label_62)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);
  if (! ((Wrd37.Obj) == (current_block [OBJECT_57_1])))
    goto label_62;
  (Wrd41.Obj) = ((Wrd39.pObj) [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_62;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd50.uLng) == 1)
    goto label_65;

DEFLABEL (label_64)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [0]);
  if (! ((Wrd53.Obj) == (current_block [OBJECT_57_2])))
    goto label_64;
  (Wrd57.Obj) = ((Wrd55.pObj) [1]);
  (Rsp [0]) = (Wrd57.Obj);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_64;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = ((Wrd63.pObj) [1]);
  (Wrd68.Obj) = (current_block [OBJECT_57_3]);
  if ((Wrd65.Obj) == (Wrd68.Obj))
    goto label_67;

DEFLABEL (label_66)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd71.Obj) = ((Wrd47.pObj) [1]);
  if (! ((Wrd71.Obj) == (Wrd68.Obj)))
    goto label_66;
  (Wrd77.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd79.uLng) == 1)
    goto label_68;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if ((Wrd86.uLng) == 1)
    goto label_70;

DEFLABEL (label_69)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd89.Obj) = ((Wrd91.pObj) [0]);
  if (! ((Wrd89.Obj) == (current_block [OBJECT_57_4])))
    goto label_69;
  (Wrd93.Obj) = ((Wrd91.pObj) [1]);
  (Rsp [0]) = (Wrd93.Obj);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_69;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd100.Obj) = ((Wrd99.pObj) [0]);
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd101.Obj) = ((Wrd99.pObj) [1]);
  if ((Wrd101.Obj) == (Wrd68.Obj))
    goto label_72;

DEFLABEL (label_71)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd107.Obj) = ((Wrd83.pObj) [1]);
  if (! ((Wrd107.Obj) == (Wrd68.Obj)))
    goto label_71;
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd116.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_5])));
  Rhp += 3;
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd116.pObj)));
  Wrd121 = Wrd116;
  ((Wrd121.pObj) [2]) = (Wrd22.Obj);
  ((Wrd121.pObj) [3]) = (Wrd64.Obj);
  ((Wrd121.pObj) [4]) = (Wrd100.Obj);
  Rvl = (Wrd115.Obj);
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_57_5);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_8]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_57_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_57_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_57_9);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_7 7
#define LABEL_58_8 9
#define LABEL_58_9 11
#define LABEL_58_11 13
#define LABEL_58_12 15
#define LABEL_58_10 17
#define LABEL_58_15 19
#define LABEL_58_16 21
#define ENVIRONMENT_LABEL_58_3 41
#define DEBUGGING_LABEL_58_2 40
#define OBJECT_58_6 39
#define OBJECT_58_5 38
#define OBJECT_58_4 37
#define OBJECT_58_3 36
#define OBJECT_58_2 35
#define OBJECT_58_1 34
#define OBJECT_58_0 33
#define EXECUTE_CACHE_58_14 23
#define EXECUTE_CACHE_58_13 25
#define EXECUTE_CACHE_58_6 27
#define FREE_REFERENCE_58_2 30
#define FREE_REFERENCE_58_1 31
#define FREE_REFERENCE_58_0 32
#define FREE_REFERENCES_LABEL_58_0 22
#define NUMBER_OF_LINKER_SECTIONS_58_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
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
      goto fix_compare_2_10;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_58_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_58_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_58_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_58_11);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_58_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_58_10);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_58_15);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_58_16);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_compare_2_18)
DEFLABEL (fix_compare_2_10)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_58_0]))
    goto label_32;
  if ((Wrd5.Obj) == (current_block [OBJECT_58_1]))
    goto label_29;
  if ((Wrd5.Obj) == (current_block [OBJECT_58_2]))
    goto label_26;
  if ((Wrd5.Obj) == (current_block [OBJECT_58_3]))
    goto label_23;
  if ((Wrd5.Obj) == (current_block [OBJECT_58_4]))
    goto label_19;
  (Wrd15.Obj) = (current_block [OBJECT_58_6]);
  (Rsp [1]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_14]));

DEFLABEL (label_19)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_2]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_22;
  Wrd19 = Wrd23;

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_12]))));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_20)
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_58_5]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_13]));

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_11])), (Wrd20.pObj));

DEFLABEL (label_12)
  (Wrd19.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_23)
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_1]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_25;
  Wrd31 = Wrd35;

DEFLABEL (label_24)
  (Rsp [0]) = (Wrd31.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_10]))));
  (* (--Rsp)) = (Wrd39.Obj);
  goto label_20;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_9])), (Wrd32.pObj));

DEFLABEL (label_13)
  (Wrd31.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_2]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_28;
  Wrd43 = Wrd47;

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_8])), (Wrd44.pObj));

DEFLABEL (label_14)
  (Wrd43.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_1]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_31;
  Wrd50 = Wrd54;

DEFLABEL (label_30)
  (Rsp [0]) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_7])), (Wrd51.pObj));

DEFLABEL (label_15)
  (Wrd50.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_34;
  Wrd57 = Wrd61;

DEFLABEL (label_33)
  (Rsp [0]) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_5])), (Wrd58.pObj));

DEFLABEL (label_16)
  (Wrd57.Obj) = Rvl;
  goto label_33;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_58_12);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_58_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_58_15);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_58_10);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_58_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_58_16);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_5 3
#define LABEL_59_4 5
#define LABEL_59_6 7
#define LABEL_59_7 9
#define LABEL_59_8 11
#define LABEL_59_9 13
#define ENVIRONMENT_LABEL_59_3 27
#define DEBUGGING_LABEL_59_2 26
#define OBJECT_59_8 25
#define OBJECT_59_7 24
#define OBJECT_59_6 23
#define OBJECT_59_5 22
#define OBJECT_59_4 21
#define OBJECT_59_3 20
#define OBJECT_59_2 19
#define OBJECT_59_1 18
#define OBJECT_59_0 17
#define EXECUTE_CACHE_59_10 15
#define FREE_REFERENCES_LABEL_59_0 14
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rulfix_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd79;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd74;
  machine_word Wrd71;
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
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_59_4);
      goto longify_6;

    case 2:
      current_block = (Rpc - LABEL_59_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_59_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_59_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_59_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (longify_13)
DEFLABEL (longify_6)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd71.Obj) = (current_block [OBJECT_59_0]);
  (Wrd74.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd74.Lng))))
    goto label_28;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd71.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_21;

DEFLABEL (label_27)
  (Wrd61.Obj) = (current_block [OBJECT_59_2]);
  (Wrd64.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd64.Lng))))
    goto label_26;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd61.Obj));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_21;

DEFLABEL (label_25)
  (Wrd51.Obj) = (current_block [OBJECT_59_3]);
  (Wrd54.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd54.Lng))))
    goto label_24;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_21;

DEFLABEL (label_23)
  (Wrd41.Obj) = (current_block [OBJECT_59_4]);
  (Wrd44.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd44.Lng))))
    goto label_22;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_21;

DEFLABEL (label_20)
  (Wrd25.Obj) = (current_block [OBJECT_59_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd35.Lng)))
    goto label_14;
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_14)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_16;
  (Wrd27.Obj) = (current_block [OBJECT_59_7]);
  goto label_15;

DEFLABEL (label_16)
  (Wrd27.Obj) = (current_block [OBJECT_59_6]);

DEFLABEL (label_15)
DEFLABEL (label_19)
  Rsp = (& (Rsp [3]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_17)
  (Wrd39.Obj) = (current_block [OBJECT_59_8]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_10]));

DEFLABEL (label_18)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  goto label_17;

DEFLABEL (label_22)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_9]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_21;

DEFLABEL (label_24)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_21;

DEFLABEL (label_26)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_7]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_21;

DEFLABEL (label_28)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_6]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_21;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_8 7
#define LABEL_9 9
#define LABEL_10 11
#define LABEL_11 13
#define LABEL_12 15
#define LABEL_13 17
#define LABEL_14 19
#define LABEL_15 21
#define LABEL_17 23
#define LABEL_16 25
#define LABEL_20 27
#define LABEL_19 29
#define LABEL_21 31
#define LABEL_23 33
#define LABEL_22 35
#define LABEL_24 37
#define LABEL_25 39
#define LABEL_27 41
#define LABEL_26 43
#define LABEL_29 45
#define LABEL_28 47
#define LABEL_31 49
#define LABEL_30 51
#define LABEL_33 53
#define LABEL_32 55
#define LABEL_35 57
#define LABEL_34 59
#define LABEL_37 61
#define LABEL_36 63
#define LABEL_39 65
#define LABEL_38 67
#define LABEL_41 69
#define LABEL_40 71
#define LABEL_43 73
#define LABEL_42 75
#define LABEL_44 77
#define LABEL_46 79
#define LABEL_45 81
#define LABEL_47 83
#define LABEL_48 85
#define LABEL_49 87
#define LABEL_50 89
#define LABEL_51 91
#define LABEL_53 93
#define LABEL_52 95
#define LABEL_55 97
#define LABEL_54 99
#define LABEL_56 101
#define LABEL_58 103
#define LABEL_57 105
#define LABEL_60 107
#define LABEL_59 109
#define LABEL_62 111
#define LABEL_61 113
#define LABEL_64 115
#define LABEL_63 117
#define LABEL_66 119
#define LABEL_65 121
#define LABEL_68 123
#define LABEL_67 125
#define LABEL_70 127
#define LABEL_69 129
#define LABEL_72 131
#define LABEL_71 133
#define LABEL_74 135
#define LABEL_73 137
#define LABEL_76 139
#define LABEL_75 141
#define LABEL_77 143
#define LABEL_78 145
#define LABEL_79 147
#define LABEL_80 149
#define LABEL_81 151
#define LABEL_82 153
#define LABEL_83 155
#define LABEL_84 157
#define ENVIRONMENT_LABEL_3 269
#define DEBUGGING_LABEL_2 268
#define PURIFICATION_ROOT 267
#define OBJECT_95 266
#define OBJECT_94 265
#define OBJECT_93 264
#define OBJECT_92 263
#define OBJECT_91 262
#define OBJECT_90 261
#define OBJECT_89 260
#define OBJECT_88 259
#define OBJECT_87 258
#define OBJECT_86 257
#define OBJECT_85 256
#define OBJECT_84 255
#define OBJECT_83 254
#define OBJECT_82 253
#define OBJECT_81 252
#define OBJECT_80 251
#define OBJECT_79 250
#define OBJECT_78 249
#define OBJECT_77 248
#define OBJECT_76 247
#define OBJECT_75 246
#define OBJECT_74 245
#define OBJECT_73 244
#define OBJECT_72 243
#define OBJECT_71 242
#define OBJECT_70 241
#define OBJECT_69 240
#define OBJECT_68 239
#define OBJECT_67 238
#define OBJECT_66 237
#define OBJECT_65 236
#define OBJECT_64 235
#define OBJECT_63 234
#define OBJECT_62 233
#define OBJECT_61 232
#define OBJECT_60 231
#define OBJECT_59 230
#define OBJECT_58 229
#define OBJECT_57 228
#define OBJECT_56 227
#define OBJECT_55 226
#define OBJECT_54 225
#define OBJECT_53 224
#define OBJECT_52 223
#define OBJECT_51 222
#define OBJECT_50 221
#define OBJECT_49 220
#define OBJECT_48 219
#define OBJECT_47 218
#define OBJECT_46 217
#define OBJECT_45 216
#define OBJECT_44 215
#define OBJECT_43 214
#define OBJECT_42 213
#define OBJECT_41 212
#define OBJECT_40 211
#define OBJECT_39 210
#define OBJECT_38 209
#define OBJECT_37 208
#define OBJECT_36 207
#define OBJECT_35 206
#define OBJECT_34 205
#define OBJECT_33 204
#define OBJECT_32 203
#define OBJECT_31 202
#define OBJECT_30 201
#define OBJECT_29 200
#define OBJECT_28 199
#define OBJECT_27 198
#define OBJECT_26 197
#define OBJECT_25 196
#define OBJECT_24 195
#define OBJECT_23 194
#define OBJECT_22 193
#define OBJECT_21 192
#define OBJECT_20 191
#define OBJECT_19 190
#define OBJECT_18 189
#define OBJECT_17 188
#define OBJECT_16 187
#define OBJECT_15 186
#define OBJECT_14 185
#define OBJECT_13 184
#define OBJECT_12 183
#define OBJECT_11 182
#define OBJECT_10 181
#define OBJECT_9 180
#define OBJECT_8 179
#define OBJECT_7 178
#define OBJECT_6 177
#define OBJECT_5 176
#define OBJECT_4 175
#define OBJECT_3 174
#define OBJECT_2 173
#define OBJECT_1 172
#define OBJECT_0 171
#define EXECUTE_CACHE_18 159
#define EXECUTE_CACHE_7 161
#define FREE_REFERENCE_3 164
#define FREE_REFERENCE_2 165
#define FREE_REFERENCE_1 166
#define FREE_REFERENCE_0 167
#define GLOBAL_EXECUTE_CACHE_5 169
#define FREE_REFERENCES_LABEL_0 158
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rulfix_so_9509f49b0eace75c (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_11);
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
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto label_59;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto label_60;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto label_61;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto label_62;

    case 20:
      current_block = (Rpc - LABEL_26);
      goto continuation_20;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto label_63;

    case 22:
      current_block = (Rpc - LABEL_28);
      goto continuation_21;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto label_64;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto continuation_22;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto label_65;

    case 26:
      current_block = (Rpc - LABEL_32);
      goto continuation_23;

    case 27:
      current_block = (Rpc - LABEL_35);
      goto label_66;

    case 28:
      current_block = (Rpc - LABEL_34);
      goto continuation_24;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto label_67;

    case 30:
      current_block = (Rpc - LABEL_36);
      goto continuation_25;

    case 31:
      current_block = (Rpc - LABEL_39);
      goto label_68;

    case 32:
      current_block = (Rpc - LABEL_38);
      goto continuation_26;

    case 33:
      current_block = (Rpc - LABEL_41);
      goto label_69;

    case 34:
      current_block = (Rpc - LABEL_40);
      goto continuation_27;

    case 35:
      current_block = (Rpc - LABEL_43);
      goto label_70;

    case 36:
      current_block = (Rpc - LABEL_42);
      goto continuation_28;

    case 37:
      current_block = (Rpc - LABEL_44);
      goto continuation_29;

    case 38:
      current_block = (Rpc - LABEL_46);
      goto label_71;

    case 39:
      current_block = (Rpc - LABEL_45);
      goto continuation_30;

    case 40:
      current_block = (Rpc - LABEL_47);
      goto continuation_31;

    case 41:
      current_block = (Rpc - LABEL_48);
      goto continuation_32;

    case 42:
      current_block = (Rpc - LABEL_49);
      goto continuation_33;

    case 43:
      current_block = (Rpc - LABEL_50);
      goto continuation_34;

    case 44:
      current_block = (Rpc - LABEL_51);
      goto continuation_38;

    case 45:
      current_block = (Rpc - LABEL_53);
      goto label_72;

    case 46:
      current_block = (Rpc - LABEL_52);
      goto continuation_39;

    case 47:
      current_block = (Rpc - LABEL_55);
      goto label_73;

    case 48:
      current_block = (Rpc - LABEL_54);
      goto continuation_40;

    case 49:
      current_block = (Rpc - LABEL_56);
      goto continuation_41;

    case 50:
      current_block = (Rpc - LABEL_58);
      goto label_74;

    case 51:
      current_block = (Rpc - LABEL_57);
      goto continuation_42;

    case 52:
      current_block = (Rpc - LABEL_60);
      goto label_75;

    case 53:
      current_block = (Rpc - LABEL_59);
      goto continuation_43;

    case 54:
      current_block = (Rpc - LABEL_62);
      goto label_76;

    case 55:
      current_block = (Rpc - LABEL_61);
      goto continuation_44;

    case 56:
      current_block = (Rpc - LABEL_64);
      goto label_77;

    case 57:
      current_block = (Rpc - LABEL_63);
      goto continuation_45;

    case 58:
      current_block = (Rpc - LABEL_66);
      goto label_78;

    case 59:
      current_block = (Rpc - LABEL_65);
      goto continuation_46;

    case 60:
      current_block = (Rpc - LABEL_68);
      goto label_79;

    case 61:
      current_block = (Rpc - LABEL_67);
      goto continuation_47;

    case 62:
      current_block = (Rpc - LABEL_70);
      goto label_80;

    case 63:
      current_block = (Rpc - LABEL_69);
      goto continuation_48;

    case 64:
      current_block = (Rpc - LABEL_72);
      goto label_81;

    case 65:
      current_block = (Rpc - LABEL_71);
      goto continuation_49;

    case 66:
      current_block = (Rpc - LABEL_74);
      goto label_82;

    case 67:
      current_block = (Rpc - LABEL_73);
      goto continuation_50;

    case 68:
      current_block = (Rpc - LABEL_76);
      goto label_83;

    case 69:
      current_block = (Rpc - LABEL_75);
      goto continuation_51;

    case 70:
      current_block = (Rpc - LABEL_77);
      goto continuation_52;

    case 71:
      current_block = (Rpc - LABEL_78);
      goto continuation_53;

    case 72:
      current_block = (Rpc - LABEL_79);
      goto continuation_54;

    case 73:
      current_block = (Rpc - LABEL_80);
      goto continuation_55;

    case 74:
      current_block = (Rpc - LABEL_81);
      goto continuation_56;

    case 75:
      current_block = (Rpc - LABEL_82);
      goto label_86;

    case 76:
      current_block = (Rpc - LABEL_83);
      goto label_87;

    case 77:
      current_block = (Rpc - LABEL_84);
      goto expression_58;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_58)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_83])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_87)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_86)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
	1,
	1,
	1,
	2,
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
	2,
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
	2,
	1,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 59)
      goto label_85;
    blocks = (current_block [OBJECT_95]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_82])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_85)
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
  (Wrd8.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (Wrd12.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd18.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd19.Obj) = (current_block [OBJECT_20]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-3]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_137;
  Wrd9 = Wrd13;

DEFLABEL (label_136)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_135;
  Wrd9 = Wrd13;

DEFLABEL (label_134)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_133;
  Wrd9 = Wrd13;

DEFLABEL (label_132)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_33]);
  (Wrd12.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd18.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd19.Obj) = (current_block [OBJECT_34]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-3]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_131;
  Wrd9 = Wrd13;

DEFLABEL (label_130)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_129;
  Wrd9 = Wrd13;

DEFLABEL (label_128)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_127;
  Wrd9 = Wrd13;

DEFLABEL (label_126)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_125;
  Wrd9 = Wrd13;

DEFLABEL (label_124)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_123;
  Wrd9 = Wrd13;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_121;
  Wrd9 = Wrd13;

DEFLABEL (label_120)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_119;
  Wrd9 = Wrd13;

DEFLABEL (label_118)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_117;
  Wrd9 = Wrd13;

DEFLABEL (label_116)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_115;
  Wrd9 = Wrd13;

DEFLABEL (label_114)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_113;
  Wrd9 = Wrd13;

DEFLABEL (label_112)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_66]);
  (Wrd12.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_67]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd23.Obj) = (MAKE_OBJECT (0, 2));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd19.pObj) = (& (Rhp [-3]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_111;
  Wrd9 = Wrd13;

DEFLABEL (label_110)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_109;
  Wrd9 = Wrd13;

DEFLABEL (label_108)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_107;
  Wrd9 = Wrd13;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_105;
  Wrd9 = Wrd13;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_103;
  Wrd9 = Wrd13;

DEFLABEL (label_102)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_101;
  Wrd9 = Wrd13;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_99;
  Wrd9 = Wrd13;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_97;
  Wrd9 = Wrd13;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_95;
  Wrd9 = Wrd13;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_93;
  Wrd9 = Wrd13;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_91;
  Wrd9 = Wrd13;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_89;
  Wrd9 = Wrd13;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd5.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_94]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76])), (Wrd10.pObj));

DEFLABEL (label_83)
  (Wrd9.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74])), (Wrd10.pObj));

DEFLABEL (label_82)
  (Wrd9.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72])), (Wrd10.pObj));

DEFLABEL (label_81)
  (Wrd9.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70])), (Wrd10.pObj));

DEFLABEL (label_80)
  (Wrd9.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68])), (Wrd10.pObj));

DEFLABEL (label_79)
  (Wrd9.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66])), (Wrd10.pObj));

DEFLABEL (label_78)
  (Wrd9.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64])), (Wrd10.pObj));

DEFLABEL (label_77)
  (Wrd9.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62])), (Wrd10.pObj));

DEFLABEL (label_76)
  (Wrd9.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60])), (Wrd10.pObj));

DEFLABEL (label_75)
  (Wrd9.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58])), (Wrd10.pObj));

DEFLABEL (label_74)
  (Wrd9.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55])), (Wrd10.pObj));

DEFLABEL (label_73)
  (Wrd9.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53])), (Wrd10.pObj));

DEFLABEL (label_72)
  (Wrd9.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd10.pObj));

DEFLABEL (label_71)
  (Wrd9.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43])), (Wrd10.pObj));

DEFLABEL (label_70)
  (Wrd9.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd10.pObj));

DEFLABEL (label_69)
  (Wrd9.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39])), (Wrd10.pObj));

DEFLABEL (label_68)
  (Wrd9.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd10.pObj));

DEFLABEL (label_67)
  (Wrd9.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd10.pObj));

DEFLABEL (label_66)
  (Wrd9.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd10.pObj));

DEFLABEL (label_65)
  (Wrd9.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd10.pObj));

DEFLABEL (label_64)
  (Wrd9.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd10.pObj));

DEFLABEL (label_63)
  (Wrd9.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd10.pObj));

DEFLABEL (label_62)
  (Wrd9.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd10.pObj));

DEFLABEL (label_61)
  (Wrd9.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd10.pObj));

DEFLABEL (label_60)
  (Wrd9.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd10.pObj));

DEFLABEL (label_59)
  (Wrd9.Obj) = Rvl;
  goto label_136;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rulfix_so_9509f49b0eace75c [59] =
  {
    { "rulfix_so_code_1", 3, rulfix_so_code_1 },
    { "rulfix_so_code_2", 3, rulfix_so_code_2 },
    { "rulfix_so_code_3", 3, rulfix_so_code_3 },
    { "rulfix_so_code_4", 3, rulfix_so_code_4 },
    { "rulfix_so_code_5", 3, rulfix_so_code_5 },
    { "rulfix_so_code_6", 5, rulfix_so_code_6 },
    { "rulfix_so_code_7", 3, rulfix_so_code_7 },
    { "rulfix_so_code_8", 3, rulfix_so_code_8 },
    { "rulfix_so_code_9", 3, rulfix_so_code_9 },
    { "rulfix_so_code_10", 3, rulfix_so_code_10 },
    { "rulfix_so_code_11", 7, rulfix_so_code_11 },
    { "rulfix_so_code_12", 3, rulfix_so_code_12 },
    { "rulfix_so_code_13", 3, rulfix_so_code_13 },
    { "rulfix_so_code_14", 6, rulfix_so_code_14 },
    { "rulfix_so_code_15", 4, rulfix_so_code_15 },
    { "rulfix_so_code_16", 2, rulfix_so_code_16 },
    { "rulfix_so_code_17", 1, rulfix_so_code_17 },
    { "rulfix_so_code_18", 1, rulfix_so_code_18 },
    { "rulfix_so_code_19", 14, rulfix_so_code_19 },
    { "rulfix_so_code_20", 4, rulfix_so_code_20 },
    { "rulfix_so_code_21", 4, rulfix_so_code_21 },
    { "rulfix_so_code_22", 2, rulfix_so_code_22 },
    { "rulfix_so_code_23", 4, rulfix_so_code_23 },
    { "rulfix_so_code_24", 4, rulfix_so_code_24 },
    { "rulfix_so_code_25", 4, rulfix_so_code_25 },
    { "rulfix_so_code_26", 4, rulfix_so_code_26 },
    { "rulfix_so_code_27", 4, rulfix_so_code_27 },
    { "rulfix_so_code_28", 4, rulfix_so_code_28 },
    { "rulfix_so_code_29", 4, rulfix_so_code_29 },
    { "rulfix_so_code_30", 4, rulfix_so_code_30 },
    { "rulfix_so_code_31", 7, rulfix_so_code_31 },
    { "rulfix_so_code_32", 4, rulfix_so_code_32 },
    { "rulfix_so_code_33", 3, rulfix_so_code_33 },
    { "rulfix_so_code_34", 3, rulfix_so_code_34 },
    { "rulfix_so_code_35", 4, rulfix_so_code_35 },
    { "rulfix_so_code_36", 7, rulfix_so_code_36 },
    { "rulfix_so_code_37", 1, rulfix_so_code_37 },
    { "rulfix_so_code_38", 2, rulfix_so_code_38 },
    { "rulfix_so_code_39", 2, rulfix_so_code_39 },
    { "rulfix_so_code_40", 2, rulfix_so_code_40 },
    { "rulfix_so_code_41", 3, rulfix_so_code_41 },
    { "rulfix_so_code_42", 7, rulfix_so_code_42 },
    { "rulfix_so_code_43", 22, rulfix_so_code_43 },
    { "rulfix_so_code_44", 5, rulfix_so_code_44 },
    { "rulfix_so_code_45", 31, rulfix_so_code_45 },
    { "rulfix_so_code_46", 27, rulfix_so_code_46 },
    { "rulfix_so_code_47", 18, rulfix_so_code_47 },
    { "rulfix_so_code_48", 5, rulfix_so_code_48 },
    { "rulfix_so_code_49", 5, rulfix_so_code_49 },
    { "rulfix_so_code_50", 5, rulfix_so_code_50 },
    { "rulfix_so_code_51", 5, rulfix_so_code_51 },
    { "rulfix_so_code_52", 5, rulfix_so_code_52 },
    { "rulfix_so_code_53", 2, rulfix_so_code_53 },
    { "rulfix_so_code_54", 7, rulfix_so_code_54 },
    { "rulfix_so_code_55", 4, rulfix_so_code_55 },
    { "rulfix_so_code_56", 4, rulfix_so_code_56 },
    { "rulfix_so_code_57", 4, rulfix_so_code_57 },
    { "rulfix_so_code_58", 10, rulfix_so_code_58 },
    { "rulfix_so_code_59", 6, rulfix_so_code_59 }
  };

int
decl_rulfix_so_9509f49b0eace75c (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rulfix_so_9509f49b0eace75c);
  return (0);
}

DECLARE_COMPILED_CODE ("rulfix.so", 78, decl_rulfix_so_9509f49b0eace75c, rulfix_so_9509f49b0eace75c)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rulfix_so_data_9509f49b0eace75c [8032] =
  "\x8e\x02\x6c\xe8\x13\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x0c\x28"
  "\x0d\xb9\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb"
  "\x1d\xb0\x82\x88\x08\x0c\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbc\x1d\xb0\x83\x88\x08\x0c\x28\xb1\x28\xb2\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x84\x88\x08\x0c"
  "\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d"
  "\xb0\x85\x88\x0d\xbf\x0d\x1c\x0d\x1c\x08\x0d\x1c\x0d\x1c\x1b\x24"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x86\x88\x1b\x0d\x1c\x1b\x08\x1b\x1b\x28\x0d\x28\x0d\x1c\x28\xb2"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x1b\x0d\x1c\x08\x1b\x1b\x1b\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x1b"
  "\x0d\x1c\x1b\x08\x1b\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb7\x0d\xbf\x08\x1b\x1b"
  "\xb7\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x0d\x1c\x08\x1b\x1b\x1b\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1d\x02"
  "\xc3\x02\x0d\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\x28"
  "\xb1\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x07\x02\xc2\x1c"
  "\x02\x0d\x0d\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x08\x1b\x1b\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x28\x0d\x1c\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x87\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x06\x07\x02\x86\x02\x02\x1b\x02\x08\x80\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x1b\x28\xb2\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\x28\x0d\x28\x0d\x1c\x28\xb2\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x08"
  "\x1b\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x1c\x28\x1b"
  "\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\x28\x0d\x1c\x28\x1b\x28\xb2\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x1c"
  "\x28\x1b\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x1c\x28\x1b\x28\xb2\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0c"
  "\x28\xb1\x28\x1b\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0c\x28\xb1\x28\x1b\x28\xb2\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x0c\x28\x1b\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x28\x1b\x28\xb2"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28\xb2\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x08\x07\x28\x1b\x28\x1b\x28\xb2\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x1b\x28\xb1\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x1b\x08"
  "\x1b\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x08"
  "\x8a\x1b\x1b\x1b\x08\x1b\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x08\x8c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x28\x1b\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x82\x80\x81\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x06\x07\x02"
  "\x86\x02\x02\x1b\x02\x08\x1b\x81\x80\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\xb2\x28\x1b\x28\xb1\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x28\x1b\x28\x1b\x28\xb2"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x0c\x06\x07\x02\x86\x02\x02\x1b\x02\x08"
  "\x87\x0c\x81\x80\x28\x1b\x28\x1b\x28\xb2\x28\x1b\x28\x1b\x28\xb1"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0d\x08\x1b\x87\x06\x07\x02"
  "\x86\x02\x02\x1b\x02\x0c\x81\x80\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\xb2\x28\x0d\x1c\x28\x1b\x28\xb1\x28"
  "\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x08\x0c\x0d\x1c\x0c\x06"
  "\x07\x02\x86\x02\x02\x1b\x02\x0c\x80\x28\x1b\x28\x1b\x28\xb1\x28"
  "\x1b\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x28\x1b\x28\x1b\x28\xb2\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x28"
  "\x1b\x28\xb2\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x28\x1b\x28\xb2\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x08\x28\x1b\x28\x1b\x28\xb2\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x02\x88"
  "\x08\x28\x1b\x28\x1b\x28\xb2\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\xba\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x80\x0d\x0d\x0d"
  "\x1b\x08\x1b\x0d\x1c\x1b\x1b\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\x0d\x1c\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x1b\x08\x1b\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\x08\x1b\x1b\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b"
  "\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x06\x07\x02"
  "\x86\x02\x02\x1b\x02\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a"
  "\x99\x1b\x1b\x99\x1b\x0d\x1c\x0d\x1c\x88\x1b\x1b\x1b\x1b\x88\x08"
  "\x89\x08\x89\x1b\x1b\x0d\x1c\x88\x08\x89\x08\x8b\x1b\x2a\x1b\x1b"
  "\x1b\x88\x1b\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x1b\x88\x08\x89\x08"
  "\x89\x08\x8b\x1b\x2a\x1b\x1b\x1b\x88\x1b\x1b\x0d\x1c\x88\x08\x89"
  "\x1b\x1b\x0d\x1c\x88\x08\x89\x08\x8b\x1b\x2a\x1b\x1b\x1b\x88\x1b"
  "\x1b\x1b\x88\x08\x89\x08\x8a\x1b\x2a\xb2\x08\x88\x1b\x2a\x1b\x2a"
  "\xb1\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x1b\x99\x1b\x1b\x1b\x1b"
  "\x1b\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x1b\x1b\x1b\x0d\x1c\x88\x08"
  "\x89\x1b\x1b\x0d\x1c\x88\x1b\x1b\x1b\x1b\x88\x08\x89\x08\x89\x1b"
  "\x1b\x1b\x88\x08\x89\x1b\x0d\x1c\x88\x08\x8c\x08\x8a\x1b\x2a\x1b"
  "\x1b\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x88\x1b\x1b\x1b\x88\x08\x89"
  "\x1b\x1b\x1b\x1b\x88\x08\x89\x08\x89\x1b\x1b\x88\x08\x8c\x08\x8a"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x99\x1b\x2a\x1b\x1b\x1b\x1b\x1b"
  "\x88\x08\x89\x1b\x1b\x1b\x88\x1b\x1b\x1b\x88\x08\x89\x1b\x1b\x1b"
  "\x88\x08\x89\x1b\x1b\x88\x08\x8c\x08\x8a\x1b\x2a\x0d\x1b\x2a\xc3"
  "\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x99\x1b\x2a\x08\x1b"
  "\x1b\x1b\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x88\x1b\x1b\x1b\x88\x08"
  "\x89\x1b\x1b\x88\x08\x8b\x08\x8a\x1b\x2a\x1b\x1b\x1b\x1b\x9b\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9b\x1b\x1b\x1b\x1b\x88\x08\x89\x1b"
  "\x1b\x1b\x1b\x88\x08\x89\x08\x89\x08\x8a\x1b\x2a\x1b\x1b\x1b\x1b"
  "\x88\x08\x89\xb7\x1b\x1b\x1b\x88\x08\x89\x08\x89\x08\x8a\x1b\x2a"
  "\x1b\x1b\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x1b\x1b\x88\x08\x89\x08"
  "\x89\x08\x89\x08\x8a\x1b\x2a\x1b\x1b\x1b\x1b\x88\x08\x89\x1b\x1b"
  "\x1b\x1b\x88\x08\x89\x08\x89\x08\x8a\x1b\x2a\x1b\x1b\x1b\x1b\x88"
  "\x08\x89\x1b\x1b\x1b\x1b\x88\x08\x89\x08\x89\x08\x8a\x1b\x2a\x1b"
  "\x1b\x1b\x1b\x88\x08\x89\x1b\x1b\x1b\x1b\x88\x08\x89\x08\x89\x08"
  "\x8a\x1b\x2a\x1b\xb7\x1b\x1b\x9b\xb6\x2a\xb5\x2a\xb4\x2a\xb3\x2a"
  "\x9b\x28\x0d\x26\x1b\x1b\x1b\x1b\x24\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5f\x2f\x55"
  "\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72"
  "\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c"
  "\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2f\x6d\x61\x63\x68\x69\x6e\x65\x73\x2f"
  "\x43\x2f\x72\x75\x6c\x66\x69\x78\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x0f\x46\x49\x58\x4e\x55\x4d\x5f\x54\x4f\x5f\x4c\x4f\x4e"
  "\x47\x04\x08\x63\x3a\x65\x63\x61\x6c\x6c\x04\x04\x63\x3a\x3d\x03"
  "\x51\x08\x81\x87\x02\x50\x06\x81\x85\x02\x4f\x04\x84\x06\x07\x11"
  "\x02\x10\x41\x44\x44\x52\x45\x53\x53\x5f\x54\x4f\x5f\x4c\x4f\x4e"
  "\x47\x04\x04\x03\x54\x08\x81\x87\x02\x53\x06\x81\x85\x02\x52\x04"
  "\x84\x06\x07\x11\x02\x0f\x4c\x4f\x4e\x47\x5f\x54\x4f\x5f\x46\x49"
  "\x58\x4e\x55\x4d\x04\x04\x03\x57\x08\x81\x87\x02\x56\x06\x81\x85"
  "\x02\x55\x04\x84\x06\x07\x11\x02\x10\x4c\x4f\x4e\x47\x5f\x54\x4f"
  "\x5f\x41\x44\x44\x52\x45\x53\x53\x04\x04\x03\x5a\x08\x81\x87\x02"
  "\x59\x06\x81\x85\x02\x58\x04\x84\x06\x07\x11\x02\x0e\x73\x63\x68"
  "\x65\x6d\x65\x5f\x6f\x62\x6a\x65\x63\x74\x05\x6c\x6f\x6e\x67\x09"
  "\x0f\x6f\x62\x6a\x65\x63\x74\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x0a"
  "\x09\x72\x65\x67\x69\x73\x74\x65\x72\x0b\x07\x61\x73\x73\x69\x67"
  "\x6e\x0c\x0a\x02\x07\x1a\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75"
  "\x6e\x61\x72\x79\x2d\x63\x6f\x6e\x76\x65\x72\x73\x69\x6f\x6e\x0d"
  "\x02\x5d\x08\x81\x8b\x02\x5c\x06\x81\x83\x02\x5b\x04\x83\x04\x07"
  "\x15\x0e\x02\x09\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74\x0f\x0a\x0b"
  "\x0c\x04\x11\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x74\x61\x72\x67"
  "\x65\x74\x21\x03\x08\x6c\x6f\x6e\x67\x69\x66\x79\x10\x04\x04\x62"
  "\x0c\x81\x87\x02\x61\x0a\x81\x85\x02\x60\x08\x81\x83\x02\x5f\x06"
  "\x81\x83\x02\x5e\x04\x83\x04\x0b\x1b\x11\x02\x08\x0f\x73\x63\x68"
  "\x65\x6d\x65\x5f\x6f\x62\x6a\x65\x63\x74\x2a\x12\x09\x10\x61\x64"
  "\x64\x72\x65\x73\x73\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x13\x0b\x0c"
  "\x13\x02\x07\x0d\x02\x65\x08\x81\x8b\x02\x64\x06\x81\x83\x02\x63"
  "\x04\x83\x04\x07\x15\x14\x02\x09\x09\x10\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x3e\x61\x64\x64\x72\x65\x73\x73\x15\x13\x0b\x0c\x0a\x02\x07"
  "\x0d\x02\x68\x08\x81\x8b\x02\x67\x06\x81\x83\x02\x66\x04\x83\x04"
  "\x07\x16\x16\x02\x0a\x09\x0f\x66\x69\x78\x6e\x75\x6d\x2d\x3e\x6f"
  "\x62\x6a\x65\x63\x74\x0b\x0c\x02\x07\x0d\x02\x6b\x08\x81\x8b\x02"
  "\x6a\x06\x81\x83\x02\x69\x04\x83\x04\x07\x15\x17\x02\x0b\x09\x12"
  "\x10\x66\x69\x78\x6e\x75\x6d\x2d\x3e\x61\x64\x64\x72\x65\x73\x73"
  "\x12\x0b\x0c\x12\x02\x07\x0d\x02\x6e\x08\x81\x8b\x02\x6d\x06\x81"
  "\x83\x02\x6c\x04\x83\x04\x07\x15\x18\x02\x0c\x02\x10\x0c\x76\x65"
  "\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x0f\x11\x2a\x63\x75\x72\x72"
  "\x65\x6e\x74\x2d\x62\x62\x6c\x6f\x63\x6b\x2a\x02\x03\x07\x63\x3a"
  "\x67\x6f\x74\x6f\x02\x75\x10\x81\x83\x02\x74\x0e\x83\x04\x73\x0c"
  "\x83\x04\x72\x0a\x81\x85\x02\x71\x08\x81\x81\x02\x70\x06\x81\x81"
  "\x02\x6f\x04\x82\x02\x0f\x1c\x19\x02\x0d\x11\x4c\x4f\x4e\x47\x5f"
  "\x54\x4f\x5f\x46\x49\x58\x4e\x55\x4d\x5f\x50\x02\x04\x03\x0f\x62"
  "\x72\x61\x6e\x63\x68\x2d\x6f\x6e\x2d\x65\x78\x70\x72\x1a\x03\x04"
  "\x63\x3a\x21\x04\x78\x08\x81\x87\x02\x77\x06\x81\x85\x02\x76\x04"
  "\x84\x06\x07\x13\x1b\x02\x0e\x14\x4e\x6f\x74\x20\x61\x20\x73\x69"
  "\x67\x6e\x65\x64\x20\x66\x69\x78\x6e\x75\x6d\x03\x0f\x73\x69\x67"
  "\x6e\x65\x64\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x1c\x04\x06\x65\x72"
  "\x72\x6f\x72\x1d\x03\x7b\x08\x81\x83\x02\x7a\x06\x81\x83\x02\x79"
  "\x04\x83\x04\x07\x10\x1e\x02\x0f\x0f\x0d\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x74\x79\x70\x65\x3f\x1f\x1b\x1a\x73\x69\x67\x6e\x65\x64\x2d"
  "\x66\x69\x78\x6e\x75\x6d\x2f\x6c\x6f\x77\x65\x72\x2d\x6c\x69\x6d"
  "\x69\x74\x1a\x73\x69\x67\x6e\x65\x64\x2d\x66\x69\x78\x6e\x75\x6d"
  "\x2f\x75\x70\x70\x65\x72\x2d\x6c\x69\x6d\x69\x74\x03\x81\x01\x0e"
  "\x81\x85\x02\x80\x01\x0c\x81\x83\x02\x7f\x0a\x81\x83\x02\x7e\x08"
  "\x81\x83\x02\x7d\x06\x83\x04\x7c\x04\x81\x83\x02\x0d\x18\x20\x02"
  "\x10\x09\x0d\x66\x69\x78\x6e\x75\x6d\x2d\x31\x2d\x61\x72\x67\x21"
  "\x0b\x0c\x07\x0d\x03\x16\x66\x69\x78\x6e\x75\x6d\x2d\x31\x2d\x61"
  "\x72\x67\x2f\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x03\x85\x01\x0a"
  "\x81\x87\x02\x84\x01\x08\x81\x87\x02\x83\x01\x06\x81\x83\x02\x82"
  "\x01\x04\x83\x04\x09\x16\x23\x02\x11\x15\x66\x69\x78\x6e\x75\x6d"
  "\x2d\x6d\x65\x74\x68\x6f\x64\x73\x2f\x31\x2d\x61\x72\x67\x24\x02"
  "\x04\x19\x6c\x6f\x6f\x6b\x75\x70\x2d\x61\x72\x69\x74\x68\x6d\x65"
  "\x74\x69\x63\x2d\x6d\x65\x74\x68\x6f\x64\x25\x02\x87\x01\x06\x81"
  "\x85\x02\x86\x01\x04\x83\x04\x05\x0d\x26\x02\x12\x06\x14\x66\x69"
  "\x78\x6e\x75\x6d\x2d\x61\x64\x64\x2d\x63\x6f\x6e\x73\x74\x61\x6e"
  "\x74\x27\x02\x88\x01\x04\x85\x08\x03\x0a\x28\x02\x13\x06\x27\x02"
  "\x89\x01\x04\x85\x08\x03\x0a\x29\x02\x14\x3d\x3b\x0f\x1f\x1b\x04"
  "\x1c\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x6f\x76\x65\x72\x66\x6c"
  "\x6f\x77\x2d\x62\x72\x61\x6e\x63\x68\x65\x73\x21\x2a\x04\x0b\x62"
  "\x61\x63\x6b\x2d\x65\x6e\x64\x3a\x3d\x2b\x03\x10\x04\x04\x04\x63"
  "\x3a\x2b\x2c\x04\x04\x63\x3a\x2d\x2d\x07\x97\x01\x1e\x81\x8d\x02"
  "\x96\x01\x1c\x81\x8d\x02\x95\x01\x1a\x81\x8b\x02\x94\x01\x18\x81"
  "\x8f\x02\x93\x01\x16\x81\x8d\x02\x92\x01\x14\x81\x83\x02\x91\x01"
  "\x12\x81\x83\x02\x90\x01\x10\x81\x83\x02\x8f\x01\x0e\x81\x83\x02"
  "\x8e\x01\x0c\x81\x8d\x02\x8d\x01\x0a\x81\x8d\x02\x8c\x01\x08\x81"
  "\x89\x02\x8b\x01\x06\x81\x89\x02\x8a\x01\x04\x86\x0a\x1d\x37\x2e"
  "\x02\x15\x03\x04\x63\x3a\x7e\x02\x16\x6e\x6f\x2d\x6f\x76\x65\x72"
  "\x66\x6c\x6f\x77\x2d\x62\x72\x61\x6e\x63\x68\x65\x73\x21\x2f\x04"
  "\x04\x9b\x01\x0a\x81\x89\x02\x9a\x01\x08\x81\x87\x02\x99\x01\x06"
  "\x85\x08\x98\x01\x04\x81\x87\x02\x09\x14\x30\x02\x16\x09\x0e\x66"
  "\x69\x78\x6e\x75\x6d\x2d\x32\x2d\x61\x72\x67\x73\x31\x0b\x0c\x09"
  "\x1b\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x62\x69\x6e\x61\x72\x79"
  "\x2d\x63\x6f\x6e\x76\x65\x72\x73\x69\x6f\x6e\x03\x17\x66\x69\x78"
  "\x6e\x75\x6d\x2d\x32\x2d\x61\x72\x67\x73\x2f\x6f\x70\x65\x72\x61"
  "\x74\x6f\x72\x32\x03\x9f\x01\x0a\x81\x89\x02\x9e\x01\x08\x81\x89"
  "\x02\x9d\x01\x06\x81\x83\x02\x9c\x01\x04\x83\x04\x09\x16\x33\x02"
  "\x17\x16\x66\x69\x78\x6e\x75\x6d\x2d\x6d\x65\x74\x68\x6f\x64\x73"
  "\x2f\x32\x2d\x61\x72\x67\x73\x34\x02\x04\x25\x02\xa1\x01\x06\x81"
  "\x85\x02\xa0\x01\x04\x83\x04\x05\x0d\x35\x02\x18\x04\x04\x63\x3a"
  "\x26\x36\x02\x2f\x04\x04\xa5\x01\x0a\x81\x8b\x02\xa4\x01\x08\x81"
  "\x89\x02\xa3\x01\x06\x86\x0a\xa2\x01\x04\x81\x89\x02\x09\x14\x37"
  "\x02\x19\x04\x04\x63\x3a\x7c\x38\x02\x2f\x04\x04\xa9\x01\x0a\x81"
  "\x8b\x02\xa8\x01\x08\x81\x89\x02\xa7\x01\x06\x86\x0a\xa6\x01\x04"
  "\x81\x89\x02\x09\x14\x39\x02\x1a\x04\x04\x63\x3a\x5e\x3a\x02\x2f"
  "\x04\x04\xad\x01\x0a\x81\x8b\x02\xac\x01\x08\x81\x89\x02\xab\x01"
  "\x06\x86\x0a\xaa\x01\x04\x81\x89\x02\x09\x14\x3b\x02\x1b\x04\x05"
  "\x63\x3a\x26\x7e\x3c\x02\x2f\x04\x04\xb1\x01\x0a\x81\x8b\x02\xb0"
  "\x01\x08\x81\x89\x02\xaf\x01\x06\x86\x0a\xae\x01\x04\x81\x89\x02"
  "\x09\x14\x3d\x02\x1c\x11\x46\x49\x58\x4e\x55\x4d\x5f\x52\x45\x4d"
  "\x41\x49\x4e\x44\x45\x52\x05\x02\x2f\x04\x04\xb5\x01\x0a\x81\x8b"
  "\x02\xb4\x01\x08\x81\x89\x02\xb3\x01\x06\x86\x0a\xb2\x01\x04\x81"
  "\x89\x02\x09\x15\x3e\x02\x1d\x0b\x46\x49\x58\x4e\x55\x4d\x5f\x4c"
  "\x53\x48\x05\x02\x2f\x04\x04\xb9\x01\x0a\x81\x8b\x02\xb8\x01\x08"
  "\x81\x89\x02\xb7\x01\x06\x86\x0a\xb6\x01\x04\x81\x89\x02\x09\x15"
  "\x3f\x02\x1e\x10\x46\x49\x58\x4e\x55\x4d\x5f\x51\x55\x4f\x54\x49"
  "\x45\x4e\x54\x04\x2a\x05\x04\x04\xbd\x01\x0a\x81\x8b\x02\xbc\x01"
  "\x08\x81\x89\x02\xbb\x01\x06\x81\x89\x02\xba\x01\x04\x86\x0a\x09"
  "\x15\x40\x02\x1f\x04\x2a\x04\x2c\x04\x04\xc1\x01\x0a\x81\x8b\x02"
  "\xc0\x01\x08\x81\x89\x02\xbf\x01\x06\x81\x89\x02\xbe\x01\x04\x86"
  "\x0a\x09\x14\x41\x02\x20\x04\x2d\x04\x05\x65\x71\x76\x3f\x05\x18"
  "\x64\x6f\x2d\x6f\x76\x65\x72\x66\x6c\x6f\x77\x2d\x73\x75\x62\x74"
  "\x72\x61\x63\x74\x69\x6f\x6e\x42\x02\x2f\x04\x06\xc8\x01\x10\x81"
  "\x8b\x02\xc7\x01\x0e\x81\x89\x02\xc6\x01\x0c\x81\x89\x02\xc5\x01"
  "\x0a\x81\x8b\x02\xc4\x01\x08\x81\x89\x02\xc3\x01\x06\x81\x89\x02"
  "\xc2\x01\x04\x86\x0a\x0f\x1e\x43\x02\x21\x04\x2a\x04\x2d\x04\x04"
  "\xcc\x01\x0a\x81\x89\x02\xcb\x01\x08\x81\x87\x02\xca\x01\x06\x81"
  "\x87\x02\xc9\x01\x04\x85\x08\x09\x15\x44\x02\x22\x04\x04\x63\x3a"
  "\x2a\x45\x05\x12\x6f\x76\x65\x72\x66\x6c\x6f\x77\x2d\x70\x72\x6f"
  "\x64\x75\x63\x74\x21\x46\x04\x04\xcf\x01\x08\x81\x8b\x02\xce\x01"
  "\x06\x81\x89\x02\xcd\x01\x04\x86\x0a\x07\x12\x47\x02\x23\x17\x6d"
  "\x75\x6c\x74\x69\x70\x6c\x79\x5f\x77\x69\x74\x68\x5f\x6f\x76\x65"
  "\x72\x66\x6c\x6f\x77\x03\x36\x03\x1a\x06\x04\xd2\x01\x08\x81\x89"
  "\x02\xd1\x01\x06\x81\x87\x02\xd0\x01\x04\x85\x08\x07\x12\x1a\x02"
  "\x24\x09\x0f\x0a\x31\x0b\x0c\x07\x0d\x03\x29\x66\x69\x78\x6e\x75"
  "\x6d\x2d\x32\x2d\x61\x72\x67\x73\x2f\x6f\x70\x65\x72\x61\x74\x6f"
  "\x72\x2f\x72\x65\x67\x69\x73\x74\x65\x72\x2a\x63\x6f\x6e\x73\x74"
  "\x61\x6e\x74\x48\x03\xd6\x01\x0a\x81\x89\x02\xd5\x01\x08\x81\x87"
  "\x02\xd4\x01\x06\x81\x83\x02\xd3\x01\x04\x83\x04\x09\x18\x49\x02"
  "\x25\x09\x10\x66\x69\x78\x6e\x75\x6d\x2d\x71\x75\x6f\x74\x69\x65"
  "\x6e\x74\x4a\x11\x66\x69\x78\x6e\x75\x6d\x2d\x72\x65\x6d\x61\x69"
  "\x6e\x64\x65\x72\x4b\x0b\x66\x69\x78\x6e\x75\x6d\x2d\x6c\x73\x68"
  "\x4c\x0f\x0a\x31\x0b\x0c\x04\x05\x6d\x65\x6d\x71\x4d\x07\x0d\x03"
  "\x1b\x66\x69\x78\x6e\x75\x6d\x2d\x32\x2d\x61\x72\x67\x73\x2f\x63"
  "\x6f\x6d\x6d\x75\x74\x61\x74\x69\x76\x65\x3f\x0d\x03\x29\x66\x69"
  "\x78\x6e\x75\x6d\x2d\x32\x2d\x61\x72\x67\x73\x2f\x6f\x70\x65\x72"
  "\x61\x74\x6f\x72\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2a\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x4e\x03\x48\x06\xdd\x01\x10\x81\x89\x02"
  "\xdc\x01\x0e\x81\x89\x02\xdb\x01\x0c\x81\x87\x02\xda\x01\x0a\x81"
  "\x87\x02\xd9\x01\x08\x81\x83\x02\xd8\x01\x06\x81\xa9\x02\xd7\x01"
  "\x04\x83\x04\x0f\x25\x4f\x02\x26\x0c\x70\x6c\x75\x73\x2d\x66\x69"
  "\x78\x6e\x75\x6d\x50\x10\x6d\x75\x6c\x74\x69\x70\x6c\x79\x2d\x66"
  "\x69\x78\x6e\x75\x6d\x51\x0b\x66\x69\x78\x6e\x75\x6d\x2d\x61\x6e"
  "\x64\x52\x0a\x66\x69\x78\x6e\x75\x6d\x2d\x6f\x72\x53\x0b\x66\x69"
  "\x78\x6e\x75\x6d\x2d\x78\x6f\x72\x54\x04\x4d\x02\xde\x01\x04\x83"
  "\x04\x03\x0a\x4d\x02\x27\x28\x66\x69\x78\x6e\x75\x6d\x2d\x6d\x65"
  "\x74\x68\x6f\x64\x73\x2f\x32\x2d\x61\x72\x67\x73\x2f\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2a\x63\x6f\x6e\x73\x74\x61\x6e\x74\x55\x02"
  "\x04\x25\x02\xe0\x01\x06\x81\x85\x02\xdf\x01\x04\x83\x04\x05\x0d"
  "\x56\x02\x28\x28\x66\x69\x78\x6e\x75\x6d\x2d\x6d\x65\x74\x68\x6f"
  "\x64\x73\x2f\x32\x2d\x61\x72\x67\x73\x2f\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x2a\x72\x65\x67\x69\x73\x74\x65\x72\x57\x02\x04\x25\x02"
  "\xe2\x01\x06\x81\x85\x02\xe1\x01\x04\x83\x04\x05\x0d\x25\x02\x29"
  "\x03\x18\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x69\x67\x6e"
  "\x65\x64\x2d\x66\x69\x78\x6e\x75\x6d\x58\x06\x27\x03\xe4\x01\x06"
  "\x81\x89\x02\xe3\x01\x04\x86\x0a\x05\x0d\x59\x02\x2a\x03\x58\x04"
  "\x0b\x62\x61\x63\x6b\x2d\x65\x6e\x64\x3a\x2d\x06\x27\x04\xe7\x01"
  "\x08\x81\x89\x02\xe6\x01\x06\x81\x89\x02\xe5\x01\x04\x86\x0a\x07"
  "\x12\x5a\x02\x2b\x03\x06\x65\x76\x65\x6e\x3f\x02\xee\x01\x10\x81"
  "\x85\x02\xed\x01\x0e\x81\x83\x02\xec\x01\x0c\x81\x83\x02\xeb\x01"
  "\x0a\x81\x83\x02\xea\x01\x08\x81\x83\x02\xe9\x01\x06\x81\x83\x02"
  "\xe8\x01\x04\x83\x04\x0f\x18\x5b\x02\x2c\x0b\x4c\x45\x46\x54\x5f"
  "\x53\x48\x49\x46\x54\x3d\x3b\x0f\x1f\x1b\x09\x04\x2b\x04\x07\x63"
  "\x3a\x63\x61\x73\x74\x5c\x02\x2f\x04\x03\x10\x05\x05\x46\x03\x04"
  "\x61\x62\x73\x5d\x03\x2d\x04\x45\x03\x0c\x70\x6f\x77\x65\x72\x2d"
  "\x6f\x66\x2d\x32\x3f\x45\x0c\x84\x02\x2e\x81\x8b\x02\x83\x02\x2c"
  "\x81\x8f\x02\x82\x02\x2a\x81\x8d\x02\x81\x02\x28\x81\x8b\x02\x80"
  "\x02\x26\x81\x8d\x02\xff\x01\x24\x81\x83\x02\xfe\x01\x22\x81\x8f"
  "\x02\xfd\x01\x20\x81\x8b\x02\xfc\x01\x1e\x81\x89\x02\xfb\x01\x1c"
  "\x81\x83\x02\xfa\x01\x1a\x81\x83\x02\xf9\x01\x18\x81\x83\x02\xf8"
  "\x01\x16\x81\x83\x02\xf7\x01\x14\x81\x89\x02\xf6\x01\x12\x81\x89"
  "\x02\xf5\x01\x10\x81\x89\x02\xf4\x01\x0e\x81\x8b\x02\xf3\x01\x0c"
  "\x81\x8b\x02\xf2\x01\x0a\x81\x89\x02\xf1\x01\x08\x81\x89\x02\xf0"
  "\x01\x06\x81\x89\x02\xef\x01\x04\x86\x0a\x2d\x54\x5e\x02\x2d\x03"
  "\x58\x03\x10\x05\x42\x04\x04\x2d\x06\x89\x02\x0c\x81\x8f\x02\x88"
  "\x02\x0a\x81\x8b\x02\x87\x02\x08\x81\x89\x02\x86\x02\x06\x81\x89"
  "\x02\x85\x02\x04\x86\x0a\x0b\x1a\x5f\x02\x2e\x10\x46\x49\x58\x4e"
  "\x55\x4d\x5f\x51\x55\x4f\x54\x49\x45\x4e\x54\x0c\x52\x49\x47\x48"
  "\x54\x5f\x53\x48\x49\x46\x54\x3d\x3b\x0f\x1f\x1b\x2b\x66\x69\x78"
  "\x6e\x75\x6d\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x20\x63\x6f\x6e"
  "\x73\x74\x61\x6e\x74\x20\x64\x69\x76\x69\x73\x69\x6f\x6e\x20\x62"
  "\x79\x20\x7a\x65\x72\x6f\x2e\x04\x2b\x03\x1d\x04\x02\x2f\x04\x2a"
  "\x05\x03\x5d\x03\x2d\x03\x10\x03\x45\x04\x04\x63\x3a\x3c\x2d\x04"
  "\x2c\x05\x05\x63\x3a\x3f\x3a\x2c\x0e\xa8\x02\x40\x81\x95\x02\xa7"
  "\x02\x3e\x81\x8f\x02\xa6\x02\x3c\x81\x8d\x02\xa5\x02\x3a\x81\x8b"
  "\x02\xa4\x02\x38\x81\x99\x02\xa3\x02\x36\x81\x99\x02\xa2\x02\x34"
  "\x81\x97\x02\xa1\x02\x32\x81\x93\x02\xa0\x02\x30\x81\x8b\x02\x9f"
  "\x02\x2e\x81\x89\x02\x9e\x02\x2c\x81\x8b\x02\x9d\x02\x2a\x81\x8b"
  "\x02\x9c\x02\x28\x81\x91\x02\x9b\x02\x26\x81\x8d\x02\x9a\x02\x24"
  "\x81\x83\x02\x99\x02\x22\x81\x8f\x02\x98\x02\x20\x81\x8b\x02\x97"
  "\x02\x1e\x81\x89\x02\x96\x02\x1c\x81\x83\x02\x95\x02\x1a\x81\x83"
  "\x02\x94\x02\x18\x81\x83\x02\x93\x02\x16\x81\x83\x02\x92\x02\x14"
  "\x81\x89\x02\x91\x02\x12\x81\x89\x02\x90\x02\x10\x81\x8b\x02\x8f"
  "\x02\x0e\x81\x8b\x02\x8e\x02\x0c\x81\x89\x02\x8d\x02\x0a\x81\x89"
  "\x02\x8c\x02\x08\x81\x89\x02\x8b\x02\x06\x81\x89\x02\x8a\x02\x04"
  "\x86\x0a\x3f\x6c\x60\x02\x2f\x11\x46\x49\x58\x4e\x55\x4d\x5f\x52"
  "\x45\x4d\x41\x49\x4e\x44\x45\x52\x0b\x4c\x45\x46\x54\x5f\x53\x48"
  "\x49\x46\x54\x05\x74\x65\x6d\x70\x09\x3d\x3b\x0f\x1f\x1b\x2c\x66"
  "\x69\x78\x6e\x75\x6d\x2d\x72\x65\x6d\x61\x69\x6e\x64\x65\x72\x20"
  "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20\x64\x69\x76\x69\x73\x69\x6f"
  "\x6e\x20\x62\x79\x20\x7a\x65\x72\x6f\x2e\x03\x5d\x04\x2b\x02\x2f"
  "\x03\x1d\x03\x10\x04\x5c\x03\x45\x04\x04\x05\x63\x3a\x3d\x3d\x5d"
  "\x04\x38\x05\x04\x0e\x63\x3a\x62\x72\x61\x63\x65\x2d\x67\x72\x6f"
  "\x75\x70\x05\x07\x63\x3a\x64\x65\x63\x6c\x04\x36\x04\x05\x63\x3a"
  "\x3e\x3d\x07\x2c\x11\xc3\x02\x38\x81\x9b\x02\xc2\x02\x36\x81\x97"
  "\x02\xc1\x02\x34\x81\x95\x02\xc0\x02\x32\x81\x93\x02\xbf\x02\x30"
  "\x81\x91\x02\xbe\x02\x2e\x81\x91\x02\xbd\x02\x2c\x81\x8f\x02\xbc"
  "\x02\x2a\x81\x8d\x02\xbb\x02\x28\x81\x99\x02\xba\x02\x26\x81\x95"
  "\x02\xb9\x02\x24\x81\x93\x02\xb8\x02\x22\x81\x91\x02\xb7\x02\x20"
  "\x81\x97\x02\xb6\x02\x1e\x81\x8f\x02\xb5\x02\x1c\x81\x8d\x02\xb4"
  "\x02\x1a\x81\x8b\x02\xb3\x02\x18\x81\x83\x02\xb2\x02\x16\x81\x83"
  "\x02\xb1\x02\x14\x81\x83\x02\xb0\x02\x12\x81\x83\x02\xaf\x02\x10"
  "\x81\x8b\x02\xae\x02\x0e\x81\x8b\x02\xad\x02\x0c\x81\x8d\x02\xac"
  "\x02\x0a\x81\x8b\x02\xab\x02\x08\x81\x89\x02\xaa\x02\x06\x81\x8b"
  "\x02\xa9\x02\x04\x86\x0a\x37\x6c\x2c\x02\x30\x15\x52\x49\x47\x48"
  "\x54\x5f\x53\x48\x49\x46\x54\x5f\x55\x4e\x53\x49\x47\x4e\x45\x44"
  "\x09\x0b\x4c\x45\x46\x54\x5f\x53\x48\x49\x46\x54\x06\x75\x6c\x6f"
  "\x6e\x67\x61\x0b\x46\x49\x58\x4e\x55\x4d\x5f\x4c\x53\x48\x3d\x3b"
  "\x0f\x1f\x1b\x1b\x66\x69\x78\x6e\x75\x6d\x2d\x6c\x73\x68\x20\x6f"
  "\x76\x65\x72\x66\x6c\x6f\x77\x20\x77\x68\x61\x74\x3f\x3f\x04\x2b"
  "\x03\x1d\x05\x04\x5c\x04\x06\xd5\x02\x26\x81\x8b\x02\xd4\x02\x24"
  "\x81\x89\x02\xd3\x02\x22\x81\x91\x02\xd2\x02\x20\x81\x8d\x02\xd1"
  "\x02\x1e\x81\x8b\x02\xd0\x02\x1c\x81\x89\x02\xcf\x02\x1a\x81\x8b"
  "\x02\xce\x02\x18\x81\x89\x02\xcd\x02\x16\x81\x89\x02\xcc\x02\x14"
  "\x81\x8f\x02\xcb\x02\x12\x81\x89\x02\xca\x02\x10\x81\x83\x02\xc9"
  "\x02\x0e\x81\x83\x02\xc8\x02\x0c\x81\x83\x02\xc7\x02\x0a\x81\x83"
  "\x02\xc6\x02\x08\x81\x89\x02\xc5\x02\x06\x81\x89\x02\xc4\x02\x04"
  "\x86\x0a\x25\x43\x2b\x02\x31\x03\x10\x02\x2f\x04\x04\x36\x05\xda"
  "\x02\x0c\x81\x8d\x02\xd9\x02\x0a\x81\x8b\x02\xd8\x02\x08\x81\x89"
  "\x02\xd7\x02\x06\x86\x0a\xd6\x02\x04\x81\x89\x02\x0b\x18\x36\x02"
  "\x32\x03\x10\x02\x2f\x04\x04\x38\x05\xdf\x02\x0c\x81\x8d\x02\xde"
  "\x02\x0a\x81\x8b\x02\xdd\x02\x08\x81\x89\x02\xdc\x02\x06\x86\x0a"
  "\xdb\x02\x04\x81\x89\x02\x0b\x18\x38\x02\x33\x03\x10\x02\x2f\x04"
  "\x04\x3a\x05\xe4\x02\x0c\x81\x8d\x02\xe3\x02\x0a\x81\x8b\x02\xe2"
  "\x02\x08\x81\x89\x02\xe1\x02\x06\x86\x0a\xe0\x02\x04\x81\x89\x02"
  "\x0b\x18\x3a\x02\x34\x03\x10\x02\x2f\x04\x04\x3c\x05\xe9\x02\x0c"
  "\x81\x8d\x02\xe8\x02\x0a\x81\x8b\x02\xe7\x02\x08\x81\x89\x02\xe6"
  "\x02\x06\x86\x0a\xe5\x02\x04\x81\x89\x02\x0b\x18\x02\x35\x03\x10"
  "\x02\x2f\x04\x04\x3c\x05\xee\x02\x0c\x81\x8f\x02\xed\x02\x0a\x81"
  "\x8b\x02\xec\x02\x08\x81\x89\x02\xeb\x02\x06\x86\x0a\xea\x02\x04"
  "\x81\x89\x02\x0b\x18\x3c\x02\x36\x0e\x6f\x76\x65\x72\x66\x6c\x6f"
  "\x77\x2d\x74\x65\x73\x74\xf0\x02\x06\x82\x02\xef\x02\x04\x83\x04"
  "\x05\x0a\x62\x02\x37\x19\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x66\x69"
  "\x78\x6e\x75\x6d\x20\x70\x72\x65\x64\x69\x63\x61\x74\x65\x11\x70"
  "\x6f\x73\x69\x74\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x11"
  "\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d\x3f"
  "\x0d\x7a\x65\x72\x6f\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x09\x0b\x12"
  "\x66\x69\x78\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x31\x2d\x61\x72"
  "\x67\x63\x5d\x2d\x04\x63\x3a\x3e\x64\x04\x04\x11\x73\x74\x61\x6e"
  "\x64\x61\x72\x64\x2d\x73\x6f\x75\x72\x63\x65\x21\x65\x05\x08\x63"
  "\x6f\x6d\x70\x61\x72\x65\x66\x04\x1d\x04\xf7\x02\x10\x81\x83\x02"
  "\xf6\x02\x0e\x81\x83\x02\xf5\x02\x0c\x81\x83\x02\xf4\x02\x0a\x81"
  "\x83\x02\xf3\x02\x08\x81\x85\x02\xf2\x02\x06\x81\x83\x02\xf1\x02"
  "\x04\x83\x04\x0f\x26\x67\x02\x38\x09\x0b\x13\x66\x69\x78\x6e\x75"
  "\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61\x72\x67\x73\x68\x04\x65"
  "\x05\x0e\x66\x69\x78\x2d\x63\x6f\x6d\x70\x61\x72\x65\x2d\x32\x69"
  "\x03\xfb\x02\x0a\x81\x87\x02\xfa\x02\x08\x81\x83\x02\xf9\x02\x06"
  "\x81\x83\x02\xf8\x02\x04\x83\x04\x09\x15\x6a\x02\x39\x09\x0f\x0a"
  "\x0b\x68\x04\x65\x03\x10\x05\x69\x04\xff\x02\x0a\x81\x87\x02\xfe"
  "\x02\x08\x81\x83\x02\xfd\x02\x06\x81\x83\x02\xfc\x02\x04\x83\x04"
  "\x09\x19\x6b\x02\x3a\x09\x0b\x0f\x0a\x68\x03\x10\x04\x65\x05\x69"
  "\x04\x83\x03\x0a\x81\x87\x02\x82\x03\x08\x81\x83\x02\x81\x03\x06"
  "\x81\x83\x02\x80\x03\x04\x83\x04\x09\x19\x65\x02\x3b\x19\x75\x6e"
  "\x6b\x6e\x6f\x77\x6e\x20\x66\x69\x78\x6e\x75\x6d\x20\x70\x72\x65"
  "\x64\x69\x63\x61\x74\x65\x61\x1e\x75\x6e\x73\x69\x67\x6e\x65\x64"
  "\x2d\x67\x72\x65\x61\x74\x65\x72\x2d\x74\x68\x61\x6e\x2d\x66\x69"
  "\x78\x6e\x75\x6d\x3f\x1b\x75\x6e\x73\x69\x67\x6e\x65\x64\x2d\x6c"
  "\x65\x73\x73\x2d\x74\x68\x61\x6e\x2d\x66\x69\x78\x6e\x75\x6d\x3f"
  "\x15\x67\x72\x65\x61\x74\x65\x72\x2d\x74\x68\x61\x6e\x2d\x66\x69"
  "\x78\x6e\x75\x6d\x3f\x12\x6c\x65\x73\x73\x2d\x74\x68\x61\x6e\x2d"
  "\x66\x69\x78\x6e\x75\x6d\x3f\x0e\x65\x71\x75\x61\x6c\x2d\x66\x69"
  "\x78\x6e\x75\x6d\x3f\x5d\x2d\x64\x04\x05\x66\x04\x5c\x04\x1d\x04"
  "\x8d\x03\x16\x81\x87\x02\x8c\x03\x14\x81\x87\x02\x8b\x03\x12\x81"
  "\x87\x02\x8a\x03\x10\x81\x87\x02\x89\x03\x0e\x81\x87\x02\x88\x03"
  "\x0c\x81\x87\x02\x87\x03\x0a\x81\x87\x02\x86\x03\x08\x81\x87\x02"
  "\x85\x03\x06\x81\x87\x02\x84\x03\x04\x85\x08\x15\x2a\x66\x02\x3c"
  "\x09\x3d\x3b\x0f\x1f\x1b\x04\x5c\x02\x93\x03\x0e\x81\x83\x02\x92"
  "\x03\x0c\x81\x83\x02\x91\x03\x0a\x81\x83\x02\x90\x03\x08\x81\x83"
  "\x02\x8f\x03\x06\x83\x04\x8e\x03\x04\x81\x83\x02\x0d\x1c\x64\x3c"
  "\x61\x61\x64\x06\x66\x04\x10\x69\x68\x35\x23\x5b\x28\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x20\x70\x61\x74\x74\x65\x72\x6e\x2d\x6d\x61"
  "\x74\x63\x68\x65\x72\x2f\x6c\x6f\x6f\x6b\x75\x70\x29\x70\x61\x74"
  "\x74\x65\x72\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x5d\x69\x0a"
  "\x70\x72\x65\x64\x69\x63\x61\x74\x65\x66\x0a\x0f\x69\x0f\x0b\x69"
  "\x07\x73\x6f\x75\x72\x63\x65\x64\x65\x04\x68\x69\x66\x0b\x69\x64"
  "\x0a\x0f\x69\x0f\x6b\x04\x68\x69\x66\x0b\x69\x08\x73\x6f\x75\x72"
  "\x63\x65\x31\x6b\x0b\x69\x08\x73\x6f\x75\x72\x63\x65\x32\x68\x6a"
  "\x04\x63\x69\x66\x0b\x69\x64\x67\x04\x62\x04\x3c\x06\x06\x3a\x06"
  "\x38\x06\x36\x06\x2b\x04\x2c\x04\x60\x04\x5f\x04\x5e\x04\x45\x5b"
  "\x04\x5a\x04\x59\x04\x57\x55\x57\x55\x4e\x48\x0d\x25\x04\x56\x04"
  "\x4d\x04\x0c\x0b\x69\x07\x74\x61\x72\x67\x65\x74\x6a\x31\x69\x0a"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x67\x0a\x0f\x69\x0f\x0b\x69"
  "\x64\x69\x0a\x6f\x76\x65\x72\x66\x6c\x6f\x77\x3f\x66\x4f\x04\x0c"
  "\x0b\x69\x6a\x31\x69\x67\x0b\x69\x64\x0a\x0f\x69\x0f\x69\x66\x49"
  "\x04\x46\x1a\x04\x51\x47\x04\x42\x44\x04\x0d\x6d\x69\x6e\x75\x73"
  "\x2d\x66\x69\x78\x6e\x75\x6d\x43\x04\x50\x41\x04\x4a\x40\x04\x4c"
  "\x3f\x06\x4b\x3e\x06\x0c\x66\x69\x78\x6e\x75\x6d\x2d\x61\x6e\x64"
  "\x63\x3d\x06\x54\x3b\x06\x53\x39\x06\x52\x37\x06\x34\x32\x35\x04"
  "\x34\x0c\x0b\x69\x6a\x31\x69\x67\x0b\x69\x6b\x0b\x69\x68\x69\x66"
  "\x33\x04\x0b\x66\x69\x78\x6e\x75\x6d\x2d\x6e\x6f\x74\x30\x06\x11"
  "\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x27\x2e\x04\x16\x6d\x69\x6e\x75\x73\x2d\x6f\x6e\x65\x2d\x70\x6c"
  "\x75\x73\x2d\x66\x69\x78\x6e\x75\x6d\x29\x04\x10\x6f\x6e\x65\x2d"
  "\x70\x6c\x75\x73\x2d\x66\x69\x78\x6e\x75\x6d\x28\x04\x24\x22\x26"
  "\x04\x24\x0c\x0b\x69\x6a\x21\x69\x67\x0b\x69\x64\x69\x66\x23\x04"
  "\x1c\x58\x2a\x2f\x20\x06\x1e\x04\x1b\x04\x19\x04\x0c\x0b\x69\x6a"
  "\x12\x0b\x69\x64\x18\x04\x0c\x0b\x69\x6a\x0b\x69\x64\x17\x04\x0c"
  "\x0b\x69\x6a\x13\x15\x0b\x69\x64\x16\x04\x0c\x0b\x69\x6a\x13\x0b"
  "\x69\x64\x14\x04\x0c\x0b\x69\x6a\x0a\x0f\x69\x0f\x11\x04\x0c\x0b"
  "\x69\x6a\x0a\x0b\x69\x64\x0e\x04\x12\x13\x0a\x04\x04\x04\x04\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x02\x24\x34\x55\x57\x05\x04\x14\x61\x64\x64\x2d\x73\x74\x61\x74"
  "\x65\x6d\x65\x6e\x74\x2d\x72\x75\x6c\x65\x21\x05\x19\x64\x65\x66"
  "\x69\x6e\x65\x2d\x61\x72\x69\x74\x68\x6d\x65\x74\x69\x63\x2d\x6d"
  "\x65\x74\x68\x6f\x64\x03\x4e\x9e\x01\x80\x80\x04\x4d\x9c\x01\x81"
  "\x81\x02\x4c\x9a\x01\x81\x81\x02\x4b\x98\x01\x81\x83\x02\x4a\x96"
  "\x01\x81\x83\x02\x49\x94\x01\x81\x83\x02\x48\x92\x01\x81\x83\x02"
  "\x47\x90\x01\x81\x83\x02\x46\x8e\x01\x81\x83\x02\x45\x8c\x01\x81"
  "\x87\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81\x87\x02\x42\x86"
  "\x01\x81\x83\x02\x41\x84\x01\x81\x87\x02\x40\x82\x01\x81\x83\x02"
  "\x3f\x80\x01\x81\x87\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81\x87\x02"
  "\x3c\x7a\x81\x83\x02\x3b\x78\x81\x87\x02\x3a\x76\x81\x83\x02\x39"
  "\x74\x81\x87\x02\x38\x72\x81\x83\x02\x37\x70\x81\x87\x02\x36\x6e"
  "\x81\x83\x02\x35\x6c\x81\x87\x02\x34\x6a\x81\x83\x02\x33\x68\x81"
  "\x87\x02\x32\x66\x81\x83\x02\x31\x64\x81\x83\x02\x30\x62\x81\x87"
  "\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x87\x02\x2d\x5c\x81\x83\x02"
  "\x2c\x5a\x81\x83\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x83\x02\x29"
  "\x54\x81\x83\x02\x28\x52\x81\x83\x02\x27\x50\x81\x87\x02\x26\x4e"
  "\x81\x83\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x87\x02\x23\x48\x81"
  "\x83\x02\x22\x46\x81\x87\x02\x21\x44\x81\x83\x02\x20\x42\x81\x87"
  "\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x87\x02\x1d\x3c\x81\x83\x02"
  "\x1c\x3a\x81\x87\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x87\x02\x19"
  "\x34\x81\x83\x02\x18\x32\x81\x87\x02\x17\x30\x81\x83\x02\x16\x2e"
  "\x81\x87\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x87\x02\x13\x28\x81"
  "\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81\x87"
  "\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x87\x02"
  "\x0c\x1a\x81\x83\x02\x0b\x18\x81\x87\x02\x0a\x16\x81\x83\x02\x09"
  "\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e"
  "\x81\x83\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81"
  "\x83\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x9d\x01\x8e\x02";

SCHEME_OBJECT *
rulfix_so_data_9509f49b0eace75c (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rulfix_so_data_9509f49b0eace75c [0]))), (sizeof (prog_rulfix_so_data_9509f49b0eace75c)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_84]));
}

DECLARE_COMPILED_DATA_NS ("rulfix.so", rulfix_so_data_9509f49b0eace75c)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rulfix.so", "403d1dccb83a855c")
