/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:06-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 9
#define DEBUGGING_LABEL_1_2 8
#define FREE_REFERENCE_1_0 7
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto integrate_get_top_level_block_0;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_get_top_level_block_4)
DEFLABEL (integrate_get_top_level_block_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_8 7
#define LABEL_2_6 9
#define ENVIRONMENT_LABEL_2_3 22
#define DEBUGGING_LABEL_2_2 21
#define OBJECT_2_1 20
#define OBJECT_2_0 19
#define EXECUTE_CACHE_2_10 11
#define EXECUTE_CACHE_2_9 13
#define EXECUTE_CACHE_2_7 15
#define FREE_REFERENCE_2_0 18
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_2_4);
      goto ignored_variable_warning_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ignored_variable_warning_6)
DEFLABEL (ignored_variable_warning_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_8])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 12
#define DEBUGGING_LABEL_3_2 11
#define OBJECT_3_1 10
#define OBJECT_3_0 9
#define EXECUTE_CACHE_3_6 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_3_4);
      goto integrate_top_level_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_top_level_5)
DEFLABEL (integrate_top_level_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_7 5
#define TAG_4_8 1
#define LABEL_4_5 7
#define TAG_4_6 2
#define LABEL_4_13 9
#define LABEL_4_14 11
#define LABEL_4_15 13
#define LABEL_4_16 15
#define LABEL_4_17 17
#define LABEL_4_18 19
#define LABEL_4_19 21
#define LABEL_4_10 23
#define LABEL_4_11 25
#define LABEL_4_22 27
#define TAG_4_23 12
#define LABEL_4_24 29
#define LABEL_4_26 31
#define LABEL_4_28 33
#define LABEL_4_33 35
#define LABEL_4_30 37
#define TAG_4_31 17
#define LABEL_4_32 39
#define LABEL_4_20 41
#define TAG_4_21 19
#define ENVIRONMENT_LABEL_4_3 70
#define DEBUGGING_LABEL_4_2 69
#define OBJECT_4_3 68
#define OBJECT_4_2 67
#define OBJECT_4_1 66
#define OBJECT_4_0 65
#define EXECUTE_CACHE_4_36 43
#define EXECUTE_CACHE_4_35 45
#define EXECUTE_CACHE_4_34 47
#define EXECUTE_CACHE_4_29 49
#define EXECUTE_CACHE_4_27 51
#define EXECUTE_CACHE_4_25 53
#define EXECUTE_CACHE_4_12 55
#define EXECUTE_CACHE_4_9 57
#define FREE_REFERENCE_4_1 60
#define FREE_REFERENCE_4_0 61
#define FREE_ASSIGNMENT_4_1 63
#define FREE_ASSIGNMENT_4_0 64
#define FREE_REFERENCES_LABEL_4_0 42
#define NUMBER_OF_LINKER_SECTIONS_4_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd19;
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
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_4_4);
      goto integrate_top_level__30;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto lambda_42;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto swapB_41;

    case 3:
      current_block = (Rpc - LABEL_4_13);
      goto label_32;

    case 4:
      current_block = (Rpc - LABEL_4_14);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_4_15);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_4_16);
      goto label_35;

    case 7:
      current_block = (Rpc - LABEL_4_17);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_4_18);
      goto label_37;

    case 9:
      current_block = (Rpc - LABEL_4_19);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_4_22);
      goto lambda_44;

    case 13:
      current_block = (Rpc - LABEL_4_24);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_4_26);
      goto continuation_0;

    case 15:
      current_block = (Rpc - LABEL_4_28);
      goto continuation_7;

    case 16:
      current_block = (Rpc - LABEL_4_33);
      goto label_38;

    case 17:
      current_block = (Rpc - LABEL_4_30);
      goto lambda_45;

    case 18:
      current_block = (Rpc - LABEL_4_32);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_4_20);
      goto lambda_43;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_top_level__40)
DEFLABEL (integrate_top_level__30)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 2;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  Wrd29 = Wrd31;
  ((Wrd29.pObj) [2]) = (Wrd7.Obj);
  ((Wrd29.pObj) [3]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_7])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  (Wrd21.Obj) = (Rsp [5]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  ((Wrd20.pObj) [3]) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  (Rsp [4]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd32.Obj);
  (Rsp [5]) = (Wrd32.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_4_7);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_25]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_29]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_35]));

DEFLABEL (label_46)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_32]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_49;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd27.Lng))))
    goto label_49;
  (Wrd19.Obj) = ((Wrd25.pObj) [5]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_48)
  (Wrd39.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_34]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_36]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_19);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_20])));
  Rhp += 3;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd25 = Wrd20;
  ((Wrd25.pObj) [2]) = Rvl;
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd25.pObj) [4]) = (Wrd22.Obj);
  Rsp = (& (Rsp [4]));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_47)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_22])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd14.pObj) [4]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_49)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [3]);
  (Wrd35.Obj) = (current_block [OBJECT_4_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (swapB_41)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (swapB_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  Wrd5 = Wrd9;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_62)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_59)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  Wrd57 = Wrd61;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_53)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_50)
  Rvl = (current_block [OBJECT_4_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_52)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_18])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_37)
  goto label_50;

DEFLABEL (label_55)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_54;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_17])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_36)
  goto label_53;

DEFLABEL (label_58)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_57;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_4_16])), (Wrd58.pObj));

DEFLABEL (label_35)
  (Wrd57.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_61)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_60;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_15])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_34)
  goto label_59;

DEFLABEL (label_64)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_14])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_33)
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_66;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_4_13])), (Wrd6.pObj));

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_65;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_4_22);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_27]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_26);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_30])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_4_30);

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

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_4_20);

DEFLABEL (lambda_11)
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
  goto lambda_3;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define ENVIRONMENT_LABEL_5_3 12
#define DEBUGGING_LABEL_5_2 11
#define EXECUTE_CACHE_5_8 7
#define EXECUTE_CACHE_5_7 9
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_5_4);
      goto integrate_expressions_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_expressions_4)
DEFLABEL (integrate_expressions_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_8 7
#define ENVIRONMENT_LABEL_6_3 16
#define DEBUGGING_LABEL_6_2 15
#define EXECUTE_CACHE_6_9 9
#define EXECUTE_CACHE_6_7 11
#define FREE_REFERENCE_6_0 14
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_6_4);
      goto integrate_actions_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_actions_6)
DEFLABEL (integrate_actions_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  (Wrd12.Obj) = (Rsp [1]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_8;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [1]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (label_8)
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_8])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define LABEL_7_8 11
#define ENVIRONMENT_LABEL_7_3 18
#define DEBUGGING_LABEL_7_2 17
#define OBJECT_7_2 16
#define OBJECT_7_1 15
#define OBJECT_7_0 14
#define FREE_REFERENCE_7_0 13
#define FREE_REFERENCES_LABEL_7_0 12
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_7_4);
      goto integrate_expression_3;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_expression_10)
DEFLABEL (integrate_expression_3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_17)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_16;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_16;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_15)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_14;
  Wrd35 = Wrd39;

DEFLABEL (label_13)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_12;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_12;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_12;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_12)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_7])), (Wrd36.pObj));

DEFLABEL (label_7)
  (Wrd35.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd30.Obj) = (current_block [OBJECT_7_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_7_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_6 9
#define LABEL_8_11 11
#define LABEL_8_9 13
#define TAG_8_10 5
#define LABEL_8_16 15
#define LABEL_8_17 17
#define LABEL_8_13 19
#define TAG_8_14 8
#define LABEL_8_24 21
#define LABEL_8_21 23
#define LABEL_8_22 25
#define LABEL_8_28 27
#define LABEL_8_19 29
#define ENVIRONMENT_LABEL_8_3 63
#define DEBUGGING_LABEL_8_2 62
#define OBJECT_8_10 61
#define OBJECT_8_9 60
#define OBJECT_8_8 59
#define OBJECT_8_7 58
#define OBJECT_8_6 57
#define OBJECT_8_5 56
#define OBJECT_8_4 55
#define OBJECT_8_3 54
#define OBJECT_8_2 53
#define OBJECT_8_1 52
#define OBJECT_8_0 51
#define EXECUTE_CACHE_8_29 31
#define EXECUTE_CACHE_8_27 33
#define EXECUTE_CACHE_8_26 35
#define EXECUTE_CACHE_8_25 37
#define EXECUTE_CACHE_8_23 39
#define EXECUTE_CACHE_8_20 41
#define EXECUTE_CACHE_8_18 43
#define EXECUTE_CACHE_8_15 45
#define EXECUTE_CACHE_8_12 47
#define EXECUTE_CACHE_8_8 49
#define FREE_REFERENCES_LABEL_8_0 30
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_19;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_8_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_8_9);
      goto dont_integrate_28;

    case 6:
      current_block = (Rpc - LABEL_8_16);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_8_17);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_8_13);
      goto lambda_29;

    case 9:
      current_block = (Rpc - LABEL_8_24);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_8_21);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_8_22);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_8_28);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_8_19);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_34;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_33)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_32;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_32;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_31)
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_9])));
  Rhp += 3;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  Wrd16 = Wrd18;
  (Wrd17.Obj) = (Rsp [5]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [3]) = (Wrd14.Obj);
  ((Wrd16.pObj) [4]) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_13])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Rsp [3]) = (Wrd11.Obj);
  (Rsp [5]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (label_30)
  (Wrd20.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd20.Obj);
  Rsp = (& (Rsp [5]));
  goto dont_integrate_17;

DEFLABEL (label_32)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.Obj) = (current_block [OBJECT_8_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_8_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (dont_integrate_28)
  CLOSURE_HEADER (LABEL_8_9);

DEFLABEL (dont_integrate_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd23.Obj) = ((Wrd6.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_38;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_38;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_37)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_36;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd44.Lng))))
    goto label_36;
  (Wrd36.Obj) = ((Wrd42.pObj) [2]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_35)
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [3]);
  (Rsp [3]) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_18]));

DEFLABEL (label_36)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [2]);
  (Wrd52.Obj) = (current_block [OBJECT_8_4]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_8_3]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_8_13);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_40;

DEFLABEL (label_39)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [3]);
  (Rsp [2]) = (Wrd41.Obj);
  Rsp = (& (Rsp [2]));
  goto dont_integrate_17;

DEFLABEL (label_40)
  if ((Wrd5.Obj) == (current_block [OBJECT_8_5]))
    goto label_39;
  if (! ((Wrd5.Obj) == (current_block [OBJECT_8_6])))
    goto label_41;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_19]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_8_19);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto dont_integrate_17;

DEFLABEL (label_41)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_8_7])))
    goto label_44;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [4]);
  (Rsp [1]) = (Wrd25.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_21]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_8_22);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_43;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_43;
  (Wrd9.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_29]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_8_21);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_27]));

DEFLABEL (label_43)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_8_3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_28]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  if ((Wrd5.Obj) == (current_block [OBJECT_8_8]))
    goto label_45;
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_8_10]);
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_26]));

DEFLABEL (label_45)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_8_9]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8_24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto dont_integrate_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_6 9
#define LABEL_9_8 11
#define TAG_9_9 4
#define LABEL_9_13 13
#define LABEL_9_15 15
#define LABEL_9_11 17
#define LABEL_9_19 19
#define LABEL_9_18 21
#define LABEL_9_21 23
#define LABEL_9_22 25
#define ENVIRONMENT_LABEL_9_3 55
#define DEBUGGING_LABEL_9_2 54
#define OBJECT_9_10 53
#define OBJECT_9_9 52
#define OBJECT_9_8 51
#define OBJECT_9_7 50
#define OBJECT_9_6 49
#define OBJECT_9_5 48
#define OBJECT_9_4 47
#define OBJECT_9_3 46
#define OBJECT_9_2 45
#define OBJECT_9_1 44
#define OBJECT_9_0 43
#define EXECUTE_CACHE_9_23 27
#define EXECUTE_CACHE_9_20 29
#define EXECUTE_CACHE_9_17 31
#define EXECUTE_CACHE_9_16 33
#define EXECUTE_CACHE_9_14 35
#define EXECUTE_CACHE_9_12 37
#define EXECUTE_CACHE_9_10 39
#define FREE_REFERENCE_9_0 42
#define FREE_REFERENCES_LABEL_9_0 26
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd42;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_16;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_9_8);
      goto lambda_27;

    case 5:
      current_block = (Rpc - LABEL_9_13);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_9_15);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_9_19);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_9_18);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_9_21);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_9_22);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_26)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_36)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_35;
  Wrd24 = Wrd28;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd24.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_8])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd32 = Wrd31;
  (Wrd33.Obj) = (Rsp [2]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd35.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_33;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_33;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_32)
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_9_18);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_31;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_30)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd21.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_29;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd30.Lng))))
    goto label_29;
  (Wrd22.Obj) = ((Wrd28.pObj) [2]);

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd38.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_23]));

DEFLABEL (label_29)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.Obj) = (current_block [OBJECT_9_10]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_24)
  (Wrd22.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (current_block [OBJECT_9_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_9_9]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_7])), (Wrd25.pObj));

DEFLABEL (label_19)
  (Wrd24.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_9_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_9_8);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_9_2]))
    goto label_41;
  if ((Wrd5.Obj) == (current_block [OBJECT_9_4]))
    goto label_38;
  if ((Wrd5.Obj) == (current_block [OBJECT_9_5]))
    goto label_38;
  if ((Wrd5.Obj) == (current_block [OBJECT_9_6]))
    goto label_38;
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9_8]);
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_17]));

DEFLABEL (label_38)
  (Wrd16.Obj) = (current_block [OBJECT_9_7]);
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_40;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_40;
  (Wrd17.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_39)
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (label_40)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [2]);
  (Wrd37.Obj) = (current_block [OBJECT_9_3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_20)
  (Wrd17.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [2]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_43;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd54.Lng))))
    goto label_43;
  (Wrd42.Obj) = ((Wrd52.pObj) [3]);

DEFLABEL (label_42)
  (Rsp [2]) = (Wrd42.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (label_43)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [2]);
  (Wrd62.Obj) = (current_block [OBJECT_9_3]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_21)
  (Wrd42.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_5 7
#define LABEL_10_8 9
#define LABEL_10_9 11
#define ENVIRONMENT_LABEL_10_3 22
#define DEBUGGING_LABEL_10_2 21
#define OBJECT_10_3 20
#define OBJECT_10_2 19
#define OBJECT_10_1 18
#define OBJECT_10_0 17
#define EXECUTE_CACHE_10_10 13
#define EXECUTE_CACHE_10_7 15
#define FREE_REFERENCES_LABEL_10_0 12
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_16;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_16;
  (Wrd13.Obj) = ((Wrd17.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_15)
  (Wrd27.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [6]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_13)
  (Rsp [5]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [6]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_12;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_12;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_11)
  (Rsp [4]) = (Wrd21.Obj);
  (Wrd37.Obj) = (* (Rsp++));
  (Rsp [5]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (label_12)
  (Wrd32.Obj) = (Rsp [6]);
  (Wrd33.Obj) = (current_block [OBJECT_10_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [6]);
  (Wrd17.Obj) = (current_block [OBJECT_10_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.Obj) = (current_block [OBJECT_10_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_5 7
#define LABEL_11_8 9
#define LABEL_11_9 11
#define ENVIRONMENT_LABEL_11_3 22
#define DEBUGGING_LABEL_11_2 21
#define OBJECT_11_3 20
#define OBJECT_11_2 19
#define OBJECT_11_1 18
#define OBJECT_11_0 17
#define EXECUTE_CACHE_11_10 13
#define EXECUTE_CACHE_11_7 15
#define FREE_REFERENCES_LABEL_11_0 12
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_16;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_16;
  (Wrd13.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_15)
  (Wrd27.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [3]) = Rvl;
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_14;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd14.Lng))))
    goto label_14;
  (Wrd6.Obj) = ((Wrd12.pObj) [4]);

DEFLABEL (label_13)
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_12;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd30.Lng))))
    goto label_12;
  (Wrd22.Obj) = ((Wrd28.pObj) [5]);

DEFLABEL (label_11)
  (Rsp [5]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (label_12)
  (Wrd33.Obj) = (Rsp [5]);
  (Wrd34.Obj) = (current_block [OBJECT_11_3]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_8)
  (Wrd22.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.Obj) = (current_block [OBJECT_11_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.Obj) = (current_block [OBJECT_11_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_12 7
#define LABEL_12_14 9
#define LABEL_12_9 11
#define LABEL_12_15 13
#define LABEL_12_10 15
#define LABEL_12_18 17
#define LABEL_12_11 19
#define LABEL_12_21 21
#define LABEL_12_7 23
#define LABEL_12_26 25
#define LABEL_12_17 27
#define LABEL_12_29 29
#define LABEL_12_30 31
#define LABEL_12_31 33
#define LABEL_12_32 35
#define LABEL_12_24 37
#define LABEL_12_34 39
#define LABEL_12_36 41
#define LABEL_12_37 43
#define LABEL_12_22 45
#define LABEL_12_38 47
#define LABEL_12_35 49
#define LABEL_12_33 51
#define LABEL_12_39 53
#define ENVIRONMENT_LABEL_12_3 86
#define DEBUGGING_LABEL_12_2 85
#define OBJECT_12_5 84
#define OBJECT_12_4 83
#define OBJECT_12_3 82
#define OBJECT_12_2 81
#define OBJECT_12_1 80
#define OBJECT_12_0 79
#define EXECUTE_CACHE_12_40 55
#define EXECUTE_CACHE_12_28 57
#define EXECUTE_CACHE_12_27 59
#define EXECUTE_CACHE_12_25 61
#define EXECUTE_CACHE_12_23 63
#define EXECUTE_CACHE_12_20 65
#define EXECUTE_CACHE_12_19 67
#define EXECUTE_CACHE_12_16 69
#define EXECUTE_CACHE_12_13 71
#define EXECUTE_CACHE_12_8 73
#define EXECUTE_CACHE_12_6 75
#define FREE_REFERENCE_12_0 78
#define FREE_REFERENCES_LABEL_12_0 54
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd37;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_12_4);
      goto integrate_conditional_24;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_12);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_12_14);
      goto continuation_16;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_23;

    case 5:
      current_block = (Rpc - LABEL_12_15);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_21;

    case 7:
      current_block = (Rpc - LABEL_12_18);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_20;

    case 9:
      current_block = (Rpc - LABEL_12_21);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_1;

    case 11:
      current_block = (Rpc - LABEL_12_26);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_12_17);
      goto continuation_18;

    case 13:
      current_block = (Rpc - LABEL_12_29);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_12_30);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_12_31);
      goto continuation_4;

    case 16:
      current_block = (Rpc - LABEL_12_32);
      goto label_33;

    case 17:
      current_block = (Rpc - LABEL_12_24);
      goto continuation_3;

    case 18:
      current_block = (Rpc - LABEL_12_34);
      goto label_31;

    case 19:
      current_block = (Rpc - LABEL_12_36);
      goto label_30;

    case 20:
      current_block = (Rpc - LABEL_12_37);
      goto continuation_12;

    case 21:
      current_block = (Rpc - LABEL_12_22);
      goto continuation_13;

    case 22:
      current_block = (Rpc - LABEL_12_38);
      goto label_32;

    case 23:
      current_block = (Rpc - LABEL_12_35);
      goto continuation_6;

    case 24:
      current_block = (Rpc - LABEL_12_33);
      goto continuation_9;

    case 25:
      current_block = (Rpc - LABEL_12_39);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_conditional_35)
DEFLABEL (integrate_conditional_24)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_56;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_49;

DEFLABEL (label_48)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_24]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_25]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_31]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_47;
  Wrd11 = Wrd15;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_27]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_31);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_29]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  if ((Wrd51.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_39;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd62.Lng))))
    goto label_39;
  (Wrd54.Obj) = ((Wrd60.pObj) [2]);

DEFLABEL (label_38)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_37)
  (Rsp [4]) = (Wrd54.Obj);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_33]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd73.Obj);

DEFLABEL (label_36)
  (Wrd74.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_23]));

DEFLABEL (label_39)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.Obj) = (current_block [OBJECT_12_2]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_32]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_33)
  (Wrd54.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd54.Obj) = ((SCHEME_OBJECT) 0);
  goto label_38;

DEFLABEL (label_41)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_30]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_44;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd31.Lng))))
    goto label_44;
  (Wrd23.Obj) = ((Wrd29.pObj) [2]);

DEFLABEL (label_43)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_42)
  (Rsp [2]) = (Wrd23.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_35]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd42.Obj);
  goto label_36;

DEFLABEL (label_44)
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.Obj) = (current_block [OBJECT_12_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_34]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_31)
  (Wrd23.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd23.Obj) = ((SCHEME_OBJECT) 0);
  goto label_43;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_36])), (Wrd12.pObj));

DEFLABEL (label_30)
  (Wrd11.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_55;
  Wrd11 = Wrd15;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_27]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_22]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_12_22);
  (Wrd9.Obj) = (current_block [OBJECT_12_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [5]) = (Wrd10.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_37]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_52;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd28.Lng))))
    goto label_52;
  (Wrd20.Obj) = ((Wrd26.pObj) [2]);

DEFLABEL (label_51)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_50)
  (Rsp [4]) = (Wrd20.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (label_52)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.Obj) = (current_block [OBJECT_12_2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_38]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_32)
  (Wrd20.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_53)
  (Wrd20.Obj) = ((SCHEME_OBJECT) 0);
  goto label_51;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_26])), (Wrd12.pObj));

DEFLABEL (label_29)
  (Wrd11.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Obj) = (Rsp [8]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_64;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd26.Lng))))
    goto label_64;
  (Wrd20.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_63)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_20]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_12_10);
  (Wrd9.Obj) = (current_block [OBJECT_12_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_62;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_62;
  (Wrd15.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_12_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_28]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_59;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_59;
  (Wrd12.Obj) = ((Wrd18.pObj) [2]);

DEFLABEL (label_58)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_57)
  (Rsp [4]) = (Wrd12.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (label_59)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_12_2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_27)
  (Wrd12.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd12.Obj) = ((SCHEME_OBJECT) 0);
  goto label_58;

DEFLABEL (label_62)
  (Wrd24.Obj) = (Rsp [6]);
  (Wrd25.Obj) = (current_block [OBJECT_12_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd29.Obj) = (Rsp [8]);
  (Wrd30.Obj) = (current_block [OBJECT_12_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_12_33);
  (Wrd9.Obj) = (current_block [OBJECT_12_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [5]) = (Wrd10.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12_29);
  (Wrd54.Obj) = Rvl;
  goto label_37;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_35);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_39]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_39);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_40]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_30);
  (Wrd23.Obj) = Rvl;
  goto label_42;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_12_37);
  (Wrd20.Obj) = Rvl;
  goto label_50;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_12_14);
  (Wrd12.Obj) = Rvl;
  goto label_57;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 5
