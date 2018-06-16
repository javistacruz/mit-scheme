/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:32-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define ENVIRONMENT_LABEL_1_3 24
#define DEBUGGING_LABEL_1_2 23
#define EXECUTE_CACHE_1_12 13
#define EXECUTE_CACHE_1_11 15
#define EXECUTE_CACHE_1_10 17
#define EXECUTE_CACHE_1_9 19
#define FREE_REFERENCE_1_0 22
#define FREE_REFERENCES_LABEL_1_0 12
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_1_4);
      goto stack_frame_debugging_info_4;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_debugging_info_8)
DEFLABEL (stack_frame_debugging_info_4)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_11;
  Wrd9 = Wrd13;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd10.pObj));

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_9 9
#define LABEL_2_7 11
#define TAG_2_8 4
#define LABEL_2_10 13
#define TAG_2_11 5
#define LABEL_2_12 15
#define TAG_2_13 6
#define LABEL_2_15 17
#define ENVIRONMENT_LABEL_2_3 32
#define DEBUGGING_LABEL_2_2 31
#define OBJECT_2_0 30
#define EXECUTE_CACHE_2_18 19
#define EXECUTE_CACHE_2_17 21
#define EXECUTE_CACHE_2_16 23
#define EXECUTE_CACHE_2_14 25
#define FREE_REFERENCE_2_1 28
#define FREE_REFERENCE_2_0 29
#define FREE_REFERENCES_LABEL_2_0 18
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_2_4);
      goto stack_frame_debugging_info_default_6;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_2_7);
      goto lambda_13;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto lambda_14;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto lambda_15;

    case 7:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_debugging_info_default_12)
DEFLABEL (stack_frame_debugging_info_default_6)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_21;
  Wrd5 = Wrd9;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_19;
  Wrd12 = Wrd16;

DEFLABEL (label_18)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_7])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd21 = Wrd20;
  (Wrd22.Obj) = (Rsp [1]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_17;
  Wrd27 = Wrd31;

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_10])));
  Rhp += 3;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  Wrd40 = Wrd35;
  ((Wrd40.pObj) [2]) = (Wrd27.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  ((Wrd40.pObj) [3]) = (Wrd39.Obj);
  (Wrd37.Obj) = (Rsp [0]);
  ((Wrd40.pObj) [4]) = (Wrd37.Obj);
  Rvl = (Wrd34.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_9])), (Wrd28.pObj));

DEFLABEL (label_10)
  (Wrd27.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_6])), (Wrd13.pObj));

DEFLABEL (label_9)
  (Wrd12.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_2_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_12])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_2_10);

DEFLABEL (lambda_4)
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

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_2_12);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (label_22)
  (Wrd12.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 13
#define DEBUGGING_LABEL_3_2 12
#define OBJECT_3_0 11
#define EXECUTE_CACHE_3_6 7
#define FREE_REFERENCE_3_0 10
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_3_4);
      goto debugging_info_undefined_expressionP_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_info_undefined_expressionP_5)
DEFLABEL (debugging_info_undefined_expressionP_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_3_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define ENVIRONMENT_LABEL_4_3 13
#define DEBUGGING_LABEL_4_2 12
#define OBJECT_4_1 11
#define OBJECT_4_0 10
#define FREE_REFERENCE_4_0 9
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_4_4);
      goto debugging_info_noiseP_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_info_noiseP_7)
DEFLABEL (debugging_info_noiseP_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_10;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_12;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_11)
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd15.Obj) == (Wrd24.Obj)))
    goto label_9;
  Rvl = (current_block [OBJECT_4_1]);
  goto label_8;

DEFLABEL (label_12)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 6
#define DEBUGGING_LABEL_5_2 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto debugging_info_noise_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_info_noise_3)
DEFLABEL (debugging_info_noise_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 9
#define DEBUGGING_LABEL_6_2 8
#define FREE_REFERENCE_6_0 7
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_6_4);
      goto make_debugging_info_noise_0;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_debugging_info_noise_4)
DEFLABEL (make_debugging_info_noise_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Wrd16.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 10
#define DEBUGGING_LABEL_7_2 9
#define OBJECT_7_0 8
#define FREE_REFERENCE_7_0 7
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7_4);
      goto debugging_info_undefined_environmentP_0;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_info_undefined_environmentP_4)
DEFLABEL (debugging_info_undefined_environmentP_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_9;
  Wrd6 = Wrd10;

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [0]);
  if ((Wrd13.Obj) == (Wrd6.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_7_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 10
#define DEBUGGING_LABEL_8_2 9
#define OBJECT_8_0 8
#define FREE_REFERENCE_8_0 7
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_8_4);
      goto debugging_info_unknown_expressionP_0;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_info_unknown_expressionP_4)
DEFLABEL (debugging_info_unknown_expressionP_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_9;
  Wrd6 = Wrd10;

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [0]);
  if ((Wrd13.Obj) == (Wrd6.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_8_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 10
#define DEBUGGING_LABEL_9_2 9
#define OBJECT_9_0 8
#define FREE_REFERENCE_9_0 7
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_9_4);
      goto debugging_info_compiled_codeP_0;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_info_compiled_codeP_4)
DEFLABEL (debugging_info_compiled_codeP_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_9;
  Wrd6 = Wrd10;

DEFLABEL (label_8)
  (Wrd13.Obj) = (Rsp [0]);
  if ((Wrd13.Obj) == (Wrd6.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_9_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define ENVIRONMENT_LABEL_10_3 14
#define DEBUGGING_LABEL_10_2 13
#define EXECUTE_CACHE_10_6 9
#define FREE_REFERENCE_10_0 12
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_10_4);
      goto make_evaluated_object_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_evaluated_object_5)
DEFLABEL (make_evaluated_object_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = (Rsp [0]);

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;
  Wrd10 = Wrd14;

DEFLABEL (label_8)
  (Wrd20.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_7])), (Wrd11.pObj));

DEFLABEL (label_3)
  (Wrd10.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define ENVIRONMENT_LABEL_11_3 13
#define DEBUGGING_LABEL_11_2 12
#define OBJECT_11_1 11
#define OBJECT_11_0 10
#define FREE_REFERENCE_11_0 9
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_11_4);
      goto debugging_info_evaluated_objectP_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_info_evaluated_objectP_7)
DEFLABEL (debugging_info_evaluated_objectP_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_10;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_12;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_11)
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd15.Obj) == (Wrd24.Obj)))
    goto label_9;
  Rvl = (current_block [OBJECT_11_1]);
  goto label_8;

DEFLABEL (label_12)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 6
#define DEBUGGING_LABEL_12_2 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto debugging_info_evaluated_object_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugging_info_evaluated_object_value_3)
DEFLABEL (debugging_info_evaluated_object_value_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_8 9
#define ENVIRONMENT_LABEL_13_3 17
#define DEBUGGING_LABEL_13_2 16
#define EXECUTE_CACHE_13_7 11
#define FREE_REFERENCE_13_1 14
#define FREE_REFERENCE_13_0 15
#define FREE_REFERENCES_LABEL_13_0 10
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_13_4);
      goto validate_subexpression_2;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (validate_subexpression_7)
DEFLABEL (validate_subexpression_2)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_9;
  Rvl = (Rsp [1]);

DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_11;
  Wrd10 = Wrd14;

DEFLABEL (label_10)
  Rvl = (Wrd10.Obj);
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_8])), (Wrd11.pObj));

DEFLABEL (label_5)
  (Wrd10.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define LABEL_14_8 11
#define TAG_14_9 4
#define ENVIRONMENT_LABEL_14_3 16
#define DEBUGGING_LABEL_14_2 15
#define FREE_REFERENCE_14_1 13
#define FREE_REFERENCE_14_0 14
#define FREE_REFERENCES_LABEL_14_0 12
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_14_4);
      goto method_null_2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_null_8)
DEFLABEL (method_null_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_15;
  Wrd5 = Wrd9;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_13;
  Wrd11 = Wrd15;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_11;
  Wrd18 = Wrd22;

DEFLABEL (label_10)
  (Rsp [2]) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_8])));
  Rhp += 3;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd31 = Wrd26;
  ((Wrd31.pObj) [2]) = (Wrd18.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [0]);
  ((Wrd31.pObj) [4]) = (Wrd28.Obj);
  Rvl = (Wrd25.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_7])), (Wrd19.pObj));

DEFLABEL (label_6)
  (Wrd18.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_6])), (Wrd12.pObj));

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_14;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_14_8);

DEFLABEL (lambda_0)
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

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_8 9
#define LABEL_15_9 11
#define TAG_15_10 4
#define ENVIRONMENT_LABEL_15_3 19
#define DEBUGGING_LABEL_15_2 18
#define OBJECT_15_0 17
#define EXECUTE_CACHE_15_6 13
#define FREE_REFERENCE_15_0 16
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_15_4);
      goto method_environment_only_3;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_environment_only_8)
DEFLABEL (method_environment_only_3)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_11;
  Wrd12 = Wrd16;

DEFLABEL (label_10)
  (Rsp [2]) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_9])));
  Rhp += 3;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd25 = Wrd20;
  ((Wrd25.pObj) [2]) = (Wrd12.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd25.pObj) [4]) = (Wrd22.Obj);
  Rvl = (Wrd19.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_8])), (Wrd13.pObj));

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_7])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_15_9);

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

#define LABEL_16_4 3
#define LABEL_16_5 5
#define TAG_16_6 1
#define LABEL_16_7 7
#define LABEL_16_9 9
#define LABEL_16_10 11
#define LABEL_16_11 13
#define LABEL_16_13 15
#define TAG_16_14 6
#define ENVIRONMENT_LABEL_16_3 24
#define DEBUGGING_LABEL_16_2 23
#define OBJECT_16_1 22
#define OBJECT_16_0 21
#define EXECUTE_CACHE_16_12 17
#define EXECUTE_CACHE_16_8 19
#define FREE_REFERENCES_LABEL_16_0 16
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_16_4);
      goto method_standard_8;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_16_13);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_standard_11)
DEFLABEL (method_standard_8)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_16_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_11);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_13])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  ((Wrd14.pObj) [2]) = (Wrd6.Obj);
  ((Wrd14.pObj) [3]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_16_13);

DEFLABEL (lambda_4)
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

#define LABEL_17_4 3
#define LABEL_17_5 5
#define TAG_17_6 1
#define LABEL_17_7 7
#define LABEL_17_9 9
#define LABEL_17_11 11
#define LABEL_17_10 13
#define LABEL_17_12 15
#define TAG_17_13 6
#define ENVIRONMENT_LABEL_17_3 25
#define DEBUGGING_LABEL_17_2 24
#define OBJECT_17_0 23
#define EXECUTE_CACHE_17_14 17
#define EXECUTE_CACHE_17_8 19
#define FREE_REFERENCE_17_0 22
#define FREE_REFERENCES_LABEL_17_0 16
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_17_4);
      goto method_expression_only_7;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_17_11);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_17_12);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_expression_only_11)
DEFLABEL (method_expression_only_7)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_17_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (Rsp [2]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_15;
  Wrd7 = Wrd11;

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_12])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  (Wrd21.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  ((Wrd20.pObj) [3]) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_11])), (Wrd8.pObj));

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_14;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_17_12);

DEFLABEL (lambda_3)
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

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define LABEL_18_8 9
#define LABEL_18_9 11
#define LABEL_18_10 13
#define LABEL_18_13 15
#define TAG_18_14 6
#define ENVIRONMENT_LABEL_18_3 27
#define DEBUGGING_LABEL_18_2 26
#define OBJECT_18_2 25
#define OBJECT_18_1 24
#define OBJECT_18_0 23
#define EXECUTE_CACHE_18_12 17
#define EXECUTE_CACHE_18_11 19
#define EXECUTE_CACHE_18_6 21
#define FREE_REFERENCES_LABEL_18_0 16
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_18_4);
      goto method_combination_save_value_8;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_18_10);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_18_13);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_combination_save_value_11)
