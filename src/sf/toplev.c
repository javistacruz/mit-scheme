/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:07-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define ENVIRONMENT_LABEL_1_3 16
#define DEBUGGING_LABEL_1_2 15
#define EXECUTE_CACHE_1_9 9
#define EXECUTE_CACHE_1_8 11
#define EXECUTE_CACHE_1_6 13
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto integrate_procedure_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_procedure_5)
DEFLABEL (integrate_procedure_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define ENVIRONMENT_LABEL_2_3 13
#define DEBUGGING_LABEL_2_2 12
#define OBJECT_2_0 11
#define EXECUTE_CACHE_2_8 7
#define EXECUTE_CACHE_2_7 9
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_2_4);
      goto integrate_sexp_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_sexp_5)
DEFLABEL (integrate_sexp_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 12
#define DEBUGGING_LABEL_3_2 11
#define EXECUTE_CACHE_3_6 7
#define FREE_REFERENCE_3_0 10
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto integrate_scode_0;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_scode_4)
DEFLABEL (integrate_scode_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 10
#define DEBUGGING_LABEL_4_2 9
#define OBJECT_4_1 8
#define OBJECT_4_0 7
#define EXECUTE_CACHE_4_5 5
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_4_4);
      goto sf_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sf_7)
DEFLABEL (sf_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_4_0]))
    goto label_9;
  Wrd7 = Wrd5;
  goto label_8;

DEFLABEL (label_9)
  (Wrd7.Obj) = (current_block [OBJECT_4_1]);

DEFLABEL (label_8)
DEFLABEL (label_13)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_4_0]))
    goto label_11;
  Wrd10 = Wrd8;
  goto label_10;

DEFLABEL (label_11)
  (Wrd10.Obj) = (current_block [OBJECT_4_1]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_10 5
#define LABEL_5_7 7
#define TAG_5_8 2
#define LABEL_5_5 9
#define TAG_5_6 3
#define LABEL_5_13 11
#define LABEL_5_14 13
#define LABEL_5_15 15
#define ENVIRONMENT_LABEL_5_3 30
#define DEBUGGING_LABEL_5_2 29
#define OBJECT_5_1 28
#define OBJECT_5_0 27
#define EXECUTE_CACHE_5_12 17
#define EXECUTE_CACHE_5_11 19
#define EXECUTE_CACHE_5_9 21
#define FREE_REFERENCE_5_0 24
#define FREE_ASSIGNMENT_5_0 26
#define FREE_REFERENCES_LABEL_5_0 16
#define NUMBER_OF_LINKER_SECTIONS_5_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_5_4);
      goto syntax_integrate_11;

    case 1:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto lambda_19;

    case 3:
      current_block = (Rpc - LABEL_5_5);
      goto swapB_18;

    case 4:
      current_block = (Rpc - LABEL_5_13);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_5_14);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_5_15);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntax_integrate_17)
DEFLABEL (syntax_integrate_11)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  ((Wrd24.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_7])));
  Rhp += 3;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd16 = Wrd11;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd25.Obj);
  (Rsp [4]) = (Wrd25.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_5_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  if (! ((Wrd13.Obj) == (current_block [OBJECT_5_0])))
    goto label_21;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_20)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (label_21)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_20;

DEFLABEL (swapB_18)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  Wrd5 = Wrd9;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_25)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_5_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_15])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_15)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_14])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_14)
  goto label_25;

DEFLABEL (label_30)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_13])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_5 7
#define LABEL_6_8 9
#define ENVIRONMENT_LABEL_6_3 21
#define DEBUGGING_LABEL_6_2 20
#define OBJECT_6_2 19
#define OBJECT_6_1 18
#define OBJECT_6_0 17
#define EXECUTE_CACHE_6_7 11
#define FREE_REFERENCE_6_0 14
#define FREE_ASSIGNMENT_6_0 16
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      goto sf_set_usual_integrations_default_deletionsB_1;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sf_set_usual_integrations_default_deletionsB_6)
DEFLABEL (sf_set_usual_integrations_default_deletionsB_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_11;
  Wrd10 = Wrd14;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_0]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_6_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_8])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_6])), (Wrd11.pObj));

DEFLABEL (label_3)
  (Wrd10.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 13
#define DEBUGGING_LABEL_7_2 12
#define OBJECT_7_0 11
#define EXECUTE_CACHE_7_7 7
#define EXECUTE_CACHE_7_6 9
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_7_4);
      goto pathname_normalize_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_normalize_4)
DEFLABEL (pathname_normalize_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_5 7
#define LABEL_8_9 9
#define LABEL_8_10 11
#define LABEL_8_8 13
#define LABEL_8_12 15
#define TAG_8_13 6
#define LABEL_8_15 17
#define LABEL_8_18 19
#define LABEL_8_19 21
#define LABEL_8_16 23
#define ENVIRONMENT_LABEL_8_3 43
#define DEBUGGING_LABEL_8_2 42
#define OBJECT_8_1 41
#define OBJECT_8_0 40
#define EXECUTE_CACHE_8_20 25
#define EXECUTE_CACHE_8_17 27
#define EXECUTE_CACHE_8_14 29
#define EXECUTE_CACHE_8_11 31
#define EXECUTE_CACHE_8_7 33
#define FREE_REFERENCE_8_3 36
#define FREE_REFERENCE_8_2 37
#define FREE_REFERENCE_8_1 38
#define FREE_REFERENCE_8_0 39
#define FREE_REFERENCES_LABEL_8_0 24
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_8_4);
      goto syntax_file_7;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_8_12);
      goto lambda_16;

    case 7:
      current_block = (Rpc - LABEL_8_15);
      goto lambda_2;

    case 8:
      current_block = (Rpc - LABEL_8_18);
      goto label_12;

    case 9:
      current_block = (Rpc - LABEL_8_19);
      goto label_13;

    case 10:
      current_block = (Rpc - LABEL_8_16);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntax_file_15)
DEFLABEL (syntax_file_7)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_26;
  Wrd9 = Wrd13;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_24;
  Wrd9 = Wrd13;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_2]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_22;
  Wrd15 = Wrd19;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_12])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_19;
  (Wrd18.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  goto label_18;

DEFLABEL (label_19)
  Wrd14 = Wrd12;

DEFLABEL (label_18)
DEFLABEL (label_20)
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_10])), (Wrd16.pObj));

DEFLABEL (label_11)
  (Wrd15.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_9])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_6])), (Wrd10.pObj));

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_8_12);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_16);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_17)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_8_15);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_30;
  Wrd9 = Wrd13;

DEFLABEL (label_29)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_3]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_28;
  Wrd16 = Wrd20;

DEFLABEL (label_27)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_19])), (Wrd17.pObj));

DEFLABEL (label_13)
  (Wrd16.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_18])), (Wrd10.pObj));

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_8 7
#define LABEL_9_7 9
#define LABEL_9_15 11
#define LABEL_9_16 13
#define LABEL_9_17 15
#define LABEL_9_18 17
#define LABEL_9_10 19
#define LABEL_9_22 21
#define LABEL_9_9 23
#define LABEL_9_13 25
#define TAG_9_14 11
#define ENVIRONMENT_LABEL_9_3 48
#define DEBUGGING_LABEL_9_2 47
#define OBJECT_9_3 46
#define OBJECT_9_2 45
#define OBJECT_9_1 44
#define OBJECT_9_0 43
#define EXECUTE_CACHE_9_23 27
#define EXECUTE_CACHE_9_21 29
#define EXECUTE_CACHE_9_20 31
#define EXECUTE_CACHE_9_19 33
#define EXECUTE_CACHE_9_12 35
#define EXECUTE_CACHE_9_11 37
#define EXECUTE_CACHE_9_6 39
#define FREE_REFERENCE_9_0 42
#define FREE_REFERENCES_LABEL_9_0 26
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd43;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_9_4);
      goto sf_pathname_defaulting_15;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_9_15);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_9_17);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_9_18);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_9_22);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_9_13);
      goto lambda_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sf_pathname_defaulting_21)
DEFLABEL (sf_pathname_defaulting_15)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 30))
    goto label_28;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd20.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_28)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_27;
  Wrd10 = Wrd14;

DEFLABEL (label_26)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_25)
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (Rsp [4]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_24)
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_13])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_22])), (Wrd11.pObj));

DEFLABEL (label_17)
  (Wrd10.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd23.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 30))
    goto label_35;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (Wrd27.Obj) = (MAKE_OBJECT (26, (Wrd31.uLng)));

DEFLABEL (label_34)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_33;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! ((Wrd39.Lng) > 2L))
    goto label_32;

DEFLABEL (label_31)
  (Wrd44.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_15);
  (Wrd43.Obj) = Rvl;

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (label_32)
  (Wrd43.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  goto label_30;

DEFLABEL (label_33)
  (Wrd47.Obj) = (current_block [OBJECT_9_2]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_31;

DEFLABEL (label_35)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_18)
  (Wrd27.Obj) = Rvl;
  goto label_34;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (Wrd5.Obj) = Rvl;
  goto label_24;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_9_13);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd9.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_7 7
