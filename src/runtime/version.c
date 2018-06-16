/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:01-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_10 11
#define LABEL_1_13 13
#define LABEL_1_14 15
#define LABEL_1_12 17
#define ENVIRONMENT_LABEL_1_3 39
#define DEBUGGING_LABEL_1_2 38
#define OBJECT_1_5 37
#define OBJECT_1_4 36
#define OBJECT_1_3 35
#define OBJECT_1_2 34
#define OBJECT_1_1 33
#define OBJECT_1_0 32
#define EXECUTE_CACHE_1_15 19
#define EXECUTE_CACHE_1_11 21
#define EXECUTE_CACHE_1_9 23
#define EXECUTE_CACHE_1_6 25
#define FREE_REFERENCE_1_1 28
#define FREE_REFERENCE_1_0 29
#define FREE_ASSIGNMENT_1_0 31
#define FREE_REFERENCES_LABEL_1_0 18
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
version_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_1_13);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_1_14);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_13)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_20;

DEFLABEL (label_19)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_18)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_17;
  Wrd8 = Wrd12;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_15;
  Wrd14 = Wrd18;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Wrd5.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd15.pObj));

DEFLABEL (label_11)
  (Wrd14.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_13])), (Wrd9.pObj));

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_20)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_19;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_9)
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 13
#define DEBUGGING_LABEL_2_2 12
#define OBJECT_2_0 11
#define EXECUTE_CACHE_2_7 7
#define EXECUTE_CACHE_2_6 9
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
version_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      goto snarf_microcode_versionB_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (snarf_microcode_versionB_4)
DEFLABEL (snarf_microcode_versionB_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_9 7
#define LABEL_3_10 9
#define LABEL_3_8 11
#define LABEL_3_12 13
#define LABEL_3_16 15
#define LABEL_3_13 17
#define LABEL_3_17 19
#define LABEL_3_20 21
#define ENVIRONMENT_LABEL_3_3 55
#define DEBUGGING_LABEL_3_2 54
#define OBJECT_3_11 53
#define OBJECT_3_10 52
#define OBJECT_3_9 51
#define OBJECT_3_8 50
#define OBJECT_3_7 49
#define OBJECT_3_6 48
#define OBJECT_3_5 47
#define OBJECT_3_4 46
#define OBJECT_3_3 45
#define OBJECT_3_2 44
#define OBJECT_3_1 43
#define OBJECT_3_0 42
#define EXECUTE_CACHE_3_21 23
#define EXECUTE_CACHE_3_19 25
#define EXECUTE_CACHE_3_18 27
#define EXECUTE_CACHE_3_15 29
#define EXECUTE_CACHE_3_14 31
#define EXECUTE_CACHE_3_11 33
#define EXECUTE_CACHE_3_7 35
#define EXECUTE_CACHE_3_6 37
#define FREE_REFERENCE_3_1 40
#define FREE_REFERENCE_3_0 41
#define FREE_REFERENCES_LABEL_3_0 22
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
version_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd19;
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
      goto write_mit_scheme_copyright_21;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_3_9);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_3_10);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_17;

    case 6:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_3_20);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_mit_scheme_copyright_26)
DEFLABEL (write_mit_scheme_copyright_21)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_3_0]))
    goto label_29;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_28;

DEFLABEL (label_29)
  (Wrd19.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_28)
DEFLABEL (label_40)
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == (current_block [OBJECT_3_0]))
    goto label_31;
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_30;

DEFLABEL (label_31)
  (Wrd18.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_30)
DEFLABEL (label_39)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  if ((Wrd14.Obj) == (current_block [OBJECT_3_0]))
    goto label_38;
  (Wrd16.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_37;
  Wrd8 = Wrd12;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_35;
  Wrd14 = Wrd18;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (Wrd8.Obj) = (current_block [OBJECT_3_6]);
  (Wrd9.Obj) = (current_block [OBJECT_3_7]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_8]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_3_9]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_3_10]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [10]);
  if (! ((Wrd29.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_17);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_16);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_3_12);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_3_4]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_3_5]);
  (Rsp [5]) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Rsp [6]) = (Wrd17.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (label_33)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_10])), (Wrd15.pObj));

DEFLABEL (label_24)
  (Wrd14.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_9])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (lambda_27)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_3_20);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_11]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_9 7
#define LABEL_4_10 9
#define LABEL_4_8 11
#define LABEL_4_12 13
#define LABEL_4_14 15
#define LABEL_4_13 17
#define LABEL_4_16 19
#define LABEL_4_17 21
#define LABEL_4_19 23
#define LABEL_4_20 25
#define LABEL_4_22 27
#define LABEL_4_24 29
#define ENVIRONMENT_LABEL_4_3 56
#define DEBUGGING_LABEL_4_2 55
#define OBJECT_4_6 54
#define OBJECT_4_5 53
#define OBJECT_4_4 52
#define OBJECT_4_3 51
#define OBJECT_4_2 50
#define OBJECT_4_1 49
#define OBJECT_4_0 48
#define EXECUTE_CACHE_4_23 31
#define EXECUTE_CACHE_4_21 33
#define EXECUTE_CACHE_4_18 35
#define EXECUTE_CACHE_4_15 37
#define EXECUTE_CACHE_4_11 39
#define EXECUTE_CACHE_4_7 41
#define EXECUTE_CACHE_4_6 43
#define FREE_REFERENCE_4_1 46
#define FREE_REFERENCE_4_0 47
#define FREE_REFERENCES_LABEL_4_0 30
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
version_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_4_4);
      goto write_mit_scheme_license_21;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_9);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_4_10);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto loop_18;

    case 6:
      current_block = (Rpc - LABEL_4_14);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_4_16);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_4_19);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_4_22);
      goto continuation_16;

    case 13:
      current_block = (Rpc - LABEL_4_24);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_mit_scheme_license_29)