DEFLABEL (method_combination_save_value_8)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_18_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_10);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_13])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  ((Wrd14.pObj) [2]) = (Wrd6.Obj);
  ((Wrd14.pObj) [3]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_18_13);

DEFLABEL (lambda_5)
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

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define LABEL_19_8 9
#define LABEL_19_9 11
#define TAG_19_10 4
#define ENVIRONMENT_LABEL_19_3 20
#define DEBUGGING_LABEL_19_2 19
#define OBJECT_19_1 18
#define OBJECT_19_0 17
#define EXECUTE_CACHE_19_6 13
#define FREE_REFERENCE_19_0 16
#define FREE_REFERENCES_LABEL_19_0 12
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_19_4);
      goto method_eval_error_4;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_eval_error_8)
DEFLABEL (method_eval_error_4)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_11;
  Wrd6 = Wrd10;

DEFLABEL (label_10)
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_9])));
  Rhp += 3;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd19 = Wrd14;
  ((Wrd19.pObj) [2]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [4]) = (Wrd16.Obj);
  Rvl = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_8])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_10;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_19_9);

DEFLABEL (lambda_2)
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

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define LABEL_20_8 9
#define LABEL_20_14 11
#define LABEL_20_17 13
#define LABEL_20_11 15
#define LABEL_20_19 17
#define LABEL_20_10 19
#define LABEL_20_20 21
#define LABEL_20_21 23
#define TAG_20_22 10
#define LABEL_20_15 25
#define ENVIRONMENT_LABEL_20_3 49
#define DEBUGGING_LABEL_20_2 48
#define OBJECT_20_2 47
#define OBJECT_20_1 46
#define OBJECT_20_0 45
#define EXECUTE_CACHE_20_23 27
#define EXECUTE_CACHE_20_18 29
#define EXECUTE_CACHE_20_16 31
#define EXECUTE_CACHE_20_13 33
#define EXECUTE_CACHE_20_12 35
#define EXECUTE_CACHE_20_9 37
#define EXECUTE_CACHE_20_6 39
#define FREE_REFERENCE_20_2 42
#define FREE_REFERENCE_20_1 43
#define FREE_REFERENCE_20_0 44
#define FREE_REFERENCES_LABEL_20_0 26
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd5;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_20_4);
      goto method_force_snap_thunk_11;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_20_14);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_20_17);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_20_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_20_19);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_20_20);
      goto label_13;

    case 10:
      current_block = (Rpc - LABEL_20_21);
      goto lambda_18;

    case 11:
      current_block = (Rpc - LABEL_20_15);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_force_snap_thunk_17)
DEFLABEL (method_force_snap_thunk_11)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_8);
  (Wrd9.Obj) = (current_block [OBJECT_20_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_20_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_21)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_20;
  Wrd7 = Wrd11;

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_21])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  (Wrd21.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  ((Wrd20.pObj) [3]) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_20])), (Wrd8.pObj));

DEFLABEL (label_13)
  (Wrd7.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_25;
  Wrd38 = Wrd42;

DEFLABEL (label_24)
  Wrd5 = Wrd38;

DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  goto label_21;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_17])), (Wrd39.pObj));

DEFLABEL (label_15)
  (Wrd38.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_28;
  Wrd25 = Wrd29;

DEFLABEL (label_27)
  Wrd5 = Wrd25;
  goto label_23;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_19])), (Wrd26.pObj));

DEFLABEL (label_14)
  (Wrd25.Obj) = Rvl;
  goto label_27;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_20_21);

DEFLABEL (lambda_8)
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

#define LABEL_21_4 3
#define LABEL_21_5 5
#define TAG_21_6 1
#define LABEL_21_9 7
#define LABEL_21_7 9
#define LABEL_21_11 11
#define LABEL_21_12 13
#define LABEL_21_8 15
#define LABEL_21_13 17
#define TAG_21_14 7
#define LABEL_21_15 19
#define LABEL_21_16 21
#define ENVIRONMENT_LABEL_21_3 35
#define DEBUGGING_LABEL_21_2 34
#define EXECUTE_CACHE_21_19 23
#define EXECUTE_CACHE_21_18 25
#define EXECUTE_CACHE_21_17 27
#define EXECUTE_CACHE_21_10 29
#define FREE_REFERENCE_21_1 32
#define FREE_REFERENCE_21_0 33
#define FREE_REFERENCES_LABEL_21_0 22
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_21_4);
      goto method_application_frame_8;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto lambda_15;

    case 2:
      current_block = (Rpc - LABEL_21_9);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_21_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_21_12);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_21_13);
      goto lambda_16;

    case 8:
      current_block = (Rpc - LABEL_21_15);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_21_16);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_application_frame_14)
DEFLABEL (method_application_frame_8)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_21_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_22;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd25.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_22;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_21)
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_17]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_19]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_20;
  Wrd6 = Wrd10;

DEFLABEL (label_19)
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_18;
  Wrd13 = Wrd17;

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_13])));
  Rhp += 3;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd26 = Wrd21;
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  ((Wrd26.pObj) [3]) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  ((Wrd26.pObj) [4]) = (Wrd23.Obj);
  Rvl = (Wrd20.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_12])), (Wrd14.pObj));

DEFLABEL (label_12)
  (Wrd13.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_11])), (Wrd7.pObj));

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_21_13);

DEFLABEL (lambda_5)
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
#define TAG_22_6 1
#define LABEL_22_7 7
#define LABEL_22_10 9
#define LABEL_22_8 11
#define LABEL_22_11 13
#define LABEL_22_12 15
#define TAG_22_13 6
#define ENVIRONMENT_LABEL_22_3 24
#define DEBUGGING_LABEL_22_2 23
#define OBJECT_22_1 22
#define OBJECT_22_0 21
#define EXECUTE_CACHE_22_9 17
#define FREE_REFERENCE_22_0 20
#define FREE_REFERENCES_LABEL_22_0 16
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_22_4);
      goto method_compiler_reference_trap_6;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_10);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_22_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_22_12);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_compiler_reference_trap_10)
DEFLABEL (method_compiler_reference_trap_6)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_22_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_22_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_11);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_12])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  ((Wrd14.pObj) [2]) = (Wrd6.Obj);
  ((Wrd14.pObj) [3]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_10])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_22_12);

DEFLABEL (lambda_3)
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

#define LABEL_23_4 3
#define LABEL_23_5 5
#define TAG_23_6 1
#define LABEL_23_7 7
#define LABEL_23_11 9
#define LABEL_23_8 11
#define LABEL_23_9 13
#define LABEL_23_12 15
#define LABEL_23_13 17
#define LABEL_23_15 19
#define TAG_23_16 8
#define ENVIRONMENT_LABEL_23_3 31
#define DEBUGGING_LABEL_23_2 30
#define OBJECT_23_2 29
#define OBJECT_23_1 28
#define OBJECT_23_0 27
#define EXECUTE_CACHE_23_14 21
#define EXECUTE_CACHE_23_10 23
#define FREE_REFERENCE_23_0 26
#define FREE_REFERENCES_LABEL_23_0 20
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_23_4);
      goto method_compiler_assignment_trap_8;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_23_11);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_23_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_23_13);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_23_15);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_compiler_assignment_trap_12)
DEFLABEL (method_compiler_assignment_trap_8)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_23_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_23_12);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_15])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  ((Wrd14.pObj) [2]) = (Wrd6.Obj);
  ((Wrd14.pObj) [3]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_11])), (Wrd6.pObj));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_23_15);

DEFLABEL (lambda_5)
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

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_10 9
#define LABEL_24_8 11
#define LABEL_24_11 13
#define TAG_24_12 5
#define LABEL_24_13 15
#define LABEL_24_14 17
#define ENVIRONMENT_LABEL_24_3 33
#define DEBUGGING_LABEL_24_2 32
#define OBJECT_24_2 31
#define OBJECT_24_1 30
#define OBJECT_24_0 29
#define EXECUTE_CACHE_24_16 19
#define EXECUTE_CACHE_24_15 21
#define EXECUTE_CACHE_24_9 23
#define EXECUTE_CACHE_24_6 25
#define FREE_REFERENCE_24_0 28
#define FREE_REFERENCES_LABEL_24_0 18
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_24_4);
      goto method_compiler_lookup_apply_trap_restart_7;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_24_10);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_24_11);
      goto lambda_12;

    case 6:
      current_block = (Rpc - LABEL_24_13);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_24_14);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_compiler_lookup_apply_trap_restart_11)
DEFLABEL (method_compiler_lookup_apply_trap_restart_7)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_14;
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_11])));
  Rhp += 3;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd19 = Wrd14;
  ((Wrd19.pObj) [2]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [4]) = (Wrd16.Obj);
  Rvl = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_10])), (Wrd7.pObj));

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_13;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_24_11);

DEFLABEL (lambda_5)
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

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_11 9
#define LABEL_25_10 11
#define LABEL_25_14 13
#define LABEL_25_15 15
#define LABEL_25_12 17
#define LABEL_25_16 19
#define TAG_25_17 8
#define ENVIRONMENT_LABEL_25_3 39
#define DEBUGGING_LABEL_25_2 38
#define OBJECT_25_2 37
#define OBJECT_25_1 36
#define OBJECT_25_0 35
#define EXECUTE_CACHE_25_18 21
#define EXECUTE_CACHE_25_13 23
#define EXECUTE_CACHE_25_9 25
#define EXECUTE_CACHE_25_8 27
#define EXECUTE_CACHE_25_6 29
#define FREE_REFERENCE_25_2 32
#define FREE_REFERENCE_25_1 33
#define FREE_REFERENCE_25_0 34
#define FREE_REFERENCES_LABEL_25_0 20
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_25_4);
      goto method_compiler_error_restart_9;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_25_11);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_25_14);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_25_15);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_25_12);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_25_16);
      goto lambda_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_compiler_error_restart_15)
DEFLABEL (method_compiler_error_restart_9)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_23;
  Wrd11 = Wrd15;

DEFLABEL (label_22)
  (Wrd20.Obj) = (current_block [OBJECT_25_1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_25_2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_21;
  Wrd6 = Wrd10;

DEFLABEL (label_20)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_2]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_19;
  Wrd13 = Wrd17;

DEFLABEL (label_18)
  (Rsp [2]) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_16])));
  Rhp += 3;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd26 = Wrd21;
  ((Wrd26.pObj) [2]) = (Wrd13.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  ((Wrd26.pObj) [4]) = (Wrd23.Obj);
  Rvl = (Wrd20.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_15])), (Wrd14.pObj));

DEFLABEL (label_13)
  (Wrd13.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_14])), (Wrd7.pObj));

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_11])), (Wrd12.pObj));

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_22;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_25_16);

DEFLABEL (lambda_6)
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

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define LABEL_26_8 9
#define LABEL_26_10 11
#define LABEL_26_9 13
#define LABEL_26_11 15
#define LABEL_26_12 17
#define ENVIRONMENT_LABEL_26_3 27
#define DEBUGGING_LABEL_26_2 26
#define OBJECT_26_0 25
#define EXECUTE_CACHE_26_14 19
#define EXECUTE_CACHE_26_13 21
#define EXECUTE_CACHE_26_6 23
#define FREE_REFERENCES_LABEL_26_0 18
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd33;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_26_4);
      goto stack_frame_list_10;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_26_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_26_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_list_15)
DEFLABEL (stack_frame_list_10)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [5]));
  goto loop_7;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  DLINK_INTERRUPT_CHECK (25, LABEL_26_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_21;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_21;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd49.Lng) < (Wrd53.Lng))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_26_0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_18)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_20;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd45.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd43.Lng)))
    goto label_20;
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_19)
  Rdl = (& (Rsp [2]));
  goto loop_7;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_26_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [7]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_20)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_13)
  (Wrd33.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd33.Obj));
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_12)
  (Wrd11.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd11.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define LABEL_27_8 9
#define LABEL_27_9 11
#define LABEL_27_10 13
#define TAG_27_11 5
#define ENVIRONMENT_LABEL_27_3 21
#define DEBUGGING_LABEL_27_2 20
#define EXECUTE_CACHE_27_7 15
#define FREE_REFERENCE_27_1 18
#define FREE_REFERENCE_27_0 19
#define FREE_REFERENCES_LABEL_27_0 14
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto method_hardware_trap_4;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_27_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_27_9);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_27_10);
      goto lambda_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_hardware_trap_10)
