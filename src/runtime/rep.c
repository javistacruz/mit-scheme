/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:51-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define LABEL_1_10 15
#define LABEL_1_11 17
#define LABEL_1_12 19
#define LABEL_1_13 21
#define LABEL_1_14 23
#define LABEL_1_15 25
#define ENVIRONMENT_LABEL_1_3 44
#define DEBUGGING_LABEL_1_2 43
#define OBJECT_1_1 42
#define OBJECT_1_0 41
#define EXECUTE_CACHE_1_16 27
#define FREE_REFERENCE_1_3 30
#define FREE_REFERENCE_1_2 31
#define FREE_REFERENCE_1_1 32
#define FREE_REFERENCE_1_0 33
#define FREE_ASSIGNMENT_1_5 35
#define FREE_ASSIGNMENT_1_4 36
#define FREE_ASSIGNMENT_1_3 37
#define FREE_ASSIGNMENT_1_2 38
#define FREE_ASSIGNMENT_1_1 39
#define FREE_ASSIGNMENT_1_0 40
#define FREE_REFERENCES_LABEL_1_0 26
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd103;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto initialize_packageB_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_7;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto label_8;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto label_9;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto label_10;

    case 9:
      current_block = (Rpc - LABEL_1_13);
      goto label_11;

    case 10:
      current_block = (Rpc - LABEL_1_14);
      goto label_12;

    case 11:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_14)
DEFLABEL (initialize_packageB_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_38)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_37;
  Wrd17 = Wrd21;

DEFLABEL (label_36)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd31.Obj) = ((Wrd23.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  ((Wrd23.pObj) [0]) = (Wrd17.Obj);

DEFLABEL (label_33)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_32;
  Wrd35 = Wrd39;

DEFLABEL (label_31)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd49.Obj) = ((Wrd41.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd41.pObj) [0]) = (Wrd35.Obj);

DEFLABEL (label_28)
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_27;
  Wrd53 = Wrd57;

DEFLABEL (label_26)
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd67.Obj) = ((Wrd59.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd59.pObj) [0]) = (Wrd53.Obj);

DEFLABEL (label_23)
  (Wrd72.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd75.Obj) = ((Wrd72.pObj) [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 50)
    goto label_22;
  Wrd71 = Wrd75;

DEFLABEL (label_21)
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd85.Obj) = ((Wrd77.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd86.uLng) == 50)
    goto label_20;

DEFLABEL (label_19)
  ((Wrd77.pObj) [0]) = (Wrd71.Obj);

DEFLABEL (label_18)
  (Wrd89.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_5]));
  (Wrd90.Obj) = (current_block [OBJECT_1_0]);
  (Wrd97.Obj) = ((Wrd89.pObj) [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if ((Wrd98.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  ((Wrd89.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_15)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd103.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_15);
  Rvl = (current_block [OBJECT_1_1]);
  goto pop_return;

DEFLABEL (label_17)
  if ((Wrd97.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_14])), (Wrd89.pObj), (Wrd90.Obj));

DEFLABEL (label_12)
  goto label_15;

DEFLABEL (label_20)
  if ((Wrd85.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_19;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_13])), (Wrd77.pObj), (Wrd71.Obj));

DEFLABEL (label_11)
  goto label_18;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd72.pObj));

DEFLABEL (label_10)
  (Wrd71.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  if ((Wrd67.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_11])), (Wrd59.pObj), (Wrd53.Obj));

DEFLABEL (label_9)
  goto label_23;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_10])), (Wrd54.pObj));

DEFLABEL (label_8)
  (Wrd53.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  if ((Wrd49.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_9])), (Wrd41.pObj), (Wrd35.Obj));

DEFLABEL (label_7)
  goto label_28;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd36.pObj));

DEFLABEL (label_6)
  (Wrd35.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_35)
  if ((Wrd31.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd23.pObj), (Wrd17.Obj));

DEFLABEL (label_5)
  goto label_33;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd18.pObj));

DEFLABEL (label_4)
  (Wrd17.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_40)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_39;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_3)
  goto label_38;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_9 9
#define LABEL_2_10 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_8 17
#define LABEL_2_14 19
#define ENVIRONMENT_LABEL_2_3 40
#define DEBUGGING_LABEL_2_2 39
#define OBJECT_2_2 38
#define OBJECT_2_1 37
#define OBJECT_2_0 36
#define EXECUTE_CACHE_2_16 21
#define EXECUTE_CACHE_2_15 23
#define EXECUTE_CACHE_2_13 25
#define EXECUTE_CACHE_2_6 27
#define FREE_REFERENCE_2_3 30
#define FREE_REFERENCE_2_2 31
#define FREE_REFERENCE_2_1 32
#define FREE_REFERENCE_2_0 33
#define FREE_ASSIGNMENT_2_0 35
#define FREE_REFERENCES_LABEL_2_0 20
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_2_4);
      goto initial_top_level_repl_6;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_5;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initial_top_level_repl_14)
DEFLABEL (initial_top_level_repl_6)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (lambda_15)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_2_5);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_24)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_23;
  Wrd20 = Wrd24;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_21;
  Wrd27 = Wrd31;

DEFLABEL (label_20)
  (Wrd36.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_2_1]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_19;
  Wrd46 = Wrd50;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_3]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_17;
  Wrd52 = Wrd56;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_12])), (Wrd53.pObj));

DEFLABEL (label_12)
  (Wrd52.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_11])), (Wrd47.pObj));

DEFLABEL (label_11)
  (Wrd46.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_10])), (Wrd28.pObj));

DEFLABEL (label_10)
  (Wrd27.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_9])), (Wrd21.pObj));

DEFLABEL (label_9)
  (Wrd20.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_26)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_7])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_8)
  goto label_24;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 11
#define DEBUGGING_LABEL_3_2 10
#define OBJECT_3_0 9
#define EXECUTE_CACHE_3_6 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto top_level_repl_set_default_directory_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (top_level_repl_set_default_directory_4)
DEFLABEL (top_level_repl_set_default_directory_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 13
#define DEBUGGING_LABEL_4_2 12
#define OBJECT_4_0 11
#define EXECUTE_CACHE_4_7 7
#define EXECUTE_CACHE_4_6 9
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto guarantee_cmdl_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_cmdl_4)
DEFLABEL (guarantee_cmdl_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_4_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 11
#define DEBUGGING_LABEL_5_2 10
#define OBJECT_5_2 9
#define OBJECT_5_1 8
#define OBJECT_5_0 7
#define EXECUTE_CACHE_5_5 5
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto error_not_cmdl_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_cmdl_5)
DEFLABEL (error_not_cmdl_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_5_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_5_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_5 3
#define LABEL_6_6 5
#define LABEL_6_7 7
#define LABEL_6_8 9
#define LABEL_6_9 11
#define LABEL_6_10 13
#define LABEL_6_11 15
#define LABEL_6_4 17
#define LABEL_6_15 19
#define LABEL_6_19 21
#define ENVIRONMENT_LABEL_6_3 43
#define DEBUGGING_LABEL_6_2 42
#define OBJECT_6_2 41
#define OBJECT_6_1 40
#define OBJECT_6_0 39
#define EXECUTE_CACHE_6_21 23
#define EXECUTE_CACHE_6_20 25
#define EXECUTE_CACHE_6_18 27
#define EXECUTE_CACHE_6_17 29
#define EXECUTE_CACHE_6_16 31
#define EXECUTE_CACHE_6_14 33
#define EXECUTE_CACHE_6_13 35
#define EXECUTE_CACHE_6_12 37
#define FREE_REFERENCES_LABEL_6_0 22
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd58;
  machine_word Wrd31;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_6_4);
      goto make_cmdl_9;

    case 8:
      current_block = (Rpc - LABEL_6_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_6_19);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_cmdl_13)
DEFLABEL (make_cmdl_9)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);

DEFLABEL (label_24)
  (Wrd11.Obj) = (Rsp [0]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (Wrd58.Obj) = Rvl;
  (Wrd65.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd65.uLng) == 26))
    goto label_20;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd66.Lng) = ((Wrd67.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd66.Lng)))
    goto label_20;
  (Wrd60.Obj) = (LONG_TO_FIXNUM (Wrd66.Lng));

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_18)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  Wrd31 = Wrd28;

DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_15);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_19);
  (Rsp [6]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_21]));

DEFLABEL (label_16)
  (Wrd39.Obj) = (Rsp [3]);
  if ((Wrd39.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (label_17)
  (Wrd31.Obj) = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_20)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_11)
  (Wrd60.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd24.Obj) = (current_block [OBJECT_6_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd24.Obj);
  goto label_18;

DEFLABEL (label_23)
  (Wrd43.Obj) = (Rsp [1]);
  if (! ((Wrd43.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_6);
  goto label_22;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (Wrd31.Obj) = Rvl;
  goto label_14;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_5 7
#define ENVIRONMENT_LABEL_7_3 15
#define DEBUGGING_LABEL_7_2 14
#define OBJECT_7_0 13
#define EXECUTE_CACHE_7_8 9
#define EXECUTE_CACHE_7_7 11
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_7_4);
      goto cmdl_child_port_4;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_child_port_7)
DEFLABEL (cmdl_child_port_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_10)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 12
#define DEBUGGING_LABEL_8_2 11
#define EXECUTE_CACHE_8_7 7
#define EXECUTE_CACHE_8_6 9
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_8_4);
      goto push_cmdl_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (push_cmdl_4)
DEFLABEL (push_cmdl_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 12
#define DEBUGGING_LABEL_9_2 11
#define EXECUTE_CACHE_9_7 7
#define EXECUTE_CACHE_9_6 9
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto cmdl_base_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_base_5)
DEFLABEL (cmdl_base_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (label_6)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_5 7
#define LABEL_10_8 9
#define ENVIRONMENT_LABEL_10_3 19
#define DEBUGGING_LABEL_10_2 18
#define OBJECT_10_0 17
#define EXECUTE_CACHE_10_10 11
#define EXECUTE_CACHE_10_9 13
#define EXECUTE_CACHE_10_7 15
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_10_4);
      goto cmdl_set_default_directory_4;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_set_default_directory_7)
DEFLABEL (cmdl_set_default_directory_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [5]);
  (Rsp [2]) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_9)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define TAG_11_8 2
#define LABEL_11_11 9
#define LABEL_11_12 11
#define LABEL_11_9 13
#define LABEL_11_13 15
#define LABEL_11_17 17
#define LABEL_11_15 19
#define LABEL_11_20 21
#define TAG_11_21 9
#define LABEL_11_18 23
#define TAG_11_19 10
#define LABEL_11_27 25
#define LABEL_11_28 27
#define LABEL_11_29 29
#define LABEL_11_30 31
#define LABEL_11_31 33
#define LABEL_11_32 35
#define LABEL_11_33 37
#define LABEL_11_34 39
#define LABEL_11_35 41
#define LABEL_11_36 43
#define LABEL_11_37 45
#define LABEL_11_38 47
#define LABEL_11_39 49
#define LABEL_11_40 51
#define LABEL_11_41 53
#define LABEL_11_42 55
#define LABEL_11_43 57
#define LABEL_11_44 59
#define LABEL_11_45 61
#define LABEL_11_46 63
#define LABEL_11_47 65
#define LABEL_11_48 67
#define LABEL_11_49 69
#define LABEL_11_50 71
#define LABEL_11_51 73
#define LABEL_11_52 75
#define LABEL_11_53 77
#define LABEL_11_54 79
#define LABEL_11_55 81
#define LABEL_11_56 83
#define LABEL_11_57 85
#define LABEL_11_58 87
#define LABEL_11_59 89
#define LABEL_11_60 91
#define LABEL_11_61 93
#define LABEL_11_62 95
#define LABEL_11_63 97
#define LABEL_11_64 99
#define LABEL_11_65 101
#define LABEL_11_23 103
#define LABEL_11_25 105
#define TAG_11_26 51
#define LABEL_11_68 107
#define LABEL_11_69 109
#define LABEL_11_67 111
#define LABEL_11_66 113
#define LABEL_11_71 115
#define LABEL_11_72 117
#define TAG_11_73 57
#define LABEL_11_77 119
#define TAG_11_78 58
#define LABEL_11_76 121
#define LABEL_11_81 123
#define LABEL_11_86 125
#define LABEL_11_83 127
#define LABEL_11_87 129
#define TAG_11_88 63
#define LABEL_11_89 131
#define LABEL_11_90 133
#define LABEL_11_91 135
#define TAG_11_92 66
#define LABEL_11_94 137
#define TAG_11_95 67
#define LABEL_11_97 139
#define LABEL_11_99 141
#define TAG_11_100 69
#define LABEL_11_102 143
#define ENVIRONMENT_LABEL_11_3 219
#define DEBUGGING_LABEL_11_2 218
#define OBJECT_11_5 217
#define OBJECT_11_4 216
#define OBJECT_11_3 215
#define OBJECT_11_2 214
#define OBJECT_11_1 213
#define OBJECT_11_0 212
#define EXECUTE_CACHE_11_103 145
#define EXECUTE_CACHE_11_101 147
#define EXECUTE_CACHE_11_98 149
#define EXECUTE_CACHE_11_96 151
#define EXECUTE_CACHE_11_93 153
#define EXECUTE_CACHE_11_85 155
#define EXECUTE_CACHE_11_84 157
#define EXECUTE_CACHE_11_82 159
#define EXECUTE_CACHE_11_80 161
#define EXECUTE_CACHE_11_79 163
#define EXECUTE_CACHE_11_75 165
#define EXECUTE_CACHE_11_74 167
#define EXECUTE_CACHE_11_70 169
#define EXECUTE_CACHE_11_24 171
#define EXECUTE_CACHE_11_22 173
#define EXECUTE_CACHE_11_16 175
#define EXECUTE_CACHE_11_14 177
#define EXECUTE_CACHE_11_10 179
#define EXECUTE_CACHE_11_6 181
#define FREE_REFERENCE_11_13 184
#define FREE_REFERENCE_11_12 185
#define FREE_REFERENCE_11_11 186
#define FREE_REFERENCE_11_10 187
#define FREE_REFERENCE_11_9 188
#define FREE_REFERENCE_11_8 189
#define FREE_REFERENCE_11_7 190
#define FREE_REFERENCE_11_6 191
#define FREE_REFERENCE_11_5 192
#define FREE_REFERENCE_11_4 193
#define FREE_REFERENCE_11_3 194
#define FREE_REFERENCE_11_2 195
#define FREE_REFERENCE_11_1 196
#define FREE_REFERENCE_11_0 197
#define FREE_ASSIGNMENT_11_12 199
#define FREE_ASSIGNMENT_11_11 200
#define FREE_ASSIGNMENT_11_10 201
#define FREE_ASSIGNMENT_11_9 202
#define FREE_ASSIGNMENT_11_8 203
#define FREE_ASSIGNMENT_11_7 204
#define FREE_ASSIGNMENT_11_6 205
#define FREE_ASSIGNMENT_11_5 206
#define FREE_ASSIGNMENT_11_4 207
#define FREE_ASSIGNMENT_11_3 208
#define FREE_ASSIGNMENT_11_2 209
#define FREE_ASSIGNMENT_11_1 210
#define FREE_ASSIGNMENT_11_0 211
#define FREE_REFERENCES_LABEL_11_0 144
#define NUMBER_OF_LINKER_SECTIONS_11_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd678;
  machine_word Wrd677;
  machine_word Wrd669;
  machine_word Wrd661;
  machine_word Wrd660;
  machine_word Wrd659;
  machine_word Wrd658;
  machine_word Wrd657;
  machine_word Wrd656;
  machine_word Wrd652;
  machine_word Wrd651;
  machine_word Wrd642;
  machine_word Wrd641;
  machine_word Wrd629;
  machine_word Wrd634;
  machine_word Wrd633;
  machine_word Wrd630;
  machine_word Wrd626;
  machine_word Wrd625;
  machine_word Wrd617;
  machine_word Wrd609;
  machine_word Wrd608;
  machine_word Wrd607;
  machine_word Wrd606;
  machine_word Wrd605;
  machine_word Wrd604;
  machine_word Wrd600;
  machine_word Wrd599;
  machine_word Wrd590;
  machine_word Wrd589;
  machine_word Wrd577;
  machine_word Wrd582;
  machine_word Wrd581;
  machine_word Wrd578;
  machine_word Wrd574;
  machine_word Wrd573;
  machine_word Wrd565;
  machine_word Wrd557;
  machine_word Wrd556;
  machine_word Wrd555;
  machine_word Wrd554;
  machine_word Wrd553;
  machine_word Wrd552;
  machine_word Wrd548;
  machine_word Wrd547;
  machine_word Wrd538;
  machine_word Wrd537;
  machine_word Wrd525;
  machine_word Wrd530;
  machine_word Wrd529;
  machine_word Wrd526;
  machine_word Wrd522;
  machine_word Wrd521;
  machine_word Wrd513;
  machine_word Wrd505;
  machine_word Wrd504;
  machine_word Wrd503;
  machine_word Wrd502;
  machine_word Wrd501;
  machine_word Wrd500;
  machine_word Wrd496;
  machine_word Wrd495;
  machine_word Wrd486;
  machine_word Wrd485;
  machine_word Wrd473;
  machine_word Wrd478;
  machine_word Wrd477;
  machine_word Wrd474;
  machine_word Wrd470;
  machine_word Wrd469;
  machine_word Wrd461;
  machine_word Wrd453;
  machine_word Wrd452;
  machine_word Wrd451;
  machine_word Wrd450;
  machine_word Wrd449;
  machine_word Wrd448;
  machine_word Wrd444;
  machine_word Wrd443;
  machine_word Wrd434;
  machine_word Wrd433;
  machine_word Wrd421;
  machine_word Wrd426;
  machine_word Wrd425;
  machine_word Wrd422;
  machine_word Wrd418;
  machine_word Wrd417;
  machine_word Wrd409;
  machine_word Wrd401;
  machine_word Wrd400;
  machine_word Wrd399;
  machine_word Wrd398;
  machine_word Wrd397;
  machine_word Wrd396;
  machine_word Wrd392;
  machine_word Wrd391;
  machine_word Wrd382;
  machine_word Wrd381;
  machine_word Wrd369;
  machine_word Wrd374;
  machine_word Wrd373;
  machine_word Wrd370;
  machine_word Wrd366;
  machine_word Wrd365;
  machine_word Wrd357;
  machine_word Wrd349;
  machine_word Wrd348;
  machine_word Wrd347;
  machine_word Wrd346;
  machine_word Wrd345;
  machine_word Wrd344;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd330;
  machine_word Wrd329;
  machine_word Wrd317;
  machine_word Wrd322;
  machine_word Wrd321;
  machine_word Wrd318;
  machine_word Wrd314;
  machine_word Wrd313;
  machine_word Wrd305;
  machine_word Wrd297;
  machine_word Wrd296;
  machine_word Wrd295;
  machine_word Wrd294;
  machine_word Wrd293;
  machine_word Wrd292;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd265;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd266;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd253;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd213;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd214;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd201;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd161;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd70;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd27;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd63;
  machine_word Wrd66;
  machine_word Wrd69;
  machine_word Wrd72;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd82;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_11_4);
      goto cmdl_start_120;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto lambda_167;

    case 3:
      current_block = (Rpc - LABEL_11_11);
      goto label_122;

    case 4:
      current_block = (Rpc - LABEL_11_12);
      goto label_123;

    case 5:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_99;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_11_17);
      goto label_124;

    case 8:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_101;

    case 9:
      current_block = (Rpc - LABEL_11_20);
      goto lambda_169;

    case 10:
      current_block = (Rpc - LABEL_11_18);
      goto swapB_168;

    case 11:
      current_block = (Rpc - LABEL_11_27);
      goto label_125;

    case 12:
      current_block = (Rpc - LABEL_11_28);
      goto label_126;

    case 13:
      current_block = (Rpc - LABEL_11_29);
      goto label_127;

    case 14:
      current_block = (Rpc - LABEL_11_30);
      goto label_128;

    case 15:
      current_block = (Rpc - LABEL_11_31);
      goto label_129;

    case 16:
      current_block = (Rpc - LABEL_11_32);
      goto label_130;

    case 17:
      current_block = (Rpc - LABEL_11_33);
      goto label_131;

    case 18:
      current_block = (Rpc - LABEL_11_34);
      goto label_132;

    case 19:
      current_block = (Rpc - LABEL_11_35);
      goto label_133;

    case 20:
      current_block = (Rpc - LABEL_11_36);
      goto label_134;

    case 21:
      current_block = (Rpc - LABEL_11_37);
      goto label_135;

    case 22:
      current_block = (Rpc - LABEL_11_38);
      goto label_136;

    case 23:
      current_block = (Rpc - LABEL_11_39);
      goto label_137;

    case 24:
      current_block = (Rpc - LABEL_11_40);
      goto label_138;

    case 25:
      current_block = (Rpc - LABEL_11_41);
      goto label_139;

    case 26:
      current_block = (Rpc - LABEL_11_42);
      goto label_140;

    case 27:
      current_block = (Rpc - LABEL_11_43);
      goto label_141;

    case 28:
      current_block = (Rpc - LABEL_11_44);
      goto label_142;

    case 29:
      current_block = (Rpc - LABEL_11_45);
      goto label_143;

    case 30:
      current_block = (Rpc - LABEL_11_46);
      goto label_144;

    case 31:
      current_block = (Rpc - LABEL_11_47);
      goto label_145;

    case 32:
      current_block = (Rpc - LABEL_11_48);
      goto label_146;

    case 33:
      current_block = (Rpc - LABEL_11_49);
      goto label_147;

    case 34:
      current_block = (Rpc - LABEL_11_50);
      goto label_148;

    case 35:
      current_block = (Rpc - LABEL_11_51);
      goto label_149;

    case 36:
      current_block = (Rpc - LABEL_11_52);
      goto label_150;

    case 37:
      current_block = (Rpc - LABEL_11_53);
      goto label_151;

    case 38:
      current_block = (Rpc - LABEL_11_54);
      goto label_152;

    case 39:
      current_block = (Rpc - LABEL_11_55);
      goto label_153;

    case 40:
      current_block = (Rpc - LABEL_11_56);
      goto label_154;

    case 41:
      current_block = (Rpc - LABEL_11_57);
      goto label_155;

    case 42:
      current_block = (Rpc - LABEL_11_58);
      goto label_156;

    case 43:
      current_block = (Rpc - LABEL_11_59);
      goto label_157;

    case 44:
      current_block = (Rpc - LABEL_11_60);
      goto label_158;

    case 45:
      current_block = (Rpc - LABEL_11_61);
      goto label_159;

    case 46:
      current_block = (Rpc - LABEL_11_62);
      goto label_160;

    case 47:
      current_block = (Rpc - LABEL_11_63);
      goto label_161;

    case 48:
      current_block = (Rpc - LABEL_11_64);
      goto label_162;

    case 49:
      current_block = (Rpc - LABEL_11_65);
      goto label_163;

    case 50:
      current_block = (Rpc - LABEL_11_23);
      goto continuation_100;

    case 51:
      current_block = (Rpc - LABEL_11_25);
      goto loop_15;

    case 52:
      current_block = (Rpc - LABEL_11_68);
      goto continuation_116;

    case 53:
      current_block = (Rpc - LABEL_11_69);
      goto continuation_108;

    case 54:
      current_block = (Rpc - LABEL_11_67);
      goto continuation_103;

    case 55:
      current_block = (Rpc - LABEL_11_66);
      goto continuation_104;

    case 56:
      current_block = (Rpc - LABEL_11_71);
      goto continuation_14;

    case 57:
      current_block = (Rpc - LABEL_11_72);
      goto lambda_171;

    case 58:
      current_block = (Rpc - LABEL_11_77);
      goto lambda_172;

    case 59:
      current_block = (Rpc - LABEL_11_76);
      goto lambda_110;

    case 60:
      current_block = (Rpc - LABEL_11_81);
      goto continuation_4;

    case 61:
      current_block = (Rpc - LABEL_11_86);
      goto label_164;

    case 62:
      current_block = (Rpc - LABEL_11_83);
      goto continuation_113;

    case 63:
      current_block = (Rpc - LABEL_11_87);
      goto lambda_174;

    case 64:
      current_block = (Rpc - LABEL_11_89);
      goto continuation_5;

    case 65:
      current_block = (Rpc - LABEL_11_90);
      goto continuation_8;

    case 66:
      current_block = (Rpc - LABEL_11_91);
      goto lambda_175;

    case 67:
      current_block = (Rpc - LABEL_11_94);
      goto lambda_176;

    case 68:
      current_block = (Rpc - LABEL_11_97);
      goto continuation_6;

    case 69:
      current_block = (Rpc - LABEL_11_99);
      goto lambda_177;

    case 70:
      current_block = (Rpc - LABEL_11_102);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_start_166)
DEFLABEL (cmdl_start_120)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_7])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_16]));

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_24]));

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_11_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_182;

DEFLABEL (label_181)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_66]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_67]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_11_67);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_178;
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (current_block [OBJECT_11_3]);
  (Rsp [1]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_70]));

DEFLABEL (label_178)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_180)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_179;
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_179)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_80]));

DEFLABEL (label_182)
  if (Rvl == (Wrd5.Obj))
    goto label_181;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_68]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_69]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_70]));

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_11_69);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_184;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;
  goto label_183;

DEFLABEL (label_184)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_76]))));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_183)
DEFLABEL (label_185)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_78);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_77])));
  Rhp += 3;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd17 = Wrd12;
  (Wrd18.Obj) = (Rsp [6]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [4]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_79]));

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_11_68);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_75]));

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_11_66);
  (Wrd5.Obj) = Rvl;
  goto label_180;

DEFLABEL (lambda_167)
  CLOSURE_HEADER (LABEL_11_7);

DEFLABEL (lambda_98)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd22.pObj) = (& (Rhp [-1]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_193;
  Wrd25 = Wrd29;

DEFLABEL (label_192)
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd32.pObj) = (& (Rhp [-1]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_191;
  Wrd34 = Wrd38;

DEFLABEL (label_190)
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd41.pObj) = (& (Rhp [-1]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd44.pObj) = (& (Rhp [-1]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd48.pObj) = (& (Rhp [-1]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd52.pObj) = (& (Rhp [-1]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd52.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [11]);
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [3]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_189;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_188;
  Wrd7 = Wrd11;

DEFLABEL (label_187)
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_186)
  (Wrd16.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.Obj) = (Rsp [12]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 16));
  (Wrd80.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_18])));
  Rhp += 13;
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd80.pObj)));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd79.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd79.Obj);
  (Wrd77.pObj) = (& (Rhp [-1]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd77.pObj)));
  (Rsp [3]) = (Wrd78.Obj);
  Wrd74 = Wrd80;
  (Wrd75.Obj) = (Rsp [13]);
  ((Wrd74.pObj) [2]) = (Wrd75.Obj);
  (Wrd72.Obj) = (Rsp [12]);
  ((Wrd74.pObj) [3]) = (Wrd72.Obj);
  (Wrd69.Obj) = (Rsp [11]);
  ((Wrd74.pObj) [4]) = (Wrd69.Obj);
  (Wrd66.Obj) = (Rsp [10]);
  ((Wrd74.pObj) [5]) = (Wrd66.Obj);
  (Wrd63.Obj) = (Rsp [9]);
  ((Wrd74.pObj) [6]) = (Wrd63.Obj);
  (Wrd60.Obj) = (Rsp [8]);
  ((Wrd74.pObj) [7]) = (Wrd60.Obj);
  (Wrd57.Obj) = (Rsp [7]);
  ((Wrd74.pObj) [8]) = (Wrd57.Obj);
  (Wrd54.Obj) = (Rsp [6]);
  ((Wrd74.pObj) [9]) = (Wrd54.Obj);
  (Wrd51.Obj) = (Rsp [5]);
  ((Wrd74.pObj) [10]) = (Wrd51.Obj);
  (Wrd48.Obj) = (Rsp [4]);
  ((Wrd74.pObj) [11]) = (Wrd48.Obj);
  ((Wrd74.pObj) [12]) = (Wrd78.Obj);
  ((Wrd74.pObj) [13]) = (Wrd15.Obj);
  ((Wrd74.pObj) [14]) = (Wrd19.Obj);
  (Rsp [12]) = (Wrd81.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_20])));
  Rhp += 2;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd32 = Wrd27;
  (Wrd35.Obj) = ((Wrd21.pObj) [2]);
  ((Wrd32.pObj) [2]) = (Wrd35.Obj);
  ((Wrd32.pObj) [3]) = (Wrd22.Obj);
  (Rsp [13]) = (Wrd26.Obj);
  (Rsp [14]) = (Wrd81.Obj);
  Rsp = (& (Rsp [12]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_22]));

DEFLABEL (label_188)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_17])), (Wrd8.pObj));

DEFLABEL (label_124)
  (Wrd7.Obj) = Rvl;
  goto label_187;

DEFLABEL (label_189)
  (Wrd82.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd82.Obj);
  goto label_186;

DEFLABEL (label_191)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_12])), (Wrd35.pObj));

DEFLABEL (label_123)
  (Wrd34.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_11])), (Wrd26.pObj));

DEFLABEL (label_122)
  (Wrd25.Obj) = Rvl;
  goto label_192;

DEFLABEL (lambda_169)
  CLOSURE_HEADER (LABEL_11_20);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_25])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  Wrd11 = Wrd15;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [1]) = (Wrd7.Obj);
  goto loop_15;

DEFLABEL (swapB_168)
  CLOSURE_HEADER (LABEL_11_18);

DEFLABEL (swapB_96)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_310;

DEFLABEL (label_309)
  Wrd5 = Wrd9;

DEFLABEL (label_308)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_307;

DEFLABEL (label_306)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_305)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [14]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_304;

DEFLABEL (label_303)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_302)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_4]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_301;

DEFLABEL (label_300)
  Wrd57 = Wrd61;

DEFLABEL (label_299)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_298;

DEFLABEL (label_297)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_296)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [13]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_295;

DEFLABEL (label_294)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_293)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_292;

DEFLABEL (label_291)
  Wrd109 = Wrd113;

DEFLABEL (label_290)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_289;

DEFLABEL (label_288)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_287)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [12]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_286;

DEFLABEL (label_285)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_284)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_5]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_283;

DEFLABEL (label_282)
  Wrd161 = Wrd165;

DEFLABEL (label_281)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_280;

DEFLABEL (label_279)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_278)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [11]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_277;

DEFLABEL (label_276)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_275)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_6]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_274;

DEFLABEL (label_273)
  Wrd213 = Wrd217;

DEFLABEL (label_272)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_4]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_271;

DEFLABEL (label_270)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_269)
  (Wrd240.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd243.Obj) = ((Wrd242.pObj) [10]);
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd245.Obj);
  ((Wrd244.pObj) [0]) = (Wrd240.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_4]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_268;

DEFLABEL (label_267)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_266)
  (Wrd266.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_7]));
  (Wrd269.Obj) = ((Wrd266.pObj) [0]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if ((Wrd270.uLng) == 50)
    goto label_265;

DEFLABEL (label_264)
  Wrd265 = Wrd269;

DEFLABEL (label_263)
  (* (--Rsp)) = (Wrd265.Obj);
  (Wrd277.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_5]));
  (Wrd278.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd287.Obj) = ((Wrd277.pObj) [0]);
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if ((Wrd288.uLng) == 50)
    goto label_262;

DEFLABEL (label_261)
  ((Wrd277.pObj) [0]) = (Wrd278.Obj);

DEFLABEL (label_260)
  (Wrd292.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd293.Obj) = (Rsp [1]);
  (Wrd294.pObj) = (OBJECT_ADDRESS (Wrd293.Obj));
  (Wrd295.Obj) = ((Wrd294.pObj) [9]);
  (Wrd296.pObj) = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd297.Obj) = ((Wrd296.pObj) [0]);
  (* (--Rsp)) = (Wrd297.Obj);
  ((Wrd296.pObj) [0]) = (Wrd292.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd305.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_5]));
  (Wrd313.Obj) = ((Wrd305.pObj) [0]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if ((Wrd314.uLng) == 50)
    goto label_259;

DEFLABEL (label_258)
  ((Wrd305.pObj) [0]) = (Wrd297.Obj);

DEFLABEL (label_257)
  (Wrd318.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd321.Obj) = ((Wrd318.pObj) [0]);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if ((Wrd322.uLng) == 50)
    goto label_256;

DEFLABEL (label_255)
  Wrd317 = Wrd321;

DEFLABEL (label_254)
  (* (--Rsp)) = (Wrd317.Obj);
  (Wrd329.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_6]));
  (Wrd330.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd339.Obj) = ((Wrd329.pObj) [0]);
  (Wrd340.uLng) = (OBJECT_TYPE (Wrd339.Obj));
  if ((Wrd340.uLng) == 50)
    goto label_253;

DEFLABEL (label_252)
  ((Wrd329.pObj) [0]) = (Wrd330.Obj);

DEFLABEL (label_251)
  (Wrd344.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd344.Obj);
  (Wrd345.Obj) = (Rsp [1]);
  (Wrd346.pObj) = (OBJECT_ADDRESS (Wrd345.Obj));
  (Wrd347.Obj) = ((Wrd346.pObj) [8]);
  (Wrd348.pObj) = (OBJECT_ADDRESS (Wrd347.Obj));
  (Wrd349.Obj) = ((Wrd348.pObj) [0]);
  (* (--Rsp)) = (Wrd349.Obj);
  ((Wrd348.pObj) [0]) = (Wrd344.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd357.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_6]));
  (Wrd365.Obj) = ((Wrd357.pObj) [0]);
  (Wrd366.uLng) = (OBJECT_TYPE (Wrd365.Obj));
  if ((Wrd366.uLng) == 50)
    goto label_250;

DEFLABEL (label_249)
  ((Wrd357.pObj) [0]) = (Wrd349.Obj);

DEFLABEL (label_248)
  (Wrd370.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd373.Obj) = ((Wrd370.pObj) [0]);
  (Wrd374.uLng) = (OBJECT_TYPE (Wrd373.Obj));
  if ((Wrd374.uLng) == 50)
    goto label_247;

DEFLABEL (label_246)
  Wrd369 = Wrd373;

DEFLABEL (label_245)
  (* (--Rsp)) = (Wrd369.Obj);
  (Wrd381.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_7]));
  (Wrd382.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd391.Obj) = ((Wrd381.pObj) [0]);
  (Wrd392.uLng) = (OBJECT_TYPE (Wrd391.Obj));
  if ((Wrd392.uLng) == 50)
    goto label_244;

DEFLABEL (label_243)
  ((Wrd381.pObj) [0]) = (Wrd382.Obj);

DEFLABEL (label_242)
  (Wrd396.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd396.Obj);
  (Wrd397.Obj) = (Rsp [1]);
  (Wrd398.pObj) = (OBJECT_ADDRESS (Wrd397.Obj));
  (Wrd399.Obj) = ((Wrd398.pObj) [7]);
  (Wrd400.pObj) = (OBJECT_ADDRESS (Wrd399.Obj));
  (Wrd401.Obj) = ((Wrd400.pObj) [0]);
  (* (--Rsp)) = (Wrd401.Obj);
  ((Wrd400.pObj) [0]) = (Wrd396.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd409.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_7]));
  (Wrd417.Obj) = ((Wrd409.pObj) [0]);
  (Wrd418.uLng) = (OBJECT_TYPE (Wrd417.Obj));
  if ((Wrd418.uLng) == 50)
    goto label_241;

DEFLABEL (label_240)
  ((Wrd409.pObj) [0]) = (Wrd401.Obj);

DEFLABEL (label_239)
  (Wrd422.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_8]));
  (Wrd425.Obj) = ((Wrd422.pObj) [0]);
  (Wrd426.uLng) = (OBJECT_TYPE (Wrd425.Obj));
  if ((Wrd426.uLng) == 50)
    goto label_238;

DEFLABEL (label_237)
  Wrd421 = Wrd425;

DEFLABEL (label_236)
  (* (--Rsp)) = (Wrd421.Obj);
  (Wrd433.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_8]));
  (Wrd434.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd443.Obj) = ((Wrd433.pObj) [0]);
  (Wrd444.uLng) = (OBJECT_TYPE (Wrd443.Obj));
  if ((Wrd444.uLng) == 50)
    goto label_235;

DEFLABEL (label_234)
  ((Wrd433.pObj) [0]) = (Wrd434.Obj);

DEFLABEL (label_233)
  (Wrd448.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd448.Obj);
  (Wrd449.Obj) = (Rsp [1]);
  (Wrd450.pObj) = (OBJECT_ADDRESS (Wrd449.Obj));
  (Wrd451.Obj) = ((Wrd450.pObj) [6]);
  (Wrd452.pObj) = (OBJECT_ADDRESS (Wrd451.Obj));
  (Wrd453.Obj) = ((Wrd452.pObj) [0]);
  (* (--Rsp)) = (Wrd453.Obj);
  ((Wrd452.pObj) [0]) = (Wrd448.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd461.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_8]));
  (Wrd469.Obj) = ((Wrd461.pObj) [0]);
  (Wrd470.uLng) = (OBJECT_TYPE (Wrd469.Obj));
  if ((Wrd470.uLng) == 50)
    goto label_232;

DEFLABEL (label_231)
  ((Wrd461.pObj) [0]) = (Wrd453.Obj);

DEFLABEL (label_230)
  (Wrd474.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_9]));
  (Wrd477.Obj) = ((Wrd474.pObj) [0]);
  (Wrd478.uLng) = (OBJECT_TYPE (Wrd477.Obj));
  if ((Wrd478.uLng) == 50)
    goto label_229;

DEFLABEL (label_228)
  Wrd473 = Wrd477;

DEFLABEL (label_227)
  (* (--Rsp)) = (Wrd473.Obj);
  (Wrd485.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_9]));
  (Wrd486.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd495.Obj) = ((Wrd485.pObj) [0]);
  (Wrd496.uLng) = (OBJECT_TYPE (Wrd495.Obj));
  if ((Wrd496.uLng) == 50)
    goto label_226;