DEFLABEL (write_mit_scheme_license_21)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_4_0]))
    goto label_43;
  (Wrd10.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == (current_block [OBJECT_4_0]))
    goto label_32;
  Wrd8 = Wrd6;
  goto label_31;

DEFLABEL (label_32)
  (Wrd8.Obj) = (current_block [OBJECT_4_2]);

DEFLABEL (label_31)
DEFLABEL (label_42)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  if ((Wrd9.Obj) == (current_block [OBJECT_4_0]))
    goto label_34;
  Wrd11 = Wrd9;
  goto label_33;

DEFLABEL (label_34)
  (Wrd11.Obj) = (current_block [OBJECT_4_3]);

DEFLABEL (label_33)
DEFLABEL (label_41)
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_37;
  Wrd17 = Wrd21;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (* (--Rsp)) = Rvl;
  goto loop_18;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_10])), (Wrd18.pObj));

DEFLABEL (label_23)
  (Wrd17.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_40;
  Wrd23 = Wrd27;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd23.Obj);
  goto label_35;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_9])), (Wrd24.pObj));

DEFLABEL (label_24)
  (Wrd23.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (loop_30)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_4_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_50;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_48;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_47)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_44;
  Rvl = (current_block [OBJECT_4_6]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_4_22);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_46;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_45)
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_18;

DEFLABEL (label_46)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 1);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 1);

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_49;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_8 9
#define LABEL_5_10 11
#define TAG_5_11 4
#define ENVIRONMENT_LABEL_5_3 21
#define DEBUGGING_LABEL_5_2 20
#define OBJECT_5_0 19
#define EXECUTE_CACHE_5_12 13
#define EXECUTE_CACHE_5_9 15
#define EXECUTE_CACHE_5_6 17
#define FREE_REFERENCES_LABEL_5_0 12
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
version_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_5_4);
      goto split_paragraphs_7;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto loop_5;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (split_paragraphs_10)
DEFLABEL (split_paragraphs_7)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd5.Obj);
  goto loop_5;

DEFLABEL (loop_11)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_5_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_10])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_5_10);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_5;

DEFLABEL (label_13)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [2]);
  (Rsp [2]) = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_8 9
#define LABEL_6_9 11
#define LABEL_6_10 13
#define LABEL_6_11 15
#define LABEL_6_12 17
#define LABEL_6_16 19
#define TAG_6_17 8
#define LABEL_6_14 21
#define LABEL_6_18 23
#define ENVIRONMENT_LABEL_6_3 40
#define DEBUGGING_LABEL_6_2 39
#define OBJECT_6_3 38
#define OBJECT_6_2 37
#define OBJECT_6_1 36
#define OBJECT_6_0 35
#define EXECUTE_CACHE_6_19 25
#define EXECUTE_CACHE_6_15 27
#define EXECUTE_CACHE_6_13 29
#define EXECUTE_CACHE_6_6 31
#define FREE_REFERENCE_6_0 34
#define FREE_REFERENCES_LABEL_6_0 24
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
version_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd60;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
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
      current_block = (Rpc - LABEL_6_4);
      goto next_paragraph_15;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_6_11);
      goto loop_13;

    case 7:
      current_block = (Rpc - LABEL_6_12);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_6_16);
      goto lambda_24;

    case 9:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_6_18);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (next_paragraph_22)
DEFLABEL (next_paragraph_15)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd5.Obj);
  goto loop_13;

DEFLABEL (loop_23)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_6_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_30;

DEFLABEL (label_29)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_28;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_14);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;
  Wrd5 = Wrd9;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (Wrd13.Obj) = Rvl;

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_16])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  ((Wrd19.pObj) [2]) = (Wrd13.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  Rvl = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_18])), (Wrd6.pObj));

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd13.Obj) = (current_block [OBJECT_6_3]);
  Rsp = (& (Rsp [1]));
  goto label_25;

DEFLABEL (label_30)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_36;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_34;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [0]);

DEFLABEL (label_33)
  (Wrd51.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_32;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd52.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_31)
  (Rsp [0]) = (Wrd52.Obj);
  goto loop_13;

DEFLABEL (label_32)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_20)
  (Wrd52.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_19)
  (Wrd39.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_6_16);

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
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_5 3
#define LABEL_7_6 5
#define LABEL_7_4 7
#define LABEL_7_8 9
#define ENVIRONMENT_LABEL_7_3 18
#define DEBUGGING_LABEL_7_2 17
#define OBJECT_7_1 16
#define OBJECT_7_0 15
#define EXECUTE_CACHE_7_9 11
#define EXECUTE_CACHE_7_7 13
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
version_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_7_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_7_4);
      goto skip_blank_lines_4;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (skip_blank_lines_9)
