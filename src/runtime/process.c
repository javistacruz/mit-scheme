/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:49-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_5 11
#define LABEL_1_10 13
#define LABEL_1_11 15
#define LABEL_1_14 17
#define LABEL_1_15 19
#define LABEL_1_13 21
#define LABEL_1_17 23
#define LABEL_1_18 25
#define ENVIRONMENT_LABEL_1_3 45
#define DEBUGGING_LABEL_1_2 44
#define OBJECT_1_0 43
#define EXECUTE_CACHE_1_16 27
#define EXECUTE_CACHE_1_12 29
#define EXECUTE_CACHE_1_9 31
#define FREE_REFERENCE_1_6 34
#define FREE_REFERENCE_1_5 35
#define FREE_REFERENCE_1_4 36
#define FREE_REFERENCE_1_3 37
#define FREE_REFERENCE_1_2 38
#define FREE_REFERENCE_1_1 39
#define FREE_REFERENCE_1_0 40
#define FREE_ASSIGNMENT_1_0 42
#define FREE_REFERENCES_LABEL_1_0 26
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_3;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_1_14);
      goto label_9;

    case 8:
      current_block = (Rpc - LABEL_1_15);
      goto label_10;

    case 9:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_1_17);
      goto label_11;

    case 11:
      current_block = (Rpc - LABEL_1_18);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_14)
DEFLABEL (initialize_packageB_3)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_31;
  Wrd8 = Wrd12;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_29;
  Wrd14 = Wrd18;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_27;
  Wrd20 = Wrd24;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_23)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_22;
  Wrd8 = Wrd12;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_20;
  Wrd14 = Wrd18;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_18;
  Wrd5 = Wrd9;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_16;
  Wrd11 = Wrd15;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_18])), (Wrd12.pObj));

DEFLABEL (label_12)
  (Wrd11.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_17])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd15.pObj));

DEFLABEL (label_10)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_10])), (Wrd6.pObj), Rvl);

DEFLABEL (label_8)
  goto label_23;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd21.pObj));

DEFLABEL (label_7)
  (Wrd20.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd15.pObj));

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define ENVIRONMENT_LABEL_2_3 16
#define DEBUGGING_LABEL_2_2 15
#define OBJECT_2_1 14
#define OBJECT_2_0 13
#define FREE_ASSIGNMENT_2_1 11
#define FREE_ASSIGNMENT_2_0 12
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_2_4);
      goto reset_packageB_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_packageB_7)
DEFLABEL (reset_packageB_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_11)
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd31.Obj) = ((Wrd23.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd23.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_2_1]);
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd31.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_7])), (Wrd23.pObj), (Wrd18.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_6])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define ENVIRONMENT_LABEL_3_3 16
#define DEBUGGING_LABEL_3_2 15
#define EXECUTE_CACHE_3_8 9
#define EXECUTE_CACHE_3_6 11
#define FREE_REFERENCE_3_0 14
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_3_4);
      goto delete_all_processes_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_all_processes_5)
DEFLABEL (delete_all_processes_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 12
#define DEBUGGING_LABEL_4_2 11
#define EXECUTE_CACHE_4_6 7
#define FREE_REFERENCE_4_0 10
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto subprocess_list_0;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_list_4)
DEFLABEL (subprocess_list_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 8
#define DEBUGGING_LABEL_5_2 7
#define EXECUTE_CACHE_5_5 5
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto subprocess_filename_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_filename_3)
DEFLABEL (subprocess_filename_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

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

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 7
#define DEBUGGING_LABEL_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto subprocess_arguments_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_arguments_3)
DEFLABEL (subprocess_arguments_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

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

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 7
#define DEBUGGING_LABEL_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto subprocess_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_index_3)
DEFLABEL (subprocess_index_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

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

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 7
#define DEBUGGING_LABEL_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto subprocess_pty_master_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_pty_master_3)
DEFLABEL (subprocess_pty_master_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

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

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto subprocess_input_channel_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_input_channel_3)
DEFLABEL (subprocess_input_channel_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

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

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto subprocess_output_channel_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_output_channel_3)
DEFLABEL (subprocess_output_channel_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 7
#define DEBUGGING_LABEL_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto subprocess_id_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_id_3)
DEFLABEL (subprocess_id_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 7
#define DEBUGGING_LABEL_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto subprocess__i_o_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess__i_o_port_3)
DEFLABEL (subprocess__i_o_port_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 7
#define DEBUGGING_LABEL_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto subprocess__status_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess__status_3)
DEFLABEL (subprocess__status_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 7
#define DEBUGGING_LABEL_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto subprocess_exit_reason_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_exit_reason_3)
DEFLABEL (subprocess_exit_reason_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 7
#define DEBUGGING_LABEL_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto subprocess__status_tick_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess__status_tick_3)
DEFLABEL (subprocess__status_tick_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [12]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 7
#define DEBUGGING_LABEL_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto subprocess_properties_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_properties_3)
DEFLABEL (subprocess_properties_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [13]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 8
#define DEBUGGING_LABEL_18_2 7
#define OBJECT_18_2 6
#define OBJECT_18_1 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto set_subprocess_indexB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_subprocess_indexB_3)
DEFLABEL (set_subprocess_indexB_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_18_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 8
#define DEBUGGING_LABEL_19_2 7
#define OBJECT_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto set_subprocess_pty_masterB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_subprocess_pty_masterB_3)
DEFLABEL (set_subprocess_pty_masterB_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_19_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 8
#define DEBUGGING_LABEL_20_2 7
#define OBJECT_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto set_subprocess_input_channelB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_subprocess_input_channelB_3)
DEFLABEL (set_subprocess_input_channelB_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_20_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 8
#define DEBUGGING_LABEL_21_2 7
#define OBJECT_21_2 6
#define OBJECT_21_1 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto set_subprocess_output_channelB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_subprocess_output_channelB_3)
DEFLABEL (set_subprocess_output_channelB_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_21_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 8
#define DEBUGGING_LABEL_22_2 7
#define OBJECT_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto set_subprocess__i_o_portB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_subprocess__i_o_portB_3)
DEFLABEL (set_subprocess__i_o_portB_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [9]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_22_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 8
#define DEBUGGING_LABEL_23_2 7
#define OBJECT_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto set_subprocess__statusB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_subprocess__statusB_3)
DEFLABEL (set_subprocess__statusB_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [10]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_23_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 8
#define DEBUGGING_LABEL_24_2 7
#define OBJECT_24_2 6
#define OBJECT_24_1 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto set_subprocess_exit_reasonB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_subprocess_exit_reasonB_3)
DEFLABEL (set_subprocess_exit_reasonB_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [11]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_24_1]);
  Rsp = (& (Rsp [3]));
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
process_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_subprocess__status_tickB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_subprocess__status_tickB_3)
DEFLABEL (set_subprocess__status_tickB_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [12]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_25_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define ENVIRONMENT_LABEL_26_3 17
#define DEBUGGING_LABEL_26_2 16
#define OBJECT_26_3 15
#define OBJECT_26_2 14
#define OBJECT_26_1 13
#define OBJECT_26_0 12
#define FREE_REFERENCE_26_0 11
#define FREE_REFERENCES_LABEL_26_0 10
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto subprocessP_4;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocessP_10)
DEFLABEL (subprocessP_4)
  INTERRUPT_CHECK (26, LABEL_26_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
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
  Rvl = (current_block [OBJECT_26_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_26_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 12
#define DEBUGGING_LABEL_27_2 11
#define OBJECT_27_1 10
#define OBJECT_27_0 9
#define EXECUTE_CACHE_27_6 7
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_27_4);
      goto subprocess_get_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_get_5)
DEFLABEL (subprocess_get_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd7.Obj) = ((Wrd11.pObj) [13]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_6)
  (Wrd21.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_27_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 12
#define DEBUGGING_LABEL_28_2 11
#define OBJECT_28_1 10
#define OBJECT_28_0 9
#define EXECUTE_CACHE_28_6 7
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_28_4);
      goto subprocess_putB_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_putB_5)
DEFLABEL (subprocess_putB_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [13]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_28_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define ENVIRONMENT_LABEL_29_3 12
#define DEBUGGING_LABEL_29_2 11
#define OBJECT_29_1 10
#define OBJECT_29_0 9
#define EXECUTE_CACHE_29_6 7
#define FREE_REFERENCES_LABEL_29_0 6
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_29_4);
      goto subprocess_removeB_1;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_removeB_5)
DEFLABEL (subprocess_removeB_1)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [13]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_29_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_8 5
#define LABEL_30_5 7
#define TAG_30_6 2
#define LABEL_30_9 9
#define LABEL_30_10 11
#define LABEL_30_11 13
#define LABEL_30_12 15
#define ENVIRONMENT_LABEL_30_3 27
#define DEBUGGING_LABEL_30_2 26
#define OBJECT_30_4 25
#define OBJECT_30_3 24
#define OBJECT_30_2 23
#define OBJECT_30_1 22
#define OBJECT_30_0 21
#define EXECUTE_CACHE_30_13 17
#define EXECUTE_CACHE_30_7 19
#define FREE_REFERENCES_LABEL_30_0 16
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd86;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd64;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd40;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd89;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_30_4);
      goto subprocess_i_o_port_9;

    case 1:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_30_5);
      goto lambda_17;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_30_10);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_30_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_30_12);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_i_o_port_16)
DEFLABEL (subprocess_i_o_port_9)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_30_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_30;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_30;
  (Wrd9.Obj) = ((Wrd15.pObj) [9]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_29)
  (Wrd29.Obj) = (Rsp [0]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (Wrd29.Obj);

DEFLABEL (label_18)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_28;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd48.Lng))))
    goto label_28;
  (Wrd40.Obj) = ((Wrd46.pObj) [7]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_27)
  (Wrd73.Obj) = (Rsp [3]);
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [2]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 62))
    goto label_26;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd72.Lng))))
    goto label_26;
  (Wrd64.Obj) = ((Wrd70.pObj) [6]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_25)
  (Wrd84.Obj) = (Rsp [0]);
  if ((Wrd84.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_13]));

DEFLABEL (label_21)
  (Wrd86.Obj) = (Rsp [1]);
  if (! ((Wrd86.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_20;
  (Wrd89.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_24)
  (Rsp [0]) = (Wrd89.Obj);
  (Wrd105.Obj) = (Rsp [1]);
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [2]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd108.uLng) == 62))
    goto label_23;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd104.Lng))))
    goto label_23;
  ((Wrd102.pObj) [9]) = (Wrd89.Obj);

DEFLABEL (label_22)
  Rvl = (Rsp [0]);
  goto label_18;

DEFLABEL (label_23)
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd109.Obj) = ((Wrd111.pObj) [2]);
  (Wrd112.Obj) = (current_block [OBJECT_30_0]);
  (Wrd113.Obj) = (Rsp [0]);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_4]), 3);

DEFLABEL (label_14)
  goto label_22;

DEFLABEL (label_26)
  (Wrd78.Obj) = (Rsp [3]);
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd77.Obj) = ((Wrd79.pObj) [2]);
  (Wrd80.Obj) = (current_block [OBJECT_30_3]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [2]);
  (Wrd56.Obj) = (current_block [OBJECT_30_2]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_30_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_8);
  (Wrd89.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_7 7
#define ENVIRONMENT_LABEL_31_3 14
#define DEBUGGING_LABEL_31_2 13
#define EXECUTE_CACHE_31_8 9
#define EXECUTE_CACHE_31_6 11
#define FREE_REFERENCES_LABEL_31_0 8
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto subprocess_input_port_3;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_input_port_6)
DEFLABEL (subprocess_input_port_3)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (Rsp [0]);
  goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define ENVIRONMENT_LABEL_32_3 14
#define DEBUGGING_LABEL_32_2 13
#define EXECUTE_CACHE_32_8 9
#define EXECUTE_CACHE_32_6 11
#define FREE_REFERENCES_LABEL_32_0 8
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto subprocess_output_port_3;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_output_port_6)
DEFLABEL (subprocess_output_port_3)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (Rsp [0]);
  goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define TAG_33_6 1