DEFLABEL (label_225)
  ((Wrd485.pObj) [0]) = (Wrd486.Obj);

DEFLABEL (label_224)
  (Wrd500.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd500.Obj);
  (Wrd501.Obj) = (Rsp [1]);
  (Wrd502.pObj) = (OBJECT_ADDRESS (Wrd501.Obj));
  (Wrd503.Obj) = ((Wrd502.pObj) [5]);
  (Wrd504.pObj) = (OBJECT_ADDRESS (Wrd503.Obj));
  (Wrd505.Obj) = ((Wrd504.pObj) [0]);
  (* (--Rsp)) = (Wrd505.Obj);
  ((Wrd504.pObj) [0]) = (Wrd500.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd513.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_9]));
  (Wrd521.Obj) = ((Wrd513.pObj) [0]);
  (Wrd522.uLng) = (OBJECT_TYPE (Wrd521.Obj));
  if ((Wrd522.uLng) == 50)
    goto label_223;

DEFLABEL (label_222)
  ((Wrd513.pObj) [0]) = (Wrd505.Obj);

DEFLABEL (label_221)
  (Wrd526.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_10]));
  (Wrd529.Obj) = ((Wrd526.pObj) [0]);
  (Wrd530.uLng) = (OBJECT_TYPE (Wrd529.Obj));
  if ((Wrd530.uLng) == 50)
    goto label_220;

DEFLABEL (label_219)
  Wrd525 = Wrd529;

DEFLABEL (label_218)
  (* (--Rsp)) = (Wrd525.Obj);
  (Wrd537.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_10]));
  (Wrd538.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd547.Obj) = ((Wrd537.pObj) [0]);
  (Wrd548.uLng) = (OBJECT_TYPE (Wrd547.Obj));
  if ((Wrd548.uLng) == 50)
    goto label_217;

DEFLABEL (label_216)
  ((Wrd537.pObj) [0]) = (Wrd538.Obj);

DEFLABEL (label_215)
  (Wrd552.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd552.Obj);
  (Wrd553.Obj) = (Rsp [1]);
  (Wrd554.pObj) = (OBJECT_ADDRESS (Wrd553.Obj));
  (Wrd555.Obj) = ((Wrd554.pObj) [4]);
  (Wrd556.pObj) = (OBJECT_ADDRESS (Wrd555.Obj));
  (Wrd557.Obj) = ((Wrd556.pObj) [0]);
  (* (--Rsp)) = (Wrd557.Obj);
  ((Wrd556.pObj) [0]) = (Wrd552.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd565.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_10]));
  (Wrd573.Obj) = ((Wrd565.pObj) [0]);
  (Wrd574.uLng) = (OBJECT_TYPE (Wrd573.Obj));
  if ((Wrd574.uLng) == 50)
    goto label_214;

DEFLABEL (label_213)
  ((Wrd565.pObj) [0]) = (Wrd557.Obj);

DEFLABEL (label_212)
  (Wrd578.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_11]));
  (Wrd581.Obj) = ((Wrd578.pObj) [0]);
  (Wrd582.uLng) = (OBJECT_TYPE (Wrd581.Obj));
  if ((Wrd582.uLng) == 50)
    goto label_211;

DEFLABEL (label_210)
  Wrd577 = Wrd581;

DEFLABEL (label_209)
  (* (--Rsp)) = (Wrd577.Obj);
  (Wrd589.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_11]));
  (Wrd590.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd599.Obj) = ((Wrd589.pObj) [0]);
  (Wrd600.uLng) = (OBJECT_TYPE (Wrd599.Obj));
  if ((Wrd600.uLng) == 50)
    goto label_208;

DEFLABEL (label_207)
  ((Wrd589.pObj) [0]) = (Wrd590.Obj);

DEFLABEL (label_206)
  (Wrd604.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd604.Obj);
  (Wrd605.Obj) = (Rsp [1]);
  (Wrd606.pObj) = (OBJECT_ADDRESS (Wrd605.Obj));
  (Wrd607.Obj) = ((Wrd606.pObj) [3]);
  (Wrd608.pObj) = (OBJECT_ADDRESS (Wrd607.Obj));
  (Wrd609.Obj) = ((Wrd608.pObj) [0]);
  (* (--Rsp)) = (Wrd609.Obj);
  ((Wrd608.pObj) [0]) = (Wrd604.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd617.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_11]));
  (Wrd625.Obj) = ((Wrd617.pObj) [0]);
  (Wrd626.uLng) = (OBJECT_TYPE (Wrd625.Obj));
  if ((Wrd626.uLng) == 50)
    goto label_205;

DEFLABEL (label_204)
  ((Wrd617.pObj) [0]) = (Wrd609.Obj);

DEFLABEL (label_203)
  (Wrd630.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_12]));
  (Wrd633.Obj) = ((Wrd630.pObj) [0]);
  (Wrd634.uLng) = (OBJECT_TYPE (Wrd633.Obj));
  if ((Wrd634.uLng) == 50)
    goto label_202;

DEFLABEL (label_201)
  Wrd629 = Wrd633;

DEFLABEL (label_200)
  (* (--Rsp)) = (Wrd629.Obj);
  (Wrd641.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_12]));
  (Wrd642.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd651.Obj) = ((Wrd641.pObj) [0]);
  (Wrd652.uLng) = (OBJECT_TYPE (Wrd651.Obj));
  if ((Wrd652.uLng) == 50)
    goto label_199;

DEFLABEL (label_198)
  ((Wrd641.pObj) [0]) = (Wrd642.Obj);

DEFLABEL (label_197)
  (Wrd656.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd656.Obj);
  (Wrd657.Obj) = (Rsp [1]);
  (Wrd658.pObj) = (OBJECT_ADDRESS (Wrd657.Obj));
  (Wrd659.Obj) = ((Wrd658.pObj) [2]);
  (Wrd660.pObj) = (OBJECT_ADDRESS (Wrd659.Obj));
  (Wrd661.Obj) = ((Wrd660.pObj) [0]);
  (* (--Rsp)) = (Wrd661.Obj);
  ((Wrd660.pObj) [0]) = (Wrd656.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd669.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_12]));
  (Wrd677.Obj) = ((Wrd669.pObj) [0]);
  (Wrd678.uLng) = (OBJECT_TYPE (Wrd677.Obj));
  if ((Wrd678.uLng) == 50)
    goto label_196;

DEFLABEL (label_195)
  ((Wrd669.pObj) [0]) = (Wrd661.Obj);

DEFLABEL (label_194)
  Rvl = (current_block [OBJECT_11_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_196)
  if ((Wrd677.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_195;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_65])), (Wrd669.pObj), (Wrd661.Obj));

DEFLABEL (label_163)
  goto label_194;

DEFLABEL (label_199)
  if ((Wrd651.Obj) == (Wrd642.Obj))
    goto label_198;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_64])), (Wrd641.pObj), (Wrd642.Obj));

DEFLABEL (label_162)
  goto label_197;

DEFLABEL (label_202)
  if ((Wrd633.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_201;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_63])), (Wrd630.pObj));

DEFLABEL (label_161)
  (Wrd629.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_205)
  if ((Wrd625.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_204;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_62])), (Wrd617.pObj), (Wrd609.Obj));

DEFLABEL (label_160)
  goto label_203;

DEFLABEL (label_208)
  if ((Wrd599.Obj) == (Wrd590.Obj))
    goto label_207;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_61])), (Wrd589.pObj), (Wrd590.Obj));

DEFLABEL (label_159)
  goto label_206;

DEFLABEL (label_211)
  if ((Wrd581.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_210;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_60])), (Wrd578.pObj));

DEFLABEL (label_158)
  (Wrd577.Obj) = Rvl;
  goto label_209;

DEFLABEL (label_214)
  if ((Wrd573.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_213;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_59])), (Wrd565.pObj), (Wrd557.Obj));

DEFLABEL (label_157)
  goto label_212;

DEFLABEL (label_217)
  if ((Wrd547.Obj) == (Wrd538.Obj))
    goto label_216;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_58])), (Wrd537.pObj), (Wrd538.Obj));

DEFLABEL (label_156)
  goto label_215;

DEFLABEL (label_220)
  if ((Wrd529.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_219;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_57])), (Wrd526.pObj));

DEFLABEL (label_155)
  (Wrd525.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_223)
  if ((Wrd521.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_222;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_56])), (Wrd513.pObj), (Wrd505.Obj));

DEFLABEL (label_154)
  goto label_221;

DEFLABEL (label_226)
  if ((Wrd495.Obj) == (Wrd486.Obj))
    goto label_225;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_55])), (Wrd485.pObj), (Wrd486.Obj));

DEFLABEL (label_153)
  goto label_224;

DEFLABEL (label_229)
  if ((Wrd477.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_228;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_54])), (Wrd474.pObj));

DEFLABEL (label_152)
  (Wrd473.Obj) = Rvl;
  goto label_227;

DEFLABEL (label_232)
  if ((Wrd469.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_231;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_53])), (Wrd461.pObj), (Wrd453.Obj));

DEFLABEL (label_151)
  goto label_230;

DEFLABEL (label_235)
  if ((Wrd443.Obj) == (Wrd434.Obj))
    goto label_234;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_52])), (Wrd433.pObj), (Wrd434.Obj));

DEFLABEL (label_150)
  goto label_233;

DEFLABEL (label_238)
  if ((Wrd425.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_237;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_51])), (Wrd422.pObj));

DEFLABEL (label_149)
  (Wrd421.Obj) = Rvl;
  goto label_236;

DEFLABEL (label_241)
  if ((Wrd417.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_240;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_50])), (Wrd409.pObj), (Wrd401.Obj));

DEFLABEL (label_148)
  goto label_239;

DEFLABEL (label_244)
  if ((Wrd391.Obj) == (Wrd382.Obj))
    goto label_243;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_49])), (Wrd381.pObj), (Wrd382.Obj));

DEFLABEL (label_147)
  goto label_242;

DEFLABEL (label_247)
  if ((Wrd373.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_246;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_48])), (Wrd370.pObj));

DEFLABEL (label_146)
  (Wrd369.Obj) = Rvl;
  goto label_245;

DEFLABEL (label_250)
  if ((Wrd365.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_249;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_47])), (Wrd357.pObj), (Wrd349.Obj));

DEFLABEL (label_145)
  goto label_248;

DEFLABEL (label_253)
  if ((Wrd339.Obj) == (Wrd330.Obj))
    goto label_252;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_46])), (Wrd329.pObj), (Wrd330.Obj));

DEFLABEL (label_144)
  goto label_251;

DEFLABEL (label_256)
  if ((Wrd321.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_255;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_45])), (Wrd318.pObj));

DEFLABEL (label_143)
  (Wrd317.Obj) = Rvl;
  goto label_254;

DEFLABEL (label_259)
  if ((Wrd313.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_258;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_44])), (Wrd305.pObj), (Wrd297.Obj));

DEFLABEL (label_142)
  goto label_257;

DEFLABEL (label_262)
  if ((Wrd287.Obj) == (Wrd278.Obj))
    goto label_261;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_43])), (Wrd277.pObj), (Wrd278.Obj));

DEFLABEL (label_141)
  goto label_260;

DEFLABEL (label_265)
  if ((Wrd269.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_264;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_42])), (Wrd266.pObj));

DEFLABEL (label_140)
  (Wrd265.Obj) = Rvl;
  goto label_263;

DEFLABEL (label_268)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_267;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_41])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_139)
  goto label_266;

DEFLABEL (label_271)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_270;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_40])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_138)
  goto label_269;

DEFLABEL (label_274)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_273;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_39])), (Wrd214.pObj));

DEFLABEL (label_137)
  (Wrd213.Obj) = Rvl;
  goto label_272;

DEFLABEL (label_277)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_276;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_38])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_136)
  goto label_275;

DEFLABEL (label_280)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_279;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_37])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_135)
  goto label_278;

DEFLABEL (label_283)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_282;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_36])), (Wrd162.pObj));

DEFLABEL (label_134)
  (Wrd161.Obj) = Rvl;
  goto label_281;

DEFLABEL (label_286)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_285;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_35])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_133)
  goto label_284;

DEFLABEL (label_289)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_288;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_34])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_132)
  goto label_287;

DEFLABEL (label_292)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_291;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_33])), (Wrd110.pObj));

DEFLABEL (label_131)
  (Wrd109.Obj) = Rvl;
  goto label_290;

DEFLABEL (label_295)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_294;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_32])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_130)
  goto label_293;

DEFLABEL (label_298)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_297;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_31])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_129)
  goto label_296;

DEFLABEL (label_301)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_300;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_30])), (Wrd58.pObj));

DEFLABEL (label_128)
  (Wrd57.Obj) = Rvl;
  goto label_299;

DEFLABEL (label_304)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_303;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_29])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_127)
  goto label_302;

DEFLABEL (label_307)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_306;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_28])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_126)
  goto label_305;

DEFLABEL (label_310)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_309;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_27])), (Wrd6.pObj));

DEFLABEL (label_125)
  (Wrd5.Obj) = Rvl;
  goto label_308;

DEFLABEL (loop_170)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_11_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_73);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_72])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_74]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_11_71);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [0]) = (Wrd6.Obj);
  goto loop_15;

DEFLABEL (lambda_171)
  CLOSURE_HEADER (LABEL_11_72);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_82]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_81);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_13]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_312;
  Wrd5 = Wrd9;

DEFLABEL (label_311)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_88);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_87])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd18 = Wrd13;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_5]), 2);

DEFLABEL (label_312)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_86])), (Wrd6.pObj));

DEFLABEL (label_164)
  (Wrd5.Obj) = Rvl;
  goto label_311;

DEFLABEL (lambda_172)
  CLOSURE_HEADER (LABEL_11_77);

DEFLABEL (lambda_114)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_84]));

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_11_83);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_173)
DEFLABEL (lambda_110)
  INTERRUPT_CHECK (26, LABEL_11_76);
  (Wrd5.Obj) = (current_block [OBJECT_11_4]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_85]));

DEFLABEL (lambda_174)
  CLOSURE_HEADER (LABEL_11_87);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_84]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_92);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_91])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_93]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_90);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_95);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_94])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_96]));

DEFLABEL (lambda_175)
  CLOSURE_HEADER (LABEL_11_91);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_98]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_97);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_176)
  CLOSURE_HEADER (LABEL_11_94);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_100);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_99])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_101]));

DEFLABEL (lambda_177)
  CLOSURE_HEADER (LABEL_11_99);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_103]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_102);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define TAG_12_6 1
#define LABEL_12_8 7
#define TAG_12_9 2
#define LABEL_12_10 9
#define LABEL_12_20 11
#define LABEL_12_11 13
#define LABEL_12_12 15
#define LABEL_12_14 17
#define LABEL_12_15 19
#define LABEL_12_16 21
#define LABEL_12_18 23
#define TAG_12_19 10
#define LABEL_12_29 25
#define LABEL_12_22 27
#define LABEL_12_26 29
#define LABEL_12_28 31
#define LABEL_12_30 33
#define ENVIRONMENT_LABEL_12_3 71
#define DEBUGGING_LABEL_12_2 70
#define OBJECT_12_7 69
#define OBJECT_12_6 68
#define OBJECT_12_5 67
#define OBJECT_12_4 66
#define OBJECT_12_3 65
#define OBJECT_12_2 64
#define OBJECT_12_1 63
#define OBJECT_12_0 62
#define EXECUTE_CACHE_12_34 35
#define EXECUTE_CACHE_12_33 37
#define EXECUTE_CACHE_12_32 39
#define EXECUTE_CACHE_12_31 41
#define EXECUTE_CACHE_12_27 43
#define EXECUTE_CACHE_12_25 45
#define EXECUTE_CACHE_12_24 47
#define EXECUTE_CACHE_12_23 49
#define EXECUTE_CACHE_12_21 51
#define EXECUTE_CACHE_12_17 53
#define EXECUTE_CACHE_12_13 55
#define EXECUTE_CACHE_12_7 57
#define FREE_REFERENCE_12_1 60
#define FREE_REFERENCE_12_0 61
#define FREE_REFERENCES_LABEL_12_0 34
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_12_4);
      goto bind_abort_restart_16;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_22;

    case 2:
      current_block = (Rpc - LABEL_12_8);
      goto lambda_23;

    case 3:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_12_20);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_12_12);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_12_14);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_12_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_12_16);
      goto lambda_6;

    case 10:
      current_block = (Rpc - LABEL_12_18);
      goto lambda_24;

    case 11:
      current_block = (Rpc - LABEL_12_29);
      goto label_19;

    case 12:
      current_block = (Rpc - LABEL_12_22);
      goto continuation_0;

    case 13:
      current_block = (Rpc - LABEL_12_26);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_12_28);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_12_30);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_abort_restart_21)
DEFLABEL (bind_abort_restart_16)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_12_5);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x102, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_8])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_24]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_23]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd7.Obj) = (current_block [OBJECT_12_6]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_26;

DEFLABEL (label_27)
  (Wrd9.Obj) = (current_block [OBJECT_12_5]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_26)
DEFLABEL (label_30)
  (Wrd8.Obj) = (current_block [OBJECT_12_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_32]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_18])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_29;
  Wrd18 = Wrd22;

DEFLABEL (label_28)
  (Rsp [3]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_21]));

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_20])), (Wrd19.pObj));

DEFLABEL (label_18)
  (Wrd18.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_12_8);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_12_1]))
    goto label_32;
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_31;

DEFLABEL (label_32)
  (Wrd16.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_31)
DEFLABEL (label_33)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_25]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_12_14);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_25)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_12_16);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_27]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_26);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_33]));

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_12_18);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_35;
  Wrd11 = Wrd15;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_30]))));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_31]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_12_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_34]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_12_28);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_29])), (Wrd12.pObj));

DEFLABEL (label_19)
  (Wrd11.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 12
#define DEBUGGING_LABEL_13_2 11
#define EXECUTE_CACHE_13_6 7
#define FREE_REFERENCE_13_0 10
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto cmdl_abort_restartP_0;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_abort_restartP_4)
DEFLABEL (cmdl_abort_restartP_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_5 3
#define LABEL_14_4 5
#define LABEL_14_6 7
#define LABEL_14_8 9
#define ENVIRONMENT_LABEL_14_3 17
#define DEBUGGING_LABEL_14_2 16
#define OBJECT_14_0 15
#define EXECUTE_CACHE_14_7 11
#define FREE_REFERENCE_14_0 14
#define FREE_REFERENCES_LABEL_14_0 10
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_14_4);
      goto nearest_cmdl_1;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nearest_cmdl_6)
DEFLABEL (nearest_cmdl_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_9;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);

DEFLABEL (label_9)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_8;
  Wrd12 = Wrd16;

DEFLABEL (label_7)
  Rvl = (Wrd12.Obj);
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_8])), (Wrd13.pObj));

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_6])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define ENVIRONMENT_LABEL_15_3 15
#define DEBUGGING_LABEL_15_2 14
#define EXECUTE_CACHE_15_7 9
#define FREE_REFERENCE_15_1 12
#define FREE_REFERENCE_15_0 13
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_15_4);
      goto nearest_cmdl_port_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nearest_cmdl_port_6)
DEFLABEL (nearest_cmdl_port_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (label_7)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_9;
  Wrd14 = Wrd18;

DEFLABEL (label_8)
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd15.pObj));

DEFLABEL (label_4)
  (Wrd14.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 13
#define DEBUGGING_LABEL_16_2 12
#define OBJECT_16_0 11
#define EXECUTE_CACHE_16_6 7
#define FREE_REFERENCE_16_0 10
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto nearest_cmdl_level_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nearest_cmdl_level_5)
DEFLABEL (nearest_cmdl_level_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_16_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 12
#define DEBUGGING_LABEL_17_2 11
#define EXECUTE_CACHE_17_6 7
#define FREE_REFERENCE_17_0 10
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto nearest_cmdl_batch_modeP_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nearest_cmdl_batch_modeP_5)
DEFLABEL (nearest_cmdl_batch_modeP_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define LABEL_18_8 9
#define ENVIRONMENT_LABEL_18_3 18
#define DEBUGGING_LABEL_18_2 17
#define OBJECT_18_1 16
#define OBJECT_18_0 15
#define EXECUTE_CACHE_18_9 11
#define EXECUTE_CACHE_18_6 13
#define FREE_REFERENCES_LABEL_18_0 10
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd6;
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
      goto cmdl_batch_modeP_3;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_batch_modeP_7)
DEFLABEL (cmdl_batch_modeP_3)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_11;
  if (Rvl == (current_block [OBJECT_18_0]))
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_18_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 0);

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd15.Obj) = (current_block [OBJECT_18_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_7 5
#define LABEL_19_5 7
#define LABEL_19_12 9
#define LABEL_19_13 11
#define LABEL_19_14 13
#define LABEL_19_15 15
#define LABEL_19_16 17
#define LABEL_19_17 19
#define LABEL_19_18 21
#define LABEL_19_19 23
#define LABEL_19_9 25
#define TAG_19_10 11
#define LABEL_19_20 27
#define LABEL_19_21 29
#define LABEL_19_22 31
#define LABEL_19_23 33
#define LABEL_19_24 35
#define ENVIRONMENT_LABEL_19_3 56
#define DEBUGGING_LABEL_19_2 55
#define OBJECT_19_9 54
#define OBJECT_19_8 53
#define OBJECT_19_7 52
#define OBJECT_19_6 51
#define OBJECT_19_5 50
#define OBJECT_19_4 49
#define OBJECT_19_3 48
#define OBJECT_19_2 47
#define OBJECT_19_1 46
#define OBJECT_19_0 45
#define EXECUTE_CACHE_19_25 37
#define EXECUTE_CACHE_19_11 39
#define EXECUTE_CACHE_19_8 41
#define EXECUTE_CACHE_19_6 43
#define FREE_REFERENCES_LABEL_19_0 36
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd98;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd132;
  machine_word Wrd126;
  machine_word Wrd127;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_19_4);
      goto parse_operations_list_20;

    case 1:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_19_12);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_19_13);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_19_14);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_19_15);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_19_16);
      goto continuation_15;

    case 8:
      current_block = (Rpc - LABEL_19_17);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_19_18);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_19_19);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_19_9);
      goto lambda_34;

    case 12:
      current_block = (Rpc - LABEL_19_20);
      goto label_22;

    case 13:
      current_block = (Rpc - LABEL_19_21);
      goto label_26;

    case 14:
      current_block = (Rpc - LABEL_19_22);
      goto label_23;

    case 15:
      current_block = (Rpc - LABEL_19_23);
      goto label_24;

    case 16:
      current_block = (Rpc - LABEL_19_24);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_operations_list_33)
DEFLABEL (parse_operations_list_20)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;

DEFLABEL (label_35)
  (Wrd7.Obj) = (Rsp [0]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_9])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (label_36)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_7);
  goto label_35;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_19_9);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_45;

DEFLABEL (label_44)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_19_9]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19_16);

DEFLABEL (label_43)
  (Wrd86.Obj) = (Rsp [1]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_42;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd83.Obj) = ((Wrd85.pObj) [1]);

DEFLABEL (label_41)
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_40;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [0]);
  (* (--Rsp)) = (Wrd93.Obj);

DEFLABEL (label_39)
  (Wrd102.Obj) = (Rsp [2]);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd103.uLng) == 1))
    goto label_38;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd99.Obj) = ((Wrd101.pObj) [0]);

DEFLABEL (label_37)
  (Wrd108.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd111.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd111.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

DEFLABEL (label_29)
  (Wrd99.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_17]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_27)
  (Wrd83.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_45)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_65;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_64)
  (Wrd73.Obj) = (current_block [OBJECT_19_4]);
  (Wrd76.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd76.Lng))))
    goto label_63;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd73.Obj));
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd28.Obj) == (Wrd30.Obj))
    goto label_62;

DEFLABEL (label_61)
  (Wrd31.Obj) = (current_block [OBJECT_19_6]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd41.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd41.Lng)))
    goto label_46;
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 2);

DEFLABEL (label_46)
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd31.Obj));
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_48;
  (Wrd33.Obj) = (current_block [OBJECT_19_8]);
  goto label_47;

DEFLABEL (label_48)
  (Wrd33.Obj) = (current_block [OBJECT_19_7]);

DEFLABEL (label_47)
DEFLABEL (label_60)
  Rsp = (& (Rsp [3]));
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_44;

DEFLABEL (label_59)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_58;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_57)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_44;
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_56;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_55)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_54;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (* (--Rsp)) = (Wrd66.Obj);

DEFLABEL (label_53)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_19_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd120.Obj) = (Rsp [1]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if (! ((Wrd121.uLng) == 1))
    goto label_52;
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd120.Obj));
  (Wrd117.Obj) = ((Wrd119.pObj) [1]);

DEFLABEL (label_51)
  (Wrd128.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd128.uLng) == 1))
    goto label_50;
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd126.Obj) = ((Wrd127.pObj) [1]);

DEFLABEL (label_49)
  if ((Wrd126.Obj) == (current_block [OBJECT_19_2]))
    goto label_43;
  goto label_44;

DEFLABEL (label_50)
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_31)
  (Wrd126.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_30)
  (Wrd117.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_24]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_23]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_24)
  (Wrd56.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_22]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_23)
  (Wrd43.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_62)
  Rsp = (& (Rsp [2]));
  goto label_59;

DEFLABEL (label_63)
  (Wrd78.Obj) = (Rsp [0]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_21]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_62;

DEFLABEL (label_65)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_20]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
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
rep_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_20_4);
      goto cmdl_local_operation_3;

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

DEFLABEL (cmdl_local_operation_6)
DEFLABEL (cmdl_local_operation_3)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_7;
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_7)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd10.pObj) [1]);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_8 9
#define ENVIRONMENT_LABEL_21_3 16
#define DEBUGGING_LABEL_21_2 15
#define EXECUTE_CACHE_21_9 11
#define EXECUTE_CACHE_21_7 13
#define FREE_REFERENCES_LABEL_21_0 10
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_21_4);
      goto cmdl_operation_7;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto loop_5;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_operation_10)
DEFLABEL (cmdl_operation_7)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_5;

DEFLABEL (loop_11)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_21_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto loop_5;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_8 9
#define LABEL_22_10 11
#define LABEL_22_11 13
#define LABEL_22_13 15
#define LABEL_22_9 17
#define LABEL_22_15 19
#define LABEL_22_16 21
#define LABEL_22_17 23
#define ENVIRONMENT_LABEL_22_3 35
#define DEBUGGING_LABEL_22_2 34
#define OBJECT_22_2 33
#define OBJECT_22_1 32
#define OBJECT_22_0 31
#define EXECUTE_CACHE_22_14 25
#define EXECUTE_CACHE_22_12 27
#define EXECUTE_CACHE_22_7 29
#define FREE_REFERENCES_LABEL_22_0 24
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_22_4);
      goto cmdl_operation_names_17;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto cmdl_loop_15;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto loop_13;

    case 4:
      current_block = (Rpc - LABEL_22_10);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_22_11);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_22_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_22_15);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_22_16);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_22_17);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_operation_names_25)
DEFLABEL (cmdl_operation_names_17)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  goto cmdl_loop_15;

DEFLABEL (cmdl_loop_26)
DEFLABEL (cmdl_loop_15)
  INTERRUPT_CHECK (26, LABEL_22_5);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (* (--Rsp)) = Rvl;
  goto loop_13;

DEFLABEL (loop_27)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_22_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_29;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  goto cmdl_loop_15;

DEFLABEL (label_28)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_41;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_40)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_39;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_22_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd7.Obj) = (Rsp [1]);

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_31;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_30)
  (Rsp [0]) = (Wrd8.Obj);
  goto loop_13;

DEFLABEL (label_31)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 1);

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_37;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_36)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_35;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_34)
  (Wrd35.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  goto label_32;

DEFLABEL (label_35)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_16]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

DEFLABEL (label_23)
  (Wrd26.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

DEFLABEL (label_22)
  (Wrd17.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

DEFLABEL (label_19)
  (Wrd15.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 12
#define DEBUGGING_LABEL_23_2 11
#define EXECUTE_CACHE_23_6 7
#define FREE_REFERENCE_23_0 10
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_23_4);
      goto Z___cmdl_message_1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___cmdl_message_5)
DEFLABEL (Z___cmdl_message_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 30))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (label_6)
  Rvl = (Wrd5.Obj);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_10;
  Wrd12 = Wrd16;

DEFLABEL (label_9)
  Rvl = (Wrd12.Obj);
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_5])), (Wrd13.pObj));

DEFLABEL (label_3)
  (Wrd12.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define TAG_24_6 1
#define LABEL_24_7 7
#define LABEL_24_9 9
#define TAG_24_10 3
#define LABEL_24_12 11
#define TAG_24_13 4
#define LABEL_24_15 13
#define LABEL_24_17 15
#define ENVIRONMENT_LABEL_24_3 30
#define DEBUGGING_LABEL_24_2 29
#define OBJECT_24_1 28
#define OBJECT_24_0 27
#define EXECUTE_CACHE_24_18 17
#define EXECUTE_CACHE_24_16 19
#define EXECUTE_CACHE_24_14 21
#define EXECUTE_CACHE_24_11 23
#define EXECUTE_CACHE_24_8 25
#define FREE_REFERENCES_LABEL_24_0 16
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_24_4);
      goto cmdl_message_strings_7;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_24_9);
      goto lambda_12;

    case 4:
      current_block = (Rpc - LABEL_24_12);
      goto lambda_13;

    case 5:
      current_block = (Rpc - LABEL_24_15);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_24_17);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_message_strings_10)
DEFLABEL (cmdl_message_strings_7)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_24_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_9])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_24_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_12])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_14]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_24_12);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_17);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_7 7
#define LABEL_25_9 9
#define TAG_25_10 3
#define ENVIRONMENT_LABEL_25_3 17
#define DEBUGGING_LABEL_25_2 16
#define OBJECT_25_0 15
#define EXECUTE_CACHE_25_11 11
#define EXECUTE_CACHE_25_8 13
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_25_4);
      goto cmdl_message_active_4;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_message_active_7)
DEFLABEL (cmdl_message_active_4)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_9])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_25_9);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define LABEL_26_10 9
#define LABEL_26_9 11
#define LABEL_26_12 13
#define LABEL_26_15 15
#define LABEL_26_6 17
#define LABEL_26_16 19
#define LABEL_26_17 21
#define LABEL_26_13 23
#define TAG_26_14 10
#define LABEL_26_18 25
#define TAG_26_19 11
#define ENVIRONMENT_LABEL_26_3 40
#define DEBUGGING_LABEL_26_2 39
#define OBJECT_26_3 38
#define OBJECT_26_2 37
#define OBJECT_26_1 36
#define OBJECT_26_0 35
#define EXECUTE_CACHE_26_20 27
#define EXECUTE_CACHE_26_11 29
#define EXECUTE_CACHE_26_8 31
#define FREE_REFERENCE_26_0 34
#define FREE_REFERENCES_LABEL_26_0 26
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_26_4);
      goto cmdl_message_append_18;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto do_loop_9;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_26_10);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_26_12);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_26_15);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_26_16);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_26_17);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_26_13);
      goto lambda_29;

    case 11:
      current_block = (Rpc - LABEL_26_18);
      goto lambda_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_message_append_27)
DEFLABEL (cmdl_message_append_18)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_9;

DEFLABEL (do_loop_28)
DEFLABEL (do_loop_9)
  INTERRUPT_CHECK (26, LABEL_26_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_32;
  (Wrd7.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_31;

DEFLABEL (label_32)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_31)
DEFLABEL (label_50)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  Rsp = (& (Rsp [2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_42;
  Wrd15 = Wrd19;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_26_9);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_36;
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_35;
  Wrd9 = Wrd13;

DEFLABEL (label_34)
  Rvl = (Wrd9.Obj);

DEFLABEL (label_33)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_15])), (Wrd10.pObj));

DEFLABEL (label_22)
  (Wrd9.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  if (! ((Wrd7.uLng) == 1))
    goto label_40;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_39)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_38;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 1)
    goto label_37;
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 1);

DEFLABEL (label_37)
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  Rvl = ((Wrd27.pObj) [0]);
  goto label_33;

DEFLABEL (label_38)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_13])));
  Rhp += 1;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  Wrd34 = Wrd33;
  (Wrd35.Obj) = (Rsp [0]);
  ((Wrd34.pObj) [2]) = (Wrd35.Obj);
  Rvl = (Wrd32.Obj);
  goto label_33;

DEFLABEL (label_40)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_23)
  (Wrd15.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_10])), (Wrd16.pObj));

DEFLABEL (label_20)
  (Wrd15.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_49;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_48)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_26_6);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_47;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  ((Wrd17.pObj) [0]) = Rvl;

DEFLABEL (label_46)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_45;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_44)
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_9;

DEFLABEL (label_45)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_24)
  (Wrd6.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 2);

DEFLABEL (label_25)
  goto label_46;

DEFLABEL (label_49)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_26_13);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_18])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_20]));

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_26_18);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 9
#define DEBUGGING_LABEL_27_2 8
#define FREE_REFERENCE_27_0 7
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto cmdl_message_null_0;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_message_null_4)
DEFLABEL (cmdl_message_null_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 5
#define DEBUGGING_LABEL_28_2 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto Z__cmdl_message_null_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__cmdl_message_null_3)
DEFLABEL (Z__cmdl_message_null_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_8 7
#define LABEL_29_6 9
#define ENVIRONMENT_LABEL_29_3 19
#define DEBUGGING_LABEL_29_2 18
#define OBJECT_29_0 17
#define EXECUTE_CACHE_29_9 11
#define EXECUTE_CACHE_29_7 13
#define FREE_REFERENCE_29_0 16
#define FREE_REFERENCES_LABEL_29_0 10
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_29_4);
      goto cmdl_interrupt_breakpoint_4;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_29_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_interrupt_breakpoint_8)
DEFLABEL (cmdl_interrupt_breakpoint_4)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_9)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_10)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_12;
  Wrd11 = Wrd15;

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_8])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_8 7
#define LABEL_30_6 9
#define ENVIRONMENT_LABEL_30_3 19
#define DEBUGGING_LABEL_30_2 18
#define OBJECT_30_0 17
#define EXECUTE_CACHE_30_9 11
#define EXECUTE_CACHE_30_7 13
#define FREE_REFERENCE_30_0 16
#define FREE_REFERENCES_LABEL_30_0 10
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_30_4);
      goto cmdl_interrupt_abort_nearest_4;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_30_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_interrupt_abort_nearest_8)
DEFLABEL (cmdl_interrupt_abort_nearest_4)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_9)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_10)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_12;
  Wrd11 = Wrd15;

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_8])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_8 7
#define LABEL_31_6 9
#define ENVIRONMENT_LABEL_31_3 19
#define DEBUGGING_LABEL_31_2 18
#define OBJECT_31_0 17
#define EXECUTE_CACHE_31_9 11
#define EXECUTE_CACHE_31_7 13
#define FREE_REFERENCE_31_0 16
#define FREE_REFERENCES_LABEL_31_0 10
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_31_4);
      goto cmdl_interrupt_abort_previous_4;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_31_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_31_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_interrupt_abort_previous_8)
DEFLABEL (cmdl_interrupt_abort_previous_4)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_9)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_10)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_12;
  Wrd11 = Wrd15;

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_8])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_8 7
#define LABEL_32_6 9
#define ENVIRONMENT_LABEL_32_3 19
#define DEBUGGING_LABEL_32_2 18
#define OBJECT_32_0 17
#define EXECUTE_CACHE_32_9 11
#define EXECUTE_CACHE_32_7 13
#define FREE_REFERENCE_32_0 16
#define FREE_REFERENCES_LABEL_32_0 10
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_32_4);
      goto cmdl_interrupt_abort_top_level_4;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_32_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_32_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cmdl_interrupt_abort_top_level_8)
DEFLABEL (cmdl_interrupt_abort_top_level_4)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_9)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_10)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_12;
  Wrd11 = Wrd15;

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_8])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_7 5
#define LABEL_33_5 7
#define ENVIRONMENT_LABEL_33_3 19
#define DEBUGGING_LABEL_33_2 18
#define OBJECT_33_2 17
#define OBJECT_33_1 16
#define OBJECT_33_0 15
#define EXECUTE_CACHE_33_9 9
#define EXECUTE_CACHE_33_8 11
#define EXECUTE_CACHE_33_6 13
#define FREE_REFERENCES_LABEL_33_0 8
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_33_4);
      goto abort__nearest_6;

    case 1:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (abort__nearest_9)
DEFLABEL (abort__nearest_6)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_7);

DEFLABEL (label_13)
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  if ((Wrd9.Obj) == (current_block [OBJECT_33_1]))
    goto label_11;
  Wrd11 = Wrd9;
  goto label_10;

DEFLABEL (label_11)
  (Wrd11.Obj) = (current_block [OBJECT_33_2]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_9 5
#define LABEL_34_5 7
#define LABEL_34_6 9
#define LABEL_34_12 11
#define LABEL_34_7 13
#define ENVIRONMENT_LABEL_34_3 29
#define DEBUGGING_LABEL_34_2 28
#define OBJECT_34_4 27
#define OBJECT_34_3 26
#define OBJECT_34_2 25
#define OBJECT_34_1 24
#define OBJECT_34_0 23
#define EXECUTE_CACHE_34_13 15
#define EXECUTE_CACHE_34_11 17
#define EXECUTE_CACHE_34_10 19
#define EXECUTE_CACHE_34_8 21
#define FREE_REFERENCES_LABEL_34_0 14
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd9;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_34_4);
      goto abort__previous_11;

    case 1:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_34_12);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (abort__previous_15)