DEFLABEL (method_hardware_trap_4)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_17;
  Wrd5 = Wrd9;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_15;
  Wrd6 = Wrd10;

DEFLABEL (label_14)
  (Wrd12.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_13;
  Wrd17 = Wrd21;

DEFLABEL (label_12)
  (Rsp [2]) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_10])));
  Rhp += 3;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd30 = Wrd25;
  ((Wrd30.pObj) [2]) = (Wrd17.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  ((Wrd30.pObj) [4]) = (Wrd27.Obj);
  Rvl = (Wrd24.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_9])), (Wrd18.pObj));

DEFLABEL (label_8)
  (Wrd17.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_8])), (Wrd7.pObj));

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_5])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_27_10);

DEFLABEL (lambda_2)
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

#define LABEL_28_4 3
#define LABEL_28_5 5
#define TAG_28_6 1
#define LABEL_28_7 7
#define TAG_28_8 2
#define ENVIRONMENT_LABEL_28_3 14
#define DEBUGGING_LABEL_28_2 13
#define EXECUTE_CACHE_28_10 9
#define EXECUTE_CACHE_28_9 11
#define FREE_REFERENCES_LABEL_28_0 8
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto hardware_trap_noise_2;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hardware_trap_noise_5)
DEFLABEL (hardware_trap_noise_2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_28_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_28_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define LABEL_29_8 9
#define LABEL_29_15 11
#define LABEL_29_13 13
#define LABEL_29_17 15
#define LABEL_29_18 17
#define LABEL_29_19 19
#define LABEL_29_20 21
#define LABEL_29_21 23
#define LABEL_29_22 25
#define LABEL_29_23 27
#define LABEL_29_26 29
#define LABEL_29_27 31
#define LABEL_29_28 33
#define LABEL_29_29 35
#define LABEL_29_33 37
#define LABEL_29_34 39
#define LABEL_29_35 41
#define LABEL_29_36 43
#define LABEL_29_37 45
#define LABEL_29_38 47
#define LABEL_29_11 49
#define LABEL_29_16 51
#define LABEL_29_42 53
#define LABEL_29_43 55
#define LABEL_29_46 57
#define LABEL_29_47 59
#define LABEL_29_49 61
#define LABEL_29_24 63
#define LABEL_29_25 65
#define LABEL_29_30 67
#define LABEL_29_55 69
#define LABEL_29_39 71
#define LABEL_29_40 73
#define LABEL_29_44 75
#define TAG_29_45 36
#define LABEL_29_50 77
#define TAG_29_51 37
#define LABEL_29_52 79
#define LABEL_29_56 81
#define LABEL_29_58 83
#define LABEL_29_57 85
#define LABEL_29_65 87
#define LABEL_29_61 89
#define TAG_29_62 43
#define LABEL_29_63 91
#define LABEL_29_64 93
#define LABEL_29_66 95
#define TAG_29_67 46
#define ENVIRONMENT_LABEL_29_3 144
#define DEBUGGING_LABEL_29_2 143
#define OBJECT_29_12 142
#define OBJECT_29_11 141
#define OBJECT_29_10 140
#define OBJECT_29_9 139
#define OBJECT_29_8 138
#define OBJECT_29_7 137
#define OBJECT_29_6 136
#define OBJECT_29_5 135
#define OBJECT_29_4 134
#define OBJECT_29_3 133
#define OBJECT_29_2 132
#define OBJECT_29_1 131
#define OBJECT_29_0 130
#define EXECUTE_CACHE_29_60 97
#define EXECUTE_CACHE_29_59 99
#define EXECUTE_CACHE_29_54 101
#define EXECUTE_CACHE_29_53 103
#define EXECUTE_CACHE_29_48 105
#define EXECUTE_CACHE_29_41 107
#define EXECUTE_CACHE_29_32 109
#define EXECUTE_CACHE_29_31 111
#define EXECUTE_CACHE_29_14 113
#define EXECUTE_CACHE_29_12 115
#define EXECUTE_CACHE_29_10 117
#define EXECUTE_CACHE_29_9 119
#define EXECUTE_CACHE_29_7 121
#define FREE_REFERENCE_29_5 124
#define FREE_REFERENCE_29_4 125
#define FREE_REFERENCE_29_3 126
#define FREE_REFERENCE_29_2 127
#define FREE_REFERENCE_29_1 128
#define FREE_REFERENCE_29_0 129
#define FREE_REFERENCES_LABEL_29_0 96
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd81;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd75;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd103;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd97;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd125;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd119;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd197;
  machine_word Wrd196;
  machine_word Wrd195;
  machine_word Wrd188;
  machine_word Wrd192;
  machine_word Wrd190;
  machine_word Wrd191;
  machine_word Wrd189;
  machine_word Wrd184;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd169;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd167;
  machine_word Wrd198;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd147;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd200;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd201;
  machine_word Wrd207;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd208;
  machine_word Wrd214;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd215;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd220;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_29_4);
      goto method_compiled_code_56;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_29_15);
      goto lambda_6;

    case 5:
      current_block = (Rpc - LABEL_29_13);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_29_17);
      goto label_58;

    case 7:
      current_block = (Rpc - LABEL_29_18);
      goto label_59;

    case 8:
      current_block = (Rpc - LABEL_29_19);
      goto label_60;

    case 9:
      current_block = (Rpc - LABEL_29_20);
      goto label_61;

    case 10:
      current_block = (Rpc - LABEL_29_21);
      goto label_74;

    case 11:
      current_block = (Rpc - LABEL_29_22);
      goto label_73;

    case 12:
      current_block = (Rpc - LABEL_29_23);
      goto label_72;

    case 13:
      current_block = (Rpc - LABEL_29_26);
      goto label_68;

    case 14:
      current_block = (Rpc - LABEL_29_27);
      goto label_69;

    case 15:
      current_block = (Rpc - LABEL_29_28);
      goto label_70;

    case 16:
      current_block = (Rpc - LABEL_29_29);
      goto label_71;

    case 17:
      current_block = (Rpc - LABEL_29_33);
      goto label_66;

    case 18:
      current_block = (Rpc - LABEL_29_34);
      goto label_67;

    case 19:
      current_block = (Rpc - LABEL_29_35);
      goto label_64;

    case 20:
      current_block = (Rpc - LABEL_29_36);
      goto label_65;

    case 21:
      current_block = (Rpc - LABEL_29_37);
      goto label_62;

    case 22:
      current_block = (Rpc - LABEL_29_38);
      goto label_63;

    case 23:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_8;

    case 24:
      current_block = (Rpc - LABEL_29_16);
      goto continuation_3;

    case 25:
      current_block = (Rpc - LABEL_29_42);
      goto label_75;

    case 26:
      current_block = (Rpc - LABEL_29_43);
      goto label_76;

    case 27:
      current_block = (Rpc - LABEL_29_46);
      goto lambda_0;

    case 28:
      current_block = (Rpc - LABEL_29_47);
      goto label_77;

    case 29:
      current_block = (Rpc - LABEL_29_49);
      goto lambda_22;

    case 30:
      current_block = (Rpc - LABEL_29_24);
      goto continuation_46;

    case 31:
      current_block = (Rpc - LABEL_29_25);
      goto continuation_42;

    case 32:
      current_block = (Rpc - LABEL_29_30);
      goto continuation_43;

    case 33:
      current_block = (Rpc - LABEL_29_55);
      goto lambda_26;

    case 34:
      current_block = (Rpc - LABEL_29_39);
      goto continuation_10;

    case 35:
      current_block = (Rpc - LABEL_29_40);
      goto continuation_9;

    case 36:
      current_block = (Rpc - LABEL_29_44);
      goto lambda_82;

    case 37:
      current_block = (Rpc - LABEL_29_50);
      goto lambda_85;

    case 38:
      current_block = (Rpc - LABEL_29_52);
      goto continuation_39;

    case 39:
      current_block = (Rpc - LABEL_29_56);
      goto continuation_23;

    case 40:
      current_block = (Rpc - LABEL_29_58);
      goto continuation_11;

    case 41:
      current_block = (Rpc - LABEL_29_57);
      goto continuation_12;

    case 42:
      current_block = (Rpc - LABEL_29_65);
      goto label_78;

    case 43:
      current_block = (Rpc - LABEL_29_61);
      goto lambda_87;

    case 44:
      current_block = (Rpc - LABEL_29_63);
      goto continuation_25;

    case 45:
      current_block = (Rpc - LABEL_29_64);
      goto continuation_24;

    case 46:
      current_block = (Rpc - LABEL_29_66);
      goto lambda_88;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (method_compiled_code_80)
DEFLABEL (method_compiled_code_56)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_89;
  Rsp = (& (Rsp [1]));
  goto lambda_6;

DEFLABEL (label_89)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_29_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_134;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_14]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_29_13);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 10)
    goto label_91;

DEFLABEL (label_90)
  Rsp = (& (Rsp [1]));
  goto lambda_6;

DEFLABEL (label_91)
  if (! ((Wrd7.uLng) == 10))
    goto label_133;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_132)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_131;
  (Wrd220.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd220.Lng) == 0)
    goto label_90;

DEFLABEL (label_130)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_129;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_129;
  (Wrd28.Obj) = ((Wrd32.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_128)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_127;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd50.Lng))))
    goto label_127;
  (Wrd44.Obj) = ((Wrd48.pObj) [1]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_126)
  (Wrd58.Obj) = (Rsp [0]);
  if ((Wrd58.Obj) == (current_block [OBJECT_29_4]))
    goto label_123;
  if ((Wrd58.Obj) == (current_block [OBJECT_29_5]))
    goto label_120;
  if ((Wrd58.Obj) == (current_block [OBJECT_29_6]))
    goto label_120;
  if ((Wrd58.Obj) == (current_block [OBJECT_29_7]))
    goto label_117;
  if ((Wrd58.Obj) == (current_block [OBJECT_29_8]))
    goto label_107;
  if ((Wrd58.Obj) == (current_block [OBJECT_29_10]))
    goto label_102;
  if ((Wrd58.Obj) == (current_block [OBJECT_29_11]))
    goto label_97;
  if ((Wrd58.Obj) == (current_block [OBJECT_29_12]))
    goto label_92;
  Rsp = (& (Rsp [3]));
  goto lambda_6;

DEFLABEL (label_92)
  (Wrd76.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_3]));
  (Wrd79.Obj) = ((Wrd76.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_96;
  Wrd75 = Wrd79;

DEFLABEL (label_95)
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd90.Obj) = (Rsp [3]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 10))
    goto label_94;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd89.Lng))))
    goto label_94;
  (Wrd81.Obj) = ((Wrd87.pObj) [3]);

DEFLABEL (label_93)
  (Rsp [1]) = (Wrd81.Obj);
  goto lambda_22;

DEFLABEL (label_94)
  (Wrd92.Obj) = (Rsp [3]);
  (Wrd93.Obj) = (current_block [OBJECT_29_9]);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_38]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_63)
  (Wrd81.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_37])), (Wrd76.pObj));

DEFLABEL (label_62)
  (Wrd75.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_97)
  (Wrd98.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_3]));
  (Wrd101.Obj) = ((Wrd98.pObj) [0]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if ((Wrd102.uLng) == 50)
    goto label_101;
  Wrd97 = Wrd101;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd112.Obj) = (Rsp [3]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd113.uLng) == 10))
    goto label_99;
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd110.Obj) = ((Wrd109.pObj) [0]);
  (Wrd111.Lng) = (FIXNUM_TO_LONG (Wrd110.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd111.Lng))))
    goto label_99;
  (Wrd103.Obj) = ((Wrd109.pObj) [3]);