#define ENVIRONMENT_LABEL_33_3 12
#define DEBUGGING_LABEL_33_2 11
#define EXECUTE_CACHE_33_8 7
#define EXECUTE_CACHE_33_7 9
#define FREE_REFERENCES_LABEL_33_0 6
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_33_4);
      goto close_subprocess_i_o_1;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_subprocess_i_o_4)
DEFLABEL (close_subprocess_i_o_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_33_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_5 3
#define LABEL_34_6 5
#define LABEL_34_7 7
#define LABEL_34_4 9
#define LABEL_34_8 11
#define LABEL_34_9 13
#define LABEL_34_10 15
#define LABEL_34_11 17
#define LABEL_34_12 19
#define LABEL_34_13 21
#define LABEL_34_14 23
#define LABEL_34_16 25
#define LABEL_34_17 27
#define LABEL_34_18 29
#define ENVIRONMENT_LABEL_34_3 43
#define DEBUGGING_LABEL_34_2 42
#define OBJECT_34_6 41
#define OBJECT_34_5 40
#define OBJECT_34_4 39
#define OBJECT_34_3 38
#define OBJECT_34_2 37
#define OBJECT_34_1 36
#define OBJECT_34_0 35
#define EXECUTE_CACHE_34_19 31
#define EXECUTE_CACHE_34_15 33
#define FREE_REFERENCES_LABEL_34_0 30
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd115;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd154;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd174;
  machine_word Wrd192;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd158;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd119;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd83;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd80;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_34_5);
      goto continuation_13;

    case 1:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_34_4);
      goto Z__close_subprocess_i_o_21;

    case 4:
      current_block = (Rpc - LABEL_34_8);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_34_9);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_34_10);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_34_11);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_34_12);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_34_13);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_34_14);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_34_16);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_34_17);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_34_18);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__close_subprocess_i_o_34)
DEFLABEL (Z__close_subprocess_i_o_21)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_60;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_60;
  (Wrd10.Obj) = ((Wrd14.pObj) [9]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_59)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 62))
    goto label_40;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd68.Lng))))
    goto label_40;
  ((Wrd66.pObj) [9]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_39)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 62))
    goto label_38;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd51.Lng))))
    goto label_38;
  ((Wrd49.pObj) [6]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_37)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_36;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd34.Lng))))
    goto label_36;
  ((Wrd32.pObj) [7]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_19]));

DEFLABEL (label_36)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_34_3]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_18]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_6]), 3);

DEFLABEL (label_24)
  goto label_35;

DEFLABEL (label_38)
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.Obj) = (current_block [OBJECT_34_2]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_17]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_6]), 3);

DEFLABEL (label_25)
  goto label_37;

DEFLABEL (label_40)
  (Wrd71.Obj) = (Rsp [2]);
  (Wrd72.Obj) = (current_block [OBJECT_34_0]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_16]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_6]), 3);

DEFLABEL (label_26)
  goto label_39;

DEFLABEL (label_41)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_58)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd90.Obj) = (Rsp [1]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 62))
    goto label_57;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd89.Lng))))
    goto label_57;
  (Wrd83.Obj) = ((Wrd87.pObj) [6]);
  (* (--Rsp)) = (Wrd83.Obj);

DEFLABEL (label_56)
  (Wrd97.Obj) = (Rsp [0]);
  if ((Wrd97.Obj) == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd108.Obj) = (Rsp [2]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 62))
    goto label_43;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd106.Obj) = ((Wrd105.pObj) [0]);
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd107.Lng))))
    goto label_43;
  ((Wrd105.pObj) [6]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_15]));

DEFLABEL (label_43)
  (Wrd110.Obj) = (Rsp [2]);
  (Wrd111.Obj) = (current_block [OBJECT_34_2]);
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_14]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_6]), 3);

DEFLABEL (label_28)
  goto label_42;

DEFLABEL (label_44)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_55)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (Wrd129.Obj) = (Rsp [1]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if (! ((Wrd130.uLng) == 62))
    goto label_54;
  (Wrd126.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd127.Obj) = ((Wrd126.pObj) [0]);
  (Wrd128.Lng) = (FIXNUM_TO_LONG (Wrd127.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd128.Lng))))
    goto label_54;
  (Wrd122.Obj) = ((Wrd126.pObj) [7]);
  (* (--Rsp)) = (Wrd122.Obj);

DEFLABEL (label_53)
  (Wrd136.Obj) = (Rsp [0]);
  if ((Wrd136.Obj) == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd147.Obj) = (Rsp [2]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd148.uLng) == 62))
    goto label_45;
  (Wrd144.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd145.Obj) = ((Wrd144.pObj) [0]);
  (Wrd146.Lng) = (FIXNUM_TO_LONG (Wrd145.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd146.Lng))))
    goto label_45;
  ((Wrd144.pObj) [7]) = ((SCHEME_OBJECT) 0);
  goto label_42;

DEFLABEL (label_45)
  (Wrd149.Obj) = (Rsp [2]);
  (Wrd150.Obj) = (current_block [OBJECT_34_3]);
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_13]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd149.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_6]), 3);

DEFLABEL (label_30)
  goto label_42;

DEFLABEL (label_46)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_52)
  (Wrd165.Obj) = (Rsp [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if (! ((Wrd166.uLng) == 62))
    goto label_51;
  (Wrd162.pObj) = (OBJECT_ADDRESS (Wrd165.Obj));
  (Wrd163.Obj) = ((Wrd162.pObj) [0]);
  (Wrd164.Lng) = (FIXNUM_TO_LONG (Wrd163.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd164.Lng))))
    goto label_51;
  (Wrd158.Obj) = ((Wrd162.pObj) [5]);
  (* (--Rsp)) = (Wrd158.Obj);

DEFLABEL (label_50)
  (Wrd172.Obj) = (Rsp [0]);
  if (! ((Wrd172.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_47;
  Rvl = (current_block [OBJECT_34_5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd185.Obj) = (Rsp [1]);
  (Wrd186.uLng) = (OBJECT_TYPE (Wrd185.Obj));
  if (! ((Wrd186.uLng) == 62))
    goto label_49;
  (Wrd182.pObj) = (OBJECT_ADDRESS (Wrd185.Obj));
  (Wrd183.Obj) = ((Wrd182.pObj) [0]);
  (Wrd184.Lng) = (FIXNUM_TO_LONG (Wrd183.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd184.Lng))))
    goto label_49;
  ((Wrd182.pObj) [5]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_48)
  (Wrd174.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd174.Obj);
  Rsp = (& (Rsp [1]));
  goto label_42;

DEFLABEL (label_49)
  (Wrd187.Obj) = (Rsp [1]);
  (Wrd188.Obj) = (current_block [OBJECT_34_4]);
  (Wrd192.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd192.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd188.Obj);
  (* (--Rsp)) = (Wrd187.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_6]), 3);

DEFLABEL (label_32)
  goto label_48;

DEFLABEL (label_51)
  (Wrd167.Obj) = (Rsp [0]);
  (Wrd168.Obj) = (current_block [OBJECT_34_4]);
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_11]))));
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_54)
  (Wrd131.Obj) = (Rsp [1]);
  (Wrd132.Obj) = (current_block [OBJECT_34_3]);
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_57)
  (Wrd92.Obj) = (Rsp [1]);
  (Wrd93.Obj) = (current_block [OBJECT_34_2]);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_60)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_34_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_34_5);
  goto label_52;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_34_6);
  goto label_55;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_7);
  goto label_58;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_5 3
#define LABEL_35_6 5
#define LABEL_35_7 7
#define LABEL_35_8 9
#define LABEL_35_9 11
#define LABEL_35_4 13
#define LABEL_35_11 15
#define LABEL_35_12 17
#define LABEL_35_13 19
#define LABEL_35_23 21
#define LABEL_35_24 23
#define LABEL_35_10 25
#define LABEL_35_22 27
#define LABEL_35_21 29
#define LABEL_35_18 31
#define LABEL_35_15 33
#define TAG_35_16 15
#define LABEL_35_26 35
#define LABEL_35_29 37
#define LABEL_35_32 39
#define LABEL_35_33 41
#define LABEL_35_34 43
#define LABEL_35_36 45
#define LABEL_35_37 47
#define LABEL_35_38 49
#define LABEL_35_39 51
#define ENVIRONMENT_LABEL_35_3 98
#define DEBUGGING_LABEL_35_2 97
#define OBJECT_35_19 96
#define OBJECT_35_18 95
#define OBJECT_35_17 94
#define OBJECT_35_16 93
#define OBJECT_35_15 92
#define OBJECT_35_14 91
#define OBJECT_35_13 90
#define OBJECT_35_12 89
#define OBJECT_35_11 88
#define OBJECT_35_10 87
#define OBJECT_35_9 86
#define OBJECT_35_8 85
#define OBJECT_35_7 84
#define OBJECT_35_6 83
#define OBJECT_35_5 82
#define OBJECT_35_4 81
#define OBJECT_35_3 80
#define OBJECT_35_2 79
#define OBJECT_35_1 78
#define OBJECT_35_0 77
#define EXECUTE_CACHE_35_40 53
#define EXECUTE_CACHE_35_35 55
#define EXECUTE_CACHE_35_31 57
#define EXECUTE_CACHE_35_30 59
#define EXECUTE_CACHE_35_28 61
#define EXECUTE_CACHE_35_27 63
#define EXECUTE_CACHE_35_25 65
#define EXECUTE_CACHE_35_20 67
#define EXECUTE_CACHE_35_19 69
#define EXECUTE_CACHE_35_17 71
#define EXECUTE_CACHE_35_14 73
#define FREE_REFERENCE_35_0 76
#define FREE_REFERENCES_LABEL_35_0 52
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd43;
  machine_word Wrd25;
  machine_word Wrd42;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd157;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd126;
  machine_word Wrd130;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd167;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd115;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd172;
  machine_word Wrd174;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd176;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd180;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd186;
  machine_word Wrd82;
  machine_word Wrd123;
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
      current_block = (Rpc - LABEL_35_5);
      goto continuation_20;

    case 1:
      current_block = (Rpc - LABEL_35_6);
      goto continuation_14;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_35_9);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_35_4);
      goto make_subprocess_44;

    case 6:
      current_block = (Rpc - LABEL_35_11);
      goto label_48;

    case 7:
      current_block = (Rpc - LABEL_35_12);
      goto label_46;

    case 8:
      current_block = (Rpc - LABEL_35_13);
      goto label_47;

    case 9:
      current_block = (Rpc - LABEL_35_23);
      goto continuation_42;

    case 10:
      current_block = (Rpc - LABEL_35_24);
      goto continuation_41;

    case 11:
      current_block = (Rpc - LABEL_35_10);
      goto continuation_1;

    case 12:
      current_block = (Rpc - LABEL_35_22);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_35_21);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_35_18);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_35_15);
      goto lambda_54;

    case 16:
      current_block = (Rpc - LABEL_35_26);
      goto continuation_40;

    case 17:
      current_block = (Rpc - LABEL_35_29);
      goto continuation_23;

    case 18:
      current_block = (Rpc - LABEL_35_32);
      goto continuation_25;

    case 19:
      current_block = (Rpc - LABEL_35_33);
      goto continuation_24;

    case 20:
      current_block = (Rpc - LABEL_35_34);
      goto continuation_26;

    case 21:
      current_block = (Rpc - LABEL_35_36);
      goto label_49;

    case 22:
      current_block = (Rpc - LABEL_35_37);
      goto continuation_28;

    case 23:
      current_block = (Rpc - LABEL_35_38);
      goto label_51;

    case 24:
      current_block = (Rpc - LABEL_35_39);
      goto label_50;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_subprocess_53)
DEFLABEL (make_subprocess_44)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd186.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd186.Obj);
  (Wrd184.pObj) = (& (Rhp [-1]));
  (Wrd185.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd184.pObj)));
  (Rsp [2]) = (Wrd185.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 30)
    goto label_56;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_55;