DEFLABEL (abort__previous_11)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_25;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_24)
  (Wrd17.Obj) = (current_block [OBJECT_34_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_9);
  (* (--Rsp)) = Rvl;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd9.uLng) == 1)
    goto label_23;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 1)
    goto label_16;
  (Wrd12.Obj) = (current_block [OBJECT_34_1]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_18;

DEFLABEL (label_17)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (label_18)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_22)
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_34_2]))
    goto label_20;
  Wrd7 = Wrd5;
  goto label_19;

DEFLABEL (label_20)
  (Wrd7.Obj) = (current_block [OBJECT_34_3]);

DEFLABEL (label_19)
DEFLABEL (label_21)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

DEFLABEL (label_23)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_17;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd23.Obj);
  goto label_22;

DEFLABEL (label_25)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_4]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_9 5
#define LABEL_35_5 7
#define LABEL_35_6 9
#define LABEL_35_7 11
#define LABEL_35_13 13
#define LABEL_35_14 15
#define ENVIRONMENT_LABEL_35_3 31
#define DEBUGGING_LABEL_35_2 30
#define OBJECT_35_4 29
#define OBJECT_35_3 28
#define OBJECT_35_2 27
#define OBJECT_35_1 26
#define OBJECT_35_0 25
#define EXECUTE_CACHE_35_12 17
#define EXECUTE_CACHE_35_11 19
#define EXECUTE_CACHE_35_10 21
#define EXECUTE_CACHE_35_8 23
#define FREE_REFERENCES_LABEL_35_0 16
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_35_4);
      goto abort__top_level_13;

    case 1:
      current_block = (Rpc - LABEL_35_9);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_35_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_35_13);
      goto loop_9;

    case 6:
      current_block = (Rpc - LABEL_35_14);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (abort__top_level_17)
DEFLABEL (abort__top_level_13)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_35_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_6);
  (* (--Rsp)) = Rvl;
  goto loop_9;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_22)
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_35_2]))
    goto label_20;
  Wrd7 = Wrd5;
  goto label_19;

DEFLABEL (label_20)
  (Wrd7.Obj) = (current_block [OBJECT_35_3]);

DEFLABEL (label_19)
DEFLABEL (label_21)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_11]));

DEFLABEL (loop_18)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_35_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_27;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_26)
  (Wrd17.Obj) = (current_block [OBJECT_35_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_35_9);
  (* (--Rsp)) = Rvl;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd9.uLng) == 1))
    goto label_23;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_23)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 1)
    goto label_24;
  (Wrd12.Obj) = (current_block [OBJECT_35_1]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (label_24)
  Rsp = (& (Rsp [1]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_25;
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_25)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_22;

DEFLABEL (label_27)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_4]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_7 9
#define LABEL_36_8 11
#define ENVIRONMENT_LABEL_36_3 18
#define DEBUGGING_LABEL_36_2 17
#define OBJECT_36_1 16
#define OBJECT_36_0 15
#define EXECUTE_CACHE_36_9 13
#define FREE_REFERENCES_LABEL_36_0 12
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_36_4);
      goto find_restarts_8;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_36_7);
      goto loop_6;

    case 4:
      current_block = (Rpc - LABEL_36_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_restarts_13)
DEFLABEL (find_restarts_8)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (loop_14)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_36_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_16;

DEFLABEL (label_15)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_20;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Wrd22.Obj) = (Rsp [1]);
  if ((Wrd22.Obj) == Rvl)
    goto label_15;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_18;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd23.Obj);
  goto loop_6;

DEFLABEL (label_18)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_11)
  (Wrd23.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define ENVIRONMENT_LABEL_37_3 14
#define DEBUGGING_LABEL_37_2 13
#define EXECUTE_CACHE_37_8 9
#define EXECUTE_CACHE_37_6 11
#define FREE_REFERENCES_LABEL_37_0 8
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto invoke_abort_3;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_abort_6)
DEFLABEL (invoke_abort_3)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_7)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_5 3
#define LABEL_38_4 5
#define LABEL_38_10 7
#define LABEL_38_11 9
#define LABEL_38_6 11
#define LABEL_38_13 13
#define LABEL_38_15 15
#define LABEL_38_17 17
#define LABEL_38_7 19
#define TAG_38_8 8
#define LABEL_38_9 21
#define LABEL_38_21 23
#define LABEL_38_14 25
#define LABEL_38_19 27
#define LABEL_38_24 29
#define LABEL_38_20 31
#define ENVIRONMENT_LABEL_38_3 61
#define DEBUGGING_LABEL_38_2 60
#define OBJECT_38_8 59
#define OBJECT_38_7 58
#define OBJECT_38_6 57
#define OBJECT_38_5 56
#define OBJECT_38_4 55
#define OBJECT_38_3 54
#define OBJECT_38_2 53
#define OBJECT_38_1 52
#define OBJECT_38_0 51
#define EXECUTE_CACHE_38_25 33
#define EXECUTE_CACHE_38_23 35
#define EXECUTE_CACHE_38_22 37
#define EXECUTE_CACHE_38_18 39
#define EXECUTE_CACHE_38_16 41
#define EXECUTE_CACHE_38_12 43
#define FREE_REFERENCE_38_4 46
#define FREE_REFERENCE_38_3 47
#define FREE_REFERENCE_38_2 48
#define FREE_REFERENCE_38_1 49
#define FREE_REFERENCE_38_0 50
#define FREE_REFERENCES_LABEL_38_0 32
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_38_4);
      goto make_repl_20;

    case 2:
      current_block = (Rpc - LABEL_38_10);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_38_11);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_38_13);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_38_15);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_38_17);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_38_7);
      goto lambda_4;

    case 9:
      current_block = (Rpc - LABEL_38_9);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_38_21);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_38_14);
      goto continuation_19;

    case 12:
      current_block = (Rpc - LABEL_38_19);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_38_24);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_38_20);
      goto lambda_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_repl_28)
DEFLABEL (make_repl_20)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_44;
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_43)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_7])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd20 = Wrd19;
  (Wrd21.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_42;
  Wrd25 = Wrd29;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_40;
  Wrd32 = Wrd36;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd38.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd39.Obj);
  goto lambda_4;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_38_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_38_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_38;
  Wrd11 = Wrd15;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [12]);
  if ((Wrd17.Obj) == (current_block [OBJECT_38_1]))
    goto label_32;
  (* (--Rsp)) = (Wrd17.Obj);
  goto label_31;

DEFLABEL (label_32)
  (Wrd21.Obj) = (current_block [OBJECT_38_3]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_31)
DEFLABEL (label_36)
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto lambda_4;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_38_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  if ((Wrd5.Obj) == (current_block [OBJECT_38_1]))
    goto label_34;
  Wrd7 = Wrd5;
  goto label_33;

DEFLABEL (label_34)
  (Wrd7.Obj) = (current_block [OBJECT_38_7]);

DEFLABEL (label_33)
DEFLABEL (label_35)
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_23]));

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_21])), (Wrd12.pObj));

DEFLABEL (label_26)
  (Wrd11.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_11])), (Wrd33.pObj));

DEFLABEL (label_23)
  (Wrd32.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_10])), (Wrd26.pObj));

DEFLABEL (label_22)
  (Wrd25.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_43;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_38_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_51;
  Wrd7 = Wrd11;

DEFLABEL (label_50)
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_3]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_49;
  Wrd17 = Wrd21;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (Rsp [7]);
  if ((Wrd23.Obj) == (current_block [OBJECT_38_1]))
    goto label_46;
  (* (--Rsp)) = (Wrd23.Obj);
  goto label_45;

DEFLABEL (label_46)
  (Wrd26.Obj) = (current_block [OBJECT_38_2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_45)
DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_16]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_38_14);
  (Rsp [6]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_22]));

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_15])), (Wrd18.pObj));

DEFLABEL (label_25)
  (Wrd17.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_13])), (Wrd8.pObj));

DEFLABEL (label_24)
  (Wrd7.Obj) = Rvl;
  goto label_50;

DEFLABEL (lambda_29)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_38_7);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == (current_block [OBJECT_38_3]))
    goto label_52;
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38_5]);
  (Rsp [4]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_52)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;

DEFLABEL (label_53)
  (Wrd15.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd15.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [2]);
  (Rsp [4]) = (Wrd16.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_54)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_38_4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_17);
  goto label_53;

DEFLABEL (lambda_30)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_38_20);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_56;

DEFLABEL (label_55)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_38_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_38_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_25]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_38_24);
  goto label_55;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 6
#define DEBUGGING_LABEL_39_2 5
#define OBJECT_39_0 4
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_39_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define ENVIRONMENT_LABEL_40_3 19
#define DEBUGGING_LABEL_40_2 18
#define OBJECT_40_2 17
#define OBJECT_40_1 16
#define OBJECT_40_0 15
#define EXECUTE_CACHE_40_9 9
#define EXECUTE_CACHE_40_8 11
#define EXECUTE_CACHE_40_6 13
#define FREE_REFERENCES_LABEL_40_0 8
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_40_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_9)
  (Wrd19.Obj) = (Rsp [0]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd21.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Rsp [2]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

DEFLABEL (label_8)
  (Wrd24.Obj) = (current_block [OBJECT_40_2]);
  (Rsp [1]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (label_10)
  (Wrd15.Obj) = (current_block [OBJECT_40_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define ENVIRONMENT_LABEL_41_3 15
#define DEBUGGING_LABEL_41_2 14
#define OBJECT_41_2 13
#define OBJECT_41_1 12
#define OBJECT_41_0 11
#define EXECUTE_CACHE_41_7 7
#define EXECUTE_CACHE_41_6 9
#define FREE_REFERENCES_LABEL_41_0 6
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_41_4);
      goto push_repl_8;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (push_repl_11)
DEFLABEL (push_repl_8)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (Rsp [3]);
  if ((Wrd7.Obj) == (current_block [OBJECT_41_0]))
    goto label_13;
  Wrd9 = Wrd7;
  goto label_12;

DEFLABEL (label_13)
  (Wrd9.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
DEFLABEL (label_20)
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  if ((Wrd10.Obj) == (current_block [OBJECT_41_0]))
    goto label_15;
  Wrd12 = Wrd10;
  goto label_14;

DEFLABEL (label_15)
  (Wrd12.Obj) = (current_block [OBJECT_41_1]);

DEFLABEL (label_14)
DEFLABEL (label_19)
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  if ((Wrd13.Obj) == (current_block [OBJECT_41_0]))
    goto label_17;
  Wrd15 = Wrd13;
  goto label_16;

DEFLABEL (label_17)
  (Wrd15.Obj) = (current_block [OBJECT_41_2]);

DEFLABEL (label_16)
DEFLABEL (label_18)
  (Rsp [5]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_8 5
#define LABEL_42_9 7
#define LABEL_42_11 9
#define LABEL_42_6 11
#define LABEL_42_13 13
#define LABEL_42_5 15
#define LABEL_42_15 17
#define LABEL_42_16 19
#define LABEL_42_18 21
#define LABEL_42_17 23
#define LABEL_42_21 25
#define LABEL_42_19 27
#define LABEL_42_23 29
#define LABEL_42_24 31
#define LABEL_42_26 33
#define LABEL_42_29 35
#define LABEL_42_30 37
#define LABEL_42_27 39
#define LABEL_42_31 41
#define ENVIRONMENT_LABEL_42_3 71
#define DEBUGGING_LABEL_42_2 70
#define OBJECT_42_4 69
#define OBJECT_42_3 68
#define OBJECT_42_2 67
#define OBJECT_42_1 66
#define OBJECT_42_0 65
#define EXECUTE_CACHE_42_33 43
#define EXECUTE_CACHE_42_32 45
#define EXECUTE_CACHE_42_28 47
#define EXECUTE_CACHE_42_25 49
#define EXECUTE_CACHE_42_22 51
#define EXECUTE_CACHE_42_20 53
#define EXECUTE_CACHE_42_14 55
#define EXECUTE_CACHE_42_12 57
#define EXECUTE_CACHE_42_10 59
#define EXECUTE_CACHE_42_7 61
#define FREE_REFERENCE_42_0 64
#define FREE_REFERENCES_LABEL_42_0 42
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
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
      current_block = (Rpc - LABEL_42_4);
      goto repl_driver_25;

    case 1:
      current_block = (Rpc - LABEL_42_8);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_42_9);
      goto label_30;

    case 3:
      current_block = (Rpc - LABEL_42_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_42_6);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_42_13);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_42_15);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_42_16);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_42_18);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_42_17);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_42_21);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_42_19);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_42_23);
      goto do_loop_22;

    case 14:
      current_block = (Rpc - LABEL_42_24);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_42_26);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_42_29);
      goto continuation_18;

    case 17:
      current_block = (Rpc - LABEL_42_30);
      goto label_31;

    case 18:
      current_block = (Rpc - LABEL_42_27);
      goto continuation_17;

    case 19:
      current_block = (Rpc - LABEL_42_31);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_driver_33)
DEFLABEL (repl_driver_25)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_6);
  (Wrd12.Obj) = Rvl;
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 62))
    goto label_46;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_46;
  (Wrd14.Obj) = ((Wrd17.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_45)
  (Wrd26.Obj) = (Rsp [0]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_42_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_42_0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_42_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (* (--Rsp)) = Rvl;
  (Wrd43.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd43.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_35)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd48.Obj) = ((Wrd45.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_43;
  Wrd44 = Wrd48;

DEFLABEL (label_42)
  if ((Wrd44.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd51.Obj) = (Rsp [3]);
  (Rsp [0]) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (label_36)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_41)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_42_16);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_40;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd12.Lng))))
    goto label_40;
  (Wrd7.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_39)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_19]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_42_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_42_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_42_17);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_38;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd12.Lng))))
    goto label_38;
  (Wrd7.Obj) = ((Wrd10.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_37)
  goto do_loop_22;

DEFLABEL (label_38)
  (Wrd15.Obj) = (current_block [OBJECT_42_4]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_21]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd15.Obj) = (current_block [OBJECT_42_3]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_9])), (Wrd45.pObj));

DEFLABEL (label_30)
  (Wrd44.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  Rsp = (& (Rsp [2]));
  goto label_41;

DEFLABEL (label_46)
  (Wrd22.Obj) = (current_block [OBJECT_42_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_5);
  goto label_41;

DEFLABEL (do_loop_34)
DEFLABEL (do_loop_22)
  INTERRUPT_CHECK (26, LABEL_42_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_42_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_29]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_42_29);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_48;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd12.Lng))))
    goto label_48;
  (Wrd7.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_47)
  (Wrd19.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_31]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_32]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_42_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_33]));

DEFLABEL (label_48)
  (Wrd15.Obj) = (current_block [OBJECT_42_3]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_30]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_27]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_28]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_42_27);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_42_26);
  goto do_loop_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_7 7
#define LABEL_43_10 9
#define LABEL_43_8 11
#define ENVIRONMENT_LABEL_43_3 26
#define DEBUGGING_LABEL_43_2 25
#define OBJECT_43_3 24
#define OBJECT_43_2 23
#define OBJECT_43_1 22
#define OBJECT_43_0 21
#define EXECUTE_CACHE_43_12 13
#define EXECUTE_CACHE_43_11 15
#define EXECUTE_CACHE_43_9 17
#define EXECUTE_CACHE_43_6 19
#define FREE_REFERENCES_LABEL_43_0 12
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_43_4);
      goto run_in_nearest_repl_4;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_43_10);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_43_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (run_in_nearest_repl_8)
DEFLABEL (run_in_nearest_repl_4)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_43_7);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd12.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd10.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_11]));

DEFLABEL (label_10)
  (Wrd15.Obj) = (current_block [OBJECT_43_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_3]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_7 7
#define ENVIRONMENT_LABEL_44_3 15
#define DEBUGGING_LABEL_44_2 14
#define OBJECT_44_0 13
#define EXECUTE_CACHE_44_8 9
#define EXECUTE_CACHE_44_6 11
#define FREE_REFERENCES_LABEL_44_0 8
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_44_4);
      goto repl_read_2;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_read_5)
DEFLABEL (repl_read_2)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_44_7);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_7 7
#define LABEL_45_8 9
#define ENVIRONMENT_LABEL_45_3 21
#define DEBUGGING_LABEL_45_2 20
#define OBJECT_45_2 19
#define OBJECT_45_1 18
#define OBJECT_45_0 17
#define EXECUTE_CACHE_45_10 11
#define EXECUTE_CACHE_45_9 13
#define EXECUTE_CACHE_45_6 15
#define FREE_REFERENCES_LABEL_45_0 10
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_45_4);
      goto default_repl_read_4;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_45_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_45_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_repl_read_8)
DEFLABEL (default_repl_read_4)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd12.Lng))))
    goto label_10;
  (Wrd6.Obj) = ((Wrd10.pObj) [2]);

DEFLABEL (label_9)
  (Wrd22.Obj) = (current_block [OBJECT_45_2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_45_8);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (label_10)
  (Wrd15.Obj) = (current_block [OBJECT_45_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_7 7
#define TAG_46_8 2
#define ENVIRONMENT_LABEL_46_3 15
#define DEBUGGING_LABEL_46_2 14
#define OBJECT_46_0 13
#define EXECUTE_CACHE_46_9 9
#define EXECUTE_CACHE_46_6 11
#define FREE_REFERENCES_LABEL_46_0 8
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_46_4);
      goto repl_eval_2;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_46_7);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_eval_5)
DEFLABEL (repl_eval_2)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_46_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_6 7
#define LABEL_47_10 9
#define LABEL_47_8 11
#define LABEL_47_12 13
#define LABEL_47_13 15
#define LABEL_47_14 17
#define ENVIRONMENT_LABEL_47_3 29
#define DEBUGGING_LABEL_47_2 28
#define OBJECT_47_2 27
#define OBJECT_47_1 26
#define OBJECT_47_0 25
#define EXECUTE_CACHE_47_11 19
#define EXECUTE_CACHE_47_9 21
#define EXECUTE_CACHE_47_7 23
#define FREE_REFERENCES_LABEL_47_0 18
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_47_4);
      goto Z__repl_eval_8;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_47_10);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_47_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_47_12);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_47_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_47_14);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__repl_eval_13)
DEFLABEL (Z__repl_eval_8)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_6);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_17;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd12.Lng))))
    goto label_17;
  (Wrd7.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_47_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_47_13);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_15;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd12.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd10.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_47_12);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd15.Obj) = (current_block [OBJECT_47_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd15.Obj) = (current_block [OBJECT_47_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_8 7
#define LABEL_48_6 9
#define LABEL_48_12 11
#define LABEL_48_13 13
#define LABEL_48_11 15
#define ENVIRONMENT_LABEL_48_3 28
#define DEBUGGING_LABEL_48_2 27
#define OBJECT_48_3 26
#define OBJECT_48_2 25
#define OBJECT_48_1 24
#define OBJECT_48_0 23
#define EXECUTE_CACHE_48_10 17
#define EXECUTE_CACHE_48_9 19
#define EXECUTE_CACHE_48_7 21
#define FREE_REFERENCES_LABEL_48_0 16
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_48_4);
      goto default_repl_eval_9;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_48_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_48_12);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_48_13);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_repl_eval_15)
DEFLABEL (default_repl_eval_9)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_17;

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_48_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (label_17)
  if (! ((Wrd6.uLng) == 1))
    goto label_23;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_22)
  if (! ((Wrd12.Obj) == (current_block [OBJECT_48_1])))
    goto label_16;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_48_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_48_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_20)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_19;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_48_11);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (label_19)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_3]), 1);

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_11)
  (Wrd12.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_7 7
#define TAG_49_8 2
#define ENVIRONMENT_LABEL_49_3 15
#define DEBUGGING_LABEL_49_2 14
#define OBJECT_49_0 13
#define EXECUTE_CACHE_49_9 9
#define EXECUTE_CACHE_49_6 11
#define FREE_REFERENCES_LABEL_49_0 8
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_49_4);
      goto repl_scode_eval_2;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_scode_eval_5)
DEFLABEL (repl_scode_eval_2)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_49_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define TAG_50_6 1
#define ENVIRONMENT_LABEL_50_3 12
#define DEBUGGING_LABEL_50_2 11
#define EXECUTE_CACHE_50_8 7
#define EXECUTE_CACHE_50_7 9
#define FREE_REFERENCES_LABEL_50_0 6
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_50_4);
      goto Z__repl_scode_eval_1;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__repl_scode_eval_4)
DEFLABEL (Z__repl_scode_eval_1)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_50_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_7 5
#define LABEL_51_5 7
#define TAG_51_6 2
#define ENVIRONMENT_LABEL_51_3 15
#define DEBUGGING_LABEL_51_2 14
#define OBJECT_51_0 13
#define EXECUTE_CACHE_51_8 9
#define FREE_REFERENCE_51_0 12
#define FREE_REFERENCES_LABEL_51_0 8
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_51_4);
      goto with_repl_eval_boundary_1;

    case 1:
      current_block = (Rpc - LABEL_51_7);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_51_5);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_repl_eval_boundary_5)
DEFLABEL (with_repl_eval_boundary_1)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_8;
  Wrd11 = Wrd15;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_0]), 3);

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_7])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_7;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_51_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_7 7
#define TAG_52_8 2
#define ENVIRONMENT_LABEL_52_3 15
#define DEBUGGING_LABEL_52_2 14
#define OBJECT_52_0 13
#define EXECUTE_CACHE_52_9 9
#define EXECUTE_CACHE_52_6 11
#define FREE_REFERENCES_LABEL_52_0 8
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_52_4);
      goto repl_write_2;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_52_7);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_write_5)
DEFLABEL (repl_write_2)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_52_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_52_7])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_52_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_7 5
#define LABEL_53_8 7
#define LABEL_53_9 9
#define LABEL_53_10 11
#define LABEL_53_11 13
#define LABEL_53_12 15
#define LABEL_53_14 17
#define LABEL_53_16 19
#define LABEL_53_5 21
#define LABEL_53_17 23
#define ENVIRONMENT_LABEL_53_3 46
#define DEBUGGING_LABEL_53_2 45
#define OBJECT_53_7 44
#define OBJECT_53_6 43
#define OBJECT_53_5 42
#define OBJECT_53_4 41
#define OBJECT_53_3 40
#define OBJECT_53_2 39
#define OBJECT_53_1 38
#define OBJECT_53_0 37
#define EXECUTE_CACHE_53_19 25
#define EXECUTE_CACHE_53_18 27
#define EXECUTE_CACHE_53_15 29
#define EXECUTE_CACHE_53_13 31
#define EXECUTE_CACHE_53_6 33
#define FREE_REFERENCE_53_0 36
#define FREE_REFERENCES_LABEL_53_0 24
#define NUMBER_OF_LINKER_SECTIONS_53_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd65;
  machine_word Wrd55;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd108;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd38;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_53_4);
      goto default_repl_write_10;

    case 1:
      current_block = (Rpc - LABEL_53_7);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_53_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_53_9);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_53_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_53_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_53_12);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_53_14);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_53_16);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    case 10:
      current_block = (Rpc - LABEL_53_17);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_repl_write_18)
DEFLABEL (default_repl_write_10)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_39;
  Wrd11 = Wrd15;

DEFLABEL (label_38)
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_53_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  (Wrd23.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_19)
  (Rsp [4]) = (Wrd23.Obj);
  (Wrd24.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_18]));

DEFLABEL (label_22)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd100.Obj) = (current_block [OBJECT_53_0]);
  (Wrd103.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd103.Lng))))
    goto label_37;
  (Wrd40.uLng) = (OBJECT_DATUM (Wrd100.Obj));
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd40.Obj) == (Wrd42.Obj))
    goto label_30;

DEFLABEL (label_36)
  (Wrd90.Obj) = (current_block [OBJECT_53_2]);
  (Wrd93.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd93.Lng))))
    goto label_35;
  (Wrd44.uLng) = (OBJECT_DATUM (Wrd90.Obj));
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd44.Obj) == (Wrd46.Obj))
    goto label_30;

DEFLABEL (label_34)
  (Wrd80.Obj) = (current_block [OBJECT_53_3]);
  (Wrd83.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd83.Lng))))
    goto label_33;
  (Wrd48.uLng) = (OBJECT_DATUM (Wrd80.Obj));
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd48.Obj) == (Wrd50.Obj))
    goto label_30;

DEFLABEL (label_32)
  (Wrd70.Obj) = (current_block [OBJECT_53_4]);
  (Wrd73.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd73.Lng))))
    goto label_31;
  (Wrd52.uLng) = (OBJECT_DATUM (Wrd70.Obj));
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd52.Obj) == (Wrd54.Obj))
    goto label_30;

DEFLABEL (label_29)
  (Wrd55.Obj) = (current_block [OBJECT_53_5]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd65.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd65.Lng)))
    goto label_23;
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_23)
  (Wrd59.uLng) = (OBJECT_DATUM (Wrd55.Obj));
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd59.Obj) == (Wrd61.Obj))
    goto label_25;
  (Wrd57.Obj) = (current_block [OBJECT_53_7]);
  goto label_24;

DEFLABEL (label_25)
  (Wrd57.Obj) = (current_block [OBJECT_53_6]);

DEFLABEL (label_24)
DEFLABEL (label_28)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd57.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_27;

DEFLABEL (label_26)
  (Wrd67.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_53_16);
  (Wrd23.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_27)
  (Wrd23.Obj) = (current_block [OBJECT_53_7]);
  goto label_20;

DEFLABEL (label_30)
  Rsp = (& (Rsp [2]));
  goto label_27;

DEFLABEL (label_31)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_12]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

DEFLABEL (label_33)
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_11]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_30;

DEFLABEL (label_35)
  (Wrd95.Obj) = (Rsp [0]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_30;

DEFLABEL (label_37)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_30;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_17])), (Wrd12.pObj));

DEFLABEL (label_12)
  (Wrd11.Obj) = Rvl;
  goto label_38;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_53_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_7 7
#define TAG_54_8 2
#define ENVIRONMENT_LABEL_54_3 15
#define DEBUGGING_LABEL_54_2 14
#define OBJECT_54_0 13
#define EXECUTE_CACHE_54_9 9
#define EXECUTE_CACHE_54_6 11
#define FREE_REFERENCES_LABEL_54_0 8
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_54_4);
      goto repl_eval_write_2;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_54_7);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_eval_write_5)
DEFLABEL (repl_eval_write_2)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_54_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define ENVIRONMENT_LABEL_55_3 12
#define DEBUGGING_LABEL_55_2 11
#define EXECUTE_CACHE_55_7 7
#define EXECUTE_CACHE_55_6 9
#define FREE_REFERENCES_LABEL_55_0 6
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto Z__repl_eval_write_1;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__repl_eval_write_4)
DEFLABEL (Z__repl_eval_write_1)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_7 5
#define LABEL_56_5 7
#define LABEL_56_10 9
#define LABEL_56_14 11
#define LABEL_56_12 13
#define LABEL_56_9 15
#define LABEL_56_15 17
#define TAG_56_16 7
#define ENVIRONMENT_LABEL_56_3 31
#define DEBUGGING_LABEL_56_2 30
#define OBJECT_56_2 29
#define OBJECT_56_1 28
#define OBJECT_56_0 27
#define EXECUTE_CACHE_56_13 19
#define EXECUTE_CACHE_56_11 21
#define EXECUTE_CACHE_56_8 23
#define EXECUTE_CACHE_56_6 25
#define FREE_REFERENCES_LABEL_56_0 18
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_56_4);
      goto optional_er_10;

    case 1:
      current_block = (Rpc - LABEL_56_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_56_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_56_10);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_56_14);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_56_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_56_9);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_56_15);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optional_er_14)
DEFLABEL (optional_er_10)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_56_0])))
    goto label_21;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_56_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_20)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_56_0]))
    goto label_18;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_56_12);
  (Wrd5.Obj) = (Rsp [2]);

DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_56_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_56_15])));
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

DEFLABEL (label_18)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_56_10);
  (Wrd16.Obj) = Rvl;
  (Wrd24.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd24.uLng) == 62))
    goto label_19;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd23.Lng))))
    goto label_19;
  (Wrd5.Obj) = ((Wrd21.pObj) [3]);
  goto label_17;

DEFLABEL (label_19)
  (Wrd26.Obj) = (current_block [OBJECT_56_1]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_2]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_21)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_56_7);
  (Wrd20.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd20.Obj);
  goto label_20;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_56_9);
  (Wrd5.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_56_15);

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
INVOKE_PRIMITIVE_TARGET
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
rep_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_57_4);
      goto repl_start_3;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_start_6)
DEFLABEL (repl_start_3)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_57_0]))
    goto label_8;
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_7;

DEFLABEL (label_8)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
DEFLABEL (label_9)
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_7 5
#define LABEL_58_8 7
#define LABEL_58_5 9
#define LABEL_58_9 11
#define LABEL_58_10 13
#define LABEL_58_17 15
#define LABEL_58_11 17
#define LABEL_58_14 19
#define TAG_58_15 8
#define LABEL_58_12 21
#define TAG_58_13 9
#define LABEL_58_22 23
#define LABEL_58_23 25
#define LABEL_58_24 27
#define LABEL_58_25 29
#define LABEL_58_26 31
#define LABEL_58_27 33
#define LABEL_58_28 35
#define LABEL_58_29 37
#define LABEL_58_30 39
#define ENVIRONMENT_LABEL_58_3 70
#define DEBUGGING_LABEL_58_2 69
#define OBJECT_58_5 68
#define OBJECT_58_4 67
#define OBJECT_58_3 66
#define OBJECT_58_2 65
#define OBJECT_58_1 64
#define OBJECT_58_0 63
#define EXECUTE_CACHE_58_21 41
#define EXECUTE_CACHE_58_20 43
#define EXECUTE_CACHE_58_19 45
#define EXECUTE_CACHE_58_18 47
#define EXECUTE_CACHE_58_16 49
#define EXECUTE_CACHE_58_6 51
#define FREE_REFERENCE_58_4 54
#define FREE_REFERENCE_58_3 55
#define FREE_REFERENCE_58_2 56
#define FREE_REFERENCE_58_1 57
#define FREE_REFERENCE_58_0 58
#define FREE_ASSIGNMENT_58_2 60
#define FREE_ASSIGNMENT_58_1 61
#define FREE_ASSIGNMENT_58_0 62
#define FREE_REFERENCES_LABEL_58_0 40
#define NUMBER_OF_LINKER_SECTIONS_58_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd31;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_58_4);
      goto make_repl_message_28;

    case 1:
      current_block = (Rpc - LABEL_58_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_58_8);
      goto continuation_26;

    case 3:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_58_9);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_58_10);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_58_17);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_58_11);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_58_14);
      goto lambda_45;

    case 9:
      current_block = (Rpc - LABEL_58_12);
      goto swapB_44;

    case 10:
      current_block = (Rpc - LABEL_58_22);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_58_23);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_58_24);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_58_25);
      goto label_36;

    case 14:
      current_block = (Rpc - LABEL_58_26);
      goto label_37;

    case 15:
      current_block = (Rpc - LABEL_58_27);
      goto label_38;

    case 16:
      current_block = (Rpc - LABEL_58_28);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_58_29);
      goto label_40;

    case 18:
      current_block = (Rpc - LABEL_58_30);
      goto label_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_repl_message_43)
DEFLABEL (make_repl_message_28)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_57;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_57;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_56)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  if ((Wrd22.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_55;
  Wrd24 = Wrd28;

DEFLABEL (label_54)
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_19]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_58_8);
  (Wrd33.Obj) = Rvl;

DEFLABEL (label_52)
  (Rsp [1]) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;
  Wrd40 = Wrd37;

DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_48)
  (Rsp [0]) = (Wrd40.Obj);
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_1]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_47;
  Wrd42 = Wrd46;

DEFLABEL (label_46)
  (Rsp [2]) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_18]));

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_17])), (Wrd43.pObj));

DEFLABEL (label_32)
  (Wrd42.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_50)
  (Wrd48.Obj) = (Rsp [1]);
  if ((Wrd48.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_11]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_58_2]);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd54.pObj) = (& (Rhp [-1]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd54.pObj)));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_58_3]);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd58.pObj) = (& (Rhp [-1]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd58.pObj)));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd64.Obj) = (current_block [OBJECT_58_4]);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd62.pObj) = (& (Rhp [-1]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd62.pObj)));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd82.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_12])));
  Rhp += 3;
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd82.pObj)));
  (* (--Rsp)) = (Wrd83.Obj);
  Wrd80 = Wrd82;
  ((Wrd80.pObj) [2]) = (Wrd55.Obj);
  ((Wrd80.pObj) [3]) = (Wrd59.Obj);
  ((Wrd80.pObj) [4]) = (Wrd63.Obj);
  (Rsp [3]) = (Wrd83.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd69.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_14])));
  Rhp += 1;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd69.pObj)));
  ((Wrd69.pObj) [2]) = (Wrd48.Obj);
  (Rsp [2]) = (Wrd68.Obj);
  (Rsp [1]) = (Wrd83.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_16]));

DEFLABEL (label_51)
  (Wrd40.Obj) = ((SCHEME_OBJECT) 0);
  goto label_49;

DEFLABEL (label_53)
  (Wrd33.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_10])), (Wrd25.pObj));

DEFLABEL (label_31)
  (Wrd24.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd15.Obj) = (current_block [OBJECT_58_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_58_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_58_7);
  (Wrd40.Obj) = Rvl;
  goto label_48;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_58_14);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_21]));

DEFLABEL (swapB_44)
  CLOSURE_HEADER (LABEL_58_12);

DEFLABEL (swapB_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_84;

DEFLABEL (label_83)
  Wrd5 = Wrd9;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_81;

DEFLABEL (label_80)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_79)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_78;

DEFLABEL (label_77)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_76)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_3]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_75;

DEFLABEL (label_74)
  Wrd57 = Wrd61;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_72;

DEFLABEL (label_71)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_70)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [3]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_69;

DEFLABEL (label_68)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_67)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_4]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_66;

DEFLABEL (label_65)
  Wrd109 = Wrd113;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_63;

DEFLABEL (label_62)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_61)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [2]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_58_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_58)
  Rvl = (current_block [OBJECT_58_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_60)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_30])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_41)
  goto label_58;

DEFLABEL (label_63)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_62;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_29])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_40)
  goto label_61;

DEFLABEL (label_66)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_65;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_58_28])), (Wrd110.pObj));

DEFLABEL (label_39)
  (Wrd109.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_69)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_68;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_27])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_38)
  goto label_67;

DEFLABEL (label_72)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_71;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_26])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_37)
  goto label_70;

DEFLABEL (label_75)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_74;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_58_25])), (Wrd58.pObj));

DEFLABEL (label_36)
  (Wrd57.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_78)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_77;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_24])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_35)
  goto label_76;

DEFLABEL (label_81)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_80;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_58_23])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_34)
  goto label_79;

DEFLABEL (label_84)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_83;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_58_22])), (Wrd6.pObj));

DEFLABEL (label_33)
  (Wrd5.Obj) = Rvl;
  goto label_82;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_7 7
#define LABEL_59_10 9
#define LABEL_59_11 11
#define LABEL_59_12 13
#define LABEL_59_8 15
#define LABEL_59_13 17
#define ENVIRONMENT_LABEL_59_3 34
#define DEBUGGING_LABEL_59_2 33
#define OBJECT_59_3 32
#define OBJECT_59_2 31
#define OBJECT_59_1 30
#define OBJECT_59_0 29
#define EXECUTE_CACHE_59_16 19
#define EXECUTE_CACHE_59_15 21
#define EXECUTE_CACHE_59_14 23
#define EXECUTE_CACHE_59_9 25
#define EXECUTE_CACHE_59_6 27
#define FREE_REFERENCES_LABEL_59_0 18
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_59_4);
      goto repl_set_default_environment_10;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_59_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_59_10);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_59_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_59_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_59_8);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_59_13);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_set_default_environment_15)
DEFLABEL (repl_set_default_environment_10)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_59_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_21;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd12.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_20)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_59_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_59_10);
  (Wrd22.Obj) = Rvl;
  (Wrd30.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd30.uLng) == 62))
    goto label_19;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_19;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_18)
  (Wrd36.Obj) = (Rsp [1]);
  if (! ((Wrd23.Obj) == (Wrd36.Obj)))
    goto label_16;
  Rvl = (current_block [OBJECT_59_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_59_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_59_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_17)
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_16]));

DEFLABEL (label_19)
  (Wrd32.Obj) = (current_block [OBJECT_59_0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_13)
  (Wrd23.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd15.Obj) = (current_block [OBJECT_59_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_7 7
#define TAG_60_8 2
#define LABEL_60_12 9
#define LABEL_60_10 11
#define LABEL_60_15 13
#define LABEL_60_13 15
#define LABEL_60_17 17
#define LABEL_60_19 19
#define LABEL_60_20 21
#define ENVIRONMENT_LABEL_60_3 44
#define DEBUGGING_LABEL_60_2 43
#define OBJECT_60_3 42
#define OBJECT_60_2 41
#define OBJECT_60_1 40
#define OBJECT_60_0 39
#define EXECUTE_CACHE_60_22 23
#define EXECUTE_CACHE_60_21 25
#define EXECUTE_CACHE_60_18 27
#define EXECUTE_CACHE_60_16 29
#define EXECUTE_CACHE_60_14 31
#define EXECUTE_CACHE_60_11 33
#define EXECUTE_CACHE_60_9 35
#define EXECUTE_CACHE_60_6 37
#define FREE_REFERENCES_LABEL_60_0 22
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_60_4);
      goto default_set_default_environment_11;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_60_7);
      goto lambda_15;

    case 3:
      current_block = (Rpc - LABEL_60_12);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_60_10);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_60_15);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_60_13);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_60_17);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_60_19);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_60_20);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_set_default_environment_14)
DEFLABEL (default_set_default_environment_11)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_60_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_60_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_60_7])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_9]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_60_7);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_60_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_60_15);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = (current_block [OBJECT_60_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_60_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_60_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_60_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_60_20);
  (Rsp [0]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_22]));

DEFLABEL (label_18)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_60_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_60_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_60_12);
  goto label_17;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_7 7