#define DEBUGGING_LABEL_13_2 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_6 5
#define LABEL_14_8 7
#define LABEL_14_5 9
#define LABEL_14_7 11
#define LABEL_14_10 13
#define LABEL_14_13 15
#define LABEL_14_14 17
#define ENVIRONMENT_LABEL_14_3 32
#define DEBUGGING_LABEL_14_2 31
#define OBJECT_14_3 30
#define OBJECT_14_2 29
#define OBJECT_14_1 28
#define OBJECT_14_0 27
#define EXECUTE_CACHE_14_15 19
#define EXECUTE_CACHE_14_12 21
#define EXECUTE_CACHE_14_11 23
#define EXECUTE_CACHE_14_9 25
#define FREE_REFERENCES_LABEL_14_0 18
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_8;

    case 1:
      current_block = (Rpc - LABEL_14_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_14_8);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_14_13);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_14_14);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_24;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_24;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_23)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd37.Obj) = (Rsp [6]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_22;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd36.Lng))))
    goto label_22;
  (Wrd30.Obj) = ((Wrd34.pObj) [3]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_21)
  (Wrd44.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_20;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_18;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd33.Lng))))
    goto label_18;
  (Wrd25.Obj) = ((Wrd31.pObj) [3]);

DEFLABEL (label_17)
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd41.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd41.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (label_18)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.Obj) = (current_block [OBJECT_14_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_13)
  (Wrd25.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_14_3]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd39.Obj) = (Rsp [6]);
  (Wrd40.Obj) = (current_block [OBJECT_14_2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_14_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_6 5
#define LABEL_15_5 7
#define LABEL_15_8 9
#define ENVIRONMENT_LABEL_15_3 19
#define DEBUGGING_LABEL_15_2 18
#define OBJECT_15_2 17
#define OBJECT_15_1 16
#define OBJECT_15_0 15
#define EXECUTE_CACHE_15_9 11
#define EXECUTE_CACHE_15_7 13
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_15_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_12;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_11)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_9)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd21.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_15_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_15_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_6 5
#define LABEL_16_5 7
#define LABEL_16_8 9
#define ENVIRONMENT_LABEL_16_3 19
#define DEBUGGING_LABEL_16_2 18
#define OBJECT_16_2 17
#define OBJECT_16_1 16
#define OBJECT_16_0 15
#define EXECUTE_CACHE_16_9 11
#define EXECUTE_CACHE_16_7 13
#define FREE_REFERENCES_LABEL_16_0 10
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
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
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_16_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_12;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_12;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_11)
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_10;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_9)
  (Rsp [4]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (label_10)
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.Obj) = (current_block [OBJECT_16_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.Obj) = (current_block [OBJECT_16_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_7 5
#define LABEL_17_5 7
#define LABEL_17_10 9
#define LABEL_17_12 11
#define LABEL_17_8 13
#define LABEL_17_17 15
#define LABEL_17_18 17
#define LABEL_17_15 19
#define LABEL_17_19 21
#define LABEL_17_24 23
#define LABEL_17_26 25
#define LABEL_17_13 27
#define LABEL_17_27 29
#define LABEL_17_29 31
#define LABEL_17_21 33
#define LABEL_17_30 35
#define LABEL_17_22 37
#define LABEL_17_32 39
#define LABEL_17_23 41
#define LABEL_17_20 43
#define LABEL_17_31 45
#define ENVIRONMENT_LABEL_17_3 78
#define DEBUGGING_LABEL_17_2 77
#define OBJECT_17_5 76
#define OBJECT_17_4 75
#define OBJECT_17_3 74
#define OBJECT_17_2 73
#define OBJECT_17_1 72
#define OBJECT_17_0 71
#define EXECUTE_CACHE_17_36 47
#define EXECUTE_CACHE_17_35 49
#define EXECUTE_CACHE_17_34 51
#define EXECUTE_CACHE_17_33 53
#define EXECUTE_CACHE_17_28 55
#define EXECUTE_CACHE_17_25 57
#define EXECUTE_CACHE_17_16 59
#define EXECUTE_CACHE_17_14 61
#define EXECUTE_CACHE_17_11 63
#define EXECUTE_CACHE_17_9 65
#define EXECUTE_CACHE_17_6 67
#define FREE_REFERENCE_17_0 70
#define FREE_REFERENCES_LABEL_17_0 46
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
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
      goto integrate_disjunction_19;

    case 1:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_17_10);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_17_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_17_17);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_17_18);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_17_19);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_17_24);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_17_26);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_17_13);
      goto continuation_16;

    case 13:
      current_block = (Rpc - LABEL_17_27);
      goto label_25;

    case 14:
      current_block = (Rpc - LABEL_17_29);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_17_21);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_17_30);
      goto label_26;

    case 17:
      current_block = (Rpc - LABEL_17_22);
      goto continuation_12;

    case 18:
      current_block = (Rpc - LABEL_17_32);
      goto label_27;

    case 19:
      current_block = (Rpc - LABEL_17_23);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_17_20);
      goto continuation_6;

    case 21:
      current_block = (Rpc - LABEL_17_31);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_disjunction_29)
DEFLABEL (integrate_disjunction_19)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_52;

DEFLABEL (label_51)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;

DEFLABEL (label_43)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_22]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Obj) = (Rsp [7]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_37;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd25.Lng))))
    goto label_37;
  (Wrd19.Obj) = ((Wrd23.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_17_23);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_34]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17_22);
  (Wrd9.Obj) = (current_block [OBJECT_17_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_31]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_35;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_35;
  (Wrd15.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_33]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_36]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_17_21);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_29]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_32;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_32;
  (Wrd12.Obj) = ((Wrd18.pObj) [2]);

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_30)
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_28]));

DEFLABEL (label_32)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_17_2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_30]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_3]), 2);

DEFLABEL (label_26)
  (Wrd12.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd12.Obj) = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_35)
  (Wrd24.Obj) = (Rsp [6]);
  (Wrd25.Obj) = (current_block [OBJECT_17_4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_32]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_3]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd28.Obj) = (Rsp [7]);
  (Wrd29.Obj) = (current_block [OBJECT_17_4]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_24]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_3]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_41;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd47.Lng))))
    goto label_41;
  (Wrd39.Obj) = ((Wrd45.pObj) [2]);

DEFLABEL (label_40)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_39)
  (Rsp [2]) = (Wrd39.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_20]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_20);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_35]));

DEFLABEL (label_41)
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.Obj) = (current_block [OBJECT_17_2]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_19]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_3]), 2);

DEFLABEL (label_24)
  (Wrd39.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd39.Obj) = ((SCHEME_OBJECT) 0);
  goto label_40;

DEFLABEL (label_44)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_17_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_50;
  Wrd11 = Wrd15;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_17_13);
  (Wrd9.Obj) = (current_block [OBJECT_17_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_47;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd28.Lng))))
    goto label_47;
  (Wrd20.Obj) = ((Wrd26.pObj) [2]);

DEFLABEL (label_46)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_45)
  (Rsp [3]) = (Wrd20.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_28]));

DEFLABEL (label_47)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.Obj) = (current_block [OBJECT_17_2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_27]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_3]), 2);

DEFLABEL (label_25)
  (Wrd20.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_48)
  (Wrd20.Obj) = ((SCHEME_OBJECT) 0);
  goto label_46;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_17])), (Wrd12.pObj));

DEFLABEL (label_22)
  (Wrd11.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_54;
  Wrd11 = Wrd15;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_10])), (Wrd12.pObj));

DEFLABEL (label_21)
  (Wrd11.Obj) = Rvl;
  goto label_53;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_29);
  (Wrd12.Obj) = Rvl;
  goto label_30;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_18);
  (Wrd39.Obj) = Rvl;
  goto label_39;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_17_26);
  (Wrd20.Obj) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define ENVIRONMENT_LABEL_18_3 12
#define DEBUGGING_LABEL_18_2 11
#define EXECUTE_CACHE_18_6 9
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_18_7);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 12
#define DEBUGGING_LABEL_19_2 11
#define EXECUTE_CACHE_19_7 7
#define EXECUTE_CACHE_19_6 9
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 8
#define DEBUGGING_LABEL_20_2 7
#define EXECUTE_CACHE_20_5 5
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_6 5
#define LABEL_21_7 7
#define LABEL_21_8 9
#define LABEL_21_5 11
#define LABEL_21_10 13
#define ENVIRONMENT_LABEL_21_3 22
#define DEBUGGING_LABEL_21_2 21
#define OBJECT_21_3 20
#define OBJECT_21_2 19
#define OBJECT_21_1 18
#define OBJECT_21_0 17
#define EXECUTE_CACHE_21_9 15
#define FREE_REFERENCES_LABEL_21_0 14
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_21_4);
      goto integrate_quotation_5;

    case 1:
      current_block = (Rpc - LABEL_21_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_21_10);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_quotation_11)
DEFLABEL (integrate_quotation_5)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_18;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_18;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_17)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_16;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_16;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_15)
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_14;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd48.Lng))))
    goto label_14;
  (Wrd42.Obj) = ((Wrd46.pObj) [2]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_14)
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.Obj) = (current_block [OBJECT_21_3]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_21_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_21_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (lambda_12)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_21_10);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_11 7
#define LABEL_22_8 9
#define TAG_22_9 3
#define LABEL_22_13 11
#define LABEL_22_17 13
#define LABEL_22_6 15
#define TAG_22_7 6
#define LABEL_22_15 17
#define LABEL_22_12 19
#define LABEL_22_20 21
#define LABEL_22_22 23
#define ENVIRONMENT_LABEL_22_3 51
#define DEBUGGING_LABEL_22_2 50
#define OBJECT_22_8 49
#define OBJECT_22_7 48
#define OBJECT_22_6 47
#define OBJECT_22_5 46
#define OBJECT_22_4 45
#define OBJECT_22_3 44
#define OBJECT_22_2 43
#define OBJECT_22_1 42
#define OBJECT_22_0 41
#define EXECUTE_CACHE_22_23 25
#define EXECUTE_CACHE_22_21 27
#define EXECUTE_CACHE_22_19 29
#define EXECUTE_CACHE_22_18 31
#define EXECUTE_CACHE_22_16 33
#define EXECUTE_CACHE_22_14 35
#define EXECUTE_CACHE_22_10 37
#define FREE_REFERENCE_22_0 40
#define FREE_REFERENCES_LABEL_22_0 24
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd58;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd53;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
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
      current_block = (Rpc - LABEL_22_4);
      goto lambda_16;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_22_11);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto lambda_24;

    case 4:
      current_block = (Rpc - LABEL_22_13);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_22_17);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_22_6);
      goto dont_integrate_23;

    case 7:
      current_block = (Rpc - LABEL_22_15);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_22_12);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_22_20);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_22_22);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_22)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_25)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_6])));
  Rhp += 2;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  Wrd40 = Wrd42;
  (Wrd41.Obj) = (Rsp [4]);
  ((Wrd40.pObj) [2]) = (Wrd41.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  ((Wrd40.pObj) [3]) = (Wrd38.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_8])));
  Rhp += 4;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd30 = Wrd23;
  ((Wrd30.pObj) [2]) = (Wrd41.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  ((Wrd30.pObj) [4]) = (Wrd43.Obj);
  ((Wrd30.pObj) [5]) = (Wrd38.Obj);
  (Rsp [3]) = (Wrd22.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Rsp [2]) = (Wrd38.Obj);
  (Rsp [4]) = (Wrd43.Obj);
  (Rsp [1]) = (Wrd32.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_22_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_22_8);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_22_2]))
    goto label_34;
  if (! ((Wrd5.Obj) == (current_block [OBJECT_22_4])))
    goto label_28;

DEFLABEL (label_27)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [4]);
  (Rsp [2]) = (Wrd30.Obj);
  Rsp = (& (Rsp [2]));
  goto dont_integrate_14;

DEFLABEL (label_28)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_22_5])))
    goto label_30;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_15]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [3]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = ((Wrd38.pObj) [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_15);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [4]);
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));
  goto dont_integrate_14;

DEFLABEL (label_29)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_22_22);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_30)
  if ((Wrd5.Obj) == (current_block [OBJECT_22_6]))
    goto label_31;
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_22_8]);
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_19]));

DEFLABEL (label_31)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_33;
  Wrd16 = Wrd20;

DEFLABEL (label_32)
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [5]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_22_7]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_11);
  goto label_27;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_17])), (Wrd17.pObj));

DEFLABEL (label_19)
  (Wrd16.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [5]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 10))
    goto label_36;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd66.Lng))))
    goto label_36;
  (Wrd58.Obj) = ((Wrd64.pObj) [3]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_22_12);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto dont_integrate_14;

DEFLABEL (label_36)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [5]);
  (Wrd74.Obj) = (current_block [OBJECT_22_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (dont_integrate_23)
  CLOSURE_HEADER (LABEL_22_6);

DEFLABEL (dont_integrate_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_22_20);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define ENVIRONMENT_LABEL_23_3 14
#define DEBUGGING_LABEL_23_2 13
#define OBJECT_23_1 12
#define OBJECT_23_0 11
#define EXECUTE_CACHE_23_7 9
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd9;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
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
      goto reassign_2;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reassign_7)
DEFLABEL (reassign_2)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_13;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_13;
  (Wrd9.Obj) = ((Wrd32.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;

DEFLABEL (label_12)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_11;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_11;
  (Wrd13.Obj) = ((Wrd19.pObj) [2]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (label_11)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (current_block [OBJECT_23_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_4)
  (Wrd13.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_23_0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_8 7
#define LABEL_24_5 9
#define LABEL_24_9 11
#define ENVIRONMENT_LABEL_24_3 21
#define DEBUGGING_LABEL_24_2 20
#define OBJECT_24_2 19
#define OBJECT_24_1 18
#define OBJECT_24_0 17
#define EXECUTE_CACHE_24_10 13
#define EXECUTE_CACHE_24_7 15
#define FREE_REFERENCES_LABEL_24_0 12
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_24_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_14;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_14;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_13)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_11;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_11;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_9)
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd27.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_24_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_12)
  (Wrd11.Obj) = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_14)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_24_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (Wrd11.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 5
#define DEBUGGING_LABEL_25_2 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define TAG_26_8 3
#define LABEL_26_10 11
#define ENVIRONMENT_LABEL_26_3 25
#define DEBUGGING_LABEL_26_2 24
#define OBJECT_26_1 23
#define OBJECT_26_0 22
#define EXECUTE_CACHE_26_12 13
#define EXECUTE_CACHE_26_11 15
#define EXECUTE_CACHE_26_9 17
#define FREE_REFERENCE_26_1 20
#define FREE_REFERENCE_26_0 21
#define FREE_REFERENCES_LABEL_26_0 12
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_26_4);
      goto maybe_displaying_name_3;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto lambda_9;

    case 4:
      current_block = (Rpc - LABEL_26_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_displaying_name_8)
DEFLABEL (maybe_displaying_name_3)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_15;
  Wrd5 = Wrd9;

DEFLABEL (label_14)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_11)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_13;
  Wrd13 = Wrd17;

DEFLABEL (label_12)
  if (! ((Wrd13.Obj) == (current_block [OBJECT_26_0])))
    goto label_10;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_7])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Rsp [0]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_6])), (Wrd14.pObj));

DEFLABEL (label_6)
  (Wrd13.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_26_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_10);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define LABEL_27_8 9
#define LABEL_27_7 11
#define LABEL_27_12 13
#define LABEL_27_9 15
#define LABEL_27_11 17
#define LABEL_27_15 19
#define TAG_27_16 8
#define LABEL_27_18 21
#define LABEL_27_20 23
#define LABEL_27_21 25
#define LABEL_27_17 27
#define LABEL_27_22 29
#define LABEL_27_23 31
#define LABEL_27_25 33
#define LABEL_27_24 35
#define LABEL_27_27 37
#define LABEL_27_29 39
#define TAG_27_30 18
#define LABEL_27_31 41
#define LABEL_27_33 43
#define ENVIRONMENT_LABEL_27_3 70
#define DEBUGGING_LABEL_27_2 69
#define OBJECT_27_7 68
#define OBJECT_27_6 67
#define OBJECT_27_5 66
#define OBJECT_27_4 65
#define OBJECT_27_3 64
#define OBJECT_27_2 63
#define OBJECT_27_1 62
#define OBJECT_27_0 61
#define EXECUTE_CACHE_27_34 45
#define EXECUTE_CACHE_27_32 47
#define EXECUTE_CACHE_27_28 49
#define EXECUTE_CACHE_27_26 51
#define EXECUTE_CACHE_27_19 53
#define EXECUTE_CACHE_27_14 55
#define EXECUTE_CACHE_27_13 57
#define EXECUTE_CACHE_27_10 59
#define FREE_REFERENCES_LABEL_27_0 44
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd84;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd90;
  machine_word Wrd5;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd39;
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
      goto integrate_open_block_23;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_25;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_27_8);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_27_12);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_20;

    case 8:
      current_block = (Rpc - LABEL_27_15);
      goto lambda_36;

    case 9:
      current_block = (Rpc - LABEL_27_18);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_27_20);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_27_21);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_27_17);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_27_22);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_27_23);
      goto label_32;

    case 15:
      current_block = (Rpc - LABEL_27_25);
      goto label_31;

    case 16:
      current_block = (Rpc - LABEL_27_24);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_27_27);
      goto lambda_11;

    case 18:
      current_block = (Rpc - LABEL_27_29);
      goto lambda_37;

    case 19:
      current_block = (Rpc - LABEL_27_31);
      goto continuation_9;

    case 20:
      current_block = (Rpc - LABEL_27_33);
      goto label_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_open_block_35)
DEFLABEL (integrate_open_block_23)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_46;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_46;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_45)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_44;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_44;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_43)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_42;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd48.Lng))))
    goto label_42;
  (Wrd42.Obj) = ((Wrd46.pObj) [5]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_41)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_40;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_40;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_39)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_13]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_27_11);
  (Rsp [4]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_15])));
  Rhp += 4;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd15 = Wrd8;
  (Wrd16.Obj) = (Rsp [5]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_40)
  (Wrd19.Obj) = (Rsp [6]);
  (Wrd20.Obj) = (current_block [OBJECT_27_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.Obj) = (current_block [OBJECT_27_3]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_27_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_27_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_27_15);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_57;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng))))
    goto label_57;
  (Wrd12.Obj) = ((Wrd18.pObj) [6]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_56)
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [5]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_27_17);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_55;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_55;
  (Wrd5.Obj) = ((Wrd15.pObj) [3]);

DEFLABEL (label_54)
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd90.uLng) == 10))
    goto label_53;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd89.Lng))))
    goto label_53;
  (Wrd30.Obj) = ((Wrd87.pObj) [4]);
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;

DEFLABEL (label_52)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_20]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [4]);
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_27]))));
  (* (--Rsp)) = (Wrd84.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_28]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_27_20);

DEFLABEL (label_51)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_24]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [4]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = ((Wrd38.pObj) [3]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_21]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.Obj) = ((Wrd38.pObj) [2]);
  if ((Wrd48.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd67.uLng) == 10))
    goto label_49;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd63.Lng))))
    goto label_49;
  (Wrd51.Obj) = ((Wrd61.pObj) [2]);

DEFLABEL (label_48)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_26]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_27_24);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [5]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_29])));
  Rhp += 3;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd16 = Wrd11;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd69.Obj) = (Rsp [7]);
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd68.Obj) = ((Wrd70.pObj) [2]);
  (Wrd71.Obj) = (current_block [OBJECT_27_5]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_25]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_31)
  (Wrd51.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_47;

DEFLABEL (label_53)
  (Wrd92.Obj) = (current_block [OBJECT_27_2]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_23]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_52;

DEFLABEL (label_55)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_27_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_22]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_27_4]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_27_21);
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (lambda_38)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_27_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_32]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_27_31);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_58;
  Rvl = (current_block [OBJECT_27_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd7.Obj) = (current_block [OBJECT_27_7]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_60;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_60;
  (Wrd8.Obj) = ((Wrd14.pObj) [3]);

DEFLABEL (label_59)
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_34]));

DEFLABEL (label_60)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_27_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_33]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_33)
  (Wrd8.Obj) = Rvl;
  goto label_59;

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_27_29);

DEFLABEL (lambda_15)
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
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define LABEL_28_9 9
#define LABEL_28_11 11
#define ENVIRONMENT_LABEL_28_3 23
#define DEBUGGING_LABEL_28_2 22
#define OBJECT_28_0 21
#define EXECUTE_CACHE_28_12 13
#define EXECUTE_CACHE_28_10 15
#define EXECUTE_CACHE_28_8 17
#define EXECUTE_CACHE_28_6 19
#define FREE_REFERENCES_LABEL_28_0 12
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_28_4);
      goto variable_unreferencedP_4;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_28_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_28_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (variable_unreferencedP_7)