DEFLABEL (label_56)
  (Wrd11.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_55)
DEFLABEL (label_89)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_88;
  if ((Wrd15.Obj) == (current_block [OBJECT_35_1]))
    goto label_87;
  (Wrd19.Obj) = (Rsp [1]);
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;
  if ((Wrd15.Obj) == (current_block [OBJECT_35_3]))
    goto label_59;

DEFLABEL (label_58)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_22]))));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_57)
  (Wrd43.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_19]));

DEFLABEL (label_59)
  (Wrd28.Obj) = (current_block [OBJECT_35_4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_86)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [8]);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_85;
  if ((Wrd32.Obj) == (current_block [OBJECT_35_1]))
    goto label_84;
  (Wrd36.Obj) = (Rsp [2]);
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_60;
  if ((Wrd32.Obj) == (current_block [OBJECT_35_3]))
    goto label_61;

DEFLABEL (label_60)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_21]))));
  (* (--Rsp)) = (Wrd42.Obj);
  goto label_57;

DEFLABEL (label_61)
  (Wrd45.Obj) = (current_block [OBJECT_35_4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_83)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [8]);
  if ((Wrd49.Obj) == (current_block [OBJECT_35_5]))
    goto label_82;
  if ((Wrd49.Obj) == (current_block [OBJECT_35_6]))
    goto label_81;
  if ((Wrd49.Obj) == ((SCHEME_OBJECT) 0))
    goto label_80;
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd56.uLng) == 30)
    goto label_80;
  (Wrd57.Obj) = (current_block [OBJECT_35_10]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_35_11]);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_79)
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd63.pObj) = (& (Rhp [-1]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd63.pObj)));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [13]);
  if ((Wrd69.Obj) == ((SCHEME_OBJECT) 0))
    goto label_78;
  if ((Wrd69.Obj) == (current_block [OBJECT_35_1]))
    goto label_77;
  (Wrd73.Obj) = (Rsp [5]);
  if (! ((Wrd73.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_75;

DEFLABEL (label_74)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_18]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_19]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_35_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  (Wrd7.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_28]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_35_6);
  (Wrd82.Obj) = Rvl;

DEFLABEL (label_72)
  (Rsp [4]) = (Wrd82.Obj);
  (Wrd83.Obj) = (Rsp [8]);
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd86.uLng) == 1)
    goto label_63;

DEFLABEL (label_62)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 14));
  (Wrd89.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_15])));
  Rhp += 11;
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd89.pObj)));
  Wrd110 = Wrd89;
  (Wrd111.Obj) = (Rsp [15]);
  ((Wrd110.pObj) [2]) = (Wrd111.Obj);
  (Wrd109.Obj) = (Rsp [14]);
  ((Wrd110.pObj) [3]) = (Wrd109.Obj);
  (Wrd107.Obj) = (Rsp [13]);
  ((Wrd110.pObj) [4]) = (Wrd107.Obj);
  (Wrd105.Obj) = (Rsp [8]);
  ((Wrd110.pObj) [5]) = (Wrd105.Obj);
  (Wrd103.Obj) = (Rsp [7]);
  ((Wrd110.pObj) [6]) = (Wrd103.Obj);
  (Wrd101.Obj) = (Rsp [6]);
  ((Wrd110.pObj) [7]) = (Wrd101.Obj);
  (Wrd99.Obj) = (Rsp [4]);
  ((Wrd110.pObj) [8]) = (Wrd99.Obj);
  (Wrd97.Obj) = (Rsp [3]);
  ((Wrd110.pObj) [9]) = (Wrd97.Obj);
  (Wrd95.Obj) = (Rsp [2]);
  ((Wrd110.pObj) [10]) = (Wrd95.Obj);
  (Wrd93.Obj) = (Rsp [1]);
  ((Wrd110.pObj) [11]) = (Wrd93.Obj);
  (Wrd91.Obj) = (Rsp [0]);
  ((Wrd110.pObj) [12]) = (Wrd91.Obj);
  (Rsp [4]) = (Wrd88.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_17]));

DEFLABEL (label_63)
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd115.Obj);
  if (! ((Wrd86.uLng) == 1))
    goto label_71;
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd120.Obj) = ((Wrd119.pObj) [1]);
  if ((Wrd120.Obj) == ((SCHEME_OBJECT) 0))
    goto label_70;

DEFLABEL (label_69)
  (Wrd148.Obj) = (Rsp [9]);
  (Wrd149.pObj) = (OBJECT_ADDRESS (Wrd148.Obj));
  (Wrd150.Obj) = ((Wrd149.pObj) [0]);
  (Wrd151.uLng) = (OBJECT_TYPE (Wrd150.Obj));
  if (! ((Wrd151.uLng) == 1))
    goto label_68;
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd150.Obj));
  (Wrd147.Obj) = ((Wrd146.pObj) [1]);
  (* (--Rsp)) = (Wrd147.Obj);

DEFLABEL (label_67)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_14]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Wrd123.Obj) = Rvl;

DEFLABEL (label_66)
  (Wrd124.Obj) = (Rsp [0]);
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  ((Wrd125.pObj) [0]) = (Wrd123.Obj);
  (Wrd131.Obj) = (Rsp [8]);
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd133.Obj) = ((Wrd132.pObj) [0]);
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd133.Obj));
  if (! ((Wrd134.uLng) == 1))
    goto label_65;
  (Wrd130.pObj) = (OBJECT_ADDRESS (Wrd133.Obj));
  (Wrd126.Obj) = ((Wrd130.pObj) [0]);

DEFLABEL (label_64)
  (Wrd141.Obj) = (Rsp [8]);
  (Wrd142.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  ((Wrd142.pObj) [0]) = (Wrd126.Obj);
  goto label_62;

DEFLABEL (label_65)
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_12]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_9]), 1);

DEFLABEL (label_46)
  (Wrd126.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_68)
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_13]))));
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_7]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd123.Obj) = (current_block [OBJECT_35_8]);
  Rsp = (& (Rsp [1]));
  goto label_66;

DEFLABEL (label_71)
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_7]), 1);

DEFLABEL (label_48)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  goto label_69;

DEFLABEL (label_73)
  (Wrd8.Obj) = (current_block [OBJECT_35_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_20]));

DEFLABEL (label_75)
  if (! ((Wrd69.Obj) == (current_block [OBJECT_35_3])))
    goto label_74;
  (Wrd82.Obj) = (current_block [OBJECT_35_4]);

DEFLABEL (label_76)
  Rsp = (& (Rsp [1]));
  goto label_72;

DEFLABEL (label_77)
  (Wrd82.Obj) = (current_block [OBJECT_35_2]);
  goto label_76;

DEFLABEL (label_78)
  (Wrd82.Obj) = ((SCHEME_OBJECT) 0);
  goto label_76;

DEFLABEL (label_80)
  (Wrd61.Obj) = (Rsp [8]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);
  goto label_79;

DEFLABEL (label_81)
  (Wrd172.Obj) = (current_block [OBJECT_35_4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd172.Obj);
  goto label_79;

DEFLABEL (label_82)
  (Wrd174.Obj) = (current_block [OBJECT_35_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd174.Obj);
  goto label_79;

DEFLABEL (label_84)
  (Wrd176.Obj) = (current_block [OBJECT_35_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd176.Obj);
  goto label_83;

DEFLABEL (label_85)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_83;

DEFLABEL (label_87)
  (Wrd180.Obj) = (current_block [OBJECT_35_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd180.Obj);
  goto label_86;

DEFLABEL (label_88)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_86;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_35_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_90;
  (Wrd7.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_28]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_35_9);
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_90)
  (Wrd8.Obj) = (current_block [OBJECT_35_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_35_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  (Wrd7.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_28]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_35_8);
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_91)
  (Wrd8.Obj) = (current_block [OBJECT_35_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_20]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == (current_block [OBJECT_35_6]))
    goto label_93;

DEFLABEL (label_92)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_35_12]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_26]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_27]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_35_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_31]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_35_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_23]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_25]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_35_23);
  goto label_92;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_35_15);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [9]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [10]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd9.pObj) [11]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd9.pObj) [12]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = ((Wrd9.pObj) [5]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd9.pObj) [7]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_30]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_35_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_14]), 1);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_35_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = ((Wrd6.pObj) [7]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_35]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_35_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_15]), 1);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_35_34);
  (Wrd5.Obj) = Rvl;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_99;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_99;
  ((Wrd15.pObj) [10]) = Rvl;

DEFLABEL (label_98)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_37]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_18]), 1);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_35_37);
  (Wrd5.Obj) = Rvl;
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_97;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd22.Lng))))
    goto label_97;
  ((Wrd20.pObj) [11]) = Rvl;

DEFLABEL (label_96)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_95;
  Wrd7 = Wrd11;

DEFLABEL (label_94)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_40]));

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_39])), (Wrd8.pObj));

DEFLABEL (label_50)
  (Wrd7.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_35_19]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_38]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_17]), 3);

DEFLABEL (label_51)
  goto label_96;

DEFLABEL (label_99)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_35_16]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_36]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_17]), 3);

DEFLABEL (label_49)
  goto label_98;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define TAG_36_6 1
#define LABEL_36_8 7
#define LABEL_36_10 9
#define LABEL_36_9 11
#define ENVIRONMENT_LABEL_36_3 25
#define DEBUGGING_LABEL_36_2 24
#define OBJECT_36_2 23
#define OBJECT_36_1 22
#define OBJECT_36_0 21
#define EXECUTE_CACHE_36_12 13
#define EXECUTE_CACHE_36_11 15
#define EXECUTE_CACHE_36_7 17
#define FREE_REFERENCE_36_0 20
#define FREE_REFERENCES_LABEL_36_0 12
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_36_4);
      goto subprocess_delete_3;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_36_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_36_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_36_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_delete_8)
DEFLABEL (subprocess_delete_3)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_36_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_14;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_14;
  (Wrd9.Obj) = ((Wrd30.pObj) [4]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_36_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_13;
  Wrd19 = Wrd23;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_9);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_12]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_10])), (Wrd20.pObj));

DEFLABEL (label_5)
  (Wrd19.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_14)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [2]);
  (Wrd40.Obj) = (current_block [OBJECT_36_0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 12
#define DEBUGGING_LABEL_37_2 11
#define EXECUTE_CACHE_37_7 7
#define EXECUTE_CACHE_37_6 9
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto subprocess_status_1;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_status_4)
DEFLABEL (subprocess_status_1)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_7 7
#define LABEL_38_6 9
#define LABEL_38_8 11
#define LABEL_38_10 13
#define ENVIRONMENT_LABEL_38_3 26
#define DEBUGGING_LABEL_38_2 25
#define OBJECT_38_3 24
#define OBJECT_38_2 23
#define OBJECT_38_1 22
#define OBJECT_38_0 21
#define EXECUTE_CACHE_38_12 15
#define EXECUTE_CACHE_38_11 17
#define EXECUTE_CACHE_38_9 19
#define FREE_REFERENCES_LABEL_38_0 14
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_38_4);
      goto subprocess_wait_8;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_38_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_wait_12)
DEFLABEL (subprocess_wait_8)
  INTERRUPT_CHECK (26, LABEL_38_4);
  goto loop_6;

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_38_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_16;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_16;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_38_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rsp = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (label_14)
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_12]));

DEFLABEL (label_16)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_38_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define LABEL_39_6 9
#define LABEL_39_8 11
#define LABEL_39_10 13
#define ENVIRONMENT_LABEL_39_3 26
#define DEBUGGING_LABEL_39_2 25
#define OBJECT_39_3 24
#define OBJECT_39_2 23
#define OBJECT_39_1 22
#define OBJECT_39_0 21
#define EXECUTE_CACHE_39_12 15
#define EXECUTE_CACHE_39_11 17
#define EXECUTE_CACHE_39_9 19
#define FREE_REFERENCES_LABEL_39_0 14
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_39_4);
      goto subprocess_continue_foreground_8;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_39_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_39_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_continue_foreground_12)