#define LABEL_10_8 9
#define LABEL_10_10 11
#define LABEL_10_16 13
#define LABEL_10_19 15
#define LABEL_10_14 17
#define TAG_10_15 7
#define LABEL_10_17 19
#define TAG_10_18 8
#define LABEL_10_22 21
#define LABEL_10_23 23
#define LABEL_10_25 25
#define LABEL_10_28 27
#define LABEL_10_30 29
#define LABEL_10_31 31
#define LABEL_10_33 33
#define LABEL_10_35 35
#define LABEL_10_37 37
#define LABEL_10_39 39
#define LABEL_10_40 41
#define LABEL_10_42 43
#define LABEL_10_44 45
#define LABEL_10_46 47
#define ENVIRONMENT_LABEL_10_3 98
#define DEBUGGING_LABEL_10_2 97
#define OBJECT_10_9 96
#define OBJECT_10_8 95
#define OBJECT_10_7 94
#define OBJECT_10_6 93
#define OBJECT_10_5 92
#define OBJECT_10_4 91
#define OBJECT_10_3 90
#define OBJECT_10_2 89
#define OBJECT_10_1 88
#define OBJECT_10_0 87
#define EXECUTE_CACHE_10_47 49
#define EXECUTE_CACHE_10_45 51
#define EXECUTE_CACHE_10_43 53
#define EXECUTE_CACHE_10_41 55
#define EXECUTE_CACHE_10_38 57
#define EXECUTE_CACHE_10_36 59
#define EXECUTE_CACHE_10_34 61
#define EXECUTE_CACHE_10_32 63
#define EXECUTE_CACHE_10_29 65
#define EXECUTE_CACHE_10_27 67
#define EXECUTE_CACHE_10_26 69
#define EXECUTE_CACHE_10_24 71
#define EXECUTE_CACHE_10_21 73
#define EXECUTE_CACHE_10_20 75
#define EXECUTE_CACHE_10_13 77
#define EXECUTE_CACHE_10_12 79
#define EXECUTE_CACHE_10_11 81
#define EXECUTE_CACHE_10_9 83
#define FREE_REFERENCE_10_0 86
#define FREE_REFERENCES_LABEL_10_0 48
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd58;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_10_4);
      goto sf_internal_37;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_43;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10_16);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_10_19);
      goto label_40;

    case 7:
      current_block = (Rpc - LABEL_10_14);
      goto lambda_44;

    case 8:
      current_block = (Rpc - LABEL_10_17);
      goto lambda_45;

    case 9:
      current_block = (Rpc - LABEL_10_22);
      goto continuation_24;

    case 10:
      current_block = (Rpc - LABEL_10_23);
      goto continuation_23;

    case 11:
      current_block = (Rpc - LABEL_10_25);
      goto continuation_27;

    case 12:
      current_block = (Rpc - LABEL_10_28);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_10_30);
      goto continuation_29;

    case 14:
      current_block = (Rpc - LABEL_10_31);
      goto continuation_28;

    case 15:
      current_block = (Rpc - LABEL_10_33);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_10_35);
      goto continuation_30;

    case 17:
      current_block = (Rpc - LABEL_10_37);
      goto continuation_13;

    case 18:
      current_block = (Rpc - LABEL_10_39);
      goto continuation_31;

    case 19:
      current_block = (Rpc - LABEL_10_40);
      goto continuation_8;

    case 20:
      current_block = (Rpc - LABEL_10_42);
      goto continuation_7;

    case 21:
      current_block = (Rpc - LABEL_10_44);
      goto continuation_6;

    case 22:
      current_block = (Rpc - LABEL_10_46);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sf_internal_42)
DEFLABEL (sf_internal_37)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [2]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 4;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd15 = Wrd8;
  (Wrd16.Obj) = (Rsp [4]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_14])));
  Rhp += 5;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd23 = Wrd8;
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  ((Wrd23.pObj) [2]) = (Wrd26.Obj);
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd25.pObj) [4]);
  ((Wrd23.pObj) [4]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd25.pObj) [5]);
  ((Wrd23.pObj) [5]) = (Wrd14.Obj);
  ((Wrd23.pObj) [6]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_51;
  Wrd27 = Wrd31;

DEFLABEL (label_50)
  if (! ((Wrd27.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_46;
  (Wrd58.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd58.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_25;

DEFLABEL (label_46)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_17])));
  Rhp += 2;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  Wrd40 = Wrd35;
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [4]);
  ((Wrd40.pObj) [2]) = (Wrd43.Obj);
  (Wrd39.Obj) = ((Wrd42.pObj) [5]);
  ((Wrd40.pObj) [3]) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_49;
  Wrd45 = Wrd49;

DEFLABEL (label_48)
  if ((Wrd45.Obj) == (current_block [OBJECT_10_2]))
    goto label_47;
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd53.Obj);
  (Rsp [2]) = (Wrd52.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_21]));

DEFLABEL (label_47)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd56.Obj);
  (Rsp [2]) = (Wrd55.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_20]));

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_19])), (Wrd46.pObj));

DEFLABEL (label_40)
  (Wrd45.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_16])), (Wrd28.pObj));

DEFLABEL (label_39)
  (Wrd27.Obj) = Rvl;
  goto label_50;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_10_14);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd25.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_24]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_10_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_29]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_10_28);
  (Wrd9.Obj) = (current_block [OBJECT_10_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_33]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_34]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_10_33);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_37]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_38]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_10_37);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_10_7]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_10_5]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_40]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [6]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_41]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_40);
  (Wrd9.Obj) = (current_block [OBJECT_10_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_42]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_43]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_42);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_44]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_45]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_44);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_10_8]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_46]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [5]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_46);
  (Wrd9.Obj) = (current_block [OBJECT_10_9]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_47]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_10_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10_4]);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_27]));

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_10_17);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_26]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_10_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_32]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_10_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_36]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_10_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_26]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_10_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_32]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_10_39);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_36]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_5 7
#define LABEL_11_7 9
#define LABEL_11_16 11
#define LABEL_11_11 13
#define TAG_11_12 5
#define LABEL_11_18 15
#define LABEL_11_20 17
#define LABEL_11_9 19
#define TAG_11_10 8
#define LABEL_11_22 21
#define LABEL_11_23 23
#define LABEL_11_24 25
#define LABEL_11_14 27
#define LABEL_11_17 29
#define LABEL_11_25 31
#define LABEL_11_30 33
#define LABEL_11_31 35
#define LABEL_11_27 37
#define TAG_11_28 17
#define LABEL_11_32 39
#define LABEL_11_36 41
#define LABEL_11_38 43
#define LABEL_11_37 45
#define LABEL_11_33 47
#define TAG_11_34 22
#define LABEL_11_35 49
#define ENVIRONMENT_LABEL_11_3 81
#define DEBUGGING_LABEL_11_2 80
#define OBJECT_11_1 79
#define OBJECT_11_0 78
#define EXECUTE_CACHE_11_41 51
#define EXECUTE_CACHE_11_40 53
#define EXECUTE_CACHE_11_39 55
#define EXECUTE_CACHE_11_29 57
#define EXECUTE_CACHE_11_26 59
#define EXECUTE_CACHE_11_21 61
#define EXECUTE_CACHE_11_19 63
#define EXECUTE_CACHE_11_15 65
#define EXECUTE_CACHE_11_13 67
#define EXECUTE_CACHE_11_8 69
#define FREE_REFERENCE_11_3 72
#define FREE_REFERENCE_11_2 73
#define FREE_REFERENCE_11_1 74
#define FREE_REFERENCE_11_0 75
#define FREE_ASSIGNMENT_11_0 77
#define FREE_REFERENCES_LABEL_11_0 50
#define NUMBER_OF_LINKER_SECTIONS_11_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_11_4);
      goto sf_file__scode_21;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_11_16);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto lambda_35;

    case 6:
      current_block = (Rpc - LABEL_11_18);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_11_20);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_11_9);
      goto swapB_34;

    case 9:
      current_block = (Rpc - LABEL_11_22);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_11_23);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_11_24);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_1;

    case 13:
      current_block = (Rpc - LABEL_11_17);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_11_25);
      goto continuation_0;

    case 15:
      current_block = (Rpc - LABEL_11_30);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_11_31);
      goto continuation_5;

    case 17:
      current_block = (Rpc - LABEL_11_27);
      goto lambda_36;

    case 18:
      current_block = (Rpc - LABEL_11_32);
      goto label_30;

    case 19:
      current_block = (Rpc - LABEL_11_36);
      goto label_31;

    case 20:
      current_block = (Rpc - LABEL_11_38);
      goto label_29;

    case 21:
      current_block = (Rpc - LABEL_11_37);
      goto continuation_4;

    case 22:
      current_block = (Rpc - LABEL_11_33);
      goto lambda_37;

    case 23:
      current_block = (Rpc - LABEL_11_35);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sf_file__scode_33)
DEFLABEL (sf_file__scode_21)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_39;
  Wrd9 = Wrd13;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_26]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_29]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_9])));
  Rhp += 1;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd23.pObj) = (& (Rhp [-1]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd23.pObj)));
  (Rsp [1]) = (Wrd24.Obj);
  ((Wrd26.pObj) [2]) = (Wrd24.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_11])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  (Rsp [3]) = (Wrd27.Obj);
  (Rsp [5]) = (Wrd27.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_6])), (Wrd10.pObj));

