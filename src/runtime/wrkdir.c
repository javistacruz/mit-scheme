/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:01-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define ENVIRONMENT_LABEL_1_3 19
#define DEBUGGING_LABEL_1_2 18
#define EXECUTE_CACHE_1_9 11
#define EXECUTE_CACHE_1_6 13
#define FREE_REFERENCE_1_1 16
#define FREE_REFERENCE_1_0 17
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wrkdir_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_6)
DEFLABEL (initialize_packageB_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_8;
  Wrd11 = Wrd15;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_8 7
#define LABEL_2_9 9
#define LABEL_2_6 11
#define LABEL_2_7 13
#define ENVIRONMENT_LABEL_2_3 25
#define DEBUGGING_LABEL_2_2 24
#define OBJECT_2_1 23
#define OBJECT_2_0 22
#define EXECUTE_CACHE_2_11 15
#define EXECUTE_CACHE_2_10 17
#define FREE_ASSIGNMENT_2_1 20
#define FREE_ASSIGNMENT_2_0 21
#define FREE_REFERENCES_LABEL_2_0 14
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wrkdir_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_2_4);
      goto resetB_5;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (resetB_10)
DEFLABEL (resetB_5)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;

DEFLABEL (label_15)
  ((Wrd5.pObj) [0]) = Rvl;

DEFLABEL (label_14)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  Rvl = (current_block [OBJECT_2_1]);
  goto pop_return;

DEFLABEL (label_13)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_9])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_8)
  goto label_11;

DEFLABEL (label_16)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_15;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_8])), (Wrd5.pObj), Rvl);

DEFLABEL (label_7)
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 9
#define DEBUGGING_LABEL_3_2 8
#define FREE_REFERENCE_3_0 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wrkdir_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto working_directory_pathname_0;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (working_directory_pathname_4)
DEFLABEL (working_directory_pathname_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_9 7
#define LABEL_4_7 9
#define LABEL_4_13 11
#define LABEL_4_14 13
#define LABEL_4_15 15
#define LABEL_4_16 17
#define LABEL_4_10 19
#define LABEL_4_11 21
#define ENVIRONMENT_LABEL_4_3 47
#define DEBUGGING_LABEL_4_2 46
#define OBJECT_4_5 45
#define OBJECT_4_4 44
#define OBJECT_4_3 43
#define OBJECT_4_2 42
#define OBJECT_4_1 41
#define OBJECT_4_0 40
#define EXECUTE_CACHE_4_20 23
#define EXECUTE_CACHE_4_19 25
#define EXECUTE_CACHE_4_18 27
#define EXECUTE_CACHE_4_17 29
#define EXECUTE_CACHE_4_12 31
#define EXECUTE_CACHE_4_8 33
#define EXECUTE_CACHE_4_6 35
#define FREE_ASSIGNMENT_4_1 38
#define FREE_ASSIGNMENT_4_0 39
#define FREE_REFERENCES_LABEL_4_0 22
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wrkdir_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd40;
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
      goto set_working_directory_pathnameB_10;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_4_13);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_4_14);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_working_directory_pathnameB_15)
DEFLABEL (set_working_directory_pathnameB_10)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd7.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_16;

DEFLABEL (label_17)
  (Wrd11.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_16)
DEFLABEL (label_25)
  (Wrd8.Obj) = (current_block [OBJECT_4_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_9);

DEFLABEL (label_24)
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_0]));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd15.Obj) = ((Wrd7.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd7.pObj) [0]) = (Wrd8.Obj);

DEFLABEL (label_21)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_1]));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd27.Obj) = ((Wrd19.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_20;

DEFLABEL (label_19)
  ((Wrd19.pObj) [0]) = (Wrd20.Obj);

DEFLABEL (label_18)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_15);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  if ((Wrd27.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_19;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_14])), (Wrd19.pObj), (Wrd20.Obj));

DEFLABEL (label_13)
  goto label_18;

DEFLABEL (label_23)
  if ((Wrd15.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_13])), (Wrd7.pObj), (Wrd8.Obj));

DEFLABEL (label_12)
  goto label_21;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_9 7