#define LABEL_61_8 9
#define LABEL_61_14 11
#define LABEL_61_15 13
#define LABEL_61_16 15
#define LABEL_61_11 17
#define LABEL_61_17 19
#define LABEL_61_21 21
#define LABEL_61_18 23
#define LABEL_61_27 25
#define LABEL_61_28 27
#define LABEL_61_29 29
#define LABEL_61_30 31
#define LABEL_61_33 33
#define LABEL_61_23 35
#define LABEL_61_35 37
#define LABEL_61_19 39
#define LABEL_61_37 41
#define LABEL_61_39 43
#define LABEL_61_41 45
#define LABEL_61_42 47
#define LABEL_61_45 49
#define LABEL_61_44 51
#define LABEL_61_46 53
#define LABEL_61_48 55
#define LABEL_61_49 57
#define LABEL_61_50 59
#define LABEL_61_31 61
#define LABEL_61_54 63
#define LABEL_61_55 65
#define LABEL_61_56 67
#define LABEL_61_58 69
#define ENVIRONMENT_LABEL_61_3 133
#define DEBUGGING_LABEL_61_2 132
#define OBJECT_61_16 131
#define OBJECT_61_15 130
#define OBJECT_61_14 129
#define OBJECT_61_13 128
#define OBJECT_61_12 127
#define OBJECT_61_11 126
#define OBJECT_61_10 125
#define OBJECT_61_9 124
#define OBJECT_61_8 123
#define OBJECT_61_7 122
#define OBJECT_61_6 121
#define OBJECT_61_5 120
#define OBJECT_61_4 119
#define OBJECT_61_3 118
#define OBJECT_61_2 117
#define OBJECT_61_1 116
#define OBJECT_61_0 115
#define EXECUTE_CACHE_61_57 71
#define EXECUTE_CACHE_61_53 73
#define EXECUTE_CACHE_61_52 75
#define EXECUTE_CACHE_61_51 77
#define EXECUTE_CACHE_61_47 79
#define EXECUTE_CACHE_61_43 81
#define EXECUTE_CACHE_61_59 83
#define EXECUTE_CACHE_61_40 85
#define EXECUTE_CACHE_61_38 87
#define EXECUTE_CACHE_61_36 89
#define EXECUTE_CACHE_61_34 91
#define EXECUTE_CACHE_61_32 93
#define EXECUTE_CACHE_61_26 95
#define EXECUTE_CACHE_61_25 97
#define EXECUTE_CACHE_61_24 99
#define EXECUTE_CACHE_61_22 101
#define EXECUTE_CACHE_61_20 103
#define EXECUTE_CACHE_61_13 105
#define EXECUTE_CACHE_61_12 107
#define EXECUTE_CACHE_61_10 109
#define EXECUTE_CACHE_61_9 111
#define EXECUTE_CACHE_61_6 113
#define FREE_REFERENCES_LABEL_61_0 70
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd29;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd59;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd20;
  machine_word Wrd63;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd69;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_61_4);
      goto restart_44;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_61_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_61_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_61_14);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_61_15);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_61_16);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_61_11);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_61_17);
      goto label_46;

    case 9:
      current_block = (Rpc - LABEL_61_21);
      goto label_47;

    case 10:
      current_block = (Rpc - LABEL_61_18);
      goto continuation_40;

    case 11:
      current_block = (Rpc - LABEL_61_27);
      goto continuation_29;

    case 12:
      current_block = (Rpc - LABEL_61_28);
      goto continuation_26;

    case 13:
      current_block = (Rpc - LABEL_61_29);
      goto continuation_25;

    case 14:
      current_block = (Rpc - LABEL_61_30);
      goto label_49;

    case 15:
      current_block = (Rpc - LABEL_61_33);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_61_23);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_61_35);
      goto label_48;

    case 18:
      current_block = (Rpc - LABEL_61_19);
      goto continuation_14;

    case 19:
      current_block = (Rpc - LABEL_61_37);
      goto continuation_15;

    case 20:
      current_block = (Rpc - LABEL_61_39);
      goto continuation_16;

    case 21:
      current_block = (Rpc - LABEL_61_41);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_61_42);
      goto lambda_21;

    case 23:
      current_block = (Rpc - LABEL_61_45);
      goto loop_36;

    case 24:
      current_block = (Rpc - LABEL_61_44);
      goto continuation_17;

    case 25:
      current_block = (Rpc - LABEL_61_46);
      goto continuation_24;

    case 26:
      current_block = (Rpc - LABEL_61_48);
      goto continuation_20;

    case 27:
      current_block = (Rpc - LABEL_61_49);
      goto continuation_19;

    case 28:
      current_block = (Rpc - LABEL_61_50);
      goto continuation_18;

    case 29:
      current_block = (Rpc - LABEL_61_31);
      goto continuation_30;

    case 30:
      current_block = (Rpc - LABEL_61_54);
      goto continuation_31;

    case 31:
      current_block = (Rpc - LABEL_61_55);
      goto continuation_32;

    case 32:
      current_block = (Rpc - LABEL_61_56);
      goto continuation_33;

    case 33:
      current_block = (Rpc - LABEL_61_58);
      goto continuation_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (restart_51)
DEFLABEL (restart_44)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_61_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_61_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_61_11);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_70;
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd69.Lng) == 0))
    goto label_68;

DEFLABEL (label_69)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_14]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (current_block [OBJECT_61_9]);
  (* (--Rsp)) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_25]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_61_14);

DEFLABEL (label_68)
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  if (! ((Wrd16.Obj) == (current_block [OBJECT_61_0])))
    goto label_54;
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_19]))));
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_61_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_38]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_61_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_40]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_61_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_42]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_43]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_61_41);
  goto loop_36;

DEFLABEL (label_54)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_61_1]);
  (Wrd54.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd54.Lng))))
    goto label_67;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd23.Obj) == (Wrd25.Obj))
    goto label_66;

DEFLABEL (label_65)
  (Wrd26.Obj) = (current_block [OBJECT_61_3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd36.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd36.Lng)))
    goto label_55;
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 2);

DEFLABEL (label_55)
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd30.Obj) == (Wrd32.Obj))
    goto label_57;
  (Wrd28.Obj) = (current_block [OBJECT_61_5]);
  goto label_56;

DEFLABEL (label_57)
  (Wrd28.Obj) = (current_block [OBJECT_61_4]);

DEFLABEL (label_56)
DEFLABEL (label_64)
  Rsp = (& (Rsp [3]));
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_63;

DEFLABEL (label_62)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_23]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_61_8]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_61_23);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_61;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_33]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_61_6]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_34]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_61_33);

DEFLABEL (label_61)
  (Wrd7.Obj) = (Rsp [5]);

DEFLABEL (label_60)
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_59;
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_59;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd16.Lng) = ((Wrd18.Lng) - (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_59;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_58)
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_36]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_61_18);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_26]));

DEFLABEL (label_59)
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_35]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_63)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_15]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_61_6]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_61_7]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_61_15);
  goto label_62;

DEFLABEL (label_66)
  Rsp = (& (Rsp [2]));
  goto label_62;

DEFLABEL (label_67)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_21]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 2);

DEFLABEL (label_47)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  goto label_66;

DEFLABEL (label_70)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_46)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_69;

DEFLABEL (label_71)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_61_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_62;

DEFLABEL (lambda_52)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_61_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_40]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_61_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_49]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_61_12]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_50]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_51]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_61_50);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_53]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_61_49);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_40]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_61_48);
  (Wrd5.Obj) = (current_block [OBJECT_61_14]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_40]));

DEFLABEL (loop_53)
DEFLABEL (loop_36)
  INTERRUPT_CHECK (26, LABEL_61_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_46]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_47]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_61_46);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_61_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_52]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_61_29);
  (* (--Rsp)) = Rvl;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_28]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd58.Obj) = (current_block [OBJECT_61_1]);
  (Wrd61.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd61.Lng))))
    goto label_81;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd58.Obj));
  (Wrd34.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd32.Obj) == (Wrd34.Obj))
    goto label_80;

DEFLABEL (label_79)
  (Wrd35.Obj) = (current_block [OBJECT_61_3]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd45.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd45.Lng)))
    goto label_72;
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 2);

DEFLABEL (label_72)
  (Wrd39.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd39.Obj) == (Wrd41.Obj))
    goto label_74;
  (Wrd37.Obj) = (current_block [OBJECT_61_5]);
  goto label_73;

DEFLABEL (label_74)
  (Wrd37.Obj) = (current_block [OBJECT_61_4]);

DEFLABEL (label_73)
DEFLABEL (label_78)
  Rsp = (& (Rsp [3]));
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_75;

DEFLABEL (label_77)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_27]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_61_8]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_24]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_61_27);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_76;

DEFLABEL (label_75)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_31]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_32]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_61_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_38]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_61_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_40]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_61_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_57]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_61_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_59]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_61_58);
  Rsp = (& (Rsp [1]));
  goto loop_36;

DEFLABEL (label_76)
  (Wrd7.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto label_60;

DEFLABEL (label_80)
  Rsp = (& (Rsp [2]));
  goto label_77;

DEFLABEL (label_81)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_30]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 2);

DEFLABEL (label_49)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;
  goto label_80;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_61_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  goto label_77;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_7 7
#define LABEL_62_9 9
#define LABEL_62_10 11
#define LABEL_62_11 13
#define LABEL_62_14 15
#define LABEL_62_13 17
#define LABEL_62_16 19
#define LABEL_62_17 21
#define LABEL_62_18 23
#define ENVIRONMENT_LABEL_62_3 38
#define DEBUGGING_LABEL_62_2 37
#define OBJECT_62_3 36
#define OBJECT_62_2 35
#define OBJECT_62_1 34
#define OBJECT_62_0 33
#define EXECUTE_CACHE_62_15 25
#define EXECUTE_CACHE_62_12 27
#define EXECUTE_CACHE_62_8 29
#define EXECUTE_CACHE_62_6 31
#define FREE_REFERENCES_LABEL_62_0 24
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_62_4);
      goto write_restarts_15;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_62_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_62_9);
      goto do_loop_13;

    case 4:
      current_block = (Rpc - LABEL_62_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_62_11);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_62_14);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_62_13);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_62_16);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_62_17);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_62_18);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_restarts_21)
DEFLABEL (write_restarts_15)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_62_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_13;

DEFLABEL (do_loop_22)
DEFLABEL (do_loop_13)
  INTERRUPT_CHECK (26, LABEL_62_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_24;
  (Wrd7.Obj) = (current_block [OBJECT_62_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_23;

DEFLABEL (label_24)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_23)
DEFLABEL (label_32)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_62_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_62_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_31;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_62_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_62_16);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_29;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_27;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd23.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_27;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));

DEFLABEL (label_26)
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_13;

DEFLABEL (label_27)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_19)
  (Wrd18.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_3]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_8 7
#define LABEL_63_6 9
#define LABEL_63_11 11
#define LABEL_63_7 13
#define LABEL_63_13 15
#define LABEL_63_14 17
#define LABEL_63_15 19
#define LABEL_63_10 21
#define LABEL_63_17 23
#define ENVIRONMENT_LABEL_63_3 37
#define DEBUGGING_LABEL_63_2 36
#define OBJECT_63_2 35
#define OBJECT_63_1 34
#define OBJECT_63_0 33
#define EXECUTE_CACHE_63_16 25
#define EXECUTE_CACHE_63_12 27
#define EXECUTE_CACHE_63_9 29
#define FREE_REFERENCE_63_0 32
#define FREE_REFERENCES_LABEL_63_0 24
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_63_4);
      goto filter_restarts_13;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto loop_11;

    case 2:
      current_block = (Rpc - LABEL_63_8);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_63_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_63_11);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_63_7);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_63_13);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_63_14);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_63_15);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_63_10);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_63_17);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (filter_restarts_22)
DEFLABEL (filter_restarts_13)
  INTERRUPT_CHECK (26, LABEL_63_4);
  goto loop_11;

DEFLABEL (loop_23)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_63_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_24;
  Rvl = (current_block [OBJECT_63_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_39;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_63_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_34;
  Wrd7 = Wrd11;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_32;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_63_6);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_30;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_63_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_27;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_26)
  (Wrd25.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));

DEFLABEL (label_25)
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_27)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_17]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_0]), 1);

DEFLABEL (label_20)
  (Wrd14.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd9.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  Rvl = (Rsp [0]);
  goto label_25;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_0]), 1);

DEFLABEL (label_16)
  (Wrd15.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd15.Obj));
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_15]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_2]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_14])), (Wrd8.pObj));

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_37;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_36)
  goto loop_11;

DEFLABEL (label_37)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_2]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define TAG_64_6 1
#define LABEL_64_8 7
#define LABEL_64_10 9
#define LABEL_64_12 11
#define LABEL_64_13 13
#define LABEL_64_15 15
#define LABEL_64_18 17
#define LABEL_64_19 19
#define ENVIRONMENT_LABEL_64_3 39
#define DEBUGGING_LABEL_64_2 38
#define OBJECT_64_2 37
#define OBJECT_64_1 36
#define OBJECT_64_0 35
#define EXECUTE_CACHE_64_20 21
#define EXECUTE_CACHE_64_17 23
#define EXECUTE_CACHE_64_16 25
#define EXECUTE_CACHE_64_14 27
#define EXECUTE_CACHE_64_11 29
#define EXECUTE_CACHE_64_9 31
#define EXECUTE_CACHE_64_7 33
#define FREE_REFERENCES_LABEL_64_0 20
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto condition_restarts_message_8;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_64_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_64_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_64_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_64_13);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_64_15);
      goto lambda_6;

    case 7:
      current_block = (Rpc - LABEL_64_18);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_64_19);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_restarts_message_11)
DEFLABEL (condition_restarts_message_8)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_64_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_64_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_7]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_64_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_64_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_64_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_64_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_15]))));
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_16]));

DEFLABEL (lambda_13)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_64_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_64_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_64_19);
  (Wrd5.Obj) = (current_block [OBJECT_64_2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define ENVIRONMENT_LABEL_65_3 12
#define DEBUGGING_LABEL_65_2 11
#define EXECUTE_CACHE_65_6 7
#define FREE_REFERENCE_65_0 10
#define FREE_REFERENCES_LABEL_65_0 6
#define NUMBER_OF_LINKER_SECTIONS_65_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_65_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define ENVIRONMENT_LABEL_66_3 12
#define DEBUGGING_LABEL_66_2 11
#define EXECUTE_CACHE_66_6 7
#define FREE_REFERENCE_66_0 10
#define FREE_REFERENCES_LABEL_66_0 6
#define NUMBER_OF_LINKER_SECTIONS_66_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_66_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define ENVIRONMENT_LABEL_67_3 8
#define DEBUGGING_LABEL_67_2 7
#define EXECUTE_CACHE_67_5 5
#define FREE_REFERENCES_LABEL_67_0 4
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_67_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define ENVIRONMENT_LABEL_68_3 7
#define DEBUGGING_LABEL_68_2 6
#define OBJECT_68_1 5
#define OBJECT_68_0 4
#define FREE_REFERENCES_LABEL_68_0 4
#define NUMBER_OF_LINKER_SECTIONS_68_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_68_4);
      goto repl_state_prompt_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_state_prompt_3)
DEFLABEL (repl_state_prompt_0)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_68_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

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

#define LABEL_69_4 3
#define ENVIRONMENT_LABEL_69_3 7
#define DEBUGGING_LABEL_69_2 6
#define OBJECT_69_1 5
#define OBJECT_69_0 4
#define FREE_REFERENCES_LABEL_69_0 4
#define NUMBER_OF_LINKER_SECTIONS_69_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_69_4);
      goto repl_state_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_state_environment_3)
DEFLABEL (repl_state_environment_0)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_69_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

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

#define LABEL_70_4 3
#define ENVIRONMENT_LABEL_70_3 7
#define DEBUGGING_LABEL_70_2 6
#define OBJECT_70_1 5
#define OBJECT_70_0 4
#define FREE_REFERENCES_LABEL_70_0 4
#define NUMBER_OF_LINKER_SECTIONS_70_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_70_4);
      goto repl_state_condition_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_state_condition_3)
DEFLABEL (repl_state_condition_0)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_70_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

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

#define LABEL_71_4 3
#define ENVIRONMENT_LABEL_71_3 7
#define DEBUGGING_LABEL_71_2 6
#define OBJECT_71_1 5
#define OBJECT_71_0 4
#define FREE_REFERENCES_LABEL_71_0 4
#define NUMBER_OF_LINKER_SECTIONS_71_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_71_4);
      goto repl_state_reader_history_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_state_reader_history_3)
DEFLABEL (repl_state_reader_history_0)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_71_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define ENVIRONMENT_LABEL_72_3 7
#define DEBUGGING_LABEL_72_2 6
#define OBJECT_72_1 5
#define OBJECT_72_0 4
#define FREE_REFERENCES_LABEL_72_0 4
#define NUMBER_OF_LINKER_SECTIONS_72_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_72_4);
      goto repl_state_printer_history_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_state_printer_history_3)
DEFLABEL (repl_state_printer_history_0)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_72_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define ENVIRONMENT_LABEL_73_3 7
#define DEBUGGING_LABEL_73_2 6
#define OBJECT_73_1 5
#define OBJECT_73_0 4
#define FREE_REFERENCES_LABEL_73_0 4
#define NUMBER_OF_LINKER_SECTIONS_73_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_73_4);
      goto repl_state_input_queue_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_state_input_queue_3)
DEFLABEL (repl_state_input_queue_0)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_73_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define ENVIRONMENT_LABEL_74_3 8
#define DEBUGGING_LABEL_74_2 7
#define OBJECT_74_2 6
#define OBJECT_74_1 5
#define OBJECT_74_0 4
#define FREE_REFERENCES_LABEL_74_0 4
#define NUMBER_OF_LINKER_SECTIONS_74_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_74_4);
      goto set_repl_state_promptB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_repl_state_promptB_3)
DEFLABEL (set_repl_state_promptB_0)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_74_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_74_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define ENVIRONMENT_LABEL_75_3 8
#define DEBUGGING_LABEL_75_2 7
#define OBJECT_75_2 6
#define OBJECT_75_1 5
#define OBJECT_75_0 4
#define FREE_REFERENCES_LABEL_75_0 4
#define NUMBER_OF_LINKER_SECTIONS_75_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_75_4);
      goto set_repl_state_environmentB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_repl_state_environmentB_3)
DEFLABEL (set_repl_state_environmentB_0)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_75_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_75_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define ENVIRONMENT_LABEL_76_3 8
#define DEBUGGING_LABEL_76_2 7
#define OBJECT_76_2 6
#define OBJECT_76_1 5
#define OBJECT_76_0 4
#define FREE_REFERENCES_LABEL_76_0 4
#define NUMBER_OF_LINKER_SECTIONS_76_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_76_4);
      goto set_repl_state_reader_historyB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_repl_state_reader_historyB_3)
DEFLABEL (set_repl_state_reader_historyB_0)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_76_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_76_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define ENVIRONMENT_LABEL_77_3 8
#define DEBUGGING_LABEL_77_2 7
#define OBJECT_77_2 6
#define OBJECT_77_1 5
#define OBJECT_77_0 4
#define FREE_REFERENCES_LABEL_77_0 4
#define NUMBER_OF_LINKER_SECTIONS_77_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_77_4);
      goto set_repl_state_printer_historyB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_repl_state_printer_historyB_3)
DEFLABEL (set_repl_state_printer_historyB_0)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_77_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_77_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_6 7
#define LABEL_78_7 9
#define ENVIRONMENT_LABEL_78_3 17
#define DEBUGGING_LABEL_78_2 16
#define OBJECT_78_3 15
#define OBJECT_78_2 14
#define OBJECT_78_1 13
#define OBJECT_78_0 12
#define FREE_REFERENCE_78_0 11
#define FREE_REFERENCES_LABEL_78_0 10
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_78_4);
      goto repl_stateP_4;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_78_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_78_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_stateP_10)
DEFLABEL (repl_stateP_4)
  INTERRUPT_CHECK (26, LABEL_78_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_0]));
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
  Rvl = (current_block [OBJECT_78_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_78_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define LABEL_79_7 7
#define ENVIRONMENT_LABEL_79_3 16
#define DEBUGGING_LABEL_79_2 15
#define EXECUTE_CACHE_79_9 9
#define EXECUTE_CACHE_79_8 11
#define EXECUTE_CACHE_79_6 13
#define FREE_REFERENCES_LABEL_79_0 8
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_79_4);
      goto replP_2;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_79_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (replP_5)
DEFLABEL (replP_2)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_79_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_79_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define ENVIRONMENT_LABEL_80_3 13
#define DEBUGGING_LABEL_80_2 12
#define OBJECT_80_0 11
#define EXECUTE_CACHE_80_7 7
#define EXECUTE_CACHE_80_6 9
#define FREE_REFERENCES_LABEL_80_0 6
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_80_4);
      goto guarantee_repl_1;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_repl_4)
DEFLABEL (guarantee_repl_1)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_80_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_80_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define ENVIRONMENT_LABEL_81_3 11
#define DEBUGGING_LABEL_81_2 10
#define OBJECT_81_2 9
#define OBJECT_81_1 8
#define OBJECT_81_0 7
#define EXECUTE_CACHE_81_5 5
#define FREE_REFERENCES_LABEL_81_0 4
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_81_4);
      goto error_not_repl_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_repl_5)
DEFLABEL (error_not_repl_2)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_81_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_81_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_81_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define ENVIRONMENT_LABEL_82_3 12
#define DEBUGGING_LABEL_82_2 11
#define OBJECT_82_1 10
#define OBJECT_82_0 9
#define EXECUTE_CACHE_82_6 7
#define FREE_REFERENCES_LABEL_82_0 6
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_82_4);
      goto repl_prompt_1;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_prompt_4)
DEFLABEL (repl_prompt_1)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_82_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_82_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define ENVIRONMENT_LABEL_83_3 13
#define DEBUGGING_LABEL_83_2 12
#define OBJECT_83_2 11
#define OBJECT_83_1 10
#define OBJECT_83_0 9
#define EXECUTE_CACHE_83_6 7
#define FREE_REFERENCES_LABEL_83_0 6
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_83_4);
      goto set_repl_promptB_1;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_repl_promptB_4)
DEFLABEL (set_repl_promptB_1)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_83_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_2]), 3);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_83_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define ENVIRONMENT_LABEL_84_3 12
#define DEBUGGING_LABEL_84_2 11
#define OBJECT_84_1 10
#define OBJECT_84_0 9
#define EXECUTE_CACHE_84_6 7
#define FREE_REFERENCES_LABEL_84_0 6
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_84_4);
      goto repl_environment_1;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_environment_4)
DEFLABEL (repl_environment_1)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_84_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_84_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define LABEL_85_7 7
#define LABEL_85_8 9
#define LABEL_85_10 11
#define ENVIRONMENT_LABEL_85_3 24
#define DEBUGGING_LABEL_85_2 23
#define OBJECT_85_1 22
#define OBJECT_85_0 21
#define EXECUTE_CACHE_85_12 13
#define EXECUTE_CACHE_85_11 15
#define EXECUTE_CACHE_85_9 17
#define EXECUTE_CACHE_85_6 19
#define FREE_REFERENCES_LABEL_85_0 12
#define NUMBER_OF_LINKER_SECTIONS_85_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_85_4);
      goto set_repl_environmentB_4;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_85_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_85_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_85_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_repl_environmentB_8)
DEFLABEL (set_repl_environmentB_4)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_85_5);
  (Wrd5.Obj) = Rvl;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 62))
    goto label_10;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_10;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [3]) = (Wrd11.Obj);

DEFLABEL (label_9)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_85_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_85_10);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_12]));

DEFLABEL (label_10)
  (Wrd19.Obj) = (current_block [OBJECT_85_0]);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 3);

DEFLABEL (label_6)
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define ENVIRONMENT_LABEL_86_3 12
#define DEBUGGING_LABEL_86_2 11
#define OBJECT_86_1 10
#define OBJECT_86_0 9
#define EXECUTE_CACHE_86_6 7
#define FREE_REFERENCES_LABEL_86_0 6
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_86_4);
      goto repl_condition_1;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_condition_4)
DEFLABEL (repl_condition_1)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_86_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_86_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define ENVIRONMENT_LABEL_87_3 12
#define DEBUGGING_LABEL_87_2 11
#define OBJECT_87_1 10
#define OBJECT_87_0 9
#define EXECUTE_CACHE_87_6 7
#define FREE_REFERENCES_LABEL_87_0 6
#define NUMBER_OF_LINKER_SECTIONS_87_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_87_4);
      goto repl_reader_history_1;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_reader_history_4)
DEFLABEL (repl_reader_history_1)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_87_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_87_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define ENVIRONMENT_LABEL_88_3 13
#define DEBUGGING_LABEL_88_2 12
#define OBJECT_88_2 11
#define OBJECT_88_1 10
#define OBJECT_88_0 9
#define EXECUTE_CACHE_88_6 7
#define FREE_REFERENCES_LABEL_88_0 6
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_88_4);
      goto set_repl_reader_historyB_1;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_repl_reader_historyB_4)
DEFLABEL (set_repl_reader_historyB_1)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_88_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_88_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_2]), 3);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_88_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define ENVIRONMENT_LABEL_89_3 12
#define DEBUGGING_LABEL_89_2 11
#define OBJECT_89_1 10
#define OBJECT_89_0 9
#define EXECUTE_CACHE_89_6 7
#define FREE_REFERENCES_LABEL_89_0 6
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_89_4);
      goto repl_printer_history_1;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_printer_history_4)
DEFLABEL (repl_printer_history_1)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_89_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_89_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define ENVIRONMENT_LABEL_90_3 13
#define DEBUGGING_LABEL_90_2 12
#define OBJECT_90_2 11
#define OBJECT_90_1 10
#define OBJECT_90_0 9
#define EXECUTE_CACHE_90_6 7
#define FREE_REFERENCES_LABEL_90_0 6
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_90_4);
      goto set_repl_printer_historyB_1;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_repl_printer_historyB_4)
DEFLABEL (set_repl_printer_historyB_1)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_90_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_90_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_2]), 3);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [6]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_90_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define ENVIRONMENT_LABEL_91_3 12
#define DEBUGGING_LABEL_91_2 11
#define OBJECT_91_1 10
#define OBJECT_91_0 9
#define EXECUTE_CACHE_91_6 7
#define FREE_REFERENCES_LABEL_91_0 6
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_91_4);
      goto repl_input_queue_1;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_input_queue_4)
DEFLABEL (repl_input_queue_1)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_91_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_91_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define ENVIRONMENT_LABEL_92_3 12
#define DEBUGGING_LABEL_92_2 11
#define EXECUTE_CACHE_92_7 7
#define EXECUTE_CACHE_92_6 9
#define FREE_REFERENCES_LABEL_92_0 6
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_92_4);
      goto repl_parent_1;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_parent_4)
DEFLABEL (repl_parent_1)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_92_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define LABEL_93_6 7
#define ENVIRONMENT_LABEL_93_3 17
#define DEBUGGING_LABEL_93_2 16
#define OBJECT_93_0 15
#define EXECUTE_CACHE_93_9 9
#define EXECUTE_CACHE_93_8 11
#define EXECUTE_CACHE_93_7 13
#define FREE_REFERENCES_LABEL_93_0 8
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_93_4);
      goto nearest_repl_3;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_93_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nearest_repl_6)
DEFLABEL (nearest_repl_3)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_93_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_93_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_93_0]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_6 7
#define LABEL_94_8 9
#define ENVIRONMENT_LABEL_94_3 20
#define DEBUGGING_LABEL_94_2 19
#define EXECUTE_CACHE_94_11 11
#define EXECUTE_CACHE_94_10 13
#define EXECUTE_CACHE_94_9 15
#define EXECUTE_CACHE_94_7 17
#define FREE_REFERENCES_LABEL_94_0 10
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_94_4);
      goto skip_non_repls_3;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_94_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_94_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (skip_non_repls_6)
DEFLABEL (skip_non_repls_3)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_94_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_94_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_94_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define ENVIRONMENT_LABEL_95_3 12
#define DEBUGGING_LABEL_95_2 11
#define EXECUTE_CACHE_95_7 7
#define EXECUTE_CACHE_95_6 9
#define FREE_REFERENCES_LABEL_95_0 6
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_95_4);
      goto repl_base_2;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_base_5)
DEFLABEL (repl_base_2)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_95_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_7]));

DEFLABEL (label_6)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_5 5
#define LABEL_96_6 7
#define ENVIRONMENT_LABEL_96_3 16
#define DEBUGGING_LABEL_96_2 15
#define OBJECT_96_1 14
#define OBJECT_96_0 13
#define EXECUTE_CACHE_96_8 9
#define EXECUTE_CACHE_96_7 11
#define FREE_REFERENCES_LABEL_96_0 8
#define NUMBER_OF_LINKER_SECTIONS_96_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_96_4);
      goto nearest_repl_environment_2;

    case 1:
      current_block = (Rpc - LABEL_96_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_96_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nearest_repl_environment_5)
DEFLABEL (nearest_repl_environment_2)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd5.Obj) = (current_block [OBJECT_96_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_96_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_96_5);
  (* (--Rsp)) = Rvl;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd16.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 2);

DEFLABEL (label_7)
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_6;
  Rvl = ((Wrd12.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define LABEL_97_5 5
#define LABEL_97_6 7
#define ENVIRONMENT_LABEL_97_3 16
#define DEBUGGING_LABEL_97_2 15
#define OBJECT_97_1 14
#define OBJECT_97_0 13
#define EXECUTE_CACHE_97_8 9
#define EXECUTE_CACHE_97_7 11
#define FREE_REFERENCES_LABEL_97_0 8
#define NUMBER_OF_LINKER_SECTIONS_97_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_97_4);
      goto nearest_repl_condition_2;

    case 1:
      current_block = (Rpc - LABEL_97_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_97_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nearest_repl_condition_5)
DEFLABEL (nearest_repl_condition_2)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd5.Obj) = (current_block [OBJECT_97_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_97_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_97_5);
  (* (--Rsp)) = Rvl;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd16.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_1]), 2);

DEFLABEL (label_7)
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd14.Lng))))
    goto label_6;
  Rvl = ((Wrd12.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define ENVIRONMENT_LABEL_98_3 7
#define DEBUGGING_LABEL_98_2 6
#define OBJECT_98_1 5
#define OBJECT_98_0 4
#define FREE_REFERENCES_LABEL_98_0 4
#define NUMBER_OF_LINKER_SECTIONS_98_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_98_4);
      goto repl_history_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_history_size_3)
DEFLABEL (repl_history_size_0)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_98_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_1]), 2);

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

#define LABEL_99_4 3
#define ENVIRONMENT_LABEL_99_3 7
#define DEBUGGING_LABEL_99_2 6
#define OBJECT_99_1 5
#define OBJECT_99_0 4
#define FREE_REFERENCES_LABEL_99_0 4
#define NUMBER_OF_LINKER_SECTIONS_99_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_99_4);
      goto repl_history_elements_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_history_elements_3)
DEFLABEL (repl_history_elements_0)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_99_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 2);

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

#define LABEL_100_4 3
#define ENVIRONMENT_LABEL_100_3 8
#define DEBUGGING_LABEL_100_2 7
#define OBJECT_100_2 6
#define OBJECT_100_1 5
#define OBJECT_100_0 4
#define FREE_REFERENCES_LABEL_100_0 4
#define NUMBER_OF_LINKER_SECTIONS_100_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_100_4);
      goto set_repl_history_elementsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_repl_history_elementsB_3)
DEFLABEL (set_repl_history_elementsB_0)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_100_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_100_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define LABEL_101_5 5
#define LABEL_101_6 7
#define LABEL_101_7 9
#define ENVIRONMENT_LABEL_101_3 17
#define DEBUGGING_LABEL_101_2 16
#define OBJECT_101_3 15
#define OBJECT_101_2 14
#define OBJECT_101_1 13
#define OBJECT_101_0 12
#define FREE_REFERENCE_101_0 11
#define FREE_REFERENCES_LABEL_101_0 10
#define NUMBER_OF_LINKER_SECTIONS_101_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_101_4);
      goto repl_historyP_4;

    case 1:
      current_block = (Rpc - LABEL_101_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_101_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_101_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_historyP_10)
DEFLABEL (repl_historyP_4)
  INTERRUPT_CHECK (26, LABEL_101_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_101_0]));
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
  Rvl = (current_block [OBJECT_101_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_101_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define LABEL_102_5 5
#define ENVIRONMENT_LABEL_102_3 13
#define DEBUGGING_LABEL_102_2 12
#define OBJECT_102_0 11
#define EXECUTE_CACHE_102_7 7
#define EXECUTE_CACHE_102_6 9
#define FREE_REFERENCES_LABEL_102_0 6
#define NUMBER_OF_LINKER_SECTIONS_102_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_102_4);
      goto make_repl_history_1;

    case 1:
      current_block = (Rpc - LABEL_102_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_repl_history_4)
DEFLABEL (make_repl_history_1)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_102_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_102_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_103_4 3
#define LABEL_103_5 5
#define LABEL_103_6 7
#define LABEL_103_7 9
#define ENVIRONMENT_LABEL_103_3 17
#define DEBUGGING_LABEL_103_2 16
#define OBJECT_103_5 15
#define OBJECT_103_4 14
#define OBJECT_103_3 13
#define OBJECT_103_2 12
#define OBJECT_103_1 11
#define OBJECT_103_0 10
#define FREE_REFERENCES_LABEL_103_0 10
#define NUMBER_OF_LINKER_SECTIONS_103_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_103 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_103_4);
      goto repl_history_recordB_5;

    case 1:
      current_block = (Rpc - LABEL_103_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_103_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_103_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_history_recordB_11)
DEFLABEL (repl_history_recordB_5)
  INTERRUPT_CHECK (26, LABEL_103_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_20)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_13;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_103_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd22.uLng) == 1))
    goto label_19;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd51.Obj) = (Rsp [2]);
  ((Wrd50.pObj) [0]) = (Wrd51.Obj);

DEFLABEL (label_18)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_17;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_103_0]);
  (Rsp [1]) = (Wrd35.Obj);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd48.uLng) == 62)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_4]), 3);

DEFLABEL (label_15)
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd46.Lng))))
    goto label_14;
  ((Wrd44.pObj) [3]) = (Wrd25.Obj);
  goto label_12;

DEFLABEL (label_17)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_3]), 1);

DEFLABEL (label_8)
  (Wrd25.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_6]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_2]), 2);

DEFLABEL (label_9)
  goto label_18;

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_103_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_104_4 3
#define LABEL_104_5 5
#define LABEL_104_7 7
#define LABEL_104_8 9
#define LABEL_104_6 11
#define ENVIRONMENT_LABEL_104_3 21
#define DEBUGGING_LABEL_104_2 20
#define OBJECT_104_4 19
#define OBJECT_104_3 18
#define OBJECT_104_2 17
#define OBJECT_104_1 16
#define OBJECT_104_0 15
#define EXECUTE_CACHE_104_9 13
#define FREE_REFERENCES_LABEL_104_0 12
#define NUMBER_OF_LINKER_SECTIONS_104_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_104 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_104_4);
      goto repl_history_replace_currentB_6;

    case 1:
      current_block = (Rpc - LABEL_104_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_104_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_104_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_104_6);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_history_replace_currentB_12)
DEFLABEL (repl_history_replace_currentB_6)
  INTERRUPT_CHECK (26, LABEL_104_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_13;
  Rvl = (current_block [OBJECT_104_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_18;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd36.Lng))))
    goto label_18;
  (Wrd28.Obj) = ((Wrd34.pObj) [2]);

DEFLABEL (label_17)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_16;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd49.Lng) = ((Wrd50.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd49.Lng)))
    goto label_16;
  (Wrd51.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_15)
  (Wrd52.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_104_6);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_14;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_104_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_4]), 2);

DEFLABEL (label_16)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.Obj) = (current_block [OBJECT_104_2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_1]), 2);

DEFLABEL (label_9)
  (Wrd28.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_104_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_105_4 3
#define LABEL_105_7 5
#define LABEL_105_5 7
#define LABEL_105_8 9
#define LABEL_105_9 11
#define LABEL_105_11 13
#define LABEL_105_12 15
#define LABEL_105_13 17
#define LABEL_105_14 19
#define ENVIRONMENT_LABEL_105_3 33
#define DEBUGGING_LABEL_105_2 32
#define OBJECT_105_4 31
#define OBJECT_105_3 30
#define OBJECT_105_2 29
#define OBJECT_105_1 28
#define OBJECT_105_0 27
#define EXECUTE_CACHE_105_15 21
#define EXECUTE_CACHE_105_10 23
#define EXECUTE_CACHE_105_6 25
#define FREE_REFERENCES_LABEL_105_0 20
#define NUMBER_OF_LINKER_SECTIONS_105_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_105 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd75;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_105_4);
      goto repl_history_read_8;

    case 1:
      current_block = (Rpc - LABEL_105_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_105_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_105_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_105_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_105_11);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_105_12);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_105_13);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_105_14);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (repl_history_read_17)
DEFLABEL (repl_history_read_8)
  INTERRUPT_CHECK (26, LABEL_105_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_105_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;

DEFLABEL (label_27)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_105_2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_105_3]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_105_7);

DEFLABEL (label_26)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_25;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd46.Lng))))
    goto label_25;
  (Wrd38.Obj) = ((Wrd44.pObj) [2]);

DEFLABEL (label_24)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_23;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd60.Lng) = ((Wrd61.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd60.Lng)))
    goto label_23;
  (Wrd58.Obj) = (LONG_TO_FIXNUM (Wrd60.Lng));

DEFLABEL (label_22)
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_21;
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 26))
    goto label_21;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  (Wrd71.Lng) = ((Wrd72.Lng) - (Wrd74.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd71.Lng)))
    goto label_21;
  (Wrd67.Obj) = (LONG_TO_FIXNUM (Wrd71.Lng));