DEFLABEL (label_23)
  (Wrd9.Obj) = Rvl;
  goto label_38;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_11_11);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd9.pObj) [4]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_45;
  Wrd21 = Wrd25;

DEFLABEL (label_44)
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_42;
  Wrd28 = Wrd32;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [4]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_11_16);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_40)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [5]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_11_17);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_27])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_20])), (Wrd29.pObj));

DEFLABEL (label_25)
  (Wrd28.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_40;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_18])), (Wrd22.pObj));

DEFLABEL (label_24)
  (Wrd21.Obj) = Rvl;
  goto label_44;

DEFLABEL (swapB_34)
  CLOSURE_HEADER (LABEL_11_9);

DEFLABEL (swapB_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_54;

DEFLABEL (label_53)
  Wrd5 = Wrd9;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_51;

DEFLABEL (label_50)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_49)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_48;

DEFLABEL (label_47)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_46)
  Rvl = (current_block [OBJECT_11_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_48)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_47;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_24])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_28)
  goto label_46;

DEFLABEL (label_51)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_50;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_23])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_27)
  goto label_49;

DEFLABEL (label_54)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_53;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_22])), (Wrd6.pObj));

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_52;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_11_27);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_37]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_63;
  Wrd17 = Wrd21;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_37);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_39]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_31);

DEFLABEL (label_61)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  if (! ((Wrd28.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_56;

DEFLABEL (label_55)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_3]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_60;
  Wrd30 = Wrd34;

DEFLABEL (label_59)
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_30]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd41.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_33])));
  Rhp += 1;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd41.pObj)));
  Wrd42 = Wrd41;
  (Wrd43.Obj) = (Rsp [2]);
  ((Wrd42.pObj) [2]) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_35]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_3]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_58;
  Wrd47 = Wrd51;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd53.Obj) = (Rsp [4]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [2]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_41]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_30);
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_36])), (Wrd48.pObj));

DEFLABEL (label_31)
  (Wrd47.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_32])), (Wrd31.pObj));

DEFLABEL (label_30)
  (Wrd30.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_38])), (Wrd18.pObj));

DEFLABEL (label_29)
  (Wrd17.Obj) = Rvl;
  goto label_62;

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_11_33);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_40]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_6 5
#define LABEL_12_5 7
#define LABEL_12_8 9
#define LABEL_12_10 11
#define LABEL_12_16 13
#define LABEL_12_14 15
#define LABEL_12_17 17
#define LABEL_12_18 19
#define LABEL_12_19 21
#define LABEL_12_20 23
#define LABEL_12_21 25
#define LABEL_12_22 27
#define LABEL_12_23 29
#define LABEL_12_24 31
#define LABEL_12_25 33
#define LABEL_12_26 35
#define LABEL_12_27 37
#define LABEL_12_28 39
#define LABEL_12_29 41
#define LABEL_12_30 43
#define LABEL_12_12 45
#define LABEL_12_36 47
#define LABEL_12_33 49
#define LABEL_12_40 51
#define LABEL_12_31 53
#define TAG_12_32 25
#define LABEL_12_35 55
#define LABEL_12_38 57
#define LABEL_12_45 59
#define LABEL_12_41 61
#define LABEL_12_42 63
#define LABEL_12_43 65
#define LABEL_12_48 67
#define LABEL_12_46 69
#define LABEL_12_47 71
#define ENVIRONMENT_LABEL_12_3 116
#define DEBUGGING_LABEL_12_2 115
#define OBJECT_12_17 114
#define OBJECT_12_16 113
#define OBJECT_12_15 112
#define OBJECT_12_14 111
#define OBJECT_12_13 110
#define OBJECT_12_12 109
#define OBJECT_12_11 108
#define OBJECT_12_10 107
#define OBJECT_12_9 106
#define OBJECT_12_8 105
#define OBJECT_12_7 104
#define OBJECT_12_6 103
#define OBJECT_12_5 102
#define OBJECT_12_4 101
#define OBJECT_12_3 100
#define OBJECT_12_2 99
#define OBJECT_12_1 98
#define OBJECT_12_0 97
#define EXECUTE_CACHE_12_49 73
#define EXECUTE_CACHE_12_44 75
#define EXECUTE_CACHE_12_39 77
#define EXECUTE_CACHE_12_37 79
#define EXECUTE_CACHE_12_34 81
#define EXECUTE_CACHE_12_15 83
#define EXECUTE_CACHE_12_13 85
#define EXECUTE_CACHE_12_11 87
#define EXECUTE_CACHE_12_9 89
#define EXECUTE_CACHE_12_7 91
#define FREE_REFERENCE_12_2 94
#define FREE_REFERENCE_12_1 95
#define FREE_REFERENCE_12_0 96
#define FREE_REFERENCES_LABEL_12_0 72
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd189;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd186;
  machine_word Wrd187;
  machine_word Wrd184;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd169;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd168;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd153;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd137;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd135;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd121;
  machine_word Wrd122;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd107;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd197;
  machine_word Wrd194;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd85;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd83;
  machine_word Wrd73;
  machine_word Wrd208;
  machine_word Wrd205;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd203;
  machine_word Wrd200;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd214;
  machine_word Wrd211;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_12_4);
      goto read_externs_file_40;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto label_42;

    case 2:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_12_16);
      goto continuation_20;

    case 6:
      current_block = (Rpc - LABEL_12_14);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_12_17);
      goto label_43;

    case 8:
      current_block = (Rpc - LABEL_12_18);
      goto label_56;

    case 9:
      current_block = (Rpc - LABEL_12_19);
      goto label_44;

    case 10:
      current_block = (Rpc - LABEL_12_20);
      goto label_45;

    case 11:
      current_block = (Rpc - LABEL_12_21);
      goto label_46;

    case 12:
      current_block = (Rpc - LABEL_12_22);
      goto label_55;

    case 13:
      current_block = (Rpc - LABEL_12_23);
      goto label_47;

    case 14:
      current_block = (Rpc - LABEL_12_24);
      goto label_54;

    case 15:
      current_block = (Rpc - LABEL_12_25);
      goto label_48;

    case 16:
      current_block = (Rpc - LABEL_12_26);
      goto label_49;

    case 17:
      current_block = (Rpc - LABEL_12_27);
      goto label_50;

    case 18:
      current_block = (Rpc - LABEL_12_28);
      goto label_51;

    case 19:
      current_block = (Rpc - LABEL_12_29);
      goto label_52;

    case 20:
      current_block = (Rpc - LABEL_12_30);
      goto label_53;

    case 21:
      current_block = (Rpc - LABEL_12_12);
      goto continuation_3;

    case 22:
      current_block = (Rpc - LABEL_12_36);
      goto continuation_29;

    case 23:
      current_block = (Rpc - LABEL_12_33);
      goto continuation_25;

    case 24:
      current_block = (Rpc - LABEL_12_40);
      goto lambda_13;

    case 25:
      current_block = (Rpc - LABEL_12_31);
      goto lambda_61;

    case 26:
      current_block = (Rpc - LABEL_12_35);
      goto lambda_4;

    case 27:
      current_block = (Rpc - LABEL_12_38);
      goto lambda_28;

    case 28:
      current_block = (Rpc - LABEL_12_45);
      goto label_57;

    case 29:
      current_block = (Rpc - LABEL_12_41);
      goto continuation_10;

    case 30:
      current_block = (Rpc - LABEL_12_42);
      goto continuation_9;

    case 31:
      current_block = (Rpc - LABEL_12_43);
      goto continuation_8;

    case 32:
      current_block = (Rpc - LABEL_12_48);
      goto label_58;

    case 33:
      current_block = (Rpc - LABEL_12_46);
      goto lambda_11;

    case 34:
      current_block = (Rpc - LABEL_12_47);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_externs_file_60)
DEFLABEL (read_externs_file_40)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_107;
  Wrd8 = Wrd12;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_105;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_14);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 10)
    goto label_69;

DEFLABEL (label_68)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_33]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_34]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_12_33);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_67;

DEFLABEL (label_66)
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_12_13]);
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_37]));

DEFLABEL (label_67)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_36]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_38]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_39]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_12_36);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  (Wrd18.Obj) = (current_block [OBJECT_12_6]);
  (Rsp [0]) = (Wrd18.Obj);
  goto lambda_13;

DEFLABEL (label_69)
  if (! ((Wrd6.uLng) == 10))
    goto label_104;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd11.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));

DEFLABEL (label_103)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_102;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd23.Lng) < 4L)
    goto label_68;

DEFLABEL (label_101)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_100;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_100;
  (Wrd28.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_99)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_1]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_98;
  Wrd43 = Wrd47;

DEFLABEL (label_97)
  (Wrd49.Obj) = (* (Rsp++));
  if (! ((Wrd43.Obj) == (Wrd49.Obj)))
    goto label_68;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_96;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd61.Lng))))
    goto label_96;
  (Wrd55.Obj) = ((Wrd59.pObj) [2]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_95)
  (Wrd200.Obj) = (current_block [OBJECT_12_7]);
  (Wrd203.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd203.Lng))))
    goto label_94;
  (Wrd70.uLng) = (OBJECT_DATUM (Wrd200.Obj));
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd70.Obj) == (Wrd72.Obj))
    goto label_93;