DEFLABEL (variable_unreferencedP_4)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_28_0]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define LABEL_29_7 9
#define LABEL_29_8 11
#define LABEL_29_9 13
#define LABEL_29_10 15
#define TAG_29_11 6
#define LABEL_29_13 17
#define LABEL_29_16 19
#define TAG_29_17 8
#define LABEL_29_20 21
#define LABEL_29_22 23
#define LABEL_29_14 25
#define TAG_29_15 11
#define LABEL_29_26 27
#define LABEL_29_27 29
#define LABEL_29_28 31
#define LABEL_29_29 33
#define LABEL_29_19 35
#define LABEL_29_30 37
#define LABEL_29_31 39
#define LABEL_29_21 41
#define LABEL_29_23 43
#define LABEL_29_24 45
#define LABEL_29_33 47
#define LABEL_29_38 49
#define LABEL_29_40 51
#define LABEL_29_42 53
#define LABEL_29_43 55
#define ENVIRONMENT_LABEL_29_3 95
#define DEBUGGING_LABEL_29_2 94
#define OBJECT_29_10 93
#define OBJECT_29_9 92
#define OBJECT_29_8 91
#define OBJECT_29_7 90
#define OBJECT_29_6 89
#define OBJECT_29_5 88
#define OBJECT_29_4 87
#define OBJECT_29_3 86
#define OBJECT_29_2 85
#define OBJECT_29_1 84
#define OBJECT_29_0 83
#define EXECUTE_CACHE_29_44 57
#define EXECUTE_CACHE_29_41 59
#define EXECUTE_CACHE_29_39 61
#define EXECUTE_CACHE_29_37 63
#define EXECUTE_CACHE_29_36 65
#define EXECUTE_CACHE_29_35 67
#define EXECUTE_CACHE_29_32 69
#define EXECUTE_CACHE_29_34 71
#define EXECUTE_CACHE_29_25 73
#define EXECUTE_CACHE_29_18 75
#define EXECUTE_CACHE_29_12 77
#define FREE_REFERENCE_29_0 80
#define FREE_ASSIGNMENT_29_0 82
#define FREE_REFERENCES_LABEL_29_0 56
#define NUMBER_OF_LINKER_SECTIONS_29_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd98;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd88;
  machine_word Wrd35;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd85;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd42;
  machine_word Wrd54;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd58;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd71;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
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
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_29_4);
      goto integrate_procedure_33;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_35;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto label_36;

    case 3:
      current_block = (Rpc - LABEL_29_7);
      goto label_37;

    case 4:
      current_block = (Rpc - LABEL_29_8);
      goto label_38;

    case 5:
      current_block = (Rpc - LABEL_29_9);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_29_10);
      goto lambda_52;

    case 7:
      current_block = (Rpc - LABEL_29_13);
      goto label_40;

    case 8:
      current_block = (Rpc - LABEL_29_16);
      goto lambda_54;

    case 9:
      current_block = (Rpc - LABEL_29_20);
      goto label_41;

    case 10:
      current_block = (Rpc - LABEL_29_22);
      goto label_42;

    case 11:
      current_block = (Rpc - LABEL_29_14);
      goto swapB_53;

    case 12:
      current_block = (Rpc - LABEL_29_26);
      goto label_43;

    case 13:
      current_block = (Rpc - LABEL_29_27);
      goto label_44;

    case 14:
      current_block = (Rpc - LABEL_29_28);
      goto label_45;

    case 15:
      current_block = (Rpc - LABEL_29_29);
      goto continuation_19;

    case 16:
      current_block = (Rpc - LABEL_29_19);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_29_30);
      goto label_47;

    case 18:
      current_block = (Rpc - LABEL_29_31);
      goto label_46;

    case 19:
      current_block = (Rpc - LABEL_29_21);
      goto continuation_10;

    case 20:
      current_block = (Rpc - LABEL_29_23);
      goto continuation_8;

    case 21:
      current_block = (Rpc - LABEL_29_24);
      goto continuation_7;

    case 22:
      current_block = (Rpc - LABEL_29_33);
      goto continuation_17;

    case 23:
      current_block = (Rpc - LABEL_29_38);
      goto lambda_16;

    case 24:
      current_block = (Rpc - LABEL_29_40);
      goto continuation_14;

    case 25:
      current_block = (Rpc - LABEL_29_42);
      goto label_48;

    case 26:
      current_block = (Rpc - LABEL_29_43);
      goto label_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_procedure_51)
DEFLABEL (integrate_procedure_33)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_65;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_65;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_64)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_63;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_63;
  (Wrd23.Obj) = ((Wrd27.pObj) [6]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_62)
  (Wrd46.Obj) = (Rsp [4]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_61;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd45.Lng))))
    goto label_61;
  (Wrd39.Obj) = ((Wrd43.pObj) [5]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_60)
  (Wrd62.Obj) = (Rsp [5]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_59;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd61.Lng))))
    goto label_59;
  (Wrd55.Obj) = ((Wrd59.pObj) [4]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_58)
  (Wrd78.Obj) = (Rsp [6]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_57;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd77.Lng))))
    goto label_57;
  (Wrd71.Obj) = ((Wrd75.pObj) [3]);
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_56)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd87.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_10])));
  Rhp += 8;
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd87.pObj)));
  Wrd102 = Wrd87;
  (Wrd103.Obj) = (Rsp [7]);
  ((Wrd102.pObj) [2]) = (Wrd103.Obj);
  (Wrd101.Obj) = (Rsp [6]);
  ((Wrd102.pObj) [3]) = (Wrd101.Obj);
  (Wrd99.Obj) = (Rsp [5]);
  ((Wrd102.pObj) [4]) = (Wrd99.Obj);
  (Wrd97.Obj) = (Rsp [4]);
  ((Wrd102.pObj) [5]) = (Wrd97.Obj);
  (Wrd95.Obj) = (Rsp [3]);
  ((Wrd102.pObj) [6]) = (Wrd95.Obj);
  (Wrd93.Obj) = (Rsp [2]);
  ((Wrd102.pObj) [7]) = (Wrd93.Obj);
  (Wrd91.Obj) = (Rsp [1]);
  ((Wrd102.pObj) [8]) = (Wrd91.Obj);
  (Wrd89.Obj) = (Rsp [0]);
  ((Wrd102.pObj) [9]) = (Wrd89.Obj);
  (Rsp [7]) = (Wrd86.Obj);
  (Rsp [6]) = (Wrd91.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (label_57)
  (Wrd80.Obj) = (Rsp [6]);
  (Wrd81.Obj) = (current_block [OBJECT_29_5]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd64.Obj) = (Rsp [5]);
  (Wrd65.Obj) = (current_block [OBJECT_29_4]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd48.Obj) = (Rsp [4]);
  (Wrd49.Obj) = (current_block [OBJECT_29_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_29_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_29_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_29_10);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_67;
  Wrd6 = Wrd10;

DEFLABEL (label_66)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [8]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd61.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_14])));
  Rhp += 1;
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd61.pObj)));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd58.pObj) = (& (Rhp [-1]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd58.pObj)));
  (Rsp [1]) = (Wrd59.Obj);
  ((Wrd61.pObj) [2]) = (Wrd59.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_16])));
  Rhp += 8;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd50 = Wrd21;
  (Wrd53.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd50.pObj) [2]) = (Wrd53.Obj);
  (Wrd49.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd50.pObj) [3]) = (Wrd49.Obj);
  (Wrd45.Obj) = ((Wrd16.pObj) [4]);
  ((Wrd50.pObj) [4]) = (Wrd45.Obj);
  (Wrd41.Obj) = ((Wrd16.pObj) [5]);
  ((Wrd50.pObj) [5]) = (Wrd41.Obj);
  (Wrd37.Obj) = ((Wrd16.pObj) [6]);
  ((Wrd50.pObj) [6]) = (Wrd37.Obj);
  (Wrd33.Obj) = ((Wrd16.pObj) [7]);
  ((Wrd50.pObj) [7]) = (Wrd33.Obj);
  ((Wrd50.pObj) [8]) = (Wrd17.Obj);
  (Wrd25.Obj) = ((Wrd16.pObj) [9]);
  ((Wrd50.pObj) [9]) = (Wrd25.Obj);
  (Rsp [1]) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_18]));

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_13])), (Wrd7.pObj));

DEFLABEL (label_40)
  (Wrd6.Obj) = Rvl;
  goto label_66;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_29_16);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_80;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd20.Lng))))
    goto label_80;
  (Wrd12.Obj) = ((Wrd18.pObj) [8]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_79)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_21]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd53.Obj) = ((Wrd33.pObj) [9]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_78;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd50.Lng))))
    goto label_78;
  (Wrd42.Obj) = ((Wrd48.pObj) [5]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_77)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_23]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_24]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [7]);
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [5]);
  if ((Wrd70.Obj) == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd78.Obj) = (current_block [OBJECT_29_7]);
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (* (--Rsp)) = (Wrd74.Obj);
  goto label_68;

DEFLABEL (label_69)
  (Wrd85.Obj) = (current_block [OBJECT_29_7]);
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_68)
DEFLABEL (label_76)
  (Wrd79.Obj) = (Rsp [8]);
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [6]);
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd84.Obj) = ((Wrd80.pObj) [7]);
  (* (--Rsp)) = (Wrd84.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_25]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_29_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_37]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_29_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_36]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_29_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_35]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_29_19);
  (* (--Rsp)) = Rvl;
  (Wrd88.Obj) = (Rsp [1]);
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [9]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 10))
    goto label_75;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd87.Lng))))
    goto label_75;
  (Wrd9.Obj) = ((Wrd85.pObj) [4]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_72;

DEFLABEL (label_74)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_29]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_33]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [5]);
  if ((Wrd59.Obj) == ((SCHEME_OBJECT) 0))
    goto label_73;
  (Wrd67.Obj) = (current_block [OBJECT_29_7]);
  (* (Rhp++)) = (Wrd59.Obj);
  (* (Rhp++)) = (Wrd67.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd70.Obj) = ((Wrd58.pObj) [6]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd73.Obj) = ((Wrd58.pObj) [7]);
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_25]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_29_33);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_38]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_39]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_29_29);

DEFLABEL (label_72)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd12.pObj) [8]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd12.pObj) [9]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd38.Obj) = ((Wrd12.pObj) [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_71;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_71;
  (Wrd27.Obj) = ((Wrd33.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_70)
  (Wrd47.Obj) = (Rsp [5]);
  (Wrd49.Obj) = (Rsp [6]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [5]);
  (Rsp [5]) = (Wrd48.Obj);
  (Rsp [6]) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_32]));

DEFLABEL (label_71)
  (Wrd41.Obj) = (Rsp [5]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [2]);
  (Wrd43.Obj) = (current_block [OBJECT_29_9]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_31]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd76.Obj) = ((Wrd58.pObj) [6]);
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd79.Obj) = ((Wrd58.pObj) [7]);
  (* (--Rsp)) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_34]));

DEFLABEL (label_75)
  (Wrd93.Obj) = (Rsp [1]);
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd92.Obj) = ((Wrd94.pObj) [9]);
  (Wrd95.Obj) = (current_block [OBJECT_29_4]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_30]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_47)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  goto label_74;

DEFLABEL (label_78)
  (Wrd56.Obj) = (Rsp [4]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [9]);
  (Wrd58.Obj) = (current_block [OBJECT_29_3]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_22]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_29_6]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_20]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (swapB_53)
  CLOSURE_HEADER (LABEL_29_14);

DEFLABEL (swapB_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_89;

DEFLABEL (label_88)
  Wrd5 = Wrd9;

DEFLABEL (label_87)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_86;

DEFLABEL (label_85)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_84)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_83;

DEFLABEL (label_82)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_81)
  Rvl = (current_block [OBJECT_29_8]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_83)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_82;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_28])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_45)
  goto label_81;

DEFLABEL (label_86)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_85;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_27])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_44)
  goto label_84;

DEFLABEL (label_89)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_88;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_29_26])), (Wrd6.pObj));

DEFLABEL (label_43)
  (Wrd5.Obj) = Rvl;
  goto label_87;

DEFLABEL (lambda_55)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_29_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_41]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_29_40);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_90;
  Rvl = (current_block [OBJECT_29_8]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_90)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_94;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_94;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_93)
  (Wrd23.Obj) = (current_block [OBJECT_29_10]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_92;
  Wrd25 = Wrd29;

DEFLABEL (label_91)
  (Rsp [2]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_44]));

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_43])), (Wrd26.pObj));

DEFLABEL (label_49)
  (Wrd25.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_29_5]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_42]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_93;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_7 9
#define LABEL_30_8 11
#define ENVIRONMENT_LABEL_30_3 18
#define DEBUGGING_LABEL_30_2 17
#define OBJECT_30_2 16
#define OBJECT_30_1 15
#define OBJECT_30_0 14
#define FREE_REFERENCE_30_0 13
#define FREE_REFERENCES_LABEL_30_0 12
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_30_4);
      goto integrate_combination_3;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_30_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_combination_10)
DEFLABEL (integrate_combination_3)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_17)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_16;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_16;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_15)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_14;
  Wrd35 = Wrd39;

DEFLABEL (label_13)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_12;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_12;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_12;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (label_12)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_7])), (Wrd36.pObj));

DEFLABEL (label_7)
  (Wrd35.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd30.Obj) = (current_block [OBJECT_30_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (current_block [OBJECT_30_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 8
#define DEBUGGING_LABEL_31_2 7
#define EXECUTE_CACHE_31_5 5
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_6 5
#define LABEL_32_5 7
#define LABEL_32_8 9
#define LABEL_32_11 11
#define LABEL_32_9 13
#define TAG_32_10 5
#define LABEL_32_17 15
#define LABEL_32_18 17
#define LABEL_32_13 19
#define TAG_32_14 8
#define LABEL_32_21 21
#define LABEL_32_23 23
#define LABEL_32_16 25
#define LABEL_32_25 27
#define LABEL_32_26 29
#define LABEL_32_27 31
#define LABEL_32_22 33
#define LABEL_32_20 35
#define ENVIRONMENT_LABEL_32_3 70
#define DEBUGGING_LABEL_32_2 69
#define OBJECT_32_9 68
#define OBJECT_32_8 67
#define OBJECT_32_7 66
#define OBJECT_32_6 65
#define OBJECT_32_5 64
#define OBJECT_32_4 63
#define OBJECT_32_3 62
#define OBJECT_32_2 61
#define OBJECT_32_1 60
#define OBJECT_32_0 59
#define EXECUTE_CACHE_32_33 37
#define EXECUTE_CACHE_32_32 39
#define EXECUTE_CACHE_32_31 41
#define EXECUTE_CACHE_32_30 43
#define EXECUTE_CACHE_32_29 45
#define EXECUTE_CACHE_32_28 47
#define EXECUTE_CACHE_32_24 49
#define EXECUTE_CACHE_32_19 51
#define EXECUTE_CACHE_32_15 53
#define EXECUTE_CACHE_32_12 55
#define EXECUTE_CACHE_32_7 57
#define FREE_REFERENCES_LABEL_32_0 36
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd35;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd62;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd5;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_32_4);
      goto integrate_access_operator_25;

    case 1:
      current_block = (Rpc - LABEL_32_6);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_32_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_32_9);
      goto dont_integrate_35;

    case 6:
      current_block = (Rpc - LABEL_32_17);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_32_18);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_32_13);
      goto lambda_36;

    case 9:
      current_block = (Rpc - LABEL_32_21);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_32_23);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_32_16);
      goto continuation_22;

    case 12:
      current_block = (Rpc - LABEL_32_25);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_32_26);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_32_27);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_32_22);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_32_20);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_access_operator_34)
DEFLABEL (integrate_access_operator_25)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_41;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_41;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_40)
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_39;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_39;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_38)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd43.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_9])));
  Rhp += 6;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  Wrd41 = Wrd43;
  (Wrd42.Obj) = (Rsp [8]);
  ((Wrd41.pObj) [2]) = (Wrd42.Obj);
  (Wrd39.Obj) = (Rsp [7]);
  ((Wrd41.pObj) [3]) = (Wrd39.Obj);
  (Wrd36.Obj) = (Rsp [6]);
  ((Wrd41.pObj) [4]) = (Wrd36.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  ((Wrd41.pObj) [5]) = (Wrd33.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  ((Wrd41.pObj) [6]) = (Wrd30.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd41.pObj) [7]) = (Wrd27.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_13])));
  Rhp += 8;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd24 = Wrd9;
  (Wrd25.Obj) = (Rsp [8]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Wrd23.Obj) = (Rsp [7]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  ((Wrd24.pObj) [4]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  ((Wrd24.pObj) [5]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd24.pObj) [6]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd24.pObj) [7]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd24.pObj) [8]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [9]) = (Wrd11.Obj);
  (Rsp [5]) = (Wrd17.Obj);
  (Rsp [8]) = (Wrd13.Obj);
  (Rsp [6]) = (Wrd11.Obj);
  (Rsp [7]) = (Wrd8.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_15]));

DEFLABEL (label_37)
  (Wrd30.Obj) = (Rsp [0]);
  (Rsp [8]) = (Wrd30.Obj);
  Rsp = (& (Rsp [8]));
  goto dont_integrate_23;

DEFLABEL (label_39)
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.Obj) = (current_block [OBJECT_32_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (current_block [OBJECT_32_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (dont_integrate_35)
  CLOSURE_HEADER (LABEL_32_9);

DEFLABEL (dont_integrate_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd29.Obj) = ((Wrd9.pObj) [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_45;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd26.Lng))))
    goto label_45;
  (Wrd18.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_44)
  (Wrd51.Obj) = (Rsp [4]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [3]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_43;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd50.Lng))))
    goto label_43;
  (Wrd42.Obj) = ((Wrd48.pObj) [2]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_19]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_32_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (label_43)
  (Wrd56.Obj) = (Rsp [4]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [3]);
  (Wrd58.Obj) = (current_block [OBJECT_32_4]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_18]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [3]);
  (Wrd34.Obj) = (current_block [OBJECT_32_3]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_17]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_32_13);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_46;
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd89.Obj) = ((Wrd91.pObj) [8]);
  (Rsp [2]) = (Wrd89.Obj);
  Rsp = (& (Rsp [2]));
  goto dont_integrate_23;

DEFLABEL (label_46)
  if ((Wrd5.Obj) == (current_block [OBJECT_32_5]))
    goto label_52;
  if ((Wrd5.Obj) == (current_block [OBJECT_32_6]))
    goto label_49;
  if (! ((Wrd5.Obj) == (current_block [OBJECT_32_7])))
    goto label_48;

DEFLABEL (label_47)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_25]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_26]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_27]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_28]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_32_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_33]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_32_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_32]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_32_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Rsp [4]) = Rvl;
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [5]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [5]);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [3]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_31]));

DEFLABEL (label_48)
  if ((Wrd5.Obj) == (current_block [OBJECT_32_8]))
    goto label_47;
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_32_9]);
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_29]));

DEFLABEL (label_49)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_22]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [9]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_51;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd43.Lng))))
    goto label_51;
  (Wrd35.Obj) = ((Wrd41.pObj) [3]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_24]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_32_22);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [8]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto dont_integrate_23;

DEFLABEL (label_51)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [9]);
  (Wrd51.Obj) = (current_block [OBJECT_32_3]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_23]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_20]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [3]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 10))
    goto label_55;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd70.Lng))))
    goto label_55;
  (Wrd62.Obj) = ((Wrd68.pObj) [3]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_54)
  (Wrd82.Obj) = (Rsp [2]);
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [2]);
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd87.Obj) = ((Wrd83.pObj) [7]);
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd88.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd88.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_32_20);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [5]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [3]) = Rvl;
  (Wrd11.Obj) = ((Wrd9.pObj) [6]);
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (label_53)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [8]);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [3]));
  goto dont_integrate_23;

DEFLABEL (label_55)
  (Wrd76.Obj) = (Rsp [1]);
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd75.Obj) = ((Wrd77.pObj) [3]);
  (Wrd78.Obj) = (current_block [OBJECT_32_3]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_21]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define ENVIRONMENT_LABEL_33_3 17
#define DEBUGGING_LABEL_33_2 16
#define OBJECT_33_0 15
#define EXECUTE_CACHE_33_9 9
#define EXECUTE_CACHE_33_8 11
#define EXECUTE_CACHE_33_6 13
#define FREE_REFERENCES_LABEL_33_0 8
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 8
#define DEBUGGING_LABEL_34_2 7
#define EXECUTE_CACHE_34_5 5
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 8
#define DEBUGGING_LABEL_35_2 7
#define EXECUTE_CACHE_35_5 5
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_7 5
#define LABEL_36_8 7
#define LABEL_36_9 9
#define LABEL_36_10 11
#define LABEL_36_11 13
#define LABEL_36_13 15
#define LABEL_36_14 17
#define LABEL_36_15 19
#define LABEL_36_16 21
#define LABEL_36_18 23
#define LABEL_36_19 25
#define LABEL_36_5 27
#define LABEL_36_22 29
#define LABEL_36_25 31
#define LABEL_36_21 33
#define LABEL_36_27 35
#define LABEL_36_29 37
#define LABEL_36_32 39
#define LABEL_36_33 41
#define LABEL_36_26 43
#define ENVIRONMENT_LABEL_36_3 80
#define DEBUGGING_LABEL_36_2 79
#define OBJECT_36_9 78
#define OBJECT_36_8 77
#define OBJECT_36_7 76
#define OBJECT_36_6 75
#define OBJECT_36_5 74
#define OBJECT_36_4 73
#define OBJECT_36_3 72
#define OBJECT_36_2 71
#define OBJECT_36_1 70
#define OBJECT_36_0 69
#define EXECUTE_CACHE_36_35 45
#define EXECUTE_CACHE_36_34 47
#define EXECUTE_CACHE_36_31 49
#define EXECUTE_CACHE_36_30 51
#define EXECUTE_CACHE_36_28 53
#define EXECUTE_CACHE_36_24 55
#define EXECUTE_CACHE_36_23 57
#define EXECUTE_CACHE_36_20 59
#define EXECUTE_CACHE_36_17 61
#define EXECUTE_CACHE_36_12 63
#define EXECUTE_CACHE_36_6 65
#define FREE_REFERENCE_36_0 68
#define FREE_REFERENCES_LABEL_36_0 44
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd51;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd59;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd85;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd117;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd102;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd109;
  machine_word Wrd101;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd96;
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
      current_block = (Rpc - LABEL_36_4);
      goto lambda_21;

    case 1:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_36_8);
      goto label_33;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto label_34;

    case 4:
      current_block = (Rpc - LABEL_36_10);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_36_11);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_36_13);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_36_14);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_36_15);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_36_16);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_36_18);
      goto continuation_1;

    case 11:
      current_block = (Rpc - LABEL_36_19);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 13:
      current_block = (Rpc - LABEL_36_22);
      goto label_23;

    case 14:
      current_block = (Rpc - LABEL_36_25);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_36_21);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_36_27);
      goto label_28;

    case 17:
      current_block = (Rpc - LABEL_36_29);
      goto label_25;

    case 18:
      current_block = (Rpc - LABEL_36_32);
      goto label_26;

    case 19:
      current_block = (Rpc - LABEL_36_33);
      goto label_27;

    case 20:
      current_block = (Rpc - LABEL_36_26);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_36)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_36_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_24]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_13]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [6]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_66;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_65)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_36_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd53.Obj) = (Rsp [6]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_64;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [0]);