DEFLABEL (skip_blank_lines_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_11;

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_15;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_13;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (label_13)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_7)
  (Wrd23.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
version_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto blank_lineP_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (blank_lineP_4)
DEFLABEL (blank_lineP_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define LABEL_9_10 11
#define ENVIRONMENT_LABEL_9_3 23
#define DEBUGGING_LABEL_9_2 22
#define OBJECT_9_0 21
#define EXECUTE_CACHE_9_12 13
#define EXECUTE_CACHE_9_11 15
#define EXECUTE_CACHE_9_9 17
#define EXECUTE_CACHE_9_6 19
#define FREE_REFERENCES_LABEL_9_0 12
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
version_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_9_4);
      goto split_into_lines_9;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (split_into_lines_12)
DEFLABEL (split_into_lines_9)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_6;

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_9_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (label_14)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_8 11
#define LABEL_10_9 13
#define LABEL_10_10 15
#define LABEL_10_13 17
#define LABEL_10_14 19
#define LABEL_10_15 21
#define LABEL_10_16 23
#define LABEL_10_17 25
#define ENVIRONMENT_LABEL_10_3 40
#define DEBUGGING_LABEL_10_2 39
#define OBJECT_10_3 38
#define OBJECT_10_2 37
#define OBJECT_10_1 36
#define OBJECT_10_0 35
#define EXECUTE_CACHE_10_18 27
#define EXECUTE_CACHE_10_12 29
#define EXECUTE_CACHE_10_11 31
#define FREE_REFERENCE_10_0 34
#define FREE_REFERENCES_LABEL_10_0 26
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
version_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd52;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto split_text_words_21;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto skip_white_14;

    case 5:
      current_block = (Rpc - LABEL_10_9);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_10_10);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_17;

    case 8:
      current_block = (Rpc - LABEL_10_14);
      goto skip_non_white_19;

    case 9:
      current_block = (Rpc - LABEL_10_15);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_10_16);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_10_17);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (split_text_words_29)
DEFLABEL (split_text_words_21)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_34;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_33)
  (Wrd16.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_10_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto loop_9;

DEFLABEL (label_34)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (loop_30)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_10_6);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto skip_white_14;

DEFLABEL (skip_white_31)
DEFLABEL (skip_white_14)
  INTERRUPT_CHECK (26, LABEL_10_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_37;

DEFLABEL (label_36)
  (Wrd10.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd12.Lng) < (Wrd14.Lng))
    goto label_35;
  (Wrd16.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd10.Obj);
  goto skip_non_white_19;

DEFLABEL (label_37)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd38.Obj) = (Rsp [5]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 30))
    goto label_41;
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_41;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_41;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd27.pChr) = (& ((Wrd35.pChr) [(Wrd24.Lng)]));
  (Wrd28.uLng) = ((unsigned long) (((unsigned char *) (Wrd27.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd29.Obj) = (MAKE_OBJECT (2, (Wrd28.uLng)));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_40)
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_39;
  Wrd45 = Wrd49;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_10_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd56.Lng) = ((Wrd55.Lng) + 1L);
  (Wrd53.Obj) = (LONG_TO_FIXNUM (Wrd56.Lng));
  (Rsp [0]) = (Wrd53.Obj);
  goto skip_white_14;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_10])), (Wrd46.pObj));

DEFLABEL (label_25)
  (Wrd45.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd40.Obj) = (Rsp [5]);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (skip_non_white_32)
DEFLABEL (skip_non_white_19)
  INTERRUPT_CHECK (26, LABEL_10_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_43;

DEFLABEL (label_42)
  (Wrd10.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_17);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_9;

DEFLABEL (label_43)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd37.Obj) = (Rsp [6]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 30))
    goto label_47;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_47;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd36.Lng))))
    goto label_47;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd26.pChr) = (& ((Wrd34.pChr) [(Wrd23.Lng)]));
  (Wrd27.uLng) = ((unsigned long) (((unsigned char *) (Wrd26.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd28.Obj) = (MAKE_OBJECT (2, (Wrd27.uLng)));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_46)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd48.Obj) = ((Wrd45.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_45;
  Wrd44 = Wrd48;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_10_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_42;
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd55.Lng) = ((Wrd54.Lng) + 1L);
  (Wrd52.Obj) = (LONG_TO_FIXNUM (Wrd55.Lng));
  (Rsp [0]) = (Wrd52.Obj);
  goto skip_non_white_19;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_16])), (Wrd45.pObj));

DEFLABEL (label_27)
  (Wrd44.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd39.Obj) = (Rsp [6]);
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_8 9
#define LABEL_11_11 11
#define LABEL_11_9 13
#define LABEL_11_13 15
#define LABEL_11_12 17
#define LABEL_11_15 19
#define LABEL_11_14 21
#define LABEL_11_17 23
#define LABEL_11_18 25
#define LABEL_11_20 27
#define LABEL_11_19 29
#define LABEL_11_22 31
#define LABEL_11_23 33
#define LABEL_11_27 35
#define LABEL_11_24 37
#define LABEL_11_26 39
#define LABEL_11_28 41
#define ENVIRONMENT_LABEL_11_3 62
#define DEBUGGING_LABEL_11_2 61
#define OBJECT_11_7 60
#define OBJECT_11_6 59
#define OBJECT_11_5 58
#define OBJECT_11_4 57
#define OBJECT_11_3 56
#define OBJECT_11_2 55
#define OBJECT_11_1 54
#define OBJECT_11_0 53
#define EXECUTE_CACHE_11_25 43
#define EXECUTE_CACHE_11_21 45
#define EXECUTE_CACHE_11_16 47
#define EXECUTE_CACHE_11_10 49
#define EXECUTE_CACHE_11_6 51
#define FREE_REFERENCES_LABEL_11_0 42
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
version_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd6;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_11_4);
      goto write_words_23;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto write_first_word_10;

    case 4:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_11_12);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_11_15);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_11_17);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_11_18);
      goto write_rest_words_21;

    case 12:
      current_block = (Rpc - LABEL_11_20);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_11_19);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_11_22);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_11_23);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_11_27);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_11_24);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_11_26);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_11_28);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_words_34)