DEFLABEL (label_98)
  (Rsp [1]) = (Wrd103.Obj);
  goto lambda_22;

DEFLABEL (label_99)
  (Wrd114.Obj) = (Rsp [3]);
  (Wrd115.Obj) = (current_block [OBJECT_29_9]);
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_36]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_65)
  (Wrd103.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_35])), (Wrd98.pObj));

DEFLABEL (label_64)
  (Wrd97.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_102)
  (Wrd120.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_3]));
  (Wrd123.Obj) = ((Wrd120.pObj) [0]);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if ((Wrd124.uLng) == 50)
    goto label_106;
  Wrd119 = Wrd123;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd119.Obj);
  (Wrd134.Obj) = (Rsp [3]);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if (! ((Wrd135.uLng) == 10))
    goto label_104;
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd134.Obj));
  (Wrd132.Obj) = ((Wrd131.pObj) [0]);
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd133.Lng))))
    goto label_104;
  (Wrd125.Obj) = ((Wrd131.pObj) [3]);

DEFLABEL (label_103)
  (Rsp [1]) = (Wrd125.Obj);
  goto lambda_22;

DEFLABEL (label_104)
  (Wrd136.Obj) = (Rsp [3]);
  (Wrd137.Obj) = (current_block [OBJECT_29_9]);
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_34]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_67)
  (Wrd125.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_33])), (Wrd120.pObj));

DEFLABEL (label_66)
  (Wrd119.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_107)
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_24]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_25]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (Wrd156.Obj) = (Rsp [4]);
  (Wrd157.uLng) = (OBJECT_TYPE (Wrd156.Obj));
  if (! ((Wrd157.uLng) == 10))
    goto label_116;
  (Wrd153.pObj) = (OBJECT_ADDRESS (Wrd156.Obj));
  (Wrd154.Obj) = ((Wrd153.pObj) [0]);
  (Wrd155.Lng) = (FIXNUM_TO_LONG (Wrd154.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd155.Lng))))
    goto label_116;
  (Wrd147.Obj) = ((Wrd153.pObj) [3]);

DEFLABEL (label_115)
  (Wrd163.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd163.uLng) == 26))
    goto label_114;
  (Wrd198.Lng) = (FIXNUM_TO_LONG (Wrd147.Obj));
  if (! ((Wrd198.Lng) == 0))
    goto label_109;

DEFLABEL (label_108)
  (Wrd197.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd197.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_32]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_29_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_53]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_29_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [5]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  goto lambda_0;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_29_52);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_62);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_61])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_109)
  (Wrd178.Obj) = (Rsp [4]);
  (Wrd179.uLng) = (OBJECT_TYPE (Wrd178.Obj));
  if (! ((Wrd179.uLng) == 10))
    goto label_113;
  (Wrd175.pObj) = (OBJECT_ADDRESS (Wrd178.Obj));
  (Wrd176.Obj) = ((Wrd175.pObj) [0]);
  (Wrd177.Lng) = (FIXNUM_TO_LONG (Wrd176.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd177.Lng))))
    goto label_113;
  (Wrd169.Obj) = ((Wrd175.pObj) [3]);

DEFLABEL (label_112)
  (Wrd189.uLng) = (OBJECT_TYPE (Wrd169.Obj));
  if (! ((Wrd189.uLng) == 26))
    goto label_111;
  (Wrd191.Lng) = (FIXNUM_TO_LONG (Wrd169.Obj));
  (Wrd190.Lng) = ((Wrd191.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd190.Lng)))
    goto label_111;
  (Wrd192.Obj) = (LONG_TO_FIXNUM (Wrd190.Lng));
  (* (--Rsp)) = (Wrd192.Obj);

DEFLABEL (label_110)
  (Wrd195.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_30]))));
  (* (--Rsp)) = (Wrd195.Obj);
  (Wrd196.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd196.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_31]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_29_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_54]));

DEFLABEL (label_111)
  (Wrd188.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_29]))));
  (* (--Rsp)) = (Wrd188.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd180.Obj) = (Rsp [4]);
  (Wrd181.Obj) = (current_block [OBJECT_29_9]);
  (Wrd184.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_28]))));
  (* (--Rsp)) = (Wrd184.Obj);
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_70)
  (Wrd169.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_114)
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_27]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_69)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_109;
  goto label_108;

DEFLABEL (label_116)
  (Wrd158.Obj) = (Rsp [4]);
  (Wrd159.Obj) = (current_block [OBJECT_29_9]);
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_26]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd158.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_68)
  (Wrd147.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_117)
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_2]));
  (Wrd204.Obj) = ((Wrd201.pObj) [0]);
  (Wrd205.uLng) = (OBJECT_TYPE (Wrd204.Obj));
  if ((Wrd205.uLng) == 50)
    goto label_119;
  Wrd200 = Wrd204;

DEFLABEL (label_118)
  (Rsp [0]) = (Wrd200.Obj);
  goto lambda_26;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_23])), (Wrd201.pObj));

DEFLABEL (label_72)
  (Wrd200.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_120)
  (Wrd208.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_1]));
  (Wrd211.Obj) = ((Wrd208.pObj) [0]);
  (Wrd212.uLng) = (OBJECT_TYPE (Wrd211.Obj));
  if ((Wrd212.uLng) == 50)
    goto label_122;
  Wrd207 = Wrd211;

DEFLABEL (label_121)
  (Rsp [0]) = (Wrd207.Obj);
  goto lambda_26;

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_22])), (Wrd208.pObj));

DEFLABEL (label_73)
  (Wrd207.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_123)
  (Wrd215.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd218.Obj) = ((Wrd215.pObj) [0]);
  (Wrd219.uLng) = (OBJECT_TYPE (Wrd218.Obj));
  if ((Wrd219.uLng) == 50)
    goto label_125;
  Wrd214 = Wrd218;

DEFLABEL (label_124)
  (Rsp [0]) = (Wrd214.Obj);
  goto lambda_26;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_21])), (Wrd215.pObj));

DEFLABEL (label_74)
  (Wrd214.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (current_block [OBJECT_29_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_20]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_29_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_19]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_18]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_59)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_130;
  goto label_90;

DEFLABEL (label_133)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_58)
  (Wrd9.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_134)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_29_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_135;
  Rsp = (& (Rsp [1]));
  goto lambda_6;

DEFLABEL (label_135)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_39]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_40]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_41]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_29_40);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_60]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_29_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_58]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_59]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_29_58);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_139;
  (Wrd24.pObj) = (& (Rsp [3]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  goto lambda_0;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_29_57);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_138)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_5]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_137;
  Wrd7 = Wrd11;

DEFLABEL (label_136)
  (Rsp [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_67);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_66])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  ((Wrd20.pObj) [2]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_137)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_65])), (Wrd8.pObj));

DEFLABEL (label_78)
  (Wrd7.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_138;

DEFLABEL (lambda_81)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_29_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  goto lambda_0;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_16);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_143;
  Wrd5 = Wrd9;

DEFLABEL (label_142)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_141;
  Wrd12 = Wrd16;

DEFLABEL (label_140)
  (Rsp [2]) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_44])));
  Rhp += 3;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd25 = Wrd20;
  ((Wrd25.pObj) [2]) = (Wrd12.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd25.pObj) [4]) = (Wrd22.Obj);
  Rvl = (Wrd19.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_141)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_43])), (Wrd13.pObj));

DEFLABEL (label_76)
  (Wrd12.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_42])), (Wrd6.pObj));

DEFLABEL (label_75)
  (Wrd5.Obj) = Rvl;
  goto label_142;

DEFLABEL (lambda_83)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_29_46);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_145;
  Wrd9 = Wrd13;

DEFLABEL (label_144)
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_48]));

DEFLABEL (label_145)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_47])), (Wrd10.pObj));

DEFLABEL (label_77)
  (Wrd9.Obj) = Rvl;
  goto label_144;

DEFLABEL (lambda_84)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_29_49);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_51);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_50])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_86)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_29_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [4]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  goto lambda_0;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_29_56);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_64]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_29_64);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_53]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_29_63);
  (Rsp [1]) = Rvl;
  goto lambda_22;

DEFLABEL (lambda_82)
  CLOSURE_HEADER (LABEL_29_44);

DEFLABEL (lambda_4)
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

DEFLABEL (lambda_85)
  CLOSURE_HEADER (LABEL_29_50);

DEFLABEL (lambda_20)
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

DEFLABEL (lambda_87)
  CLOSURE_HEADER (LABEL_29_61);

DEFLABEL (lambda_47)
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

DEFLABEL (lambda_88)
  CLOSURE_HEADER (LABEL_29_66);