DEFLABEL (subprocess_continue_foreground_8)
  INTERRUPT_CHECK (26, LABEL_39_4);
  goto loop_6;

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_39_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_16;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_16;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_39_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rsp = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (label_14)
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (label_16)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_39_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_9 7
#define LABEL_40_6 9
#define TAG_40_7 3
#define LABEL_40_11 11
#define LABEL_40_10 13
#define LABEL_40_12 15
#define LABEL_40_13 17
#define LABEL_40_14 19
#define ENVIRONMENT_LABEL_40_3 34
#define DEBUGGING_LABEL_40_2 33
#define OBJECT_40_9 32
#define OBJECT_40_8 31
#define OBJECT_40_7 30
#define OBJECT_40_6 29
#define OBJECT_40_5 28
#define OBJECT_40_4 27
#define OBJECT_40_3 26
#define OBJECT_40_2 25
#define OBJECT_40_1 24
#define OBJECT_40_0 23
#define EXECUTE_CACHE_40_8 21
#define FREE_REFERENCES_LABEL_40_0 20
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_40_4);
      goto Z__subprocess_status_9;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_40_9);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_40_6);
      goto lambda_16;

    case 4:
      current_block = (Rpc - LABEL_40_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_40_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_40_12);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_40_13);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_40_14);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__subprocess_status_15)
DEFLABEL (Z__subprocess_status_9)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_18;

DEFLABEL (label_17)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_18)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_17;
  Rvl = ((Wrd14.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_40_6);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_28;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_28;
  (Wrd9.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_27)
  (Wrd29.Obj) = (Rsp [0]);
  if (! ((Wrd29.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_20;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_40_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_5]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_10);
  (Wrd5.Obj) = Rvl;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_26;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd21.Lng))))
    goto label_26;
  ((Wrd19.pObj) [10]) = Rvl;

DEFLABEL (label_25)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_7]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_13);
  (Wrd5.Obj) = Rvl;
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_24;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd35.Lng))))
    goto label_24;
  ((Wrd33.pObj) [11]) = Rvl;

DEFLABEL (label_23)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40_9]);
  (Rsp [1]) = (Wrd9.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd23.uLng) == 62)
    goto label_22;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_6]), 3);

DEFLABEL (label_22)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd21.Lng))))
    goto label_21;
  ((Wrd19.pObj) [12]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_40_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [2]);
  (Wrd43.Obj) = (current_block [OBJECT_40_8]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_14]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_6]), 3);

DEFLABEL (label_13)
  goto label_23;

DEFLABEL (label_26)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (current_block [OBJECT_40_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_6]), 3);

DEFLABEL (label_12)
  goto label_25;

DEFLABEL (label_28)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_40_3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define ENVIRONMENT_LABEL_41_3 12
#define DEBUGGING_LABEL_41_2 11
#define OBJECT_41_2 10
#define OBJECT_41_1 9
#define OBJECT_41_0 8
#define FREE_REFERENCES_LABEL_41_0 8
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd25;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_41_4);
      goto subprocess_status_tick_5;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_status_tick_10)
DEFLABEL (subprocess_status_tick_5)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [12]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = (Wrd21.Obj);

DEFLABEL (label_11)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Rsp [0]) = (Wrd25.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_14;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd40.Lng))))
    goto label_14;
  ((Wrd38.pObj) [12]) = (Wrd25.Obj);

DEFLABEL (label_13)
  Rvl = (Rsp [0]);
  goto label_11;

DEFLABEL (label_14)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_41_0]);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 3);

DEFLABEL (label_8)
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_41_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define LABEL_42_8 9
#define LABEL_42_9 11
#define ENVIRONMENT_LABEL_42_3 21
#define DEBUGGING_LABEL_42_2 20
#define OBJECT_42_0 19
#define EXECUTE_CACHE_42_6 13
#define FREE_REFERENCE_42_0 16
#define FREE_ASSIGNMENT_42_0 18
#define FREE_REFERENCES_LABEL_42_0 12
#define NUMBER_OF_LINKER_SECTIONS_42_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_42_4);
      goto subprocess_global_status_tick_4;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_42_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_42_9);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_global_status_tick_9)
DEFLABEL (subprocess_global_status_tick_4)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (lambda_10)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_42_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_42_0]));
  (Wrd20.Obj) = ((Wrd12.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd12.pObj) [0]) = (Wrd9.Obj);

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if ((Wrd20.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_42_9])), (Wrd12.pObj), (Wrd9.Obj));

DEFLABEL (label_6)
  goto label_11;

DEFLABEL (label_14)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_16;
  Wrd26 = Wrd30;

DEFLABEL (label_15)
  Rvl = (Wrd26.Obj);
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_8])), (Wrd27.pObj));

DEFLABEL (label_7)
  (Wrd26.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define ENVIRONMENT_LABEL_43_3 17
#define DEBUGGING_LABEL_43_2 16
#define OBJECT_43_8 15
#define OBJECT_43_7 14
#define OBJECT_43_6 13
#define OBJECT_43_5 12
#define OBJECT_43_4 11
#define OBJECT_43_3 10
#define OBJECT_43_2 9
#define OBJECT_43_1 8
#define OBJECT_43_0 7
#define EXECUTE_CACHE_43_5 5
#define FREE_REFERENCES_LABEL_43_0 4
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_43_4);
      goto convert_subprocess_status_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (convert_subprocess_status_8)
DEFLABEL (convert_subprocess_status_5)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_43_0]))
    goto label_13;
  if ((Wrd5.Obj) == (current_block [OBJECT_43_2]))
    goto label_12;
  if ((Wrd5.Obj) == (current_block [OBJECT_43_4]))
    goto label_11;
  if ((Wrd5.Obj) == (current_block [OBJECT_43_6]))
    goto label_9;
  (Wrd13.Obj) = (current_block [OBJECT_43_8]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_5]));

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_43_7]);

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_43_5]);
  goto label_10;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_43_3]);
  goto label_10;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_43_1]);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_6 5
#define LABEL_44_5 7
#define ENVIRONMENT_LABEL_44_3 23
#define DEBUGGING_LABEL_44_2 22
#define OBJECT_44_10 21
#define OBJECT_44_9 20
#define OBJECT_44_8 19
#define OBJECT_44_7 18
#define OBJECT_44_6 17
#define OBJECT_44_5 16
#define OBJECT_44_4 15
#define OBJECT_44_3 14
#define OBJECT_44_2 13
#define OBJECT_44_1 12
#define OBJECT_44_0 11
#define EXECUTE_CACHE_44_7 9
#define FREE_REFERENCES_LABEL_44_0 8
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_44_4);
      goto subprocess_job_control_status_8;

    case 1:
      current_block = (Rpc - LABEL_44_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_job_control_status_12)
DEFLABEL (subprocess_job_control_status_8)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_19;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_19;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_18)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (Rsp [0]) = Rvl;
  if (Rvl == (current_block [OBJECT_44_3]))
    goto label_17;
  if (Rvl == (current_block [OBJECT_44_5]))
    goto label_16;
  if (Rvl == (current_block [OBJECT_44_7]))
    goto label_15;
  if (Rvl == (current_block [OBJECT_44_0]))
    goto label_13;
  (Wrd14.Obj) = (current_block [OBJECT_44_10]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_7]));

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_44_9]);

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_44_8]);
  goto label_14;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_44_6]);
  goto label_14;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_44_4]);
  goto label_14;

DEFLABEL (label_19)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_44_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_6 7
#define LABEL_45_8 9
#define LABEL_45_10 11
#define LABEL_45_11 13
#define ENVIRONMENT_LABEL_45_3 31
#define DEBUGGING_LABEL_45_2 30
#define OBJECT_45_2 29
#define OBJECT_45_1 28
#define OBJECT_45_0 27
#define EXECUTE_CACHE_45_14 15
#define EXECUTE_CACHE_45_13 17
#define EXECUTE_CACHE_45_12 19
#define EXECUTE_CACHE_45_9 21
#define EXECUTE_CACHE_45_7 23
#define FREE_REFERENCE_45_0 26
#define FREE_REFERENCES_LABEL_45_0 14
#define NUMBER_OF_LINKER_SECTIONS_45_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_45_4);
      goto handle_subprocess_status_change_5;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_45_8);
      goto lambda_3;

    case 4:
      current_block = (Rpc - LABEL_45_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_45_11);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_subprocess_status_change_9)
DEFLABEL (handle_subprocess_status_change_5)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_13;
  Wrd6 = Wrd10;

DEFLABEL (label_12)
  if ((Wrd6.Obj) == (current_block [OBJECT_45_0]))
    goto label_11;
  Rvl = (current_block [OBJECT_45_1]);
  goto pop_return;

DEFLABEL (label_11)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_45_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_9]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_5])), (Wrd7.pObj));

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_12;

DEFLABEL (lambda_10)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_45_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_13]));

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_45_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define ENVIRONMENT_LABEL_46_3 10
#define DEBUGGING_LABEL_46_2 9
#define OBJECT_46_2 8
#define OBJECT_46_1 7
#define OBJECT_46_0 6
#define FREE_REFERENCES_LABEL_46_0 6
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_46_4);
      goto subprocess_continue_background_1;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_continue_background_5)
DEFLABEL (subprocess_continue_background_1)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_46_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define ENVIRONMENT_LABEL_47_3 10
#define DEBUGGING_LABEL_47_2 9
#define OBJECT_47_2 8
#define OBJECT_47_1 7
#define OBJECT_47_0 6
#define FREE_REFERENCES_LABEL_47_0 6
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_47_4);
      goto subprocess_signal_1;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_signal_5)
DEFLABEL (subprocess_signal_1)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 2);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_47_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_6 5
#define LABEL_48_5 7
#define ENVIRONMENT_LABEL_48_3 15
#define DEBUGGING_LABEL_48_2 14
#define OBJECT_48_2 13
#define OBJECT_48_1 12
#define OBJECT_48_0 11
#define EXECUTE_CACHE_48_7 9
#define FREE_REFERENCES_LABEL_48_0 8
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_48_4);
      goto subprocess_kill_2;

    case 1:
      current_block = (Rpc - LABEL_48_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_kill_6)
DEFLABEL (subprocess_kill_2)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_8;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_8;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (label_8)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_48_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define ENVIRONMENT_LABEL_49_3 10
#define DEBUGGING_LABEL_49_2 9
#define OBJECT_49_2 8
#define OBJECT_49_1 7
#define OBJECT_49_0 6
#define FREE_REFERENCES_LABEL_49_0 6
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_49_4);
      goto subprocess_interrupt_1;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_interrupt_5)
DEFLABEL (subprocess_interrupt_1)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_49_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define ENVIRONMENT_LABEL_50_3 10
#define DEBUGGING_LABEL_50_2 9
#define OBJECT_50_2 8
#define OBJECT_50_1 7
#define OBJECT_50_0 6
#define FREE_REFERENCES_LABEL_50_0 6
#define NUMBER_OF_LINKER_SECTIONS_50_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_50_4);
      goto subprocess_quit_1;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_quit_5)
DEFLABEL (subprocess_quit_1)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_50_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_6 5
#define LABEL_51_5 7
#define ENVIRONMENT_LABEL_51_3 15
#define DEBUGGING_LABEL_51_2 14
#define OBJECT_51_2 13
#define OBJECT_51_1 12
#define OBJECT_51_0 11
#define EXECUTE_CACHE_51_7 9
#define FREE_REFERENCES_LABEL_51_0 8
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_51_4);
      goto subprocess_hangup_2;

    case 1:
      current_block = (Rpc - LABEL_51_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_hangup_6)
DEFLABEL (subprocess_hangup_2)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_8;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_8;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (label_8)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_51_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define ENVIRONMENT_LABEL_52_3 14
#define DEBUGGING_LABEL_52_2 13
#define OBJECT_52_1 12
#define OBJECT_52_0 11
#define EXECUTE_CACHE_52_6 7
#define FREE_REFERENCE_52_0 10
#define FREE_REFERENCES_LABEL_52_0 6
#define NUMBER_OF_LINKER_SECTIONS_52_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_52_4);
      goto maybe_close_subprocess_i_o_1;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_close_subprocess_i_o_5)