DEFLABEL (write_words_23)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_38;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((Wrd13.Lng) - 5L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_38;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_37)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto write_first_word_10;

DEFLABEL (label_38)
  (Wrd7.Obj) = (current_block [OBJECT_11_0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (write_first_word_35)
DEFLABEL (write_first_word_10)
  INTERRUPT_CHECK (26, LABEL_11_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (label_40)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_41;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_39;

DEFLABEL (label_41)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_11);
  goto label_40;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_48;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_47)
  (Wrd17.Obj) = (Rsp [3]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd19.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto label_42;

DEFLABEL (label_43)
  (Wrd22.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_42)
DEFLABEL (label_46)
  (Wrd20.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_45;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_44)
  (Rsp [0]) = (Wrd6.Obj);
  goto write_rest_words_21;

DEFLABEL (label_45)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_28)
  (Wrd6.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_48)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (write_rest_words_36)
DEFLABEL (write_rest_words_21)
  INTERRUPT_CHECK (26, LABEL_11_18);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_49;
  Rvl = (current_block [OBJECT_11_6]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_58;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_57)
  (Wrd21.Obj) = (current_block [OBJECT_11_5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11_19);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_56;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_56;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd25.Lng) > (Wrd27.Lng))
    goto label_55;

DEFLABEL (label_54)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_11_5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_11_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_53;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_52)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_11_26);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_51;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_50)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  goto write_rest_words_21;

DEFLABEL (label_51)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_28]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_27]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_11_24);
  (Wrd5.Obj) = (current_block [OBJECT_11_7]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto write_first_word_10;

DEFLABEL (label_56)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_55;

DEFLABEL (label_58)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_57;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define LABEL_12_8 11
#define LABEL_12_9 13
#define LABEL_12_10 15
#define ENVIRONMENT_LABEL_12_3 24
#define DEBUGGING_LABEL_12_2 23
#define OBJECT_12_6 22
#define OBJECT_12_5 21
#define OBJECT_12_4 20
#define OBJECT_12_3 19
#define OBJECT_12_2 18
#define OBJECT_12_1 17
#define OBJECT_12_0 16
#define FREE_REFERENCES_LABEL_12_0 16
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
version_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto new_column_21;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto loop_19;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto do_loop_14;

    case 5:
      current_block = (Rpc - LABEL_12_9);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_12_10);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_column_28)
DEFLABEL (new_column_21)
  INTERRUPT_CHECK (26, LABEL_12_4);
  goto loop_19;

DEFLABEL (loop_29)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_12_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_31;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  if (! ((Wrd6.uLng) == 1))
    goto label_35;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_34)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 30))
    goto label_33;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Obj) = (MAKE_OBJECT (26, (Wrd21.uLng)));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_32)
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd30.Obj);
  goto do_loop_14;

DEFLABEL (label_33)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (do_loop_30)
DEFLABEL (do_loop_14)
  INTERRUPT_CHECK (26, LABEL_12_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_38;
  (Wrd10.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_37;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_36)
  (Rsp [1]) = (Wrd11.Obj);
  goto loop_19;

DEFLABEL (label_37)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_6]), 1);

DEFLABEL (label_25)
  (Wrd11.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 30))
    goto label_43;
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_43;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_43;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd25.pChr) = (& ((Wrd33.pChr) [(Wrd22.Lng)]));
  (Wrd26.uLng) = ((unsigned long) (((unsigned char *) (Wrd25.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd27.Obj) = (MAKE_OBJECT (2, (Wrd26.uLng)));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_42)
  (Wrd43.Obj) = (Rsp [0]);
  if ((Wrd43.Obj) == (current_block [OBJECT_12_4]))
    goto label_40;
  (Wrd46.Obj) = (current_block [OBJECT_12_5]);
  goto label_39;

DEFLABEL (label_40)
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd60.Lng) = 8L;
  (Wrd65.Lng) = (FIXNUM_REMAINDER ((Wrd58.Lng), (Wrd60.Lng)));
  (Wrd66.Lng) = ((Wrd60.Lng) - (Wrd65.Lng));
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd66.Lng));

DEFLABEL (label_39)
DEFLABEL (label_41)
  Rsp = (& (Rsp [1]));
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  (Wrd51.Lng) = ((Wrd49.Lng) + (Wrd50.Lng));
  (Wrd47.Obj) = (LONG_TO_FIXNUM (Wrd51.Lng));
  (Rsp [1]) = (Wrd47.Obj);
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd55.Lng) = ((Wrd54.Lng) + 1L);
  (Wrd52.Obj) = (LONG_TO_FIXNUM (Wrd55.Lng));
  (Rsp [0]) = (Wrd52.Obj);
  goto do_loop_14;