DEFLABEL (lambda_13)
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

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_7 7
#define LABEL_30_9 9
#define LABEL_30_8 11
#define LABEL_30_12 13
#define LABEL_30_11 15
#define LABEL_30_15 17
#define LABEL_30_13 19
#define LABEL_30_19 21
#define LABEL_30_14 23
#define LABEL_30_17 25
#define LABEL_30_23 27
#define LABEL_30_18 29
#define LABEL_30_20 31
#define LABEL_30_21 33
#define LABEL_30_27 35
#define LABEL_30_22 37
#define LABEL_30_24 39
#define LABEL_30_25 41
#define LABEL_30_30 43
#define LABEL_30_26 45
#define LABEL_30_29 47
#define LABEL_30_32 49
#define LABEL_30_31 51
#define LABEL_30_34 53
#define LABEL_30_33 55
#define LABEL_30_35 57
#define LABEL_30_40 59
#define LABEL_30_36 61
#define LABEL_30_38 63
#define LABEL_30_45 65
#define LABEL_30_39 67
#define LABEL_30_42 69
#define LABEL_30_43 71
#define LABEL_30_49 73
#define LABEL_30_44 75
#define LABEL_30_46 77
#define LABEL_30_47 79
#define LABEL_30_52 81
#define LABEL_30_48 83
#define LABEL_30_51 85
#define LABEL_30_54 87
#define LABEL_30_53 89
#define LABEL_30_56 91
#define LABEL_30_55 93
#define LABEL_30_58 95
#define LABEL_30_57 97
#define LABEL_30_60 99
#define LABEL_30_61 101
#define LABEL_30_63 103
#define LABEL_30_59 105
#define LABEL_30_66 107
#define LABEL_30_67 109
#define LABEL_30_69 111
#define LABEL_30_62 113
#define LABEL_30_65 115
#define LABEL_30_71 117
#define LABEL_30_72 119
#define LABEL_30_74 121
#define LABEL_30_68 123
#define LABEL_30_73 125
#define ENVIRONMENT_LABEL_30_3 190
#define DEBUGGING_LABEL_30_2 189
#define OBJECT_30_22 188
#define OBJECT_30_21 187
#define OBJECT_30_20 186
#define OBJECT_30_19 185
#define OBJECT_30_18 184
#define OBJECT_30_17 183
#define OBJECT_30_16 182
#define OBJECT_30_15 181
#define OBJECT_30_14 180
#define OBJECT_30_13 179
#define OBJECT_30_12 178
#define OBJECT_30_11 177
#define OBJECT_30_10 176
#define OBJECT_30_9 175
#define OBJECT_30_8 174
#define OBJECT_30_7 173
#define OBJECT_30_6 172
#define OBJECT_30_5 171
#define OBJECT_30_4 170
#define OBJECT_30_3 169
#define OBJECT_30_2 168
#define OBJECT_30_1 167
#define OBJECT_30_0 166
#define EXECUTE_CACHE_30_70 127
#define EXECUTE_CACHE_30_64 129
#define EXECUTE_CACHE_30_50 131
#define EXECUTE_CACHE_30_41 133
#define EXECUTE_CACHE_30_37 135
#define EXECUTE_CACHE_30_28 137
#define EXECUTE_CACHE_30_16 139
#define EXECUTE_CACHE_30_10 141
#define EXECUTE_CACHE_30_6 143
#define FREE_REFERENCE_30_17 146
#define FREE_REFERENCE_30_16 147
#define FREE_REFERENCE_30_15 148
#define FREE_REFERENCE_30_14 149
#define FREE_REFERENCE_30_13 150
#define FREE_REFERENCE_30_12 151
#define FREE_REFERENCE_30_11 152
#define FREE_REFERENCE_30_10 153
#define FREE_REFERENCE_30_9 154
#define FREE_REFERENCE_30_8 155
#define FREE_REFERENCE_30_7 156
#define FREE_REFERENCE_30_6 157
#define FREE_REFERENCE_30_5 158
#define FREE_REFERENCE_30_4 159
#define FREE_REFERENCE_30_3 160
#define FREE_REFERENCE_30_2 161
#define FREE_REFERENCE_30_1 162
#define FREE_REFERENCE_30_0 163
#define FREE_ASSIGNMENT_30_0 165
#define FREE_REFERENCES_LABEL_30_0 126
#define NUMBER_OF_LINKER_SECTIONS_30_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_30_4);
      goto initialize_packageB_41;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto label_43;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto label_44;

    case 4:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_30_12);
      goto label_45;

    case 6:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_30_15);
      goto label_46;

    case 8:
      current_block = (Rpc - LABEL_30_13);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_30_19);
      goto label_47;

    case 10:
      current_block = (Rpc - LABEL_30_14);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_30_17);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_30_23);
      goto label_48;

    case 13:
      current_block = (Rpc - LABEL_30_18);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_30_20);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_30_21);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_30_27);
      goto label_49;

    case 17:
      current_block = (Rpc - LABEL_30_22);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_30_24);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_30_25);
      goto continuation_15;

    case 20:
      current_block = (Rpc - LABEL_30_30);
      goto label_50;

    case 21:
      current_block = (Rpc - LABEL_30_26);
      goto continuation_14;

    case 22:
      current_block = (Rpc - LABEL_30_29);
      goto continuation_17;

    case 23:
      current_block = (Rpc - LABEL_30_32);
      goto label_51;

    case 24:
      current_block = (Rpc - LABEL_30_31);
      goto continuation_18;

    case 25:
      current_block = (Rpc - LABEL_30_34);
      goto label_52;

    case 26:
      current_block = (Rpc - LABEL_30_33);
      goto continuation_19;

    case 27:
      current_block = (Rpc - LABEL_30_35);
      goto continuation_21;

    case 28:
      current_block = (Rpc - LABEL_30_40);
      goto label_53;

    case 29:
      current_block = (Rpc - LABEL_30_36);
      goto continuation_20;

    case 30:
      current_block = (Rpc - LABEL_30_38);
      goto continuation_25;

    case 31:
      current_block = (Rpc - LABEL_30_45);
      goto label_54;

    case 32:
      current_block = (Rpc - LABEL_30_39);
      goto continuation_24;

    case 33:
      current_block = (Rpc - LABEL_30_42);
      goto continuation_22;

    case 34:
      current_block = (Rpc - LABEL_30_43);
      goto continuation_29;

    case 35:
      current_block = (Rpc - LABEL_30_49);
      goto label_55;

    case 36:
      current_block = (Rpc - LABEL_30_44);
      goto continuation_28;

    case 37:
      current_block = (Rpc - LABEL_30_46);
      goto continuation_26;

    case 38:
      current_block = (Rpc - LABEL_30_47);
      goto continuation_31;

    case 39:
      current_block = (Rpc - LABEL_30_52);
      goto label_56;

    case 40:
      current_block = (Rpc - LABEL_30_48);
      goto continuation_30;

    case 41:
      current_block = (Rpc - LABEL_30_51);
      goto continuation_32;

    case 42:
      current_block = (Rpc - LABEL_30_54);
      goto label_57;

    case 43:
      current_block = (Rpc - LABEL_30_53);
      goto continuation_33;

    case 44:
      current_block = (Rpc - LABEL_30_56);
      goto label_58;

    case 45:
      current_block = (Rpc - LABEL_30_55);
      goto continuation_34;

    case 46:
      current_block = (Rpc - LABEL_30_58);
      goto label_59;

    case 47:
      current_block = (Rpc - LABEL_30_57);
      goto continuation_35;

    case 48:
      current_block = (Rpc - LABEL_30_60);
      goto label_60;

    case 49:
      current_block = (Rpc - LABEL_30_61);
      goto label_61;

    case 50:
      current_block = (Rpc - LABEL_30_63);
      goto label_62;

    case 51:
      current_block = (Rpc - LABEL_30_59);
      goto continuation_37;

    case 52:
      current_block = (Rpc - LABEL_30_66);
      goto label_63;

    case 53:
      current_block = (Rpc - LABEL_30_67);
      goto label_64;

    case 54:
      current_block = (Rpc - LABEL_30_69);
      goto label_65;

    case 55:
      current_block = (Rpc - LABEL_30_62);
      goto continuation_36;

    case 56:
      current_block = (Rpc - LABEL_30_65);
      goto continuation_39;

    case 57:
      current_block = (Rpc - LABEL_30_71);
      goto label_66;

    case 58:
      current_block = (Rpc - LABEL_30_72);
      goto label_67;

    case 59:
      current_block = (Rpc - LABEL_30_74);
      goto label_68;

    case 60:
      current_block = (Rpc - LABEL_30_68);
      goto continuation_38;

    case 61:
      current_block = (Rpc - LABEL_30_73);
      goto continuation_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_70)
DEFLABEL (initialize_packageB_41)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_30_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_77)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_76;
  Wrd21 = Wrd25;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_74;
  Wrd8 = Wrd12;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_72;
  Wrd11 = Wrd15;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_30_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_20);
  (Wrd5.Obj) = (current_block [OBJECT_30_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_15])), (Wrd12.pObj));

DEFLABEL (label_46)
  (Wrd11.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_12])), (Wrd9.pObj));

DEFLABEL (label_45)
  (Wrd8.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_9])), (Wrd22.pObj));

DEFLABEL (label_44)
  (Wrd21.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_79)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_78;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_30_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_43)
  goto label_77;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_81;
  Wrd11 = Wrd15;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_30_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_30_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_30_24);
  (Wrd5.Obj) = (current_block [OBJECT_30_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_19])), (Wrd12.pObj));

DEFLABEL (label_47)
  (Wrd11.Obj) = Rvl;
  goto label_80;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_83;
  Wrd11 = Wrd15;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_30_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_23])), (Wrd12.pObj));

DEFLABEL (label_48)
  (Wrd11.Obj) = Rvl;
  goto label_82;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_30_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_85;
  Wrd11 = Wrd15;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_28]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_30_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_27])), (Wrd12.pObj));

DEFLABEL (label_49)
  (Wrd11.Obj) = Rvl;
  goto label_84;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_30_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_91;
  Wrd8 = Wrd12;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30_8]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_30_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_89;
  Wrd8 = Wrd12;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30_10]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_30_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_87;
  Wrd8 = Wrd12;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30_11]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_30_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_37]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_30_36);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_30_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_30_42);
  (Wrd5.Obj) = (current_block [OBJECT_30_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_34])), (Wrd9.pObj));

DEFLABEL (label_52)
  (Wrd8.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_32])), (Wrd9.pObj));

DEFLABEL (label_51)
  (Wrd8.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_30])), (Wrd9.pObj));

DEFLABEL (label_50)
  (Wrd8.Obj) = Rvl;
  goto label_90;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_30_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_7]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_93;
  Wrd11 = Wrd15;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_41]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_30_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_30_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_30_46);
  (Wrd5.Obj) = (current_block [OBJECT_30_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_40])), (Wrd12.pObj));

DEFLABEL (label_53)
  (Wrd11.Obj) = Rvl;
  goto label_92;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_30_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_8]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_123;
  Wrd11 = Wrd15;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_41]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_30_44);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_30_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_9]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_121;
  Wrd11 = Wrd15;

DEFLABEL (label_120)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_50]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_30_48);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_30_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_10]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_119;
  Wrd8 = Wrd12;

DEFLABEL (label_118)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30_18]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_30_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_10]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_117;
  Wrd8 = Wrd12;

DEFLABEL (label_116)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30_20]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_30_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_11]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_115;
  Wrd8 = Wrd12;

DEFLABEL (label_114)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30_21]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_30_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_12]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_113;
  Wrd8 = Wrd12;

DEFLABEL (label_112)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30_22]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_30_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_13]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_111;
  Wrd8 = Wrd12;

DEFLABEL (label_110)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_14]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_109;
  Wrd14 = Wrd18;

DEFLABEL (label_108)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_62]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_15]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_107;
  Wrd23 = Wrd27;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_64]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_30_62);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_70]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_30_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_13]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_105;
  Wrd8 = Wrd12;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_14]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_103;
  Wrd14 = Wrd18;

DEFLABEL (label_102)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_68]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_16]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_101;
  Wrd23 = Wrd27;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_64]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_30_68);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_70]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_30_65);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_13]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_99;
  Wrd5 = Wrd9;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_14]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_97;
  Wrd11 = Wrd15;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_73]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_17]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_95;
  Wrd20 = Wrd24;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_64]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_30_73);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_70]));

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_74])), (Wrd21.pObj));

DEFLABEL (label_68)
  (Wrd20.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_72])), (Wrd12.pObj));

DEFLABEL (label_67)
  (Wrd11.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_71])), (Wrd6.pObj));

DEFLABEL (label_66)
  (Wrd5.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_69])), (Wrd24.pObj));

DEFLABEL (label_65)
  (Wrd23.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_67])), (Wrd15.pObj));

DEFLABEL (label_64)
  (Wrd14.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_66])), (Wrd9.pObj));

DEFLABEL (label_63)
  (Wrd8.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_63])), (Wrd24.pObj));

DEFLABEL (label_62)
  (Wrd23.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_61])), (Wrd15.pObj));

DEFLABEL (label_61)
  (Wrd14.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_60])), (Wrd9.pObj));

DEFLABEL (label_60)
  (Wrd8.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_58])), (Wrd9.pObj));

DEFLABEL (label_59)
  (Wrd8.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_56])), (Wrd9.pObj));

DEFLABEL (label_58)
  (Wrd8.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_54])), (Wrd9.pObj));

DEFLABEL (label_57)
  (Wrd8.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_52])), (Wrd9.pObj));

DEFLABEL (label_56)
  (Wrd8.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_49])), (Wrd12.pObj));

DEFLABEL (label_55)
  (Wrd11.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_45])), (Wrd12.pObj));

DEFLABEL (label_54)
  (Wrd11.Obj) = Rvl;
  goto label_122;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 9
#define DEBUGGING_LABEL_31_2 8
#define OBJECT_31_0 7
#define EXECUTE_CACHE_31_5 5
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto Z__vector_second_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__vector_second_3)
DEFLABEL (Z__vector_second_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_31_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 9
#define DEBUGGING_LABEL_32_2 8
#define OBJECT_32_0 7
#define EXECUTE_CACHE_32_5 5
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto Z__vector_fourth_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__vector_fourth_3)
DEFLABEL (Z__vector_fourth_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_32_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_8 7
#define LABEL_33_6 9
#define ENVIRONMENT_LABEL_33_3 20
#define DEBUGGING_LABEL_33_2 19
#define EXECUTE_CACHE_33_10 11
#define EXECUTE_CACHE_33_9 13
#define EXECUTE_CACHE_33_7 15
#define FREE_REFERENCE_33_0 18
#define FREE_REFERENCES_LABEL_33_0 10
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto record_method_2;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_33_8);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_33_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_method_6)
DEFLABEL (record_method_2)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_8])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define ENVIRONMENT_LABEL_34_3 16
#define DEBUGGING_LABEL_34_2 15
#define EXECUTE_CACHE_34_8 9
#define EXECUTE_CACHE_34_7 11
#define FREE_REFERENCE_34_0 14
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_34_4);
      goto stack_frame_type_debugging_info_method_1;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_frame_type_debugging_info_method_5)