DEFLABEL (label_63)
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd66.uLng) == 10))
    goto label_62;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd65.Lng))))
    goto label_62;
  (Wrd59.Obj) = ((Wrd63.pObj) [5]);

DEFLABEL (label_61)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_60;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (* (--Rsp)) = (Wrd73.Obj);

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_36_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (current_block [OBJECT_36_4]);
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_58;
  Wrd85 = Wrd89;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd85.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_36_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd96.Obj) = (Rsp [5]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_41;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd93.Obj) = ((Wrd95.pObj) [0]);

DEFLABEL (label_40)
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd109.uLng) == 10))
    goto label_39;
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [0]);
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd108.Lng))))
    goto label_39;
  (Wrd102.Obj) = ((Wrd106.pObj) [5]);

DEFLABEL (label_38)
  (Rsp [5]) = (Wrd102.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd119.Obj) = (Rsp [0]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if (! ((Wrd120.uLng) == 1))
    goto label_37;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  Rvl = ((Wrd117.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 1);

DEFLABEL (label_39)
  (Wrd111.Obj) = (current_block [OBJECT_36_2]);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_34)
  (Wrd102.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 1);

DEFLABEL (label_33)
  (Wrd93.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_21]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_56;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd23.Lng))))
    goto label_56;
  (Wrd17.Obj) = ((Wrd21.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_55)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_36_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_51;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_51;
  (Wrd10.Obj) = ((Wrd16.pObj) [3]);

DEFLABEL (label_50)
  if (! ((Wrd10.Obj) == (current_block [OBJECT_36_8])))
    goto label_49;
  (Wrd51.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_30]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_36_25);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_48)
  (Wrd29.Obj) = (Rsp [0]);
  if (! ((Wrd29.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_43;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_31]));

DEFLABEL (label_43)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_47;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_46)
  (Rsp [5]) = (Wrd31.Obj);
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_45;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_44)
  (Rsp [6]) = (Wrd40.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_34]));

DEFLABEL (label_45)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_33]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_9]), 1);

DEFLABEL (label_27)
  (Wrd40.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_32]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 1);

DEFLABEL (label_26)
  (Wrd31.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_48;

DEFLABEL (label_51)
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.Obj) = (current_block [OBJECT_36_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_29]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_25)
  (Wrd10.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_26]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd64.Obj) = (Rsp [5]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 10))
    goto label_54;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd63.Lng))))
    goto label_54;
  (Wrd57.Obj) = ((Wrd61.pObj) [3]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_53)
  (Wrd71.Obj) = (current_block [OBJECT_36_7]);
  (* (--Rsp)) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_28]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_36_26);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_35]));

DEFLABEL (label_54)
  (Wrd66.Obj) = (Rsp [5]);
  (Wrd67.Obj) = (current_block [OBJECT_36_5]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_27]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd26.Obj) = (Rsp [5]);
  (Wrd27.Obj) = (current_block [OBJECT_36_5]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_22]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_11])), (Wrd86.pObj));

DEFLABEL (label_32)
  (Wrd85.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_16]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd68.Obj) = (current_block [OBJECT_36_2]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_15]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_30)
  (Wrd59.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_14]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 1);

DEFLABEL (label_29)
  (Wrd50.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_19]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_65;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 8
#define DEBUGGING_LABEL_37_2 7
#define EXECUTE_CACHE_37_5 5
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto integrate_primitive_operator_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_primitive_operator_3)
DEFLABEL (integrate_primitive_operator_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 8
#define DEBUGGING_LABEL_38_2 7
#define EXECUTE_CACHE_38_5 5
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define ENVIRONMENT_LABEL_39_3 17
#define DEBUGGING_LABEL_39_2 16
#define OBJECT_39_0 15
#define EXECUTE_CACHE_39_9 9
#define EXECUTE_CACHE_39_8 11
#define EXECUTE_CACHE_39_6 13
#define FREE_REFERENCES_LABEL_39_0 8
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define ENVIRONMENT_LABEL_40_3 8
#define DEBUGGING_LABEL_40_2 7
#define EXECUTE_CACHE_40_5 5
#define FREE_REFERENCES_LABEL_40_0 4
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 9
#define DEBUGGING_LABEL_41_2 8
#define OBJECT_41_0 7
#define EXECUTE_CACHE_41_5 5
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [5]) = (Wrd5.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define ENVIRONMENT_LABEL_42_3 8
#define DEBUGGING_LABEL_42_2 7
#define EXECUTE_CACHE_42_5 5
#define FREE_REFERENCES_LABEL_42_0 4
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define ENVIRONMENT_LABEL_43_3 12
#define DEBUGGING_LABEL_43_2 11
#define EXECUTE_CACHE_43_7 7
#define EXECUTE_CACHE_43_6 9
#define FREE_REFERENCES_LABEL_43_0 6
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_43_4);
      goto integrate_procedure_operator_1;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_procedure_operator_4)
DEFLABEL (integrate_procedure_operator_1)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd6.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define ENVIRONMENT_LABEL_44_3 8
#define DEBUGGING_LABEL_44_2 7
#define EXECUTE_CACHE_44_5 5
#define FREE_REFERENCES_LABEL_44_0 4
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 8
#define DEBUGGING_LABEL_45_2 7
#define EXECUTE_CACHE_45_5 5
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_6 7
#define TAG_46_7 2
#define LABEL_46_8 9
#define TAG_46_9 3
#define LABEL_46_14 11
#define LABEL_46_16 13
#define LABEL_46_11 15
#define LABEL_46_18 17
#define LABEL_46_15 19
#define LABEL_46_13 21
#define LABEL_46_22 23
#define LABEL_46_24 25
#define ENVIRONMENT_LABEL_46_3 54
#define DEBUGGING_LABEL_46_2 53
#define OBJECT_46_7 52
#define OBJECT_46_6 51
#define OBJECT_46_5 50
#define OBJECT_46_4 49
#define OBJECT_46_3 48
#define OBJECT_46_2 47
#define OBJECT_46_1 46
#define OBJECT_46_0 45
#define EXECUTE_CACHE_46_26 27
#define EXECUTE_CACHE_46_25 29
#define EXECUTE_CACHE_46_23 31
#define EXECUTE_CACHE_46_21 33
#define EXECUTE_CACHE_46_20 35
#define EXECUTE_CACHE_46_19 37
#define EXECUTE_CACHE_46_17 39
#define EXECUTE_CACHE_46_12 41
#define EXECUTE_CACHE_46_10 43
#define FREE_REFERENCES_LABEL_46_0 26
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd33;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd65;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd60;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_46_4);
      goto integrate_reference_operator_20;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_46_6);
      goto lambda_27;

    case 3:
      current_block = (Rpc - LABEL_46_8);
      goto lambda_28;

    case 4:
      current_block = (Rpc - LABEL_46_14);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_46_16);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_46_11);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_46_18);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_46_15);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_46_13);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_46_22);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_46_24);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_reference_operator_26)
DEFLABEL (integrate_reference_operator_20)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_30;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_30;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_29)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_6])));
  Rhp += 5;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd31 = Wrd22;
  (Wrd32.Obj) = (Rsp [6]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  ((Wrd31.pObj) [4]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd31.pObj) [5]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  ((Wrd31.pObj) [6]) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_8])));
  Rhp += 8;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  Wrd50 = Wrd35;
  ((Wrd50.pObj) [2]) = (Wrd32.Obj);
  ((Wrd50.pObj) [3]) = (Wrd30.Obj);
  ((Wrd50.pObj) [4]) = (Wrd28.Obj);
  (Wrd45.Obj) = (Rsp [4]);
  ((Wrd50.pObj) [5]) = (Wrd45.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  ((Wrd50.pObj) [6]) = (Wrd43.Obj);
  ((Wrd50.pObj) [7]) = (Wrd26.Obj);
  ((Wrd50.pObj) [8]) = (Wrd24.Obj);
  ((Wrd50.pObj) [9]) = (Wrd21.Obj);
  (Rsp [4]) = (Wrd43.Obj);
  (Rsp [7]) = (Wrd21.Obj);
  (Rsp [5]) = (Wrd24.Obj);
  (Rsp [6]) = (Wrd34.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (label_30)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (current_block [OBJECT_46_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_46_6);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_21]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_46_8);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_31;
  (Wrd93.Obj) = (Rsp [0]);
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd92.Obj) = ((Wrd94.pObj) [9]);
  (Rsp [2]) = (Wrd92.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_2;

DEFLABEL (label_31)
  if ((Wrd5.Obj) == (current_block [OBJECT_46_2]))
    goto label_38;
  if ((Wrd5.Obj) == (current_block [OBJECT_46_4]))
    goto label_35;
  if (! ((Wrd5.Obj) == (current_block [OBJECT_46_5])))
    goto label_34;

DEFLABEL (label_33)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [5]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = ((Wrd22.pObj) [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = ((Wrd22.pObj) [7]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_46_18);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [9]);
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_2;

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_46_22);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [5]) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [5]);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [3]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_25]));

DEFLABEL (label_34)
  if ((Wrd5.Obj) == (current_block [OBJECT_46_6]))
    goto label_33;
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_46_7]);
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_20]));

DEFLABEL (label_35)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [8]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_37;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd46.Lng))))
    goto label_37;
  (Wrd38.Obj) = ((Wrd44.pObj) [3]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_46_15);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [9]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_2;

DEFLABEL (label_37)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [8]);
  (Wrd54.Obj) = (current_block [OBJECT_46_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_16]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [3]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 10))
    goto label_41;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd73.Lng))))
    goto label_41;
  (Wrd65.Obj) = ((Wrd71.pObj) [3]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_40)
  (Wrd85.Obj) = (Rsp [2]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd90.Obj) = ((Wrd86.pObj) [7]);
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd91.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_46_13);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [9]);
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_2;

DEFLABEL (label_39)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_23]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_46_24);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [5]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd7.pObj) [6]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_26]));

DEFLABEL (label_41)
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd78.Obj) = ((Wrd80.pObj) [3]);
  (Wrd81.Obj) = (current_block [OBJECT_46_3]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_14]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define ENVIRONMENT_LABEL_47_3 8
#define DEBUGGING_LABEL_47_2 7
#define EXECUTE_CACHE_47_5 5
#define FREE_REFERENCES_LABEL_47_0 4
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_47_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define ENVIRONMENT_LABEL_48_3 17
#define DEBUGGING_LABEL_48_2 16
#define OBJECT_48_0 15
#define EXECUTE_CACHE_48_9 9
#define EXECUTE_CACHE_48_8 11
#define EXECUTE_CACHE_48_6 13
#define FREE_REFERENCES_LABEL_48_0 8
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_48_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_7);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_9 5
#define LABEL_49_5 7
#define LABEL_49_11 9
#define LABEL_49_6 11
#define LABEL_49_7 13
#define LABEL_49_15 15
#define LABEL_49_13 17
#define ENVIRONMENT_LABEL_49_3 30
#define DEBUGGING_LABEL_49_2 29
#define EXECUTE_CACHE_49_16 19
#define EXECUTE_CACHE_49_14 21
#define EXECUTE_CACHE_49_12 23
#define EXECUTE_CACHE_49_10 25
#define EXECUTE_CACHE_49_8 27
#define FREE_REFERENCES_LABEL_49_0 18
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_49_4);
      goto integrate_combination_default_11;

    case 1:
      current_block = (Rpc - LABEL_49_9);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_49_11);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_49_6);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_49_15);
      goto lambda_0;

    case 7:
      current_block = (Rpc - LABEL_49_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_combination_default_14)
DEFLABEL (integrate_combination_default_11)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_49_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd7.pObj) = (& (Rsp [2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto lambda_0;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_49_6);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_18)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_49_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd11.pObj) = (& (Rsp [3]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (Rsp [1]) = (Wrd13.Obj);
  goto lambda_0;

DEFLABEL (label_16)
  (Wrd5.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_17)
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_10]));

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_49_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd12.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = (& (Rsp [4]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  goto lambda_0;

DEFLABEL (label_20)
  (Wrd18.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_18;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (Wrd5.Obj) = Rvl;
  goto label_17;

DEFLABEL (lambda_15)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_49_15);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [5]);
  (Rsp [4]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_16]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_6 7
#define LABEL_50_10 9
#define LABEL_50_8 11
#define LABEL_50_12 13
#define LABEL_50_13 15
#define LABEL_50_17 17
#define LABEL_50_15 19
#define LABEL_50_18 21
#define LABEL_50_20 23
#define LABEL_50_19 25
#define LABEL_50_21 27
#define LABEL_50_22 29
#define LABEL_50_24 31
#define LABEL_50_25 33
#define LABEL_50_23 35
#define LABEL_50_27 37
#define ENVIRONMENT_LABEL_50_3 62
#define DEBUGGING_LABEL_50_2 61
#define OBJECT_50_9 60
#define OBJECT_50_8 59
#define OBJECT_50_7 58
#define OBJECT_50_6 57
#define OBJECT_50_5 56
#define OBJECT_50_4 55
#define OBJECT_50_3 54
#define OBJECT_50_2 53
#define OBJECT_50_1 52
#define OBJECT_50_0 51
#define EXECUTE_CACHE_50_26 39
#define EXECUTE_CACHE_50_16 41
#define EXECUTE_CACHE_50_14 43
#define EXECUTE_CACHE_50_11 45
#define EXECUTE_CACHE_50_9 47
#define EXECUTE_CACHE_50_7 49
#define FREE_REFERENCES_LABEL_50_0 38
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd27;
  machine_word Wrd62;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_50_4);
      goto integrate_hack_applyP_27;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_50_10);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_50_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_50_12);
      goto check_26;

    case 6:
      current_block = (Rpc - LABEL_50_13);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_50_17);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_50_15);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_50_18);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_50_20);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_50_19);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_50_21);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_50_22);
      goto label_33;

    case 14:
      current_block = (Rpc - LABEL_50_24);
      goto label_34;

    case 15:
      current_block = (Rpc - LABEL_50_25);
      goto label_35;

    case 16:
      current_block = (Rpc - LABEL_50_23);
      goto continuation_18;

    case 17:
      current_block = (Rpc - LABEL_50_27);
      goto label_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_hack_applyP_38)
DEFLABEL (integrate_hack_applyP_27)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_50_0])))
    goto label_40;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_6);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_43;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_42)
  goto check_26;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_50_1])))
    goto label_41;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_50_8);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_11]));

DEFLABEL (label_43)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (check_39)
DEFLABEL (check_26)
  INTERRUPT_CHECK (26, LABEL_50_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_50_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_62;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_15]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_50_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;
  Rvl = (current_block [OBJECT_50_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_61;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_61;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_60)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_19]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_50_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_57;

DEFLABEL (label_56)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_20]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_50_20);
  if (Rvl == (current_block [OBJECT_50_6]))
    goto label_45;
  Rvl = (current_block [OBJECT_50_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_55;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd36.Lng))))
    goto label_55;
  (Wrd28.Obj) = ((Wrd34.pObj) [5]);

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_23]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_53;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_52)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_51;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_50)
  goto check_26;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_50_23);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_50_1]);
  if (Rvl == (Wrd6.Obj))
    goto label_49;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_48;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_47)
  (Wrd20.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));

DEFLABEL (label_46)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_27]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 1);

DEFLABEL (label_36)
  (Wrd7.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  Rvl = (Wrd6.Obj);
  goto label_46;

DEFLABEL (label_51)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_25]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_24]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_9]), 1);

DEFLABEL (label_34)
  (Wrd47.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_50_8]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_22]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_4]), 2);

DEFLABEL (label_33)
  (Wrd28.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_59;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_59;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_58)
  if ((Wrd7.Obj) == (current_block [OBJECT_50_7]))
    goto label_45;
  goto label_56;

DEFLABEL (label_59)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_50_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_21]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_4]), 2);

DEFLABEL (label_32)
  (Wrd7.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_50_5]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_4]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_67;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_67;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_66)
  (Wrd23.Obj) = (current_block [OBJECT_50_0]);
  if ((Wrd7.Obj) == (Wrd23.Obj))
    goto label_64;
  Rvl = (current_block [OBJECT_50_1]);
  goto label_63;

DEFLABEL (label_64)
  Rvl = (Wrd23.Obj);

DEFLABEL (label_63)
DEFLABEL (label_65)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_50_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_4]), 2);

DEFLABEL (label_30)
  (Wrd7.Obj) = Rvl;
  goto label_66;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_6 5
#define LABEL_51_5 7
#define LABEL_51_8 9
#define LABEL_51_10 11
#define LABEL_51_11 13
#define LABEL_51_16 15
#define LABEL_51_15 17
#define LABEL_51_18 19
#define LABEL_51_21 21
#define LABEL_51_13 23
#define LABEL_51_24 25
#define LABEL_51_19 27
#define TAG_51_20 12
#define LABEL_51_29 29
#define LABEL_51_25 31
#define LABEL_51_32 33
#define LABEL_51_22 35
#define LABEL_51_36 37
#define LABEL_51_27 39
#define LABEL_51_28 41
#define LABEL_51_30 43
#define LABEL_51_39 45
#define LABEL_51_41 47
#define LABEL_51_43 49
#define LABEL_51_31 51
#define LABEL_51_34 53
#define TAG_51_35 25
#define LABEL_51_38 55
#define LABEL_51_46 57
#define LABEL_51_42 59
#define LABEL_51_49 61
#define LABEL_51_44 63
#define LABEL_51_47 65
#define TAG_51_48 31
#define LABEL_51_50 67
#define LABEL_51_51 69
#define ENVIRONMENT_LABEL_51_3 105
#define DEBUGGING_LABEL_51_2 104
#define OBJECT_51_6 103
#define OBJECT_51_5 102
#define OBJECT_51_4 101
#define OBJECT_51_3 100
#define OBJECT_51_2 99
#define OBJECT_51_1 98
#define OBJECT_51_0 97
#define EXECUTE_CACHE_51_52 71
#define EXECUTE_CACHE_51_45 73
#define EXECUTE_CACHE_51_40 75
#define EXECUTE_CACHE_51_37 77
#define EXECUTE_CACHE_51_33 79
#define EXECUTE_CACHE_51_26 81
#define EXECUTE_CACHE_51_23 83
#define EXECUTE_CACHE_51_17 85
#define EXECUTE_CACHE_51_14 87
#define EXECUTE_CACHE_51_12 89
#define EXECUTE_CACHE_51_9 91
#define EXECUTE_CACHE_51_7 93
#define FREE_REFERENCE_51_0 96
#define FREE_REFERENCES_LABEL_51_0 70
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_51_4);
      goto integrate_compound_operator_39;

    case 1:
      current_block = (Rpc - LABEL_51_6);
      goto label_41;

    case 2:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_51_8);
      goto lambda_1;

    case 4:
      current_block = (Rpc - LABEL_51_10);
      goto scan_operator_38;

    case 5:
      current_block = (Rpc - LABEL_51_11);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_51_16);
      goto label_42;

    case 7:
      current_block = (Rpc - LABEL_51_15);
      goto continuation_28;

    case 8:
      current_block = (Rpc - LABEL_51_18);
      goto label_43;

    case 9:
      current_block = (Rpc - LABEL_51_21);
      goto label_44;

    case 10:
      current_block = (Rpc - LABEL_51_13);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_51_24);
      goto label_45;

    case 12:
      current_block = (Rpc - LABEL_51_19);
      goto lambda_56;

    case 13:
      current_block = (Rpc - LABEL_51_29);
      goto scan_body_7;

    case 14:
      current_block = (Rpc - LABEL_51_25);
      goto continuation_22;

    case 15:
      current_block = (Rpc - LABEL_51_32);
      goto label_46;

    case 16:
      current_block = (Rpc - LABEL_51_22);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_51_36);
      goto label_47;

    case 18:
      current_block = (Rpc - LABEL_51_27);
      goto continuation_34;

    case 19:
      current_block = (Rpc - LABEL_51_28);
      goto continuation_33;

    case 20:
      current_block = (Rpc - LABEL_51_30);
      goto continuation_2;

    case 21:
      current_block = (Rpc - LABEL_51_39);
      goto label_48;

    case 22:
      current_block = (Rpc - LABEL_51_41);
      goto lambda_20;

    case 23:
      current_block = (Rpc - LABEL_51_43);
      goto label_49;

    case 24:
      current_block = (Rpc - LABEL_51_31);
      goto continuation_24;

    case 25:
      current_block = (Rpc - LABEL_51_34);
      goto lambda_58;

    case 26:
      current_block = (Rpc - LABEL_51_38);
      goto continuation_4;

    case 27:
      current_block = (Rpc - LABEL_51_46);
      goto label_50;

    case 28:
      current_block = (Rpc - LABEL_51_42);
      goto continuation_15;

    case 29:
      current_block = (Rpc - LABEL_51_49);
      goto label_51;

    case 30:
      current_block = (Rpc - LABEL_51_44);
      goto continuation_12;

    case 31:
      current_block = (Rpc - LABEL_51_47);
      goto lambda_60;

    case 32:
      current_block = (Rpc - LABEL_51_50);
      goto continuation_18;

    case 33:
      current_block = (Rpc - LABEL_51_51);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_compound_operator_53)
DEFLABEL (integrate_compound_operator_39)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_63;
  Wrd8 = Wrd12;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (Rsp [1]) = (Wrd7.Obj);
  goto scan_operator_38;

DEFLABEL (label_61)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_6])), (Wrd9.pObj));

DEFLABEL (label_41)
  (Wrd8.Obj) = Rvl;
  goto label_62;

DEFLABEL (lambda_54)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_51_8);
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (scan_operator_55)
DEFLABEL (scan_operator_38)
  INTERRUPT_CHECK (26, LABEL_51_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_51_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_74;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_13]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_51_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_67;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_22]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_51_22);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_64;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_64)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_34])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_66;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd22.Lng))))
    goto label_66;
  (Wrd14.Obj) = ((Wrd20.pObj) [4]);

DEFLABEL (label_65)
  (Rsp [0]) = (Wrd14.Obj);
  goto scan_body_7;