DEFLABEL (maybe_close_subprocess_i_o_1)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  if ((Wrd6.Obj) == (current_block [OBJECT_52_0]))
    goto label_6;
  Rvl = (current_block [OBJECT_52_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define ENVIRONMENT_LABEL_53_3 10
#define DEBUGGING_LABEL_53_2 9
#define OBJECT_53_2 8
#define OBJECT_53_1 7
#define OBJECT_53_0 6
#define FREE_REFERENCES_LABEL_53_0 6
#define NUMBER_OF_LINKER_SECTIONS_53_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_53_4);
      goto subprocess_stop_1;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subprocess_stop_5)
DEFLABEL (subprocess_stop_1)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_53_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 8
#define DEBUGGING_LABEL_54_2 7
#define EXECUTE_CACHE_54_5 5
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto start_batch_subprocess_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (start_batch_subprocess_3)
DEFLABEL (start_batch_subprocess_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Rsp [7]) = ((SCHEME_OBJECT) 0);
  (Rsp [8]) = ((SCHEME_OBJECT) 0);
  (Rsp [9]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define ENVIRONMENT_LABEL_55_3 10
#define DEBUGGING_LABEL_55_2 9
#define OBJECT_55_1 8
#define OBJECT_55_0 7
#define EXECUTE_CACHE_55_5 5
#define FREE_REFERENCES_LABEL_55_0 4
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_55_4);
      goto start_subprocess_in_background_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (start_subprocess_in_background_3)
DEFLABEL (start_subprocess_in_background_0)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd5.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Rsp [7]) = ((SCHEME_OBJECT) 0);
  (Rsp [8]) = ((SCHEME_OBJECT) 0);
  (Rsp [9]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 10
#define DEBUGGING_LABEL_56_2 9
#define OBJECT_56_1 8
#define OBJECT_56_0 7
#define EXECUTE_CACHE_56_5 5
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_56_4);
      goto run_subprocess_in_foreground_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (run_subprocess_in_foreground_3)
DEFLABEL (run_subprocess_in_foreground_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (current_block [OBJECT_56_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Rsp [7]) = ((SCHEME_OBJECT) 0);
  (Rsp [8]) = ((SCHEME_OBJECT) 0);
  (Rsp [9]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define TAG_57_6 1
#define LABEL_57_7 7
#define LABEL_57_9 9
#define TAG_57_10 3
#define LABEL_57_11 11
#define LABEL_57_12 13
#define LABEL_57_14 15
#define LABEL_57_16 17
#define ENVIRONMENT_LABEL_57_3 26
#define DEBUGGING_LABEL_57_2 25
#define EXECUTE_CACHE_57_15 19
#define EXECUTE_CACHE_57_13 21
#define EXECUTE_CACHE_57_8 23
#define FREE_REFERENCES_LABEL_57_0 18
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_57_4);
      goto start_pipe_subprocess_8;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_57_7);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_57_9);
      goto lambda_13;

    case 4:
      current_block = (Rpc - LABEL_57_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_57_12);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_57_14);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_57_16);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (start_pipe_subprocess_11)
DEFLABEL (start_pipe_subprocess_8)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_5])));
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_57_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_57_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_9])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd20 = Wrd7;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd22.pObj) [3]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd22.pObj) [4]);
  ((Wrd20.pObj) [4]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [5]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [6]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_57_11);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_57_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd21.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_57_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_57_16);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define TAG_58_6 1
#define LABEL_58_7 7
#define ENVIRONMENT_LABEL_58_3 15
#define DEBUGGING_LABEL_58_2 14
#define OBJECT_58_0 13
#define EXECUTE_CACHE_58_9 9
#define EXECUTE_CACHE_58_8 11
#define FREE_REFERENCES_LABEL_58_0 8
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_58_4);
      goto start_pty_subprocess_2;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_58_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (start_pty_subprocess_5)
DEFLABEL (start_pty_subprocess_2)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_5])));
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_58_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_58_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_58_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Rsp [6]) = (Wrd5.Obj);
  (Wrd18.Obj) = (Rsp [7]);
  (Rsp [8]) = (Wrd18.Obj);
  (Rsp [9]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_7 7
#define LABEL_59_8 9
#define TAG_59_9 3
#define LABEL_59_12 11
#define LABEL_59_13 13
#define ENVIRONMENT_LABEL_59_3 28
#define DEBUGGING_LABEL_59_2 27
#define OBJECT_59_1 26
#define OBJECT_59_0 25
#define EXECUTE_CACHE_59_15 15
#define EXECUTE_CACHE_59_14 17
#define EXECUTE_CACHE_59_11 19
#define EXECUTE_CACHE_59_10 21
#define EXECUTE_CACHE_59_6 23
#define FREE_REFERENCES_LABEL_59_0 14
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto process_environment_bind_8;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_59_7);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_59_8);
      goto lambda_12;

    case 4:
      current_block = (Rpc - LABEL_59_12);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_59_13);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_environment_bind_11)
DEFLABEL (process_environment_bind_8)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = Rvl;
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (Rsp [0]) = (Wrd15.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_8])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_59_7);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_11]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_59_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_59_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_59_12);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  ((Wrd23.pObj) [0]) = (Wrd16.Obj);
  Rvl = (current_block [OBJECT_59_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_14;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [0]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_59_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define ENVIRONMENT_LABEL_60_3 13
#define DEBUGGING_LABEL_60_2 12
#define OBJECT_60_0 11
#define EXECUTE_CACHE_60_7 7
#define EXECUTE_CACHE_60_6 9
#define FREE_REFERENCES_LABEL_60_0 6
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto environment_binding_name_2;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_binding_name_5)
DEFLABEL (environment_binding_name_2)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (label_6)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_7 7
#define LABEL_61_9 9
#define LABEL_61_8 11
#define LABEL_61_11 13
#define ENVIRONMENT_LABEL_61_3 24
#define DEBUGGING_LABEL_61_2 23
#define OBJECT_61_3 22
#define OBJECT_61_2 21
#define OBJECT_61_1 20
#define OBJECT_61_0 19
#define EXECUTE_CACHE_61_10 15
#define EXECUTE_CACHE_61_6 17
#define FREE_REFERENCES_LABEL_61_0 14
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
process_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_61_4);
      goto find_environment_variable_9;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_61_7);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_61_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_61_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_61_11);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_environment_variable_14)
DEFLABEL (find_environment_variable_9)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (loop_15)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_61_7);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_61_1])))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_20)
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_61_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_6;

DEFLABEL (label_19)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_3]), 1);

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_13 15
#define LABEL_18 17
#define LABEL_14 19
#define TAG_15 8
#define LABEL_20 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_19 27
#define LABEL_22 29
#define LABEL_23 31
#define LABEL_24 33
#define ENVIRONMENT_LABEL_3 63
#define DEBUGGING_LABEL_2 62
#define PURIFICATION_ROOT 61
#define OBJECT_15 60
#define OBJECT_14 59
#define OBJECT_13 58
#define OBJECT_12 57
#define OBJECT_11 56
#define OBJECT_10 55
#define OBJECT_9 54
#define OBJECT_8 53
#define OBJECT_7 52
#define OBJECT_6 51
#define OBJECT_5 50
#define OBJECT_4 49
#define OBJECT_3 48
#define OBJECT_2 47
#define OBJECT_1 46
#define OBJECT_0 45
#define FREE_REFERENCE_0 35
#define GLOBAL_EXECUTE_CACHE_21 37
#define GLOBAL_EXECUTE_CACHE_12 39
#define GLOBAL_EXECUTE_CACHE_8 41
#define GLOBAL_EXECUTE_CACHE_5 43
#define FREE_REFERENCES_LABEL_0 34
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
process_so_ef53878cd2e49cd2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto continuation_14;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_13;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_20;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_21;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto Z__make_subprocess_30;

    case 9:
      current_block = (Rpc - LABEL_20);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_23;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_22;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_17;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto label_32;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto label_33;

    case 15:
      current_block = (Rpc - LABEL_24);
      goto expression_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_25)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_23])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_33)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_32)
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
	0,
	2,
	1,
	0,
	0,
	1,
	0,
	0,
	2,
	1,
	1,
	3,
	0,
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
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 61)
      goto label_31;
    blocks = (current_block [OBJECT_15]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_22])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_31)
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
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_2]);
  (Wrd16.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
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
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd61.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_37;
  Wrd11 = Wrd15;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x808, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_35;
  Wrd11 = Wrd15;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_13]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_27)
  (Wrd11.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_26)
  (Wrd11.Obj) = Rvl;
  goto label_36;

DEFLABEL (Z__make_subprocess_30)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (Z__make_subprocess_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_39;
  Wrd9 = Wrd13;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd21.Obj) = (MAKE_OBJECT (0, 13));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-14]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd10.pObj));

DEFLABEL (label_28)
  (Wrd9.Obj) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_process_so_ef53878cd2e49cd2 [61] =
  {
    { "process_so_code_1", 12, process_so_code_1 },
    { "process_so_code_2", 4, process_so_code_2 },
    { "process_so_code_3", 3, process_so_code_3 },
    { "process_so_code_4", 2, process_so_code_4 },
    { "process_so_code_5", 1, process_so_code_5 },
    { "process_so_code_6", 1, process_so_code_6 },
    { "process_so_code_7", 1, process_so_code_7 },
    { "process_so_code_8", 1, process_so_code_8 },
    { "process_so_code_9", 1, process_so_code_9 },
    { "process_so_code_10", 1, process_so_code_10 },
    { "process_so_code_11", 1, process_so_code_11 },
    { "process_so_code_12", 1, process_so_code_12 },
    { "process_so_code_13", 1, process_so_code_13 },
    { "process_so_code_14", 1, process_so_code_14 },
    { "process_so_code_15", 1, process_so_code_15 },
    { "process_so_code_16", 1, process_so_code_16 },
    { "process_so_code_17", 1, process_so_code_17 },
    { "process_so_code_18", 1, process_so_code_18 },
    { "process_so_code_19", 1, process_so_code_19 },
    { "process_so_code_20", 1, process_so_code_20 },
    { "process_so_code_21", 1, process_so_code_21 },
    { "process_so_code_22", 1, process_so_code_22 },
    { "process_so_code_23", 1, process_so_code_23 },
    { "process_so_code_24", 1, process_so_code_24 },
    { "process_so_code_25", 1, process_so_code_25 },
    { "process_so_code_26", 4, process_so_code_26 },
    { "process_so_code_27", 2, process_so_code_27 },
    { "process_so_code_28", 2, process_so_code_28 },
    { "process_so_code_29", 2, process_so_code_29 },
    { "process_so_code_30", 7, process_so_code_30 },
    { "process_so_code_31", 3, process_so_code_31 },
    { "process_so_code_32", 3, process_so_code_32 },
    { "process_so_code_33", 2, process_so_code_33 },
    { "process_so_code_34", 14, process_so_code_34 },
    { "process_so_code_35", 25, process_so_code_35 },
    { "process_so_code_36", 5, process_so_code_36 },
    { "process_so_code_37", 2, process_so_code_37 },
    { "process_so_code_38", 6, process_so_code_38 },
    { "process_so_code_39", 6, process_so_code_39 },
    { "process_so_code_40", 9, process_so_code_40 },
    { "process_so_code_41", 3, process_so_code_41 },
    { "process_so_code_42", 5, process_so_code_42 },
    { "process_so_code_43", 1, process_so_code_43 },
    { "process_so_code_44", 3, process_so_code_44 },
    { "process_so_code_45", 6, process_so_code_45 },
    { "process_so_code_46", 2, process_so_code_46 },
    { "process_so_code_47", 2, process_so_code_47 },
    { "process_so_code_48", 3, process_so_code_48 },
    { "process_so_code_49", 2, process_so_code_49 },
    { "process_so_code_50", 2, process_so_code_50 },
    { "process_so_code_51", 3, process_so_code_51 },
    { "process_so_code_52", 2, process_so_code_52 },
    { "process_so_code_53", 2, process_so_code_53 },
    { "process_so_code_54", 1, process_so_code_54 },
    { "process_so_code_55", 1, process_so_code_55 },
    { "process_so_code_56", 1, process_so_code_56 },
    { "process_so_code_57", 8, process_so_code_57 },
    { "process_so_code_58", 3, process_so_code_58 },
    { "process_so_code_59", 6, process_so_code_59 },
    { "process_so_code_60", 2, process_so_code_60 },
    { "process_so_code_61", 6, process_so_code_61 }
  };