DEFLABEL (stack_frame_type_debugging_info_method_1)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_6);
  (* (--Rsp)) = Rvl;
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define ENVIRONMENT_LABEL_35_3 16
#define DEBUGGING_LABEL_35_2 15
#define EXECUTE_CACHE_35_8 9
#define EXECUTE_CACHE_35_6 11
#define FREE_REFERENCE_35_0 14
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
framex_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_35_4);
      goto set_stack_frame_type_debugging_info_methodB_1;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stack_frame_type_debugging_info_methodB_5)
DEFLABEL (set_stack_frame_type_debugging_info_methodB_1)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_7;
  Wrd6 = Wrd10;

DEFLABEL (label_6)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_7])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

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
framex_so_84c3f368303cdd43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2,
	1,
	1,
	3,
	2,
	1,
	2,
	1,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	1,
	2,
	1,
	2,
	1,
	2,
	0,
	1,
	2,
	1,
	1,
	1,
	1,
	0,
	1,
	2,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 35)
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

static const struct liarc_code_S arr_decl_framex_so_84c3f368303cdd43 [35] =
  {
    { "framex_so_code_1", 5, framex_so_code_1 },
    { "framex_so_code_2", 8, framex_so_code_2 },
    { "framex_so_code_3", 2, framex_so_code_3 },
    { "framex_so_code_4", 3, framex_so_code_4 },
    { "framex_so_code_5", 1, framex_so_code_5 },
    { "framex_so_code_6", 2, framex_so_code_6 },
    { "framex_so_code_7", 2, framex_so_code_7 },
    { "framex_so_code_8", 2, framex_so_code_8 },
    { "framex_so_code_9", 2, framex_so_code_9 },
    { "framex_so_code_10", 3, framex_so_code_10 },
    { "framex_so_code_11", 3, framex_so_code_11 },
    { "framex_so_code_12", 1, framex_so_code_12 },
    { "framex_so_code_13", 4, framex_so_code_13 },
    { "framex_so_code_14", 5, framex_so_code_14 },
    { "framex_so_code_15", 5, framex_so_code_15 },
    { "framex_so_code_16", 7, framex_so_code_16 },
    { "framex_so_code_17", 7, framex_so_code_17 },
    { "framex_so_code_18", 7, framex_so_code_18 },
    { "framex_so_code_19", 5, framex_so_code_19 },
    { "framex_so_code_20", 12, framex_so_code_20 },
    { "framex_so_code_21", 10, framex_so_code_21 },
    { "framex_so_code_22", 7, framex_so_code_22 },
    { "framex_so_code_23", 9, framex_so_code_23 },
    { "framex_so_code_24", 8, framex_so_code_24 },
    { "framex_so_code_25", 9, framex_so_code_25 },
    { "framex_so_code_26", 8, framex_so_code_26 },
    { "framex_so_code_27", 6, framex_so_code_27 },
    { "framex_so_code_28", 3, framex_so_code_28 },
    { "framex_so_code_29", 47, framex_so_code_29 },
    { "framex_so_code_30", 62, framex_so_code_30 },
    { "framex_so_code_31", 1, framex_so_code_31 },
    { "framex_so_code_32", 1, framex_so_code_32 },
    { "framex_so_code_33", 4, framex_so_code_33 },
    { "framex_so_code_34", 3, framex_so_code_34 },
    { "framex_so_code_35", 3, framex_so_code_35 }
  };

int
decl_framex_so_84c3f368303cdd43 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_framex_so_84c3f368303cdd43);
  return (0);
}