DEFLABEL (label_66)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_51_4]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_36]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_47)
  (Wrd14.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_67)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_73;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_73;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_72)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_25]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_26]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_51_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto lambda_20;

DEFLABEL (label_68)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_31]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_71;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_71;
  (Wrd12.Obj) = ((Wrd16.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_70)
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_33]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_51_31);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  goto lambda_20;

DEFLABEL (label_69)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_51_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_32]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_51_4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_24]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_74)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_80;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_80;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_79)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_17]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_51_15);
  (* (--Rsp)) = Rvl;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd9.uLng) == 1))
    goto label_78;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_77)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_19])));
  Rhp += 3;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd21 = Wrd16;
  (Wrd22.Obj) = (Rsp [3]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd21.pObj) [4]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_76;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_75)
  (Rsp [1]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  goto scan_body_7;

DEFLABEL (label_76)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_21]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_3]), 1);

DEFLABEL (label_44)
  (Wrd24.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_51_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_16]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_51_19);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [4]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_17]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_51_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_37]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_51_27);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  goto pop_return;

DEFLABEL (scan_body_57)
DEFLABEL (scan_body_7)
  INTERRUPT_CHECK (26, LABEL_51_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_26]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_30);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_81;
  goto scan_operator_38;

DEFLABEL (label_81)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_38]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_86;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd18.Lng))))
    goto label_86;
  (Wrd12.Obj) = ((Wrd16.pObj) [8]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_85)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_40]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_51_38);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_84;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_84;
  (Wrd11.Obj) = ((Wrd15.pObj) [8]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_83)
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  goto pop_return;

DEFLABEL (label_84)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_51_6]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_46]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_51_6]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_39]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (lambda_59)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_51_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_91;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_91;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_90)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_40]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_51_42);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_87;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_87)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_48);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_47])));
  Rhp += 3;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd16 = Wrd11;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_89;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd26.Lng))))
    goto label_89;
  (Wrd18.Obj) = ((Wrd24.pObj) [8]);

DEFLABEL (label_88)
  (Rsp [1]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto scan_body_7;

DEFLABEL (label_89)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (current_block [OBJECT_51_6]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_49]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_51)
  (Wrd18.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_51_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_43]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_51_34);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_45]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_51_44);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  goto pop_return;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_51_47);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_51]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_51_51);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_52]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_51_50);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define ENVIRONMENT_LABEL_52_3 15
#define DEBUGGING_LABEL_52_2 14
#define OBJECT_52_2 13
#define OBJECT_52_1 12
#define OBJECT_52_0 11
#define EXECUTE_CACHE_52_7 9
#define FREE_REFERENCES_LABEL_52_0 8
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_52_4);
      goto combination_with_operator_2;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (combination_with_operator_7)
DEFLABEL (combination_with_operator_2)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_9;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd30.Lng))))
    goto label_9;
  (Wrd22.Obj) = ((Wrd28.pObj) [5]);

DEFLABEL (label_8)
  (Wrd38.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd38.Obj);
  (Rsp [3]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_7]));

DEFLABEL (label_9)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (current_block [OBJECT_52_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_5)
  (Wrd22.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_52_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define LABEL_53_6 7
#define ENVIRONMENT_LABEL_53_3 15
#define DEBUGGING_LABEL_53_2 14
#define OBJECT_53_2 13
#define OBJECT_53_1 12
#define OBJECT_53_0 11
#define EXECUTE_CACHE_53_7 9
#define FREE_REFERENCES_LABEL_53_0 8
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_53_4);
      goto declaration_with_expression_2;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_53_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declaration_with_expression_7)
DEFLABEL (declaration_with_expression_2)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_9;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_9;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

DEFLABEL (label_9)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_53_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_53_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_6 5
#define LABEL_54_7 7
#define LABEL_54_5 9
#define LABEL_54_10 11
#define LABEL_54_11 13
#define LABEL_54_12 15
#define LABEL_54_9 17
#define LABEL_54_13 19
#define LABEL_54_14 21
#define LABEL_54_15 23
#define LABEL_54_16 25
#define LABEL_54_17 27
#define LABEL_54_18 29
#define LABEL_54_19 31
#define ENVIRONMENT_LABEL_54_3 49
#define DEBUGGING_LABEL_54_2 48
#define OBJECT_54_6 47
#define OBJECT_54_5 46
#define OBJECT_54_4 45
#define OBJECT_54_3 44
#define OBJECT_54_2 43
#define OBJECT_54_1 42
#define OBJECT_54_0 41
#define EXECUTE_CACHE_54_21 33
#define EXECUTE_CACHE_54_20 35
#define EXECUTE_CACHE_54_8 37
#define FREE_REFERENCE_54_0 40
#define FREE_REFERENCES_LABEL_54_0 32
#define NUMBER_OF_LINKER_SECTIONS_54_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd107;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd93;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd77;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_54_4);
      goto procedure_with_body_13;

    case 1:
      current_block = (Rpc - LABEL_54_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_54_7);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_54_10);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_54_11);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_54_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_54_9);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_54_13);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_54_14);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_54_15);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_54_16);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_54_17);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_54_18);
      goto label_24;

    case 14:
      current_block = (Rpc - LABEL_54_19);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure_with_body_27)
DEFLABEL (procedure_with_body_13)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_51;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_51;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_50)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_49;
  Wrd24 = Wrd28;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_47;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_47;
  (Wrd10.Obj) = ((Wrd14.pObj) [6]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_46)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_45;
  Wrd24 = Wrd28;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_54_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_43;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_43;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_42)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_21]));

DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_41)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_40;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd35.Lng))))
    goto label_40;
  (Wrd29.Obj) = ((Wrd33.pObj) [6]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_39)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_38;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd51.Lng))))
    goto label_38;
  (Wrd45.Obj) = ((Wrd49.pObj) [5]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_37)
  (Wrd68.Obj) = (Rsp [2]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 10))
    goto label_36;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd67.Lng))))
    goto label_36;
  (Wrd61.Obj) = ((Wrd65.pObj) [4]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_35)
  (Wrd84.Obj) = (Rsp [3]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 10))
    goto label_34;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd83.Lng))))
    goto label_34;
  (Wrd77.Obj) = ((Wrd81.pObj) [3]);
  (* (--Rsp)) = (Wrd77.Obj);

DEFLABEL (label_33)
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 10))
    goto label_32;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd99.Lng))))
    goto label_32;
  (Wrd93.Obj) = ((Wrd97.pObj) [2]);
  (* (--Rsp)) = (Wrd93.Obj);

DEFLABEL (label_31)
  (Wrd116.Obj) = (Rsp [5]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 10))
    goto label_30;
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd114.Obj) = ((Wrd113.pObj) [0]);
  (Wrd115.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd115.Lng))))
    goto label_30;
  (Wrd107.Obj) = ((Wrd113.pObj) [7]);

DEFLABEL (label_29)
  (Rsp [5]) = (Wrd107.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_20]));

DEFLABEL (label_30)
  (Wrd118.Obj) = (Rsp [5]);
  (Wrd119.Obj) = (current_block [OBJECT_54_3]);
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_19]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_25)
  (Wrd107.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd102.Obj) = (Rsp [4]);
  (Wrd103.Obj) = (current_block [OBJECT_54_6]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_18]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd86.Obj) = (Rsp [3]);
  (Wrd87.Obj) = (current_block [OBJECT_54_5]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_17]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.Obj) = (current_block [OBJECT_54_4]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_16]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.Obj) = (current_block [OBJECT_54_0]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_15]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (current_block [OBJECT_54_2]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_54_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_11])), (Wrd25.pObj));

DEFLABEL (label_18)
  (Wrd24.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_54_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_7])), (Wrd25.pObj));

DEFLABEL (label_16)
  (Wrd24.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_54_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_54_12);
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_7 5
#define LABEL_55_5 7
#define LABEL_55_6 9
#define ENVIRONMENT_LABEL_55_3 20
#define DEBUGGING_LABEL_55_2 19
#define OBJECT_55_3 18
#define OBJECT_55_2 17
#define OBJECT_55_1 16
#define OBJECT_55_0 15
#define EXECUTE_CACHE_55_9 11
#define EXECUTE_CACHE_55_8 13
#define FREE_REFERENCES_LABEL_55_0 10
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_55_4);
      goto hackify_variable_3;

    case 1:
      current_block = (Rpc - LABEL_55_7);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_55_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hackify_variable_7)
DEFLABEL (hackify_variable_3)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd5.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_11;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_11;
  (Wrd15.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_55_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_3]), 3);

DEFLABEL (label_9)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_8;
  ((Wrd14.pObj) [3]) = Rvl;
  Rvl = (current_block [OBJECT_55_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.Obj) = (current_block [OBJECT_55_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define ENVIRONMENT_LABEL_56_3 12
#define DEBUGGING_LABEL_56_2 11
#define OBJECT_56_1 10
#define OBJECT_56_0 9
#define EXECUTE_CACHE_56_6 7
#define FREE_REFERENCES_LABEL_56_0 6
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto sequence_with_actions_1;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sequence_with_actions_5)
DEFLABEL (sequence_with_actions_1)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_56_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_7 7
#define ENVIRONMENT_LABEL_57_3 16
#define DEBUGGING_LABEL_57_2 15
#define OBJECT_57_1 14
#define OBJECT_57_0 13
#define EXECUTE_CACHE_57_8 9
#define EXECUTE_CACHE_57_6 11
#define FREE_REFERENCES_LABEL_57_0 8
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_57_4);
      goto constant_system_global_environmentP_2;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_57_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constant_system_global_environmentP_6)
DEFLABEL (constant_system_global_environmentP_2)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_9;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_8]));

DEFLABEL (label_9)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_57_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_6 7
#define TAG_58_7 2
#define LABEL_58_9 9
#define LABEL_58_12 11
#define LABEL_58_17 13
#define LABEL_58_13 15
#define TAG_58_14 6
#define LABEL_58_16 17
#define LABEL_58_18 19
#define TAG_58_19 8
#define ENVIRONMENT_LABEL_58_3 35
#define DEBUGGING_LABEL_58_2 34
#define OBJECT_58_2 33
#define OBJECT_58_1 32
#define OBJECT_58_0 31
#define EXECUTE_CACHE_58_15 21
#define EXECUTE_CACHE_58_11 23
#define EXECUTE_CACHE_58_10 25
#define EXECUTE_CACHE_58_8 27
#define FREE_REFERENCE_58_0 30
#define FREE_REFERENCES_LABEL_58_0 20
#define NUMBER_OF_LINKER_SECTIONS_58_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_58_4);
      goto environment_recursive_bind_10;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto lambda_15;

    case 3:
      current_block = (Rpc - LABEL_58_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_58_12);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_58_17);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_58_13);
      goto lambda_16;

    case 7:
      current_block = (Rpc - LABEL_58_16);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_58_18);
      goto lambda_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_recursive_bind_14)
DEFLABEL (environment_recursive_bind_10)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_6])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_58_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_13])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_58_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_19;
  Wrd10 = Wrd14;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_58_16);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_18])));
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
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_17])), (Wrd11.pObj));

DEFLABEL (label_12)
  (Wrd10.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_58_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_11]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_58_13);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58_0]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_21;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 3);

DEFLABEL (label_21)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_20;
  ((Wrd18.pObj) [3]) = (Wrd6.Obj);
  Rvl = (current_block [OBJECT_58_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_58_18);

DEFLABEL (lambda_6)
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

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_10 7
#define LABEL_59_11 9
#define LABEL_59_6 11
#define TAG_59_7 4
#define LABEL_59_16 13
#define LABEL_59_13 15
#define LABEL_59_8 17
#define TAG_59_9 7
#define LABEL_59_15 19
#define LABEL_59_18 21
#define LABEL_59_21 23
#define LABEL_59_23 25
#define ENVIRONMENT_LABEL_59_3 47
#define DEBUGGING_LABEL_59_2 46
#define OBJECT_59_2 45
#define OBJECT_59_1 44
#define OBJECT_59_0 43
#define EXECUTE_CACHE_59_24 27
#define EXECUTE_CACHE_59_22 29
#define EXECUTE_CACHE_59_20 31
#define EXECUTE_CACHE_59_19 33
#define EXECUTE_CACHE_59_17 35
#define EXECUTE_CACHE_59_14 37
#define EXECUTE_CACHE_59_12 39
#define FREE_REFERENCE_59_0 42
#define FREE_REFERENCES_LABEL_59_0 26
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd8;
  machine_word Wrd31;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_59_4);
      goto integrate_name_11;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_59_10);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_59_11);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_59_6);
      goto lambda_3;

    case 5:
      current_block = (Rpc - LABEL_59_16);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_59_13);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_59_8);
      goto lambda_20;

    case 8:
      current_block = (Rpc - LABEL_59_15);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_59_18);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_59_21);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_59_23);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integrate_name_18)
DEFLABEL (integrate_name_11)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_27;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_27;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_26)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_6])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [2]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_59_13);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto lambda_3;

DEFLABEL (label_21)
  (Wrd33.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_8])));
  Rhp += 1;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  ((Wrd36.pObj) [2]) = (Wrd21.Obj);
  (Rsp [3]) = (Wrd35.Obj);
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_25;
  Wrd40 = Wrd44;

DEFLABEL (label_24)
  (Rsp [4]) = (Wrd40.Obj);
  (Wrd46.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd46.Obj);
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_23;
  Wrd48 = Wrd52;

DEFLABEL (label_22)
  (Rsp [5]) = (Wrd48.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_12]));

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_11])), (Wrd49.pObj));

DEFLABEL (label_15)
  (Wrd48.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_10])), (Wrd41.pObj));

DEFLABEL (label_14)
  (Wrd40.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_59_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (lambda_19)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_59_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_29;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_29;
  (Wrd13.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_59_15);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_20]));

DEFLABEL (label_29)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (current_block [OBJECT_59_2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_16]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_59_8);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_59_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [0]) = (Wrd11.Obj);
  goto lambda_3;

DEFLABEL (label_30)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_59_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_24]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_59_23);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  goto lambda_3;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define TAG_60_6 1
#define LABEL_60_7 7
#define TAG_60_8 2
#define LABEL_60_13 9
#define LABEL_60_10 11
#define LABEL_60_12 13
#define LABEL_60_15 15
#define LABEL_60_17 17
#define ENVIRONMENT_LABEL_60_3 36
#define DEBUGGING_LABEL_60_2 35
#define OBJECT_60_3 34
#define OBJECT_60_2 33
#define OBJECT_60_1 32
#define OBJECT_60_0 31
#define EXECUTE_CACHE_60_19 19
#define EXECUTE_CACHE_60_18 21
#define EXECUTE_CACHE_60_16 23
#define EXECUTE_CACHE_60_14 25
#define EXECUTE_CACHE_60_11 27
#define EXECUTE_CACHE_60_9 29
#define FREE_REFERENCES_LABEL_60_0 18
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_60_4);
      goto variable_final_value_7;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_60_7);
      goto lambda_13;

    case 3:
      current_block = (Rpc - LABEL_60_13);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_60_10);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_60_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_60_15);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_60_17);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (variable_final_value_11)
DEFLABEL (variable_final_value_7)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_60_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_60_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [3]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_60_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_60_7])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd17.Obj);
  (Rsp [4]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_9]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_60_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [0]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_60_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd7.Obj) = (current_block [OBJECT_60_3]);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_19]));

DEFLABEL (label_15)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_60_17);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_60_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_17;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_17;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_16)
  (Wrd32.Obj) = (current_block [OBJECT_60_2]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_60_12);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_17)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [3]);
  (Wrd28.Obj) = (current_block [OBJECT_60_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define ENVIRONMENT_LABEL_61_3 11
#define DEBUGGING_LABEL_61_2 10
#define OBJECT_61_3 9
#define OBJECT_61_2 8
#define OBJECT_61_1 7
#define OBJECT_61_0 6
#define FREE_REFERENCES_LABEL_61_0 6
#define NUMBER_OF_LINKER_SECTIONS_61_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_61_4);
      goto delayed_integration_in_progressP_1;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delayed_integration_in_progressP_5)
DEFLABEL (delayed_integration_in_progressP_1)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_9)
  if ((Wrd5.Obj) == (current_block [OBJECT_61_2]))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_61_3]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_61_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_5 3
#define LABEL_62_6 5
#define LABEL_62_7 7
#define LABEL_62_4 9
#define LABEL_62_8 11
#define LABEL_62_9 13
#define LABEL_62_10 15
#define LABEL_62_11 17
#define LABEL_62_12 19
#define LABEL_62_13 21
#define LABEL_62_14 23
#define LABEL_62_15 25
#define ENVIRONMENT_LABEL_62_3 43
#define DEBUGGING_LABEL_62_2 42
#define OBJECT_62_10 41
#define OBJECT_62_9 40
#define OBJECT_62_8 39
#define OBJECT_62_7 38
#define OBJECT_62_6 37
#define OBJECT_62_5 36
#define OBJECT_62_4 35
#define OBJECT_62_3 34
#define OBJECT_62_2 33
#define OBJECT_62_1 32
#define OBJECT_62_0 31
#define EXECUTE_CACHE_62_17 27
#define EXECUTE_CACHE_62_16 29
#define FREE_REFERENCES_LABEL_62_0 26
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
subst_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd118;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd135;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd152;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd169;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd155;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd86;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd51;
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
  machine_word Wrd176;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd184;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd201;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd196;
  machine_word Wrd187;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd195;
  machine_word Wrd194;
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
      current_block = (Rpc - LABEL_62_5);
      goto continuation_8;

    case 1:
      current_block = (Rpc - LABEL_62_6);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_62_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_62_4);
      goto delayed_integration_force_17;

    case 4:
      current_block = (Rpc - LABEL_62_8);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_62_9);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_62_10);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_62_11);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_62_12);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_62_13);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_62_14);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_62_15);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delayed_integration_force_29)
DEFLABEL (delayed_integration_force_17)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_53;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_53;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_52)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == (current_block [OBJECT_62_5]))
    goto label_37;
  if ((Wrd24.Obj) == (current_block [OBJECT_62_0]))
    goto label_33;
  if ((Wrd24.Obj) == (current_block [OBJECT_62_8]))
    goto label_31;
  (Wrd30.Obj) = (current_block [OBJECT_62_10]);
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_30;

DEFLABEL (label_31)
  (Wrd32.Obj) = (current_block [OBJECT_62_9]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_30)
DEFLABEL (label_32)
  (Wrd33.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_17]));

DEFLABEL (label_33)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_36)
  (Wrd35.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_62_3]);
  (Rsp [1]) = (Wrd36.Obj);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd48.uLng) == 10)
    goto label_35;

DEFLABEL (label_34)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_4]), 2);

DEFLABEL (label_35)
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd46.Lng))))
    goto label_34;
  Rvl = ((Wrd44.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 10))
    goto label_51;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd60.Lng))))
    goto label_51;
  (Wrd54.Obj) = ((Wrd58.pObj) [5]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_50)
  (Wrd77.Obj) = (Rsp [4]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 10))
    goto label_49;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd76.Lng))))
    goto label_49;
  (Wrd70.Obj) = ((Wrd74.pObj) [4]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_48)
  (Wrd93.Obj) = (Rsp [5]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 10))
    goto label_47;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [0]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd92.Lng))))
    goto label_47;
  (Wrd86.Obj) = ((Wrd90.pObj) [3]);
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_46)
  (Wrd162.Obj) = (Rsp [6]);
  (Wrd163.uLng) = (OBJECT_TYPE (Wrd162.Obj));
  if (! ((Wrd163.uLng) == 10))
    goto label_45;
  (Wrd159.pObj) = (OBJECT_ADDRESS (Wrd162.Obj));
  (Wrd160.Obj) = ((Wrd159.pObj) [0]);
  (Wrd161.Lng) = (FIXNUM_TO_LONG (Wrd160.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd161.Lng))))
    goto label_45;
  (Wrd155.Obj) = (current_block [OBJECT_62_8]);
  ((Wrd159.pObj) [2]) = (Wrd155.Obj);

DEFLABEL (label_44)
  (Wrd145.Obj) = (Rsp [6]);
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if (! ((Wrd146.uLng) == 10))
    goto label_43;
  (Wrd142.pObj) = (OBJECT_ADDRESS (Wrd145.Obj));
  (Wrd143.Obj) = ((Wrd142.pObj) [0]);
  (Wrd144.Lng) = (FIXNUM_TO_LONG (Wrd143.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd144.Lng))))
    goto label_43;
  ((Wrd142.pObj) [3]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_42)
  (Wrd128.Obj) = (Rsp [6]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd129.uLng) == 10))
    goto label_41;
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd126.Obj) = ((Wrd125.pObj) [0]);
  (Wrd127.Lng) = (FIXNUM_TO_LONG (Wrd126.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd127.Lng))))
    goto label_41;
  ((Wrd125.pObj) [4]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_40)
  (Wrd111.Obj) = (Rsp [6]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd112.uLng) == 10))
    goto label_39;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd109.Obj) = ((Wrd108.pObj) [0]);
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd110.Lng))))
    goto label_39;
  ((Wrd108.pObj) [5]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_38)
  (Wrd100.Obj) = (Rsp [0]);
  (Wrd101.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd101.Obj);
  (Rsp [1]) = (Wrd100.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_16]));

DEFLABEL (label_39)
  (Wrd113.Obj) = (Rsp [6]);
  (Wrd114.Obj) = (current_block [OBJECT_62_3]);
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_15]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 3);

DEFLABEL (label_23)
  goto label_38;

DEFLABEL (label_41)
  (Wrd130.Obj) = (Rsp [6]);
  (Wrd131.Obj) = (current_block [OBJECT_62_6]);
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_14]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 3);

DEFLABEL (label_24)
  goto label_40;

DEFLABEL (label_43)
  (Wrd147.Obj) = (Rsp [6]);
  (Wrd148.Obj) = (current_block [OBJECT_62_7]);
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_13]))));
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 3);

DEFLABEL (label_25)
  goto label_42;

DEFLABEL (label_45)
  (Wrd164.Obj) = (Rsp [6]);
  (Wrd165.Obj) = (current_block [OBJECT_62_1]);
  (Wrd166.Obj) = (current_block [OBJECT_62_8]);
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_12]))));
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd165.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 3);