DEFLABEL (label_43)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_8 7
#define LABEL_9 9
#define LABEL_10 11
#define ENVIRONMENT_LABEL_3 26
#define DEBUGGING_LABEL_2 25
#define PURIFICATION_ROOT 24
#define OBJECT_5 23
#define OBJECT_4 22
#define OBJECT_3 21
#define OBJECT_2 20
#define OBJECT_1 19
#define OBJECT_0 18
#define EXECUTE_CACHE_6 13
#define GLOBAL_EXECUTE_CACHE_7 16
#define FREE_REFERENCES_LABEL_0 12
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
version_so_52e7d63d06154e12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd12;
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
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto expression_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_3)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_7)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_6)
  {
    static const short sections [] =
      {
	0,
	0,
	1,
	2,
	1,
	1,
	1,
	2,
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
    if (counter > 12)
      goto label_5;
    blocks = (current_block [OBJECT_5]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_8])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_5)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_4]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_version_so_52e7d63d06154e12 [12] =
  {
    { "version_so_code_1", 8, version_so_code_1 },
    { "version_so_code_2", 2, version_so_code_2 },
    { "version_so_code_3", 10, version_so_code_3 },
    { "version_so_code_4", 14, version_so_code_4 },
    { "version_so_code_5", 5, version_so_code_5 },
    { "version_so_code_6", 11, version_so_code_6 },
    { "version_so_code_7", 4, version_so_code_7 },
    { "version_so_code_8", 2, version_so_code_8 },
    { "version_so_code_9", 5, version_so_code_9 },
    { "version_so_code_10", 12, version_so_code_10 },
    { "version_so_code_11", 20, version_so_code_11 },
    { "version_so_code_12", 7, version_so_code_12 }
  };

int
decl_version_so_52e7d63d06154e12 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_version_so_52e7d63d06154e12);
  return (0);
}