DEFLABEL (label_20)
  (Rsp [1]) = (Wrd67.Obj);
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 62))
    goto label_19;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd83.Lng))))
    goto label_19;
  (Wrd75.Obj) = ((Wrd81.pObj) [3]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_15]));

DEFLABEL (label_19)
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd87.Obj) = (current_block [OBJECT_105_4]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_14]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 2);

DEFLABEL (label_15)
  (Wrd75.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_13]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_14)
  (Wrd67.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_12]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_13)
  (Wrd58.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_105_0]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 2);

DEFLABEL (label_12)
  (Wrd38.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_31;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_31;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_30)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_29;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_29;
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd92.Lng) < (Wrd93.Lng))
    goto label_26;
  goto label_27;

DEFLABEL (label_29)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_26;

DEFLABEL (label_31)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_105_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 2);

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_106_4 3
#define LABEL_106_5 5
#define LABEL_106_7 7
#define ENVIRONMENT_LABEL_106_3 16
#define DEBUGGING_LABEL_106_2 15
#define EXECUTE_CACHE_106_9 9
#define EXECUTE_CACHE_106_8 11
#define EXECUTE_CACHE_106_6 13
#define FREE_REFERENCES_LABEL_106_0 8
#define NUMBER_OF_LINKER_SECTIONS_106_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_106 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_106_4);
      goto pe_4;

    case 1:
      current_block = (Rpc - LABEL_106_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_106_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pe_7)
DEFLABEL (pe_4)
  INTERRUPT_CHECK (26, LABEL_106_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_106_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_106_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_9]));

DEFLABEL (label_8)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_107_4 3
#define LABEL_107_5 5
#define LABEL_107_7 7
#define LABEL_107_8 9
#define LABEL_107_10 11
#define ENVIRONMENT_LABEL_107_3 23
#define DEBUGGING_LABEL_107_2 22
#define OBJECT_107_0 21
#define EXECUTE_CACHE_107_12 13
#define EXECUTE_CACHE_107_11 15
#define EXECUTE_CACHE_107_9 17
#define EXECUTE_CACHE_107_6 19
#define FREE_REFERENCES_LABEL_107_0 12
#define NUMBER_OF_LINKER_SECTIONS_107_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_107 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      goto ge_5;

    case 1:
      current_block = (Rpc - LABEL_107_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_107_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_107_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_107_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ge_8)
DEFLABEL (ge_5)
  INTERRUPT_CHECK (26, LABEL_107_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_107_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_107_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_107_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_107_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_107_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_108_4 3
#define LABEL_108_5 5
#define LABEL_108_7 7
#define LABEL_108_9 9
#define LABEL_108_15 11
#define LABEL_108_16 13
#define LABEL_108_17 15
#define LABEL_108_18 17
#define LABEL_108_12 19
#define LABEL_108_19 21
#define ENVIRONMENT_LABEL_108_3 53
#define DEBUGGING_LABEL_108_2 52
#define OBJECT_108_8 51
#define OBJECT_108_7 50
#define OBJECT_108_6 49
#define OBJECT_108_5 48
#define OBJECT_108_4 47
#define OBJECT_108_3 46
#define OBJECT_108_2 45
#define OBJECT_108_1 44
#define OBJECT_108_0 43
#define EXECUTE_CACHE_108_23 23
#define EXECUTE_CACHE_108_22 25
#define EXECUTE_CACHE_108_21 27
#define EXECUTE_CACHE_108_20 29
#define EXECUTE_CACHE_108_14 31
#define EXECUTE_CACHE_108_13 33
#define EXECUTE_CACHE_108_11 35
#define EXECUTE_CACHE_108_10 37
#define EXECUTE_CACHE_108_8 39
#define EXECUTE_CACHE_108_6 41
#define FREE_REFERENCES_LABEL_108_0 22
#define NUMBER_OF_LINKER_SECTIONS_108_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_108 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd64;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd70;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_108_4);
      goto Z___environment_16;

    case 1:
      current_block = (Rpc - LABEL_108_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_108_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_108_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_108_15);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_108_16);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_108_17);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_108_18);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_108_12);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_108_19);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___environment_20)
DEFLABEL (Z___environment_16)
  INTERRUPT_CHECK (26, LABEL_108_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_108_0]))
    goto label_22;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_21;

DEFLABEL (label_22)
  (Wrd12.Obj) = (current_block [OBJECT_108_1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_21)
DEFLABEL (label_43)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_108_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_108_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_11]));

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_108_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_14]));

DEFLABEL (label_25)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_108_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_23]));

DEFLABEL (label_26)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_108_2]);
  (Wrd59.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd59.Lng))))
    goto label_42;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd56.Obj));
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_41;

DEFLABEL (label_40)
  (Wrd20.Obj) = (current_block [OBJECT_108_4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd30.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd30.Lng)))
    goto label_27;
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_3]), 2);

DEFLABEL (label_27)
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd20.Obj));
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd24.Obj) == (Wrd26.Obj))
    goto label_29;
  (Wrd22.Obj) = (current_block [OBJECT_108_6]);
  goto label_28;

DEFLABEL (label_29)
  (Wrd22.Obj) = (current_block [OBJECT_108_5]);

DEFLABEL (label_28)
DEFLABEL (label_39)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd22.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_38;

DEFLABEL (label_37)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_16]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_108_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd70.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd70.Obj);
  goto label_30;

DEFLABEL (label_31)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_30)
DEFLABEL (label_36)
  (Wrd41.Obj) = (Rsp [0]);
  if ((Wrd41.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_22]));

DEFLABEL (label_32)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_35)
  (Wrd45.Obj) = (Rsp [0]);
  if ((Wrd45.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_33)
  (Wrd47.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd47.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_11]));

DEFLABEL (label_34)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_15]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (current_block [OBJECT_108_8]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_108_15);
  goto label_33;

DEFLABEL (label_38)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.Obj) = (current_block [OBJECT_108_7]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  goto label_36;

DEFLABEL (label_41)
  Rsp = (& (Rsp [2]));
  goto label_38;

DEFLABEL (label_42)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_19]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_3]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_41;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_108_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_108_18);
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_109_4 3
#define LABEL_109_5 5
#define LABEL_109_6 7
#define LABEL_109_10 9
#define LABEL_109_7 11
#define ENVIRONMENT_LABEL_109_3 26
#define DEBUGGING_LABEL_109_2 25
#define OBJECT_109_3 24
#define OBJECT_109_2 23
#define OBJECT_109_1 22
#define OBJECT_109_0 21
#define EXECUTE_CACHE_109_12 13
#define EXECUTE_CACHE_109_11 15
#define EXECUTE_CACHE_109_9 17
#define EXECUTE_CACHE_109_8 19
#define FREE_REFERENCES_LABEL_109_0 12
#define NUMBER_OF_LINKER_SECTIONS_109_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_109 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_109_4);
      goto re_6;

    case 1:
      current_block = (Rpc - LABEL_109_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_109_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_109_10);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_109_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (re_10)
DEFLABEL (re_6)
  INTERRUPT_CHECK (26, LABEL_109_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_109_0]))
    goto label_12;
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_11;

DEFLABEL (label_12)
  (Wrd17.Obj) = (current_block [OBJECT_109_1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_11)
DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_109_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_109_6);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_14;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd12.Lng))))
    goto label_14;
  (Wrd7.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_109_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_9]));

DEFLABEL (label_14)
  (Wrd15.Obj) = (current_block [OBJECT_109_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_110_4 3
#define LABEL_110_5 5
#define LABEL_110_8 7
#define LABEL_110_6 9
#define ENVIRONMENT_LABEL_110_3 22
#define DEBUGGING_LABEL_110_2 21
#define OBJECT_110_3 20
#define OBJECT_110_2 19
#define OBJECT_110_1 18
#define OBJECT_110_0 17
#define EXECUTE_CACHE_110_10 11
#define EXECUTE_CACHE_110_9 13
#define EXECUTE_CACHE_110_7 15
#define FREE_REFERENCES_LABEL_110_0 10
#define NUMBER_OF_LINKER_SECTIONS_110_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_110 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_110_4);
      goto in_5;

    case 1:
      current_block = (Rpc - LABEL_110_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_110_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_110_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (in_9)
DEFLABEL (in_5)
  INTERRUPT_CHECK (26, LABEL_110_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_110_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_110_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_110_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_110_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_14;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd12.Lng))))
    goto label_14;
  (Wrd7.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [1]);
  if ((Wrd19.Obj) == (current_block [OBJECT_110_2]))
    goto label_11;
  Wrd21 = Wrd19;
  goto label_10;

DEFLABEL (label_11)
  (Wrd21.Obj) = (current_block [OBJECT_110_3]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_110_9]));

DEFLABEL (label_14)
  (Wrd15.Obj) = (current_block [OBJECT_110_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_111_4 3
#define LABEL_111_5 5
#define LABEL_111_8 7
#define LABEL_111_9 9
#define LABEL_111_6 11
#define ENVIRONMENT_LABEL_111_3 24
#define DEBUGGING_LABEL_111_2 23
#define OBJECT_111_3 22
#define OBJECT_111_2 21
#define OBJECT_111_1 20
#define OBJECT_111_0 19
#define EXECUTE_CACHE_111_11 13
#define EXECUTE_CACHE_111_10 15
#define EXECUTE_CACHE_111_7 17
#define FREE_REFERENCES_LABEL_111_0 12
#define NUMBER_OF_LINKER_SECTIONS_111_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_111 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_111_4);
      goto out_6;

    case 1:
      current_block = (Rpc - LABEL_111_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_111_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_111_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_111_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (out_11)
DEFLABEL (out_6)
  INTERRUPT_CHECK (26, LABEL_111_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_111_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_111_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_18;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd12.Lng))))
    goto label_18;
  (Wrd7.Obj) = ((Wrd10.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [1]);
  if ((Wrd19.Obj) == (current_block [OBJECT_111_2]))
    goto label_13;
  Wrd21 = Wrd19;
  goto label_12;

DEFLABEL (label_13)
  (Wrd21.Obj) = (current_block [OBJECT_111_3]);

DEFLABEL (label_12)
DEFLABEL (label_16)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_15;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd28.Lng) = ((Wrd29.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_15;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111_10]));

DEFLABEL (label_15)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_9)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_18)
  (Wrd15.Obj) = (current_block [OBJECT_111_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_112_4 3
#define LABEL_112_5 5
#define ENVIRONMENT_LABEL_112_3 13
#define DEBUGGING_LABEL_112_2 12
#define OBJECT_112_0 11
#define EXECUTE_CACHE_112_7 7
#define EXECUTE_CACHE_112_6 9
#define FREE_REFERENCES_LABEL_112_0 6
#define NUMBER_OF_LINKER_SECTIONS_112_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_112 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_112_4);
      goto read_eval_print_1;

    case 1:
      current_block = (Rpc - LABEL_112_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (read_eval_print_4)
DEFLABEL (read_eval_print_1)
  INTERRUPT_CHECK (26, LABEL_112_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_112_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_112_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_113_4 3
#define LABEL_113_5 5
#define ENVIRONMENT_LABEL_113_3 14
#define DEBUGGING_LABEL_113_2 13
#define OBJECT_113_1 12
#define OBJECT_113_0 11
#define EXECUTE_CACHE_113_7 7
#define EXECUTE_CACHE_113_6 9
#define FREE_REFERENCES_LABEL_113_0 6
#define NUMBER_OF_LINKER_SECTIONS_113_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_113 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_113_4);
      goto ve_1;

    case 1:
      current_block = (Rpc - LABEL_113_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ve_4)
DEFLABEL (ve_1)
  INTERRUPT_CHECK (26, LABEL_113_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_113_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_113_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_113_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_113_1]);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_113_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_114_4 3
#define LABEL_114_5 5
#define LABEL_114_8 7
#define LABEL_114_10 9
#define ENVIRONMENT_LABEL_114_3 24
#define DEBUGGING_LABEL_114_2 23
#define OBJECT_114_1 22
#define OBJECT_114_0 21
#define EXECUTE_CACHE_114_12 11
#define EXECUTE_CACHE_114_11 13
#define EXECUTE_CACHE_114_9 15
#define EXECUTE_CACHE_114_7 17
#define EXECUTE_CACHE_114_6 19
#define FREE_REFERENCES_LABEL_114_0 10
#define NUMBER_OF_LINKER_SECTIONS_114_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_114 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_114_4);
      goto proceed_5;

    case 1:
      current_block = (Rpc - LABEL_114_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_114_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_114_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (proceed_8)
DEFLABEL (proceed_5)
  INTERRUPT_CHECK (26, LABEL_114_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_114_0]))
    goto label_9;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_114_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_114_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_114_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_114_8);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_114_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_114_10);
  (Wrd5.Obj) = (current_block [OBJECT_114_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_114_12]));

DEFLABEL (label_9)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_114_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_115_4 3
#define LABEL_115_5 5
#define ENVIRONMENT_LABEL_115_3 11
#define DEBUGGING_LABEL_115_2 10
#define OBJECT_115_1 9
#define OBJECT_115_0 8
#define FREE_REFERENCE_115_0 7
#define FREE_REFERENCES_LABEL_115_0 6
#define NUMBER_OF_LINKER_SECTIONS_115_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_115 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_115_4);
      goto bkpt_2;

    case 1:
      current_block = (Rpc - LABEL_115_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bkpt_6)
DEFLABEL (bkpt_2)
  INTERRUPT_CHECK (26, LABEL_115_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_115_0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_115_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_8;
  Wrd15 = Wrd19;

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_115_1]), 2);

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_115_5])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_116_4 3
#define LABEL_116_5 5
#define LABEL_116_6 7
#define TAG_116_7 2
#define LABEL_116_10 9
#define ENVIRONMENT_LABEL_116_3 22
#define DEBUGGING_LABEL_116_2 21
#define OBJECT_116_1 20
#define OBJECT_116_0 19
#define EXECUTE_CACHE_116_12 11
#define EXECUTE_CACHE_116_11 13
#define EXECUTE_CACHE_116_9 15
#define EXECUTE_CACHE_116_8 17
#define FREE_REFERENCES_LABEL_116_0 10
#define NUMBER_OF_LINKER_SECTIONS_116_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_116 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_116_4);
      goto breakpoint_procedure_3;

    case 1:
      current_block = (Rpc - LABEL_116_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_116_6);
      goto lambda_7;

    case 3:
      current_block = (Rpc - LABEL_116_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (breakpoint_procedure_6)
DEFLABEL (breakpoint_procedure_3)
  INTERRUPT_CHECK (26, LABEL_116_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_116_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_116_6])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_116_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_116_0]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_116_1]);
  (Rsp [4]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_9]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_116_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_116_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_117_5 3
#define LABEL_117_4 5
#define ENVIRONMENT_LABEL_117_3 15
#define DEBUGGING_LABEL_117_2 14
#define OBJECT_117_2 13
#define OBJECT_117_1 12
#define OBJECT_117_0 11
#define EXECUTE_CACHE_117_7 7
#define EXECUTE_CACHE_117_6 9
#define FREE_REFERENCES_LABEL_117_0 6
#define NUMBER_OF_LINKER_SECTIONS_117_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_117 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_117_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_117_4);
      goto breakpoint_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (breakpoint_9)
DEFLABEL (breakpoint_6)
  INTERRUPT_CHECK (26, LABEL_117_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_117_0])))
    goto label_17;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_117_5);
  (Wrd11.Obj) = Rvl;

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (current_block [OBJECT_117_0]))
    goto label_11;
  Wrd14 = Wrd12;
  goto label_10;

DEFLABEL (label_11)
  (Wrd14.Obj) = (current_block [OBJECT_117_1]);

DEFLABEL (label_10)
DEFLABEL (label_15)
  (Wrd15.Obj) = (Rsp [2]);
  if ((Wrd15.Obj) == (current_block [OBJECT_117_0]))
    goto label_13;
  Wrd17 = Wrd15;
  goto label_12;

DEFLABEL (label_13)
  (Wrd17.Obj) = (current_block [OBJECT_117_2]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  (Rsp [0]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117_7]));

DEFLABEL (label_17)
  Wrd11 = Wrd8;
  Rsp = (& (Rsp [1]));
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_118_4 3
#define ENVIRONMENT_LABEL_118_3 11
#define DEBUGGING_LABEL_118_2 10
#define OBJECT_118_2 9
#define OBJECT_118_1 8
#define OBJECT_118_0 7
#define EXECUTE_CACHE_118_5 5
#define FREE_REFERENCES_LABEL_118_0 4
#define NUMBER_OF_LINKER_SECTIONS_118_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_118 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_118_4);
      goto signal_breakpoint_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (signal_breakpoint_5)
DEFLABEL (signal_breakpoint_2)
  INTERRUPT_CHECK (26, LABEL_118_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  if ((Wrd8.Obj) == (current_block [OBJECT_118_0]))
    goto label_7;
  Wrd10 = Wrd8;
  goto label_6;

DEFLABEL (label_7)
  (Wrd10.Obj) = (current_block [OBJECT_118_1]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_118_2]);
  (Rsp [4]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_118_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_119_4 3
#define LABEL_119_5 5
#define TAG_119_6 1
#define LABEL_119_10 7
#define LABEL_119_8 9
#define TAG_119_9 3
#define LABEL_119_11 11
#define TAG_119_12 4
#define LABEL_119_14 13
#define LABEL_119_16 15
#define TAG_119_17 6
#define ENVIRONMENT_LABEL_119_3 30
#define DEBUGGING_LABEL_119_2 29
#define OBJECT_119_1 28
#define OBJECT_119_0 27
#define EXECUTE_CACHE_119_18 17
#define EXECUTE_CACHE_119_15 19
#define EXECUTE_CACHE_119_13 21
#define EXECUTE_CACHE_119_7 23
#define FREE_REFERENCE_119_0 26
#define FREE_REFERENCES_LABEL_119_0 16
#define NUMBER_OF_LINKER_SECTIONS_119_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_119 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd46;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_119_4);
      goto signal_breakpoint_1_8;

    case 1:
      current_block = (Rpc - LABEL_119_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_119_10);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_119_8);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_119_11);
      goto lambda_15;

    case 5:
      current_block = (Rpc - LABEL_119_14);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_119_16);
      goto lambda_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (signal_breakpoint_1_12)
DEFLABEL (signal_breakpoint_1_8)
  INTERRUPT_CHECK (26, LABEL_119_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_119_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_119_5])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [6]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_119_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_119_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_17;

DEFLABEL (label_18)
  (Wrd46.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_17)
DEFLABEL (label_21)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_119_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_119_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_119_8])));
  Rhp += 4;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd28 = Wrd17;
  (Wrd31.Obj) = ((Wrd13.pObj) [3]);
  ((Wrd28.pObj) [2]) = (Wrd31.Obj);
  (Wrd27.Obj) = ((Wrd13.pObj) [4]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd13.pObj) [5]);
  ((Wrd28.pObj) [4]) = (Wrd23.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [5]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_119_0]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_20;
  Wrd33 = Wrd37;

DEFLABEL (label_19)
  (Rsp [4]) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd41.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_119_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_119_11])));
  Rhp += 1;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd41.pObj)));
  Wrd42 = Wrd41;
  (Wrd43.Obj) = (Rsp [5]);
  ((Wrd42.pObj) [2]) = (Wrd43.Obj);
  (Rsp [3]) = (Wrd40.Obj);
  (Wrd44.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_119_13]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_119_10])), (Wrd34.pObj));

DEFLABEL (label_10)
  (Wrd33.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_119_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_119_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_119_14);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_119_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_119_16])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd14.pObj) [5]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_119_11);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_119_1]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_119_16);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_119_18]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_120_5 3
#define LABEL_120_4 5
#define LABEL_120_9 7
#define TAG_120_10 2
#define LABEL_120_7 9
#define LABEL_120_11 11
#define LABEL_120_12 13
#define LABEL_120_14 15
#define TAG_120_15 6
#define ENVIRONMENT_LABEL_120_3 30
#define DEBUGGING_LABEL_120_2 29
#define OBJECT_120_3 28
#define OBJECT_120_2 27
#define OBJECT_120_1 26
#define OBJECT_120_0 25
#define EXECUTE_CACHE_120_16 17
#define EXECUTE_CACHE_120_13 19
#define EXECUTE_CACHE_120_8 21
#define EXECUTE_CACHE_120_6 23
#define FREE_REFERENCES_LABEL_120_0 16
#define NUMBER_OF_LINKER_SECTIONS_120_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_120 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd13;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_120_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_120_4);
      goto get_breakpoint_environment_11;

    case 2:
      current_block = (Rpc - LABEL_120_9);
      goto lambda_15;

    case 3:
      current_block = (Rpc - LABEL_120_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_120_11);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_120_12);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_120_14);
      goto lambda_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_breakpoint_environment_14)
DEFLABEL (get_breakpoint_environment_11)
  INTERRUPT_CHECK (26, LABEL_120_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_120_0])))
    goto label_19;
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_120_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_18)
  (Wrd13.Obj) = (Rsp [0]);
  if ((Wrd13.Obj) == (current_block [OBJECT_120_1]))
    goto label_17;
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_120_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_120_9])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd20 = Wrd17;
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_120_7);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_120_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_120_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_120_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_120_11);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_120_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_120_14])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_18;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_120_9);

DEFLABEL (lambda_3)
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

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_120_14);

DEFLABEL (lambda_8)
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

#define LABEL_121_4 3
#define LABEL_121_5 5
#define LABEL_121_7 7
#define LABEL_121_9 9
#define LABEL_121_10 11
#define ENVIRONMENT_LABEL_121_3 21
#define DEBUGGING_LABEL_121_2 20
#define OBJECT_121_0 19
#define EXECUTE_CACHE_121_11 13
#define EXECUTE_CACHE_121_8 15
#define EXECUTE_CACHE_121_6 17
#define FREE_REFERENCES_LABEL_121_0 12
#define NUMBER_OF_LINKER_SECTIONS_121_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_121 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_121_4);
      goto continuation_first_subproblem_environment_5;

    case 1:
      current_block = (Rpc - LABEL_121_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_121_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_121_9);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_121_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_first_subproblem_environment_8)
DEFLABEL (continuation_first_subproblem_environment_5)
  INTERRUPT_CHECK (26, LABEL_121_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_121_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_121_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = (current_block [OBJECT_121_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_121_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_121_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121_9]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_9)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_121_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_121_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_121_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = (current_block [OBJECT_121_0]);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (Rsp [1]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_122_4 3
#define LABEL_122_5 5
#define LABEL_122_8 7
#define LABEL_122_10 9
#define LABEL_122_6 11
#define LABEL_122_9 13
#define LABEL_122_13 15
#define LABEL_122_15 17
#define LABEL_122_14 19
#define LABEL_122_17 21
#define LABEL_122_19 23
#define LABEL_122_18 25
#define LABEL_122_20 27
#define LABEL_122_22 29
#define LABEL_122_21 31
#define LABEL_122_23 33
#define LABEL_122_25 35
#define LABEL_122_24 37
#define LABEL_122_29 39
#define LABEL_122_27 41
#define TAG_122_28 19
#define LABEL_122_30 43
#define LABEL_122_31 45
#define ENVIRONMENT_LABEL_122_3 79
#define DEBUGGING_LABEL_122_2 78
#define OBJECT_122_7 77
#define OBJECT_122_6 76
#define OBJECT_122_5 75
#define OBJECT_122_4 74
#define OBJECT_122_3 73
#define OBJECT_122_2 72
#define OBJECT_122_1 71
#define OBJECT_122_0 70
#define EXECUTE_CACHE_122_33 47
#define EXECUTE_CACHE_122_32 49
#define EXECUTE_CACHE_122_26 51
#define EXECUTE_CACHE_122_16 53
#define EXECUTE_CACHE_122_12 55
#define EXECUTE_CACHE_122_11 57
#define EXECUTE_CACHE_122_7 59
#define FREE_REFERENCE_122_0 62
#define FREE_ASSIGNMENT_122_5 64
#define FREE_ASSIGNMENT_122_4 65
#define FREE_ASSIGNMENT_122_3 66
#define FREE_ASSIGNMENT_122_2 67
#define FREE_ASSIGNMENT_122_1 68
#define FREE_ASSIGNMENT_122_0 69
#define FREE_REFERENCES_LABEL_122_0 46
#define NUMBER_OF_LINKER_SECTIONS_122_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_122 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_122_4);
      goto initialize_breakpoint_conditionB_13;

    case 1:
      current_block = (Rpc - LABEL_122_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_122_8);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_122_10);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_122_6);
      goto lambda_0;

    case 5:
      current_block = (Rpc - LABEL_122_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_122_13);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_122_15);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_122_14);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_122_17);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_122_19);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_122_18);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_122_20);
      goto label_21;

    case 13:
      current_block = (Rpc - LABEL_122_22);
      goto label_22;

    case 14:
      current_block = (Rpc - LABEL_122_21);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_122_23);
      goto label_23;

    case 16:
      current_block = (Rpc - LABEL_122_25);
      goto label_24;

    case 17:
      current_block = (Rpc - LABEL_122_24);
      goto continuation_6;

    case 18:
      current_block = (Rpc - LABEL_122_29);
      goto label_25;

    case 19:
      current_block = (Rpc - LABEL_122_27);
      goto lambda_29;

    case 20:
      current_block = (Rpc - LABEL_122_30);
      goto continuation_8;

    case 21:
      current_block = (Rpc - LABEL_122_31);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_breakpoint_conditionB_27)
DEFLABEL (initialize_breakpoint_conditionB_13)
  INTERRUPT_CHECK (26, LABEL_122_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_122_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_122_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_122_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_122_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_122_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_57;

DEFLABEL (label_56)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_55)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_122_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_54;
  Wrd21 = Wrd25;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_122_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_122_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_122_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_50)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_122_3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_122_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_49;
  Wrd22 = Wrd26;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_122_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_122_14);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_122_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_45)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_122_4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_122_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_44;
  Wrd22 = Wrd26;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_122_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_122_18);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_122_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_42;

DEFLABEL (label_41)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_40)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_122_5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_122_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_39;
  Wrd22 = Wrd26;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_122_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_122_21);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_122_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_35)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_122_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_122_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_34;
  Wrd22 = Wrd26;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_122_26]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_122_24);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_122_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_122_27])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_122_5]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_32;

DEFLABEL (label_31)
  ((Wrd11.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_30)
  Rvl = (current_block [OBJECT_122_6]);
  goto pop_return;

DEFLABEL (label_32)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_31;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_122_29])), (Wrd11.pObj), (Wrd6.Obj));

DEFLABEL (label_25)
  goto label_30;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_122_25])), (Wrd23.pObj));

DEFLABEL (label_24)
  (Wrd22.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_37)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_36;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_122_23])), (Wrd6.pObj), Rvl);

DEFLABEL (label_23)
  goto label_35;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_122_22])), (Wrd23.pObj));

DEFLABEL (label_22)
  (Wrd22.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_42)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_41;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_122_20])), (Wrd6.pObj), Rvl);

DEFLABEL (label_21)
  goto label_40;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_122_19])), (Wrd23.pObj));

DEFLABEL (label_20)
  (Wrd22.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_47)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_46;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_122_17])), (Wrd6.pObj), Rvl);

DEFLABEL (label_19)
  goto label_45;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_122_15])), (Wrd23.pObj));

DEFLABEL (label_18)
  (Wrd22.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_52)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_122_13])), (Wrd6.pObj), Rvl);

DEFLABEL (label_17)
  goto label_50;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_122_10])), (Wrd22.pObj));

DEFLABEL (label_16)
  (Wrd21.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_57)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_56;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_122_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_15)
  goto label_55;

DEFLABEL (lambda_28)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_122_6);
  (Wrd5.Obj) = (current_block [OBJECT_122_2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_122_12]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_122_27);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_122_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_122_30);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122_31]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_122_32]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_122_31);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_122_33]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_123_5 3
#define LABEL_123_4 5
#define LABEL_123_6 7
#define LABEL_123_12 9
#define TAG_123_13 3
#define LABEL_123_10 11
#define TAG_123_11 4
#define LABEL_123_15 13
#define LABEL_123_16 15
#define LABEL_123_17 17
#define LABEL_123_7 19
#define LABEL_123_8 21
#define LABEL_123_18 23
#define LABEL_123_20 25
#define ENVIRONMENT_LABEL_123_3 46
#define DEBUGGING_LABEL_123_2 45
#define OBJECT_123_1 44
#define OBJECT_123_0 43
#define EXECUTE_CACHE_123_23 27
#define EXECUTE_CACHE_123_22 29
#define EXECUTE_CACHE_123_21 31
#define EXECUTE_CACHE_123_19 33
#define EXECUTE_CACHE_123_14 35
#define EXECUTE_CACHE_123_9 37
#define FREE_REFERENCE_123_0 40
#define FREE_ASSIGNMENT_123_0 42
#define FREE_REFERENCES_LABEL_123_0 26
#define NUMBER_OF_LINKER_SECTIONS_123_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rep_so_code_123 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd8;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_123_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_123_4);
      goto standard_breakpoint_handler_15;

    case 2:
      current_block = (Rpc - LABEL_123_6);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_123_12);
      goto lambda_24;

    case 4:
      current_block = (Rpc - LABEL_123_10);
      goto swapB_23;

    case 5:
      current_block = (Rpc - LABEL_123_15);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_123_16);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_123_17);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_123_7);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_123_8);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_123_18);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_123_20);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_breakpoint_handler_22)
DEFLABEL (standard_breakpoint_handler_15)
  INTERRUPT_CHECK (26, LABEL_123_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_123_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_28;
  Wrd8 = Wrd12;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd8.Obj);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd17.pObj) = (& (Rhp [-1]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_123_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_123_10])));
  Rhp += 1;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  ((Wrd32.pObj) [2]) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_123_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_123_12])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  (Wrd27.Obj) = (Rsp [4]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  ((Wrd26.pObj) [3]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd33.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  (Rsp [0]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_123_14]));

DEFLABEL (label_25)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_26)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_123_9]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_123_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_123_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_123_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_123_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_123_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_123_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_123_19]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_123_18);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_123_22]));

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_123_6])), (Wrd9.pObj));

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_27;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_123_5);
  goto label_26;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_123_12);

DEFLABEL (lambda_1)
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

DEFLABEL (swapB_23)
  CLOSURE_HEADER (LABEL_123_10);

DEFLABEL (swapB_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_123_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  Wrd5 = Wrd9;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_123_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_32)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_123_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_123_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_123_17])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_20)
  goto label_29;

DEFLABEL (label_34)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_123_16])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_19)
  goto label_32;

DEFLABEL (label_37)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_36;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_123_15])), (Wrd6.pObj));

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_15 13
#define LABEL_10 15
#define LABEL_13 17
#define LABEL_19 19
#define LABEL_14 21
#define LABEL_17 23
#define LABEL_23 25
#define LABEL_18 27
#define LABEL_21 29
#define LABEL_26 31
#define LABEL_22 33
#define LABEL_24 35
#define LABEL_29 37
#define LABEL_25 39
#define LABEL_27 41
#define LABEL_33 43
#define LABEL_28 45
#define LABEL_31 47
#define LABEL_36 49
#define LABEL_32 51
#define LABEL_34 53
#define LABEL_39 55
#define LABEL_35 57
#define LABEL_37 59
#define LABEL_42 61
#define LABEL_38 63
#define LABEL_40 65
#define LABEL_45 67
#define LABEL_41 69
#define LABEL_43 71
#define LABEL_44 73
#define LABEL_46 75
#define LABEL_47 77
#define LABEL_48 79
#define LABEL_49 81
#define LABEL_50 83
#define LABEL_55 85
#define LABEL_51 87
#define LABEL_53 89
#define LABEL_54 91
#define LABEL_57 93
#define LABEL_62 95
#define LABEL_58 97
#define TAG_59 47
#define LABEL_64 99
#define LABEL_60 101
#define LABEL_61 103
#define LABEL_63 105
#define LABEL_68 107
#define LABEL_66 109
#define LABEL_67 111
#define LABEL_72 113
#define LABEL_69 115
#define LABEL_75 117
#define LABEL_70 119
#define LABEL_71 121
#define LABEL_73 123
#define LABEL_74 125
#define LABEL_76 127
#define LABEL_81 129
#define LABEL_77 131
#define TAG_78 64
#define LABEL_79 133
#define LABEL_80 135
#define LABEL_82 137
#define LABEL_83 139
#define LABEL_84 141
#define ENVIRONMENT_LABEL_3 227
#define DEBUGGING_LABEL_2 226
#define PURIFICATION_ROOT 225
#define OBJECT_58 224
#define OBJECT_57 223
#define OBJECT_56 222
#define OBJECT_55 221
#define OBJECT_54 220
#define OBJECT_53 219
#define OBJECT_52 218
#define OBJECT_51 217
#define OBJECT_50 216
#define OBJECT_49 215
#define OBJECT_48 214
#define OBJECT_47 213
#define OBJECT_46 212
#define OBJECT_45 211
#define OBJECT_44 210
#define OBJECT_43 209
#define OBJECT_42 208
#define OBJECT_41 207
#define OBJECT_40 206
#define OBJECT_39 205
#define OBJECT_38 204
#define OBJECT_37 203
#define OBJECT_36 202
#define OBJECT_35 201
#define OBJECT_34 200
#define OBJECT_33 199
#define OBJECT_32 198
#define OBJECT_31 197
#define OBJECT_30 196
#define OBJECT_29 195
#define OBJECT_28 194
#define OBJECT_27 193
#define OBJECT_26 192
#define OBJECT_25 191
#define OBJECT_24 190
#define OBJECT_23 189
#define OBJECT_22 188
#define OBJECT_21 187
#define OBJECT_20 186
#define OBJECT_19 185
#define OBJECT_18 184
#define OBJECT_17 183
#define OBJECT_16 182
#define OBJECT_15 181
#define OBJECT_14 180
#define OBJECT_13 179
#define OBJECT_12 178
#define OBJECT_11 177
#define OBJECT_10 176
#define OBJECT_9 175
#define OBJECT_8 174
#define OBJECT_7 173
#define OBJECT_6 172
#define OBJECT_5 171
#define OBJECT_4 170
#define OBJECT_3 169
#define OBJECT_2 168
#define OBJECT_1 167
#define OBJECT_0 166
#define EXECUTE_CACHE_30 143
#define EXECUTE_CACHE_20 145
#define EXECUTE_CACHE_16 147
#define EXECUTE_CACHE_12 149
#define EXECUTE_CACHE_8 151
#define FREE_REFERENCE_2 154
#define FREE_REFERENCE_1 155
#define FREE_REFERENCE_0 156
#define GLOBAL_EXECUTE_CACHE_65 158
#define GLOBAL_EXECUTE_CACHE_56 160
#define GLOBAL_EXECUTE_CACHE_52 162
#define GLOBAL_EXECUTE_CACHE_5 164
#define FREE_REFERENCES_LABEL_0 142
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rep_so_113e37dfbb794e0c (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_70;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_15);
      goto label_71;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_19);
      goto label_72;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_23);
      goto label_73;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_26);
      goto label_74;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_29);
      goto label_75;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto continuation_11;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_14;

    case 20:
      current_block = (Rpc - LABEL_33);
      goto label_76;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto continuation_13;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto continuation_16;

    case 23:
      current_block = (Rpc - LABEL_36);
      goto label_77;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_15;

    case 25:
      current_block = (Rpc - LABEL_34);
      goto continuation_18;

    case 26:
      current_block = (Rpc - LABEL_39);
      goto label_78;

    case 27:
      current_block = (Rpc - LABEL_35);
      goto continuation_17;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto continuation_20;

    case 29:
      current_block = (Rpc - LABEL_42);
      goto label_79;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto continuation_19;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto continuation_22;

    case 32:
      current_block = (Rpc - LABEL_45);
      goto label_80;

    case 33:
      current_block = (Rpc - LABEL_41);
      goto continuation_21;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto continuation_24;

    case 35:
      current_block = (Rpc - LABEL_44);
      goto continuation_23;

    case 36:
      current_block = (Rpc - LABEL_46);
      goto continuation_26;

    case 37:
      current_block = (Rpc - LABEL_47);
      goto continuation_27;

    case 38:
      current_block = (Rpc - LABEL_48);
      goto continuation_34;

    case 39:
      current_block = (Rpc - LABEL_49);
      goto continuation_35;

    case 40:
      current_block = (Rpc - LABEL_50);
      goto continuation_43;

    case 41:
      current_block = (Rpc - LABEL_55);
      goto label_81;

    case 42:
      current_block = (Rpc - LABEL_51);
      goto continuation_42;

    case 43:
      current_block = (Rpc - LABEL_53);
      goto continuation_51;

    case 44:
      current_block = (Rpc - LABEL_54);
      goto continuation_44;

    case 45:
      current_block = (Rpc - LABEL_57);
      goto continuation_52;

    case 46:
      current_block = (Rpc - LABEL_62);
      goto label_82;

    case 47:
      current_block = (Rpc - LABEL_58);
      goto make_repl_state_89;

    case 48:
      current_block = (Rpc - LABEL_64);
      goto label_83;

    case 49:
      current_block = (Rpc - LABEL_60);
      goto continuation_54;

    case 50:
      current_block = (Rpc - LABEL_61);
      goto continuation_53;

    case 51:
      current_block = (Rpc - LABEL_63);
      goto continuation_47;

    case 52:
      current_block = (Rpc - LABEL_68);
      goto label_84;

    case 53:
      current_block = (Rpc - LABEL_66);
      goto continuation_55;

    case 54:
      current_block = (Rpc - LABEL_67);
      goto continuation_48;

    case 55:
      current_block = (Rpc - LABEL_72);
      goto label_85;

    case 56:
      current_block = (Rpc - LABEL_69);
      goto continuation_59;

    case 57:
      current_block = (Rpc - LABEL_75);
      goto label_86;

    case 58:
      current_block = (Rpc - LABEL_70);
      goto continuation_58;

    case 59:
      current_block = (Rpc - LABEL_71);
      goto continuation_46;

    case 60:
      current_block = (Rpc - LABEL_73);
      goto continuation_64;

    case 61:
      current_block = (Rpc - LABEL_74);
      goto continuation_60;

    case 62:
      current_block = (Rpc - LABEL_76);
      goto continuation_65;

    case 63:
      current_block = (Rpc - LABEL_81);
      goto label_87;

    case 64:
      current_block = (Rpc - LABEL_77);
      goto Z__make_repl_history_90;

    case 65:
      current_block = (Rpc - LABEL_79);
      goto continuation_67;

    case 66:
      current_block = (Rpc - LABEL_80);
      goto continuation_66;

    case 67:
      current_block = (Rpc - LABEL_82);
      goto label_92;

    case 68:
      current_block = (Rpc - LABEL_83);
      goto label_93;

    case 69:
      current_block = (Rpc - LABEL_84);
      goto expression_69;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_69)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_83])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_93)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_92)
  {
    static const short sections [] =
      {
	0,
	3,
	3,
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
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	0,
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
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	2,
	2,
	1,
	2,
	1,
	1,
	1,
	1,
	3,
	1,
	1,
	1,
	1,
	2,
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
	2,
	1,
	1,
	0,
	2,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	2,
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
	2,
	2,
	2,
	2,
	3,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	3,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 123)
      goto label_91;
    blocks = (current_block [OBJECT_58]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_82])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_91)
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
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_123;
  Wrd12 = Wrd16;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_121;
  Wrd11 = Wrd15;