DEFLABEL (label_26)
  goto label_44;

DEFLABEL (label_47)
  (Wrd95.Obj) = (Rsp [5]);
  (Wrd96.Obj) = (current_block [OBJECT_62_7]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_11]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_4]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd79.Obj) = (Rsp [4]);
  (Wrd80.Obj) = (current_block [OBJECT_62_6]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_10]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_4]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.Obj) = (current_block [OBJECT_62_3]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_9]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_4]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_62_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_4]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (Rsp [0]) = Rvl;
  (Wrd194.Obj) = (Rsp [2]);
  (Wrd195.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if (! ((Wrd195.uLng) == 10))
    goto label_57;
  (Wrd191.pObj) = (OBJECT_ADDRESS (Wrd194.Obj));
  (Wrd192.Obj) = ((Wrd191.pObj) [0]);
  (Wrd193.Lng) = (FIXNUM_TO_LONG (Wrd192.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd193.Lng))))
    goto label_57;
  (Wrd187.Obj) = (current_block [OBJECT_62_0]);
  ((Wrd191.pObj) [2]) = (Wrd187.Obj);

DEFLABEL (label_56)
  (Wrd171.Obj) = (current_block [OBJECT_62_3]);
  (* (--Rsp)) = (Wrd171.Obj);
  (Wrd172.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd172.Obj);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd172.Obj));
  if ((Wrd184.uLng) == 10)
    goto label_55;

DEFLABEL (label_54)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 3);

DEFLABEL (label_55)
  (Wrd180.pObj) = (OBJECT_ADDRESS (Wrd172.Obj));
  (Wrd181.Obj) = ((Wrd180.pObj) [0]);
  (Wrd182.Lng) = (FIXNUM_TO_LONG (Wrd181.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd182.Lng))))
    goto label_54;
  (Wrd176.Obj) = (Rsp [2]);
  ((Wrd180.pObj) [5]) = (Wrd176.Obj);
  Rsp = (& (Rsp [4]));
  goto label_36;

DEFLABEL (label_57)
  (Wrd196.Obj) = (Rsp [2]);
  (Wrd197.Obj) = (current_block [OBJECT_62_1]);
  (Wrd198.Obj) = (current_block [OBJECT_62_0]);
  (Wrd201.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_6]))));
  (* (--Rsp)) = (Wrd201.Obj);
  (* (--Rsp)) = (Wrd198.Obj);
  (* (--Rsp)) = (Wrd197.Obj);
  (* (--Rsp)) = (Wrd196.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 3);

DEFLABEL (label_27)
  goto label_56;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_62_7);
  goto label_36;

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
#define LABEL_15 17
#define LABEL_16 19
#define LABEL_17 21
#define LABEL_18 23
#define LABEL_19 25
#define LABEL_20 27
#define LABEL_21 29
#define LABEL_22 31
#define LABEL_23 33
#define LABEL_24 35
#define LABEL_25 37
#define LABEL_26 39
#define LABEL_27 41
#define LABEL_28 43
#define LABEL_29 45
#define LABEL_30 47
#define LABEL_31 49
#define LABEL_32 51
#define LABEL_33 53
#define LABEL_37 55
#define LABEL_34 57
#define LABEL_35 59
#define LABEL_36 61
#define LABEL_38 63
#define LABEL_39 65
#define LABEL_41 67
#define LABEL_42 69
#define LABEL_43 71
#define LABEL_44 73
#define LABEL_45 75
#define LABEL_46 77
#define LABEL_47 79
#define LABEL_48 81
#define LABEL_49 83
#define LABEL_50 85
#define LABEL_51 87
#define LABEL_52 89
#define LABEL_53 91
#define LABEL_54 93
#define LABEL_55 95
#define LABEL_56 97
#define LABEL_57 99
#define LABEL_58 101
#define LABEL_59 103
#define LABEL_60 105
#define LABEL_61 107
#define ENVIRONMENT_LABEL_3 199
#define DEBUGGING_LABEL_2 198
#define PURIFICATION_ROOT 197
#define OBJECT_73 196
#define OBJECT_72 195
#define OBJECT_71 194
#define OBJECT_70 193
#define OBJECT_69 192
#define OBJECT_68 191
#define OBJECT_67 190
#define OBJECT_66 189
#define OBJECT_65 188
#define OBJECT_64 187
#define OBJECT_63 186
#define OBJECT_62 185
#define OBJECT_61 184
#define OBJECT_60 183
#define OBJECT_59 182
#define OBJECT_58 181
#define OBJECT_57 180
#define OBJECT_56 179
#define OBJECT_55 178
#define OBJECT_54 177
#define OBJECT_53 176
#define OBJECT_52 175
#define OBJECT_51 174
#define OBJECT_50 173
#define OBJECT_49 172
#define OBJECT_48 171
#define OBJECT_47 170
#define OBJECT_46 169
#define OBJECT_45 168
#define OBJECT_44 167
#define OBJECT_43 166
#define OBJECT_42 165
#define OBJECT_41 164
#define OBJECT_40 163
#define OBJECT_39 162
#define OBJECT_38 161
#define OBJECT_37 160
#define OBJECT_36 159
#define OBJECT_35 158
#define OBJECT_34 157
#define OBJECT_33 156
#define OBJECT_32 155
#define OBJECT_31 154
#define OBJECT_30 153
#define OBJECT_29 152
#define OBJECT_28 151
#define OBJECT_27 150
#define OBJECT_26 149
#define OBJECT_25 148
#define OBJECT_24 147
#define OBJECT_23 146
#define OBJECT_22 145
#define OBJECT_21 144
#define OBJECT_20 143
#define OBJECT_19 142
#define OBJECT_18 141
#define OBJECT_17 140
#define OBJECT_16 139
#define OBJECT_15 138
#define OBJECT_14 137
#define OBJECT_13 136
#define OBJECT_12 135
#define OBJECT_11 134
#define OBJECT_10 133
#define OBJECT_9 132
#define OBJECT_8 131
#define OBJECT_7 130
#define OBJECT_6 129
#define OBJECT_5 128
#define OBJECT_4 127
#define OBJECT_3 126
#define OBJECT_2 125
#define OBJECT_1 124
#define OBJECT_0 123
#define EXECUTE_CACHE_40 109
#define EXECUTE_CACHE_14 111
#define EXECUTE_CACHE_12 113
#define EXECUTE_CACHE_8 115
#define FREE_REFERENCE_1 118
#define FREE_REFERENCE_0 119
#define GLOBAL_EXECUTE_CACHE_5 121
#define FREE_REFERENCES_LABEL_0 108
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
subst_so_32eaccb7886683e7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_50;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_15);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_16);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_17;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_18;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_19;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto continuation_20;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto continuation_21;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto continuation_22;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_23;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_25;

    case 26:
      current_block = (Rpc - LABEL_37);
      goto label_51;

    case 27:
      current_block = (Rpc - LABEL_34);
      goto continuation_24;

    case 28:
      current_block = (Rpc - LABEL_35);
      goto continuation_27;

    case 29:
      current_block = (Rpc - LABEL_36);
      goto continuation_26;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto continuation_28;

    case 31:
      current_block = (Rpc - LABEL_39);
      goto continuation_29;

    case 32:
      current_block = (Rpc - LABEL_41);
      goto continuation_30;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto continuation_31;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto continuation_32;

    case 35:
      current_block = (Rpc - LABEL_44);
      goto continuation_33;

    case 36:
      current_block = (Rpc - LABEL_45);
      goto continuation_34;

    case 37:
      current_block = (Rpc - LABEL_46);
      goto continuation_35;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto continuation_36;

    case 39:
      current_block = (Rpc - LABEL_48);
      goto continuation_37;

    case 40:
      current_block = (Rpc - LABEL_49);
      goto continuation_38;

    case 41:
      current_block = (Rpc - LABEL_50);
      goto continuation_39;

    case 42:
      current_block = (Rpc - LABEL_51);
      goto continuation_40;

    case 43:
      current_block = (Rpc - LABEL_52);
      goto continuation_41;

    case 44:
      current_block = (Rpc - LABEL_53);
      goto continuation_42;

    case 45:
      current_block = (Rpc - LABEL_54);
      goto continuation_43;

    case 46:
      current_block = (Rpc - LABEL_55);
      goto continuation_44;

    case 47:
      current_block = (Rpc - LABEL_56);
      goto continuation_45;

    case 48:
      current_block = (Rpc - LABEL_57);
      goto continuation_46;

    case 49:
      current_block = (Rpc - LABEL_58);
      goto continuation_47;

    case 50:
      current_block = (Rpc - LABEL_59);
      goto label_54;

    case 51:
      current_block = (Rpc - LABEL_60);
      goto label_55;

    case 52:
      current_block = (Rpc - LABEL_61);
      goto expression_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_49)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_60])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_55)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_54)
  {
    static const short sections [] =
      {
	0,
	1,
	0,
	1,
	2,
	2,
	1,
	1,
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
	1,
	3,
	1,
	1,
	2,
	0,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	0,
	2,
	1,
	1,
	2,
	1,
	1,
	2,
	1,
	3,
	1,
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 62)
      goto label_53;
    blocks = (current_block [OBJECT_73]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_59])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_53)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_59;
  Wrd11 = Wrd15;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_57;
  Wrd11 = Wrd15;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd5.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_72]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd12.pObj));

DEFLABEL (label_51)
  (Wrd11.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_50)
  (Wrd11.Obj) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_subst_so_32eaccb7886683e7 [62] =
  {
    { "subst_so_code_1", 2, subst_so_code_1 },
    { "subst_so_code_2", 4, subst_so_code_2 },
    { "subst_so_code_3", 2, subst_so_code_3 },
    { "subst_so_code_4", 20, subst_so_code_4 },
    { "subst_so_code_5", 2, subst_so_code_5 },
    { "subst_so_code_6", 3, subst_so_code_6 },
    { "subst_so_code_7", 5, subst_so_code_7 },
    { "subst_so_code_8", 14, subst_so_code_8 },
    { "subst_so_code_9", 12, subst_so_code_9 },
    { "subst_so_code_10", 5, subst_so_code_10 },
    { "subst_so_code_11", 5, subst_so_code_11 },
    { "subst_so_code_12", 26, subst_so_code_12 },
    { "subst_so_code_13", 1, subst_so_code_13 },
    { "subst_so_code_14", 8, subst_so_code_14 },
    { "subst_so_code_15", 4, subst_so_code_15 },
    { "subst_so_code_16", 4, subst_so_code_16 },
    { "subst_so_code_17", 22, subst_so_code_17 },
    { "subst_so_code_18", 3, subst_so_code_18 },
    { "subst_so_code_19", 2, subst_so_code_19 },
    { "subst_so_code_20", 1, subst_so_code_20 },
    { "subst_so_code_21", 6, subst_so_code_21 },
    { "subst_so_code_22", 11, subst_so_code_22 },
    { "subst_so_code_23", 3, subst_so_code_23 },
    { "subst_so_code_24", 5, subst_so_code_24 },
    { "subst_so_code_25", 1, subst_so_code_25 },
    { "subst_so_code_26", 5, subst_so_code_26 },
    { "subst_so_code_27", 21, subst_so_code_27 },
    { "subst_so_code_28", 5, subst_so_code_28 },
    { "subst_so_code_29", 27, subst_so_code_29 },
    { "subst_so_code_30", 5, subst_so_code_30 },
    { "subst_so_code_31", 1, subst_so_code_31 },
    { "subst_so_code_32", 17, subst_so_code_32 },
    { "subst_so_code_33", 3, subst_so_code_33 },
    { "subst_so_code_34", 1, subst_so_code_34 },
    { "subst_so_code_35", 1, subst_so_code_35 },
    { "subst_so_code_36", 21, subst_so_code_36 },
    { "subst_so_code_37", 1, subst_so_code_37 },
    { "subst_so_code_38", 1, subst_so_code_38 },
    { "subst_so_code_39", 3, subst_so_code_39 },
    { "subst_so_code_40", 1, subst_so_code_40 },
    { "subst_so_code_41", 1, subst_so_code_41 },
    { "subst_so_code_42", 1, subst_so_code_42 },
    { "subst_so_code_43", 2, subst_so_code_43 },
    { "subst_so_code_44", 1, subst_so_code_44 },
    { "subst_so_code_45", 1, subst_so_code_45 },
    { "subst_so_code_46", 12, subst_so_code_46 },
    { "subst_so_code_47", 1, subst_so_code_47 },
    { "subst_so_code_48", 3, subst_so_code_48 },
    { "subst_so_code_49", 8, subst_so_code_49 },
    { "subst_so_code_50", 18, subst_so_code_50 },
    { "subst_so_code_51", 34, subst_so_code_51 },
    { "subst_so_code_52", 3, subst_so_code_52 },
    { "subst_so_code_53", 3, subst_so_code_53 },
    { "subst_so_code_54", 15, subst_so_code_54 },
    { "subst_so_code_55", 4, subst_so_code_55 },
    { "subst_so_code_56", 2, subst_so_code_56 },
    { "subst_so_code_57", 3, subst_so_code_57 },
    { "subst_so_code_58", 9, subst_so_code_58 },
    { "subst_so_code_59", 12, subst_so_code_59 },
    { "subst_so_code_60", 8, subst_so_code_60 },
    { "subst_so_code_61", 2, subst_so_code_61 },
    { "subst_so_code_62", 12, subst_so_code_62 }
  };

int
decl_subst_so_32eaccb7886683e7 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_subst_so_32eaccb7886683e7);
  return (0);
}