#define TAG_5_10 2
#define LABEL_5_7 9
#define TAG_5_8 3
#define LABEL_5_12 11
#define LABEL_5_13 13
#define LABEL_5_14 15
#define LABEL_5_15 17
#define LABEL_5_16 19
#define LABEL_5_17 21
#define ENVIRONMENT_LABEL_5_3 35
#define DEBUGGING_LABEL_5_2 34
#define OBJECT_5_0 33
#define EXECUTE_CACHE_5_11 23
#define EXECUTE_CACHE_5_6 25
#define FREE_REFERENCE_5_1 28
#define FREE_REFERENCE_5_0 29
#define FREE_ASSIGNMENT_5_1 31
#define FREE_ASSIGNMENT_5_0 32
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wrkdir_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_5_4);
      goto with_working_directory_pathname_17;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_9);
      goto lambda_28;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto swapB_27;

    case 4:
      current_block = (Rpc - LABEL_5_12);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_5_13);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_5_14);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_5_15);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_5_16);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_5_17);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_working_directory_pathname_26)
DEFLABEL (with_working_directory_pathname_17)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = Rvl;
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_7])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd24.pObj) = (& (Rhp [-1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd24.pObj)));
  (Rsp [2]) = (Wrd25.Obj);
  Wrd21 = Wrd27;
  ((Wrd21.pObj) [2]) = (Wrd25.Obj);
  ((Wrd21.pObj) [3]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_9])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd28.Obj);
  (Rsp [2]) = (Wrd28.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_5_9);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_27)
  CLOSURE_HEADER (LABEL_5_7);

DEFLABEL (swapB_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  Wrd5 = Wrd9;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_41)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_38)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  Wrd57 = Wrd61;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_32)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_5_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_17])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_24)
  goto label_29;

DEFLABEL (label_34)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_16])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_23)
  goto label_32;

DEFLABEL (label_37)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_36;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_15])), (Wrd58.pObj));

DEFLABEL (label_22)
  (Wrd57.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_40)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_39;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_21)
  goto label_38;

DEFLABEL (label_43)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_20)
  goto label_41;

DEFLABEL (label_46)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_12])), (Wrd6.pObj));

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_7 5
#define LABEL_6_5 7
#define LABEL_6_6 9
#define ENVIRONMENT_LABEL_6_3 20
#define DEBUGGING_LABEL_6_2 19
#define EXECUTE_CACHE_6_10 11
#define EXECUTE_CACHE_6_9 13
#define EXECUTE_CACHE_6_8 15
#define FREE_REFERENCE_6_0 18
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wrkdir_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_6_4);
      goto new_pathname_2;

    case 1:
      current_block = (Rpc - LABEL_6_7);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_pathname_6)
DEFLABEL (new_pathname_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_8;
  Wrd11 = Wrd15;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_7])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_7;

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
wrkdir_so_e03d749fdc08c2d4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 6)
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

static const struct liarc_code_S arr_decl_wrkdir_so_e03d749fdc08c2d4 [6] =
  {
    { "wrkdir_so_code_1", 4, wrkdir_so_code_1 },
    { "wrkdir_so_code_2", 6, wrkdir_so_code_2 },
    { "wrkdir_so_code_3", 2, wrkdir_so_code_3 },
    { "wrkdir_so_code_4", 10, wrkdir_so_code_4 },
    { "wrkdir_so_code_5", 10, wrkdir_so_code_5 },
    { "wrkdir_so_code_6", 4, wrkdir_so_code_6 }
  };

int
decl_wrkdir_so_e03d749fdc08c2d4 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_wrkdir_so_e03d749fdc08c2d4);
  return (0);
}