DEFLABEL (label_120)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_119;
  Wrd12 = Wrd16;

DEFLABEL (label_118)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_117;
  Wrd12 = Wrd16;

DEFLABEL (label_116)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_115;
  Wrd12 = Wrd16;

DEFLABEL (label_114)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_113;
  Wrd12 = Wrd16;

DEFLABEL (label_112)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_111;
  Wrd12 = Wrd16;

DEFLABEL (label_110)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_109;
  Wrd12 = Wrd16;

DEFLABEL (label_108)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_35);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_107;
  Wrd12 = Wrd16;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_38);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_105;
  Wrd12 = Wrd16;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_103;
  Wrd12 = Wrd16;

DEFLABEL (label_102)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27]);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_28]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_29]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_30]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_34]);
  (Wrd16.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_35]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_52]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_51);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_101;
  Wrd11 = Wrd15;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_56]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_54);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_99;
  Wrd11 = Wrd15;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_56]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_61);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_52]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_70);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_97;
  Wrd11 = Wrd15;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_56]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_74);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_78);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_77])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_95;
  Wrd11 = Wrd15;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_56]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_80);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd5.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_56]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81])), (Wrd12.pObj));

DEFLABEL (label_87)
  (Wrd11.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75])), (Wrd12.pObj));

DEFLABEL (label_86)
  (Wrd11.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62])), (Wrd12.pObj));

DEFLABEL (label_82)
  (Wrd11.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55])), (Wrd12.pObj));

DEFLABEL (label_81)
  (Wrd11.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45])), (Wrd13.pObj));

DEFLABEL (label_80)
  (Wrd12.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd13.pObj));

DEFLABEL (label_79)
  (Wrd12.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39])), (Wrd13.pObj));

DEFLABEL (label_78)
  (Wrd12.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd13.pObj));

DEFLABEL (label_77)
  (Wrd12.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd13.pObj));

DEFLABEL (label_76)
  (Wrd12.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd13.pObj));

DEFLABEL (label_75)
  (Wrd12.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd13.pObj));

DEFLABEL (label_74)
  (Wrd12.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd13.pObj));

DEFLABEL (label_73)
  (Wrd12.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd13.pObj));

DEFLABEL (label_72)
  (Wrd12.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd12.pObj));

DEFLABEL (label_71)
  (Wrd11.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd13.pObj));

DEFLABEL (label_70)
  (Wrd12.Obj) = Rvl;
  goto label_122;

DEFLABEL (make_repl_state_89)
  CLOSURE_HEADER (LABEL_58);

DEFLABEL (make_repl_state_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_129;
  Wrd9 = Wrd13;

DEFLABEL (label_128)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_65]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_63);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_127;
  Wrd9 = Wrd13;

DEFLABEL (label_126)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_65]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_67);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_125;
  Wrd9 = Wrd13;

DEFLABEL (label_124)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_65]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd6.Obj) = (* (Rsp++));
  (Wrd15.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd10.pObj) = (& (Rhp [-8]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd10.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72])), (Wrd10.pObj));

DEFLABEL (label_85)
  (Wrd9.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68])), (Wrd10.pObj));

DEFLABEL (label_84)
  (Wrd9.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64])), (Wrd10.pObj));

DEFLABEL (label_83)
  (Wrd9.Obj) = Rvl;
  goto label_128;

DEFLABEL (Z__make_repl_history_90)
  CLOSURE_HEADER (LABEL_77);

DEFLABEL (Z__make_repl_history_62)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rep_so_113e37dfbb794e0c [123] =
  {
    { "rep_so_code_1", 12, rep_so_code_1 },
    { "rep_so_code_2", 9, rep_so_code_2 },
    { "rep_so_code_3", 2, rep_so_code_3 },
    { "rep_so_code_4", 2, rep_so_code_4 },
    { "rep_so_code_5", 1, rep_so_code_5 },
    { "rep_so_code_6", 10, rep_so_code_6 },
    { "rep_so_code_7", 3, rep_so_code_7 },
    { "rep_so_code_8", 2, rep_so_code_8 },
    { "rep_so_code_9", 2, rep_so_code_9 },
    { "rep_so_code_10", 4, rep_so_code_10 },
    { "rep_so_code_11", 71, rep_so_code_11 },
    { "rep_so_code_12", 16, rep_so_code_12 },
    { "rep_so_code_13", 2, rep_so_code_13 },
    { "rep_so_code_14", 4, rep_so_code_14 },
    { "rep_so_code_15", 3, rep_so_code_15 },
    { "rep_so_code_16", 2, rep_so_code_16 },
    { "rep_so_code_17", 2, rep_so_code_17 },
    { "rep_so_code_18", 4, rep_so_code_18 },
    { "rep_so_code_19", 17, rep_so_code_19 },
    { "rep_so_code_20", 3, rep_so_code_20 },
    { "rep_so_code_21", 4, rep_so_code_21 },
    { "rep_so_code_22", 11, rep_so_code_22 },
    { "rep_so_code_23", 2, rep_so_code_23 },
    { "rep_so_code_24", 7, rep_so_code_24 },
    { "rep_so_code_25", 4, rep_so_code_25 },
    { "rep_so_code_26", 12, rep_so_code_26 },
    { "rep_so_code_27", 2, rep_so_code_27 },
    { "rep_so_code_28", 1, rep_so_code_28 },
    { "rep_so_code_29", 4, rep_so_code_29 },
    { "rep_so_code_30", 4, rep_so_code_30 },
    { "rep_so_code_31", 4, rep_so_code_31 },
    { "rep_so_code_32", 4, rep_so_code_32 },
    { "rep_so_code_33", 3, rep_so_code_33 },
    { "rep_so_code_34", 6, rep_so_code_34 },
    { "rep_so_code_35", 7, rep_so_code_35 },
    { "rep_so_code_36", 5, rep_so_code_36 },
    { "rep_so_code_37", 3, rep_so_code_37 },
    { "rep_so_code_38", 15, rep_so_code_38 },
    { "rep_so_code_39", 1, rep_so_code_39 },
    { "rep_so_code_40", 3, rep_so_code_40 },
    { "rep_so_code_41", 2, rep_so_code_41 },
    { "rep_so_code_42", 20, rep_so_code_42 },
    { "rep_so_code_43", 5, rep_so_code_43 },
    { "rep_so_code_44", 3, rep_so_code_44 },
    { "rep_so_code_45", 4, rep_so_code_45 },
    { "rep_so_code_46", 3, rep_so_code_46 },
    { "rep_so_code_47", 8, rep_so_code_47 },
    { "rep_so_code_48", 7, rep_so_code_48 },
    { "rep_so_code_49", 3, rep_so_code_49 },
    { "rep_so_code_50", 2, rep_so_code_50 },
    { "rep_so_code_51", 3, rep_so_code_51 },
    { "rep_so_code_52", 3, rep_so_code_52 },
    { "rep_so_code_53", 11, rep_so_code_53 },
    { "rep_so_code_54", 3, rep_so_code_54 },
    { "rep_so_code_55", 2, rep_so_code_55 },
    { "rep_so_code_56", 8, rep_so_code_56 },
    { "rep_so_code_57", 2, rep_so_code_57 },
    { "rep_so_code_58", 19, rep_so_code_58 },
    { "rep_so_code_59", 8, rep_so_code_59 },
    { "rep_so_code_60", 10, rep_so_code_60 },
    { "rep_so_code_61", 34, rep_so_code_61 },
    { "rep_so_code_62", 11, rep_so_code_62 },
    { "rep_so_code_63", 11, rep_so_code_63 },
    { "rep_so_code_64", 9, rep_so_code_64 },
    { "rep_so_code_65", 2, rep_so_code_65 },
    { "rep_so_code_66", 2, rep_so_code_66 },
    { "rep_so_code_67", 1, rep_so_code_67 },
    { "rep_so_code_68", 1, rep_so_code_68 },
    { "rep_so_code_69", 1, rep_so_code_69 },
    { "rep_so_code_70", 1, rep_so_code_70 },
    { "rep_so_code_71", 1, rep_so_code_71 },
    { "rep_so_code_72", 1, rep_so_code_72 },
    { "rep_so_code_73", 1, rep_so_code_73 },
    { "rep_so_code_74", 1, rep_so_code_74 },
    { "rep_so_code_75", 1, rep_so_code_75 },
    { "rep_so_code_76", 1, rep_so_code_76 },
    { "rep_so_code_77", 1, rep_so_code_77 },
    { "rep_so_code_78", 4, rep_so_code_78 },
    { "rep_so_code_79", 3, rep_so_code_79 },
    { "rep_so_code_80", 2, rep_so_code_80 },
    { "rep_so_code_81", 1, rep_so_code_81 },
    { "rep_so_code_82", 2, rep_so_code_82 },
    { "rep_so_code_83", 2, rep_so_code_83 },
    { "rep_so_code_84", 2, rep_so_code_84 },
    { "rep_so_code_85", 5, rep_so_code_85 },
    { "rep_so_code_86", 2, rep_so_code_86 },
    { "rep_so_code_87", 2, rep_so_code_87 },
    { "rep_so_code_88", 2, rep_so_code_88 },
    { "rep_so_code_89", 2, rep_so_code_89 },
    { "rep_so_code_90", 2, rep_so_code_90 },
    { "rep_so_code_91", 2, rep_so_code_91 },
    { "rep_so_code_92", 2, rep_so_code_92 },
    { "rep_so_code_93", 3, rep_so_code_93 },
    { "rep_so_code_94", 4, rep_so_code_94 },
    { "rep_so_code_95", 2, rep_so_code_95 },
    { "rep_so_code_96", 3, rep_so_code_96 },
    { "rep_so_code_97", 3, rep_so_code_97 },
    { "rep_so_code_98", 1, rep_so_code_98 },
    { "rep_so_code_99", 1, rep_so_code_99 },
    { "rep_so_code_100", 1, rep_so_code_100 },
    { "rep_so_code_101", 4, rep_so_code_101 },
    { "rep_so_code_102", 2, rep_so_code_102 },
    { "rep_so_code_103", 4, rep_so_code_103 },
    { "rep_so_code_104", 5, rep_so_code_104 },
    { "rep_so_code_105", 9, rep_so_code_105 },
    { "rep_so_code_106", 3, rep_so_code_106 },
    { "rep_so_code_107", 5, rep_so_code_107 },
    { "rep_so_code_108", 10, rep_so_code_108 },
    { "rep_so_code_109", 5, rep_so_code_109 },
    { "rep_so_code_110", 4, rep_so_code_110 },
    { "rep_so_code_111", 5, rep_so_code_111 },
    { "rep_so_code_112", 2, rep_so_code_112 },
    { "rep_so_code_113", 2, rep_so_code_113 },
    { "rep_so_code_114", 4, rep_so_code_114 },
    { "rep_so_code_115", 2, rep_so_code_115 },
    { "rep_so_code_116", 4, rep_so_code_116 },
    { "rep_so_code_117", 2, rep_so_code_117 },
    { "rep_so_code_118", 1, rep_so_code_118 },
    { "rep_so_code_119", 7, rep_so_code_119 },
    { "rep_so_code_120", 7, rep_so_code_120 },
    { "rep_so_code_121", 5, rep_so_code_121 },
    { "rep_so_code_122", 22, rep_so_code_122 },
    { "rep_so_code_123", 12, rep_so_code_123 }
  };

int
decl_rep_so_113e37dfbb794e0c (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rep_so_113e37dfbb794e0c);
  return (0);
}