DECLARE_COMPILED_CODE ("version.so", 5, decl_version_so_52e7d63d06154e12, version_so_52e7d63d06154e12)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_version_so_data_52e7d63d06154e12 [3089] =
  "\x4c\x1f\xb3\x04\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x02\x02\x08"
  "\x89\x0c\x02\x82\x08\x89\x02\x02\x0d\xb9\x25\x0d\xba\x0d\x24\x28"
  "\x0d\x28\x0d\xbb\x28\xb2\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x82"
  "\x88\x0c\x28\x0d\x28\xb3\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d"
  "\xb0\x83\x88\x0c\x0c\x0c\x0c\x08\x0c\x0c\x0c\x0d\xbd\x0c\x0c\x1d"
  "\xb1\x0d\x24\x28\x0d\xbe\x28\x0d\xbf\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x84\x88\x1d\xc1\x1c\xc1\x1c\x06\x0c\x0d\x1c\x1d\x0d\x1c\x0d"
  "\x1c\x24\x28\xb6\x28\xb7\x28\x0d\xbf\x28\x1b\x28\x0d\xbe\x28\x0d"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x08\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x86\x88\x06\x1b\x1b\x08\x0d\x1c\x24\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x80\x08\xc1\x1c\x0d"
  "\x24\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1d\x0c\x1b\x80\x0c\x1b\x85"
  "\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x28\xb6\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x02\x88\x1b\x81\x0f\x1b"
  "\x80\x1b\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\xb6\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x0c\x0c\x1b\x2a\x1b\x2a\xb3"
  "\x2a\x17\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb7\x1b\x1b\x1b\xb5\xb2\x17"
  "\xb4\x2a\xc3\xb1\x28\x0d\x26\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x56\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f"
  "\x2e\x2f\x76\x65\x72\x73\x69\x6f\x6e\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x08\x52\x75\x6e\x74\x69\x6d\x65\x10\x08\x08\x52\x65"
  "\x6c\x65\x61\x73\x65\x0a\x1e\xc3\x0f\x10\x63\x6f\x70\x79\x72\x69"
  "\x67\x68\x74\x2d\x79\x65\x61\x72\x73\x02\x19\x73\x6e\x61\x72\x66"
  "\x2d\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x76\x65\x72\x73\x69"
  "\x6f\x6e\x21\x14\x65\x76\x65\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d"
  "\x72\x65\x73\x74\x6f\x72\x65\x03\x04\x05\x69\x6f\x74\x61\x04\x1e"
  "\x61\x64\x64\x2d\x73\x75\x62\x73\x79\x73\x74\x65\x6d\x2d\x69\x64"
  "\x65\x6e\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x21\x02\x04\x14"
  "\x61\x64\x64\x2d\x65\x76\x65\x6e\x74\x2d\x72\x65\x63\x65\x69\x76"
  "\x65\x72\x21\x05\x0d\x12\x81\x81\x02\x0c\x10\x81\x85\x02\x0b\x0e"
  "\x81\x83\x02\x0a\x0c\x81\x81\x02\x09\x0a\x81\x81\x02\x08\x08\x81"
  "\x81\x02\x07\x06\x81\x81\x02\x06\x04\x82\x02\x11\x28\x02\x0a\x4d"
  "\x69\x63\x72\x6f\x63\x6f\x64\x65\x02\x1e\x67\x65\x74\x2d\x6d\x69"
  "\x63\x72\x6f\x63\x6f\x64\x65\x2d\x76\x65\x72\x73\x69\x6f\x6e\x2d"
  "\x6e\x75\x6d\x62\x65\x72\x73\x04\x03\x0f\x06\x81\x81\x02\x0e\x04"
  "\x82\x02\x05\x0e\x02\x02\x2c\x0e\x4d\x61\x73\x73\x61\x63\x68\x75"
  "\x73\x65\x74\x74\x73\x0a\x49\x6e\x73\x74\x69\x74\x75\x74\x65\x03"
  "\x6f\x66\x0b\x54\x65\x63\x68\x6e\x6f\x6c\x6f\x67\x79\x05\x20\x20"
  "\x20\x20\x0a\x43\x6f\x70\x79\x72\x69\x67\x68\x74\x1b\x77\x72\x69"
  "\x74\x65\x2d\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x6f"
  "\x70\x79\x72\x69\x67\x68\x74\x04\x28\x43\x29\x01\x08\x0f\x6e\x75"
  "\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x03\x02\x14\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f"
  "\x72\x74\x04\x16\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6f\x75"
  "\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x04\x04\x6d\x61\x70\x03\x05"
  "\x6c\x61\x73\x74\x06\x0c\x77\x72\x69\x74\x65\x2d\x77\x6f\x72\x64"
  "\x73\x09\x03\x11\x65\x78\x63\x65\x70\x74\x2d\x6c\x61\x73\x74\x2d"
  "\x70\x61\x69\x72\x04\x07\x61\x70\x70\x65\x6e\x64\x04\x0e\x73\x74"
  "\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x09\x19\x16\x83\x04"
  "\x18\x14\x81\x97\x02\x17\x12\x81\x93\x02\x16\x10\x81\x95\x02\x15"
  "\x0e\x81\x91\x02\x14\x0c\x81\x8f\x02\x13\x0a\x81\x93\x02\x12\x08"
  "\x81\x91\x02\x11\x06\x81\x8d\x02\x10\x04\x86\x02\x15\x38\x0a\x02"
  "\x02\x04\x63\x64\x72\x0b\x04\x63\x61\x72\x0c\x01\x19\x77\x72\x69"
  "\x74\x65\x2d\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x6c\x69"
  "\x63\x65\x6e\x73\x65\x0d\x08\x17\x6c\x6f\x6e\x67\x2d\x6c\x69\x63"
  "\x65\x6e\x73\x65\x2d\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x0e\x18"
  "\x73\x68\x6f\x72\x74\x2d\x6c\x69\x63\x65\x6e\x73\x65\x2d\x73\x74"
  "\x61\x74\x65\x6d\x65\x6e\x74\x0f\x03\x02\x04\x03\x11\x73\x70\x6c"
  "\x69\x74\x2d\x70\x61\x72\x61\x67\x72\x61\x70\x68\x73\x06\x09\x03"
  "\x08\x6e\x65\x77\x6c\x69\x6e\x65\x03\x12\x73\x74\x72\x69\x6e\x67"
  "\x2d\x74\x72\x69\x6d\x2d\x72\x69\x67\x68\x74\x04\x0d\x77\x72\x69"
  "\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x10\x08\x27\x1e\x81\x89\x02"
  "\x26\x1c\x81\x89\x02\x25\x1a\x81\x8d\x02\x24\x18\x81\x89\x02\x23"
  "\x16\x81\x89\x02\x22\x14\x81\x89\x02\x21\x12\x81\x89\x02\x20\x10"
  "\x81\x91\x02\x1f\x0e\x81\x89\x02\x1e\x0c\x81\x87\x02\x1d\x0a\x81"
  "\x89\x02\x1c\x08\x81\x89\x02\x1b\x06\x81\x87\x02\x1a\x04\x85\x02"
  "\x1d\x39\x11\x02\x03\x11\x73\x70\x6c\x69\x74\x2d\x69\x6e\x74\x6f"
  "\x2d\x6c\x69\x6e\x65\x73\x12\x03\x0f\x6e\x65\x78\x74\x2d\x70\x61"
  "\x72\x61\x67\x72\x61\x70\x68\x13\x03\x09\x72\x65\x76\x65\x72\x73"
  "\x65\x21\x14\x04\x2c\x0c\x81\x87\x02\x2b\x0a\x81\x85\x02\x2a\x08"
  "\x81\x85\x02\x29\x06\x81\x83\x02\x28\x04\x83\x04\x0b\x16\x15\x02"
  "\x0b\x0c\x11\x73\x70\x6c\x69\x74\x2d\x74\x65\x78\x74\x2d\x77\x6f"
  "\x72\x64\x73\x16\x02\x03\x11\x73\x6b\x69\x70\x2d\x62\x6c\x61\x6e"
  "\x6b\x2d\x6c\x69\x6e\x65\x73\x17\x03\x0c\x62\x6c\x61\x6e\x6b\x2d"
  "\x6c\x69\x6e\x65\x3f\x18\x03\x14\x04\x0c\x61\x70\x70\x65\x6e\x64"
  "\x2d\x6d\x61\x70\x21\x05\x37\x18\x81\x89\x02\x36\x16\x81\x87\x02"
  "\x35\x14\x81\x85\x02\x34\x12\x81\x87\x02\x33\x10\x81\x85\x02\x32"
  "\x0e\x81\x85\x02\x31\x0c\x81\x85\x02\x30\x0a\x81\x85\x02\x2f\x08"
  "\x81\x85\x02\x2e\x06\x81\x83\x02\x2d\x04\x83\x04\x17\x29\x19\x02"
  "\x08\x0c\x0b\x03\x17\x03\x18\x03\x3b\x0a\x81\x85\x02\x3a\x08\x83"
  "\x04\x39\x06\x81\x83\x02\x38\x04\x81\x83\x02\x09\x13\x1a\x02\x09"
  "\x03\x0c\x73\x74\x72\x69\x6e\x67\x2d\x74\x72\x69\x6d\x03\x0d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x6e\x75\x6c\x6c\x3f\x03\x3d\x06\x81\x83"
  "\x02\x3c\x04\x83\x04\x05\x0d\x1b\x02\x0a\x03\x12\x6f\x70\x65\x6e"
  "\x2d\x69\x6e\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x03\x0a\x72"
  "\x65\x61\x64\x2d\x6c\x69\x6e\x65\x03\x0c\x65\x6f\x66\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x3f\x03\x14\x05\x42\x0c\x81\x87\x02\x41\x0a\x81"
  "\x85\x02\x40\x08\x81\x85\x02\x3f\x06\x81\x83\x02\x3e\x04\x83\x04"
  "\x0b\x18\x1c\x02\x0b\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66"
  "\x1d\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x1e"
  "\x14\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x77\x68\x69\x74\x65\x73"
  "\x70\x61\x63\x65\x02\x04\x11\x63\x68\x61\x72\x2d\x73\x65\x74\x2d"
  "\x6d\x65\x6d\x62\x65\x72\x3f\x03\x14\x05\x0a\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x04\x4e\x1a\x81\x8d\x02\x4d\x18\x81\x91\x02\x4c"
  "\x16\x81\x8f\x02\x4b\x14\x81\x8d\x02\x4a\x12\x81\x8d\x02\x49\x10"
  "\x81\x8f\x02\x48\x0e\x81\x8d\x02\x47\x0c\x81\x8b\x02\x46\x0a\x81"
  "\x8b\x02\x45\x08\x81\x89\x02\x44\x06\x81\x83\x02\x43\x04\x83\x04"
  "\x19\x29\x14\x02\x0c\x02\x02\x20\x0b\x01\x0c\x03\x13\x6f\x75\x74"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x78\x2d\x73\x69\x7a\x65\x04"
  "\x10\x06\x0b\x6e\x65\x77\x2d\x63\x6f\x6c\x75\x6d\x6e\x10\x05\x10"
  "\x03\x06\x62\x2a\x81\x91\x02\x61\x28\x81\x91\x02\x60\x26\x81\x91"
  "\x02\x5f\x24\x81\x95\x02\x5e\x22\x81\x91\x02\x5d\x20\x81\x91\x02"
  "\x5c\x1e\x81\x8f\x02\x5b\x1c\x81\x91\x02\x5a\x1a\x81\x8f\x02\x59"
  "\x18\x81\x8f\x02\x58\x16\x81\x8f\x02\x57\x14\x81\x91\x02\x56\x12"
  "\x81\x8f\x02\x55\x10\x81\x93\x02\x54\x0e\x81\x8f\x02\x53\x0c\x81"
  "\x8f\x02\x52\x0a\x81\x8f\x02\x51\x08\x81\x89\x02\x50\x06\x81\x89"
  "\x02\x4f\x04\x86\x0a\x29\x3f\x02\x0d\x0b\x01\x0a\x1d\x1e\x0c\x69"
  "\x10\x81\x85\x02\x68\x0e\x81\x8d\x02\x67\x0c\x81\x8d\x02\x66\x0a"
  "\x81\x87\x02\x65\x08\x81\x85\x02\x64\x06\x81\x85\x02\x63\x04\xfe"
  "\x05\x0f\x19\x1e\x0d\x1d\x1d\x1e\x04\x04\x14\x04\x1c\x04\x1b\x04"
  "\x1a\x08\x19\x04\x15\x04\x97\x01\x54\x68\x69\x73\x20\x69\x73\x20"
  "\x66\x72\x65\x65\x20\x73\x6f\x66\x74\x77\x61\x72\x65\x3b\x20\x73"
  "\x65\x65\x20\x74\x68\x65\x20\x73\x6f\x75\x72\x63\x65\x20\x66\x6f"
  "\x72\x20\x63\x6f\x70\x79\x69\x6e\x67\x20\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x73\x2e\x20\x20\x54\x68\x65\x72\x65\x20\x69\x73\x20"
  "\x4e\x4f\x0a\x77\x61\x72\x72\x61\x6e\x74\x79\x3b\x20\x6e\x6f\x74"
  "\x20\x65\x76\x65\x6e\x20\x66\x6f\x72\x20\x4d\x45\x52\x43\x48\x41"
  "\x4e\x54\x41\x42\x49\x4c\x49\x54\x59\x20\x6f\x72\x20\x46\x49\x54"
  "\x4e\x45\x53\x53\x20\x46\x4f\x52\x20\x41\x20\x50\x41\x52\x54\x49"
  "\x43\x55\x4c\x41\x52\x20\x50\x55\x52\x50\x4f\x53\x45\x2e\xd1\x05"
  "\x54\x68\x69\x73\x20\x66\x69\x6c\x65\x20\x69\x73\x20\x70\x61\x72"
  "\x74\x20\x6f\x66\x20\x4d\x49\x54\x2f\x47\x4e\x55\x20\x53\x63\x68"
  "\x65\x6d\x65\x2e\x0a\x0a\x4d\x49\x54\x2f\x47\x4e\x55\x20\x53\x63"
  "\x68\x65\x6d\x65\x20\x69\x73\x20\x66\x72\x65\x65\x20\x73\x6f\x66"
  "\x74\x77\x61\x72\x65\x3b\x20\x79\x6f\x75\x20\x63\x61\x6e\x20\x72"
  "\x65\x64\x69\x73\x74\x72\x69\x62\x75\x74\x65\x20\x69\x74\x20\x61"
  "\x6e\x64\x2f\x6f\x72\x20\x6d\x6f\x64\x69\x66\x79\x0a\x69\x74\x20"
  "\x75\x6e\x64\x65\x72\x20\x74\x68\x65\x20\x74\x65\x72\x6d\x73\x20"
  "\x6f\x66\x20\x74\x68\x65\x20\x47\x4e\x55\x20\x47\x65\x6e\x65\x72"
  "\x61\x6c\x20\x50\x75\x62\x6c\x69\x63\x20\x4c\x69\x63\x65\x6e\x73"
  "\x65\x20\x61\x73\x20\x70\x75\x62\x6c\x69\x73\x68\x65\x64\x20\x62"
  "\x79\x0a\x74\x68\x65\x20\x46\x72\x65\x65\x20\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x20\x46\x6f\x75\x6e\x64\x61\x74\x69\x6f\x6e\x3b\x20"
  "\x65\x69\x74\x68\x65\x72\x20\x76\x65\x72\x73\x69\x6f\x6e\x20\x32"
  "\x20\x6f\x66\x20\x74\x68\x65\x20\x4c\x69\x63\x65\x6e\x73\x65\x2c"
  "\x20\x6f\x72\x20\x28\x61\x74\x0a\x79\x6f\x75\x72\x20\x6f\x70\x74"
  "\x69\x6f\x6e\x29\x20\x61\x6e\x79\x20\x6c\x61\x74\x65\x72\x20\x76"
  "\x65\x72\x73\x69\x6f\x6e\x2e\x0a\x0a\x4d\x49\x54\x2f\x47\x4e\x55"
  "\x20\x53\x63\x68\x65\x6d\x65\x20\x69\x73\x20\x64\x69\x73\x74\x72"
  "\x69\x62\x75\x74\x65\x64\x20\x69\x6e\x20\x74\x68\x65\x20\x68\x6f"
  "\x70\x65\x20\x74\x68\x61\x74\x20\x69\x74\x20\x77\x69\x6c\x6c\x20"
  "\x62\x65\x20\x75\x73\x65\x66\x75\x6c\x2c\x20\x62\x75\x74\x0a\x57"
  "\x49\x54\x48\x4f\x55\x54\x20\x41\x4e\x59\x20\x57\x41\x52\x52\x41"
  "\x4e\x54\x59\x3b\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x65\x76\x65"
  "\x6e\x20\x74\x68\x65\x20\x69\x6d\x70\x6c\x69\x65\x64\x20\x77\x61"
  "\x72\x72\x61\x6e\x74\x79\x20\x6f\x66\x0a\x4d\x45\x52\x43\x48\x41"
  "\x4e\x54\x41\x42\x49\x4c\x49\x54\x59\x20\x6f\x72\x20\x46\x49\x54"
  "\x4e\x45\x53\x53\x20\x46\x4f\x52\x20\x41\x20\x50\x41\x52\x54\x49"
  "\x43\x55\x4c\x41\x52\x20\x50\x55\x52\x50\x4f\x53\x45\x2e\x20\x20"
  "\x53\x65\x65\x20\x74\x68\x65\x20\x47\x4e\x55\x0a\x47\x65\x6e\x65"
  "\x72\x61\x6c\x20\x50\x75\x62\x6c\x69\x63\x20\x4c\x69\x63\x65\x6e"
  "\x73\x65\x20\x66\x6f\x72\x20\x6d\x6f\x72\x65\x20\x64\x65\x74\x61"
  "\x69\x6c\x73\x2e\x0a\x0a\x59\x6f\x75\x20\x73\x68\x6f\x75\x6c\x64"
  "\x20\x68\x61\x76\x65\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20\x61"
  "\x20\x63\x6f\x70\x79\x20\x6f\x66\x20\x74\x68\x65\x20\x47\x4e\x55"
  "\x20\x47\x65\x6e\x65\x72\x61\x6c\x20\x50\x75\x62\x6c\x69\x63\x20"
  "\x4c\x69\x63\x65\x6e\x73\x65\x0a\x61\x6c\x6f\x6e\x67\x20\x77\x69"
  "\x74\x68\x20\x4d\x49\x54\x2f\x47\x4e\x55\x20\x53\x63\x68\x65\x6d"
  "\x65\x3b\x20\x69\x66\x20\x6e\x6f\x74\x2c\x20\x77\x72\x69\x74\x65"
  "\x20\x74\x6f\x20\x74\x68\x65\x20\x46\x72\x65\x65\x20\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x0a\x46\x6f\x75\x6e\x64\x61\x74\x69\x6f\x6e"
  "\x2c\x20\x49\x6e\x63\x2e\x2c\x20\x35\x31\x20\x46\x72\x61\x6e\x6b"
  "\x6c\x69\x6e\x20\x53\x74\x2c\x20\x46\x69\x66\x74\x68\x20\x46\x6c"
  "\x6f\x6f\x72\x2c\x20\x42\x6f\x73\x74\x6f\x6e\x2c\x20\x4d\x41\x20"
  "\x30\x32\x31\x31\x30\x2d\x31\x33\x30\x31\x2c\x0a\x55\x53\x41\x2e"
  "\x11\x04\x0a\x04\x04\x0e\x10\x09\x16\x12\x18\x17\x13\x0f\x0e\x0d"
  "\x0e\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x02\x03\x0f\x61\x64\x64\x2d\x62\x6f\x6f\x74\x2d"
  "\x69\x6e\x69\x74\x21\x02\x05\x0c\x80\x80\x04\x04\x0a\x81\x81\x02"
  "\x03\x08\x81\x81\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x0b"
  "\x1b";

SCHEME_OBJECT *
version_so_data_52e7d63d06154e12 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_version_so_data_52e7d63d06154e12 [0]))), (sizeof (prog_version_so_data_52e7d63d06154e12)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_10]));
}

DECLARE_COMPILED_DATA_NS ("version.so", version_so_data_52e7d63d06154e12)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("version.so", "f4c7fe4962946afc")