DEFLABEL (label_92)
  (Wrd73.Obj) = (current_block [OBJECT_12_9]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd83.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd83.Lng)))
    goto label_70;
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_8]), 2);

DEFLABEL (label_70)
  (Wrd77.uLng) = (OBJECT_DATUM (Wrd73.Obj));
  (Wrd78.Obj) = (Rsp [1]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if ((Wrd77.Obj) == (Wrd79.Obj))
    goto label_72;
  (Wrd75.Obj) = (current_block [OBJECT_12_10]);
  goto label_71;

DEFLABEL (label_72)
  (Wrd75.Obj) = (current_block [OBJECT_12_1]);

DEFLABEL (label_71)
DEFLABEL (label_91)
  Rsp = (& (Rsp [3]));
  if ((Wrd75.Obj) == ((SCHEME_OBJECT) 0))
    goto label_68;

DEFLABEL (label_90)
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 10))
    goto label_89;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [0]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd93.Lng))))
    goto label_89;
  (Wrd85.Obj) = ((Wrd91.pObj) [2]);

DEFLABEL (label_88)
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd101.uLng) == 26))
    goto label_87;
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if ((Wrd102.Lng) < 2L)
    goto label_68;

DEFLABEL (label_86)
  (Wrd114.Obj) = (Rsp [0]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd115.uLng) == 10))
    goto label_85;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd112.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd113.Lng))))
    goto label_85;
  (Wrd107.Obj) = ((Wrd111.pObj) [2]);
  (* (--Rsp)) = (Wrd107.Obj);

DEFLABEL (label_84)
  (Wrd123.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_2]));
  (Wrd126.Obj) = ((Wrd123.pObj) [0]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if ((Wrd127.uLng) == 50)
    goto label_83;
  Wrd122 = Wrd126;

DEFLABEL (label_82)
  Wrd121 = Wrd122;
  (Wrd128.Obj) = (* (Rsp++));
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if (! ((Wrd129.uLng) == 26))
    goto label_81;
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd130.uLng) == 26))
    goto label_81;
  if ((Wrd122.Obj) == (Wrd128.Obj))
    goto label_76;

DEFLABEL (label_75)
  (Wrd146.Obj) = (Rsp [0]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  if (! ((Wrd147.uLng) == 10))
    goto label_74;
  (Wrd143.pObj) = (OBJECT_ADDRESS (Wrd146.Obj));
  (Wrd144.Obj) = ((Wrd143.pObj) [0]);
  (Wrd145.Lng) = (FIXNUM_TO_LONG (Wrd144.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd145.Lng))))
    goto label_74;
  (Wrd137.Obj) = ((Wrd143.pObj) [2]);

DEFLABEL (label_73)
  (Rsp [0]) = (Wrd137.Obj);
  goto lambda_13;

DEFLABEL (label_74)
  (Wrd148.Obj) = (Rsp [0]);
  (Wrd149.Obj) = (current_block [OBJECT_12_6]);
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_28]))));
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 2);

DEFLABEL (label_51)
  (Wrd137.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd162.Obj) = (Rsp [0]);
  (Wrd163.uLng) = (OBJECT_TYPE (Wrd162.Obj));
  if (! ((Wrd163.uLng) == 10))
    goto label_80;
  (Wrd159.pObj) = (OBJECT_ADDRESS (Wrd162.Obj));
  (Wrd160.Obj) = ((Wrd159.pObj) [0]);
  (Wrd161.Lng) = (FIXNUM_TO_LONG (Wrd160.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd161.Lng))))
    goto label_80;
  (Wrd153.Obj) = ((Wrd159.pObj) [3]);

DEFLABEL (label_79)
  (Rsp [1]) = (Wrd153.Obj);
  (Wrd178.Obj) = (Rsp [0]);
  (Wrd179.uLng) = (OBJECT_TYPE (Wrd178.Obj));
  if (! ((Wrd179.uLng) == 10))
    goto label_78;
  (Wrd175.pObj) = (OBJECT_ADDRESS (Wrd178.Obj));
  (Wrd176.Obj) = ((Wrd175.pObj) [0]);
  (Wrd177.Lng) = (FIXNUM_TO_LONG (Wrd176.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd177.Lng))))
    goto label_78;
  (Wrd169.Obj) = ((Wrd175.pObj) [4]);

DEFLABEL (label_77)
  (Rsp [2]) = (Wrd169.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd187.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_31])));
  Rhp += 2;
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd187.pObj)));
  Wrd190 = Wrd187;
  (Wrd191.Obj) = (Rsp [1]);
  ((Wrd190.pObj) [2]) = (Wrd191.Obj);
  (Wrd189.Obj) = (Rsp [0]);
  ((Wrd190.pObj) [3]) = (Wrd189.Obj);
  Rvl = (Wrd186.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd180.Obj) = (Rsp [0]);
  (Wrd181.Obj) = (current_block [OBJECT_12_12]);
  (Wrd184.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_30]))));
  (* (--Rsp)) = (Wrd184.Obj);
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 2);

DEFLABEL (label_53)
  (Wrd169.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd164.Obj) = (Rsp [0]);
  (Wrd165.Obj) = (current_block [OBJECT_12_11]);
  (Wrd168.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_29]))));
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd165.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 2);

DEFLABEL (label_52)
  (Wrd153.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_81)
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_27]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_50)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  goto label_76;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_26])), (Wrd123.pObj));

DEFLABEL (label_49)
  (Wrd122.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd116.Obj) = (Rsp [0]);
  (Wrd117.Obj) = (current_block [OBJECT_12_6]);
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_25]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd194.Obj) = (current_block [OBJECT_12_11]);
  (Wrd197.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_24]))));
  (* (--Rsp)) = (Wrd197.Obj);
  (* (--Rsp)) = (Wrd194.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_54)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_86;
  goto label_68;

DEFLABEL (label_89)
  (Wrd96.Obj) = (Rsp [0]);
  (Wrd97.Obj) = (current_block [OBJECT_12_6]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_23]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 2);

DEFLABEL (label_47)
  (Wrd85.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_93)
  Rsp = (& (Rsp [2]));
  goto label_90;

DEFLABEL (label_94)
  (Wrd205.Obj) = (Rsp [0]);
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_22]))));
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  (* (--Rsp)) = (Wrd200.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_8]), 2);

DEFLABEL (label_55)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  goto label_93;

DEFLABEL (label_96)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.Obj) = (current_block [OBJECT_12_6]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_20])), (Wrd44.pObj));

DEFLABEL (label_45)
  (Wrd43.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_12_4]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd211.Obj) = (current_block [OBJECT_12_3]);
  (Wrd214.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd214.Obj);
  (* (--Rsp)) = (Wrd211.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_56)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  goto label_68;

DEFLABEL (label_104)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_43)
  (Wrd11.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_105)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_12);
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_35]))));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_6])), (Wrd9.pObj));

DEFLABEL (label_42)
  (Wrd8.Obj) = Rvl;
  goto label_106;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_12_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_90;

DEFLABEL (lambda_62)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_12_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_42]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_12_14]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_43]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_44]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12_43);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_47]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_109;
  Wrd9 = Wrd13;

DEFLABEL (label_108)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_44]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_47);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_49]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_12_42);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_12_41);
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_46]))));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_48])), (Wrd10.pObj));

DEFLABEL (label_58)
  (Wrd9.Obj) = Rvl;
  goto label_108;

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_12_31);

DEFLABEL (lambda_35)
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

DEFLABEL (lambda_63)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_12_35);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_12_15]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_64)
DEFLABEL (lambda_28)
  INTERRUPT_CHECK (26, LABEL_12_38);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_110;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_110)
  (Wrd9.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  if (! ((Wrd6.uLng) == 10))
    goto label_116;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_115)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd23.uLng) == 26)
    goto label_111;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_111)
  if ((Wrd10.Obj) == (current_block [OBJECT_12_3]))
    goto label_113;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_112;

DEFLABEL (label_113)
  Rvl = (current_block [OBJECT_12_1]);

DEFLABEL (label_112)
DEFLABEL (label_114)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_116)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_45]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_57)
  (Wrd10.Obj) = Rvl;
  goto label_115;

DEFLABEL (lambda_65)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_12_46);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_12_15]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_8 7
#define LABEL_13_5 9
#define ENVIRONMENT_LABEL_13_3 24
#define DEBUGGING_LABEL_13_2 23
#define OBJECT_13_2 22
#define OBJECT_13_1 21
#define OBJECT_13_0 20
#define EXECUTE_CACHE_13_10 11
#define EXECUTE_CACHE_13_9 13
#define EXECUTE_CACHE_13_6 15
#define FREE_REFERENCE_13_1 18
#define FREE_REFERENCE_13_0 19
#define FREE_REFERENCES_LABEL_13_0 10
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd34;
  machine_word Wrd33;
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
      goto write_externs_file_3;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_13_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_externs_file_8)
DEFLABEL (write_externs_file_3)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_13_0])))
    goto label_10;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_13_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_14;
  Wrd7 = Wrd11;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_12;
  Wrd14 = Wrd18;