int
decl_process_so_ef53878cd2e49cd2 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_process_so_ef53878cd2e49cd2);
  return (0);
}

DECLARE_COMPILED_CODE ("process.so", 16, decl_process_so_ef53878cd2e49cd2, process_so_ef53878cd2e49cd2)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_process_so_data_ef53878cd2e49cd2 [6376] =
  "\x88\x01\x57\xaf\x0c\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\x0d\xb9"
  "\x25\x0d\xba\x0d\xbb\x0d\xbc\x0d\xbd\x0d\x0d\xbe\x0d\x24\x28\x0d"
  "\x28\xb5\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbf\x1d\xb0\x82\x88\x1d\xc0\x0d\x1c\x0d\x1c\x25\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x0d\x1c\x24\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x84\x88\xb1\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x85\x88\x28\x0d\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x86\x88\xc2\x1c\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xc3\x1c\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x85\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x86\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\xc1"
  "\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x02\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x02\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x02\x28\x0d\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x86\x1b\x02\x28\x0d\x1c\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1d\x84\x86\x85\x1b\x02\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\xc1\x1c\x1b\x02\xc1\x1c\xc1\x0c\x80\x0c\x0d\x1c\xc1\x1c"
  "\x06\xc1\x1c\x0d\x1c\x0d\x1c\x03\x0d\x1c\x87\x0d\x1c\x07\xb1\x24"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x1b\x83\xb1\x24\x28\x1b\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x80\xc1\x1b\x83\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x80\xc1\x1b\x83\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x02\x02\x1b\x1b\xc1\x1d\x83\x1b\x1b\x02\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x02\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc0\x1b\x25\x1b\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x83\x0d\x1c\x82\x0d\x81\x0d\x80"
  "\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d"
  "\x0d\x82\x0d\x81\x0d\x80\xc1\x1b\x83\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x89\x1d\x0d"
  "\x1c\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x1b\x83\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc2\x1b\x83\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc1\x1b\x83\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1b\x83\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1b\x83\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc1\x1b\x83\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1b\x83"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x1b\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x1b\x23\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1d\x28\x0d\x28\x1b"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x08\x0c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xc0\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x1b\x1b\x0d"
  "\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x0d\x0d\x0d\xb4\x17\x02\x1b\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\xb2\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\xb3\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\xc3\x0d\x1c"
  "\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x14\x08"
  "\x1b\x2a\x1b\xb6\xb5\x0d\x1b\x1b\xb1\x9e\x1b\x2a\x1b\x2a\x1b\x2a"
  "\xb7\x2a\x1e\x1e\x1e\x9e\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x26\x1b"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x56\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x70"
  "\x72\x6f\x63\x65\x73\x73\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x0f\x70\x72\x6f\x63\x65\x73\x73\x2d\x64\x65\x6c\x65\x74\x65\x15"
  "\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x66\x69\x6e\x61\x6c"
  "\x69\x7a\x65\x72\x02\x16\x73\x65\x74\x2d\x73\x75\x62\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x69\x6e\x64\x65\x78\x21\x11\x73\x75\x62\x70"
  "\x72\x6f\x63\x65\x73\x73\x2d\x69\x6e\x64\x65\x78\x0c\x73\x75\x62"
  "\x70\x72\x6f\x63\x65\x73\x73\x3f\x0f\x72\x65\x73\x65\x74\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x21\x14\x65\x76\x65\x6e\x74\x3a\x61\x66"
  "\x74\x65\x72\x2d\x72\x65\x73\x74\x6f\x72\x65\x15\x64\x65\x6c\x65"
  "\x74\x65\x2d\x61\x6c\x6c\x2d\x70\x72\x6f\x63\x65\x73\x73\x65\x73"
  "\x12\x65\x76\x65\x6e\x74\x3a\x62\x65\x66\x6f\x72\x65\x2d\x65\x78"
  "\x69\x74\x08\x06\x12\x6d\x61\x6b\x65\x2d\x67\x63\x2d\x66\x69\x6e"
  "\x61\x6c\x69\x7a\x65\x72\x02\x04\x14\x61\x64\x64\x2d\x65\x76\x65"
  "\x6e\x74\x2d\x72\x65\x63\x65\x69\x76\x65\x72\x21\x04\x1c\x1a\x81"
  "\x83\x02\x1b\x18\x81\x81\x02\x1a\x16\x81\x81\x02\x19\x14\x81\x85"
  "\x02\x18\x12\x81\x83\x02\x17\x10\x81\x81\x02\x16\x0e\x81\x81\x02"
  "\x15\x0c\x81\x81\x02\x14\x0a\x81\x87\x02\x13\x08\x81\x85\x02\x12"
  "\x06\x81\x83\x02\x11\x04\x82\x02\x19\x2e\x02\x02\x13\x73\x63\x68"
  "\x65\x6d\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x1e"
  "\x73\x63\x68\x65\x6d\x65\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73"
  "\x73\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x09\x13\x67"
  "\x6c\x6f\x62\x61\x6c\x2d\x73\x74\x61\x74\x75\x73\x2d\x74\x69\x63"
  "\x6b\x0a\x03\x20\x0a\x81\x81\x02\x1f\x08\x81\x81\x02\x1e\x06\x81"
  "\x81\x02\x1d\x04\x82\x02\x09\x11\x0b\x02\x12\x73\x75\x62\x70\x72"
  "\x6f\x63\x65\x73\x73\x2d\x64\x65\x6c\x65\x74\x65\x0c\x02\x02\x10"
  "\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x6c\x69\x73\x74\x0d"
  "\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x0e\x03\x23\x08\x81\x83"
  "\x02\x22\x06\x81\x81\x02\x21\x04\x82\x02\x07\x11\x0f\x02\x02\x03"
  "\x16\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x2d\x65\x6c"
  "\x65\x6d\x65\x6e\x74\x73\x02\x25\x06\x81\x81\x02\x24\x04\x82\x02"
  "\x05\x0d\x10\x02\x02\x0e\x6d\x61\x6b\x65\x2d\x31\x64\x2d\x74\x61"
  "\x62\x6c\x65\x02\x26\x04\x82\x02\x03\x11\x02\x0c\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x72\x65\x66\x12\x27\x04\x83\x04\x03\x13\x02\x08"
  "\x12\x28\x04\x83\x04\x03\x14\x02\x09\x12\x29\x04\x83\x04\x03\x15"
  "\x02\x0a\x12\x2a\x04\x83\x04\x03\x16\x02\x0b\x12\x2b\x04\x83\x04"
  "\x03\x17\x02\x0c\x12\x2c\x04\x83\x04\x03\x18\x02\x0d\x12\x08\x2d"
  "\x04\x83\x04\x03\x19\x02\x0e\x12\x09\x2e\x04\x83\x04\x03\x1a\x02"
  "\x0f\x12\x0a\x2f\x04\x83\x04\x03\x1b\x02\x10\x12\x0b\x30\x04\x83"
  "\x04\x03\x1c\x02\x11\x12\x0c\x31\x04\x83\x04\x03\x1d\x02\x12\x12"
  "\x0d\x32\x04\x83\x04\x03\x1e\x02\x13\x0d\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x73\x65\x74\x21\x1f\x02\x33\x04\x84\x06\x03\x20\x02\x14"
  "\x1f\x02\x34\x04\x84\x06\x03\x21\x02\x15\x1f\x02\x35\x04\x84\x06"
  "\x03\x22\x02\x16\x1f\x02\x36\x04\x84\x06\x03\x23\x02\x17\x1f\x02"
  "\x09\x37\x04\x84\x06\x03\x24\x02\x18\x1f\x02\x0a\x38\x04\x84\x06"
  "\x03\x25\x02\x19\x1f\x02\x0b\x39\x04\x84\x06\x03\x26\x02\x1a\x1f"
  "\x02\x0c\x3a\x04\x84\x06\x03\x27\x02\x1b\x12\x0f\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e"
  "\x31\x28\x02\x3e\x0a\x81\x85\x02\x3d\x08\x81\x83\x02\x3c\x06\x81"
  "\x83\x02\x3b\x04\x83\x04\x09\x12\x29\x02\x1c\x12\x0d\x05\x0d\x31"
  "\x64\x2d\x74\x61\x62\x6c\x65\x2f\x67\x65\x74\x02\x40\x06\x81\x85"
  "\x02\x3f\x04\x84\x06\x05\x0d\x2a\x02\x1d\x12\x0d\x05\x0e\x31\x64"
  "\x2d\x74\x61\x62\x6c\x65\x2f\x70\x75\x74\x21\x02\x42\x06\x81\x87"
  "\x02\x41\x04\x85\x08\x05\x0d\x2b\x02\x1e\x12\x0d\x04\x11\x31\x64"
  "\x2d\x74\x61\x62\x6c\x65\x2f\x72\x65\x6d\x6f\x76\x65\x21\x02\x44"
  "\x06\x81\x85\x02\x43\x04\x84\x06\x05\x0d\x2c\x02\x1f\x1f\x12\x09"
  "\x03\x13\x77\x69\x74\x68\x6f\x75\x74\x2d\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x73\x2d\x04\x16\x6d\x61\x6b\x65\x2d\x67\x65\x6e\x65"
  "\x72\x69\x63\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x03\x4b\x10\x81"
  "\x85\x02\x4a\x0e\x81\x89\x02\x49\x0c\x81\x87\x02\x48\x0a\x81\x83"
  "\x02\x47\x08\x81\x83\x02\x46\x06\x81\x85\x02\x45\x04\x83\x04\x0f"
  "\x1c\x2e\x02\x20\x03\x14\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73"
  "\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x2f\x03\x0c\x69\x6e\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\x3f\x03\x4e\x08\x81\x83\x02\x4d\x06\x81"
  "\x83\x02\x4c\x04\x83\x04\x07\x0f\x30\x02\x21\x03\x2f\x03\x0d\x6f"
  "\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x3f\x03\x51\x08\x81\x83"
  "\x02\x50\x06\x81\x83\x02\x4f\x04\x83\x04\x07\x0f\x31\x02\x22\x03"
  "\x2d\x03\x16\x25\x63\x6c\x6f\x73\x65\x2d\x73\x75\x62\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x69\x2f\x6f\x32\x03\x53\x06\x81\x83\x02\x52"
  "\x04\x83\x04\x05\x0d\x33\x02\x23\x1f\x02\x12\x09\x03\x0e\x63\x68"
  "\x61\x6e\x6e\x65\x6c\x2d\x63\x6c\x6f\x73\x65\x34\x03\x0b\x63\x6c"
  "\x6f\x73\x65\x2d\x70\x6f\x72\x74\x03\x61\x1e\x81\x83\x02\x60\x1c"
  "\x81\x83\x02\x5f\x1a\x81\x83\x02\x5e\x18\x81\x83\x02\x5d\x16\x81"
  "\x83\x02\x5c\x14\x81\x85\x02\x5b\x12\x81\x83\x02\x5a\x10\x81\x85"
  "\x02\x59\x0e\x81\x85\x02\x58\x0c\x81\x85\x02\x57\x0a\x83\x04\x56"
  "\x08\x81\x83\x02\x55\x06\x81\x83\x02\x54\x04\x81\x83\x02\x1d\x2c"
  "\x35\x02\x24\x0b\x0f\x70\x72\x6f\x63\x65\x73\x73\x2d\x72\x65\x61"
  "\x73\x6f\x6e\x36\x1f\x0a\x0f\x70\x72\x6f\x63\x65\x73\x73\x2d\x73"
  "\x74\x61\x74\x75\x73\x37\x0b\x70\x72\x6f\x63\x65\x73\x73\x2d\x69"
  "\x64\x14\x70\x72\x6f\x63\x65\x73\x73\x20\x49\x2f\x4f\x20\x63\x68"
  "\x61\x6e\x6e\x65\x6c\x1d\x70\x72\x6f\x63\x65\x73\x73\x20\x63\x6f"
  "\x6e\x74\x72\x6f\x6c\x6c\x69\x6e\x67\x20\x74\x65\x72\x6d\x69\x6e"
  "\x61\x6c\x10\x6d\x61\x6b\x65\x2d\x73\x75\x62\x70\x72\x6f\x63\x65"
  "\x73\x73\x38\x04\x63\x61\x72\x39\x04\x63\x64\x72\x3a\x0b\x66\x6f"
  "\x72\x65\x67\x72\x6f\x75\x6e\x64\x3b\x0b\x62\x61\x63\x6b\x67\x72"
  "\x6f\x75\x6e\x64\x3c\x03\x05\x63\x74\x74\x79\x3d\x08\x69\x6e\x68"
  "\x65\x72\x69\x74\x3e\x02\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73\x74"
  "\x72\x69\x6e\x67\x03\x2d\x03\x09\x63\x68\x61\x6e\x6e\x65\x6c\x3f"
  "\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79"
  "\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x03\x1f\x73\x75\x62"
  "\x70\x72\x6f\x63\x65\x73\x73\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x65"
  "\x2d\x66\x6f\x72\x65\x67\x72\x6f\x75\x6e\x64\x3f\x03\x13\x25\x73"
  "\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x73\x74\x61\x74\x75\x73"
  "\x40\x03\x13\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x64\x65\x73\x63\x72"
  "\x69\x70\x74\x6f\x72\x0a\x13\x6f\x73\x2f\x6d\x61\x6b\x65\x2d\x73"
  "\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x04\x05\x65\x71\x76\x3f\x41"
  "\x09\x11\x25\x6d\x61\x6b\x65\x2d\x73\x75\x62\x70\x72\x6f\x63\x65"
  "\x73\x73\x42\x04\x15\x61\x64\x64\x2d\x74\x6f\x2d\x67\x63\x2d\x66"
  "\x69\x6e\x61\x6c\x69\x7a\x65\x72\x21\x0c\x7a\x34\x81\x87\x02\x79"
  "\x32\x81\x87\x02\x78\x30\x81\x87\x02\x77\x2e\x81\x87\x02\x76\x2c"
  "\x81\x87\x02\x75\x2a\x81\x87\x02\x74\x28\x81\x85\x02\x73\x26\x81"
  "\x83\x02\x72\x24\x81\x9b\x02\x71\x22\x81\x83\x02\x70\x20\x81\x8d"
  "\x02\x6f\x1e\x81\x87\x02\x6e\x1c\x81\x85\x02\x6d\x1a\x81\x95\x02"
  "\x6c\x18\x81\x97\x02\x6b\x16\x81\x97\x02\x6a\x14\x81\x8d\x02\x69"
  "\x12\x81\x8b\x02\x68\x10\x81\x8d\x02\x67\x0e\x8c\x16\x66\x0c\x81"
  "\x83\x02\x65\x0a\x81\x85\x02\x64\x08\x81\x87\x02\x63\x06\x81\x8b"
  "\x02\x62\x04\x81\x8b\x02\x33\x63\x43\x02\x25\x02\x12\x02\x03\x2d"
  "\x04\x1a\x72\x65\x6d\x6f\x76\x65\x2d\x66\x72\x6f\x6d\x2d\x67\x63"
  "\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x21\x03\x32\x04\x7f\x0c"
  "\x81\x83\x02\x7e\x0a\x81\x87\x02\x7d\x08\x81\x83\x02\x7c\x06\x81"
  "\x83\x02\x7b\x04\x83\x04\x0b\x1a\x44\x02\x26\x03\x40\x03\x1a\x63"
  "\x6f\x6e\x76\x65\x72\x74\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73"
  "\x73\x2d\x73\x74\x61\x74\x75\x73\x45\x03\x81\x01\x06\x81\x83\x02"
  "\x80\x01\x04\x83\x04\x05\x0d\x46\x02\x27\x0d\x70\x72\x6f\x63\x65"
  "\x73\x73\x2d\x77\x61\x69\x74\x12\x03\x40\x04\x41\x03\x45\x04\x87"
  "\x01\x0e\x81\x85\x02\x86\x01\x0c\x81\x83\x02\x85\x01\x0a\x81\x83"
  "\x02\x84\x01\x08\x81\x85\x02\x83\x01\x06\x81\x83\x02\x82\x01\x04"
  "\x83\x04\x0d\x1b\x47\x02\x28\x1c\x70\x72\x6f\x63\x65\x73\x73\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2d\x66\x6f\x72\x65\x67\x72\x6f"
  "\x75\x6e\x64\x12\x03\x40\x04\x41\x03\x45\x04\x8d\x01\x0e\x81\x85"
  "\x02\x8c\x01\x0c\x81\x83\x02\x8b\x01\x0a\x81\x83\x02\x8a\x01\x08"
  "\x81\x85\x02\x89\x01\x06\x81\x83\x02\x88\x01\x04\x83\x04\x0d\x1b"
  "\x41\x02\x29\x0c\x0b\x36\x1f\x14\x70\x72\x6f\x63\x65\x73\x73\x2d"
  "\x73\x74\x61\x74\x75\x73\x2d\x73\x79\x6e\x63\x02\x37\x12\x0a\x03"
  "\x2d\x02\x96\x01\x14\x81\x85\x02\x95\x01\x12\x81\x85\x02\x94\x01"
  "\x10\x81\x85\x02\x93\x01\x0e\x81\x85\x02\x92\x01\x0c\x81\x83\x02"
  "\x91\x01\x0a\x81\x83\x02\x90\x01\x08\x81\x85\x02\x8f\x01\x06\x81"
  "\x83\x02\x8e\x01\x04\x83\x04\x13\x23\x37\x02\x2a\x1f\x12\x0c\x99"
  "\x01\x08\x81\x85\x02\x98\x01\x06\x81\x83\x02\x97\x01\x04\x83\x04"
  "\x07\x0d\x36\x02\x2b\x18\x70\x72\x6f\x63\x65\x73\x73\x2d\x73\x74"
  "\x61\x74\x75\x73\x2d\x73\x79\x6e\x63\x2d\x61\x6c\x6c\x0a\x02\x0a"
  "\x02\x03\x2d\x02\x9e\x01\x0c\x81\x83\x02\x9d\x01\x0a\x81\x81\x02"
  "\x9c\x01\x08\x81\x81\x02\x9b\x01\x06\x82\x02\x9a\x01\x04\x82\x02"
  "\x0b\x16\x2d\x02\x2c\x18\x49\x6c\x6c\x65\x67\x61\x6c\x20\x70\x72"
  "\x6f\x63\x65\x73\x73\x20\x73\x74\x61\x74\x75\x73\x3a\x0a\x73\x69"
  "\x67\x6e\x61\x6c\x6c\x65\x64\x1f\x07\x65\x78\x69\x74\x65\x64\x48"
  "\x08\x73\x74\x6f\x70\x70\x65\x64\x08\x72\x75\x6e\x6e\x69\x6e\x67"
  "\x04\x06\x65\x72\x72\x6f\x72\x49\x02\x9f\x01\x04\x83\x04\x03\x12"
  "\x4a\x02\x2d\x24\x49\x6c\x6c\x65\x67\x61\x6c\x20\x70\x72\x6f\x63"
  "\x65\x73\x73\x20\x6a\x6f\x62\x2d\x63\x6f\x6e\x74\x72\x6f\x6c\x20"
  "\x73\x74\x61\x74\x75\x73\x3a\x0c\x6a\x6f\x62\x2d\x63\x6f\x6e\x74"
  "\x72\x6f\x6c\x0f\x6e\x6f\x2d\x6a\x6f\x62\x2d\x63\x6f\x6e\x74\x72"
  "\x6f\x6c\x0f\x75\x6e\x72\x65\x6c\x61\x74\x65\x64\x2d\x63\x74\x74"
  "\x79\x08\x6e\x6f\x2d\x63\x74\x74\x79\x1b\x70\x72\x6f\x63\x65\x73"
  "\x73\x2d\x6a\x6f\x62\x2d\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x73\x74"
  "\x61\x74\x75\x73\x12\x04\x49\x02\xa2\x01\x08\x81\x83\x02\xa1\x01"
  "\x06\x81\x85\x02\xa0\x01\x04\x83\x04\x07\x18\x49\x02\x2e\x48\x1f"
  "\x02\x03\x6e\x74\x48\x1e\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d"
  "\x69\x64\x2f\x6f\x70\x65\x72\x61\x74\x69\x6e\x67\x2d\x73\x79\x73"
  "\x74\x65\x6d\x1f\x02\x02\x0d\x04\x0e\x03\x12\x73\x75\x62\x70\x72"
  "\x6f\x63\x65\x73\x73\x2d\x73\x74\x61\x74\x75\x73\x4b\x03\x15\x63"
  "\x6c\x6f\x73\x65\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d"
  "\x69\x2f\x6f\x4c\x04\x05\x6d\x65\x6d\x71\x06\xa8\x01\x0e\x81\x87"
  "\x02\xa7\x01\x0c\x81\x83\x02\xa6\x01\x0a\x83\x04\xa5\x01\x08\x81"
  "\x81\x02\xa4\x01\x06\x81\x81\x02\xa3\x01\x04\x82\x02\x0d\x20\x4d"
  "\x02\x2f\x1c\x70\x72\x6f\x63\x65\x73\x73\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x65\x2d\x62\x61\x63\x6b\x67\x72\x6f\x75\x6e\x64\x12\xaa"
  "\x01\x06\x81\x83\x02\xa9\x01\x04\x83\x04\x05\x0b\x4e\x02\x30\x0f"
  "\x70\x72\x6f\x63\x65\x73\x73\x2d\x73\x69\x67\x6e\x61\x6c\x12\xac"
  "\x01\x06\x81\x85\x02\xab\x01\x04\x84\x06\x05\x0b\x4f\x02\x31\x0d"
  "\x70\x72\x6f\x63\x65\x73\x73\x2d\x6b\x69\x6c\x6c\x12\x03\x1b\x6d"
  "\x61\x79\x62\x65\x2d\x63\x6c\x6f\x73\x65\x2d\x73\x75\x62\x70\x72"
  "\x6f\x63\x65\x73\x73\x2d\x69\x2f\x6f\x50\x02\xaf\x01\x08\x81\x83"
  "\x02\xae\x01\x06\x81\x85\x02\xad\x01\x04\x83\x04\x07\x10\x51\x02"
  "\x32\x12\x70\x72\x6f\x63\x65\x73\x73\x2d\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x12\xb1\x01\x06\x81\x83\x02\xb0\x01\x04\x83\x04\x05"
  "\x0b\x52\x02\x33\x0d\x70\x72\x6f\x63\x65\x73\x73\x2d\x71\x75\x69"
  "\x74\x12\xb3\x01\x06\x81\x83\x02\xb2\x01\x04\x83\x04\x05\x0b\x53"
  "\x02\x34\x0f\x70\x72\x6f\x63\x65\x73\x73\x2d\x68\x61\x6e\x67\x75"
  "\x70\x12\x03\x50\x02\xb6\x01\x08\x81\x83\x02\xb5\x01\x06\x81\x85"
  "\x02\xb4\x01\x04\x83\x04\x07\x10\x54\x02\x35\x02\x48\x1f\x02\x03"
  "\x4c\x02\xb8\x01\x06\x81\x83\x02\xb7\x01\x04\x83\x04\x05\x0f\x48"
  "\x02\x36\x0d\x70\x72\x6f\x63\x65\x73\x73\x2d\x73\x74\x6f\x70\x12"
  "\xba\x01\x06\x81\x83\x02\xb9\x01\x04\x83\x04\x05\x0b\x1f\x02\x37"
  "\x0c\x38\x02\xbb\x01\x04\x85\x08\x03\x12\x02\x38\x3c\x3e\x0c\x38"
  "\x02\xbc\x01\x04\x85\x08\x03\x0b\x3c\x02\x39\x3b\x3e\x0c\x38\x02"
  "\xbd\x01\x04\x85\x08\x03\x0b\x3e\x02\x3a\x02\x0a\x6d\x61\x6b\x65"
  "\x2d\x70\x69\x70\x65\x0c\x38\x03\x34\x04\xc5\x01\x12\x81\x89\x02"
  "\xc4\x01\x10\x81\x89\x02\xc3\x01\x0e\x81\x87\x02\xc2\x01\x0c\x81"
  "\x87\x02\xc1\x01\x0a\x81\x87\x02\xc0\x01\x08\x81\x87\x02\xbf\x01"
  "\x06\x81\x87\x02\xbe\x01\x04\x85\x08\x11\x1b\x3b\x02\x3b\x3d\x02"
  "\x10\x6f\x70\x65\x6e\x2d\x70\x74\x79\x2d\x6d\x61\x73\x74\x65\x72"
  "\x0c\x38\x03\xc8\x01\x08\x81\x87\x02\xc7\x01\x06\x81\x89\x02\xc6"
  "\x01\x04\x85\x08\x07\x10\x3d\x02\x3c\x09\x73\x65\x74\x2d\x63\x61"
  "\x72\x21\x02\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73"
  "\x74\x04\x0e\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f"
  "\x72\x03\x19\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x62"
  "\x69\x6e\x64\x69\x6e\x67\x2d\x6e\x61\x6d\x65\x34\x04\x1a\x66\x69"
  "\x6e\x64\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x0e\x06\xce\x01\x0e\x81\x89\x02\xcd"
  "\x01\x0c\x81\x85\x02\xcc\x01\x0a\x81\x85\x02\xcb\x01\x08\x81\x87"
  "\x02\xca\x01\x06\x81\x85\x02\xc9\x01\x04\xfe\x05\x0d\x1d\x55\x02"
  "\x3d\x01\x3e\x04\x16\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64"
  "\x2d\x6e\x65\x78\x74\x2d\x63\x68\x61\x72\x04\x0c\x73\x74\x72\x69"
  "\x6e\x67\x2d\x68\x65\x61\x64\x03\xd0\x01\x06\x81\x83\x02\xcf\x01"
  "\x04\x83\x04\x05\x0e\x56\x02\x3e\x3a\x39\x02\x3d\x04\x0e\x73\x74"
  "\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x04\x0f\x73\x74\x72"
  "\x69\x6e\x67\x2d\x70\x72\x65\x66\x69\x78\x3f\x03\xd6\x01\x0e\x81"
  "\x89\x02\xd5\x01\x0c\x81\x89\x02\xd4\x01\x0a\x81\x8b\x02\xd3\x01"
  "\x08\x81\x89\x02\xd2\x01\x06\x81\x85\x02\xd1\x01\x04\x84\x06\x0d"
  "\x19\x3a\x3e\x39\x39\x28\x3a\x04\x56\x04\x55\x04\x3d\x04\x3b\x04"
  "\x3e\x04\x3c\x04\x12\x04\x1f\x04\x48\x04\x54\x04\x53\x04\x52\x04"
  "\x51\x04\x4f\x04\x4e\x04\x10\x6f\x73\x2d\x6a\x6f\x62\x2d\x63\x6f"
  "\x6e\x74\x72\x6f\x6c\x3f\x4d\x04\x49\x04\x4a\x04\x2d\x04\x36\x04"
  "\x37\x04\x41\x04\x47\x04\x46\x04\x44\x04\x43\x0e\x35\x0a\x33\x04"
  "\x31\x04\x30\x04\x2e\x04\x2c\x04\x2b\x04\x2a\x04\x29\x04\x26\x0e"
  "\x34\x19\x70\x72\x6f\x63\x65\x73\x73\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x2d\x62\x69\x6e\x64\x15\x73\x74\x61\x72\x74"
  "\x2d\x70\x74\x79\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x16"
  "\x73\x74\x61\x72\x74\x2d\x70\x69\x70\x65\x2d\x73\x75\x62\x70\x72"
  "\x6f\x63\x65\x73\x73\x1d\x72\x75\x6e\x2d\x73\x75\x62\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x69\x6e\x2d\x66\x6f\x72\x65\x67\x72\x6f\x75"
  "\x6e\x64\x1f\x73\x74\x61\x72\x74\x2d\x73\x75\x62\x70\x72\x6f\x63"
  "\x65\x73\x73\x2d\x69\x6e\x2d\x62\x61\x63\x6b\x67\x72\x6f\x75\x6e"
  "\x64\x17\x73\x74\x61\x72\x74\x2d\x62\x61\x74\x63\x68\x2d\x73\x75"
  "\x62\x70\x72\x6f\x63\x65\x73\x73\x10\x73\x75\x62\x70\x72\x6f\x63"
  "\x65\x73\x73\x2d\x73\x74\x6f\x70\x50\x12\x73\x75\x62\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x68\x61\x6e\x67\x75\x70\x10\x73\x75\x62\x70"
  "\x72\x6f\x63\x65\x73\x73\x2d\x71\x75\x69\x74\x15\x73\x75\x62\x70"
  "\x72\x6f\x63\x65\x73\x73\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74"
  "\x10\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x6b\x69\x6c\x6c"
  "\x12\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x73\x69\x67\x6e"
  "\x61\x6c\x1f\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x65\x2d\x62\x61\x63\x6b\x67\x72\x6f\x75\x6e"
  "\x64\x22\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x6a\x6f\x62"
  "\x2d\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x61\x76\x61\x69\x6c\x61\x62"
  "\x6c\x65\x3f\x20\x68\x61\x6e\x64\x6c\x65\x2d\x73\x75\x62\x70\x72"
  "\x6f\x63\x65\x73\x73\x2d\x73\x74\x61\x74\x75\x73\x2d\x63\x68\x61"
  "\x6e\x67\x65\x1e\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x6a"
  "\x6f\x62\x2d\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x73\x74\x61\x74\x75"
  "\x73\x45\x1e\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x67\x6c"
  "\x6f\x62\x61\x6c\x2d\x73\x74\x61\x74\x75\x73\x2d\x74\x69\x63\x6b"
  "\x17\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x73\x74\x61\x74"
  "\x75\x73\x2d\x74\x69\x63\x6b\x40\x3f\x10\x73\x75\x62\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x77\x61\x69\x74\x4b\x0c\x38\x32\x4c\x17\x73"
  "\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x6f\x75\x74\x70\x75\x74"
  "\x2d\x70\x6f\x72\x74\x16\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73"
  "\x2d\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x13\x73\x75\x62"
  "\x70\x72\x6f\x63\x65\x73\x73\x2d\x72\x65\x6d\x6f\x76\x65\x21\x10"
  "\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x70\x75\x74\x21\x0f"
  "\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x67\x65\x74\x26\x0d"
  "\x42\x1d\x73\x65\x74\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73"
  "\x2d\x25\x73\x74\x61\x74\x75\x73\x2d\x74\x69\x63\x6b\x21\x1c\x73"
  "\x65\x74\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x65\x78"
  "\x69\x74\x2d\x72\x65\x61\x73\x6f\x6e\x21\x18\x73\x65\x74\x2d\x73"
  "\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x25\x73\x74\x61\x74\x75"
  "\x73\x21\x1a\x73\x65\x74\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73"
  "\x73\x2d\x25\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x21\x1f\x73\x65\x74"
  "\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x21\x1e\x73\x65\x74\x2d"
  "\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x69\x6e\x70\x75\x74"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x21\x1b\x73\x65\x74\x2d\x73\x75"
  "\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x70\x74\x79\x2d\x6d\x61\x73"
  "\x74\x65\x72\x21\x16\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d"
  "\x70\x72\x6f\x70\x65\x72\x74\x69\x65\x73\x18\x73\x75\x62\x70\x72"
  "\x6f\x63\x65\x73\x73\x2d\x25\x73\x74\x61\x74\x75\x73\x2d\x74\x69"
  "\x63\x6b\x17\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x65\x78"
  "\x69\x74\x2d\x72\x65\x61\x73\x6f\x6e\x13\x73\x75\x62\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x25\x73\x74\x61\x74\x75\x73\x15\x73\x75\x62"
  "\x70\x72\x6f\x63\x65\x73\x73\x2d\x25\x69\x2f\x6f\x2d\x70\x6f\x72"
  "\x74\x0e\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x69\x64\x1a"
  "\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x6f\x75\x74\x70\x75"
  "\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x19\x73\x75\x62\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x69\x6e\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e"
  "\x65\x6c\x16\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x70\x74"
  "\x79\x2d\x6d\x61\x73\x74\x65\x72\x15\x73\x75\x62\x70\x72\x6f\x63"
  "\x65\x73\x73\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x14\x73\x75"
  "\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x66\x69\x6c\x65\x6e\x61\x6d"
  "\x65\x15\x27\x04\x26\x04\x25\x04\x24\x04\x23\x04\x22\x04\x21\x04"
  "\x20\x04\x1e\x04\x1d\x04\x1c\x04\x1b\x04\x1a\x04\x19\x04\x18\x04"
  "\x17\x04\x16\x04\x15\x04\x14\x04\x13\x04\x15\x11\x6c\x6f\x63\x61"
  "\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0f\x72\x74\x64"
  "\x3a\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x56\x0b\x73\x75\x62"
  "\x70\x72\x6f\x63\x65\x73\x73\x09\x66\x69\x6c\x65\x6e\x61\x6d\x65"
  "\x0a\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x06\x69\x6e\x64\x65\x78"
  "\x0b\x70\x74\x79\x2d\x6d\x61\x73\x74\x65\x72\x0e\x69\x6e\x70\x75"
  "\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x0f\x6f\x75\x74\x70\x75\x74"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x03\x69\x64\x0a\x25\x69\x2f\x6f"
  "\x2d\x70\x6f\x72\x74\x08\x25\x73\x74\x61\x74\x75\x73\x0c\x65\x78"
  "\x69\x74\x2d\x72\x65\x61\x73\x6f\x6e\x0d\x25\x73\x74\x61\x74\x75"
  "\x73\x2d\x74\x69\x63\x6b\x0b\x70\x72\x6f\x70\x65\x72\x74\x69\x65"
  "\x73\x0c\x11\x04\x0d\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65"
  "\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x0a\x09\x10\x04\x0f\x04\x0b"
  "\x04\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64"
  "\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04"
  "\x23\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x65\x66"
  "\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65\x2d\x62\x79\x2d\x69\x6e"
  "\x64\x65\x78\x05\x56\x02\x10\x22\x80\x80\x04\x0f\x20\x81\x81\x02"
  "\x0e\x1e\x81\x81\x02\x0d\x1c\x81\x91\x02\x0c\x1a\x81\x85\x02\x0b"
  "\x18\x81\x83\x02\x0a\x16\x81\x95\x02\x09\x14\x81\x91\x02\x08\x12"
  "\x81\x87\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81"
  "\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81\x83"
  "\x02\x01\x04\x81\x83\x02\x21\x40";

SCHEME_OBJECT *
process_so_data_ef53878cd2e49cd2 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_process_so_data_ef53878cd2e49cd2 [0]))), (sizeof (prog_process_so_data_ef53878cd2e49cd2)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_24]));
}

DECLARE_COMPILED_DATA_NS ("process.so", process_so_data_ef53878cd2e49cd2)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("process.so", "1675d515147e276c")