DECLARE_COMPILED_CODE ("subst.so", 53, decl_subst_so_32eaccb7886683e7, subst_so_32eaccb7886683e7)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_subst_so_data_32eaccb7886683e7 [9874] =
  "\xc8\x01\x6b\xd4\x13\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x24"
  "\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x0c\x0c\x0d\xbb"
  "\x24\x28\x0d\x28\x0d\xbc\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbd\x1d\xb0\x83\x88\xc2\xbe\x81\x28\x0d\xbf\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xb6\x84\x1d\x08"
  "\xb1\xb3\x25\xb1\xb3\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0d\x24"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x82\xb6\x80\x0d\x1c\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x81\x82\x83\xb6\x84\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\xb4\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x84\x0c\x0c\x1b"
  "\x1b\x1b\x82\x1b\xb6\x83\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x28\xb4\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x83\xb6\x84\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x83\xb6\x82\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\x08\x81\xb6\x82\x0d\x1c\x24\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02"
  "\x88\x81\x82\xb6\x83\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb6\x82\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x83\xb6\x82\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x82\xb6\x81\x0c\x0c\x0d"
  "\x1c\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x81\x82"
  "\xb6\x83\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x1b\x1b\x1b\x82\x1b"
  "\xb6\x83\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\xb4\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb6\x81\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb6\x82\x28\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x0c\x08\x0d\x1c"
  "\xb3\x24\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\x81\x85\x84"
  "\x83\xb6\x82\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x81\x1d\x08\x02\x82\x83\x84\x85\xb6"
  "\x86\xb3\x25\xb3\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\xb4\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb6\x80\x0d"
  "\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x1b\x1b\x1b\x1b\x81\x82\x84\xb6\x83\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28"
  "\xb4\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\xc2\x0c\x81\x82\x0c\xb6\x84\xc1\x1c\xc1\x0d\x1c\x24\x28\x0d"
  "\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\xb4\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x28\xb4\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b"
  "\x1b\x82\x1b\xb6\x83\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x28\xb4\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x84\xc2\x0d\x83\xb6\x82\x1b\x0d\x08\x28\x0d\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x02\x84\x83\x1b\x1b\xb6\x82\x0d\x24\x28\x0d"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x84\xb6\x82\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb6\x81\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81"
  "\x82\x83\x86\x85\xb6\x84\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\xb6\x82\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb6\x81\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb6\x82\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x0d\x1c\x24\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82"
  "\xb6\x83\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\xb6\x82\x28\x1b\x28\x1b\x28\xb4"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x0d\x1c\xb6\x81\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02\x88"
  "\x0c\x0c\x1b\x82\x83\x0d\xb6\x84\x1b\x81\x0d\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b"
  "\x1b\x2a\xb4\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x0d"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x17\x1b\x2a\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x1b\x2a\x1b\x2a\x1b\x07\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x2a\x0d\x1c\x1b\x1b\x2a\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x9c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x06\x9c\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x99\x06\x1b\x2a\x99\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x99\x1b\x2a\x07\x99\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x99\x1b\x2a"
  "\x07\x99\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1c\x0d\x1b\x2a"
  "\xc3\x1b\x1b\x1b\x1b\xb7\x0d\x1b\xb3\x0d\xb1\x17\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\xb5\x2a\x1e\xb2\x2a\x1e\x17\x28\x0d\x26"
  "\x1b\x1b\x24\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x02\x4f\x2f\x55\x73\x65\x72\x73"
  "\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65"
  "\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d"
  "\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x73\x66\x2f\x2e\x2f\x73"
  "\x75\x62\x73\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x12\x2a"
  "\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x62\x6c\x6f\x63\x6b\x2a"
  "\x02\x37\x06\x81\x81\x02\x36\x04\x82\x02\x05\x0a\x02\x0b\x56\x61"
  "\x72\x69\x61\x62\x6c\x65\x20\x22\x28\x22\x20\x77\x61\x73\x20\x64"
  "\x65\x63\x6c\x61\x72\x65\x64\x20\x49\x47\x4e\x4f\x52\x45\x2c\x20"
  "\x62\x75\x74\x20\x75\x73\x65\x64\x20\x61\x6e\x79\x77\x61\x79\x2e"
  "\x16\x2a\x63\x75\x72\x72\x65\x6e\x74\x2d\x62\x6c\x6f\x63\x6b\x2d"
  "\x6e\x61\x6d\x65\x73\x2a\x02\x03\x0f\x73\x79\x6d\x62\x6f\x6c\x2d"
  "\x3e\x73\x74\x72\x69\x6e\x67\x05\x05\x77\x61\x72\x6e\x05\x0e\x73"
  "\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x04\x3b\x0a\x81"
  "\x89\x02\x3a\x08\x81\x87\x02\x39\x06\x81\x85\x02\x38\x04\x83\x04"
  "\x09\x17\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x05\x15"
  "\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x74\x6f\x70\x2d\x6c\x65"
  "\x76\x65\x6c\x2a\x02\x3d\x06\x81\x85\x02\x3c\x04\x84\x06\x05\x0d"
  "\x09\x02\x02\x03\x03\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66"
  "\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x0a\x02\x11\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x6d\x61\x6b\x65\x02\x10\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x73\x2f\x6d\x61\x6b\x65\x05\x0f\x71"
  "\x75\x6f\x74\x61\x74\x69\x6f\x6e\x2f\x6d\x61\x6b\x65\x03\x0c\x6f"
  "\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x3f\x0b\x04\x12\x64\x65\x63"
  "\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x2f\x62\x69\x6e\x64\x0c\x05"
  "\x15\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x6f\x70\x65\x6e\x2d"
  "\x62\x6c\x6f\x63\x6b\x0d\x05\x15\x69\x6e\x74\x65\x67\x72\x61\x74"
  "\x65\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x0e\x09\x51\x2a"
  "\x81\x85\x02\x50\x28\x81\x85\x02\x4f\x26\x81\x85\x02\x4e\x24\x81"
  "\x87\x02\x4d\x22\x81\x85\x02\x4c\x20\x81\x89\x02\x4b\x1e\x81\x87"
  "\x02\x4a\x1c\x81\x89\x02\x49\x1a\x81\x85\x02\x48\x18\x81\x83\x02"
  "\x47\x16\x81\x87\x02\x46\x14\x81\x83\x02\x45\x12\x81\x85\x02\x44"
  "\x10\x81\x83\x02\x43\x0e\x81\x83\x02\x42\x0c\x81\x85\x02\x41\x0a"
  "\x81\x83\x02\x40\x08\x81\x83\x02\x3f\x06\x81\x83\x02\x3e\x04\x85"
  "\x08\x29\x47\x0f\x02\x04\x04\x6d\x61\x70\x10\x05\x0e\x03\x53\x06"
  "\x81\x85\x02\x52\x04\x85\x08\x05\x0d\x11\x02\x18\x6f\x70\x65\x6e"
  "\x2d\x62\x6c\x6f\x63\x6b\x2f\x76\x61\x6c\x75\x65\x2d\x6d\x61\x72"
  "\x6b\x65\x72\x02\x04\x10\x05\x0e\x03\x56\x08\x81\x85\x02\x55\x06"
  "\x81\x85\x02\x54\x04\x85\x08\x07\x11\x12\x02\x08\x10\x64\x69\x73"
  "\x70\x61\x74\x63\x68\x2d\x76\x65\x63\x74\x6f\x72\x13\x02\x5b\x0c"
  "\x81\x87\x02\x5a\x0a\x81\x89\x02\x59\x08\x81\x87\x02\x58\x06\x81"
  "\x87\x02\x57\x04\x85\x08\x0b\x13\x14\x02\x09\x12\x55\x6e\x6b\x6e"
  "\x6f\x77\x6e\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x25\x4e\x6f"
  "\x74\x20\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6e\x67\x20\x6f\x70"
  "\x65\x72\x61\x74\x6f\x72\x20\x69\x6e\x20\x61\x63\x63\x65\x73\x73"
  "\x3a\x20\x13\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2d\x6f\x70\x65"
  "\x72\x61\x74\x6f\x72\x15\x0a\x69\x6e\x74\x65\x67\x72\x61\x74\x65"
  "\x16\x07\x69\x67\x6e\x6f\x72\x65\x17\x07\x65\x78\x70\x61\x6e\x64"
  "\x18\x05\x0e\x03\x24\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2f\x73\x79"
  "\x73\x74\x65\x6d\x2d\x67\x6c\x6f\x62\x61\x6c\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x3f\x19\x06\x19\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x73\x2f\x6c\x6f\x6f\x6b\x75\x70\x2d\x67\x6c\x6f"
  "\x62\x61\x6c\x1a\x06\x0c\x61\x63\x63\x65\x73\x73\x2f\x6d\x61\x6b"
  "\x65\x1b\x03\x19\x69\x67\x6e\x6f\x72\x65\x64\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x2d\x77\x61\x72\x6e\x69\x6e\x67\x1c\x03\x1c\x69"
  "\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x2d\x69\x6e\x66\x6f\x2f"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x1d\x04\x04\x06\x65\x72"
  "\x72\x6f\x72\x1e\x04\x09\x72\x65\x61\x73\x73\x69\x67\x6e\x1f\x04"
  "\x17\x63\x6f\x70\x79\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x2f\x69\x6e\x74\x65\x72\x6e\x20\x0b\x69\x1e\x81\x87\x02\x68\x1c"
  "\x81\x8b\x02\x67\x1a\x81\x89\x02\x66\x18\x81\x87\x02\x65\x16\x81"
  "\x87\x02\x64\x14\x81\x87\x02\x63\x12\x81\x87\x02\x62\x10\x81\x85"
  "\x02\x61\x0e\x81\x83\x02\x60\x0c\x81\x8d\x02\x5f\x0a\x81\x89\x02"
  "\x5e\x08\x81\x8b\x02\x5d\x06\x81\x87\x02\x5c\x04\x85\x08\x1d\x40"
  "\x21\x02\x0a\x12\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x22\x41\x74\x74\x65\x6d\x70\x74\x20\x74\x6f"
  "\x20\x61\x73\x73\x69\x67\x6e\x20\x69\x6e\x74\x65\x67\x72\x61\x74"
  "\x65\x64\x20\x6e\x61\x6d\x65\x15\x16\x18\x17\x10\x66\x61\x6c\x73"
  "\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x22\x02\x06\x12\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x73\x2f\x6c\x6f\x6f\x6b\x75\x70"
  "\x23\x03\x14\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x21\x24\x03\x1c\x04\x04\x1e\x05\x0e\x06\x10"
  "\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2f\x6d\x61\x6b\x65\x08"
  "\x75\x1a\x81\x8b\x02\x74\x18\x81\x8b\x02\x73\x16\x81\x89\x02\x72"
  "\x14\x81\x8b\x02\x71\x12\x81\x89\x02\x70\x10\x81\x87\x02\x6f\x0e"
  "\x81\x87\x02\x6e\x0c\x81\x87\x02\x6d\x0a\x81\x89\x02\x6c\x08\x81"
  "\x8b\x02\x6b\x06\x81\x87\x02\x6a\x04\x85\x08\x19\x38\x25\x02\x0b"
  "\x05\x16\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x73\x26\x08\x16\x69\x6e\x74\x65\x67\x72"
  "\x61\x74\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x27"
  "\x03\x7a\x0c\x81\x8f\x02\x79\x0a\x81\x8f\x02\x78\x08\x81\x8d\x02"
  "\x77\x06\x81\x8f\x02\x76\x04\x85\x08\x0b\x17\x28\x02\x0c\x05\x0e"
  "\x08\x16\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x61\x6c\x29\x03\x7f\x0c\x81\x8d\x02\x7e\x0a"
  "\x81\x8d\x02\x7d\x08\x81\x8d\x02\x7c\x06\x81\x8f\x02\x7b\x04\x85"
  "\x08\x0b\x17\x2a\x02\x0d\x20\x46\x6f\x6c\x64\x20\x63\x6f\x6e\x73"
  "\x74\x61\x6e\x74\x20\x66\x61\x6c\x73\x65\x20\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x61\x6c\x1f\x46\x6f\x6c\x64\x20\x63\x6f\x6e\x73"
  "\x74\x61\x6e\x74\x20\x74\x72\x75\x65\x20\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x61\x6c\x1f\x73\x66\x3a\x65\x6e\x61\x62\x6c\x65\x2d"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x2d\x66\x6f\x6c\x64"
  "\x69\x6e\x67\x3f\x2b\x02\x03\x0a\x73\x65\x71\x75\x65\x6e\x63\x65"
  "\x3f\x2c\x03\x18\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x6e"
  "\x65\x76\x65\x72\x2d\x66\x61\x6c\x73\x65\x3f\x2d\x03\x05\x6c\x61"
  "\x73\x74\x2e\x04\x0e\x73\x65\x71\x75\x65\x6e\x63\x65\x2f\x6d\x61"
  "\x6b\x65\x2f\x03\x11\x65\x78\x63\x65\x70\x74\x2d\x6c\x61\x73\x74"
  "\x2d\x70\x61\x69\x72\x30\x08\x29\x05\x0e\x03\x19\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x2f\x61\x6c\x77\x61\x79\x73\x2d\x66\x61"
  "\x6c\x73\x65\x3f\x31\x04\x0b\x6e\x6f\x69\x73\x79\x2d\x74\x65\x73"
  "\x74\x32\x04\x07\x61\x70\x70\x65\x6e\x64\x33\x06\x11\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x61\x6c\x2f\x6d\x61\x6b\x65\x0c\x99\x01"
  "\x36\x81\x8d\x02\x98\x01\x34\x81\x8d\x02\x97\x01\x32\x81\x8d\x02"
  "\x96\x01\x30\x81\x8f\x02\x95\x01\x2e\x81\x8d\x02\x94\x01\x2c\x81"
  "\x8d\x02\x93\x01\x2a\x81\x91\x02\x92\x01\x28\x81\x8f\x02\x91\x01"
  "\x26\x81\x8d\x02\x90\x01\x24\x81\x8f\x02\x8f\x01\x22\x81\x8d\x02"
  "\x8e\x01\x20\x81\x8d\x02\x8d\x01\x1e\x81\x8d\x02\x8c\x01\x1c\x81"
  "\x91\x02\x8b\x01\x1a\x81\x91\x02\x8a\x01\x18\x81\x8d\x02\x89\x01"
  "\x16\x81\x8d\x02\x88\x01\x14\x81\x95\x02\x87\x01\x12\x81\x93\x02"
  "\x86\x01\x10\x81\x8f\x02\x85\x01\x0e\x81\x8f\x02\x84\x01\x0c\x81"
  "\x8d\x02\x83\x01\x0a\x81\x8d\x02\x82\x01\x08\x81\x97\x02\x81\x01"
  "\x06\x81\x8d\x02\x80\x01\x04\x88\x0e\x35\x57\x34\x02\x0e\x9a\x01"
  "\x04\x85\x08\x03\x35\x02\x0f\x04\x0c\x03\x0a\x63\x6f\x6e\x73\x74"
  "\x61\x6e\x74\x3f\x36\x05\x0e\x05\x11\x64\x65\x63\x6c\x61\x72\x61"
  "\x74\x69\x6f\x6e\x2f\x6d\x61\x6b\x65\x37\x05\xa2\x01\x12\x81\x89"
  "\x02\xa1\x01\x10\x81\x89\x02\xa0\x01\x0e\x81\x89\x02\x9f\x01\x0c"
  "\x81\x8d\x02\x9e\x01\x0a\x81\x87\x02\x9d\x01\x08\x81\x8f\x02\x9c"
  "\x01\x06\x81\x89\x02\x9b\x01\x04\x85\x08\x11\x21\x38\x02\x10\x05"
  "\x0e\x04\x0b\x64\x65\x6c\x61\x79\x2f\x6d\x61\x6b\x65\x03\xa6\x01"
  "\x0a\x81\x89\x02\xa5\x01\x08\x81\x87\x02\xa4\x01\x06\x81\x89\x02"
  "\xa3\x01\x04\x85\x08\x09\x14\x39\x02\x11\x05\x0e\x07\x16\x69\x6e"
  "\x74\x65\x67\x72\x61\x74\x65\x2f\x64\x69\x73\x6a\x75\x6e\x63\x74"
  "\x69\x6f\x6e\x3a\x03\xaa\x01\x0a\x81\x8b\x02\xa9\x01\x08\x81\x8b"
  "\x02\xa8\x01\x06\x81\x8d\x02\xa7\x01\x04\x85\x08\x09\x14\x3b\x02"
  "\x12\x20\x46\x6f\x6c\x64\x20\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20"
  "\x66\x61\x6c\x73\x65\x20\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f"
  "\x6e\x1f\x46\x6f\x6c\x64\x20\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20"
  "\x74\x72\x75\x65\x20\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e"
  "\x1f\x73\x66\x3a\x65\x6e\x61\x62\x6c\x65\x2d\x64\x69\x73\x6a\x75"
  "\x6e\x63\x74\x69\x6f\x6e\x2d\x66\x6f\x6c\x64\x69\x6e\x67\x3f\x3c"
  "\x02\x03\x2d\x03\x31\x04\x32\x05\x0e\x03\x2c\x03\x2e\x04\x2f\x03"
  "\x30\x07\x3a\x05\x11\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e"
  "\x2f\x6d\x61\x6b\x65\x04\x33\x0c\xc0\x01\x2e\x81\x8f\x02\xbf\x01"
  "\x2c\x81\x8b\x02\xbe\x01\x2a\x81\x91\x02\xbd\x01\x28\x81\x91\x02"
  "\xbc\x01\x26\x81\x8d\x02\xbb\x01\x24\x81\x8d\x02\xba\x01\x22\x81"
  "\x8b\x02\xb9\x01\x20\x81\x8b\x02\xb8\x01\x1e\x81\x8d\x02\xb7\x01"
  "\x1c\x81\x8b\x02\xb6\x01\x1a\x81\x8b\x02\xb5\x01\x18\x81\x93\x02"
  "\xb4\x01\x16\x81\x8d\x02\xb3\x01\x14\x81\x8b\x02\xb2\x01\x12\x81"
  "\x8b\x02\xb1\x01\x10\x81\x8f\x02\xb0\x01\x0e\x81\x8b\x02\xaf\x01"
  "\x0c\x81\x8b\x02\xae\x01\x0a\x81\x8f\x02\xad\x01\x08\x81\x8b\x02"
  "\xac\x01\x06\x81\x8b\x02\xab\x01\x04\x87\x0c\x2d\x4f\x31\x02\x13"
  "\x05\x0d\x02\xc3\x01\x08\x85\x08\xc2\x01\x06\x81\x87\x02\xc1\x01"
  "\x04\x85\x08\x07\x0d\x2e\x02\x14\x04\x1d\x73\x69\x6d\x75\x6c\x61"
  "\x74\x65\x2d\x75\x6e\x6b\x6e\x6f\x77\x6e\x2d\x61\x70\x70\x6c\x69"
  "\x63\x61\x74\x69\x6f\x6e\x05\x14\x69\x6e\x74\x65\x67\x72\x61\x74"
  "\x65\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x03\xc5\x01\x06"
  "\x81\x87\x02\xc4\x01\x04\x85\x08\x05\x0d\x3d\x02\x15\x03\x14\x69"
  "\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x71\x75\x6f\x74\x61\x74\x69"
  "\x6f\x6e\x3e\x02\xc6\x01\x04\x85\x08\x03\x3f\x02\x16\x05\x02\xcc"
  "\x01\x0e\x85\x08\xcb\x01\x0c\x81\x83\x02\xca\x01\x0a\x81\x89\x02"
  "\xc9\x01\x08\x81\x87\x02\xc8\x01\x06\x81\x85\x02\xc7\x01\x04\x83"
  "\x04\x0d\x17\x40\x02\x17\x12\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x30\x4e\x6f\x74\x20\x69\x6e\x74"
  "\x65\x67\x72\x61\x74\x69\x6e\x67\x20\x6f\x70\x65\x72\x61\x74\x6f"
  "\x72\x20\x69\x6e\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x70\x6f"
  "\x73\x69\x74\x69\x6f\x6e\x3a\x20\x15\x16\x18\x17\x21\x73\x66\x3a"
  "\x77\x61\x72\x6e\x2d\x6f\x6e\x2d\x75\x6e\x69\x6e\x74\x65\x67\x72"
  "\x61\x74\x65\x64\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x41\x02\x06"
  "\x23\x03\x1c\x06\x0f\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x6e"
  "\x61\x6d\x65\x42\x04\x04\x1e\x03\x24\x03\x15\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x2f\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x21\x43"
  "\x08\xd7\x01\x18\x81\x89\x02\xd6\x01\x16\x81\x83\x02\xd5\x01\x14"
  "\x81\x87\x02\xd4\x01\x12\x81\x87\x02\xd3\x01\x10\x81\x83\x02\xd2"
  "\x01\x0e\x81\x87\x02\xd1\x01\x0c\x81\x89\x02\xd0\x01\x0a\x81\x87"
  "\x02\xcf\x01\x08\x81\x87\x02\xce\x01\x06\x81\x87\x02\xcd\x01\x04"
  "\x85\x08\x17\x34\x44\x02\x18\x04\x0f\x77\x69\x74\x68\x2d\x6e\x65"
  "\x77\x2d\x73\x63\x6f\x64\x65\x02\xda\x01\x08\x81\x85\x02\xd9\x01"
  "\x06\x81\x85\x02\xd8\x01\x04\x84\x06\x07\x0f\x45\x02\x19\x05\x12"
  "\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x61\x63\x74\x69\x6f\x6e"
  "\x73\x46\x04\x2f\x03\xdf\x01\x0c\x81\x8b\x02\xde\x01\x0a\x81\x87"
  "\x02\xdd\x01\x08\x81\x89\x02\xdc\x01\x06\x81\x89\x02\xdb\x01\x04"
  "\x85\x08\x0b\x16\x47\x02\x1a\xe0\x01\x04\x85\x08\x03\x48\x02\x1b"
  "\x17\x49\x6e\x74\x65\x67\x72\x61\x74\x69\x6e\x67\x20\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x20\x26\x73\x66\x3a\x64\x69\x73\x70\x6c"
  "\x61\x79\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65\x73\x3f\x49\x03\x04"
  "\x12\x77\x69\x74\x68\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67"
  "\x04\x06\x77\x72\x69\x74\x65\x04\xe5\x01\x0c\x81\x85\x02\xe4\x01"
  "\x0a\x81\x85\x02\xe3\x01\x08\x81\x85\x02\xe2\x01\x06\x81\x85\x02"
  "\xe1\x01\x04\x84\x06\x0b\x1a\x4a\x02\x1c\x1f\x55\x6e\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x64\x20\x64\x65\x66\x69\x6e\x65\x64\x20"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x3a\x02\x04\x12\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x73\x2f\x73\x68\x61\x64\x6f\x77\x4b\x06\x1b"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x72\x65\x63\x75"
  "\x72\x73\x69\x76\x65\x2d\x62\x69\x6e\x64\x4c\x04\x0c\x05\x46\x07"
  "\x10\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x2f\x6d\x61\x6b\x65"
  "\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x4d\x03\x17\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x2f\x75\x6e\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x64\x3f\x4e\x04\x09\xfa\x01\x2c\x81\x85\x02\xf9\x01\x2a\x81"
  "\x83\x02\xf8\x01\x28\x81\x85\x02\xf7\x01\x26\x83\x04\xf6\x01\x24"
  "\x81\x89\x02\xf5\x01\x22\x81\x95\x02\xf4\x01\x20\x81\x89\x02\xf3"
  "\x01\x1e\x81\x89\x02\xf2\x01\x1c\x81\x87\x02\xf1\x01\x1a\x81\x93"
  "\x02\xf0\x01\x18\x81\x89\x02\xef\x01\x16\x81\x89\x02\xee\x01\x14"
  "\x81\x87\x02\xed\x01\x12\x81\x8d\x02\xec\x01\x10\x81\x8f\x02\xeb"
  "\x01\x0e\x81\x8f\x02\xea\x01\x0c\x81\x8b\x02\xe9\x01\x0a\x81\x8d"
  "\x02\xe8\x01\x08\x81\x89\x02\xe7\x01\x06\x81\x87\x02\xe6\x01\x04"
  "\x85\x08\x2b\x47\x4f\x02\x1d\x03\x14\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x2f\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x03\x14\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x2f\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x64\x03\x15\x76\x61\x72\x69\x61\x62\x6c\x65\x2f\x6d\x61\x79\x2d"
  "\x69\x67\x6e\x6f\x72\x65\x3f\x03\x16\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x2f\x6d\x75\x73\x74\x2d\x69\x67\x6e\x6f\x72\x65\x3f\x05\xff"
  "\x01\x0c\x81\x83\x02\xfe\x01\x0a\x81\x83\x02\xfd\x01\x08\x81\x83"
  "\x02\xfc\x01\x06\x81\x83\x02\xfb\x01\x04\x83\x04\x0b\x18\x50\x02"
  "\x1e\x1d\x55\x6e\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x64\x20\x62"
  "\x6f\x75\x6e\x64\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x3a\x02\x08"
  "\x02\x02\x04\x16\x6d\x61\x79\x62\x65\x2d\x64\x69\x73\x70\x6c\x61"
  "\x79\x69\x6e\x67\x2d\x6e\x61\x6d\x65\x51\x05\x0a\x05\x33\x04\x33"
  "\x09\x0f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x6d\x61\x6b\x65"
  "\x0a\x05\x0e\x04\x0c\x04\x4b\x04\x4d\x03\x4e\x05\x0c\x9a\x02\x38"
  "\x81\x87\x02\x99\x02\x36\x81\x83\x02\x98\x02\x34\x81\x83\x02\x97"
  "\x02\x32\x83\x04\x96\x02\x30\x81\x87\x02\x95\x02\x2e\x81\x8f\x02"
  "\x94\x02\x2c\x81\x8d\x02\x93\x02\x2a\x81\x89\x02\x92\x02\x28\x81"
  "\x8d\x02\x91\x02\x26\x81\x85\x02\x90\x02\x24\x81\x83\x02\x8f\x02"
  "\x22\x81\x85\x02\x8e\x02\x20\x81\x83\x02\x8d\x02\x1e\x81\x85\x02"
  "\x8c\x02\x1c\x81\x83\x02\x8b\x02\x1a\x81\x83\x02\x8a\x02\x18\x81"
  "\x8b\x02\x89\x02\x16\x81\x85\x02\x88\x02\x14\x81\x83\x02\x87\x02"
  "\x12\x81\x83\x02\x86\x02\x10\x81\x83\x02\x85\x02\x0e\x81\x8f\x02"
  "\x84\x02\x0c\x81\x8d\x02\x83\x02\x0a\x81\x8b\x02\x82\x02\x08\x81"
  "\x89\x02\x81\x02\x06\x81\x87\x02\x80\x02\x04\x85\x08\x37\x60\x4b"
  "\x02\x1f\x26\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2d\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x2d\x76\x65\x63\x74\x6f\x72\x0c\x02\x9f\x02\x0c\x81\x8d\x02"
  "\x9e\x02\x0a\x81\x8f\x02\x9d\x02\x08\x81\x8d\x02\x9c\x02\x06\x81"
  "\x8d\x02\x9b\x02\x04\x88\x0e\x0b\x13\x52\x02\x20\x08\x1a\x69\x6e"
  "\x74\x65\x67\x72\x61\x74\x65\x2f\x61\x63\x63\x65\x73\x73\x2d\x6f"
  "\x70\x65\x72\x61\x74\x6f\x72\x53\x02\xa0\x02\x04\x88\x0e\x03\x54"
  "\x02\x21\x12\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x15\x16\x17\x18\x05\x0e\x03\x19\x06\x1a\x06\x1b"
  "\x03\x1c\x03\x1d\x04\x1e\x06\x11\x63\x6f\x6d\x62\x69\x6e\x61\x74"
  "\x69\x6f\x6e\x2f\x6d\x61\x6b\x65\x1b\x08\x27\x04\x1f\x04\x20\x0c"
  "\xb1\x02\x24\x81\x87\x02\xb0\x02\x22\x81\x87\x02\xaf\x02\x20\x81"
  "\x8b\x02\xae\x02\x1e\x81\x89\x02\xad\x02\x1c\x81\x87\x02\xac\x02"
  "\x1a\x81\x83\x02\xab\x02\x18\x81\x89\x02\xaa\x02\x16\x81\x89\x02"
  "\xa9\x02\x14\x81\x87\x02\xa8\x02\x12\x81\x8b\x02\xa7\x02\x10\x81"
  "\x89\x02\xa6\x02\x0e\x81\x83\x02\xa5\x02\x0c\x81\x93\x02\xa4\x02"
  "\x0a\x81\x8f\x02\xa3\x02\x08\x81\x8d\x02\xa2\x02\x06\x81\x8f\x02"
  "\xa1\x02\x04\x88\x0e\x23\x47\x1a\x02\x22\x29\x56\x61\x6c\x75\x65"
  "\x20\x6f\x66\x20\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x20\x75"
  "\x73\x65\x64\x20\x61\x73\x20\x61\x6e\x20\x6f\x70\x65\x72\x61\x74"
  "\x6f\x72\x2e\x03\x05\x0e\x06\x1b\x04\xb4\x02\x08\x81\x8d\x02\xb3"
  "\x02\x06\x81\x8d\x02\xb2\x02\x04\x88\x0e\x07\x12\x55\x02\x23\x08"
  "\x1e\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2d\x63\x6f\x6d\x62\x69"
  "\x6e\x61\x74\x69\x6f\x6e\x2f\x64\x65\x66\x61\x75\x6c\x74\x56\x02"
  "\xb5\x02\x04\x88\x0e\x03\x57\x02\x24\x08\x56\x02\xb6\x02\x04\x88"
  "\x0e\x03\x58\x02\x25\x04\x63\x64\x72\x59\x06\x61\x70\x70\x6c\x79"
  "\x1e\x41\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x20\x6f\x66\x20"
  "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20\x76\x61\x6c\x75\x65\x16\x45"
  "\x6c\x69\x64\x65\x20\x64\x6f\x75\x62\x6c\x65\x20\x6e\x65\x67\x61"
  "\x74\x69\x76\x65\x04\x63\x61\x72\x5a\x04\x6e\x6f\x74\x22\x73\x66"
  "\x3a\x65\x6e\x61\x62\x6c\x65\x2d\x65\x6c\x69\x64\x65\x2d\x64\x6f"
  "\x75\x62\x6c\x65\x2d\x6e\x65\x67\x61\x74\x69\x76\x65\x73\x3f\x5b"
  "\x02\x04\x18\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x63\x6f"
  "\x6e\x73\x74\x61\x6e\x74\x2d\x65\x71\x3f\x04\x32\x03\x14\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x62\x6f\x6f\x6c\x65\x61\x6e"
  "\x3f\x03\x18\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x63\x61"
  "\x6c\x6c\x2d\x74\x6f\x2d\x6e\x6f\x74\x3f\x03\x15\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f"
  "\x04\x09\x6c\x65\x6e\x67\x74\x68\x3d\x3f\x04\x03\x16\x69\x6e\x74"
  "\x65\x67\x72\x61\x74\x65\x2f\x68\x61\x63\x6b\x2d\x61\x70\x70\x6c"
  "\x79\x3f\x32\x08\x1d\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x70\x65\x72\x61\x74\x6f"
  "\x72\x5c\x08\x27\x08\x56\x0c\xcb\x02\x2c\x81\x8d\x02\xca\x02\x2a"
  "\x81\x8f\x02\xc9\x02\x28\x81\x8f\x02\xc8\x02\x26\x81\x8f\x02\xc7"
  "\x02\x24\x81\x8f\x02\xc6\x02\x22\x81\x8d\x02\xc5\x02\x20\x81\x8d"
  "\x02\xc4\x02\x1e\x81\x8f\x02\xc3\x02\x1c\x81\x8d\x02\xc2\x02\x1a"
  "\x81\x8f\x02\xc1\x02\x18\x81\x8d\x02\xc0\x02\x16\x81\x8f\x02\xbf"
  "\x02\x14\x81\x8f\x02\xbe\x02\x12\x81\x8f\x02\xbd\x02\x10\x81\x8d"
  "\x02\xbc\x02\x0e\x81\x91\x02\xbb\x02\x0c\x81\x8d\x02\xba\x02\x0a"
  "\x81\x8d\x02\xb9\x02\x08\x81\x8d\x02\xb8\x02\x06\x81\x8d\x02\xb7"
  "\x02\x04\x88\x0e\x2b\x51\x5d\x02\x26\x06\x1b\x02\xcc\x02\x04\x88"
  "\x0e\x03\x5e\x02\x27\x08\x56\x02\xcd\x02\x04\x88\x0e\x03\x5f\x02"
  "\x28\x47\x44\x65\x6c\x61\x79\x65\x64\x20\x6f\x62\x6a\x65\x63\x74"
  "\x20\x69\x6e\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x20\x70\x6f\x73"
  "\x69\x74\x69\x6f\x6e\x2e\x20\x20\x54\x68\x69\x73\x20\x77\x69\x6c"
  "\x6c\x20\x63\x61\x75\x73\x65\x20\x61\x20\x72\x75\x6e\x74\x69\x6d"
  "\x65\x20\x65\x72\x72\x6f\x72\x2e\x03\x05\x0e\x06\x1b\x04\xd0\x02"
  "\x08\x81\x8d\x02\xcf\x02\x06\x81\x8d\x02\xce\x02\x04\x88\x0e\x07"
  "\x12\x60\x02\x29\x08\x56\x02\xd1\x02\x04\x88\x0e\x03\x61\x02\x2a"
  "\x32\x49\x4e\x54\x45\x52\x4e\x41\x4c\x2d\x45\x52\x52\x4f\x52\x3a"
  "\x20\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2d\x63\x6f\x6d\x62\x69"
  "\x6e\x61\x74\x69\x6f\x6e\x20\x27\x6f\x70\x65\x6e\x2d\x62\x6c\x6f"
  "\x63\x6b\x03\x1e\x02\xd2\x02\x04\x88\x0e\x03\x0a\x62\x02\x2b\x08"
  "\x56\x02\xd3\x02\x04\x88\x0e\x03\x63\x02\x2c\x06\x15\x73\x69\x6d"
  "\x75\x6c\x61\x74\x65\x2d\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f"
  "\x6e\x05\x2d\x03\xd5\x02\x06\x81\x8b\x02\xd4\x02\x04\x87\x0c\x05"
  "\x0d\x64\x02\x2d\x08\x56\x02\xd6\x02\x04\x88\x0e\x03\x65\x02\x2e"
  "\x08\x1d\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x66\x02"
  "\xd7\x02\x04\x88\x0e\x03\x67\x02\x2f\x12\x55\x6e\x6b\x6e\x6f\x77"
  "\x6e\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x15\x16\x17\x18\x06"
  "\x23\x03\x24\x03\x1c\x06\x42\x04\x1e\x06\x1b\x03\x43\x08\x27\x05"
  "\x0e\x0a\xe3\x02\x1a\x81\x89\x02\xe2\x02\x18\x81\x89\x02\xe1\x02"
  "\x16\x81\x87\x02\xe0\x02\x14\x81\x87\x02\xdf\x02\x12\x81\x87\x02"
  "\xde\x02\x10\x81\x83\x02\xdd\x02\x0e\x81\x89\x02\xdc\x02\x0c\x81"
  "\x89\x02\xdb\x02\x0a\x81\x87\x02\xda\x02\x08\x81\x83\x02\xd9\x02"
  "\x06\x81\x8d\x02\xd8\x02\x04\x88\x0e\x19\x37\x43\x02\x30\x08\x56"
  "\x02\xe4\x02\x04\x88\x0e\x03\x24\x02\x31\x44\x28\x54\x48\x45\x2d"
  "\x45\x4e\x56\x49\x52\x4f\x4e\x4d\x45\x4e\x54\x29\x20\x75\x73\x65"
  "\x64\x20\x61\x73\x20\x61\x6e\x20\x6f\x70\x65\x72\x61\x74\x6f\x72"
  "\x2e\x20\x20\x57\x69\x6c\x6c\x20\x63\x61\x75\x73\x65\x20\x61\x20"
  "\x72\x75\x6e\x74\x69\x6d\x65\x20\x65\x72\x72\x6f\x72\x2e\x03\x05"
  "\x0e\x06\x1b\x04\xe7\x02\x08\x81\x8d\x02\xe6\x02\x06\x81\x8d\x02"
  "\xe5\x02\x04\x88\x0e\x07\x12\x23\x02\x32\x03\x0b\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x3f\x18\x06\x1b\x04\x1c\x69\x6e\x74\x65\x67"
  "\x72\x61\x74\x65\x2f\x63\x6f\x6d\x70\x6f\x75\x6e\x64\x2d\x6f\x70"
  "\x65\x72\x61\x74\x6f\x72\x17\x05\x0e\x07\x1d\x69\x6e\x74\x65\x67"
  "\x72\x61\x74\x65\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6f"
  "\x70\x65\x72\x61\x74\x6f\x72\x16\x06\xef\x02\x12\x81\x83\x02\xee"
  "\x02\x10\x81\x85\x02\xed\x02\x0e\x81\x83\x02\xec\x02\x0c\x81\x81"
  "\x02\xeb\x02\x0a\x81\x83\x02\xea\x02\x08\x81\x8d\x02\xe9\x02\x06"
  "\x81\x83\x02\xe8\x02\x04\x88\x0e\x11\x1f\x15\x02\x33\x59\x05\x63"
  "\x6f\x6e\x73\x05\x63\x6f\x6e\x73\x5a\x05\x66\x61\x69\x6c\x03\x0a"
  "\x6c\x61\x73\x74\x2d\x70\x61\x69\x72\x03\x30\x04\x33\x03\x36\x03"
  "\x0d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x3f\x33\x03\x0c"
  "\x67\x6c\x6f\x62\x61\x6c\x2d\x72\x65\x66\x3f\x07\x81\x03\x26\x81"
  "\x85\x02\x80\x03\x24\x81\x83\x02\xff\x02\x22\x81\x85\x02\xfe\x02"
  "\x20\x81\x85\x02\xfd\x02\x1e\x81\x85\x02\xfc\x02\x1c\x81\x85\x02"
  "\xfb\x02\x1a\x81\x85\x02\xfa\x02\x18\x81\x85\x02\xf9\x02\x16\x81"
  "\x83\x02\xf8\x02\x14\x81\x83\x02\xf7\x02\x12\x81\x83\x02\xf6\x02"
  "\x10\x81\x83\x02\xf5\x02\x0e\x81\x83\x02\xf4\x02\x0c\x81\x87\x02"
  "\xf3\x02\x0a\x81\x85\x02\xf2\x02\x08\x81\x85\x02\xf1\x02\x06\x81"
  "\x83\x02\xf0\x02\x04\x83\x04\x25\x3f\x30\x02\x34\x08\x5a\x59\x18"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x65\x66\x66\x65\x63"
  "\x74\x2d\x66\x72\x65\x65\x3f\x02\x04\x09\x66\x6f\x72\x2d\x61\x6c"
  "\x6c\x3f\x04\x14\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x77\x69"
  "\x74\x68\x2d\x62\x6f\x64\x79\x5a\x03\x2c\x03\x33\x03\x08\x72\x65"
  "\x76\x65\x72\x73\x65\x03\x0d\x64\x65\x63\x6c\x61\x72\x61\x74\x69"
  "\x6f\x6e\x3f\x03\x18\x04\x17\x04\x16\x73\x65\x71\x75\x65\x6e\x63"
  "\x65\x2d\x77\x69\x74\x68\x2d\x61\x63\x74\x69\x6f\x6e\x73\x59\x03"
  "\x0b\x04\x1c\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x77"
  "\x69\x74\x68\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x33\x04"
  "\x1a\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x77\x69\x74"
  "\x68\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x0d\xa3\x03\x46\x81"
  "\x8b\x02\xa2\x03\x44\x81\x89\x02\xa1\x03\x42\x81\x89\x02\xa0\x03"
  "\x40\x81\x89\x02\x9f\x03\x3e\x81\x87\x02\x9e\x03\x3c\x81\x87\x02"
  "\x9d\x03\x3a\x81\x85\x02\x9c\x03\x38\x81\x85\x02\x9b\x03\x36\x81"
  "\x89\x02\x9a\x03\x34\x81\x87\x02\x99\x03\x32\x81\x89\x02\x98\x03"
  "\x30\x81\x87\x02\x97\x03\x2e\x81\x87\x02\x96\x03\x2c\x81\x85\x02"
  "\x95\x03\x2a\x81\x8b\x02\x94\x03\x28\x81\x89\x02\x93\x03\x26\x81"
  "\x85\x02\x92\x03\x24\x81\x85\x02\x91\x03\x22\x81\x89\x02\x90\x03"
  "\x20\x81\x87\x02\x8f\x03\x1e\x81\x85\x02\x8e\x03\x1c\x81\x89\x02"
  "\x8d\x03\x1a\x81\x85\x02\x8c\x03\x18\x81\x85\x02\x8b\x03\x16\x81"
  "\x87\x02\x8a\x03\x14\x81\x87\x02\x89\x03\x12\x81\x85\x02\x88\x03"
  "\x10\x81\x87\x02\x87\x03\x0e\x81\x85\x02\x86\x03\x0c\x81\x85\x02"
  "\x85\x03\x0a\x83\x04\x84\x03\x08\x81\x85\x02\x83\x03\x06\x81\x87"
  "\x02\x82\x03\x04\x84\x06\x45\x6a\x18\x02\x35\x06\x1b\x02\xa6\x03"
  "\x08\x81\x89\x02\xa5\x03\x06\x81\x85\x02\xa4\x03\x04\x84\x06\x07"
  "\x10\x1b\x02\x36\x05\x37\x02\xa9\x03\x08\x81\x87\x02\xa8\x03\x06"
  "\x81\x85\x02\xa7\x03\x04\x84\x06\x07\x10\x37\x02\x37\x11\x68\x61"
  "\x63\x6b\x69\x66\x79\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x0b\x02"
  "\x04\x4d\x09\x0a\x03\x0b\x04\xb8\x03\x20\x81\x8f\x02\xb7\x03\x1e"
  "\x81\x8d\x02\xb6\x03\x1c\x81\x8b\x02\xb5\x03\x1a\x81\x89\x02\xb4"
  "\x03\x18\x81\x87\x02\xb3\x03\x16\x81\x85\x02\xb2\x03\x14\x81\x87"
  "\x02\xb1\x03\x12\x81\x85\x02\xb0\x03\x10\x81\x85\x02\xaf\x03\x0e"
  "\x81\x89\x02\xae\x03\x0c\x81\x87\x02\xad\x03\x0a\x81\x85\x02\xac"
  "\x03\x08\x81\x89\x02\xab\x03\x06\x81\x87\x02\xaa\x03\x04\x84\x06"
  "\x1f\x32\x0a\x02\x38\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74"
  "\x21\x68\x02\x03\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65"
  "\x03\x1a\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x6e\x69\x6e\x74\x65"
  "\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x03\xbc\x03\x0a\x81"
  "\x89\x02\xbb\x03\x08\x81\x87\x02\xba\x03\x06\x81\x8b\x02\xb9\x03"
  "\x04\x83\x04\x09\x15\x69\x02\x39\x04\x2f\x02\xbe\x03\x06\x81\x85"
  "\x02\xbd\x03\x04\x84\x06\x05\x0d\x2f\x02\x3a\x03\x36\x03\x1b\x73"
  "\x79\x73\x74\x65\x6d\x2d\x67\x6c\x6f\x62\x61\x6c\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3f\x03\xc1\x03\x08\x81\x83\x02"
  "\xc0\x03\x06\x81\x83\x02\xbf\x03\x04\x83\x04\x07\x11\x36\x02\x3b"
  "\x68\x02\x1a\x64\x65\x6c\x61\x79\x65\x64\x2d\x69\x6e\x74\x65\x67"
  "\x72\x61\x74\x69\x6f\x6e\x2f\x66\x6f\x72\x63\x65\x6a\x02\x04\x10"
  "\x05\x1a\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x62\x69"
  "\x6e\x64\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04\x19\x64\x65\x6c"
  "\x61\x79\x65\x64\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e"
  "\x2f\x6d\x61\x6b\x65\x04\x4d\x05\xca\x03\x14\x81\x85\x02\xc9\x03"
  "\x12\x81\x8d\x02\xc8\x03\x10\x81\x85\x02\xc7\x03\x0e\x81\x91\x02"
  "\xc6\x03\x0c\x81\x8d\x02\xc5\x03\x0a\x81\x8b\x02\xc4\x03\x08\x81"
  "\x85\x02\xc3\x03\x06\x81\x89\x02\xc2\x03\x04\x86\x0a\x13\x24\x4d"
  "\x02\x3c\x22\x02\x07\x13\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2f\x6c\x6f\x6f\x6b\x75\x70\x22\x03\x1d\x04\x20\x03\x15\x64"
  "\x65\x6c\x61\x79\x65\x64\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x69"
  "\x6f\x6e\x3f\x20\x04\x1f\x03\x21\x64\x65\x6c\x61\x79\x65\x64\x2d"
  "\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x2f\x69\x6e\x2d\x70"
  "\x72\x6f\x67\x72\x65\x73\x73\x3f\x1d\x03\x6a\x08\xd6\x03\x1a\x81"
  "\x85\x02\xd5\x03\x18\x81\x85\x02\xd4\x03\x16\x81\x85\x02\xd3\x03"
  "\x14\x81\x85\x02\xd2\x03\x12\x81\x85\x02\xd1\x03\x10\x81\x8d\x02"
  "\xd0\x03\x0e\x81\x89\x02\xcf\x03\x0c\x81\x85\x02\xce\x03\x0a\x81"
  "\x8d\x02\xcd\x03\x08\x81\x8d\x02\xcc\x03\x06\x81\x89\x02\xcb\x03"
  "\x04\x86\x0a\x19\x30\x10\x02\x3d\x17\x55\x6e\x66\x69\x6e\x69\x73"
  "\x68\x65\x64\x20\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x14"
  "\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x69\x6e\x74\x65\x67\x72"
  "\x61\x74\x65\x07\x22\x03\x20\x04\x03\x1d\x03\x6a\x04\x1e\x07\xde"
  "\x03\x12\x81\x85\x02\xdd\x03\x10\x81\x85\x02\xdc\x03\x0e\x81\x83"
  "\x02\xdb\x03\x0c\x81\x85\x02\xda\x03\x0a\x81\x85\x02\xd9\x03\x08"
  "\x81\x83\x02\xd8\x03\x06\x81\x85\x02\xd7\x03\x04\x86\x0a\x11\x25"
  "\x22\x02\x3e\x11\x62\x65\x69\x6e\x67\x2d\x69\x6e\x74\x65\x67\x72"
  "\x61\x74\x65\x64\x20\xe0\x03\x06\x81\x83\x02\xdf\x03\x04\x83\x04"
  "\x05\x0c\x02\x3f\x26\x44\x65\x6c\x61\x79\x65\x64\x20\x69\x6e\x74"
  "\x65\x67\x72\x61\x74\x69\x6f\x6e\x20\x68\x61\x73\x20\x75\x6e\x6b"
  "\x6e\x6f\x77\x6e\x20\x73\x74\x61\x74\x65\x28\x41\x74\x74\x65\x6d"
  "\x70\x74\x20\x74\x6f\x20\x72\x65\x2d\x66\x6f\x72\x63\x65\x20\x64"
  "\x65\x6c\x61\x79\x65\x64\x20\x69\x6e\x74\x65\x67\x72\x61\x74\x69"
  "\x6f\x6e\x20\x0f\x6e\x6f\x74\x2d\x69\x6e\x74\x65\x67\x72\x61\x74"
  "\x65\x64\x68\x0b\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x05\x0e"
  "\x04\x1e\x03\xec\x03\x1a\x81\x87\x02\xeb\x03\x18\x81\x87\x02\xea"
  "\x03\x16\x81\x87\x02\xe9\x03\x14\x81\x87\x02\xe8\x03\x12\x81\x89"
  "\x02\xe7\x03\x10\x81\x87\x02\xe6\x03\x0e\x81\x85\x02\xe5\x03\x0c"
  "\x81\x85\x02\xe4\x03\x0a\x83\x04\xe3\x03\x08\x81\x83\x02\xe2\x03"
  "\x06\x81\x83\x02\xe1\x03\x04\x81\x83\x02\x19\x2c\x68\x3f\x20\x20"
  "\x68\x0a\x04\x22\x04\x10\x04\x4d\x04\x36\x04\x2f\x04\x69\x04\x0a"
  "\x04\x37\x04\x1b\x04\x18\x04\x30\x04\x15\x04\x0f\x6a\x1d\x15\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x2f\x66\x69\x6e\x61\x6c\x2d\x76\x61"
  "\x6c\x75\x65\x42\x4c\x19\x59\x0b\x5a\x33\x2c\x17\x32\x56\x0f\x23"
  "\x04\x24\x04\x66\x43\x04\x67\x04\x65\x04\x16\x64\x04\x63\x04\x62"
  "\x04\x61\x04\x60\x04\x5f\x04\x5c\x5e\x04\x5d\x04\x5b\x58\x04\x57"
  "\x04\x55\x04\x53\x1a\x04\x54\x04\x24\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x65\x74\x68\x6f\x64\x2f\x69\x6e\x74\x65\x67\x72\x61\x74\x65"
  "\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x6a\x27\x52\x04"
  "\x0c\x2d\x4e\x0d\x51\x49\x4b\x04\x50\x04\x4f\x04\x4a\x04\x10\x74"
  "\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x48\x04"
  "\x09\x73\x65\x71\x75\x65\x6e\x63\x65\x47\x04\x1f\x45\x04\x0a\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x44\x04\x41\x3e\x40\x04\x0a\x71"
  "\x75\x6f\x74\x61\x74\x69\x6f\x6e\x3f\x04\x0a\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x3d\x04\x0b\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63"
  "\x6b\x2e\x04\x3a\x3c\x31\x04\x0c\x64\x69\x73\x6a\x75\x6e\x63\x74"
  "\x69\x6f\x6e\x3b\x04\x06\x64\x65\x6c\x61\x79\x39\x04\x0c\x64\x65"
  "\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x38\x04\x09\x63\x6f\x6e\x73"
  "\x74\x61\x6e\x74\x35\x04\x29\x2b\x34\x04\x0c\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x61\x6c\x2a\x04\x0c\x63\x6f\x6d\x62\x69\x6e\x61"
  "\x74\x69\x6f\x6e\x28\x04\x0b\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x25\x04\x18\x64\x65\x66\x69\x6e\x65\x2d\x6d\x65\x74\x68\x6f"
  "\x64\x2f\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x69\x07\x61\x63\x63"
  "\x65\x73\x73\x21\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x13\x0e\x46\x26\x14\x69\x6e\x74\x65\x67"
  "\x72\x61\x74\x65\x2f\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x1c\x1e"
  "\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x2f\x67\x65\x74\x2d\x74\x6f"
  "\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x62\x6c\x6f\x63\x6b\x0a\x14\x04"
  "\x12\x04\x11\x04\x0f\x04\x09\x04\x04\x04\x0a\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x13\x0c\x03"
  "\x02\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x6d\x61\x6b"
  "\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x76\x65\x63\x74\x6f"
  "\x72\x03\x1f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x6d\x61"
  "\x6b\x65\x2d\x6d\x65\x74\x68\x6f\x64\x2d\x64\x65\x66\x69\x6e\x65"
  "\x72\x04\x69\x04\x6a\x05\x35\x6c\x80\x80\x04\x34\x6a\x81\x81\x02"
  "\x33\x68\x81\x81\x02\x32\x66\x81\x83\x02\x31\x64\x81\x83\x02\x30"
  "\x62\x81\x83\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c"
  "\x81\x83\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81\x83\x02\x2a\x56\x81"
  "\x83\x02\x29\x54\x81\x83\x02\x28\x52\x81\x83\x02\x27\x50\x81\x83"
  "\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x83\x02"
  "\x23\x48\x81\x83\x02\x22\x46\x81\x83\x02\x21\x44\x81\x83\x02\x20"
  "\x42\x81\x83\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x85\x02\x1d\x3c"
  "\x81\x83\x02\x1c\x3a\x81\x85\x02\x1b\x38\x81\x87\x02\x1a\x36\x81"
  "\x83\x02\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81\x83"
  "\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x83\x02"
  "\x13\x28\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10"
  "\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d\x1c"
  "\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81"
  "\x83\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x83"
  "\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x85\x02"
  "\x03\x08\x81\x87\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x6b"
  "\xc8\x01";

SCHEME_OBJECT *
subst_so_data_32eaccb7886683e7 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_subst_so_data_32eaccb7886683e7 [0]))), (sizeof (prog_subst_so_data_32eaccb7886683e7)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_61]));
}

DECLARE_COMPILED_DATA_NS ("subst.so", subst_so_data_32eaccb7886683e7)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("subst.so", "70c206869c9dcdcd")