DEFLABEL (label_11)
  (Wrd20.Obj) = (* (Rsp++));
  (Wrd27.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd28.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-5]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd23.pObj)));
  (Wrd29.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_13_1]);
  (Rsp [2]) = (Wrd30.Obj);
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_8])), (Wrd15.pObj));

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_7])), (Wrd8.pObj));

DEFLABEL (label_5)
  (Wrd7.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define TAG_14_6 1
#define LABEL_14_11 7
#define LABEL_14_8 9
#define LABEL_14_9 11
#define LABEL_14_12 13
#define TAG_14_13 5
#define ENVIRONMENT_LABEL_14_3 26
#define DEBUGGING_LABEL_14_2 25
#define EXECUTE_CACHE_14_16 15
#define EXECUTE_CACHE_14_15 17
#define EXECUTE_CACHE_14_14 19
#define EXECUTE_CACHE_14_10 21
#define EXECUTE_CACHE_14_7 23
#define FREE_REFERENCES_LABEL_14_0 14
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_14_4);
      goto integrate_file_6;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_14_12);
      goto lambda_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_file_9)
DEFLABEL (integrate_file_6)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_5])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_13;

DEFLABEL (label_12)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_12])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_11);
  goto label_12;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_14_12);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define TAG_15_7 2
#define LABEL_15_9 9
#define ENVIRONMENT_LABEL_15_3 14
#define DEBUGGING_LABEL_15_2 13
#define EXECUTE_CACHE_15_8 11
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_15_4);
      goto integrate_simple_5;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_15_9);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_simple_8)
DEFLABEL (integrate_simple_5)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_6])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  Wrd10 = Wrd6;
  goto label_11;

DEFLABEL (label_12)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_15_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_10)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_15_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_7 9
#define LABEL_16_8 11
#define LABEL_16_9 13
#define ENVIRONMENT_LABEL_16_3 22
#define DEBUGGING_LABEL_16_2 21
#define EXECUTE_CACHE_16_12 15
#define EXECUTE_CACHE_16_11 17
#define EXECUTE_CACHE_16_10 19
#define FREE_REFERENCES_LABEL_16_0 14
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_16_4);
      goto integrate_kernel_5;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_16_9);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_kernel_8)
DEFLABEL (integrate_kernel_5)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_9)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_16_6);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (lambda_10)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_16_9);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define TAG_17_6 1
#define ENVIRONMENT_LABEL_17_3 13
#define DEBUGGING_LABEL_17_2 12
#define OBJECT_17_0 11
#define EXECUTE_CACHE_17_8 7
#define EXECUTE_CACHE_17_7 9
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_17_4);
      goto phase_read_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_read_4)
DEFLABEL (phase_read_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_17_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_8 5
#define LABEL_18_5 7
#define TAG_18_6 2
#define ENVIRONMENT_LABEL_18_3 19
#define DEBUGGING_LABEL_18_2 18
#define OBJECT_18_2 17
#define OBJECT_18_1 16
#define OBJECT_18_0 15
#define EXECUTE_CACHE_18_10 9
#define EXECUTE_CACHE_18_9 11
#define EXECUTE_CACHE_18_7 13
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_18_4);
      goto phase_syntax_5;

    case 1:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_syntax_8)
DEFLABEL (phase_syntax_5)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_18_1]))
    goto label_11;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_18_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd32.Obj) = ((Wrd25.pObj) [4]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_10)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [3]);
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (label_11)
  (Wrd16.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define TAG_19_6 1
#define LABEL_19_8 7
#define ENVIRONMENT_LABEL_19_3 17
#define DEBUGGING_LABEL_19_2 16
#define OBJECT_19_0 15
#define EXECUTE_CACHE_19_9 9
#define EXECUTE_CACHE_19_7 11
#define FREE_REFERENCE_19_0 14
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_19_4);
      goto phase_transform_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_19_8);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_transform_5)
DEFLABEL (phase_transform_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_19_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_8;
  Wrd9 = Wrd13;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_8])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define TAG_20_6 1
#define ENVIRONMENT_LABEL_20_3 13
#define DEBUGGING_LABEL_20_2 12
#define OBJECT_20_0 11
#define EXECUTE_CACHE_20_8 7
#define EXECUTE_CACHE_20_7 9
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_20_4);
      goto phase_optimize_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_optimize_4)
DEFLABEL (phase_optimize_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_20_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define TAG_21_6 1
#define LABEL_21_8 7
#define LABEL_21_10 9
#define TAG_21_11 3
#define LABEL_21_12 11
#define LABEL_21_14 13
#define TAG_21_15 5
#define ENVIRONMENT_LABEL_21_3 23
#define DEBUGGING_LABEL_21_2 22
#define OBJECT_21_0 21
#define EXECUTE_CACHE_21_13 15
#define EXECUTE_CACHE_21_9 17
#define EXECUTE_CACHE_21_7 19
#define FREE_REFERENCES_LABEL_21_0 14
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_21_4);
      goto phase_generate_scode_6;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_21_10);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_21_12);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_21_14);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_generate_scode_9)
DEFLABEL (phase_generate_scode_6)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_21_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_10])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_21_10);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_12);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_14])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  ((Wrd13.pObj) [4]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_21_14);

DEFLABEL (lambda_1)
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

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define TAG_22_7 2
#define ENVIRONMENT_LABEL_22_3 17
#define DEBUGGING_LABEL_22_2 16
#define OBJECT_22_0 15
#define EXECUTE_CACHE_22_9 9
#define EXECUTE_CACHE_22_8 11
#define FREE_REFERENCE_22_0 14
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_22_4);
      goto in_phase_2;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (in_phase_6)
DEFLABEL (in_phase_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  if ((Wrd6.Obj) == (current_block [OBJECT_22_0]))
    goto label_8;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_8)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_6])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Rsp [0]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_9;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_22_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_9 9
#define LABEL_23_11 11
#define LABEL_23_12 13
#define LABEL_23_13 15
#define LABEL_23_14 17
#define LABEL_23_15 19
#define LABEL_23_16 21
#define TAG_23_17 9
#define LABEL_23_19 23
#define LABEL_23_21 25
#define LABEL_23_22 27
#define LABEL_23_23 29
#define LABEL_23_25 31
#define LABEL_23_27 33
#define LABEL_23_28 35
#define LABEL_23_29 37
#define ENVIRONMENT_LABEL_23_3 58
#define DEBUGGING_LABEL_23_2 57
#define OBJECT_23_3 56
#define OBJECT_23_2 55
#define OBJECT_23_1 54
#define OBJECT_23_0 53
#define EXECUTE_CACHE_23_26 39
#define EXECUTE_CACHE_23_24 41
#define EXECUTE_CACHE_23_20 43
#define EXECUTE_CACHE_23_18 45
#define EXECUTE_CACHE_23_10 47
#define EXECUTE_CACHE_23_8 49
#define EXECUTE_CACHE_23_6 51
#define FREE_REFERENCES_LABEL_23_0 38
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_23_4);
      goto timed_20;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_23_11);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_23_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_23_13);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_23_14);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_23_15);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_23_16);
      goto lambda_26;

    case 10:
      current_block = (Rpc - LABEL_23_19);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_23_21);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_23_22);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_23_23);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_23_25);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_23_27);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_23_28);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_23_29);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (timed_25)
DEFLABEL (timed_20)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_23_12);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_30;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_30;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_30;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_29)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_14);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_28;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_28;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_28;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_27)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_16])));
  Rhp += 2;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd24 = Wrd21;
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_18]));

DEFLABEL (label_28)
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_23_11);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_23_16);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_23_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_23]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_24]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_23_23);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_10)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_26]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_23_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_20]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_23_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_28]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_29]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_24]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_23_29);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_14)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_26]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_23_27);
  (Wrd5.Obj) = (current_block [OBJECT_23_3]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_20]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_8 5