DECLARE_COMPILED_CODE ("rep.so", 70, decl_rep_so_113e37dfbb794e0c, rep_so_113e37dfbb794e0c)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rep_so_data_113e37dfbb794e0c [17494] =
  "\xe9\x01\xed\x01\xec\x21\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x06"
  "\x0d\xb9\x0d\xba\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe\x25\x0d\xbf\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x0c\x0d\x1c\x08\x0d\x1c"
  "\x25\x0d\x0d\x1c\x0d\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xc1"
  "\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x1d"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x85\x88\x06\x1d\x0c\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\x81\x0c\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x0c"
  "\x0d\x1c\x0d\x1c\x1d\x08\xb1\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x25"
  "\x1b\x1b\x1b\xb1\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x24\x28"
  "\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0c\x0c\x0c\x0d\x1c\x0c\x1d\x0c\x0d\x1c\x0d\x1c\x24\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\xb1\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1b\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x80\xb1\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc0\x81\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x06\x07\x85\xc2"
  "\x1c\x02\xc1\x1c\x08\xc1\x1c\x0c\x28\x0d\x1c\x28\x1b\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x0d"
  "\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x28\x1b\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x1c\x1b\x1b\x07\x1b\x24\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x0d\x1c\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x1c\x24\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x0d\x1c\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\x1b\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0c\x1d\x1b\x1b\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x1d\x1b\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x06\x0d\x1c\x1b\x0c\x0d\x1c\x08"
  "\x1d\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d"
  "\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x0c\xc2"
  "\x1c\x83\x28\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1d\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86\x82\x1b\x83"
  "\x0d\xb6\x24\x28\x1b\x28\xb6\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x28\xb2\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\x81\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x0d\x1c"
  "\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1b\x81\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x85\x1b\x84\x28\x1b\x28\xb3\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0d\x08\x88\x0d\x1b\x28\x1b\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3"
  "\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x28\x1b\x28\xb4\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x07\x02\x86\x02\x02\x1b\x02"
  "\x0d\x1c\x24\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\xb4\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x82\x1d\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\x02\x02\x1b"
  "\x83\x0d\x1c\x0d\x1c\x0d\x1c\x25\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1d\x1b\x82"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\xb5\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\x1d\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x83\x0c\x0c\x0c\x81"
  "\x0c\x0d\x1c\x06\x07\x02\x1b\x02\x1d\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x0d\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0c\x07\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x08\x1b\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c"
  "\x0c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xc3\x1c\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\xc1\x1c\x0e\x1c"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x81\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x85\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\x85\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x86\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x1b\x1b\x1b\x1b\x82\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x81\x1b\x82\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82"
  "\x0c\x0d\x1c\x1b\x81\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x08\x06\x07\x85\x1b\x02"
  "\x1b\x1d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x84\x81\x1d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x81\x1d\x1b\x84\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x1d\x1b"
  "\x85\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x1d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x0d\x1c\x0d\x1c\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0c\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x0c"
  "\x1d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\x1d\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0d\x1c\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x0d"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x1b\x0d\x1c\x1b\x0c\x1b\x1b"
  "\x1b\x1b\x08\x8a\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x25"
  "\x1b\x24\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x1d\x1b\x25\x1b\x24\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x17\xb8\x88\xb0\x1b\x06\x1b\x2a\x1b\x2a\x1e"
  "\x1e\x1e\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d"
  "\x0d\x1b\x1b\x0d\x0d\x0d\x1b\x1b\x0d\x1b\x0d\x1b\x1b\x0d\x17\x1b"
  "\x0d\x0d\x0d\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x0d\x1c\x84\x0c\x0d"
  "\x0d\x08\x89\x86\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x17\x02\x85\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x17\x85\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x1c\x0c\x1b\x1b\x0d\x0d"
  "\x0d\x0d\x08\x8d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x1b\x1b\x1b\x1b\xb5"
  "\x1b\xb6\x1b\x1b\x1b\x1b\x1b\x1b\xb4\x1b\x1b\x1b\x1b\x1b\xb3\x1b"
  "\x1b\xb7\xb2\x1b\x1b\x1b\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1e\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x1b"
  "\x0d\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x1b\xb1\x1b"
  "\x1b\x1b\x0d\x1b\x0d\x1b\x1b\x1b\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x17\x0d\x08\x1b\x1b\x0d\x1c\x0d\x0d\x1c\x1b\x1b\x0d\x1c\x0d"
  "\x0d\x1c\x1b\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\xc3\x0d\x1c"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x08\x8e\x1b\x1b\x0d\x0d\x1b\x1b\x9d"
  "\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x07\x07\x9d\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x26\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x52\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x72\x65\x70"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x0f\x2a\x6e\x65\x61"
  "\x72\x65\x73\x74\x2d\x63\x6d\x64\x6c\x2a\x0f\x68\x6f\x6f\x6b\x2f"
  "\x72\x65\x70\x6c\x2d\x72\x65\x61\x64\x0f\x68\x6f\x6f\x6b\x2f\x72"
  "\x65\x70\x6c\x2d\x65\x76\x61\x6c\x10\x68\x6f\x6f\x6b\x2f\x72\x65"
  "\x70\x6c\x2d\x77\x72\x69\x74\x65\x1d\x68\x6f\x6f\x6b\x2f\x73\x65"
  "\x74\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x14\x68\x6f\x6f\x6b\x2f\x65\x72\x72\x6f\x72"
  "\x2d\x64\x65\x63\x69\x73\x69\x6f\x6e\x07\x12\x64\x65\x66\x61\x75"
  "\x6c\x74\x2f\x72\x65\x70\x6c\x2d\x72\x65\x61\x64\x12\x64\x65\x66"
  "\x61\x75\x6c\x74\x2f\x72\x65\x70\x6c\x2d\x65\x76\x61\x6c\x09\x13"
  "\x64\x65\x66\x61\x75\x6c\x74\x2f\x72\x65\x70\x6c\x2d\x77\x72\x69"
  "\x74\x65\x0a\x20\x64\x65\x66\x61\x75\x6c\x74\x2f\x73\x65\x74\x2d"
  "\x64\x65\x66\x61\x75\x6c\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x0b\x05\x02\x21\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a"
  "\x65\x2d\x62\x72\x65\x61\x6b\x70\x6f\x69\x6e\x74\x2d\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x21\x0c\x02\x52\x1a\x81\x81\x02\x51\x18"
  "\x81\x81\x02\x50\x16\x81\x81\x02\x4f\x14\x81\x81\x02\x4e\x12\x81"
  "\x81\x02\x4d\x10\x81\x81\x02\x4c\x0e\x81\x81\x02\x4b\x0c\x81\x81"
  "\x02\x4a\x0a\x81\x81\x02\x49\x08\x81\x81\x02\x48\x06\x81\x81\x02"
  "\x47\x04\x82\x02\x19\x2d\x0d\x02\x13\x43\x6f\x6c\x64\x20\x6c\x6f"
  "\x61\x64\x20\x66\x69\x6e\x69\x73\x68\x65\x64\x16\x73\x65\x74\x2d"
  "\x64\x65\x66\x61\x75\x6c\x74\x2d\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x0e\x12\x72\x6f\x6f\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x0f\x02\x14\x75\x73\x65\x72\x2d\x69\x6e\x69\x74"
  "\x69\x61\x6c\x2d\x70\x72\x6f\x6d\x70\x74\x25\x74\x6f\x70\x2d\x6c"
  "\x65\x76\x65\x6c\x2d\x72\x65\x70\x6c\x2f\x73\x65\x74\x2d\x64\x65"
  "\x66\x61\x75\x6c\x74\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x10"
  "\x19\x75\x73\x65\x72\x2d\x69\x6e\x69\x74\x69\x61\x6c\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x11\x63\x6f\x6e\x73\x6f\x6c"
  "\x65\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x11\x05\x03\x1f\x63\x61"
  "\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x12\x08\x0a\x6d"
  "\x61\x6b\x65\x2d\x72\x65\x70\x6c\x13\x03\x15\x63\x6d\x64\x6c\x2d"
  "\x6d\x65\x73\x73\x61\x67\x65\x2f\x73\x74\x72\x69\x6e\x67\x73\x14"
  "\x04\x0b\x72\x65\x70\x6c\x2f\x73\x74\x61\x72\x74\x15\x05\x5b\x14"
  "\x81\x85\x02\x5a\x12\x81\x83\x02\x59\x10\x81\x8d\x02\x58\x0e\x81"
  "\x8b\x02\x57\x0c\x81\x87\x02\x56\x0a\x81\x85\x02\x55\x08\x81\x83"
  "\x02\x54\x06\x83\x04\x53\x04\x82\x02\x13\x29\x16\x02\x20\x73\x65"
  "\x74\x2d\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x21\x03\x0d\x2d"
  "\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x02\x5d\x06\x81\x85"
  "\x02\x5c\x04\x84\x06\x05\x0c\x17\x02\x02\x03\x06\x63\x6d\x64\x6c"
  "\x3f\x18\x04\x0f\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x63\x6d"
  "\x64\x6c\x19\x03\x5f\x06\x81\x85\x02\x5e\x04\x84\x04\x05\x0e\x1a"
  "\x02\x08\x0d\x63\x6f\x6d\x6d\x61\x6e\x64\x20\x6c\x6f\x6f\x70\x05"
  "\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x1b\x02\x60\x04\x84\x04"
  "\x03\x0c\x1c\x02\x05\x63\x6d\x64\x6c\x0a\x6d\x61\x6b\x65\x2d\x63"
  "\x6d\x64\x6c\x1d\x05\x1b\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61"
  "\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74"
  "\x1e\x03\x10\x63\x6d\x64\x6c\x2f\x63\x68\x69\x6c\x64\x2d\x70\x6f"
  "\x72\x74\x1f\x04\x16\x70\x61\x72\x73\x65\x2d\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x73\x2d\x6c\x69\x73\x74\x20\x03\x0b\x63\x6d\x64"
  "\x6c\x2f\x6c\x65\x76\x65\x6c\x21\x03\x18\x02\x0e\x6d\x61\x6b\x65"
  "\x2d\x31\x64\x2d\x74\x61\x62\x6c\x65\x09\x0b\x25\x6d\x61\x6b\x65"
  "\x2d\x63\x6d\x64\x6c\x22\x09\x6a\x16\x81\x8f\x02\x69\x14\x81\x8f"
  "\x02\x68\x12\x87\x0c\x67\x10\x81\x8b\x02\x66\x0e\x81\x8d\x02\x65"
  "\x0c\x81\x8f\x02\x64\x0a\x81\x8f\x02\x63\x08\x81\x8f\x02\x62\x06"
  "\x81\x8b\x02\x61\x04\x81\x8b\x02\x15\x2c\x23\x02\x08\x0b\x63\x68"
  "\x69\x6c\x64\x2d\x70\x6f\x72\x74\x04\x15\x63\x6d\x64\x6c\x2f\x6c"
  "\x6f\x63\x61\x6c\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x24\x03"
  "\x0a\x63\x6d\x64\x6c\x2f\x70\x6f\x72\x74\x25\x03\x6d\x08\x81\x83"
  "\x02\x6c\x06\x81\x85\x02\x6b\x04\x83\x04\x07\x10\x26\x02\x09\x02"
  "\x0d\x6e\x65\x61\x72\x65\x73\x74\x2d\x63\x6d\x64\x6c\x27\x07\x1d"
  "\x03\x6f\x06\x81\x89\x02\x6e\x04\x85\x08\x05\x0d\x28\x02\x0a\x03"
  "\x0c\x63\x6d\x64\x6c\x2f\x70\x61\x72\x65\x6e\x74\x29\x03\x0a\x63"
  "\x6d\x64\x6c\x2f\x62\x61\x73\x65\x2a\x03\x71\x06\x81\x83\x02\x70"
  "\x04\x83\x04\x05\x0d\x2b\x02\x0b\x0e\x04\x24\x03\x25\x04\x1b\x70"
  "\x6f\x72\x74\x2f\x73\x65\x74\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d"
  "\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x0e\x04\x75\x0a\x81\x85\x02"
  "\x74\x08\x81\x85\x02\x73\x06\x81\x87\x02\x72\x04\x84\x06\x09\x14"
  "\x2c\x02\x0c\x14\x77\x69\x74\x68\x2d\x69\x6e\x74\x65\x72\x72\x75"
  "\x70\x74\x2d\x6d\x61\x73\x6b\x23\x4e\x6f\x6e\x2d\x6f\x77\x6e\x65"
  "\x72\x20\x74\x68\x72\x65\x61\x64\x20\x63\x61\x6e\x27\x74\x20\x73"
  "\x74\x61\x72\x74\x20\x43\x4d\x44\x4c\x3a\x0c\x73\x74\x61\x72\x74"
  "\x2d\x63\x68\x69\x6c\x64\x2d\x10\x73\x74\x61\x72\x74\x2d\x6e\x6f"
  "\x6e\x2d\x6f\x77\x6e\x65\x64\x2e\x02\x17\x64\x79\x6e\x61\x6d\x69"
  "\x63\x2d\x68\x61\x6e\x64\x6c\x65\x72\x2d\x66\x72\x61\x6d\x65\x73"
  "\x2f\x11\x2a\x62\x6f\x75\x6e\x64\x2d\x72\x65\x73\x74\x61\x72\x74"
  "\x73\x2a\x30\x14\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x65\x72\x72"
  "\x6f\x72\x2d\x68\x6f\x6f\x6b\x31\x16\x73\x74\x61\x6e\x64\x61\x72"
  "\x64\x2d\x77\x61\x72\x6e\x69\x6e\x67\x2d\x68\x6f\x6f\x6b\x32\x19"
  "\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x62\x72\x65\x61\x6b\x70\x6f"
  "\x69\x6e\x74\x2d\x68\x6f\x6f\x6b\x33\x1d\x2a\x77\x6f\x72\x6b\x69"
  "\x6e\x67\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x2a\x34\x1c\x2a\x64\x65\x66\x61\x75\x6c\x74"
  "\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x66\x61\x75\x6c"
  "\x74\x73\x2a\x35\x15\x2a\x63\x75\x72\x72\x65\x6e\x74\x2d\x69\x6e"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x2a\x36\x16\x2a\x63\x75\x72\x72"
  "\x65\x6e\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2a"
  "\x37\x1b\x2a\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2a\x38\x14\x2a\x74"
  "\x72\x61\x63\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74"
  "\x2a\x39\x17\x2a\x69\x6e\x74\x65\x72\x61\x63\x74\x69\x6f\x6e\x2d"
  "\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x2a\x3a\x0e\x35\x34\x30\x2f\x31"
  "\x32\x33\x36\x37\x38\x39\x3a\x13\x69\x6e\x74\x65\x72\x72\x75\x70"
  "\x74\x2d\x6d\x61\x73\x6b\x2f\x61\x6c\x6c\x0f\x03\x25\x03\x12\x70"
  "\x6f\x72\x74\x2f\x74\x68\x72\x65\x61\x64\x2d\x6d\x75\x74\x65\x78"
  "\x03\x29\x03\x13\x74\x68\x72\x65\x61\x64\x2d\x6d\x75\x74\x65\x78"
  "\x2d\x6f\x77\x6e\x65\x72\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d"
  "\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x3a\x02\x0f\x63\x75\x72"
  "\x72\x65\x6e\x74\x2d\x74\x68\x72\x65\x61\x64\x04\x24\x04\x13\x62"
  "\x69\x6e\x64\x2d\x61\x62\x6f\x72\x74\x2d\x72\x65\x73\x74\x61\x72"
  "\x74\x39\x02\x14\x73\x74\x6f\x70\x2d\x63\x75\x72\x72\x65\x6e\x74"
  "\x2d\x74\x68\x72\x65\x61\x64\x04\x14\x73\x69\x67\x6e\x61\x6c\x2d"
  "\x74\x68\x72\x65\x61\x64\x2d\x65\x76\x65\x6e\x74\x04\x19\x77\x69"
  "\x74\x68\x2d\x74\x68\x72\x65\x61\x64\x2d\x6d\x75\x74\x65\x78\x2d"
  "\x6c\x6f\x63\x6b\x65\x64\x02\x16\x64\x65\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x61\x6c\x6c\x2d\x65\x76\x65\x6e\x74\x73\x02\x16\x75"
  "\x6e\x62\x6c\x6f\x63\x6b\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76"
  "\x65\x6e\x74\x73\x04\x06\x65\x72\x72\x6f\x72\x38\x03\x0e\x69\x67"
  "\x6e\x6f\x72\x65\x2d\x65\x72\x72\x6f\x72\x73\x03\x12\x03\x0f\x2d"
  "\x3e\x63\x6d\x64\x6c\x2d\x6d\x65\x73\x73\x61\x67\x65\x37\x04\x20"
  "\x77\x69\x74\x68\x2d\x63\x72\x65\x61\x74\x65\x2d\x74\x68\x72\x65"
  "\x61\x64\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x03"
  "\x0c\x63\x6d\x64\x6c\x2f\x64\x72\x69\x76\x65\x72\x36\x14\xbc\x01"
  "\x90\x01\x81\x83\x02\xbb\x01\x8e\x01\x81\x83\x02\xba\x01\x8c\x01"
  "\x81\x83\x02\xb9\x01\x8a\x01\x81\x85\x02\xb8\x01\x88\x01\x81\x83"
  "\x02\xb7\x01\x86\x01\x81\x85\x02\xb6\x01\x84\x01\x81\x85\x02\xb5"
  "\x01\x82\x01\x81\x85\x02\xb4\x01\x80\x01\x81\x83\x02\xb3\x01\x7e"
  "\x81\x83\x02\xb2\x01\x7c\x81\x83\x02\xb1\x01\x7a\x84\x06\xb0\x01"
  "\x78\x81\x83\x02\xaf\x01\x76\x81\x83\x02\xae\x01\x74\x81\x85\x02"
  "\xad\x01\x72\x81\x8d\x02\xac\x01\x70\x81\x8f\x02\xab\x01\x6e\x81"
  "\x8f\x02\xaa\x01\x6c\x81\x8d\x02\xa9\x01\x6a\x81\x85\x02\xa8\x01"
  "\x68\x81\x8b\x02\xa7\x01\x66\x81\x83\x02\xa6\x01\x64\x81\x85\x02"
  "\xa5\x01\x62\x81\x83\x02\xa4\x01\x60\x81\x83\x02\xa3\x01\x5e\x81"
  "\x85\x02\xa2\x01\x5c\x81\x83\x02\xa1\x01\x5a\x81\x83\x02\xa0\x01"
  "\x58\x81\x85\x02\x9f\x01\x56\x81\x83\x02\x9e\x01\x54\x81\x83\x02"
  "\x9d\x01\x52\x81\x85\x02\x9c\x01\x50\x81\x83\x02\x9b\x01\x4e\x81"
  "\x83\x02\x9a\x01\x4c\x81\x85\x02\x99\x01\x4a\x81\x83\x02\x98\x01"
  "\x48\x81\x83\x02\x97\x01\x46\x81\x85\x02\x96\x01\x44\x81\x83\x02"
  "\x95\x01\x42\x81\x83\x02\x94\x01\x40\x81\x85\x02\x93\x01\x3e\x81"
  "\x83\x02\x92\x01\x3c\x81\x83\x02\x91\x01\x3a\x81\x85\x02\x90\x01"
  "\x38\x81\x83\x02\x8f\x01\x36\x81\x83\x02\x8e\x01\x34\x81\x85\x02"
  "\x8d\x01\x32\x81\x83\x02\x8c\x01\x30\x81\x83\x02\x8b\x01\x2e\x81"
  "\x85\x02\x8a\x01\x2c\x81\x83\x02\x89\x01\x2a\x81\x83\x02\x88\x01"
  "\x28\x81\x85\x02\x87\x01\x26\x81\x83\x02\x86\x01\x24\x81\x83\x02"
  "\x85\x01\x22\x81\x85\x02\x84\x01\x20\x81\x83\x02\x83\x01\x1e\x81"
  "\x83\x02\x82\x01\x1c\x81\x85\x02\x81\x01\x1a\x81\x83\x02\x80\x01"
  "\x18\x81\x83\x02\x7f\x16\x81\x83\x02\x7e\x14\x81\x89\x02\x7d\x12"
  "\x81\x97\x02\x7c\x10\x81\x97\x02\x7b\x0e\x81\x89\x02\x7a\x0c\x81"
  "\x8f\x02\x79\x0a\x81\x8d\x02\x78\x08\x81\x83\x02\x77\x06\x81\x85"
  "\x02\x76\x04\x84\x06\x8f\x01\xdc\x01\x35\x02\x0d\x0b\x52\x65\x74"
  "\x75\x72\x6e\x20\x74\x6f\x20\x10\x72\x65\x61\x64\x2d\x65\x76\x61"
  "\x6c\x2d\x70\x72\x69\x6e\x74\x08\x63\x6f\x6d\x6d\x61\x6e\x64\x08"
  "\x20\x6c\x65\x76\x65\x6c\x20\x06\x61\x62\x6f\x72\x74\x34\x07\x41"
  "\x62\x6f\x72\x74\x21\x08\x02\x2e\x07\x76\x61\x6c\x75\x65\x73\x32"
  "\x17\x63\x6d\x64\x6c\x2d\x61\x62\x6f\x72\x74\x2d\x72\x65\x73\x74"
  "\x61\x72\x74\x2d\x74\x61\x67\x31\x03\x03\x12\x03\x21\x03\x14\x63"
  "\x6d\x64\x6c\x2d\x6d\x65\x73\x73\x61\x67\x65\x2f\x61\x63\x74\x69"
  "\x76\x65\x30\x07\x0d\x77\x69\x74\x68\x2d\x72\x65\x73\x74\x61\x72"
  "\x74\x2f\x03\x06\x72\x65\x70\x6c\x3f\x3b\x03\x0f\x6e\x75\x6d\x62"
  "\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x3c\x04\x14\x63\x6d\x64"
  "\x6c\x2d\x6d\x65\x73\x73\x61\x67\x65\x2f\x61\x70\x70\x65\x6e\x64"
  "\x3d\x02\x1b\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x02\x14\x66"
  "\x69\x72\x73\x74\x2d\x62\x6f\x75\x6e\x64\x2d\x72\x65\x73\x74\x61"
  "\x72\x74\x07\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e"
  "\x64\x04\x0e\x05\x0d\x72\x65\x73\x74\x61\x72\x74\x2f\x70\x75\x74"
  "\x21\x0d\xcc\x01\x22\x81\x89\x02\xcb\x01\x20\x81\x83\x02\xca\x01"
  "\x1e\x81\x85\x02\xc9\x01\x1c\x81\x8f\x02\xc8\x01\x1a\x81\x87\x02"
  "\xc7\x01\x18\x81\x83\x02\xc6\x01\x16\x83\x04\xc5\x01\x14\x81\x89"
  "\x02\xc4\x01\x12\x81\x85\x02\xc3\x01\x10\x81\x8d\x02\xc2\x01\x0e"
  "\x81\x8b\x02\xc1\x01\x0c\x81\x8b\x02\xc0\x01\x0a\x81\x87\x02\xbf"
  "\x01\x08\x81\x85\x02\xbe\x01\x06\x81\x85\x02\xbd\x01\x04\x84\x06"
  "\x21\x48\x0e\x02\x0e\x31\x02\x04\x0c\x72\x65\x73\x74\x61\x72\x74"
  "\x2f\x67\x65\x74\x02\xce\x01\x06\x81\x85\x02\xcd\x01\x04\x83\x04"
  "\x05\x0d\x3e\x02\x0f\x16\x4e\x45\x41\x52\x45\x53\x54\x2d\x43\x4d"
  "\x44\x4c\x3a\x20\x6e\x6f\x20\x63\x6d\x64\x6c\x02\x03\x38\x02\xd2"
  "\x01\x0a\x81\x81\x02\xd1\x01\x08\x81\x81\x02\xd0\x01\x06\x82\x02"
  "\xcf\x01\x04\x81\x81\x02\x09\x12\x3f\x02\x10\x11\x03\x03\x25\x02"
  "\xd5\x01\x08\x81\x83\x02\xd4\x01\x06\x81\x81\x02\xd3\x01\x04\x82"
  "\x02\x07\x10\x11\x02\x11\x02\x03\x21\x02\xd7\x01\x06\x81\x81\x02"
  "\xd6\x01\x04\x82\x02\x05\x0e\x40\x02\x12\x02\x03\x11\x63\x6d\x64"
  "\x6c\x2f\x62\x61\x74\x63\x68\x2d\x6d\x6f\x64\x65\x3f\x41\x02\xd9"
  "\x01\x06\x81\x81\x02\xd8\x01\x04\x82\x02\x05\x0d\x42\x02\x13\x0c"
  "\x62\x61\x74\x63\x68\x2d\x6d\x6f\x64\x65\x3f\x03\x21\x03\x21\x69"
  "\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64\x2d\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x03"
  "\xdd\x01\x0a\x81\x83\x02\xdc\x01\x08\x81\x83\x02\xdb\x01\x06\x81"
  "\x83\x02\xda\x01\x04\x83\x04\x09\x13\x43\x02\x14\x12\x6f\x70\x65"
  "\x72\x61\x74\x69\x6f\x6e\x20\x62\x69\x6e\x64\x69\x6e\x67\x0d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x44\x1e\x04\x63\x61"
  "\x72\x45\x04\x63\x64\x72\x46\x05\x6c\x69\x73\x74\x03\x06\x6c\x69"
  "\x73\x74\x3f\x47\x05\x1b\x04\x04\x6d\x61\x70\x03\x0b\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x3f\x48\x05\xee\x01\x24\x81\x87\x02\xed"
  "\x01\x22\x81\x87\x02\xec\x01\x20\x81\x85\x02\xeb\x01\x1e\x81\x83"
  "\x02\xea\x01\x1c\x81\x87\x02\xe9\x01\x1a\x81\x85\x02\xe8\x01\x18"
  "\x81\x87\x02\xe7\x01\x16\x81\x85\x02\xe6\x01\x14\x81\x85\x02\xe5"
  "\x01\x12\x81\x85\x02\xe4\x01\x10\x81\x85\x02\xe3\x01\x0e\x81\x85"
  "\x02\xe2\x01\x0c\x81\x85\x02\xe1\x01\x0a\x81\x85\x02\xe0\x01\x08"
  "\x81\x85\x02\xdf\x01\x06\x81\x85\x02\xde\x01\x04\x84\x06\x23\x39"
  "\x49\x02\x15\x46\x03\x10\x63\x6d\x64\x6c\x2f\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x73\x4a\x04\x05\x61\x73\x73\x71\x03\xf1\x01\x08"
  "\x81\x87\x02\xf0\x01\x06\x81\x85\x02\xef\x01\x04\x84\x06\x07\x10"
  "\x4b\x02\x16\x04\x24\x03\x29\x03\xf5\x01\x0a\x81\x89\x02\xf4\x01"
  "\x08\x81\x87\x02\xf3\x01\x06\x81\x87\x02\xf2\x01\x04\x84\x06\x09"
  "\x11\x4c\x02\x17\x46\x45\x03\x4a\x04\x05\x6d\x65\x6d\x71\x03\x29"
  "\x04\x80\x02\x18\x81\x89\x02\xff\x01\x16\x81\x89\x02\xfe\x01\x14"
  "\x81\x89\x02\xfd\x01\x12\x81\x89\x02\xfc\x01\x10\x81\x89\x02\xfb"
  "\x01\x0e\x81\x8d\x02\xfa\x01\x0c\x81\x8d\x02\xf9\x01\x0a\x81\x89"
  "\x02\xf8\x01\x08\x81\x87\x02\xf7\x01\x06\x81\x85\x02\xf6\x01\x04"
  "\x83\x04\x17\x24\x4d\x02\x18\x13\x25\x63\x6d\x64\x6c\x2d\x6d\x65"
  "\x73\x73\x61\x67\x65\x2f\x6e\x75\x6c\x6c\x4e\x02\x03\x14\x02\x82"
  "\x02\x06\x81\x83\x02\x81\x02\x04\x83\x04\x05\x0d\x4f\x02\x19\x02"
  "\x3b\x07\x63\x6f\x6f\x6b\x65\x64\x50\x03\x25\x05\x1f\x70\x6f\x72"
  "\x74\x2f\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x65"
  "\x72\x6d\x69\x6e\x61\x6c\x2d\x6d\x6f\x64\x65\x51\x04\x09\x66\x6f"
  "\x72\x2d\x65\x61\x63\x68\x52\x03\x0b\x66\x72\x65\x73\x68\x2d\x6c"
  "\x69\x6e\x65\x53\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x54\x06\x89\x02\x10\x81\x85\x02\x88\x02\x0e\x81\x85\x02"
  "\x87\x02\x0c\x81\x85\x02\x86\x02\x0a\x81\x83\x02\x85\x02\x08\x81"
  "\x85\x02\x84\x02\x06\x81\x85\x02\x83\x02\x04\xff\x03\x0f\x1f\x55"
  "\x02\x1a\x50\x03\x25\x05\x51\x03\x8d\x02\x0a\x81\x83\x02\x8c\x02"
  "\x08\x81\x85\x02\x8b\x02\x06\x81\x85\x02\x8a\x02\x04\x83\x04\x09"
  "\x12\x56\x02\x1b\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x57\x46\x45"
  "\x4e\x02\x03\x37\x04\x06\x64\x65\x6c\x71\x21\x04\x52\x04\x99\x02"
  "\x1a\x81\x85\x02\x98\x02\x18\x81\x85\x02\x97\x02\x16\x81\x87\x02"
  "\x96\x02\x14\x81\x87\x02\x95\x02\x12\x81\x87\x02\x94\x02\x10\x81"
  "\x83\x02\x93\x02\x0e\x81\x83\x02\x92\x02\x0c\x81\x83\x02\x91\x02"
  "\x0a\x81\x87\x02\x90\x02\x08\x81\x89\x02\x8f\x02\x06\x81\x85\x02"
  "\x8e\x02\x04\xff\x03\x19\x29\x52\x02\x1c\x4e\x02\x9b\x02\x06\x81"
  "\x81\x02\x9a\x02\x04\x82\x02\x05\x0a\x58\x02\x1d\x9c\x02\x04\x83"
  "\x04\x03\x59\x02\x1e\x15\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2f"
  "\x62\x72\x65\x61\x6b\x70\x6f\x69\x6e\x74\x0b\x62\x72\x65\x61\x6b"
  "\x70\x6f\x69\x6e\x74\x5a\x02\x02\x27\x04\x0f\x63\x6d\x64\x6c\x2f"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x5b\x03\xa0\x02\x0a\x81\x85"
  "\x02\x9f\x02\x08\x81\x83\x02\x9e\x02\x06\x81\x81\x02\x9d\x02\x04"
  "\x82\x02\x09\x14\x5c\x02\x1f\x18\x69\x6e\x74\x65\x72\x72\x75\x70"
  "\x74\x2f\x61\x62\x6f\x72\x74\x2d\x6e\x65\x61\x72\x65\x73\x74\x0f"
  "\x61\x62\x6f\x72\x74\x2d\x3e\x6e\x65\x61\x72\x65\x73\x74\x5d\x02"
  "\x02\x27\x04\x5b\x03\xa4\x02\x0a\x81\x85\x02\xa3\x02\x08\x81\x83"
  "\x02\xa2\x02\x06\x81\x81\x02\xa1\x02\x04\x82\x02\x09\x14\x5e\x02"
  "\x20\x19\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2f\x61\x62\x6f\x72"
  "\x74\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x10\x61\x62\x6f\x72\x74"
  "\x2d\x3e\x70\x72\x65\x76\x69\x6f\x75\x73\x5f\x02\x02\x27\x04\x5b"
  "\x03\xa8\x02\x0a\x81\x85\x02\xa7\x02\x08\x81\x83\x02\xa6\x02\x06"
  "\x81\x81\x02\xa5\x02\x04\x82\x02\x09\x14\x60\x02\x21\x1a\x69\x6e"
  "\x74\x65\x72\x72\x75\x70\x74\x2f\x61\x62\x6f\x72\x74\x2d\x74\x6f"
  "\x70\x2d\x6c\x65\x76\x65\x6c\x11\x61\x62\x6f\x72\x74\x2d\x3e\x74"
  "\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x61\x02\x02\x27\x04\x5b\x03\xac"
  "\x02\x0a\x81\x85\x02\xab\x02\x08\x81\x83\x02\xaa\x02\x06\x81\x81"
  "\x02\xa9\x02\x04\x82\x02\x09\x14\x62\x02\x22\x07\x41\x62\x6f\x72"
  "\x74\x21\x08\x34\x03\x0d\x66\x69\x6e\x64\x2d\x72\x65\x73\x74\x61"
  "\x72\x74\x03\x16\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x2d\x73\x75\x63"
  "\x68\x2d\x72\x65\x73\x74\x61\x72\x74\x63\x04\x0d\x69\x6e\x76\x6f"
  "\x6b\x65\x2d\x61\x62\x6f\x72\x74\x64\x04\xaf\x02\x08\x81\x83\x02"
  "\xae\x02\x06\x81\x85\x02\xad\x02\x04\x83\x02\x07\x14\x65\x02\x23"
  "\x46\x04\x55\x70\x21\x08\x34\x45\x02\x0f\x62\x6f\x75\x6e\x64\x2d"
  "\x72\x65\x73\x74\x61\x72\x74\x73\x66\x03\x63\x04\x64\x04\x0e\x66"
  "\x69\x6e\x64\x2d\x72\x65\x73\x74\x61\x72\x74\x73\x67\x05\xb5\x02"
  "\x0e\x81\x87\x02\xb4\x02\x0c\x81\x85\x02\xb3\x02\x0a\x81\x85\x02"
  "\xb2\x02\x08\x81\x83\x02\xb1\x02\x06\x81\x83\x02\xb0\x02\x04\x83"
  "\x02\x0d\x1e\x68\x02\x24\x46\x06\x51\x75\x69\x74\x21\x08\x34\x45"
  "\x02\x66\x03\x63\x04\x64\x04\x67\x05\xbc\x02\x10\x81\x85\x02\xbb"
  "\x02\x0e\x81\x83\x02\xba\x02\x0c\x81\x87\x02\xb9\x02\x0a\x81\x85"
  "\x02\xb8\x02\x08\x81\x83\x02\xb7\x02\x06\x81\x83\x02\xb6\x02\x04"
  "\x83\x02\x0f\x20\x63\x02\x25\x45\x46\x03\x0d\x72\x65\x73\x74\x61"
  "\x72\x74\x2f\x6e\x61\x6d\x65\x02\xc1\x02\x0c\x81\x89\x02\xc0\x02"
  "\x0a\x81\x87\x02\xbf\x02\x08\x81\x87\x02\xbe\x02\x06\x81\x87\x02"
  "\xbd\x02\x04\x84\x06\x0b\x13\x34\x02\x26\x03\x11\x72\x65\x73\x74"
  "\x61\x72\x74\x2f\x65\x66\x66\x65\x63\x74\x6f\x72\x03\x14\x63\x6d"
  "\x64\x6c\x2d\x61\x62\x6f\x72\x74\x2d\x72\x65\x73\x74\x61\x72\x74"
  "\x3f\x69\x03\xc4\x02\x08\x81\x87\x02\xc3\x02\x06\x81\x85\x02\xc2"
  "\x02\x04\x84\x06\x07\x0f\x6a\x02\x27\x07\x73\x74\x72\x69\x6e\x67"
  "\x07\x70\x72\x6f\x6d\x70\x74\x6b\x13\x23\x43\x61\x6e\x27\x74\x20"
  "\x69\x6e\x68\x65\x72\x69\x74\x20\x2d\x2d\x20\x6e\x6f\x20\x52\x45"
  "\x50\x4c\x20\x61\x6e\x63\x65\x73\x74\x6f\x72\x3a\x08\x69\x6e\x68"
  "\x65\x72\x69\x74\x6c\x08\x0c\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x6d\x0e\x2d\x3e\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x6e\x11\x72\x65\x70\x6c\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x6f\x0c\x72\x65\x70\x6c\x2d\x64\x72\x69\x76\x65\x72"
  "\x70\x18\x64\x65\x66\x61\x75\x6c\x74\x2d\x72\x65\x70\x6c\x2d\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x73\x71\x0c\x72\x65\x70\x6c\x2f"
  "\x70\x72\x6f\x6d\x70\x74\x72\x06\x03\x0f\x73\x6b\x69\x70\x2d\x6e"
  "\x6f\x6e\x2d\x72\x65\x70\x6c\x73\x73\x04\x07\x61\x70\x70\x65\x6e"
  "\x64\x04\x38\x07\x1d\x05\x10\x6d\x61\x6b\x65\x2d\x72\x65\x70\x6c"
  "\x2d\x73\x74\x61\x74\x65\x74\x05\x1b\x07\xd3\x02\x20\x84\x06\xd2"
  "\x02\x1e\x81\x85\x02\xd1\x02\x1c\x81\x85\x02\xd0\x02\x1a\x81\x8f"
  "\x02\xcf\x02\x18\x81\x8b\x02\xce\x02\x16\x81\x83\x02\xcd\x02\x14"
  "\x81\x8b\x02\xcc\x02\x12\x81\x8b\x02\xcb\x02\x10\x81\x91\x02\xca"
  "\x02\x0e\x81\x8f\x02\xc9\x02\x0c\x81\x8d\x02\xc8\x02\x0a\x81\x89"
  "\x02\xc7\x02\x08\x81\x85\x02\xc6\x02\x06\x88\x08\xc5\x02\x04\x81"
  "\x8f\x02\x1f\x3e\x75\x02\x28\x16\x77\x69\x74\x68\x2d\x68\x69\x73"
  "\x74\x6f\x72\x79\x2d\x64\x69\x73\x61\x62\x6c\x65\x64\xd4\x02\x04"
  "\x84\x06\x03\x76\x02\x29\x23\x4e\x6f\x6e\x2d\x6f\x77\x6e\x65\x72"
  "\x20\x74\x68\x72\x65\x61\x64\x20\x63\x61\x6e\x27\x74\x20\x73\x74"
  "\x61\x72\x74\x20\x52\x45\x50\x4c\x3a\x0c\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x72\x65\x66\x77\x03\x0b\x63\x6d\x64\x6c\x2f\x73\x74\x61"
  "\x74\x65\x78\x04\x38\x04\x15\x65\x72\x72\x6f\x72\x3a\x64\x65\x72"
  "\x69\x76\x65\x64\x2d\x74\x68\x72\x65\x61\x64\x04\xd7\x02\x08\x81"
  "\x85\x02\xd6\x02\x06\x81\x85\x02\xd5\x02\x04\x84\x06\x07\x14\x79"
  "\x02\x2a\x6c\x08\x02\x27\x08\x13\x03\xd9\x02\x06\x81\x89\x02\xd8"
  "\x02\x04\x86\x04\x05\x10\x7a\x02\x2b\x77\x0f\x65\x72\x72\x6f\x72"
  "\x2d\x64\x65\x63\x69\x73\x69\x6f\x6e\x02\x03\x78\x04\x04\x5b\x03"
  "\x11\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x65\x72\x72\x6f\x72"
  "\x3f\x03\x25\x04\x1d\x70\x6f\x72\x74\x2f\x73\x65\x74\x2d\x64\x65"
  "\x66\x61\x75\x6c\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x7b\x03\x0d\x71\x75\x65\x75\x65\x2d\x65\x6d\x70\x74\x79\x3f"
  "\x03\x09\x64\x65\x71\x75\x65\x75\x65\x21\x04\x05\x11\x25\x72\x65"
  "\x70\x6c\x2d\x65\x76\x61\x6c\x2f\x77\x72\x69\x74\x65\x7c\x0b\xed"
  "\x02\x2a\x81\x85\x02\xec\x02\x28\x81\x89\x02\xeb\x02\x26\x81\x87"
  "\x02\xea\x02\x24\x81\x87\x02\xe9\x02\x22\x81\x85\x02\xe8\x02\x20"
  "\x81\x85\x02\xe7\x02\x1e\x81\x85\x02\xe6\x02\x1c\x81\x87\x02\xe5"
  "\x02\x1a\x81\x83\x02\xe4\x02\x18\x81\x83\x02\xe3\x02\x16\x81\x85"
  "\x02\xe2\x02\x14\x81\x85\x02\xe1\x02\x12\x81\x83\x02\xe0\x02\x10"
  "\x81\x83\x02\xdf\x02\x0e\x81\x85\x02\xde\x02\x0c\x81\x85\x02\xdd"
  "\x02\x0a\x81\x83\x02\xdc\x02\x08\x81\x85\x02\xdb\x02\x06\x81\x83"
  "\x02\xda\x02\x04\x83\x04\x29\x48\x7d\x02\x2c\x77\x14\x72\x75\x6e"
  "\x2d\x69\x6e\x2d\x6e\x65\x61\x72\x65\x73\x74\x2d\x72\x65\x70\x6c"
  "\x7e\x05\x1d\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x6f\x66\x2d\x61\x72\x69\x74\x79\x02"
  "\x0d\x6e\x65\x61\x72\x65\x73\x74\x2d\x72\x65\x70\x6c\x7f\x04\x09"
  "\x65\x6e\x71\x75\x65\x75\x65\x21\x03\x78\x05\xf2\x02\x0c\x81\x85"
  "\x02\xf1\x02\x0a\x81\x83\x02\xf0\x02\x08\x81\x83\x02\xef\x02\x06"
  "\x81\x83\x02\xee\x02\x04\x83\x04\x0b\x1b\x80\x01\x02\x2d\x0a\x72"
  "\x65\x70\x6c\x2d\x72\x65\x61\x64\x81\x01\x05\x0c\x6f\x70\x74\x69"
  "\x6f\x6e\x61\x6c\x2d\x65\x72\x82\x01\x04\x03\xf5\x02\x08\x84\x06"
  "\xf4\x02\x06\x81\x85\x02\xf3\x02\x04\x84\x02\x07\x10\x83\x01\x02"
  "\x2e\x09\x73\x74\x61\x6e\x64\x61\x72\x64\x77\x03\x78\x03\x25\x05"
  "\x1e\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x63\x6f\x6d\x6d"
  "\x61\x6e\x64\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x04\xf9"
  "\x02\x0a\x81\x89\x02\xf8\x02\x08\x81\x85\x02\xf7\x02\x06\x81\x85"
  "\x02\xf6\x02\x04\x84\x06\x09\x16\x84\x01\x02\x2f\x0a\x72\x65\x70"
  "\x6c\x2d\x65\x76\x61\x6c\x85\x01\x05\x82\x01\x05\x0b\x25\x72\x65"
  "\x70\x6c\x2d\x65\x76\x61\x6c\x86\x01\x03\xfc\x02\x08\x81\x87\x02"
  "\xfb\x02\x06\x81\x87\x02\xfa\x02\x04\x85\x04\x07\x10\x87\x01\x02"
  "\x30\x77\x03\x78\x05\x04\x15\x72\x65\x70\x6c\x2d\x68\x69\x73\x74"
  "\x6f\x72\x79\x2f\x72\x65\x63\x6f\x72\x64\x21\x88\x01\x04\x84\x03"
  "\x12\x81\x8d\x02\x83\x03\x10\x81\x8d\x02\x82\x03\x0e\x81\x89\x02"
  "\x81\x03\x0c\x81\x87\x02\x80\x03\x0a\x81\x8b\x02\xff\x02\x08\x81"
  "\x8b\x02\xfe\x02\x06\x81\x87\x02\xfd\x02\x04\x85\x08\x11\x1e\x89"
  "\x01\x02\x31\x46\x05\x75\x73\x65\x72\x08\x75\x6e\x71\x75\x6f\x74"
  "\x65\x45\x03\x6e\x04\x07\x73\x79\x6e\x74\x61\x78\x05\x11\x25\x72"
  "\x65\x70\x6c\x2d\x73\x63\x6f\x64\x65\x2d\x65\x76\x61\x6c\x8a\x01"
  "\x04\x8b\x03\x10\x81\x89\x02\x8a\x03\x0e\x81\x8d\x02\x89\x03\x0c"
  "\x81\x8d\x02\x88\x03\x0a\x81\x87\x02\x87\x03\x08\x81\x87\x02\x86"
  "\x03\x06\x81\x87\x02\x85\x03\x04\x85\x08\x0f\x1d\x8b\x01\x02\x32"
  "\x10\x72\x65\x70\x6c\x2d\x73\x63\x6f\x64\x65\x2d\x65\x76\x61\x6c"
  "\x8c\x01\x05\x82\x01\x05\x8a\x01\x03\x8e\x03\x08\x81\x87\x02\x8d"
  "\x03\x06\x81\x87\x02\x8c\x03\x04\x85\x04\x07\x10\x8d\x01\x02\x33"
  "\x04\x18\x77\x69\x74\x68\x2d\x72\x65\x70\x6c\x2d\x65\x76\x61\x6c"
  "\x2d\x62\x6f\x75\x6e\x64\x61\x72\x79\x8e\x01\x04\x14\x65\x78\x74"
  "\x65\x6e\x64\x65\x64\x2d\x73\x63\x6f\x64\x65\x2d\x65\x76\x61\x6c"
  "\x03\x90\x03\x06\x81\x83\x02\x8f\x03\x04\x85\x08\x05\x0d\x8f\x01"
  "\x02\x34\x12\x77\x69\x74\x68\x2d\x73\x74\x61\x63\x6b\x2d\x6d\x61"
  "\x72\x6b\x65\x72\x8e\x01\x02\x03\x11\x77\x69\x74\x68\x2d\x6e\x65"
  "\x77\x2d\x68\x69\x73\x74\x6f\x72\x79\x02\x93\x03\x08\x81\x83\x02"
  "\x92\x03\x06\x81\x87\x02\x91\x03\x04\x84\x06\x07\x10\x90\x01\x02"
  "\x35\x0b\x72\x65\x70\x6c\x2d\x77\x72\x69\x74\x65\x91\x01\x05\x82"
  "\x01\x06\x03\x96\x03\x08\x81\x87\x02\x95\x03\x06\x81\x89\x02\x94"
  "\x03\x04\x86\x06\x07\x10\x92\x01\x02\x36\x3d\x3b\x0f\x44\x1b\x20"
  "\x72\x65\x70\x6c\x3a\x77\x72\x69\x74\x65\x2d\x72\x65\x73\x75\x6c"
  "\x74\x2d\x68\x61\x73\x68\x2d\x6e\x75\x6d\x62\x65\x72\x73\x3f\x93"
  "\x01\x02\x03\x25\x03\x0c\x6f\x62\x6a\x65\x63\x74\x2d\x68\x61\x73"
  "\x68\x03\x11\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62"
  "\x6f\x6c\x3f\x07\x12\x70\x6f\x72\x74\x2f\x77\x72\x69\x74\x65\x2d"
  "\x72\x65\x73\x75\x6c\x74\x03\x10\x6f\x62\x6a\x65\x63\x74\x2d\x70"
  "\x6f\x69\x6e\x74\x65\x72\x3f\x06\xa1\x03\x18\x81\x8f\x02\xa0\x03"
  "\x16\x81\x89\x02\x9f\x03\x14\x81\x8d\x02\x9e\x03\x12\x81\x8f\x02"
  "\x9d\x03\x10\x81\x83\x02\x9c\x03\x0e\x81\x83\x02\x9b\x03\x0c\x81"
  "\x83\x02\x9a\x03\x0a\x81\x83\x02\x99\x03\x08\x81\x8f\x02\x98\x03"
  "\x06\x81\x8f\x02\x97\x03\x04\x86\x0a\x17\x2f\x94\x01\x02\x37\x10"
  "\x72\x65\x70\x6c\x2d\x65\x76\x61\x6c\x2f\x77\x72\x69\x74\x65\x95"
  "\x01\x05\x82\x01\x05\x7c\x03\xa4\x03\x08\x81\x87\x02\xa3\x03\x06"
  "\x81\x87\x02\xa2\x03\x04\x85\x04\x07\x10\x96\x01\x02\x38\x05\x86"
  "\x01\x06\x03\xa6\x03\x06\x81\x87\x02\xa5\x03\x04\x85\x08\x05\x0d"
  "\x97\x01\x02\x39\x77\x08\x02\x7f\x04\x0f\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x72\x65\x70\x6c\x98\x01\x03\x78\x04\x16\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x05\xae\x03\x12\x81\x85\x02\xad\x03\x10\x81\x89\x02"
  "\xac\x03\x0e\x81\x8b\x02\xab\x03\x0c\x81\x8b\x02\xaa\x03\x0a\x81"
  "\x8b\x02\xa9\x03\x08\x81\x87\x02\xa8\x03\x06\x81\x89\x02\xa7\x03"
  "\x04\x85\x08\x11\x20\x99\x01\x02\x3a\x08\x04\x12\x6d\x61\x6b\x65"
  "\x2d\x72\x65\x70\x6c\x2d\x6d\x65\x73\x73\x61\x67\x65\x9a\x01\x04"
  "\x0b\x63\x6d\x64\x6c\x2f\x73\x74\x61\x72\x74\x9b\x01\x03\xb0\x03"
  "\x06\x81\x85\x02\xaf\x03\x04\x84\x04\x05\x0e\x9c\x01\x02\x3b\x02"
  "\x1a\x65\xf5\x03\x77\x1c\x2a\x75\x6e\x70\x61\x72\x73\x65\x72\x2d"
  "\x6c\x69\x73\x74\x2d\x64\x65\x70\x74\x68\x2d\x6c\x69\x6d\x69\x74"
  "\x2a\x9d\x01\x1e\x2a\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6c\x69"
  "\x73\x74\x2d\x62\x72\x65\x61\x64\x74\x68\x2d\x6c\x69\x6d\x69\x74"
  "\x2a\x9e\x01\x1f\x2a\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x2d\x6c\x69\x6d\x69"
  "\x74\x2a\x9f\x01\x04\x22\x72\x65\x70\x6c\x3a\x61\x6c\x6c\x6f\x77"
  "\x2d\x72\x65\x73\x74\x61\x72\x74\x2d\x6e\x6f\x74\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x73\x3f\xa0\x01\x1d\x72\x65\x70\x6c\x2f\x73"
  "\x65\x74\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\xa1\x01\x9d\x01\x9e\x01\x9f\x01\x06\x03"
  "\x78\x05\x3a\x05\x3d\x03\x1b\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x2d\x72\x65\x73\x74\x61\x72\x74\x73\x2d\x6d\x65\x73\x73\x61\x67"
  "\x65\x9f\x01\x03\x14\x03\x18\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x2f\x72\x65\x70\x6f\x72\x74\x2d\x73\x74\x72\x69\x6e\x67\x07\xc3"
  "\x03\x28\x81\x83\x02\xc2\x03\x26\x81\x85\x02\xc1\x03\x24\x81\x83"
  "\x02\xc0\x03\x22\x81\x83\x02\xbf\x03\x20\x81\x85\x02\xbe\x03\x1e"
  "\x81\x83\x02\xbd\x03\x1c\x81\x83\x02\xbc\x03\x1a\x81\x85\x02\xbb"
  "\x03\x18\x81\x83\x02\xba\x03\x16\x81\x83\x02\xb9\x03\x14\x81\x83"
  "\x02\xb8\x03\x12\x81\x81\x02\xb7\x03\x10\x81\x87\x02\xb6\x03\x0e"
  "\x81\x89\x02\xb5\x03\x0c\x81\x85\x02\xb4\x03\x0a\x81\x85\x02\xb3"
  "\x03\x08\x81\x87\x02\xb2\x03\x06\x81\x87\x02\xb1\x03\x04\x84\x06"
  "\x27\x47\x9e\x01\x02\x3c\x18\x73\x65\x74\x2d\x64\x65\x66\x61\x75"
  "\x6c\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x02\x77"
  "\x03\x78\x03\x29\x04\x5b\x03\x3b\x04\x06\xcb\x03\x12\x81\x87\x02"
  "\xca\x03\x10\x81\x85\x02\xc9\x03\x0e\x81\x87\x02\xc8\x03\x0c\x81"
  "\x87\x02\xc7\x03\x0a\x81\x87\x02\xc6\x03\x08\x81\x83\x02\xc5\x03"
  "\x06\x81\x83\x02\xc4\x03\x04\x83\x04\x11\x23\x9d\x01\x02\x3d\x0b"
  "\x3b\x50\x61\x63\x6b\x61\x67\x65\x3a\x20\xa7\x01\x3b\x57\x61\x72"
  "\x6e\x69\x6e\x67\x21\x20\x74\x68\x69\x73\x20\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x20\x69\x73\x20\x61\x20\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x20\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x3a\x0a\x3b\x20\x41\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x73\x20\x74\x6f\x20\x6d\x6f\x73\x74\x20\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x20\x62\x69\x6e\x64\x69"
  "\x6e\x67\x73\x20\x61\x72\x65\x20\x70\x72\x6f\x68\x69\x62\x69\x74"
  "\x65\x64\x2c\x0a\x3b\x20\x61\x73\x20\x61\x72\x65\x20\x63\x65\x72"
  "\x74\x61\x69\x6e\x20\x6f\x74\x68\x65\x72\x20\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e"
  "\x73\x2e\x02\x50\x03\x25\x05\x51\x03\x19\x69\x6e\x74\x65\x72\x70"
  "\x72\x65\x74\x65\x72\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x3f\x03\x53\x03\x15\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2d\x3e\x70\x61\x63\x6b\x61\x67\x65\x51\x04\x54\x03\x0d\x70"
  "\x61\x63\x6b\x61\x67\x65\x2f\x6e\x61\x6d\x65\x50\x04\x06\x77\x72"
  "\x69\x74\x65\xa2\x01\x09\xd5\x03\x16\x81\x85\x02\xd4\x03\x14\x81"
  "\x85\x02\xd3\x03\x12\x81\x85\x02\xd2\x03\x10\x81\x83\x02\xd1\x03"
  "\x0e\x81\x83\x02\xd0\x03\x0c\x81\x83\x02\xcf\x03\x0a\x81\x83\x02"
  "\xce\x03\x08\x81\x83\x02\xcd\x03\x06\x81\x85\x02\xcc\x03\x04\x84"
  "\x06\x15\x2d\xa3\x01\x02\x3e\x0d\x2c\x20\x69\x6e\x63\x6c\x75\x73"
  "\x69\x76\x65\x2e\x2a\x3b\x4f\x70\x74\x69\x6f\x6e\x20\x6d\x75\x73"
  "\x74\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72\x20"
  "\x62\x65\x74\x77\x65\x65\x6e\x20\x31\x20\x61\x6e\x64\x20\x02\x3a"
  "\x0e\x4f\x70\x74\x69\x6f\x6e\x20\x6e\x75\x6d\x62\x65\x72\x02\x3b"
  "\x1d\x3b\x43\x68\x6f\x6f\x73\x65\x20\x61\x6e\x20\x6f\x70\x74\x69"
  "\x6f\x6e\x20\x62\x79\x20\x6e\x75\x6d\x62\x65\x72\x3a\x25\x43\x61"
  "\x6e\x27\x74\x20\x52\x45\x53\x54\x41\x52\x54\x3a\x20\x6e\x6f\x20"
  "\x6f\x70\x74\x69\x6f\x6e\x73\x20\x61\x76\x61\x69\x6c\x61\x62\x6c"
  "\x65\x2e\x0e\x65\x78\x61\x63\x74\x20\x69\x6e\x74\x65\x67\x65\x72"
  "\x08\x72\x65\x73\x74\x61\x72\x74\xa4\x01\x0f\x44\x1b\x08\x02\x17"
  "\x6e\x65\x61\x72\x65\x73\x74\x2d\x72\x65\x70\x6c\x2f\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\xa5\x01\x02\x66\x03\x13\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2f\x72\x65\x73\x74\x61\x72\x74\x73\xa6\x01"
  "\x03\x07\x6c\x65\x6e\x67\x74\x68\xa7\x01\x03\x10\x66\x69\x6c\x74"
  "\x65\x72\x2d\x72\x65\x73\x74\x61\x72\x74\x73\xa8\x01\x02\x15\x69"
  "\x6e\x74\x65\x72\x61\x63\x74\x69\x6f\x6e\x2d\x69\x2f\x6f\x2d\x70"
  "\x6f\x72\x74\x05\x1b\x05\x03\x3c\x3d\x03\x38\x04\x1d\x69\x6e\x76"
  "\x6f\x6b\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x2d\x69\x6e\x74\x65"
  "\x72\x61\x63\x74\x69\x76\x65\x6c\x79\x03\x05\x62\x65\x65\x70\x04"
  "\x1e\x04\x09\x6c\x69\x73\x74\x2d\x72\x65\x66\x1e\x03\x53\x04\x54"
  "\x03\x54\x05\x0f\x77\x72\x69\x74\x65\x2d\x72\x65\x73\x74\x61\x72"
  "\x74\x73\xa9\x01\x02\x19\x6e\x65\x61\x72\x65\x73\x74\x2d\x72\x65"
  "\x70\x6c\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\xaa\x01"
  "\x03\x3c\x05\x20\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x65"
  "\x76\x61\x6c\x75\x61\x74\x65\x64\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x04\x10\x73\x74\x72\x69\x6e\x67\x2d\x70\x61\x64\x2d"
  "\x6c\x65\x66\x74\x04\xa2\x01\x17\xf7\x03\x46\x81\x91\x02\xf6\x03"
  "\x44\x81\x91\x02\xf5\x03\x42\x81\x91\x02\xf4\x03\x40\x81\x91\x02"
  "\xf3\x03\x3e\x81\x91\x02\xf2\x03\x3c\x81\x8d\x02\xf1\x03\x3a\x81"
  "\x89\x02\xf0\x03\x38\x81\x85\x02\xef\x03\x36\x81\x93\x02\xee\x03"
  "\x34\x81\x85\x02\xed\x03\x32\x81\x8f\x02\xec\x03\x30\x84\x06\xeb"
  "\x03\x2e\x81\x8f\x02\xea\x03\x2c\x81\x8f\x02\xe9\x03\x2a\x81\x8f"
  "\x02\xe8\x03\x28\x81\x8d\x02\xe7\x03\x26\x81\x8d\x02\xe6\x03\x24"
  "\x81\x8d\x02\xe5\x03\x22\x81\x8d\x02\xe4\x03\x20\x81\x83\x02\xe3"
  "\x03\x1e\x81\x8f\x02\xe2\x03\x1c\x81\x91\x02\xe1\x03\x1a\x81\x91"
  "\x02\xe0\x03\x18\x81\x8b\x02\xdf\x03\x16\x81\x83\x02\xde\x03\x14"
  "\x81\x89\x02\xdd\x03\x12\x81\x87\x02\xdc\x03\x10\x81\x8d\x02\xdb"
  "\x03\x0e\x81\x8d\x02\xda\x03\x0c\x81\x89\x02\xd9\x03\x0a\x81\x87"
  "\x02\xd8\x03\x08\x81\x85\x02\xd7\x03\x06\x81\x83\x02\xd6\x03\x04"
  "\x83\x02\x45\x86\x01\x3c\x02\x3f\x46\x45\x02\x20\x03\x08\x6e\x65"
  "\x77\x6c\x69\x6e\x65\x03\xa7\x01\x04\x54\x04\x15\x77\x72\x69\x74"
  "\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x2d\x72\x65\x70\x6f\x72\x74"
  "\x05\x82\x04\x18\x81\x8d\x02\x81\x04\x16\x81\x8d\x02\x80\x04\x14"
  "\x81\x8d\x02\xff\x03\x12\x81\x8d\x02\xfe\x03\x10\x81\x91\x02\xfd"
  "\x03\x0e\x81\x8d\x02\xfc\x03\x0c\x81\x8d\x02\xfb\x03\x0a\x81\x8b"
  "\x02\xfa\x03\x08\x81\x87\x02\xf9\x03\x06\x81\x87\x02\xf8\x03\x04"
  "\x85\x08\x17\x27\xa7\x01\x02\x40\x46\x45\x69\x02\x03\x69\x03\x13"
  "\x72\x65\x73\x74\x61\x72\x74\x2f\x69\x6e\x74\x65\x72\x61\x63\x74"
  "\x6f\x72\x04\x18\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f"
  "\x72\x6d\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x04\x8d\x04\x18\xfd"
  "\xff\x03\x8c\x04\x16\xfd\xff\x03\x8b\x04\x14\x81\x87\x02\x8a\x04"
  "\x12\x81\x85\x02\x89\x04\x10\x81\x85\x02\x88\x04\x0e\x81\x85\x02"
  "\x87\x04\x0c\xfd\xff\x03\x86\x04\x0a\x81\x83\x02\x85\x04\x08\x81"
  "\x87\x02\x84\x04\x06\x81\x83\x02\x83\x04\x04\x83\x04\x17\x26\x45"
  "\x02\x41\x05\x29\x20\x3d\x3e\x0c\x3b\x20\x28\x52\x45\x53\x54\x41"
  "\x52\x54\x20\x32\x3b\x54\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65"
  "\x2c\x20\x63\x61\x6c\x6c\x20\x52\x45\x53\x54\x41\x52\x54\x20\x77"
  "\x69\x74\x68\x20\x61\x6e\x20\x6f\x70\x74\x69\x6f\x6e\x20\x6e\x75"
  "\x6d\x62\x65\x72\x3a\x03\x30\x03\x53\x04\x54\x03\xa6\x01\x05\xa9"
  "\x01\x03\xa8\x01\x04\xa2\x01\x08\x96\x04\x14\x81\x85\x02\x95\x04"
  "\x12\x81\x85\x02\x94\x04\x10\x84\x06\x93\x04\x0e\x81\x87\x02\x92"
  "\x04\x0c\x81\x85\x02\x91\x04\x0a\x81\x85\x02\x90\x04\x08\x81\x85"
  "\x02\x8f\x04\x06\x81\x85\x02\x8e\x04\x04\x83\x04\x13\x28\xa6\x01"
  "\x02\x42\x19\x72\x65\x70\x6c\x2d\x72\x65\x61\x64\x65\x72\x2d\x68"
  "\x69\x73\x74\x6f\x72\x79\x2d\x73\x69\x7a\x65\xa2\x01\x02\x03\x12"
  "\x6d\x61\x6b\x65\x2d\x72\x65\x70\x6c\x2d\x68\x69\x73\x74\x6f\x72"
  "\x79\xab\x01\x02\x98\x04\x06\x81\x81\x02\x97\x04\x04\x82\x02\x05"
  "\x0d\xac\x01\x02\x43\x1a\x72\x65\x70\x6c\x2d\x70\x72\x69\x6e\x74"
  "\x65\x72\x2d\x68\x69\x73\x74\x6f\x72\x79\x2d\x73\x69\x7a\x65\xad"
  "\x01\x02\x03\xab\x01\x02\x9a\x04\x06\x81\x81\x02\x99\x04\x04\x82"
  "\x02\x05\x0d\xae\x01\x02\x44\x02\x0b\x6d\x61\x6b\x65\x2d\x71\x75"
  "\x65\x75\x65\x02\x9b\x04\x04\x82\x02\x03\xaf\x01\x02\x45\x77\x9c"
  "\x04\x04\x83\x04\x03\xb0\x01\x02\x46\x77\x9d\x04\x04\x83\x04\x03"
  "\xb1\x01\x02\x47\x77\x9e\x04\x04\x83\x04\x03\xb2\x01\x02\x48\x77"
  "\x9f\x04\x04\x83\x04\x03\xb3\x01\x02\x49\x77\xa0\x04\x04\x83\x04"
  "\x03\xb4\x01\x02\x4a\x77\xa1\x04\x04\x83\x04\x03\xb5\x01\x02\x4b"
  "\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\xb6\x01\x02"
  "\xa2\x04\x04\x84\x06\x03\xb7\x01\x02\x4c\xb6\x01\x02\xa3\x04\x04"
  "\x84\x06\x03\xb8\x01\x02\x4d\xb6\x01\x02\xa4\x04\x04\x84\x06\x03"
  "\xb9\x01\x02\x4e\xb6\x01\x02\xa5\x04\x04\x84\x06\x03\xba\x01\x02"
  "\x4f\x77\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74"
  "\x68\xbb\x01\x07\x2e\x74\x61\x67\x2e\x31\xbc\x01\x02\xa9\x04\x0a"
  "\x81\x85\x02\xa8\x04\x08\x81\x83\x02\xa7\x04\x06\x81\x83\x02\xa6"
  "\x04\x04\x83\x04\x09\x12\xbd\x01\x02\x50\x03\x18\x03\x78\x03\x0c"
  "\x72\x65\x70\x6c\x2d\x73\x74\x61\x74\x65\x3f\xbe\x01\x04\xac\x04"
  "\x08\x81\x83\x02\xab\x04\x06\x81\x83\x02\xaa\x04\x04\x83\x04\x07"
  "\x11\xbf\x01\x02\x51\x02\x03\x3b\x04\x0f\x65\x72\x72\x6f\x72\x3a"
  "\x6e\x6f\x74\x2d\x72\x65\x70\x6c\xc0\x01\x03\xae\x04\x06\x81\x85"
  "\x02\xad\x04\x04\x84\x04\x05\x0e\xc1\x01\x02\x52\x08\x15\x72\x65"
  "\x61\x64\x2d\x65\x76\x61\x6c\x2d\x70\x72\x69\x6e\x74\x20\x6c\x6f"
  "\x6f\x70\x05\x1b\x02\xaf\x04\x04\x84\x04\x03\x0c\xc2\x01\x02\x53"
  "\x77\x03\x78\x02\xb1\x04\x06\x81\x83\x02\xb0\x04\x04\x83\x04\x05"
  "\x0d\xc3\x01\x02\x54\xb6\x01\x02\x03\x78\x02\xb3\x04\x06\x81\x85"
  "\x02\xb2\x04\x04\x84\x06\x05\x0e\xc4\x01\x02\x55\x77\x03\x78\x02"
  "\xb5\x04\x06\x81\x83\x02\xb4\x04\x04\x83\x04\x05\x0d\xc5\x01\x02"
  "\x56\xb6\x01\x03\x78\x03\xa1\x01\x03\x25\x04\x7b\x05\xba\x04\x0c"
  "\x81\x85\x02\xb9\x04\x0a\x81\x85\x02\xb8\x04\x08\x81\x85\x02\xb7"
  "\x04\x06\x81\x85\x02\xb6\x04\x04\x84\x06\x0b\x19\x7b\x02\x57\x77"
  "\x03\x78\x02\xbc\x04\x06\x81\x83\x02\xbb\x04\x04\x83\x04\x05\x0d"
  "\xc6\x01\x02\x58\x77\x03\x78\x02\xbe\x04\x06\x81\x83\x02\xbd\x04"
  "\x04\x83\x04\x05\x0d\xc7\x01\x02\x59\xb6\x01\x02\x03\x78\x02\xc0"
  "\x04\x06\x81\x85\x02\xbf\x04\x04\x84\x06\x05\x0e\xc8\x01\x02\x5a"
  "\x77\x03\x78\x02\xc2\x04\x06\x81\x83\x02\xc1\x04\x04\x83\x04\x05"
  "\x0d\xc9\x01\x02\x5b\xb6\x01\x02\x03\x78\x02\xc4\x04\x06\x81\x85"
  "\x02\xc3\x04\x04\x84\x06\x05\x0e\xca\x01\x02\x5c\x77\x03\x78\x02"
  "\xc6\x04\x06\x81\x83\x02\xc5\x04\x04\x83\x04\x05\x0d\xcb\x01\x02"
  "\x5d\x03\x29\x03\x73\x03\xc8\x04\x06\x81\x83\x02\xc7\x04\x04\x83"
  "\x04\x05\x0d\xcc\x01\x02\x5e\x17\x4e\x45\x41\x52\x45\x53\x54\x2d"
  "\x52\x45\x50\x4c\x3a\x20\x6e\x6f\x20\x52\x45\x50\x4c\x73\x02\x27"
  "\x03\x38\x03\x73\x04\xcb\x04\x08\x81\x83\x02\xca\x04\x06\x81\x81"
  "\x02\xc9\x04\x04\x82\x02\x07\x12\x38\x02\x5f\x03\x78\x03\x29\x03"
  "\xbe\x01\x03\x73\x05\xcf\x04\x0a\x81\x83\x02\xce\x04\x08\x81\x85"
  "\x02\xcd\x04\x06\x81\x83\x02\xcc\x04\x04\x83\x04\x09\x15\xcd\x01"
  "\x02\x60\x03\x0c\x72\x65\x70\x6c\x2f\x70\x61\x72\x65\x6e\x74\xce"
  "\x01\x03\x0a\x72\x65\x70\x6c\x2f\x62\x61\x73\x65\xcf\x01\x03\xd1"
  "\x04\x06\x81\x83\x02\xd0\x04\x04\x83\x04\x05\x0d\xd0\x01\x02\x61"
  "\x77\x02\x7f\x03\x78\x03\xd4\x04\x08\x81\x85\x02\xd3\x04\x06\x81"
  "\x83\x02\xd2\x04\x04\x82\x02\x07\x11\xd1\x01\x02\x62\x77\x02\x7f"
  "\x03\x78\x03\xd7\x04\x08\x81\x85\x02\xd6\x04\x06\x81\x83\x02\xd5"
  "\x04\x04\x82\x02\x07\x11\xd2\x01\x02\x63\x77\xd8\x04\x04\x83\x04"
  "\x03\xd3\x01\x02\x64\x77\xd9\x04\x04\x83\x04\x03\xd4\x01\x02\x65"
  "\xb6\x01\x02\xda\x04\x04\x84\x06\x03\xd5\x01\x02\x66\x77\xbb\x01"
  "\x07\x2e\x74\x61\x67\x2e\x32\xbb\x01\x02\xde\x04\x0a\x81\x85\x02"
  "\xdd\x04\x08\x81\x83\x02\xdc\x04\x06\x81\x83\x02\xdb\x04\x04\x83"
  "\x04\x09\x12\xd6\x01\x02\x67\x04\x13\x6d\x61\x6b\x65\x2d\x63\x69"
  "\x72\x63\x75\x6c\x61\x72\x2d\x6c\x69\x73\x74\x04\x13\x25\x6d\x61"
  "\x6b\x65\x2d\x72\x65\x70\x6c\x2d\x68\x69\x73\x74\x6f\x72\x79\xd7"
  "\x01\x03\xe0\x04\x06\x81\x85\x02\xdf\x04\x04\x83\x04\x05\x0e\xd8"
  "\x01\x02\x68\x02\xb6\x01\x46\x57\x77\xe4\x04\x0a\x81\x87\x02\xe3"
  "\x04\x08\x81\x87\x02\xe2\x04\x06\x81\x85\x02\xe1\x04\x04\x84\x06"
  "\x09\x12\xb6\x01\x02\x69\x57\x02\x77\x04\x0a\x6c\x69\x73\x74\x2d"
  "\x74\x61\x69\x6c\x02\xe9\x04\x0c\x81\x87\x02\xe8\x04\x0a\x81\x89"
  "\x02\xe7\x04\x08\x81\x89\x02\xe6\x04\x06\x81\x85\x02\xe5\x04\x04"
  "\x84\x06\x0b\x16\x57\x02\x6a\x0e\x68\x69\x73\x74\x6f\x72\x79\x20"
  "\x69\x6e\x64\x65\x78\x12\x72\x65\x70\x6c\x2d\x68\x69\x73\x74\x6f"
  "\x72\x79\x2f\x72\x65\x61\x64\x46\x77\x03\x1b\x65\x78\x61\x63\x74"
  "\x2d\x6e\x6f\x6e\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x69\x6e\x74"
  "\x65\x67\x65\x72\x3f\x05\x1b\x04\x1e\x04\xf2\x04\x14\x81\x85\x02"
  "\xf1\x04\x12\x81\x85\x02\xf0\x04\x10\x81\x85\x02\xef\x04\x0e\x81"
  "\x85\x02\xee\x04\x0c\x81\x85\x02\xed\x04\x0a\x81\x85\x02\xec\x04"
  "\x08\x81\x85\x02\xeb\x04\x06\x81\x85\x02\xea\x04\x04\x84\x06\x13"
  "\x22\x1e\x02\x6b\x02\xaa\x01\x03\x51\x03\x50\x04\xf5\x04\x08\x81"
  "\x83\x02\xf4\x04\x06\x81\x81\x02\xf3\x04\x04\x82\x02\x07\x11\x51"
  "\x02\x6c\x03\x67\x65\x50\x04\x6e\x02\x7f\x03\x16\x73\x65\x74\x2d"
  "\x6c\x6f\x61\x64\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x21\x04\x16\x73\x65\x74\x2d\x72\x65\x70\x6c\x2f\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x21\xd9\x01\x05\xfa\x04\x0c\x81\x83"
  "\x02\xf9\x04\x0a\x81\x87\x02\xf8\x04\x08\x81\x83\x02\xf7\x04\x06"
  "\x81\x83\x02\xf6\x04\x04\x83\x04\x0b\x18\xda\x01\x02\x6d\x0c\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x44\x1e\x6e\x08\x03\x0d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3f\x03\x09\x70\x61"
  "\x63\x6b\x61\x67\x65\x3f\x03\x48\x03\x14\x70\x61\x63\x6b\x61\x67"
  "\x65\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x09\x70"
  "\x72\x6f\x6d\x69\x73\x65\x3f\x03\x16\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x47"
  "\x05\x1b\x03\x0e\x6e\x61\x6d\x65\x2d\x3e\x70\x61\x63\x6b\x61\x67"
  "\x65\x03\x14\x70\x72\x6f\x6d\x69\x73\x65\x2d\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x0b\x84\x05\x16\x81\x83\x02\x83\x05\x14"
  "\x81\x87\x02\x82\x05\x12\x81\x87\x02\x81\x05\x10\x81\x89\x02\x80"
  "\x05\x0e\x81\x89\x02\xff\x04\x0c\x81\x89\x02\xfe\x04\x0a\x81\x87"
  "\x02\xfd\x04\x08\x81\x87\x02\xfc\x04\x06\x81\x87\x02\xfb\x04\x04"
  "\x84\x04\x15\x36\x48\x02\x6e\x77\x08\x02\x7f\x03\x85\x01\x04\x46"
  "\x03\x78\x05\x89\x05\x0c\x81\x89\x02\x88\x05\x0a\x81\x87\x02\x87"
  "\x05\x08\x81\x87\x02\x86\x05\x06\x81\x83\x02\x85\x05\x04\x83\x02"
  "\x0b\x1b\x47\x02\x6f\x08\x77\x02\x7f\x04\x46\x03\x78\x04\x8d\x05"
  "\x0a\x81\x85\x02\x8c\x05\x08\x81\x83\x02\x8b\x05\x06\x81\x83\x02"
  "\x8a\x05\x04\x83\x02\x09\x17\x44\x02\x70\x08\x77\x02\x7f\x04\x46"
  "\x03\x78\x04\x92\x05\x0c\x81\x85\x02\x91\x05\x0a\x81\x85\x02\x90"
  "\x05\x08\x81\x83\x02\x8f\x05\x06\x81\x83\x02\x8e\x05\x04\x83\x02"
  "\x0b\x19\x77\x02\x71\x06\x0a\x70\x75\x73\x68\x2d\x72\x65\x70\x6c"
  "\x1b\x04\x15\x03\x94\x05\x06\x81\x89\x02\x93\x05\x04\x85\x08\x05"
  "\x0e\xdb\x01\x02\x72\x6c\x03\x76\x65\x6c\x04\x6e\x05\x10\x72\x65"
  "\x61\x64\x2d\x65\x76\x61\x6c\x2d\x70\x72\x69\x6e\x74\xdc\x01\x03"
  "\x96\x05\x06\x81\x85\x02\x95\x05\x04\x83\x04\x05\x0f\xdd\x01\x02"
  "\x73\x13\x3b\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x50\x52\x4f"
  "\x43\x45\x45\x44\x08\x02\x09\x63\x6f\x6e\x74\x69\x6e\x75\x65\xde"
  "\x01\x03\x0a\x75\x73\x65\x2d\x76\x61\x6c\x75\x65\x02\x19\x6e\x6f"
  "\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x6f\x75\x74\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\x03\x53\x04\x54\x06\x9a\x05\x0a\x81\x83"
  "\x02\x99\x05\x08\x81\x83\x02\x98\x05\x06\x81\x83\x02\x97\x05\x04"
  "\x83\x02\x09\x19\xdf\x01\x02\x74\x06\x61\x70\x70\x6c\x79\x19\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\xe0\x01\x15\x62\x72\x65\x61\x6b\x70"
  "\x6f\x69\x6e\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\xe1\x01"
  "\x02\x9c\x05\x06\x81\x85\x02\x9b\x05\x04\xfe\x05\x05\x0c\xe2\x01"
  "\x02\x75\x12\x52\x65\x74\x75\x72\x6e\x20\x66\x72\x6f\x6d\x20\x42"
  "\x4b\x50\x54\x2e\x06\x62\x6b\x70\x74\x3e\x03\x30\x07\x14\x73\x69"
  "\x67\x6e\x61\x6c\x2d\x62\x72\x65\x61\x6b\x70\x6f\x69\x6e\x74\x2d"
  "\x31\xe3\x01\x03\x53\x05\x15\x66\x6f\x72\x6d\x61\x74\x2d\x65\x72"
  "\x72\x6f\x72\x2d\x6d\x65\x73\x73\x61\x67\x65\x05\xa0\x05\x0a\x81"
  "\x85\x02\x9f\x05\x08\x81\x85\x02\x9e\x05\x06\x81\x8b\x02\x9d\x05"
  "\x04\xfd\x07\x09\x17\x53\x02\x76\x07\x42\x72\x65\x61\x6b\x21\x08"
  "\x02\xaa\x01\x05\x12\x73\x69\x67\x6e\x61\x6c\x2d\x62\x72\x65\x61"
  "\x6b\x70\x6f\x69\x6e\x74\xe4\x01\x03\xa2\x05\x06\x85\x02\xa1\x05"
  "\x04\x81\x87\x02\x05\x10\xe5\x01\x02\x77\x1a\x43\x6f\x6e\x74\x69"
  "\x6e\x75\x65\x20\x66\x72\x6f\x6d\x20\x62\x72\x65\x61\x6b\x70\x6f"
  "\x69\x6e\x74\x2e\x07\x62\x72\x65\x61\x6b\x3e\x08\x07\xe3\x01\x02"
  "\xa3\x05\x04\x86\x08\x03\x0c\xe6\x01\x02\x78\x02\xde\x01\x32\x02"
  "\x03\x12\x07\x2f\x05\x1b\x67\x65\x74\x2d\x62\x72\x65\x61\x6b\x70"
  "\x6f\x69\x6e\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\xde\x01\x06\x13\x25\x73\x69\x67\x6e\x61\x6c\x2d\x62\x72\x65\x61"
  "\x6b\x70\x6f\x69\x6e\x74\x32\x05\xaa\x05\x10\x81\x87\x02\xa9\x05"
  "\x0e\x81\x83\x02\xa8\x05\x0c\x81\x83\x02\xa7\x05\x0a\x81\x83\x02"
  "\xa6\x05\x08\x81\x8d\x02\xa5\x05\x06\x81\x85\x02\xa4\x05\x04\x87"
  "\x0c\x0f\x1f\x2f\x02\x79\x24\x42\x72\x65\x61\x6b\x70\x6f\x69\x6e"
  "\x74\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x75\x6e"
  "\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x3b\x20\x75\x73\x69\x6e\x67"
  "\x20\x52\x45\x50\x4c\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x20\x69\x6e\x73\x74\x65\x61\x64\x2e\x0f\x6e\x6f\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x12\xe0\x01\x03\x2a\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x66\x69\x72\x73\x74"
  "\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\xe0\x01\x02\xaa\x01\x04\x14\x04\x3d"
  "\x05\xb1\x05\x10\x81\x85\x02\xb0\x05\x0e\x81\x8b\x02\xaf\x05\x0c"
  "\x81\x89\x02\xae\x05\x0a\x81\x89\x02\xad\x05\x08\x81\x85\x02\xac"
  "\x05\x06\x85\x08\xab\x05\x04\x81\x87\x02\x0f\x1f\xe7\x01\x02\x7a"
  "\x12\x03\x1e\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f"
  "\x66\x69\x72\x73\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x03\x1b\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x64\x65"
  "\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x03\x26\x64\x65"
  "\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2f\x75\x6e\x64"
  "\x65\x66\x69\x6e\x65\x64\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x3f\x04\xb6\x05\x0c\x81\x87\x02\xb5\x05\x0a\x85\x08\xb4"
  "\x05\x08\x81\x83\x02\xb3\x05\x06\x81\x83\x02\xb2\x05\x04\x83\x04"
  "\x0b\x16\x12\x02\x7b\x66\x02\x6b\x08\x6d\x65\x73\x73\x61\x67\x65"
  "\x66\x6d\x0c\x42\x72\x65\x61\x6b\x70\x6f\x69\x6e\x74\x2e\x5a\x6d"
  "\x66\x6b\x1a\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70"
  "\x65\x3a\x62\x72\x65\x61\x6b\x70\x6f\x69\x6e\x74\x66\x16\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x62\x72\x65\x61\x6b\x70\x6f\x69"
  "\x6e\x74\x3f\xe8\x01\x17\x62\x72\x65\x61\x6b\x70\x6f\x69\x6e\x74"
  "\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\xe9\x01\x13\x62"
  "\x72\x65\x61\x6b\x70\x6f\x69\x6e\x74\x2f\x6d\x65\x73\x73\x61\x67"
  "\x65\xea\x01\x12\x62\x72\x65\x61\x6b\x70\x6f\x69\x6e\x74\x2f\x70"
  "\x72\x6f\x6d\x70\x74\xeb\x01\x32\x07\x66\x02\x06\x14\x6d\x61\x6b"
  "\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x03\x14\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x70\x72\x65\x64"
  "\x69\x63\x61\x74\x65\x04\x54\x04\x13\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x04\x16\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74"
  "\x6f\x72\x03\x11\x73\x69\x67\x6e\x61\x6c\x2d\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x03\x1c\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x62"
  "\x72\x65\x61\x6b\x70\x6f\x69\x6e\x74\x2d\x68\x61\x6e\x64\x6c\x65"
  "\x72\x54\x08\xcc\x05\x2e\x81\x83\x02\xcb\x05\x2c\x81\x8b\x02\xca"
  "\x05\x2a\x81\x8b\x02\xc9\x05\x28\x81\x81\x02\xc8\x05\x26\x81\x81"
  "\x02\xc7\x05\x24\x81\x85\x02\xc6\x05\x22\x81\x81\x02\xc5\x05\x20"
  "\x81\x81\x02\xc4\x05\x1e\x81\x85\x02\xc3\x05\x1c\x81\x81\x02\xc2"
  "\x05\x1a\x81\x81\x02\xc1\x05\x18\x81\x85\x02\xc0\x05\x16\x81\x81"
  "\x02\xbf\x05\x14\x81\x81\x02\xbe\x05\x12\x81\x85\x02\xbd\x05\x10"
  "\x81\x81\x02\xbc\x05\x0e\x81\x81\x02\xbb\x05\x0c\x84\x06\xba\x05"
  "\x0a\x81\x83\x02\xb9\x05\x08\x81\x81\x02\xb8\x05\x06\x81\x81\x02"
  "\xb7\x05\x04\x82\x02\x2d\x50\xec\x01\x02\x7c\x02\x33\x02\x33\x02"
  "\x03\xeb\x01\x05\x3a\x03\xea\x01\x03\xe9\x01\x04\x15\x06\x1b\x07"
  "\xd8\x05\x1a\x81\x8b\x02\xd7\x05\x18\x81\x85\x02\xd6\x05\x16\x81"
  "\x85\x02\xd5\x05\x14\x81\x83\x02\xd4\x05\x12\x81\x83\x02\xd3\x05"
  "\x10\x81\x85\x02\xd2\x05\x0e\x81\x83\x02\xd1\x05\x0c\x81\x83\x02"
  "\xd0\x05\x0a\x81\x83\x02\xcf\x05\x08\x81\x85\x02\xce\x05\x06\x83"
  "\x04\xcd\x05\x04\x81\x83\x02\x19\x2f\x3a\x7c\xbb\x01\x3a\x06\xec"
  "\x01\x04\x12\x04\xe7\x01\x06\x2f\x04\xe6\x01\x04\xe5\x01\x06\x53"
  "\x04\xe2\x01\x04\xdf\x01\x04\xdd\x01\x04\xdb\x01\x04\x77\x04\x44"
  "\x04\x47\x04\x48\x04\xda\x01\x04\x51\x04\x1e\x04\x57\x04\xb6\x01"
  "\x04\xd8\x01\x04\xd6\x01\x04\x1f\x33\x54\x0c\x32\xeb\x01\xea\x01"
  "\xe9\x01\xe8\x01\x66\xe0\x01\xde\x01\xe3\x01\xe4\x01\x5a\xe1\x01"
  "\x05\x62\x6b\x70\x74\x08\x70\x72\x6f\x63\x65\x65\x64\x6c\xdc\x01"
  "\x04\x6f\x75\x74\x03\x69\x6e\x03\x72\x65\x6e\x50\x03\x70\x65\x46"
  "\x1e\x72\x65\x70\x6c\x2d\x68\x69\x73\x74\x6f\x72\x79\x2f\x72\x65"
  "\x70\x6c\x61\x63\x65\x2d\x63\x75\x72\x72\x65\x6e\x74\x21\x88\x01"
  "\xab\x01\x0e\x72\x65\x70\x6c\x2d\x68\x69\x73\x74\x6f\x72\x79\x3f"
  "\x1f\xd7\x01\x1b\x73\x65\x74\x2d\x72\x65\x70\x6c\x2d\x68\x69\x73"
  "\x74\x6f\x72\x79\x2f\x65\x6c\x65\x6d\x65\x6e\x74\x73\x21\x16\x72"
  "\x65\x70\x6c\x2d\x68\x69\x73\x74\x6f\x72\x79\x2f\x65\x6c\x65\x6d"
  "\x65\x6e\x74\x73\x12\x72\x65\x70\x6c\x2d\x68\x69\x73\x74\x6f\x72"
  "\x79\x2f\x73\x69\x7a\x65\xd5\x01\x04\xd4\x01\x04\xd3\x01\x04\x11"
  "\x72\x74\x64\x3a\x72\x65\x70\x6c\x2d\x68\x69\x73\x74\x6f\x72\x79"
  "\xec\x01\x0d\x72\x65\x70\x6c\x2d\x68\x69\x73\x74\x6f\x72\x79\x05"
  "\x73\x69\x7a\x65\x09\x65\x6c\x65\x6d\x65\x6e\x74\x73\xbc\x01\xad"
  "\x01\xa2\x01\xa5\x01\xaa\x01\xcf\x01\x73\x7f\xce\x01\x11\x72\x65"
  "\x70\x6c\x2f\x69\x6e\x70\x75\x74\x2d\x71\x75\x65\x75\x65\x1a\x73"
  "\x65\x74\x2d\x72\x65\x70\x6c\x2f\x70\x72\x69\x6e\x74\x65\x72\x2d"
  "\x68\x69\x73\x74\x6f\x72\x79\x21\x15\x72\x65\x70\x6c\x2f\x70\x72"
  "\x69\x6e\x74\x65\x72\x2d\x68\x69\x73\x74\x6f\x72\x79\x19\x73\x65"
  "\x74\x2d\x72\x65\x70\x6c\x2f\x72\x65\x61\x64\x65\x72\x2d\x68\x69"
  "\x73\x74\x6f\x72\x79\x21\x14\x72\x65\x70\x6c\x2f\x72\x65\x61\x64"
  "\x65\x72\x2d\x68\x69\x73\x74\x6f\x72\x79\x0f\x72\x65\x70\x6c\x2f"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\xd9\x01\x6f\x11\x73\x65\x74"
  "\x2d\x72\x65\x70\x6c\x2f\x70\x72\x6f\x6d\x70\x74\x21\x72\xc0\x01"
  "\x98\x01\x3b\xbe\x01\x17\x0b\xd2\x01\x04\xd1\x01\x04\xd0\x01\x04"
  "\xcd\x01\x04\x38\x04\xcc\x01\x04\xcb\x01\x04\xca\x01\x04\xc9\x01"
  "\x04\xc8\x01\x04\xc7\x01\x04\xc6\x01\x04\x7b\x04\xc5\x01\x04\xc4"
  "\x01\x04\xc3\x01\x04\xc2\x01\x04\xc1\x01\x04\xbf\x01\x04\xbd\x01"
  "\x04\x17\x74\x20\x73\x65\x74\x2d\x72\x65\x70\x6c\x2d\x73\x74\x61"
  "\x74\x65\x2f\x70\x72\x69\x6e\x74\x65\x72\x2d\x68\x69\x73\x74\x6f"
  "\x72\x79\x21\x1f\x73\x65\x74\x2d\x72\x65\x70\x6c\x2d\x73\x74\x61"
  "\x74\x65\x2f\x72\x65\x61\x64\x65\x72\x2d\x68\x69\x73\x74\x6f\x72"
  "\x79\x21\x1c\x73\x65\x74\x2d\x72\x65\x70\x6c\x2d\x73\x74\x61\x74"
  "\x65\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x17\x73"
  "\x65\x74\x2d\x72\x65\x70\x6c\x2d\x73\x74\x61\x74\x65\x2f\x70\x72"
  "\x6f\x6d\x70\x74\x21\x17\x72\x65\x70\x6c\x2d\x73\x74\x61\x74\x65"
  "\x2f\x69\x6e\x70\x75\x74\x2d\x71\x75\x65\x75\x65\x1b\x72\x65\x70"
  "\x6c\x2d\x73\x74\x61\x74\x65\x2f\x70\x72\x69\x6e\x74\x65\x72\x2d"
  "\x68\x69\x73\x74\x6f\x72\x79\x1a\x72\x65\x70\x6c\x2d\x73\x74\x61"
  "\x74\x65\x2f\x72\x65\x61\x64\x65\x72\x2d\x68\x69\x73\x74\x6f\x72"
  "\x79\x15\x72\x65\x70\x6c\x2d\x73\x74\x61\x74\x65\x2f\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x17\x72\x65\x70\x6c\x2d\x73\x74\x61\x74"
  "\x65\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x12\x72\x65"
  "\x70\x6c\x2d\x73\x74\x61\x74\x65\x2f\x70\x72\x6f\x6d\x70\x74\x0b"
  "\xba\x01\x04\xb9\x01\x04\xb8\x01\x04\xb7\x01\x04\xb5\x01\x04\xb4"
  "\x01\x04\xb3\x01\x04\xb2\x01\x04\xb1\x01\x04\xb0\x01\x04\x0b\x0f"
  "\x72\x74\x64\x3a\x72\x65\x70\x6c\x2d\x73\x74\x61\x74\x65\xeb\x01"
  "\x0b\x72\x65\x70\x6c\x2d\x73\x74\x61\x74\x65\x6b\x6d\x0a\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x0f\x72\x65\x61\x64\x65\x72\x2d\x68"
  "\x69\x73\x74\x6f\x72\x79\x10\x70\x72\x69\x6e\x74\x65\x72\x2d\x68"
  "\x69\x73\x74\x6f\x72\x79\x0c\x69\x6e\x70\x75\x74\x2d\x71\x75\x65"
  "\x75\x65\xac\x01\x04\xae\x01\x04\xaf\x01\x04\x9f\x01\xa8\x01\xa9"
  "\x01\xa4\x01\x0b\xa1\x01\x9a\x01\x15\x82\x01\x7c\x95\x01\x0a\x91"
  "\x01\x8e\x01\x8a\x01\x8c\x01\x09\x86\x01\x85\x01\x81\x01\x7e\x70"
  "\x1b\x1e\xa6\x01\x04\x45\x04\xa7\x01\x04\x3c\x04\xa3\x01\x04\x9d"
  "\x01\x04\x9e\x01\x04\x9c\x01\x04\x99\x01\x04\x97\x01\x04\x96\x01"
  "\x04\x94\x01\x04\x92\x01\x04\x90\x01\x04\x8f\x01\x04\x8d\x01\x04"
  "\x8b\x01\x04\x89\x01\x04\x87\x01\x04\x84\x01\x04\x83\x01\x04\x80"
  "\x01\x04\x7d\x04\x7a\x04\x1e\x71\x2e\x79\x04\x2d\x76\x04\x13\x64"
  "\x67\x61\x5f\x5d\x1f\x63\x6d\x64\x6c\x2d\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x2f\x61\x62\x6f\x72\x74\x2d\x74\x6f\x70\x2d\x6c\x65"
  "\x76\x65\x6c\x1e\x63\x6d\x64\x6c\x2d\x69\x6e\x74\x65\x72\x72\x75"
  "\x70\x74\x2f\x61\x62\x6f\x72\x74\x2d\x70\x72\x65\x76\x69\x6f\x75"
  "\x73\x1d\x63\x6d\x64\x6c\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74"
  "\x2f\x61\x62\x6f\x72\x74\x2d\x6e\x65\x61\x72\x65\x73\x74\x1a\x63"
  "\x6d\x64\x6c\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2f\x62\x72"
  "\x65\x61\x6b\x70\x6f\x69\x6e\x74\x4e\x12\x63\x6d\x64\x6c\x2d\x6d"
  "\x65\x73\x73\x61\x67\x65\x2f\x6e\x75\x6c\x6c\x3d\x30\x14\x37\x15"
  "\x63\x6d\x64\x6c\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2d\x6e"
  "\x61\x6d\x65\x73\x5b\x24\x20\x41\x19\x6e\x65\x61\x72\x65\x73\x74"
  "\x2d\x63\x6d\x64\x6c\x2f\x62\x61\x74\x63\x68\x2d\x6d\x6f\x64\x65"
  "\x3f\x13\x6e\x65\x61\x72\x65\x73\x74\x2d\x63\x6d\x64\x6c\x2f\x6c"
  "\x65\x76\x65\x6c\x12\x6e\x65\x61\x72\x65\x73\x74\x2d\x63\x6d\x64"
  "\x6c\x2f\x70\x6f\x72\x74\x27\x69\x39\x9b\x01\x1b\x63\x6d\x64\x6c"
  "\x2f\x73\x65\x74\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x2a\x0a\x70\x75\x73\x68\x2d\x63\x6d\x64"
  "\x6c\x1f\x1d\x19\x0f\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x63"
  "\x6d\x64\x6c\x25\x75\x06\x6a\x04\x34\x04\x63\x04\x68\x04\x65\x04"
  "\x62\x04\x60\x04\x5e\x04\x5c\x04\x59\x04\x58\x04\x52\x04\x56\x04"
  "\x55\x04\x4f\x04\x4d\x04\x4c\x04\x4b\x04\x49\x04\x43\x04\x42\x04"
  "\x40\x04\x11\x04\x3f\x06\x3e\x04\x0e\x04\x35\x04\x2c\x04\x2b\x04"
  "\x28\x04\x26\x04\x23\x12\x1c\x04\x1a\x04\x25\x10\x63\x6d\x64\x6c"
  "\x2f\x70\x72\x6f\x70\x65\x72\x74\x69\x65\x73\x31\x4a\x0b\x70\x72"
  "\x6f\x70\x65\x72\x74\x69\x65\x73\xea\x01\x10\x73\x65\x74\x2d\x63"
  "\x6d\x64\x6c\x2f\x73\x74\x61\x74\x65\x21\x0b\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x73\xe9\x01\x78\x36\x06\x73\x74\x61\x74\x65\xe8"
  "\x01\x0f\x73\x65\x74\x2d\x63\x6d\x64\x6c\x2f\x70\x6f\x72\x74\x21"
  "\x07\x64\x72\x69\x76\x65\x72\xe7\x01\x25\x29\x05\x70\x6f\x72\x74"
  "\xe6\x01\x21\x07\x70\x61\x72\x65\x6e\x74\xe5\x01\x18\x06\x6c\x65"
  "\x76\x65\x6c\xe4\x01\x22\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x07\x3c\x63\x6d\x64\x6c\x3e\xe3\x01"
  "\xe4\x01\xe5\x01\xe6\x01\xe7\x01\xe8\x01\xe9\x01\xea\x01\x10\x0f"
  "\x17\x69\x6e\x69\x74\x69\x61\x6c\x2d\x74\x6f\x70\x2d\x6c\x65\x76"
  "\x65\x6c\x2d\x72\x65\x70\x6c\x14\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x93\x01\xa0\x01\x17"
  "\x04\x16\x04\x0d\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\xea\x01\x03\x19\x72\x65\x63\x6f"
  "\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68"
  "\x2d\x74\x61\x67\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65\x2d"
  "\x62\x79\x2d\x69\x6e\x64\x65\x78\x05\xe3\x01\xeb\x01\xec\x01\x04"
  "\x04\xea\x01\x04\x13\x72\x65\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73"
  "\x74\x72\x75\x63\x74\x6f\x72\x03\x11\x72\x65\x63\x6f\x72\x64\x2d"
  "\x70\x72\x65\x64\x69\x63\x61\x74\x65\x04\x10\x72\x65\x63\x6f\x72"
  "\x64\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x04\x10\x72\x65\x63\x6f"
  "\x72\x64\x2d\x6d\x6f\x64\x69\x66\x69\x65\x72\x06\x46\x8e\x01\x80"
  "\x80\x04\x45\x8c\x01\x81\x81\x02\x44\x8a\x01\x81\x81\x02\x43\x88"
  "\x01\x81\x85\x02\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81\x87\x02"
  "\x40\x82\x01\x81\x87\x02\x3f\x80\x01\x81\x83\x02\x3e\x7e\x81\x85"
  "\x02\x3d\x7c\x81\x83\x02\x3c\x7a\x81\x8d\x02\x3b\x78\x81\x85\x02"
  "\x3a\x76\x81\x87\x02\x39\x74\x81\x83\x02\x38\x72\x81\x91\x02\x37"
  "\x70\x81\x8b\x02\x36\x6e\x81\x83\x02\x35\x6c\x81\x8f\x02\x34\x6a"
  "\x81\x89\x02\x33\x68\x81\x85\x02\x32\x66\x81\x83\x02\x31\x64\x81"
  "\x8d\x02\x30\x62\x81\x89\x02\x2f\x60\x81\x87\x02\x2e\x5e\x81\x83"
  "\x02\x2d\x5c\x81\x85\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81\x85\x02"
  "\x2a\x56\x81\x87\x02\x29\x54\x81\x83\x02\x28\x52\x81\x83\x02\x27"
  "\x50\x81\x83\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x83\x02\x24\x4a"
  "\x81\x85\x02\x23\x48\x81\x83\x02\x22\x46\x81\x85\x02\x21\x44\x81"
  "\x89\x02\x20\x42\x81\x83\x02\x1f\x40\x81\x85\x02\x1e\x3e\x81\x89"
  "\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x85\x02\x1b\x38\x81\x89\x02"
  "\x1a\x36\x81\x83\x02\x19\x34\x81\x85\x02\x18\x32\x81\x89\x02\x17"
  "\x30\x81\x83\x02\x16\x2e\x81\x85\x02\x15\x2c\x81\x89\x02\x14\x2a"
  "\x81\x83\x02\x13\x28\x81\x85\x02\x12\x26\x81\x89\x02\x11\x24\x81"
  "\x83\x02\x10\x22\x81\x85\x02\x0f\x20\x81\x89\x02\x0e\x1e\x81\x83"
  "\x02\x0d\x1c\x81\x85\x02\x0c\x1a\x81\x89\x02\x0b\x18\x81\x83\x02"
  "\x0a\x16\x81\x85\x02\x09\x14\x81\x89\x02\x08\x12\x81\x83\x02\x07"
  "\x10\x81\x85\x02\x06\x0e\x81\x87\x02\x05\x0c\x81\x83\x02\x04\x0a"
  "\x81\x85\x02\x03\x08\x81\x89\x02\x02\x06\x81\x83\x02\x01\x04\x81"
  "\x83\x02\x8d\x01\xe4\x01";

SCHEME_OBJECT *
rep_so_data_113e37dfbb794e0c (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rep_so_data_113e37dfbb794e0c [0]))), (sizeof (prog_rep_so_data_113e37dfbb794e0c)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_84]));
}

DECLARE_COMPILED_DATA_NS ("rep.so", rep_so_data_113e37dfbb794e0c)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rep.so", "e2fe9220e1d9b94d")