DECLARE_COMPILED_CODE ("framex.so", 3, decl_framex_so_84c3f368303cdd43, framex_so_84c3f368303cdd43)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_framex_so_data_84c3f368303cdd43 [6063] =
  "\xdf\x01\x41\xc2\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x24"
  "\x28\x0d\x28\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x82\x88\x0c\x0d"
  "\xbe\x0d\xbf\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x83\x88\x07\xb7\x24\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x07\xc1\x1c\xb7\x24\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xc1\x1c\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x86\x88\xb7\x24\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\xb6\x24\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x24\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x24\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\xb7\x24\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\xb7\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x82\xb7\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x81\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb6\x24\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x83\x81\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x82\xb7\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\x08\x81\x1b\xb7\xb6\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\xb6\x24\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x83\x82\xb7\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82"
  "\x83\x84\xb7\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x82\x86\x83\xb7\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x08\x82\x1b\xb6\xb7"
  "\x24\x28\x1b\x28\x0d\x28\xb2\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb6\xb7\x24\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x0d\x0d\x82\x0d\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x80\xc2\x81\xc1\x0d\x1c\x0d\x1c\x0d\x1c\xb6\x1b\xb7\x24\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x83\x0d\x0d\x0d\x0d\x1b"
  "\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x1b\x25\x0d\x1c\x1b\x1b\x1b\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x1b\x0d\x0d\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\xb1"
  "\x0d\x0d\x0d\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\xb4\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x81\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x83\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x24\x28\x1b\x28\x1b\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x24\x28\xb4\x28\xb3\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x02\x88\xb1\x24\x28"
  "\xb4\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xbc"
  "\x88\xb4\x0c\x1b\x2a\xb3\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e"
  "\x0c\x0c\x0c\x0c\x0c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb5\x2a\x17"
  "\xb1\x0d\x0d\x1b\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\xb6\xb7\x1b\x0d\x0d"
  "\x1b\x0d\x0d\x0d\x0d\x0d\x1b\x0d\xb2\x0d\x17\x28\x0d\x26\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f"
  "\x2e\x2f\x66\x72\x61\x6d\x65\x78\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x0b\x6d\x65\x74\x68\x6f\x64\x2d\x74\x61\x67\x02\x03\x11"
  "\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x74\x79\x70\x65"
  "\x03\x23\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x64\x65"
  "\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2f\x64\x65\x66"
  "\x61\x75\x6c\x74\x05\x0d\x31\x64\x2d\x74\x61\x62\x6c\x65\x2f\x67"
  "\x65\x74\x03\x1c\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2d"
  "\x74\x79\x70\x65\x2f\x70\x72\x6f\x70\x65\x72\x74\x69\x65\x73\x05"
  "\x08\x0c\x81\x8b\x02\x07\x0a\x81\x89\x02\x06\x08\x81\x83\x02\x05"
  "\x06\x81\x87\x02\x04\x04\x83\x04\x0b\x19\x02\x16\x55\x6e\x6b\x6e"
  "\x6f\x77\x6e\x20\x28\x6d\x65\x74\x68\x6f\x64\x6c\x65\x73\x73\x29"
  "\x20\x16\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x15\x75\x6e\x64\x65\x66\x69\x6e\x65"
  "\x64\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x03\x03\x16\x77"
  "\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x73\x74"
  "\x72\x69\x6e\x67\x09\x03\x08\x64\x69\x73\x70\x6c\x61\x79\x03\x06"
  "\x77\x72\x69\x74\x65\x03\x03\x70\x70\x05\x10\x12\x81\x83\x02\x0f"
  "\x10\x81\x83\x02\x0e\x0e\x81\x85\x02\x0d\x0c\x81\x85\x02\x0c\x0a"
  "\x81\x87\x02\x0b\x08\x81\x85\x02\x0a\x06\x81\x83\x02\x09\x04\x83"
  "\x04\x11\x21\x0a\x02\x02\x03\x16\x64\x65\x62\x75\x67\x67\x69\x6e"
  "\x67\x2d\x69\x6e\x66\x6f\x2f\x6e\x6f\x69\x73\x65\x3f\x0b\x02\x12"
  "\x06\x81\x83\x02\x11\x04\x83\x04\x05\x0e\x0c\x02\x04\x63\x61\x72"
  "\x0d\x02\x15\x08\x81\x85\x02\x14\x06\x81\x83\x02\x13\x04\x83\x04"
  "\x07\x0e\x0e\x02\x04\x63\x64\x72\x0f\x16\x04\x83\x04\x03\x10\x02"
  "\x02\x18\x06\x81\x83\x02\x17\x04\x83\x04\x05\x0a\x11\x02\x08\x02"
  "\x1a\x06\x81\x83\x02\x19\x04\x83\x04\x05\x0b\x12\x02\x09\x13\x75"
  "\x6e\x6b\x6e\x6f\x77\x6e\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x13\x02\x1c\x06\x81\x83\x02\x1b\x04\x83\x04\x05\x0b\x14\x02"
  "\x0a\x0e\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x15"
  "\x02\x1e\x06\x81\x83\x02\x1d\x04\x83\x04\x05\x0b\x16\x02\x0b\x15"
  "\x65\x76\x61\x6c\x75\x61\x74\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x74\x61\x67\x17\x02\x03\x10\x73\x63\x6f\x64\x65\x2d\x63\x6f"
  "\x6e\x73\x74\x61\x6e\x74\x3f\x02\x21\x08\x81\x83\x02\x20\x06\x81"
  "\x83\x02\x1f\x04\x83\x04\x07\x0f\x18\x02\x0c\x0d\x17\x02\x24\x08"
  "\x81\x85\x02\x23\x06\x81\x83\x02\x22\x04\x83\x04\x07\x0e\x0d\x02"
  "\x0d\x0f\x25\x04\x83\x04\x03\x0f\x02\x0e\x22\x73\x74\x61\x63\x6b"
  "\x2d\x66\x72\x61\x6d\x65\x2d\x74\x79\x70\x65\x2f\x70\x6f\x70\x2d"
  "\x72\x65\x74\x75\x72\x6e\x2d\x65\x72\x72\x6f\x72\x19\x03\x03\x1a"
  "\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x70\x72\x65\x76"
  "\x69\x6f\x75\x73\x2d\x74\x79\x70\x65\x02\x29\x0a\x81\x85\x02\x28"
  "\x08\x81\x87\x02\x27\x06\x81\x85\x02\x26\x04\x84\x06\x09\x12\x1a"
  "\x02\x0f\x03\x2e\x0c\x81\x85\x02\x2d\x0a\x81\x87\x02\x2c\x08\x81"
  "\x85\x02\x2b\x06\x81\x83\x02\x2a\x04\x83\x04\x0b\x11\x1b\x02\x10"
  "\x02\x04\x10\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x72"
  "\x65\x66\x1c\x02\x33\x0c\x81\x85\x02\x32\x0a\x81\x87\x02\x31\x08"
  "\x81\x85\x02\x30\x06\x81\x83\x02\x2f\x04\x83\x04\x0b\x14\x1d\x02"
  "\x11\x04\x1c\x04\x17\x76\x61\x6c\x69\x64\x61\x74\x65\x2d\x73\x75"
  "\x62\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x1e\x03\x3a\x10\x81"
  "\x85\x02\x39\x0e\x81\x89\x02\x38\x0c\x81\x89\x02\x37\x0a\x81\x87"
  "\x02\x36\x08\x81\x85\x02\x35\x06\x81\x85\x02\x34\x04\x83\x04\x0f"
  "\x19\x1f\x02\x12\x02\x04\x1c\x04\x1e\x03\x41\x10\x81\x85\x02\x40"
  "\x0e\x81\x89\x02\x3f\x0c\x81\x87\x02\x3e\x0a\x81\x87\x02\x3d\x08"
  "\x81\x85\x02\x3c\x06\x81\x85\x02\x3b\x04\x83\x04\x0f\x1a\x20\x02"
  "\x13\x04\x1c\x04\x1e\x04\x0c\x26\x76\x65\x63\x74\x6f\x72\x2d\x72"
  "\x65\x66\x21\x04\x48\x10\x81\x85\x02\x47\x0e\x81\x89\x02\x46\x0c"
  "\x81\x8b\x02\x45\x0a\x81\x89\x02\x44\x08\x81\x87\x02\x43\x06\x81"
  "\x83\x02\x42\x04\x83\x04\x0f\x1c\x22\x02\x14\x02\x04\x1c\x02\x4d"
  "\x0c\x81\x85\x02\x4c\x0a\x81\x87\x02\x4b\x08\x81\x85\x02\x4a\x06"
  "\x81\x83\x02\x49\x04\x83\x04\x0b\x15\x23\x02\x15\x06\x66\x6f\x72"
  "\x63\x65\x13\x04\x04\x1c\x03\x16\x6d\x61\x6b\x65\x2d\x65\x76\x61"
  "\x6c\x75\x61\x74\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x24\x03\x10"
  "\x70\x72\x6f\x6d\x69\x73\x65\x2d\x66\x6f\x72\x63\x65\x64\x3f\x04"
  "\x11\x6d\x61\x6b\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x25\x03\x13\x70\x72\x6f\x6d\x69\x73\x65\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x03\x18\x70\x72\x6f\x6d\x69\x73\x65\x2d"
  "\x6e\x6f\x6e\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x04"
  "\x1e\x08\x59\x1a\x81\x89\x02\x58\x18\x81\x85\x02\x57\x16\x81\x87"
  "\x02\x56\x14\x81\x87\x02\x55\x12\x81\x89\x02\x54\x10\x81\x89\x02"
  "\x53\x0e\x81\x89\x02\x52\x0c\x81\x89\x02\x51\x0a\x81\x87\x02\x50"
  "\x08\x81\x85\x02\x4f\x06\x81\x83\x02\x4e\x04\x83\x04\x19\x32\x26"
  "\x02\x16\x03\x04\x11\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65"
  "\x2d\x6c\x69\x73\x74\x27\x04\x1c\x04\x25\x03\x24\x05\x63\x16\x81"
  "\x8b\x02\x62\x14\x81\x89\x02\x61\x12\x81\x85\x02\x60\x10\x81\x87"
  "\x02\x5f\x0e\x81\x87\x02\x5e\x0c\x81\x87\x02\x5d\x0a\x81\x85\x02"
  "\x5c\x08\x81\x89\x02\x5b\x06\x81\x85\x02\x5a\x04\x83\x04\x15\x24"
  "\x28\x02\x17\x02\x04\x1c\x02\x6a\x10\x81\x85\x02\x69\x0e\x81\x89"
  "\x02\x68\x0c\x81\x87\x02\x67\x0a\x81\x87\x02\x66\x08\x81\x85\x02"
  "\x65\x06\x81\x85\x02\x64\x04\x83\x04\x0f\x19\x29\x02\x18\x02\x04"
  "\x1c\x03\x24\x03\x73\x14\x81\x85\x02\x72\x12\x81\x89\x02\x71\x10"
  "\x81\x89\x02\x70\x0e\x81\x89\x02\x6f\x0c\x81\x87\x02\x6e\x0a\x81"
  "\x87\x02\x6d\x08\x81\x85\x02\x6c\x06\x81\x85\x02\x6b\x04\x83\x04"
  "\x13\x20\x2a\x02\x19\x02\x04\x1c\x04\x27\x04\x25\x03\x0e\x6d\x61"
  "\x6b\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2b\x05\x7b\x12\x81"
  "\x8b\x02\x7a\x10\x81\x89\x02\x79\x0e\x81\x85\x02\x78\x0c\x81\x87"
  "\x02\x77\x0a\x81\x87\x02\x76\x08\x81\x85\x02\x75\x06\x81\x83\x02"
  "\x74\x04\x83\x04\x11\x22\x2c\x02\x1a\x06\x61\x70\x70\x6c\x79\x13"
  "\x04\x04\x1c\x03\x15\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x03\x03\x2b\x04\x25\x06\x84"
  "\x01\x14\x81\x85\x02\x83\x01\x12\x81\x89\x02\x82\x01\x10\x81\x87"
  "\x02\x81\x01\x0e\x81\x87\x02\x80\x01\x0c\x81\x85\x02\x7f\x0a\x81"
  "\x87\x02\x7e\x08\x81\x85\x02\x7d\x06\x81\x83\x02\x7c\x04\x83\x04"
  "\x13\x28\x25\x02\x1b\x03\x13\x73\x74\x61\x63\x6b\x2d\x66\x72\x61"
  "\x6d\x65\x2f\x6c\x65\x6e\x67\x74\x68\x04\x1c\x03\x24\x04\x8c\x01"
  "\x12\xfd\xff\x03\x8b\x01\x10\xfd\xff\x03\x8a\x01\x0e\xfd\xff\x03"
  "\x89\x01\x0c\xfd\xff\x03\x88\x01\x0a\xfd\xff\x03\x87\x01\x08\xff"
  "\xff\x03\x86\x01\x06\x81\x85\x02\x85\x01\x04\x84\x06\x11\x1c\x1c"
  "\x02\x1c\x03\x03\x14\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74\x72"
  "\x61\x70\x2d\x6e\x6f\x69\x73\x65\x2d\x02\x92\x01\x0e\x81\x85\x02"
  "\x91\x01\x0c\x81\x87\x02\x90\x01\x0a\x81\x87\x02\x8f\x01\x08\x81"
  "\x85\x02\x8e\x01\x06\x81\x83\x02\x8d\x01\x04\x83\x04\x0d\x16\x2e"
  "\x02\x1d\x03\x09\x04\x1d\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74"
  "\x72\x61\x70\x2d\x66\x72\x61\x6d\x65\x2f\x64\x65\x73\x63\x72\x69"
  "\x62\x65\x03\x95\x01\x08\x81\x83\x02\x94\x01\x06\x81\x85\x02\x93"
  "\x01\x04\x83\x04\x07\x0f\x09\x02\x1e\x16\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x61\x6c\x2d\x70\x72\x65\x64\x69\x63\x61\x74\x65\x11"
  "\x73\x65\x71\x75\x65\x6e\x63\x65\x2d\x65\x6c\x65\x6d\x65\x6e\x74"
  "\x14\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x65\x6c\x65"
  "\x6d\x65\x6e\x74\x14\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x2d\x6f\x70\x65\x72\x61\x6e\x64\x13\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x61\x6c\x2d\x64\x65\x63\x69\x64\x65\x2f\x14\x64\x65\x66"
  "\x69\x6e\x69\x74\x69\x6f\x6e\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x65"
  "\x30\x14\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x65\x31\x12\x73\x65\x71\x75\x65\x6e\x63\x65\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x32\x0b\x76\x65\x63\x74\x6f\x72"
  "\x2d\x72\x65\x66\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x0a\x26\x70\x61\x69\x72\x2d\x63\x61\x72\x33\x0a\x26\x70"
  "\x61\x69\x72\x2d\x63\x64\x72\x34\x0e\x26\x74\x72\x69\x70\x6c\x65"
  "\x2d\x66\x69\x72\x73\x74\x35\x15\x07\x03\x1b\x73\x74\x61\x63\x6b"
  "\x2d\x66\x72\x61\x6d\x65\x2f\x72\x65\x74\x75\x72\x6e\x2d\x61\x64"
  "\x64\x72\x65\x73\x73\x03\x12\x64\x62\x67\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x3f\x03\x1a\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x65\x6e\x74\x72\x79\x2f\x64\x62\x67\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x03\x0f\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x3f\x03\x1d\x64\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x2f\x73\x6f\x75\x72\x63\x65\x2d\x63\x6f\x64"
  "\x65\x03\x15\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x6f"
  "\x70\x65\x72\x61\x6e\x64\x73\x03\x15\x63\x6f\x6d\x62\x69\x6e\x61"
  "\x74\x69\x6f\x6e\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x03\x1a\x64"
  "\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x73\x6f\x75"
  "\x72\x63\x65\x2d\x63\x6f\x64\x65\x04\x18\x73\x74\x61\x63\x6b\x2d"
  "\x66\x72\x61\x6d\x65\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x04\x1e\x04\x09\x6c\x69\x73\x74\x2d\x72\x65\x66\x03\x14\x64"
  "\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x62\x6c\x6f"
  "\x63\x6b\x03\x0c\x6c\x61\x6d\x62\x64\x61\x2d\x62\x6f\x64\x79\x0e"
  "\xc4\x01\x60\x81\x85\x02\xc3\x01\x5e\x81\x8d\x02\xc2\x01\x5c\x81"
  "\x8b\x02\xc1\x01\x5a\x81\x85\x02\xc0\x01\x58\x81\x87\x02\xbf\x01"
  "\x56\x81\x87\x02\xbe\x01\x54\x81\x89\x02\xbd\x01\x52\x81\x89\x02"
  "\xbc\x01\x50\x81\x8b\x02\xbb\x01\x4e\x81\x85\x02\xba\x01\x4c\x81"
  "\x85\x02\xb9\x01\x4a\x81\x87\x02\xb8\x01\x48\x81\x85\x02\xb7\x01"
  "\x46\x81\x89\x02\xb6\x01\x44\x81\x8f\x02\xb5\x01\x42\x81\x8b\x02"
  "\xb4\x01\x40\x81\x89\x02\xb3\x01\x3e\x81\x8b\x02\xb2\x01\x3c\x81"
  "\x85\x02\xb1\x01\x3a\x81\x83\x02\xb0\x01\x38\x81\x87\x02\xaf\x01"
  "\x36\x81\x85\x02\xae\x01\x34\x81\x83\x02\xad\x01\x32\x81\x85\x02"
  "\xac\x01\x30\x81\x8b\x02\xab\x01\x2e\x81\x89\x02\xaa\x01\x2c\x81"
  "\x8b\x02\xa9\x01\x2a\x81\x89\x02\xa8\x01\x28\x81\x8b\x02\xa7\x01"
  "\x26\x81\x89\x02\xa6\x01\x24\x81\x8d\x02\xa5\x01\x22\x81\x8d\x02"
  "\xa4\x01\x20\x81\x8d\x02\xa3\x01\x1e\x81\x8d\x02\xa2\x01\x1c\x81"
  "\x89\x02\xa1\x01\x1a\x81\x89\x02\xa0\x01\x18\x81\x89\x02\x9f\x01"
  "\x16\x81\x87\x02\x9e\x01\x14\x81\x85\x02\x9d\x01\x12\x81\x85\x02"
  "\x9c\x01\x10\x81\x85\x02\x9b\x01\x0e\x81\x85\x02\x9a\x01\x0c\x81"
  "\x83\x02\x99\x01\x0a\x81\x85\x02\x98\x01\x08\x81\x85\x02\x97\x01"
  "\x06\x81\x83\x02\x96\x01\x04\x83\x04\x5f\x91\x01\x36\x02\x1f\x0e"
  "\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74\x72\x61\x70\x17\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2d\x65\x72\x72\x6f\x72\x2d\x72\x65\x73"
  "\x74\x61\x72\x74\x26\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x6f\x70"
  "\x65\x72\x61\x74\x6f\x72\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x74\x72"
  "\x61\x70\x2d\x72\x65\x73\x74\x61\x72\x74\x21\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x74"
  "\x72\x61\x70\x2d\x72\x65\x73\x74\x61\x72\x74\x23\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x61\x70\x70\x6c"
  "\x79\x2d\x74\x72\x61\x70\x2d\x72\x65\x73\x74\x61\x72\x74\x25\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x73\x61\x66\x65\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x2d\x72\x65\x73\x74"
  "\x61\x72\x74\x22\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x75\x6e\x61"
  "\x73\x73\x69\x67\x6e\x65\x64\x3f\x2d\x74\x72\x61\x70\x2d\x72\x65"
  "\x73\x74\x61\x72\x74\x13\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x61"
  "\x70\x70\x6c\x79\x2d\x76\x61\x6c\x20\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70"
  "\x2d\x72\x65\x73\x74\x61\x72\x74\x0f\x69\x6e\x74\x65\x72\x6e\x61"
  "\x6c\x2d\x61\x70\x70\x6c\x79\x11\x66\x6f\x72\x63\x65\x2d\x73\x6e"
  "\x61\x70\x2d\x74\x68\x75\x6e\x6b\x0b\x65\x76\x61\x6c\x2d\x65\x72"
  "\x72\x6f\x72\x10\x61\x63\x63\x65\x73\x73\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x65\x17\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d"
  "\x73\x61\x76\x65\x2d\x76\x61\x6c\x75\x65\x30\x2f\x32\x31\x13\x64"
  "\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x64\x65\x63\x69\x64"
  "\x65\x16\x72\x65\x65\x6e\x74\x65\x72\x2d\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x63\x6f\x64\x65\x12\x63\x6f\x6d\x62\x69\x6e\x61\x74"
  "\x69\x6f\x6e\x2d\x61\x70\x70\x6c\x79\x11\x70\x6f\x70\x2d\x72\x65"
  "\x74\x75\x72\x6e\x2d\x65\x72\x72\x6f\x72\x19\x02\x0c\x6d\x65\x74"
  "\x68\x6f\x64\x2f\x6e\x75\x6c\x6c\x32\x33\x34\x35\x1e\x6d\x65\x74"
  "\x68\x6f\x64\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d"
  "\x73\x61\x76\x65\x2d\x76\x61\x6c\x75\x65\x35\x12\x6d\x65\x74\x68"
  "\x6f\x64\x2f\x65\x76\x61\x6c\x2d\x65\x72\x72\x6f\x72\x34\x18\x6d"
  "\x65\x74\x68\x6f\x64\x2f\x66\x6f\x72\x63\x65\x2d\x73\x6e\x61\x70"
  "\x2d\x74\x68\x75\x6e\x6b\x33\x2b\x11\x6d\x61\x6b\x65\x2d\x75\x6e"
  "\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x10\x6d\x61\x6b\x65\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2a\x6d\x65\x74\x68\x6f\x64"
  "\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x6c\x6f\x6f\x6b\x75\x70"
  "\x2d\x61\x70\x70\x6c\x79\x2d\x74\x72\x61\x70\x2d\x72\x65\x73\x74"
  "\x61\x72\x74\x31\x1e\x6d\x65\x74\x68\x6f\x64\x2f\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x2d\x65\x72\x72\x6f\x72\x2d\x72\x65\x73\x74\x61"
  "\x72\x74\x30\x15\x6d\x65\x74\x68\x6f\x64\x2f\x68\x61\x72\x64\x77"
  "\x61\x72\x65\x2d\x74\x72\x61\x70\x2f\x15\x6d\x65\x74\x68\x6f\x64"
  "\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2b\x29"
  "\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2d\x74\x79\x70\x65"
  "\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65\x74\x75\x72\x6e"
  "\x2d\x61\x64\x64\x72\x65\x73\x73\x2e\x73\x74\x61\x63\x6b\x2d\x66"
  "\x72\x61\x6d\x65\x2d\x74\x79\x70\x65\x2f\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2f\x73\x74\x61\x63\x6b\x2d\x66\x72\x61"
  "\x6d\x65\x2d\x74\x79\x70\x65\x2f\x69\x6e\x74\x65\x72\x72\x75\x70"
  "\x74\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x13\x03\x1c\x6d\x69\x63\x72\x6f\x63\x6f\x64"
  "\x65\x2d\x72\x65\x74\x75\x72\x6e\x2f\x6e\x61\x6d\x65\x2d\x3e\x74"
  "\x79\x70\x65\x37\x04\x0e\x72\x65\x63\x6f\x72\x64\x2d\x6d\x65\x74"
  "\x68\x6f\x64\x38\x03\x10\x6d\x65\x74\x68\x6f\x64\x2f\x73\x74\x61"
  "\x6e\x64\x61\x72\x64\x39\x03\x17\x6d\x65\x74\x68\x6f\x64\x2f\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x6f\x6e\x6c\x79\x3a\x03"
  "\x19\x6d\x65\x74\x68\x6f\x64\x2f\x61\x70\x70\x6c\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x66\x72\x61\x6d\x65\x3b\x03\x1f\x6d\x65\x74\x68"
  "\x6f\x64\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x3c\x03\x20\x6d\x65\x74"
  "\x68\x6f\x64\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x74\x72\x61\x70\x3d\x03\x05\x0e"
  "\x31\x64\x2d\x74\x61\x62\x6c\x65\x2f\x70\x75\x74\x21\x3e\x0a\x82"
  "\x02\x7e\x81\x85\x02\x81\x02\x7c\x81\x87\x02\x80\x02\x7a\x81\x87"
  "\x02\xff\x01\x78\x81\x83\x02\xfe\x01\x76\x81\x81\x02\xfd\x01\x74"
  "\x81\x81\x02\xfc\x01\x72\x81\x87\x02\xfb\x01\x70\x81\x89\x02\xfa"
  "\x01\x6e\x81\x85\x02\xf9\x01\x6c\x81\x83\x02\xf8\x01\x6a\x81\x81"
  "\x02\xf7\x01\x68\x81\x89\x02\xf6\x01\x66\x81\x85\x02\xf5\x01\x64"
  "\x81\x83\x02\xf4\x01\x62\x81\x81\x02\xf3\x01\x60\x81\x83\x02\xf2"
  "\x01\x5e\x81\x81\x02\xf1\x01\x5c\x81\x83\x02\xf0\x01\x5a\x81\x81"
  "\x02\xef\x01\x58\x81\x83\x02\xee\x01\x56\x81\x81\x02\xed\x01\x54"
  "\x81\x83\x02\xec\x01\x52\x81\x83\x02\xeb\x01\x50\x81\x81\x02\xea"
  "\x01\x4e\x81\x83\x02\xe9\x01\x4c\x81\x83\x02\xe8\x01\x4a\x81\x85"
  "\x02\xe7\x01\x48\x81\x81\x02\xe6\x01\x46\x81\x83\x02\xe5\x01\x44"
  "\x81\x83\x02\xe4\x01\x42\x81\x85\x02\xe3\x01\x40\x81\x81\x02\xe2"
  "\x01\x3e\x81\x83\x02\xe1\x01\x3c\x81\x85\x02\xe0\x01\x3a\x81\x81"
  "\x02\xdf\x01\x38\x81\x81\x02\xde\x01\x36\x81\x83\x02\xdd\x01\x34"
  "\x81\x81\x02\xdc\x01\x32\x81\x83\x02\xdb\x01\x30\x81\x81\x02\xda"
  "\x01\x2e\x81\x83\x02\xd9\x01\x2c\x81\x83\x02\xd8\x01\x2a\x81\x81"
  "\x02\xd7\x01\x28\x81\x83\x02\xd6\x01\x26\x81\x83\x02\xd5\x01\x24"
  "\x81\x85\x02\xd4\x01\x22\x81\x81\x02\xd3\x01\x20\x81\x83\x02\xd2"
  "\x01\x1e\x81\x83\x02\xd1\x01\x1c\x81\x85\x02\xd0\x01\x1a\x81\x81"
  "\x02\xcf\x01\x18\x81\x83\x02\xce\x01\x16\x81\x85\x02\xcd\x01\x14"
  "\x81\x81\x02\xcc\x01\x12\x81\x85\x02\xcb\x01\x10\x81\x81\x02\xca"
  "\x01\x0e\x81\x83\x02\xc9\x01\x0c\x81\x81\x02\xc8\x01\x0a\x81\x83"
  "\x02\xc7\x01\x08\x81\x81\x02\xc6\x01\x06\x81\x81\x02\xc5\x01\x04"
  "\x82\x02\x7d\xbf\x01\x3f\x02\x20\x04\x21\x02\x83\x02\x04\x83\x04"
  "\x03\x0a\x40\x02\x21\x04\x21\x02\x84\x02\x04\x83\x04\x03\x0a\x21"
  "\x02\x22\x02\x03\x37\x05\x3e\x03\x04\x88\x02\x0a\x81\x87\x02\x87"
  "\x02\x08\x81\x87\x02\x86\x02\x06\x81\x85\x02\x85\x02\x04\x84\x06"
  "\x09\x15\x37\x02\x23\x02\x03\x05\x03\x8b\x02\x08\x81\x85\x02\x8a"
  "\x02\x06\x81\x83\x02\x89\x02\x04\x83\x04\x07\x11\x02\x24\x02\x03"
  "\x05\x3e\x03\x8e\x02\x08\x81\x87\x02\x8d\x02\x06\x81\x85\x02\x8c"
  "\x02\x04\x84\x06\x07\x11\x3e\x24\x27\x73\x74\x61\x63\x6b\x2d\x66"
  "\x72\x61\x6d\x65\x2d\x74\x79\x70\x65\x2f\x64\x65\x62\x75\x67\x67"
  "\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2d\x6d\x65\x74\x68\x6f\x64\x3e"
  "\x04\x04\x37\x04\x21\x04\x40\x04\x3f\x04\x36\x04\x09\x04\x2e\x04"
  "\x1c\x04\x25\x04\x2c\x04\x2a\x04\x29\x04\x28\x04\x26\x04\x23\x04"
  "\x22\x04\x20\x04\x1f\x04\x1d\x04\x1b\x04\x0a\x65\x76\x61\x6c\x75"
  "\x61\x74\x65\x64\x0e\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x63\x6f"
  "\x64\x65\x13\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x16\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x20"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x15\x75\x6e\x64\x65"
  "\x66\x69\x6e\x65\x64\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x1a\x04\x0f\x04\x0d\x04\x18\x04\x16\x04\x14\x04\x12\x04\x11\x04"
  "\x10\x04\x0e\x04\x0c\x04\x0a\x04\x04\x2b\x2c\x73\x65\x74\x2d\x73"
  "\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2d\x74\x79\x70\x65\x2f"
  "\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2d\x6d"
  "\x65\x74\x68\x6f\x64\x21\x27\x73\x74\x61\x63\x6b\x2d\x66\x72\x61"
  "\x6d\x65\x2d\x74\x79\x70\x65\x2f\x64\x65\x62\x75\x67\x67\x69\x6e"
  "\x67\x2d\x69\x6e\x66\x6f\x2d\x6d\x65\x74\x68\x6f\x64\x38\x0f\x26"
  "\x76\x65\x63\x74\x6f\x72\x2d\x66\x6f\x75\x72\x74\x68\x0f\x26\x76"
  "\x65\x63\x74\x6f\x72\x2d\x73\x65\x63\x6f\x6e\x64\x14\x69\x6e\x69"
  "\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21"
  "\x2b\x2d\x2f\x27\x30\x31\x3d\x3c\x3b\x33\x34\x35\x3a\x39\x18\x6d"
  "\x65\x74\x68\x6f\x64\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2d\x6f\x6e\x6c\x79\x32\x19\x17\x15\x13\x1e\x26\x64\x65\x62"
  "\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2f\x65\x76\x61\x6c"
  "\x75\x61\x74\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x76\x61\x6c"
  "\x75\x65\x21\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66"
  "\x6f\x2f\x65\x76\x61\x6c\x75\x61\x74\x65\x64\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x3f\x24\x1e\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69"
  "\x6e\x66\x6f\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64"
  "\x65\x3f\x23\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66"
  "\x6f\x2f\x75\x6e\x6b\x6e\x6f\x77\x6e\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x3f\x26\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d"
  "\x69\x6e\x66\x6f\x2f\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3f\x1a\x6d\x61\x6b\x65"
  "\x2d\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2f"
  "\x6e\x6f\x69\x73\x65\x15\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d"
  "\x69\x6e\x66\x6f\x2f\x6e\x6f\x69\x73\x65\x0b\x25\x64\x65\x62\x75"
  "\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2f\x75\x6e\x64\x65\x66"
  "\x69\x6e\x65\x64\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f"
  "\x1b\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x64\x65\x62"
  "\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2b\x05\x10\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08"
  "\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
framex_so_data_84c3f368303cdd43 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_framex_so_data_84c3f368303cdd43 [0]))), (sizeof (prog_framex_so_data_84c3f368303cdd43)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("framex.so", framex_so_data_84c3f368303cdd43)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("framex.so", "66e7e5f2eb002c79")