#define LABEL_6 7
#define LABEL_7 9
#define LABEL_10 11
#define LABEL_11 13
#define LABEL_12 15
#define ENVIRONMENT_LABEL_3 34
#define DEBUGGING_LABEL_2 33
#define PURIFICATION_ROOT 32
#define OBJECT_7 31
#define OBJECT_6 30
#define OBJECT_5 29
#define OBJECT_4 28
#define OBJECT_3 27
#define OBJECT_2 26
#define OBJECT_1 25
#define OBJECT_0 24
#define EXECUTE_CACHE_9 17
#define FREE_REFERENCE_0 20
#define GLOBAL_EXECUTE_CACHE_5 22
#define FREE_REFERENCES_LABEL_0 16
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
toplev_so_9bdd26951441e5dd (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_8);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto expression_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_4)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_11])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_9)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_8)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	3,
	2,
	2,
	2,
	1,
	3,
	3,
	1,
	2,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 23)
      goto label_7;
    blocks = (current_block [OBJECT_7]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_10])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
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
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_11;
  Wrd12 = Wrd16;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_4]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_toplev_so_9bdd26951441e5dd [23] =
  {
    { "toplev_so_code_1", 3, toplev_so_code_1 },
    { "toplev_so_code_2", 2, toplev_so_code_2 },
    { "toplev_so_code_3", 2, toplev_so_code_3 },
    { "toplev_so_code_4", 1, toplev_so_code_4 },
    { "toplev_so_code_5", 7, toplev_so_code_5 },
    { "toplev_so_code_6", 4, toplev_so_code_6 },
    { "toplev_so_code_7", 2, toplev_so_code_7 },
    { "toplev_so_code_8", 11, toplev_so_code_8 },
    { "toplev_so_code_9", 12, toplev_so_code_9 },
    { "toplev_so_code_10", 23, toplev_so_code_10 },
    { "toplev_so_code_11", 24, toplev_so_code_11 },
    { "toplev_so_code_12", 35, toplev_so_code_12 },
    { "toplev_so_code_13", 4, toplev_so_code_13 },
    { "toplev_so_code_14", 6, toplev_so_code_14 },
    { "toplev_so_code_15", 4, toplev_so_code_15 },
    { "toplev_so_code_16", 6, toplev_so_code_16 },
    { "toplev_so_code_17", 2, toplev_so_code_17 },
    { "toplev_so_code_18", 3, toplev_so_code_18 },
    { "toplev_so_code_19", 3, toplev_so_code_19 },
    { "toplev_so_code_20", 2, toplev_so_code_20 },
    { "toplev_so_code_21", 6, toplev_so_code_21 },
    { "toplev_so_code_22", 3, toplev_so_code_22 },
    { "toplev_so_code_23", 18, toplev_so_code_23 }
  };

int
decl_toplev_so_9bdd26951441e5dd (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_toplev_so_9bdd26951441e5dd);
  return (0);
}