DECLARE_COMPILED_CODE ("wrkdir.so", 3, decl_wrkdir_so_e03d749fdc08c2d4, wrkdir_so_e03d749fdc08c2d4)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_wrkdir_so_data_e03d749fdc08c2d4 [1113] =
  "\x36\x0d\xea\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x0d\x24"
  "\x28\xb1\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xba\x1d\xb0\x82\x88\x1d\xc0\x0d\xbb\x0d\xbc\x25\x28\x0d\xbd\x28"
  "\x0d\xbe\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbf\x1d\xb0\x83\x88\xb3\x24\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\x0c\x0c\x0c\x0c\x0d\x1c\x08\xb3\xb4\x25\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x1d\xb3\xb4\x25\xb3"
  "\xb4\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d"
  "\xb0\x86\x88\xb3\x24\x28\x0d\x28\xb5\x28\xb6\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbe\x9d\xbd\x88\xb5\xb6\x2a\xb4\x2a"
  "\x1b\x2a\x1b\x2a\x1e\xb7\x2a\xb2\x2a\x9e\x1b\x0d\x1b\x0d\xb3\xb1"
  "\x0d\x9e\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72"
  "\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x77\x72\x6b\x64\x69\x72\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x07\x72\x65\x73\x65\x74\x21"
  "\x14\x65\x76\x65\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d\x72\x65\x73"
  "\x74\x6f\x72\x65\x03\x02\x04\x14\x61\x64\x64\x2d\x65\x76\x65\x6e"
  "\x74\x2d\x72\x65\x63\x65\x69\x76\x65\x72\x21\x03\x07\x0a\x81\x83"
  "\x02\x06\x08\x81\x81\x02\x05\x06\x81\x81\x02\x04\x04\x82\x02\x09"
  "\x14\x02\x02\x1b\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64\x69\x72\x65"
  "\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x1d\x2a"
  "\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2a\x1c\x2a\x64\x65\x66"
  "\x61\x75\x6c\x74\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65"
  "\x66\x61\x75\x6c\x74\x73\x2a\x03\x03\x12\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2d\x73\x69\x6d\x70\x6c\x69\x66\x79\x03\x16\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x03\x0d\x0e\x81\x85\x02\x0c\x0c\x81\x83\x02\x0b\x0a\x81"
  "\x83\x02\x0a\x08\x81\x83\x02\x09\x06\x81\x81\x02\x08\x04\x82\x02"
  "\x0d\x1a\x02\x02\x0f\x06\x81\x81\x02\x0e\x04\x82\x02\x05\x0a\x09"
  "\x02\x06\x65\x6e\x74\x65\x72\x0a\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x10\x6e\x6f\x74\x20\x61\x20\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x12\x6e\x6f\x20\x73\x75\x63\x68\x20\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x20\x73\x65\x74\x2d\x77\x6f\x72\x6b\x69\x6e\x67\x2d"
  "\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x21\x0a\x03\x03\x0d\x6e\x65\x77\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x0b\x03\x10\x66\x69\x6c\x65\x2d\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x3f\x03\x1b\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x66\x69\x6c"
  "\x65\x02\x0d\x6e\x65\x61\x72\x65\x73\x74\x2d\x63\x6d\x64\x6c\x04"
  "\x1b\x63\x6d\x64\x6c\x2f\x73\x65\x74\x2d\x64\x65\x66\x61\x75\x6c"
  "\x74\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x08\x15\x65\x72\x72"
  "\x6f\x72\x3a\x66\x69\x6c\x65\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f"
  "\x6e\x03\x0d\x66\x69\x6c\x65\x2d\x65\x78\x69\x73\x74\x73\x3f\x08"
  "\x19\x16\x81\x8d\x02\x18\x14\x81\x8b\x02\x17\x12\x81\x89\x02\x16"
  "\x10\x81\x85\x02\x15\x0e\x81\x85\x02\x14\x0c\x81\x85\x02\x13\x0a"
  "\x81\x85\x02\x12\x08\x81\x85\x02\x11\x06\x81\x83\x02\x10\x04\x83"
  "\x04\x15\x30\x0c\x02\x02\x03\x03\x03\x0b\x05\x13\x73\x68\x61\x6c"
  "\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x03\x23"
  "\x16\x81\x83\x02\x22\x14\x81\x85\x02\x21\x12\x81\x83\x02\x20\x10"
  "\x81\x83\x02\x1f\x0e\x81\x85\x02\x1e\x0c\x81\x83\x02\x1d\x0a\x81"
  "\x83\x02\x1c\x08\x81\x83\x02\x1b\x06\x81\x85\x02\x1a\x04\x84\x06"
  "\x15\x24\x02\x02\x04\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x73\x03\x03\x04\x27\x0a\x81\x85\x02\x26\x08\x81"
  "\x83\x02\x25\x06\x81\x87\x02\x24\x04\x83\x04\x09\x15\x04\x04\x0c"
  "\x04\x09\x04\x04\x04\x0b\x20\x77\x69\x74\x68\x2d\x77\x6f\x72\x6b"
  "\x69\x6e\x67\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x0a\x1b\x77\x6f\x72\x6b\x69\x6e\x67\x2d"
  "\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61"
  "\x63\x6b\x61\x67\x65\x21\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d"
  "\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81"
  "\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
wrkdir_so_data_e03d749fdc08c2d4 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_wrkdir_so_data_e03d749fdc08c2d4 [0]))), (sizeof (prog_wrkdir_so_data_e03d749fdc08c2d4)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("wrkdir.so", wrkdir_so_data_e03d749fdc08c2d4)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("wrkdir.so", "ff41f21e3e0275b9")