DECLARE_COMPILED_CODE ("toplev.so", 7, decl_toplev_so_9bdd26951441e5dd, toplev_so_9bdd26951441e5dd)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_toplev_so_data_9bdd26951441e5dd [4497] =
  "\x83\x01\x3c\x91\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\x28"
  "\x0d\xb9\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d"
  "\xb0\x82\x88\x08\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\xbd\x1d\xb0\x83\x88\x0d\x24\x28\xb3\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\xbe\x1d\xb0\x84\x88\x06\x1d\x28\x0d\xbf\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x1d\x1d\x0d\x1c\x25\x1b\x24\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1d\x0c"
  "\x0d\x1c\x0d\x1c\x25\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\xb7\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x24\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x82\xc1\x0c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x0d"
  "\x0c\x08\x07\x0c\x0d\x1c\x0c\x0d\x1b\x24\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x0d"
  "\x1c\x25\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x24\x28\x0d\x28\x1b\x28\x0d"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x08\x0c"
  "\x0c\x83\x82\x06\x02\xc2\x02\x81\xc2\x80\x84\xc1\x07\x0c\x1b\x0d"
  "\x1c\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x07\x08\x1b\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\xb4\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x1c\x28\x0d\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x0c\x28\x1b\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x02\x0c"
  "\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\xc3\x1b\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x84\x0d\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b\x1b\xb4\x1b\x1b"
  "\xb3\x1b\x1b\x1b\x1b\x0d\x17\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb7\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\xb1\x1b\x0d\x1b\x17\x0c\x1b\x2a"
  "\x06\x06\x1b\x2a\x1b\x2a\x1b\x2a\x08\x08\x08\x06\x1b\x2a\x1b\x2a"
  "\x07\x1b\x2a\x1b\x2a\xb6\x2a\xb5\x2a\xb2\x2a\x0c\x17\x28\x0d\x26"
  "\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x50\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x73\x66\x2f\x2e\x2f\x74\x6f\x70\x6c"
  "\x65\x76\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x15\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e"
  "\x74\x73\x04\x10\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x73\x63"
  "\x6f\x64\x65\x04\x0b\x73\x63\x6f\x64\x65\x2d\x65\x76\x61\x6c\x04"
  "\x0a\x08\x81\x85\x02\x09\x06\x84\x06\x08\x04\x83\x04\x07\x11\x02"
  "\x05\x11\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x73\x69\x6d\x70"
  "\x6c\x65\x05\x0d\x70\x68\x61\x73\x65\x3a\x73\x79\x6e\x74\x61\x78"
  "\x03\x0c\x06\x81\x85\x02\x0b\x04\x86\x0a\x05\x0e\x02\x13\x69\x64"
  "\x65\x6e\x74\x69\x74\x79\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x02\x05\x02\x0e\x06\x81\x85\x02\x0d\x04\x84\x06\x05\x0d\x02\x08"
  "\x05\x0c\x73\x79\x6e\x74\x61\x78\x2d\x66\x69\x6c\x65\x02\x0f\x04"
  "\x85\x04\x03\x0b\x09\x02\x02\x08\x0a\x73\x66\x3a\x6e\x6f\x69\x73"
  "\x79\x3f\x0a\x02\x0a\x02\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d"
  "\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x0b\x02\x19\x6e\x65\x61"
  "\x72\x65\x73\x74\x2d\x72\x65\x70\x6c\x2f\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x06\x0f\x69\x6e\x74\x65\x67\x72\x61\x74\x65"
  "\x2f\x73\x65\x78\x70\x0c\x04\x16\x10\x81\x83\x02\x15\x0e\x81\x85"
  "\x02\x14\x0c\x81\x83\x02\x13\x0a\x81\x83\x02\x12\x08\x81\x83\x02"
  "\x11\x06\x81\x85\x02\x10\x04\x85\x06\x0f\x1f\x0d\x02\x02\x10\x6c"
  "\x69\x73\x74\x20\x6f\x66\x20\x73\x79\x6d\x62\x6f\x6c\x73\x2d\x73"
  "\x66\x2f\x73\x65\x74\x2d\x75\x73\x75\x61\x6c\x2d\x69\x6e\x74\x65"
  "\x67\x72\x61\x74\x69\x6f\x6e\x73\x2d\x64\x65\x66\x61\x75\x6c\x74"
  "\x2d\x64\x65\x6c\x65\x74\x69\x6f\x6e\x73\x21\x0e\x28\x73\x66\x2f"
  "\x75\x73\x75\x61\x6c\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6f"
  "\x6e\x73\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x64\x65\x6c\x65\x74"
  "\x69\x6f\x6e\x73\x0f\x02\x08\x73\x79\x6d\x62\x6f\x6c\x3f\x10\x02"
  "\x06\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6c\x69\x73\x74"
  "\x2d\x6f\x66\x2d\x74\x79\x70\x65\x11\x02\x1a\x0a\x81\x83\x02\x19"
  "\x08\x81\x83\x02\x18\x06\x81\x89\x02\x17\x04\x83\x04\x09\x16\x12"
  "\x02\x08\x04\x73\x63\x6d\x03\x10\x6d\x65\x72\x67\x65\x2d\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x73\x13\x04\x16\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x74\x79\x70\x65\x03"
  "\x1c\x06\x81\x83\x02\x1b\x04\x83\x04\x05\x0e\x14\x02\x09\x18\x73"
  "\x66\x2f\x64\x65\x66\x61\x75\x6c\x74\x2d\x73\x79\x6e\x74\x61\x78"
  "\x2d\x74\x61\x62\x6c\x65\x15\x10\x19\x73\x66\x2f\x74\x6f\x70\x2d"
  "\x6c\x65\x76\x65\x6c\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e"
  "\x73\x10\x18\x73\x66\x2f\x64\x65\x66\x61\x75\x6c\x74\x2d\x64\x65"
  "\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x16\x05\x04\x16\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x05\x11\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x05"
  "\x17\x73\x66\x2f\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x66"
  "\x61\x75\x6c\x74\x69\x6e\x67\x11\x07\x0c\x73\x66\x2f\x69\x6e\x74"
  "\x65\x72\x6e\x61\x6c\x17\x06\x27\x18\x81\x87\x02\x26\x16\x81\x8b"
  "\x02\x25\x14\x81\x8b\x02\x24\x12\x85\x08\x23\x10\x81\x85\x02\x22"
  "\x0e\x81\x87\x02\x21\x0c\x81\x8d\x02\x20\x0a\x81\x8b\x02\x1f\x08"
  "\x81\x87\x02\x1e\x06\x81\x8b\x02\x1d\x04\x85\x08\x17\x2c\x18\x02"
  "\x0a\x04\x73\x63\x6d\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x02\x62\x12\x62\x69\x6e\x2d\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2d\x74\x79\x70\x65\x19\x02\x03\x13\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2f\x6e\x6f\x72\x6d\x61\x6c\x69\x7a\x65\x1a\x03\x0e"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x04\x13\x04"
  "\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x1b\x04"
  "\x0c\x73\x74\x72\x69\x6e\x67\x2d\x68\x65\x61\x64\x04\x09\x73\x74"
  "\x72\x69\x6e\x67\x3d\x3f\x04\x12\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x6e\x65\x77\x2d\x74\x79\x70\x65\x1c\x08\x33\x1a\x81\x85\x02"
  "\x32\x18\x81\x8d\x02\x31\x16\x81\x83\x02\x30\x14\x81\x8f\x02\x2f"
  "\x12\x81\x87\x02\x2e\x10\x81\x87\x02\x2d\x0e\x81\x83\x02\x2c\x0c"
  "\x81\x85\x02\x2b\x0a\x81\x89\x02\x2a\x08\x81\x8b\x02\x29\x06\x81"
  "\x87\x02\x28\x04\x85\x08\x19\x31\x1d\x02\x0b\x0c\x73\x6f\x75\x72"
  "\x63\x65\x2d\x66\x69\x6c\x65\x05\x64\x61\x74\x65\x05\x74\x69\x6d"
  "\x65\x05\x20\x3d\x3e\x20\x1c\x47\x65\x6e\x65\x72\x61\x74\x69\x6e"
  "\x67\x20\x53\x43\x6f\x64\x65\x20\x66\x6f\x72\x20\x66\x69\x6c\x65"
  "\x3a\x20\x0a\x6f\x6c\x64\x2d\x73\x74\x79\x6c\x65\x1e\x16\x53\x6b"
  "\x69\x70\x20\x70\x72\x6f\x63\x65\x73\x73\x69\x6e\x67\x20\x66\x69"
  "\x6c\x65\x20\x09\x63\x6f\x6e\x74\x69\x6e\x75\x65\x0a\x02\x03\x0d"
  "\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x1f\x02\x11\x67"
  "\x65\x74\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x05"
  "\x14\x77\x69\x74\x68\x2d\x73\x69\x6d\x70\x6c\x65\x2d\x72\x65\x73"
  "\x74\x61\x72\x74\x04\x1b\x04\x06\x74\x69\x6d\x65\x64\x20\x04\x12"
  "\x77\x69\x74\x68\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x21\x06\x0f\x73\x66\x2f\x66\x69\x6c\x65\x2d\x3e\x73\x63\x6f"
  "\x64\x65\x22\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x23\x05\x08\x66\x61\x73\x64\x75\x6d\x70\x24\x03\x14\x64\x65"
  "\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x73\x65\x63\x6f\x6e"
  "\x64\x03\x12\x65\x6e\x6f\x75\x67\x68\x2d\x6e\x61\x6d\x65\x73\x74"
  "\x72\x69\x6e\x67\x03\x14\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69"
  "\x6d\x65\x2f\x6d\x69\x6e\x75\x74\x65\x04\x06\x77\x72\x69\x74\x65"
  "\x25\x03\x12\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f"
  "\x68\x6f\x75\x72\x03\x11\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69"
  "\x6d\x65\x2f\x64\x61\x79\x03\x13\x64\x65\x63\x6f\x64\x65\x64\x2d"
  "\x74\x69\x6d\x65\x2f\x6d\x6f\x6e\x74\x68\x03\x12\x64\x65\x63\x6f"
  "\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x79\x65\x61\x72\x04\x0d\x6d"
  "\x61\x6b\x65\x2d\x63\x6f\x6d\x6d\x65\x6e\x74\x13\x4a\x30\x81\x8b"
  "\x02\x49\x2e\x81\x8d\x02\x48\x2c\x81\x8d\x02\x47\x2a\x81\x8b\x02"
  "\x46\x28\x81\x85\x02\x45\x26\x81\x8b\x02\x44\x24\x81\x85\x02\x43"
  "\x22\x81\x8b\x02\x42\x20\x81\x89\x02\x41\x1e\x81\x85\x02\x40\x1c"
  "\x81\x89\x02\x3f\x1a\x81\x85\x02\x3e\x18\x81\x87\x02\x3d\x16\x81"
  "\x85\x02\x3c\x14\x81\x85\x02\x3b\x12\x81\x83\x02\x3a\x10\x81\x87"
  "\x02\x39\x0e\x81\x85\x02\x38\x0c\x81\x83\x02\x37\x0a\x81\x8d\x02"
  "\x36\x08\x81\x8b\x02\x35\x06\x81\x83\x02\x34\x04\x87\x0c\x2f\x63"
  "\x26\x02\x0c\x02\x07\x6e\x65\x77\x65\x73\x74\x27\x1c\x73\x66\x2f"
  "\x64\x65\x66\x61\x75\x6c\x74\x2d\x65\x78\x74\x65\x72\x6e\x73\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x28\x02\x16\x65\x78\x74\x65\x72"
  "\x6e\x73\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65"
  "\x29\x1c\x6d\x61\x63\x72\x6f\x65\x78\x70\x61\x6e\x64\x65\x64\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x2a\x28\x18"
  "\x6f\x70\x74\x69\x6d\x69\x7a\x65\x64\x2d\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2d\x74\x79\x70\x65\x2b\x05\x03\x13\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x05\x0b\x03"
  "\x10\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x76\x69\x63\x65"
  "\x06\x0f\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x66\x69\x6c\x65"
  "\x0b\x04\x1c\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x68\x6f"
  "\x73\x74\x08\x0e\x6d\x61\x6b\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x1c\x05\x13\x77\x72\x69\x74\x65\x2d\x65\x78\x74\x65\x72\x6e"
  "\x73\x2d\x66\x69\x6c\x65\x2c\x04\x03\x70\x70\x2d\x04\x16\x63\x61"
  "\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x66"
  "\x69\x6c\x65\x2e\x0b\x62\x32\x81\x8d\x02\x61\x30\x81\x85\x02\x60"
  "\x2e\x81\x8f\x02\x5f\x2c\x81\x91\x02\x5e\x2a\x81\x8f\x02\x5d\x28"
  "\x81\x89\x02\x5c\x26\x81\x89\x02\x5b\x24\x81\x89\x02\x5a\x22\x81"
  "\x89\x02\x59\x20\x81\x95\x02\x58\x1e\x81\x83\x02\x57\x1c\x81\x93"
  "\x02\x56\x1a\x81\x83\x02\x55\x18\x81\x85\x02\x54\x16\x81\x83\x02"
  "\x53\x14\x81\x83\x02\x52\x12\x81\x8b\x02\x51\x10\x81\x8b\x02\x50"
  "\x0e\x81\x83\x02\x4f\x0c\x81\x89\x02\x4e\x0a\x81\x91\x02\x4d\x08"
  "\x81\x89\x02\x4c\x06\x81\x8d\x02\x4b\x04\x86\x0a\x31\x52\x2f\x02"
  "\x0d\x29\x45\x78\x74\x65\x72\x6e\x73\x20\x66\x69\x6c\x65\x20\x69"
  "\x73\x20\x77\x72\x6f\x6e\x67\x20\x76\x65\x72\x73\x69\x6f\x6e\x20"
  "\x28\x65\x78\x70\x65\x63\x74\x65\x64\x20\x09\x2c\x20\x66\x6f\x75"
  "\x6e\x64\x20\x03\x29\x3a\x15\x4e\x6f\x74\x20\x61\x6e\x20\x65\x78"
  "\x74\x65\x72\x6e\x73\x20\x66\x69\x6c\x65\x3a\x0f\x0d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1b\x0b\x76\x65\x63\x74\x6f"
  "\x72\x2d\x72\x65\x66\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x16\x4d\x69\x73\x73\x69\x6e\x67\x20\x65\x78\x74\x65"
  "\x72\x6e\x73\x20\x66\x69\x6c\x65\x3a\x28\x11\x65\x78\x74\x65\x72"
  "\x6e\x73\x2d\x66\x69\x6c\x65\x2d\x74\x61\x67\x30\x15\x65\x78\x74"
  "\x65\x72\x6e\x73\x2d\x66\x69\x6c\x65\x2d\x76\x65\x72\x73\x69\x6f"
  "\x6e\x31\x04\x04\x13\x03\x1f\x03\x0d\x66\x69\x6c\x65\x2d\x65\x78"
  "\x69\x73\x74\x73\x3f\x1f\x04\x05\x77\x61\x72\x6e\x04\x08\x66\x61"
  "\x73\x6c\x6f\x61\x64\x03\x06\x6c\x69\x73\x74\x3f\x04\x06\x65\x72"
  "\x72\x6f\x72\x04\x09\x66\x6f\x72\x2d\x61\x6c\x6c\x3f\x03\x0f\x6e"
  "\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x07\x1b\x0b"
  "\x85\x01\x48\x81\x93\x02\x84\x01\x46\x83\x04\x83\x01\x44\x81\x95"
  "\x02\x82\x01\x42\x81\x8f\x02\x81\x01\x40\x81\x8b\x02\x80\x01\x3e"
  "\x81\x87\x02\x7f\x3c\x81\x85\x02\x7e\x3a\x83\x04\x7d\x38\x83\x04"
  "\x7c\x36\x81\x85\x02\x7b\x34\x81\x87\x02\x7a\x32\x81\x87\x02\x79"
  "\x30\x81\x87\x02\x78\x2e\x81\x85\x02\x77\x2c\x81\x87\x02\x76\x2a"
  "\x81\x87\x02\x75\x28\x81\x87\x02\x74\x26\x81\x87\x02\x73\x24\x81"
  "\x89\x02\x72\x22\x81\x87\x02\x71\x20\x81\x87\x02\x70\x1e\x81\x87"
  "\x02\x6f\x1c\x81\x83\x02\x6e\x1a\x81\x89\x02\x6d\x18\x81\x89\x02"
  "\x6c\x16\x81\x87\x02\x6b\x14\x81\x87\x02\x6a\x12\x81\x87\x02\x69"
  "\x10\x81\x85\x02\x68\x0e\x81\x87\x02\x67\x0c\x81\x85\x02\x66\x0a"
  "\x81\x83\x02\x65\x08\x81\x83\x02\x64\x06\x81\x85\x02\x63\x04\x83"
  "\x04\x47\x75\x1b\x02\x0e\x02\x31\x30\x03\x03\x1f\x05\x24\x03\x0c"
  "\x64\x65\x6c\x65\x74\x65\x2d\x66\x69\x6c\x65\x04\x89\x01\x0a\x81"
  "\x87\x02\x88\x01\x08\x81\x89\x02\x87\x01\x06\x81\x87\x02\x86\x01"
  "\x04\x85\x08\x09\x19\x24\x02\x0f\x03\x11\x69\x6e\x74\x65\x67\x72"
  "\x61\x74\x65\x2f\x6b\x65\x72\x6e\x65\x6c\x1f\x03\x0b\x70\x68\x61"
  "\x73\x65\x3a\x72\x65\x61\x64\x13\x04\x2e\x05\x04\x2d\x06\x8f\x01"
  "\x0e\x81\x85\x02\x8e\x01\x0c\x81\x89\x02\x8d\x01\x0a\x81\x83\x02"
  "\x8c\x01\x08\x81\x85\x02\x8b\x01\x06\x81\x83\x02\x8a\x01\x04\x86"
  "\x0a\x0d\x1b\x2e\x02\x10\x03\x1f\x02\x93\x01\x0a\x85\x08\x92\x01"
  "\x08\x81\x83\x02\x91\x01\x06\x81\x87\x02\x90\x01\x04\x85\x08\x09"
  "\x0f\x2d\x02\x11\x04\x0f\x70\x68\x61\x73\x65\x3a\x6f\x70\x74\x69"
  "\x6d\x69\x7a\x65\x32\x03\x10\x70\x68\x61\x73\x65\x3a\x74\x72\x61"
  "\x6e\x73\x66\x6f\x72\x6d\x33\x05\x15\x70\x68\x61\x73\x65\x3a\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2d\x73\x63\x6f\x64\x65\x34\x04\x99"
  "\x01\x0e\x85\x08\x98\x01\x0c\x81\x89\x02\x97\x01\x0a\x81\x87\x02"
  "\x96\x01\x08\x84\x06\x95\x01\x06\x81\x83\x02\x94\x01\x04\x83\x04"
  "\x0d\x17\x35\x02\x12\x05\x52\x65\x61\x64\x04\x09\x69\x6e\x2d\x70"
  "\x68\x61\x73\x65\x36\x03\x0a\x72\x65\x61\x64\x2d\x66\x69\x6c\x65"
  "\x03\x9b\x01\x06\x81\x83\x02\x9a\x01\x04\x83\x04\x05\x0e\x37\x02"
  "\x13\x08\x64\x65\x63\x6c\x61\x72\x65\x07\x53\x79\x6e\x74\x61\x78"
  "\x04\x36\x04\x08\x73\x79\x6e\x74\x61\x78\x2a\x04\x0d\x63\x6c\x6f"
  "\x73\x65\x2d\x73\x79\x6e\x74\x61\x78\x04\x9e\x01\x08\x81\x83\x02"
  "\x9d\x01\x06\x81\x83\x02\x9c\x01\x04\x85\x08\x07\x14\x38\x02\x14"
  "\x0a\x54\x72\x61\x6e\x73\x66\x6f\x72\x6d\x10\x02\x04\x36\x04\x14"
  "\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2f\x74\x6f\x70\x2d\x6c\x65"
  "\x76\x65\x6c\x03\xa1\x01\x08\x81\x85\x02\xa0\x01\x06\x81\x83\x02"
  "\x9f\x01\x04\x83\x04\x07\x12\x39\x02\x15\x09\x4f\x70\x74\x69\x6d"
  "\x69\x7a\x65\x04\x36\x04\x14\x69\x6e\x74\x65\x67\x72\x61\x74\x65"
  "\x2f\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x03\xa3\x01\x06\x81\x83"
  "\x02\xa2\x01\x04\x84\x06\x05\x0e\x3a\x02\x16\x0f\x47\x65\x6e\x65"
  "\x72\x61\x74\x65\x20\x53\x43\x6f\x64\x65\x04\x36\x04\x15\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x73\x2d\x3e\x65\x78\x74\x65\x72\x6e"
  "\x61\x6c\x03\x0e\x63\x67\x65\x6e\x2f\x65\x78\x74\x65\x72\x6e\x61"
  "\x6c\x04\xa9\x01\x0e\x81\x85\x02\xa8\x01\x0c\x81\x87\x02\xa7\x01"
  "\x0a\x81\x87\x02\xa6\x01\x08\x81\x83\x02\xa5\x01\x06\x81\x83\x02"
  "\xa4\x01\x04\x85\x08\x0d\x18\x3b\x02\x17\x1e\x0a\x02\x04\x20\x04"
  "\x23\x03\xac\x01\x08\x81\x85\x02\xab\x01\x06\x81\x85\x02\xaa\x01"
  "\x04\x84\x06\x07\x12\x1e\x02\x18\x0d\x20\x28\x72\x65\x61\x6c\x20"
  "\x74\x69\x6d\x65\x29\x12\x20\x28\x70\x72\x6f\x63\x65\x73\x73\x20"
  "\x74\x69\x6d\x65\x29\x3b\x20\xe9\x07\x0d\x54\x69\x6d\x65\x20\x74"
  "\x61\x6b\x65\x6e\x3a\x20\x02\x10\x72\x65\x61\x6c\x2d\x74\x69\x6d"
  "\x65\x2d\x63\x6c\x6f\x63\x6b\x02\x13\x70\x72\x6f\x63\x65\x73\x73"
  "\x2d\x74\x69\x6d\x65\x2d\x63\x6c\x6f\x63\x6b\x04\x21\x03\x18\x77"
  "\x72\x69\x74\x65\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x6c\x69\x6e\x65\x04\x23\x03\x0f\x65\x78\x61\x63\x74\x2d"
  "\x3e\x69\x6e\x65\x78\x61\x63\x74\x04\x25\x08\xbe\x01\x26\x81\x8d"
  "\x02\xbd\x01\x24\x81\x89\x02\xbc\x01\x22\x81\x85\x02\xbb\x01\x20"
  "\x81\x85\x02\xba\x01\x1e\x81\x8d\x02\xb9\x01\x1c\x81\x89\x02\xb8"
  "\x01\x1a\x81\x85\x02\xb7\x01\x18\x81\x85\x02\xb6\x01\x16\x81\x85"
  "\x02\xb5\x01\x14\x81\x8f\x02\xb4\x01\x12\x81\x8f\x02\xb3\x01\x10"
  "\x81\x8d\x02\xb2\x01\x0e\x81\x8d\x02\xb1\x01\x0c\x81\x8b\x02\xb0"
  "\x01\x0a\x81\x89\x02\xaf\x01\x08\x81\x87\x02\xae\x01\x06\x81\x85"
  "\x02\xad\x01\x04\x84\x06\x25\x3b\x25\x18\x23\x23\x11\x6c\x6f\x63"
  "\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x28\x25\x04"
  "\x1e\x04\x3b\x04\x3a\x04\x39\x04\x38\x04\x37\x04\x35\x04\x2d\x04"
  "\x2e\x04\x2b\x23\x5b\x28\x73\x63\x6f\x64\x65\x2d\x6f\x70\x74\x69"
  "\x6d\x69\x7a\x65\x72\x20\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x29"
  "\x65\x78\x74\x65\x72\x6e\x73\x2d\x66\x69\x6c\x65\x5d\x24\x04\x1b"
  "\x04\x0f\x20\x36\x34\x32\x33\x13\x1f\x0b\x31\x30\x2c\x12\x72\x65"
  "\x61\x64\x2d\x65\x78\x74\x65\x72\x6e\x73\x2d\x66\x69\x6c\x65\x0f"
  "\x27\x29\x22\x2b\x2a\x17\x11\x0f\x10\x16\x15\x1a\x0e\x0a\x11\x73"
  "\x79\x6e\x74\x61\x78\x26\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x03"
  "\x73\x66\x0c\x14\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x19\x15\x04\x65\x78\x74\x2f\x04\x26"
  "\x04\x1d\x04\x18\x04\x14\x04\x12\x04\x0d\x04\x09\x04\x04\x04\x04"
  "\x04\x62\x69\x6e\x15\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x02\x29\x02\x08\x1c\x02\x07\x10\x80\x80"
  "\x04\x06\x0e\x81\x81\x02\x05\x0c\x81\x81\x02\x04\x0a\x81\x85\x02"
  "\x03\x08\x81\x83\x02\x02\x06\x81\x89\x02\x01\x04\x81\x83\x02\x0f"
  "\x23";

SCHEME_OBJECT *
toplev_so_data_9bdd26951441e5dd (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_toplev_so_data_9bdd26951441e5dd [0]))), (sizeof (prog_toplev_so_data_9bdd26951441e5dd)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_12]));
}

DECLARE_COMPILED_DATA_NS ("toplev.so", toplev_so_data_9bdd26951441e5dd)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("toplev.so", "21f1640b127ed063")
