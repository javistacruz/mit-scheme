/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:17-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto compiler_compiled_code_pathname_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_compiled_code_pathname_type_3)
DEFLABEL (compiler_compiled_code_pathname_type_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  Rvl = (current_block [OBJECT_1_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_11 11
#define LABEL_2_8 13
#define TAG_2_9 5
#define LABEL_2_12 15
#define LABEL_2_15 17
#define LABEL_2_16 19
#define ENVIRONMENT_LABEL_2_3 39
#define DEBUGGING_LABEL_2_2 38
#define OBJECT_2_4 37
#define OBJECT_2_3 36
#define OBJECT_2_2 35
#define OBJECT_2_1 34
#define OBJECT_2_0 33
#define EXECUTE_CACHE_2_18 21
#define EXECUTE_CACHE_2_17 23
#define EXECUTE_CACHE_2_14 25
#define EXECUTE_CACHE_2_13 27
#define EXECUTE_CACHE_2_10 29
#define FREE_REFERENCE_2_0 32
#define FREE_REFERENCES_LABEL_2_0 20
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_2_4);
      goto compiler_file_output_8;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_2_8);
      goto lambda_15;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_file_output_14)
DEFLABEL (compiler_file_output_8)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_21)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_20;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_19)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_8])));
  Rhp += 1;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  Wrd33 = Wrd32;
  (Wrd34.Obj) = (Rsp [1]);
  ((Wrd33.pObj) [2]) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_18;
  Wrd5 = Wrd9;

DEFLABEL (label_17)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_11])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_2_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_8 5
#define LABEL_3_9 7
#define LABEL_3_5 9
#define LABEL_3_6 11
#define TAG_3_7 4
#define ENVIRONMENT_LABEL_3_3 21
#define DEBUGGING_LABEL_3_2 20
#define EXECUTE_CACHE_3_11 13
#define EXECUTE_CACHE_3_10 15
#define FREE_REFERENCE_3_1 18
#define FREE_REFERENCE_3_0 19
#define FREE_REFERENCES_LABEL_3_0 12
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_3_4);
      goto compile_data_from_file_4;

    case 1:
      current_block = (Rpc - LABEL_3_8);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_3_9);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_3_6);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_data_from_file_9)
DEFLABEL (compile_data_from_file_4)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_14;
  Wrd12 = Wrd16;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_12;
  Wrd18 = Wrd22;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd17.Obj) = (MAKE_OBJECT (0, 2));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd13.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_9])), (Wrd19.pObj));

DEFLABEL (label_7)
  (Wrd18.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_8])), (Wrd13.pObj));

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_13;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_3_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define ENVIRONMENT_LABEL_4_3 12
#define DEBUGGING_LABEL_4_2 11
#define EXECUTE_CACHE_4_8 7
#define EXECUTE_CACHE_4_7 9
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto compiler_output__procedure_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_output__procedure_4)
DEFLABEL (compiler_output__procedure_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 12
#define DEBUGGING_LABEL_5_2 11
#define EXECUTE_CACHE_5_6 7
#define FREE_REFERENCE_5_0 10
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto compiler_output__compiled_expression_0;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_output__compiled_expression_4)
DEFLABEL (compiler_output__compiled_expression_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_16 9
#define LABEL_6_7 11
#define LABEL_6_8 13
#define LABEL_6_12 15
#define TAG_6_13 6
#define LABEL_6_10 17
#define TAG_6_11 7
#define LABEL_6_20 19
#define LABEL_6_21 21
#define LABEL_6_22 23
#define ENVIRONMENT_LABEL_6_3 44
#define DEBUGGING_LABEL_6_2 43
#define OBJECT_6_1 42
#define OBJECT_6_0 41
#define EXECUTE_CACHE_6_19 25
#define EXECUTE_CACHE_6_18 27
#define EXECUTE_CACHE_6_17 29
#define EXECUTE_CACHE_6_15 31
#define EXECUTE_CACHE_6_14 33
#define EXECUTE_CACHE_6_9 35
#define FREE_REFERENCE_6_0 38
#define FREE_ASSIGNMENT_6_0 40
#define FREE_REFERENCES_LABEL_6_0 24
#define NUMBER_OF_LINKER_SECTIONS_6_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_6_4);
      goto compile_scode_file_hook_15;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_6_16);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_6_12);
      goto lambda_23;

    case 7:
      current_block = (Rpc - LABEL_6_10);
      goto swapB_22;

    case 8:
      current_block = (Rpc - LABEL_6_20);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_6_21);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_6_22);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_scode_file_hook_21)
DEFLABEL (compile_scode_file_hook_15)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (label_24)
  (Wrd10.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_25)
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_10])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd17.pObj) = (& (Rhp [-1]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd17.pObj)));
  (Rsp [1]) = (Wrd18.Obj);
  ((Wrd20.pObj) [2]) = (Wrd18.Obj);
  (Rsp [2]) = (Wrd21.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_12])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [4]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  (Rsp [4]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_6_12);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_22)
  CLOSURE_HEADER (LABEL_6_10);

DEFLABEL (swapB_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  Wrd5 = Wrd9;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_29)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_6_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_6_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_22])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_19)
  goto label_26;

DEFLABEL (label_31)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_6_21])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_18)
  goto label_29;

DEFLABEL (label_34)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_6_20])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define LABEL_7_11 11
#define TAG_7_12 4
#define LABEL_7_9 13
#define TAG_7_10 5
#define LABEL_7_16 15
#define LABEL_7_17 17
#define LABEL_7_18 19
#define ENVIRONMENT_LABEL_7_3 38
#define DEBUGGING_LABEL_7_2 37
#define OBJECT_7_3 36
#define OBJECT_7_2 35
#define OBJECT_7_1 34
#define OBJECT_7_0 33
#define EXECUTE_CACHE_7_15 21
#define EXECUTE_CACHE_7_14 23
#define EXECUTE_CACHE_7_13 25
#define EXECUTE_CACHE_7_8 27
#define FREE_REFERENCE_7_0 30
#define FREE_ASSIGNMENT_7_0 32
#define FREE_REFERENCES_LABEL_7_0 20
#define NUMBER_OF_LINKER_SECTIONS_7_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_7_4);
      goto compile_scode_no_file_hook_12;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto lambda_20;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto swapB_19;

    case 6:
      current_block = (Rpc - LABEL_7_16);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_7_17);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_7_18);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_scode_no_file_hook_18)
DEFLABEL (compile_scode_no_file_hook_12)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_9])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (Rsp [1]) = (Wrd17.Obj);
  ((Wrd19.pObj) [2]) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_11])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_7_11);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_19)
  CLOSURE_HEADER (LABEL_7_9);

DEFLABEL (swapB_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  Wrd5 = Wrd9;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_24)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_7_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_18])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_16)
  goto label_21;

DEFLABEL (label_26)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_17])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_15)
  goto label_24;

DEFLABEL (label_29)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_7_16])), (Wrd6.pObj));

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 5
#define DEBUGGING_LABEL_8_2 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto compile_scode_recursive_hook_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_scode_recursive_hook_3)
DEFLABEL (compile_scode_recursive_hook_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 5
#define DEBUGGING_LABEL_9_2 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto optimize_linear_lap_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimize_linear_lap_3)
DEFLABEL (optimize_linear_lap_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 9
#define DEBUGGING_LABEL_10_2 8
#define FREE_REFERENCE_10_0 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto default_file_handle_0;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_file_handle_4)
DEFLABEL (default_file_handle_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_8 9
#define TAG_11_9 3
#define LABEL_11_10 11
#define LABEL_11_11 13
#define LABEL_11_13 15
#define TAG_11_14 6
#define LABEL_11_15 17
#define LABEL_11_16 19
#define LABEL_11_18 21
#define LABEL_11_19 23
#define LABEL_11_20 25
#define LABEL_11_22 27
#define LABEL_11_23 29
#define LABEL_11_24 31
#define LABEL_11_29 33
#define TAG_11_30 15
#define LABEL_11_31 35
#define TAG_11_32 16
#define LABEL_11_33 37
#define LABEL_11_35 39
#define LABEL_11_38 41
#define TAG_11_39 19
#define LABEL_11_36 43
#define TAG_11_37 20
#define LABEL_11_46 45
#define LABEL_11_47 47
#define LABEL_11_48 49
#define LABEL_11_41 51
#define LABEL_11_43 53
#define LABEL_11_49 55
#define ENVIRONMENT_LABEL_11_3 93
#define DEBUGGING_LABEL_11_2 92
#define OBJECT_11_4 91
#define OBJECT_11_3 90
#define OBJECT_11_2 89
#define OBJECT_11_1 88
#define OBJECT_11_0 87
#define EXECUTE_CACHE_11_45 57
#define EXECUTE_CACHE_11_44 59
#define EXECUTE_CACHE_11_42 61
#define EXECUTE_CACHE_11_40 63
#define EXECUTE_CACHE_11_34 65
#define EXECUTE_CACHE_11_28 67
#define EXECUTE_CACHE_11_27 69
#define EXECUTE_CACHE_11_26 71
#define EXECUTE_CACHE_11_25 73
#define EXECUTE_CACHE_11_21 75
#define EXECUTE_CACHE_11_17 77
#define EXECUTE_CACHE_11_12 79
#define EXECUTE_CACHE_11_7 81
#define FREE_REFERENCE_11_0 84
#define FREE_ASSIGNMENT_11_0 86
#define FREE_REFERENCES_LABEL_11_0 56
#define NUMBER_OF_LINKER_SECTIONS_11_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_11_4);
      goto finish_c_compilation_34;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto lambda_7;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto lambda_42;

    case 7:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_11_16);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_11_18);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_11_19);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_11_20);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_11_22);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_11_23);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_11_24);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_11_29);
      goto lambda_43;

    case 16:
      current_block = (Rpc - LABEL_11_31);
      goto lambda_44;

    case 17:
      current_block = (Rpc - LABEL_11_33);
      goto lambda_16;

    case 18:
      current_block = (Rpc - LABEL_11_35);
      goto continuation_17;

    case 19:
      current_block = (Rpc - LABEL_11_38);
      goto lambda_46;

    case 20:
      current_block = (Rpc - LABEL_11_36);
      goto swapB_45;

    case 21:
      current_block = (Rpc - LABEL_11_46);
      goto label_36;

    case 22:
      current_block = (Rpc - LABEL_11_47);
      goto label_37;

    case 23:
      current_block = (Rpc - LABEL_11_48);
      goto label_38;

    case 24:
      current_block = (Rpc - LABEL_11_41);
      goto continuation_29;

    case 25:
      current_block = (Rpc - LABEL_11_43);
      goto continuation_27;

    case 26:
      current_block = (Rpc - LABEL_11_49);
      goto continuation_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finish_c_compilation_40)
DEFLABEL (finish_c_compilation_34)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_8])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  goto lambda_7;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_7;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_16);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_25]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto lambda_7;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_11_23);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_11_22);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_29])));
  Rhp += 5;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd17 = Wrd8;
  (Wrd18.Obj) = (Rsp [4]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  ((Wrd17.pObj) [4]) = Rvl;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [5]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [6]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_31])));
  Rhp += 3;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd26 = Wrd21;
  ((Wrd26.pObj) [2]) = Rvl;
  ((Wrd26.pObj) [3]) = (Wrd12.Obj);
  ((Wrd26.pObj) [4]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd20.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_33]))));
  (Rsp [2]) = (Wrd28.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_34]));

DEFLABEL (lambda_41)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_11_8);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_13])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_11_13);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_28]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_27]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_18);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_26]));

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_11_29);

DEFLABEL (lambda_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_36])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  ((Wrd28.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (Rsp [2]) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_39);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_38])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd21 = Wrd16;
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  ((Wrd21.pObj) [2]) = (Wrd24.Obj);
  (Wrd20.Obj) = ((Wrd23.pObj) [6]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_40]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_11_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_44]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_11_43);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_11_31);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_42]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_11_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_42]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_11_49);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_42]));

DEFLABEL (lambda_47)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_11_33);
  Rvl = (current_block [OBJECT_11_4]);
  goto pop_return;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_11_38);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_45]));

DEFLABEL (swapB_45)
  CLOSURE_HEADER (LABEL_11_36);

DEFLABEL (swapB_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  Wrd5 = Wrd9;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_51)
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
    goto label_50;

DEFLABEL (label_49)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_48)
  Rvl = (current_block [OBJECT_11_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_50)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_48])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_38)
  goto label_48;

DEFLABEL (label_53)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_47])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_37)
  goto label_51;

DEFLABEL (label_56)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_55;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_46])), (Wrd6.pObj));

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define LABEL_12_8 11
#define LABEL_12_10 13
#define LABEL_12_9 15
#define LABEL_12_12 17
#define LABEL_12_14 19
#define ENVIRONMENT_LABEL_12_3 44
#define DEBUGGING_LABEL_12_2 43
#define OBJECT_12_5 42
#define OBJECT_12_4 41
#define OBJECT_12_3 40
#define OBJECT_12_2 39
#define OBJECT_12_1 38
#define OBJECT_12_0 37
#define EXECUTE_CACHE_12_20 21
#define EXECUTE_CACHE_12_19 23
#define EXECUTE_CACHE_12_18 25
#define EXECUTE_CACHE_12_17 27
#define EXECUTE_CACHE_12_16 29
#define EXECUTE_CACHE_12_15 31
#define EXECUTE_CACHE_12_13 33
#define EXECUTE_CACHE_12_11 35
#define FREE_REFERENCES_LABEL_12_0 20
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_12_4);
      goto c_compile_9;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_12_12);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_12_14);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_compile_12)
DEFLABEL (c_compile_9)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd9.Obj) = (current_block [OBJECT_12_5]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12_12);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_9);
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_11 9
#define LABEL_13_13 11
#define LABEL_13_8 13
#define LABEL_13_9 15
#define LABEL_13_12 17
#define LABEL_13_18 19
#define LABEL_13_15 21
#define LABEL_13_19 23
#define LABEL_13_20 25
#define LABEL_13_24 27
#define LABEL_13_25 29
#define LABEL_13_27 31
#define LABEL_13_29 33
#define LABEL_13_30 35
#define TAG_13_31 16
#define ENVIRONMENT_LABEL_13_3 68
#define DEBUGGING_LABEL_13_2 67
#define OBJECT_13_3 66
#define OBJECT_13_2 65
#define OBJECT_13_1 64
#define OBJECT_13_0 63
#define EXECUTE_CACHE_13_33 37
#define EXECUTE_CACHE_13_32 39
#define EXECUTE_CACHE_13_28 41
#define EXECUTE_CACHE_13_26 43
#define EXECUTE_CACHE_13_23 45
#define EXECUTE_CACHE_13_22 47
#define EXECUTE_CACHE_13_21 49
#define EXECUTE_CACHE_13_17 51
#define EXECUTE_CACHE_13_16 53
#define EXECUTE_CACHE_13_14 55
#define EXECUTE_CACHE_13_10 57
#define EXECUTE_CACHE_13_6 59
#define FREE_REFERENCE_13_0 62
#define FREE_REFERENCES_LABEL_13_0 36
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd34;
  machine_word Wrd6;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_13_4);
      goto run_compiler_22;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_13_11);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_13_13);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_13_9);
      goto lambda_3;

    case 7:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_19;

    case 8:
      current_block = (Rpc - LABEL_13_18);
      goto lambda_17;

    case 9:
      current_block = (Rpc - LABEL_13_15);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_13_19);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_13_20);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_13_24);
      goto loop_14;

    case 13:
      current_block = (Rpc - LABEL_13_25);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_13_27);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_13_29);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_13_30);
      goto lambda_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (run_compiler_27)
DEFLABEL (run_compiler_22)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_37;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd34.Lng) == 0)
    goto label_33;

DEFLABEL (label_32)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.pObj) = (& (Rsp [2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  Rdl = (& (Rsp [1]));
  goto lambda_17;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_13_12);
  (Wrd5.Obj) = (current_block [OBJECT_13_2]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_17]));

DEFLABEL (label_33)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_36;
  Wrd19 = Wrd23;

DEFLABEL (label_35)
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd27.pObj) = (& (Rsp [1]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd27.pObj)));
  (Rsp [0]) = (Wrd29.Obj);
  Rdl = (& (Rsp [4]));
  goto lambda_17;

DEFLABEL (label_34)
  Rvl = (current_block [OBJECT_13_1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_13])), (Wrd20.pObj));

DEFLABEL (label_25)
  (Wrd19.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_33;

DEFLABEL (lambda_28)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_13_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

DEFLABEL (label_38)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 30)
    goto label_39;
  (Wrd9.Obj) = (current_block [OBJECT_13_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_17]));

DEFLABEL (label_39)
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_29)
DEFLABEL (lambda_17)
  DLINK_INTERRUPT_CHECK (25, LABEL_13_18);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13_20);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_19);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  goto loop_14;

DEFLABEL (loop_30)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_13_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_26]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_28]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  Rvl = (current_block [OBJECT_13_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_29]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_30])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_32]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_13_29);
  Rsp = (& (Rsp [1]));
  goto loop_14;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_13_30);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_33]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 6
#define DEBUGGING_LABEL_14_2 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto c_output_extension_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_output_extension_3)
DEFLABEL (c_output_extension_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  Rvl = (current_block [OBJECT_14_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_6 5
#define LABEL_15_5 7
#define LABEL_15_8 9
#define LABEL_15_9 11
#define ENVIRONMENT_LABEL_15_3 21
#define DEBUGGING_LABEL_15_2 20
#define OBJECT_15_2 19
#define OBJECT_15_1 18
#define OBJECT_15_0 17
#define EXECUTE_CACHE_15_7 13
#define FREE_REFERENCE_15_0 16
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd38;
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
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_15_4);
      goto recursive_compilation_results_3;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_2;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (recursive_compilation_results_9)
DEFLABEL (recursive_compilation_results_3)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_12;
  Wrd7 = Wrd11;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd8.pObj));

DEFLABEL (label_5)
  (Wrd7.Obj) = Rvl;
  goto label_11;

DEFLABEL (lambda_10)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_15_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_21;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_19;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_19;
  (Wrd21.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_18)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 26)
    goto label_14;

DEFLABEL (label_13)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_14)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_13;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if ((Wrd43.Lng) < (Wrd45.Lng))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_15_2]);

DEFLABEL (label_15)
DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_15_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_7)
  (Wrd21.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_15_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_7 5
#define LABEL_16_5 7
#define LABEL_16_10 9
#define LABEL_16_8 11
#define LABEL_16_12 13
#define ENVIRONMENT_LABEL_16_3 25
#define DEBUGGING_LABEL_16_2 24
#define EXECUTE_CACHE_16_11 15
#define EXECUTE_CACHE_16_9 17
#define EXECUTE_CACHE_16_6 19
#define FREE_REFERENCE_16_1 22
#define FREE_REFERENCE_16_0 23
#define FREE_REFERENCES_LABEL_16_0 14
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_16_4);
      goto assemble_link_3;

    case 1:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_16_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_16_12);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assemble_link_8)
DEFLABEL (assemble_link_3)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_12;

DEFLABEL (label_11)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_8);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_12])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_14;
  Wrd11 = Wrd15;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_7);
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_10])), (Wrd12.pObj));

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_5 3
#define LABEL_17_4 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define LABEL_17_8 11
#define ENVIRONMENT_LABEL_17_3 24
#define DEBUGGING_LABEL_17_2 23
#define OBJECT_17_0 22
#define EXECUTE_CACHE_17_10 13
#define EXECUTE_CACHE_17_9 15
#define FREE_REFERENCE_17_1 18
#define FREE_REFERENCE_17_0 19
#define FREE_ASSIGNMENT_17_0 21
#define FREE_REFERENCES_LABEL_17_0 12
#define NUMBER_OF_LINKER_SECTIONS_17_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd28;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_17_4);
      goto wrap_lap_1;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_17_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wrap_lap_7)
DEFLABEL (wrap_lap_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_0]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;

DEFLABEL (label_15)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_14)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_13;
  Wrd20 = Wrd24;

DEFLABEL (label_12)
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd28.Obj) = (current_block [OBJECT_17_0]);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (label_9)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_11;
  Wrd29 = Wrd33;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd28.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_8])), (Wrd30.pObj));

DEFLABEL (label_5)
  (Wrd29.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_7])), (Wrd21.pObj));

DEFLABEL (label_4)
  (Wrd20.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_16)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_15;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_6])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_3)
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_7 5
#define TAG_18_8 1
#define LABEL_18_5 7
#define TAG_18_6 2
#define LABEL_18_10 9
#define LABEL_18_11 11
#define LABEL_18_12 13
#define LABEL_18_13 15
#define LABEL_18_14 17
#define LABEL_18_15 19
#define ENVIRONMENT_LABEL_18_3 32
#define DEBUGGING_LABEL_18_2 31
#define OBJECT_18_1 30
#define OBJECT_18_0 29
#define EXECUTE_CACHE_18_9 21
#define FREE_REFERENCE_18_1 24
#define FREE_REFERENCE_18_0 25
#define FREE_ASSIGNMENT_18_1 27
#define FREE_ASSIGNMENT_18_0 28
#define FREE_REFERENCES_LABEL_18_0 20
#define NUMBER_OF_LINKER_SECTIONS_18_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_18_4);
      goto bind_assembler_linker_top_level_variables_15;

    case 1:
      current_block = (Rpc - LABEL_18_7);
      goto lambda_26;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto swapB_25;

    case 3:
      current_block = (Rpc - LABEL_18_10);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_18_11);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_18_12);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_18_13);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_18_14);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_18_15);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_assembler_linker_top_level_variables_24)
DEFLABEL (bind_assembler_linker_top_level_variables_15)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_18_0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  Wrd25 = Wrd27;
  ((Wrd25.pObj) [2]) = (Wrd7.Obj);
  ((Wrd25.pObj) [3]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_7])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Rsp [3]) = (Wrd28.Obj);
  (Rsp [2]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_18_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_25)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (swapB_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  Wrd5 = Wrd9;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_39)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_36)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  Wrd57 = Wrd61;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_32;

DEFLABEL (label_31)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_30)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_18_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_15])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_22)
  goto label_27;

DEFLABEL (label_32)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_31;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_14])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_21)
  goto label_30;

DEFLABEL (label_35)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_13])), (Wrd58.pObj));

DEFLABEL (label_20)
  (Wrd57.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_38)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_12])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_19)
  goto label_36;

DEFLABEL (label_41)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_11])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_18)
  goto label_39;

DEFLABEL (label_44)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_10])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_7 5
#define TAG_19_8 1
#define LABEL_19_5 7
#define TAG_19_6 2
#define LABEL_19_10 9
#define LABEL_19_11 11
#define LABEL_19_12 13
#define LABEL_19_13 15
#define LABEL_19_14 17
#define LABEL_19_15 19
#define LABEL_19_16 21
#define LABEL_19_17 23
#define LABEL_19_18 25
#define LABEL_19_19 27
#define LABEL_19_20 29
#define LABEL_19_21 31
#define LABEL_19_22 33
#define LABEL_19_23 35
#define LABEL_19_24 37
#define LABEL_19_25 39
#define LABEL_19_26 41
#define LABEL_19_27 43
#define LABEL_19_28 45
#define LABEL_19_29 47
#define LABEL_19_30 49
#define LABEL_19_31 51
#define LABEL_19_32 53
#define LABEL_19_33 55
#define LABEL_19_34 57
#define LABEL_19_35 59
#define LABEL_19_36 61
#define LABEL_19_37 63
#define LABEL_19_38 65
#define LABEL_19_39 67
#define LABEL_19_40 69
#define LABEL_19_41 71
#define LABEL_19_42 73
#define LABEL_19_43 75
#define LABEL_19_44 77
#define LABEL_19_45 79
#define LABEL_19_46 81
#define LABEL_19_47 83
#define LABEL_19_48 85
#define LABEL_19_49 87
#define LABEL_19_50 89
#define LABEL_19_51 91
#define LABEL_19_52 93
#define LABEL_19_53 95
#define LABEL_19_54 97
#define LABEL_19_55 99
#define LABEL_19_56 101
#define LABEL_19_57 103
#define LABEL_19_58 105
#define LABEL_19_59 107
#define LABEL_19_60 109
#define LABEL_19_61 111
#define LABEL_19_62 113
#define LABEL_19_63 115
#define LABEL_19_64 117
#define LABEL_19_65 119
#define LABEL_19_66 121
#define LABEL_19_67 123
#define LABEL_19_68 125
#define LABEL_19_69 127
#define LABEL_19_70 129
#define LABEL_19_71 131
#define LABEL_19_72 133
#define LABEL_19_73 135
#define LABEL_19_74 137
#define LABEL_19_75 139
#define LABEL_19_76 141
#define LABEL_19_77 143
#define LABEL_19_78 145
#define LABEL_19_79 147
#define LABEL_19_80 149
#define LABEL_19_81 151
#define LABEL_19_82 153
#define LABEL_19_83 155
#define LABEL_19_84 157
#define LABEL_19_85 159
#define LABEL_19_86 161
#define LABEL_19_87 163
#define ENVIRONMENT_LABEL_19_3 223
#define DEBUGGING_LABEL_19_2 222
#define OBJECT_19_0 221
#define EXECUTE_CACHE_19_9 165
#define FREE_REFERENCE_19_25 168
#define FREE_REFERENCE_19_24 169
#define FREE_REFERENCE_19_23 170
#define FREE_REFERENCE_19_22 171
#define FREE_REFERENCE_19_21 172
#define FREE_REFERENCE_19_20 173
#define FREE_REFERENCE_19_19 174
#define FREE_REFERENCE_19_18 175
#define FREE_REFERENCE_19_17 176
#define FREE_REFERENCE_19_16 177
#define FREE_REFERENCE_19_15 178
#define FREE_REFERENCE_19_14 179
#define FREE_REFERENCE_19_13 180
#define FREE_REFERENCE_19_12 181
#define FREE_REFERENCE_19_11 182
#define FREE_REFERENCE_19_10 183
#define FREE_REFERENCE_19_9 184
#define FREE_REFERENCE_19_8 185
#define FREE_REFERENCE_19_7 186
#define FREE_REFERENCE_19_6 187
#define FREE_REFERENCE_19_5 188
#define FREE_REFERENCE_19_4 189
#define FREE_REFERENCE_19_3 190
#define FREE_REFERENCE_19_2 191
#define FREE_REFERENCE_19_1 192
#define FREE_REFERENCE_19_0 193
#define FREE_ASSIGNMENT_19_25 195
#define FREE_ASSIGNMENT_19_24 196
#define FREE_ASSIGNMENT_19_23 197
#define FREE_ASSIGNMENT_19_22 198
#define FREE_ASSIGNMENT_19_21 199
#define FREE_ASSIGNMENT_19_20 200
#define FREE_ASSIGNMENT_19_19 201
#define FREE_ASSIGNMENT_19_18 202
#define FREE_ASSIGNMENT_19_17 203
#define FREE_ASSIGNMENT_19_16 204
#define FREE_ASSIGNMENT_19_15 205
#define FREE_ASSIGNMENT_19_14 206
#define FREE_ASSIGNMENT_19_13 207
#define FREE_ASSIGNMENT_19_12 208
#define FREE_ASSIGNMENT_19_11 209
#define FREE_ASSIGNMENT_19_10 210
#define FREE_ASSIGNMENT_19_9 211
#define FREE_ASSIGNMENT_19_8 212
#define FREE_ASSIGNMENT_19_7 213
#define FREE_ASSIGNMENT_19_6 214
#define FREE_ASSIGNMENT_19_5 215
#define FREE_ASSIGNMENT_19_4 216
#define FREE_ASSIGNMENT_19_3 217
#define FREE_ASSIGNMENT_19_2 218
#define FREE_ASSIGNMENT_19_1 219
#define FREE_ASSIGNMENT_19_0 220
#define FREE_REFERENCES_LABEL_19_0 164
#define NUMBER_OF_LINKER_SECTIONS_19_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd1354;
  machine_word Wrd1353;
  machine_word Wrd1345;
  machine_word Wrd1337;
  machine_word Wrd1336;
  machine_word Wrd1335;
  machine_word Wrd1334;
  machine_word Wrd1333;
  machine_word Wrd1332;
  machine_word Wrd1328;
  machine_word Wrd1327;
  machine_word Wrd1318;
  machine_word Wrd1317;
  machine_word Wrd1305;
  machine_word Wrd1310;
  machine_word Wrd1309;
  machine_word Wrd1306;
  machine_word Wrd1302;
  machine_word Wrd1301;
  machine_word Wrd1293;
  machine_word Wrd1285;
  machine_word Wrd1284;
  machine_word Wrd1283;
  machine_word Wrd1282;
  machine_word Wrd1281;
  machine_word Wrd1280;
  machine_word Wrd1276;
  machine_word Wrd1275;
  machine_word Wrd1266;
  machine_word Wrd1265;
  machine_word Wrd1253;
  machine_word Wrd1258;
  machine_word Wrd1257;
  machine_word Wrd1254;
  machine_word Wrd1250;
  machine_word Wrd1249;
  machine_word Wrd1241;
  machine_word Wrd1233;
  machine_word Wrd1232;
  machine_word Wrd1231;
  machine_word Wrd1230;
  machine_word Wrd1229;
  machine_word Wrd1228;
  machine_word Wrd1224;
  machine_word Wrd1223;
  machine_word Wrd1214;
  machine_word Wrd1213;
  machine_word Wrd1201;
  machine_word Wrd1206;
  machine_word Wrd1205;
  machine_word Wrd1202;
  machine_word Wrd1198;
  machine_word Wrd1197;
  machine_word Wrd1189;
  machine_word Wrd1181;
  machine_word Wrd1180;
  machine_word Wrd1179;
  machine_word Wrd1178;
  machine_word Wrd1177;
  machine_word Wrd1176;
  machine_word Wrd1172;
  machine_word Wrd1171;
  machine_word Wrd1162;
  machine_word Wrd1161;
  machine_word Wrd1149;
  machine_word Wrd1154;
  machine_word Wrd1153;
  machine_word Wrd1150;
  machine_word Wrd1146;
  machine_word Wrd1145;
  machine_word Wrd1137;
  machine_word Wrd1129;
  machine_word Wrd1128;
  machine_word Wrd1127;
  machine_word Wrd1126;
  machine_word Wrd1125;
  machine_word Wrd1124;
  machine_word Wrd1120;
  machine_word Wrd1119;
  machine_word Wrd1110;
  machine_word Wrd1109;
  machine_word Wrd1097;
  machine_word Wrd1102;
  machine_word Wrd1101;
  machine_word Wrd1098;
  machine_word Wrd1094;
  machine_word Wrd1093;
  machine_word Wrd1085;
  machine_word Wrd1077;
  machine_word Wrd1076;
  machine_word Wrd1075;
  machine_word Wrd1074;
  machine_word Wrd1073;
  machine_word Wrd1072;
  machine_word Wrd1068;
  machine_word Wrd1067;
  machine_word Wrd1058;
  machine_word Wrd1057;
  machine_word Wrd1045;
  machine_word Wrd1050;
  machine_word Wrd1049;
  machine_word Wrd1046;
  machine_word Wrd1042;
  machine_word Wrd1041;
  machine_word Wrd1033;
  machine_word Wrd1025;
  machine_word Wrd1024;
  machine_word Wrd1023;
  machine_word Wrd1022;
  machine_word Wrd1021;
  machine_word Wrd1020;
  machine_word Wrd1016;
  machine_word Wrd1015;
  machine_word Wrd1006;
  machine_word Wrd1005;
  machine_word Wrd993;
  machine_word Wrd998;
  machine_word Wrd997;
  machine_word Wrd994;
  machine_word Wrd990;
  machine_word Wrd989;
  machine_word Wrd981;
  machine_word Wrd973;
  machine_word Wrd972;
  machine_word Wrd971;
  machine_word Wrd970;
  machine_word Wrd969;
  machine_word Wrd968;
  machine_word Wrd964;
  machine_word Wrd963;
  machine_word Wrd954;
  machine_word Wrd953;
  machine_word Wrd941;
  machine_word Wrd946;
  machine_word Wrd945;
  machine_word Wrd942;
  machine_word Wrd938;
  machine_word Wrd937;
  machine_word Wrd929;
  machine_word Wrd921;
  machine_word Wrd920;
  machine_word Wrd919;
  machine_word Wrd918;
  machine_word Wrd917;
  machine_word Wrd916;
  machine_word Wrd912;
  machine_word Wrd911;
  machine_word Wrd902;
  machine_word Wrd901;
  machine_word Wrd889;
  machine_word Wrd894;
  machine_word Wrd893;
  machine_word Wrd890;
  machine_word Wrd886;
  machine_word Wrd885;
  machine_word Wrd877;
  machine_word Wrd869;
  machine_word Wrd868;
  machine_word Wrd867;
  machine_word Wrd866;
  machine_word Wrd865;
  machine_word Wrd864;
  machine_word Wrd860;
  machine_word Wrd859;
  machine_word Wrd850;
  machine_word Wrd849;
  machine_word Wrd837;
  machine_word Wrd842;
  machine_word Wrd841;
  machine_word Wrd838;
  machine_word Wrd834;
  machine_word Wrd833;
  machine_word Wrd825;
  machine_word Wrd817;
  machine_word Wrd816;
  machine_word Wrd815;
  machine_word Wrd814;
  machine_word Wrd813;
  machine_word Wrd812;
  machine_word Wrd808;
  machine_word Wrd807;
  machine_word Wrd798;
  machine_word Wrd797;
  machine_word Wrd785;
  machine_word Wrd790;
  machine_word Wrd789;
  machine_word Wrd786;
  machine_word Wrd782;
  machine_word Wrd781;
  machine_word Wrd773;
  machine_word Wrd765;
  machine_word Wrd764;
  machine_word Wrd763;
  machine_word Wrd762;
  machine_word Wrd761;
  machine_word Wrd760;
  machine_word Wrd756;
  machine_word Wrd755;
  machine_word Wrd746;
  machine_word Wrd745;
  machine_word Wrd733;
  machine_word Wrd738;
  machine_word Wrd737;
  machine_word Wrd734;
  machine_word Wrd730;
  machine_word Wrd729;
  machine_word Wrd721;
  machine_word Wrd713;
  machine_word Wrd712;
  machine_word Wrd711;
  machine_word Wrd710;
  machine_word Wrd709;
  machine_word Wrd708;
  machine_word Wrd704;
  machine_word Wrd703;
  machine_word Wrd694;
  machine_word Wrd693;
  machine_word Wrd681;
  machine_word Wrd686;
  machine_word Wrd685;
  machine_word Wrd682;
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
  machine_word Wrd162;
  machine_word Wrd158;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd80;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd163;
  machine_word Wrd164;
  machine_word Wrd245;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd10;
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
      goto bind_assembler_linker_variables_159;

    case 1:
      current_block = (Rpc - LABEL_19_7);
      goto lambda_242;

    case 2:
      current_block = (Rpc - LABEL_19_5);
      goto swapB_241;

    case 3:
      current_block = (Rpc - LABEL_19_10);
      goto label_161;

    case 4:
      current_block = (Rpc - LABEL_19_11);
      goto label_162;

    case 5:
      current_block = (Rpc - LABEL_19_12);
      goto label_163;

    case 6:
      current_block = (Rpc - LABEL_19_13);
      goto label_164;

    case 7:
      current_block = (Rpc - LABEL_19_14);
      goto label_165;

    case 8:
      current_block = (Rpc - LABEL_19_15);
      goto label_166;

    case 9:
      current_block = (Rpc - LABEL_19_16);
      goto label_167;

    case 10:
      current_block = (Rpc - LABEL_19_17);
      goto label_168;

    case 11:
      current_block = (Rpc - LABEL_19_18);
      goto label_169;

    case 12:
      current_block = (Rpc - LABEL_19_19);
      goto label_170;

    case 13:
      current_block = (Rpc - LABEL_19_20);
      goto label_171;

    case 14:
      current_block = (Rpc - LABEL_19_21);
      goto label_172;

    case 15:
      current_block = (Rpc - LABEL_19_22);
      goto label_173;

    case 16:
      current_block = (Rpc - LABEL_19_23);
      goto label_174;

    case 17:
      current_block = (Rpc - LABEL_19_24);
      goto label_175;

    case 18:
      current_block = (Rpc - LABEL_19_25);
      goto label_176;

    case 19:
      current_block = (Rpc - LABEL_19_26);
      goto label_177;

    case 20:
      current_block = (Rpc - LABEL_19_27);
      goto label_178;

    case 21:
      current_block = (Rpc - LABEL_19_28);
      goto label_179;

    case 22:
      current_block = (Rpc - LABEL_19_29);
      goto label_180;

    case 23:
      current_block = (Rpc - LABEL_19_30);
      goto label_181;

    case 24:
      current_block = (Rpc - LABEL_19_31);
      goto label_182;

    case 25:
      current_block = (Rpc - LABEL_19_32);
      goto label_183;

    case 26:
      current_block = (Rpc - LABEL_19_33);
      goto label_184;

    case 27:
      current_block = (Rpc - LABEL_19_34);
      goto label_185;

    case 28:
      current_block = (Rpc - LABEL_19_35);
      goto label_186;

    case 29:
      current_block = (Rpc - LABEL_19_36);
      goto label_187;

    case 30:
      current_block = (Rpc - LABEL_19_37);
      goto label_188;

    case 31:
      current_block = (Rpc - LABEL_19_38);
      goto label_189;

    case 32:
      current_block = (Rpc - LABEL_19_39);
      goto label_190;

    case 33:
      current_block = (Rpc - LABEL_19_40);
      goto label_191;

    case 34:
      current_block = (Rpc - LABEL_19_41);
      goto label_192;

    case 35:
      current_block = (Rpc - LABEL_19_42);
      goto label_193;

    case 36:
      current_block = (Rpc - LABEL_19_43);
      goto label_194;

    case 37:
      current_block = (Rpc - LABEL_19_44);
      goto label_195;

    case 38:
      current_block = (Rpc - LABEL_19_45);
      goto label_196;

    case 39:
      current_block = (Rpc - LABEL_19_46);
      goto label_197;

    case 40:
      current_block = (Rpc - LABEL_19_47);
      goto label_198;

    case 41:
      current_block = (Rpc - LABEL_19_48);
      goto label_199;

    case 42:
      current_block = (Rpc - LABEL_19_49);
      goto label_200;

    case 43:
      current_block = (Rpc - LABEL_19_50);
      goto label_201;

    case 44:
      current_block = (Rpc - LABEL_19_51);
      goto label_202;

    case 45:
      current_block = (Rpc - LABEL_19_52);
      goto label_203;

    case 46:
      current_block = (Rpc - LABEL_19_53);
      goto label_204;

    case 47:
      current_block = (Rpc - LABEL_19_54);
      goto label_205;

    case 48:
      current_block = (Rpc - LABEL_19_55);
      goto label_206;

    case 49:
      current_block = (Rpc - LABEL_19_56);
      goto label_207;

    case 50:
      current_block = (Rpc - LABEL_19_57);
      goto label_208;

    case 51:
      current_block = (Rpc - LABEL_19_58);
      goto label_209;

    case 52:
      current_block = (Rpc - LABEL_19_59);
      goto label_210;

    case 53:
      current_block = (Rpc - LABEL_19_60);
      goto label_211;

    case 54:
      current_block = (Rpc - LABEL_19_61);
      goto label_212;

    case 55:
      current_block = (Rpc - LABEL_19_62);
      goto label_213;

    case 56:
      current_block = (Rpc - LABEL_19_63);
      goto label_214;

    case 57:
      current_block = (Rpc - LABEL_19_64);
      goto label_215;

    case 58:
      current_block = (Rpc - LABEL_19_65);
      goto label_216;

    case 59:
      current_block = (Rpc - LABEL_19_66);
      goto label_217;

    case 60:
      current_block = (Rpc - LABEL_19_67);
      goto label_218;

    case 61:
      current_block = (Rpc - LABEL_19_68);
      goto label_219;

    case 62:
      current_block = (Rpc - LABEL_19_69);
      goto label_220;

    case 63:
      current_block = (Rpc - LABEL_19_70);
      goto label_221;

    case 64:
      current_block = (Rpc - LABEL_19_71);
      goto label_222;

    case 65:
      current_block = (Rpc - LABEL_19_72);
      goto label_223;

    case 66:
      current_block = (Rpc - LABEL_19_73);
      goto label_224;

    case 67:
      current_block = (Rpc - LABEL_19_74);
      goto label_225;

    case 68:
      current_block = (Rpc - LABEL_19_75);
      goto label_226;

    case 69:
      current_block = (Rpc - LABEL_19_76);
      goto label_227;

    case 70:
      current_block = (Rpc - LABEL_19_77);
      goto label_228;

    case 71:
      current_block = (Rpc - LABEL_19_78);
      goto label_229;

    case 72:
      current_block = (Rpc - LABEL_19_79);
      goto label_230;

    case 73:
      current_block = (Rpc - LABEL_19_80);
      goto label_231;

    case 74:
      current_block = (Rpc - LABEL_19_81);
      goto label_232;

    case 75:
      current_block = (Rpc - LABEL_19_82);
      goto label_233;

    case 76:
      current_block = (Rpc - LABEL_19_83);
      goto label_234;

    case 77:
      current_block = (Rpc - LABEL_19_84);
      goto label_235;

    case 78:
      current_block = (Rpc - LABEL_19_85);
      goto label_236;

    case 79:
      current_block = (Rpc - LABEL_19_86);
      goto label_237;

    case 80:
      current_block = (Rpc - LABEL_19_87);
      goto label_238;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_assembler_linker_variables_240)
DEFLABEL (bind_assembler_linker_variables_159)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd24.pObj) = (& (Rhp [-1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd30.pObj) = (& (Rhp [-1]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd36.pObj) = (& (Rhp [-1]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd42.pObj) = (& (Rhp [-1]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd48.pObj) = (& (Rhp [-1]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd54.pObj) = (& (Rhp [-1]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd54.pObj)));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd60.pObj) = (& (Rhp [-1]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd60.pObj)));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd66.pObj) = (& (Rhp [-1]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd72.pObj) = (& (Rhp [-1]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd72.pObj)));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd78.pObj) = (& (Rhp [-1]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd78.pObj)));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd84.pObj) = (& (Rhp [-1]));
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd84.pObj)));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd90.pObj) = (& (Rhp [-1]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd90.pObj)));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd96.pObj) = (& (Rhp [-1]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd96.pObj)));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd102.pObj) = (& (Rhp [-1]));
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd102.pObj)));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd108.pObj) = (& (Rhp [-1]));
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd108.pObj)));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd114.pObj) = (& (Rhp [-1]));
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd114.pObj)));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd120.pObj) = (& (Rhp [-1]));
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd120.pObj)));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd126.pObj) = (& (Rhp [-1]));
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd126.pObj)));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd132.pObj) = (& (Rhp [-1]));
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd132.pObj)));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd138.pObj) = (& (Rhp [-1]));
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd138.pObj)));
  (* (--Rsp)) = (Wrd139.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd144.pObj) = (& (Rhp [-1]));
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd144.pObj)));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd150.pObj) = (& (Rhp [-1]));
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd150.pObj)));
  (* (--Rsp)) = (Wrd151.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd156.pObj) = (& (Rhp [-1]));
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd156.pObj)));
  (* (--Rsp)) = (Wrd157.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 29));
  (Wrd247.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_5])));
  Rhp += 26;
  (Wrd248.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd247.pObj)));
  (* (--Rsp)) = (Wrd248.Obj);
  Wrd245 = Wrd247;
  ((Wrd245.pObj) [2]) = (Wrd7.Obj);
  ((Wrd245.pObj) [3]) = (Wrd13.Obj);
  ((Wrd245.pObj) [4]) = (Wrd19.Obj);
  ((Wrd245.pObj) [5]) = (Wrd25.Obj);
  ((Wrd245.pObj) [6]) = (Wrd31.Obj);
  ((Wrd245.pObj) [7]) = (Wrd37.Obj);
  ((Wrd245.pObj) [8]) = (Wrd43.Obj);
  ((Wrd245.pObj) [9]) = (Wrd49.Obj);
  ((Wrd245.pObj) [10]) = (Wrd55.Obj);
  ((Wrd245.pObj) [11]) = (Wrd61.Obj);
  ((Wrd245.pObj) [12]) = (Wrd67.Obj);
  ((Wrd245.pObj) [13]) = (Wrd73.Obj);
  ((Wrd245.pObj) [14]) = (Wrd79.Obj);
  ((Wrd245.pObj) [15]) = (Wrd85.Obj);
  ((Wrd245.pObj) [16]) = (Wrd91.Obj);
  ((Wrd245.pObj) [17]) = (Wrd97.Obj);
  ((Wrd245.pObj) [18]) = (Wrd103.Obj);
  ((Wrd245.pObj) [19]) = (Wrd109.Obj);
  ((Wrd245.pObj) [20]) = (Wrd115.Obj);
  ((Wrd245.pObj) [21]) = (Wrd121.Obj);
  ((Wrd245.pObj) [22]) = (Wrd127.Obj);
  ((Wrd245.pObj) [23]) = (Wrd133.Obj);
  ((Wrd245.pObj) [24]) = (Wrd139.Obj);
  ((Wrd245.pObj) [25]) = (Wrd145.Obj);
  ((Wrd245.pObj) [26]) = (Wrd151.Obj);
  ((Wrd245.pObj) [27]) = (Wrd157.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd164.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_7])));
  Rhp += 1;
  (Wrd163.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd164.pObj)));
  Wrd165 = Wrd164;
  (Wrd166.Obj) = (Rsp [27]);
  ((Wrd165.pObj) [2]) = (Wrd166.Obj);
  (Rsp [27]) = (Wrd248.Obj);
  (Rsp [26]) = (Wrd163.Obj);
  (Rsp [25]) = (Wrd248.Obj);
  Rsp = (& (Rsp [25]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (lambda_242)
  CLOSURE_HEADER (LABEL_19_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_241)
  CLOSURE_HEADER (LABEL_19_5);

DEFLABEL (swapB_157)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_476;

DEFLABEL (label_475)
  Wrd5 = Wrd9;

DEFLABEL (label_474)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_473;

DEFLABEL (label_472)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_471)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [27]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_470;

DEFLABEL (label_469)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_468)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_467;

DEFLABEL (label_466)
  Wrd57 = Wrd61;

DEFLABEL (label_465)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_464;

DEFLABEL (label_463)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_462)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [26]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_461;

DEFLABEL (label_460)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_459)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_458;

DEFLABEL (label_457)
  Wrd109 = Wrd113;

DEFLABEL (label_456)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_455;

DEFLABEL (label_454)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_453)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [25]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_452;

DEFLABEL (label_451)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_450)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_3]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_449;

DEFLABEL (label_448)
  Wrd161 = Wrd165;

DEFLABEL (label_447)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_446;

DEFLABEL (label_445)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_444)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [24]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_443;

DEFLABEL (label_442)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_441)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_4]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_440;

DEFLABEL (label_439)
  Wrd213 = Wrd217;

DEFLABEL (label_438)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_4]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_437;

DEFLABEL (label_436)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_435)
  (Wrd240.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd243.Obj) = ((Wrd242.pObj) [23]);
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd245.Obj);
  ((Wrd244.pObj) [0]) = (Wrd240.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_4]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_434;

DEFLABEL (label_433)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_432)
  (Wrd266.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_5]));
  (Wrd269.Obj) = ((Wrd266.pObj) [0]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if ((Wrd270.uLng) == 50)
    goto label_431;

DEFLABEL (label_430)
  Wrd265 = Wrd269;

DEFLABEL (label_429)
  (* (--Rsp)) = (Wrd265.Obj);
  (Wrd277.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_5]));
  (Wrd278.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd287.Obj) = ((Wrd277.pObj) [0]);
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if ((Wrd288.uLng) == 50)
    goto label_428;

DEFLABEL (label_427)
  ((Wrd277.pObj) [0]) = (Wrd278.Obj);

DEFLABEL (label_426)
  (Wrd292.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd293.Obj) = (Rsp [1]);
  (Wrd294.pObj) = (OBJECT_ADDRESS (Wrd293.Obj));
  (Wrd295.Obj) = ((Wrd294.pObj) [22]);
  (Wrd296.pObj) = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd297.Obj) = ((Wrd296.pObj) [0]);
  (* (--Rsp)) = (Wrd297.Obj);
  ((Wrd296.pObj) [0]) = (Wrd292.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd305.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_5]));
  (Wrd313.Obj) = ((Wrd305.pObj) [0]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if ((Wrd314.uLng) == 50)
    goto label_425;

DEFLABEL (label_424)
  ((Wrd305.pObj) [0]) = (Wrd297.Obj);

DEFLABEL (label_423)
  (Wrd318.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_6]));
  (Wrd321.Obj) = ((Wrd318.pObj) [0]);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if ((Wrd322.uLng) == 50)
    goto label_422;

DEFLABEL (label_421)
  Wrd317 = Wrd321;

DEFLABEL (label_420)
  (* (--Rsp)) = (Wrd317.Obj);
  (Wrd329.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_6]));
  (Wrd330.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd339.Obj) = ((Wrd329.pObj) [0]);
  (Wrd340.uLng) = (OBJECT_TYPE (Wrd339.Obj));
  if ((Wrd340.uLng) == 50)
    goto label_419;

DEFLABEL (label_418)
  ((Wrd329.pObj) [0]) = (Wrd330.Obj);

DEFLABEL (label_417)
  (Wrd344.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd344.Obj);
  (Wrd345.Obj) = (Rsp [1]);
  (Wrd346.pObj) = (OBJECT_ADDRESS (Wrd345.Obj));
  (Wrd347.Obj) = ((Wrd346.pObj) [21]);
  (Wrd348.pObj) = (OBJECT_ADDRESS (Wrd347.Obj));
  (Wrd349.Obj) = ((Wrd348.pObj) [0]);
  (* (--Rsp)) = (Wrd349.Obj);
  ((Wrd348.pObj) [0]) = (Wrd344.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd357.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_6]));
  (Wrd365.Obj) = ((Wrd357.pObj) [0]);
  (Wrd366.uLng) = (OBJECT_TYPE (Wrd365.Obj));
  if ((Wrd366.uLng) == 50)
    goto label_416;

DEFLABEL (label_415)
  ((Wrd357.pObj) [0]) = (Wrd349.Obj);

DEFLABEL (label_414)
  (Wrd370.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_7]));
  (Wrd373.Obj) = ((Wrd370.pObj) [0]);
  (Wrd374.uLng) = (OBJECT_TYPE (Wrd373.Obj));
  if ((Wrd374.uLng) == 50)
    goto label_413;

DEFLABEL (label_412)
  Wrd369 = Wrd373;

DEFLABEL (label_411)
  (* (--Rsp)) = (Wrd369.Obj);
  (Wrd381.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_7]));
  (Wrd382.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd391.Obj) = ((Wrd381.pObj) [0]);
  (Wrd392.uLng) = (OBJECT_TYPE (Wrd391.Obj));
  if ((Wrd392.uLng) == 50)
    goto label_410;

DEFLABEL (label_409)
  ((Wrd381.pObj) [0]) = (Wrd382.Obj);

DEFLABEL (label_408)
  (Wrd396.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd396.Obj);
  (Wrd397.Obj) = (Rsp [1]);
  (Wrd398.pObj) = (OBJECT_ADDRESS (Wrd397.Obj));
  (Wrd399.Obj) = ((Wrd398.pObj) [20]);
  (Wrd400.pObj) = (OBJECT_ADDRESS (Wrd399.Obj));
  (Wrd401.Obj) = ((Wrd400.pObj) [0]);
  (* (--Rsp)) = (Wrd401.Obj);
  ((Wrd400.pObj) [0]) = (Wrd396.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd409.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_7]));
  (Wrd417.Obj) = ((Wrd409.pObj) [0]);
  (Wrd418.uLng) = (OBJECT_TYPE (Wrd417.Obj));
  if ((Wrd418.uLng) == 50)
    goto label_407;

DEFLABEL (label_406)
  ((Wrd409.pObj) [0]) = (Wrd401.Obj);

DEFLABEL (label_405)
  (Wrd422.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_8]));
  (Wrd425.Obj) = ((Wrd422.pObj) [0]);
  (Wrd426.uLng) = (OBJECT_TYPE (Wrd425.Obj));
  if ((Wrd426.uLng) == 50)
    goto label_404;

DEFLABEL (label_403)
  Wrd421 = Wrd425;

DEFLABEL (label_402)
  (* (--Rsp)) = (Wrd421.Obj);
  (Wrd433.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_8]));
  (Wrd434.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd443.Obj) = ((Wrd433.pObj) [0]);
  (Wrd444.uLng) = (OBJECT_TYPE (Wrd443.Obj));
  if ((Wrd444.uLng) == 50)
    goto label_401;

DEFLABEL (label_400)
  ((Wrd433.pObj) [0]) = (Wrd434.Obj);

DEFLABEL (label_399)
  (Wrd448.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd448.Obj);
  (Wrd449.Obj) = (Rsp [1]);
  (Wrd450.pObj) = (OBJECT_ADDRESS (Wrd449.Obj));
  (Wrd451.Obj) = ((Wrd450.pObj) [19]);
  (Wrd452.pObj) = (OBJECT_ADDRESS (Wrd451.Obj));
  (Wrd453.Obj) = ((Wrd452.pObj) [0]);
  (* (--Rsp)) = (Wrd453.Obj);
  ((Wrd452.pObj) [0]) = (Wrd448.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd461.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_8]));
  (Wrd469.Obj) = ((Wrd461.pObj) [0]);
  (Wrd470.uLng) = (OBJECT_TYPE (Wrd469.Obj));
  if ((Wrd470.uLng) == 50)
    goto label_398;

DEFLABEL (label_397)
  ((Wrd461.pObj) [0]) = (Wrd453.Obj);

DEFLABEL (label_396)
  (Wrd474.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_9]));
  (Wrd477.Obj) = ((Wrd474.pObj) [0]);
  (Wrd478.uLng) = (OBJECT_TYPE (Wrd477.Obj));
  if ((Wrd478.uLng) == 50)
    goto label_395;

DEFLABEL (label_394)
  Wrd473 = Wrd477;

DEFLABEL (label_393)
  (* (--Rsp)) = (Wrd473.Obj);
  (Wrd485.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_9]));
  (Wrd486.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd495.Obj) = ((Wrd485.pObj) [0]);
  (Wrd496.uLng) = (OBJECT_TYPE (Wrd495.Obj));
  if ((Wrd496.uLng) == 50)
    goto label_392;

DEFLABEL (label_391)
  ((Wrd485.pObj) [0]) = (Wrd486.Obj);

DEFLABEL (label_390)
  (Wrd500.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd500.Obj);
  (Wrd501.Obj) = (Rsp [1]);
  (Wrd502.pObj) = (OBJECT_ADDRESS (Wrd501.Obj));
  (Wrd503.Obj) = ((Wrd502.pObj) [18]);
  (Wrd504.pObj) = (OBJECT_ADDRESS (Wrd503.Obj));
  (Wrd505.Obj) = ((Wrd504.pObj) [0]);
  (* (--Rsp)) = (Wrd505.Obj);
  ((Wrd504.pObj) [0]) = (Wrd500.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd513.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_9]));
  (Wrd521.Obj) = ((Wrd513.pObj) [0]);
  (Wrd522.uLng) = (OBJECT_TYPE (Wrd521.Obj));
  if ((Wrd522.uLng) == 50)
    goto label_389;

DEFLABEL (label_388)
  ((Wrd513.pObj) [0]) = (Wrd505.Obj);

DEFLABEL (label_387)
  (Wrd526.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_10]));
  (Wrd529.Obj) = ((Wrd526.pObj) [0]);
  (Wrd530.uLng) = (OBJECT_TYPE (Wrd529.Obj));
  if ((Wrd530.uLng) == 50)
    goto label_386;

DEFLABEL (label_385)
  Wrd525 = Wrd529;

DEFLABEL (label_384)
  (* (--Rsp)) = (Wrd525.Obj);
  (Wrd537.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_10]));
  (Wrd538.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd547.Obj) = ((Wrd537.pObj) [0]);
  (Wrd548.uLng) = (OBJECT_TYPE (Wrd547.Obj));
  if ((Wrd548.uLng) == 50)
    goto label_383;

DEFLABEL (label_382)
  ((Wrd537.pObj) [0]) = (Wrd538.Obj);

DEFLABEL (label_381)
  (Wrd552.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd552.Obj);
  (Wrd553.Obj) = (Rsp [1]);
  (Wrd554.pObj) = (OBJECT_ADDRESS (Wrd553.Obj));
  (Wrd555.Obj) = ((Wrd554.pObj) [17]);
  (Wrd556.pObj) = (OBJECT_ADDRESS (Wrd555.Obj));
  (Wrd557.Obj) = ((Wrd556.pObj) [0]);
  (* (--Rsp)) = (Wrd557.Obj);
  ((Wrd556.pObj) [0]) = (Wrd552.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd565.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_10]));
  (Wrd573.Obj) = ((Wrd565.pObj) [0]);
  (Wrd574.uLng) = (OBJECT_TYPE (Wrd573.Obj));
  if ((Wrd574.uLng) == 50)
    goto label_380;

DEFLABEL (label_379)
  ((Wrd565.pObj) [0]) = (Wrd557.Obj);

DEFLABEL (label_378)
  (Wrd578.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_11]));
  (Wrd581.Obj) = ((Wrd578.pObj) [0]);
  (Wrd582.uLng) = (OBJECT_TYPE (Wrd581.Obj));
  if ((Wrd582.uLng) == 50)
    goto label_377;

DEFLABEL (label_376)
  Wrd577 = Wrd581;

DEFLABEL (label_375)
  (* (--Rsp)) = (Wrd577.Obj);
  (Wrd589.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_11]));
  (Wrd590.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd599.Obj) = ((Wrd589.pObj) [0]);
  (Wrd600.uLng) = (OBJECT_TYPE (Wrd599.Obj));
  if ((Wrd600.uLng) == 50)
    goto label_374;

DEFLABEL (label_373)
  ((Wrd589.pObj) [0]) = (Wrd590.Obj);

DEFLABEL (label_372)
  (Wrd604.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd604.Obj);
  (Wrd605.Obj) = (Rsp [1]);
  (Wrd606.pObj) = (OBJECT_ADDRESS (Wrd605.Obj));
  (Wrd607.Obj) = ((Wrd606.pObj) [16]);
  (Wrd608.pObj) = (OBJECT_ADDRESS (Wrd607.Obj));
  (Wrd609.Obj) = ((Wrd608.pObj) [0]);
  (* (--Rsp)) = (Wrd609.Obj);
  ((Wrd608.pObj) [0]) = (Wrd604.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd617.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_11]));
  (Wrd625.Obj) = ((Wrd617.pObj) [0]);
  (Wrd626.uLng) = (OBJECT_TYPE (Wrd625.Obj));
  if ((Wrd626.uLng) == 50)
    goto label_371;

DEFLABEL (label_370)
  ((Wrd617.pObj) [0]) = (Wrd609.Obj);

DEFLABEL (label_369)
  (Wrd630.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_12]));
  (Wrd633.Obj) = ((Wrd630.pObj) [0]);
  (Wrd634.uLng) = (OBJECT_TYPE (Wrd633.Obj));
  if ((Wrd634.uLng) == 50)
    goto label_368;

DEFLABEL (label_367)
  Wrd629 = Wrd633;

DEFLABEL (label_366)
  (* (--Rsp)) = (Wrd629.Obj);
  (Wrd641.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_12]));
  (Wrd642.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd651.Obj) = ((Wrd641.pObj) [0]);
  (Wrd652.uLng) = (OBJECT_TYPE (Wrd651.Obj));
  if ((Wrd652.uLng) == 50)
    goto label_365;

DEFLABEL (label_364)
  ((Wrd641.pObj) [0]) = (Wrd642.Obj);

DEFLABEL (label_363)
  (Wrd656.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd656.Obj);
  (Wrd657.Obj) = (Rsp [1]);
  (Wrd658.pObj) = (OBJECT_ADDRESS (Wrd657.Obj));
  (Wrd659.Obj) = ((Wrd658.pObj) [15]);
  (Wrd660.pObj) = (OBJECT_ADDRESS (Wrd659.Obj));
  (Wrd661.Obj) = ((Wrd660.pObj) [0]);
  (* (--Rsp)) = (Wrd661.Obj);
  ((Wrd660.pObj) [0]) = (Wrd656.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd669.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_12]));
  (Wrd677.Obj) = ((Wrd669.pObj) [0]);
  (Wrd678.uLng) = (OBJECT_TYPE (Wrd677.Obj));
  if ((Wrd678.uLng) == 50)
    goto label_362;

DEFLABEL (label_361)
  ((Wrd669.pObj) [0]) = (Wrd661.Obj);

DEFLABEL (label_360)
  (Wrd682.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_13]));
  (Wrd685.Obj) = ((Wrd682.pObj) [0]);
  (Wrd686.uLng) = (OBJECT_TYPE (Wrd685.Obj));
  if ((Wrd686.uLng) == 50)
    goto label_359;

DEFLABEL (label_358)
  Wrd681 = Wrd685;

DEFLABEL (label_357)
  (* (--Rsp)) = (Wrd681.Obj);
  (Wrd693.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_13]));
  (Wrd694.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd703.Obj) = ((Wrd693.pObj) [0]);
  (Wrd704.uLng) = (OBJECT_TYPE (Wrd703.Obj));
  if ((Wrd704.uLng) == 50)
    goto label_356;

DEFLABEL (label_355)
  ((Wrd693.pObj) [0]) = (Wrd694.Obj);

DEFLABEL (label_354)
  (Wrd708.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd708.Obj);
  (Wrd709.Obj) = (Rsp [1]);
  (Wrd710.pObj) = (OBJECT_ADDRESS (Wrd709.Obj));
  (Wrd711.Obj) = ((Wrd710.pObj) [14]);
  (Wrd712.pObj) = (OBJECT_ADDRESS (Wrd711.Obj));
  (Wrd713.Obj) = ((Wrd712.pObj) [0]);
  (* (--Rsp)) = (Wrd713.Obj);
  ((Wrd712.pObj) [0]) = (Wrd708.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd721.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_13]));
  (Wrd729.Obj) = ((Wrd721.pObj) [0]);
  (Wrd730.uLng) = (OBJECT_TYPE (Wrd729.Obj));
  if ((Wrd730.uLng) == 50)
    goto label_353;

DEFLABEL (label_352)
  ((Wrd721.pObj) [0]) = (Wrd713.Obj);

DEFLABEL (label_351)
  (Wrd734.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_14]));
  (Wrd737.Obj) = ((Wrd734.pObj) [0]);
  (Wrd738.uLng) = (OBJECT_TYPE (Wrd737.Obj));
  if ((Wrd738.uLng) == 50)
    goto label_350;

DEFLABEL (label_349)
  Wrd733 = Wrd737;

DEFLABEL (label_348)
  (* (--Rsp)) = (Wrd733.Obj);
  (Wrd745.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_14]));
  (Wrd746.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd755.Obj) = ((Wrd745.pObj) [0]);
  (Wrd756.uLng) = (OBJECT_TYPE (Wrd755.Obj));
  if ((Wrd756.uLng) == 50)
    goto label_347;

DEFLABEL (label_346)
  ((Wrd745.pObj) [0]) = (Wrd746.Obj);

DEFLABEL (label_345)
  (Wrd760.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd760.Obj);
  (Wrd761.Obj) = (Rsp [1]);
  (Wrd762.pObj) = (OBJECT_ADDRESS (Wrd761.Obj));
  (Wrd763.Obj) = ((Wrd762.pObj) [13]);
  (Wrd764.pObj) = (OBJECT_ADDRESS (Wrd763.Obj));
  (Wrd765.Obj) = ((Wrd764.pObj) [0]);
  (* (--Rsp)) = (Wrd765.Obj);
  ((Wrd764.pObj) [0]) = (Wrd760.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd773.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_14]));
  (Wrd781.Obj) = ((Wrd773.pObj) [0]);
  (Wrd782.uLng) = (OBJECT_TYPE (Wrd781.Obj));
  if ((Wrd782.uLng) == 50)
    goto label_344;

DEFLABEL (label_343)
  ((Wrd773.pObj) [0]) = (Wrd765.Obj);

DEFLABEL (label_342)
  (Wrd786.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_15]));
  (Wrd789.Obj) = ((Wrd786.pObj) [0]);
  (Wrd790.uLng) = (OBJECT_TYPE (Wrd789.Obj));
  if ((Wrd790.uLng) == 50)
    goto label_341;

DEFLABEL (label_340)
  Wrd785 = Wrd789;

DEFLABEL (label_339)
  (* (--Rsp)) = (Wrd785.Obj);
  (Wrd797.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_15]));
  (Wrd798.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd807.Obj) = ((Wrd797.pObj) [0]);
  (Wrd808.uLng) = (OBJECT_TYPE (Wrd807.Obj));
  if ((Wrd808.uLng) == 50)
    goto label_338;

DEFLABEL (label_337)
  ((Wrd797.pObj) [0]) = (Wrd798.Obj);

DEFLABEL (label_336)
  (Wrd812.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd812.Obj);
  (Wrd813.Obj) = (Rsp [1]);
  (Wrd814.pObj) = (OBJECT_ADDRESS (Wrd813.Obj));
  (Wrd815.Obj) = ((Wrd814.pObj) [12]);
  (Wrd816.pObj) = (OBJECT_ADDRESS (Wrd815.Obj));
  (Wrd817.Obj) = ((Wrd816.pObj) [0]);
  (* (--Rsp)) = (Wrd817.Obj);
  ((Wrd816.pObj) [0]) = (Wrd812.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd825.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_15]));
  (Wrd833.Obj) = ((Wrd825.pObj) [0]);
  (Wrd834.uLng) = (OBJECT_TYPE (Wrd833.Obj));
  if ((Wrd834.uLng) == 50)
    goto label_335;

DEFLABEL (label_334)
  ((Wrd825.pObj) [0]) = (Wrd817.Obj);

DEFLABEL (label_333)
  (Wrd838.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_16]));
  (Wrd841.Obj) = ((Wrd838.pObj) [0]);
  (Wrd842.uLng) = (OBJECT_TYPE (Wrd841.Obj));
  if ((Wrd842.uLng) == 50)
    goto label_332;

DEFLABEL (label_331)
  Wrd837 = Wrd841;

DEFLABEL (label_330)
  (* (--Rsp)) = (Wrd837.Obj);
  (Wrd849.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_16]));
  (Wrd850.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd859.Obj) = ((Wrd849.pObj) [0]);
  (Wrd860.uLng) = (OBJECT_TYPE (Wrd859.Obj));
  if ((Wrd860.uLng) == 50)
    goto label_329;

DEFLABEL (label_328)
  ((Wrd849.pObj) [0]) = (Wrd850.Obj);

DEFLABEL (label_327)
  (Wrd864.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd864.Obj);
  (Wrd865.Obj) = (Rsp [1]);
  (Wrd866.pObj) = (OBJECT_ADDRESS (Wrd865.Obj));
  (Wrd867.Obj) = ((Wrd866.pObj) [11]);
  (Wrd868.pObj) = (OBJECT_ADDRESS (Wrd867.Obj));
  (Wrd869.Obj) = ((Wrd868.pObj) [0]);
  (* (--Rsp)) = (Wrd869.Obj);
  ((Wrd868.pObj) [0]) = (Wrd864.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd877.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_16]));
  (Wrd885.Obj) = ((Wrd877.pObj) [0]);
  (Wrd886.uLng) = (OBJECT_TYPE (Wrd885.Obj));
  if ((Wrd886.uLng) == 50)
    goto label_326;

DEFLABEL (label_325)
  ((Wrd877.pObj) [0]) = (Wrd869.Obj);

DEFLABEL (label_324)
  (Wrd890.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_17]));
  (Wrd893.Obj) = ((Wrd890.pObj) [0]);
  (Wrd894.uLng) = (OBJECT_TYPE (Wrd893.Obj));
  if ((Wrd894.uLng) == 50)
    goto label_323;

DEFLABEL (label_322)
  Wrd889 = Wrd893;

DEFLABEL (label_321)
  (* (--Rsp)) = (Wrd889.Obj);
  (Wrd901.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_17]));
  (Wrd902.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd911.Obj) = ((Wrd901.pObj) [0]);
  (Wrd912.uLng) = (OBJECT_TYPE (Wrd911.Obj));
  if ((Wrd912.uLng) == 50)
    goto label_320;

DEFLABEL (label_319)
  ((Wrd901.pObj) [0]) = (Wrd902.Obj);

DEFLABEL (label_318)
  (Wrd916.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd916.Obj);
  (Wrd917.Obj) = (Rsp [1]);
  (Wrd918.pObj) = (OBJECT_ADDRESS (Wrd917.Obj));
  (Wrd919.Obj) = ((Wrd918.pObj) [10]);
  (Wrd920.pObj) = (OBJECT_ADDRESS (Wrd919.Obj));
  (Wrd921.Obj) = ((Wrd920.pObj) [0]);
  (* (--Rsp)) = (Wrd921.Obj);
  ((Wrd920.pObj) [0]) = (Wrd916.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd929.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_17]));
  (Wrd937.Obj) = ((Wrd929.pObj) [0]);
  (Wrd938.uLng) = (OBJECT_TYPE (Wrd937.Obj));
  if ((Wrd938.uLng) == 50)
    goto label_317;

DEFLABEL (label_316)
  ((Wrd929.pObj) [0]) = (Wrd921.Obj);

DEFLABEL (label_315)
  (Wrd942.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_18]));
  (Wrd945.Obj) = ((Wrd942.pObj) [0]);
  (Wrd946.uLng) = (OBJECT_TYPE (Wrd945.Obj));
  if ((Wrd946.uLng) == 50)
    goto label_314;

DEFLABEL (label_313)
  Wrd941 = Wrd945;

DEFLABEL (label_312)
  (* (--Rsp)) = (Wrd941.Obj);
  (Wrd953.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_18]));
  (Wrd954.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd963.Obj) = ((Wrd953.pObj) [0]);
  (Wrd964.uLng) = (OBJECT_TYPE (Wrd963.Obj));
  if ((Wrd964.uLng) == 50)
    goto label_311;

DEFLABEL (label_310)
  ((Wrd953.pObj) [0]) = (Wrd954.Obj);

DEFLABEL (label_309)
  (Wrd968.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd968.Obj);
  (Wrd969.Obj) = (Rsp [1]);
  (Wrd970.pObj) = (OBJECT_ADDRESS (Wrd969.Obj));
  (Wrd971.Obj) = ((Wrd970.pObj) [9]);
  (Wrd972.pObj) = (OBJECT_ADDRESS (Wrd971.Obj));
  (Wrd973.Obj) = ((Wrd972.pObj) [0]);
  (* (--Rsp)) = (Wrd973.Obj);
  ((Wrd972.pObj) [0]) = (Wrd968.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd981.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_18]));
  (Wrd989.Obj) = ((Wrd981.pObj) [0]);
  (Wrd990.uLng) = (OBJECT_TYPE (Wrd989.Obj));
  if ((Wrd990.uLng) == 50)
    goto label_308;

DEFLABEL (label_307)
  ((Wrd981.pObj) [0]) = (Wrd973.Obj);

DEFLABEL (label_306)
  (Wrd994.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_19]));
  (Wrd997.Obj) = ((Wrd994.pObj) [0]);
  (Wrd998.uLng) = (OBJECT_TYPE (Wrd997.Obj));
  if ((Wrd998.uLng) == 50)
    goto label_305;

DEFLABEL (label_304)
  Wrd993 = Wrd997;

DEFLABEL (label_303)
  (* (--Rsp)) = (Wrd993.Obj);
  (Wrd1005.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_19]));
  (Wrd1006.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd1015.Obj) = ((Wrd1005.pObj) [0]);
  (Wrd1016.uLng) = (OBJECT_TYPE (Wrd1015.Obj));
  if ((Wrd1016.uLng) == 50)
    goto label_302;

DEFLABEL (label_301)
  ((Wrd1005.pObj) [0]) = (Wrd1006.Obj);

DEFLABEL (label_300)
  (Wrd1020.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd1020.Obj);
  (Wrd1021.Obj) = (Rsp [1]);
  (Wrd1022.pObj) = (OBJECT_ADDRESS (Wrd1021.Obj));
  (Wrd1023.Obj) = ((Wrd1022.pObj) [8]);
  (Wrd1024.pObj) = (OBJECT_ADDRESS (Wrd1023.Obj));
  (Wrd1025.Obj) = ((Wrd1024.pObj) [0]);
  (* (--Rsp)) = (Wrd1025.Obj);
  ((Wrd1024.pObj) [0]) = (Wrd1020.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd1033.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_19]));
  (Wrd1041.Obj) = ((Wrd1033.pObj) [0]);
  (Wrd1042.uLng) = (OBJECT_TYPE (Wrd1041.Obj));
  if ((Wrd1042.uLng) == 50)
    goto label_299;

DEFLABEL (label_298)
  ((Wrd1033.pObj) [0]) = (Wrd1025.Obj);

DEFLABEL (label_297)
  (Wrd1046.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_20]));
  (Wrd1049.Obj) = ((Wrd1046.pObj) [0]);
  (Wrd1050.uLng) = (OBJECT_TYPE (Wrd1049.Obj));
  if ((Wrd1050.uLng) == 50)
    goto label_296;

DEFLABEL (label_295)
  Wrd1045 = Wrd1049;

DEFLABEL (label_294)
  (* (--Rsp)) = (Wrd1045.Obj);
  (Wrd1057.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_20]));
  (Wrd1058.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd1067.Obj) = ((Wrd1057.pObj) [0]);
  (Wrd1068.uLng) = (OBJECT_TYPE (Wrd1067.Obj));
  if ((Wrd1068.uLng) == 50)
    goto label_293;

DEFLABEL (label_292)
  ((Wrd1057.pObj) [0]) = (Wrd1058.Obj);

DEFLABEL (label_291)
  (Wrd1072.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd1072.Obj);
  (Wrd1073.Obj) = (Rsp [1]);
  (Wrd1074.pObj) = (OBJECT_ADDRESS (Wrd1073.Obj));
  (Wrd1075.Obj) = ((Wrd1074.pObj) [7]);
  (Wrd1076.pObj) = (OBJECT_ADDRESS (Wrd1075.Obj));
  (Wrd1077.Obj) = ((Wrd1076.pObj) [0]);
  (* (--Rsp)) = (Wrd1077.Obj);
  ((Wrd1076.pObj) [0]) = (Wrd1072.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd1085.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_20]));
  (Wrd1093.Obj) = ((Wrd1085.pObj) [0]);
  (Wrd1094.uLng) = (OBJECT_TYPE (Wrd1093.Obj));
  if ((Wrd1094.uLng) == 50)
    goto label_290;

DEFLABEL (label_289)
  ((Wrd1085.pObj) [0]) = (Wrd1077.Obj);

DEFLABEL (label_288)
  (Wrd1098.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_21]));
  (Wrd1101.Obj) = ((Wrd1098.pObj) [0]);
  (Wrd1102.uLng) = (OBJECT_TYPE (Wrd1101.Obj));
  if ((Wrd1102.uLng) == 50)
    goto label_287;

DEFLABEL (label_286)
  Wrd1097 = Wrd1101;

DEFLABEL (label_285)
  (* (--Rsp)) = (Wrd1097.Obj);
  (Wrd1109.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_21]));
  (Wrd1110.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd1119.Obj) = ((Wrd1109.pObj) [0]);
  (Wrd1120.uLng) = (OBJECT_TYPE (Wrd1119.Obj));
  if ((Wrd1120.uLng) == 50)
    goto label_284;

DEFLABEL (label_283)
  ((Wrd1109.pObj) [0]) = (Wrd1110.Obj);

DEFLABEL (label_282)
  (Wrd1124.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd1124.Obj);
  (Wrd1125.Obj) = (Rsp [1]);
  (Wrd1126.pObj) = (OBJECT_ADDRESS (Wrd1125.Obj));
  (Wrd1127.Obj) = ((Wrd1126.pObj) [6]);
  (Wrd1128.pObj) = (OBJECT_ADDRESS (Wrd1127.Obj));
  (Wrd1129.Obj) = ((Wrd1128.pObj) [0]);
  (* (--Rsp)) = (Wrd1129.Obj);
  ((Wrd1128.pObj) [0]) = (Wrd1124.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd1137.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_21]));
  (Wrd1145.Obj) = ((Wrd1137.pObj) [0]);
  (Wrd1146.uLng) = (OBJECT_TYPE (Wrd1145.Obj));
  if ((Wrd1146.uLng) == 50)
    goto label_281;

DEFLABEL (label_280)
  ((Wrd1137.pObj) [0]) = (Wrd1129.Obj);

DEFLABEL (label_279)
  (Wrd1150.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_22]));
  (Wrd1153.Obj) = ((Wrd1150.pObj) [0]);
  (Wrd1154.uLng) = (OBJECT_TYPE (Wrd1153.Obj));
  if ((Wrd1154.uLng) == 50)
    goto label_278;

DEFLABEL (label_277)
  Wrd1149 = Wrd1153;

DEFLABEL (label_276)
  (* (--Rsp)) = (Wrd1149.Obj);
  (Wrd1161.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_22]));
  (Wrd1162.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd1171.Obj) = ((Wrd1161.pObj) [0]);
  (Wrd1172.uLng) = (OBJECT_TYPE (Wrd1171.Obj));
  if ((Wrd1172.uLng) == 50)
    goto label_275;

DEFLABEL (label_274)
  ((Wrd1161.pObj) [0]) = (Wrd1162.Obj);

DEFLABEL (label_273)
  (Wrd1176.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd1176.Obj);
  (Wrd1177.Obj) = (Rsp [1]);
  (Wrd1178.pObj) = (OBJECT_ADDRESS (Wrd1177.Obj));
  (Wrd1179.Obj) = ((Wrd1178.pObj) [5]);
  (Wrd1180.pObj) = (OBJECT_ADDRESS (Wrd1179.Obj));
  (Wrd1181.Obj) = ((Wrd1180.pObj) [0]);
  (* (--Rsp)) = (Wrd1181.Obj);
  ((Wrd1180.pObj) [0]) = (Wrd1176.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd1189.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_22]));
  (Wrd1197.Obj) = ((Wrd1189.pObj) [0]);
  (Wrd1198.uLng) = (OBJECT_TYPE (Wrd1197.Obj));
  if ((Wrd1198.uLng) == 50)
    goto label_272;

DEFLABEL (label_271)
  ((Wrd1189.pObj) [0]) = (Wrd1181.Obj);

DEFLABEL (label_270)
  (Wrd1202.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_23]));
  (Wrd1205.Obj) = ((Wrd1202.pObj) [0]);
  (Wrd1206.uLng) = (OBJECT_TYPE (Wrd1205.Obj));
  if ((Wrd1206.uLng) == 50)
    goto label_269;

DEFLABEL (label_268)
  Wrd1201 = Wrd1205;

DEFLABEL (label_267)
  (* (--Rsp)) = (Wrd1201.Obj);
  (Wrd1213.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_23]));
  (Wrd1214.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd1223.Obj) = ((Wrd1213.pObj) [0]);
  (Wrd1224.uLng) = (OBJECT_TYPE (Wrd1223.Obj));
  if ((Wrd1224.uLng) == 50)
    goto label_266;

DEFLABEL (label_265)
  ((Wrd1213.pObj) [0]) = (Wrd1214.Obj);

DEFLABEL (label_264)
  (Wrd1228.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd1228.Obj);
  (Wrd1229.Obj) = (Rsp [1]);
  (Wrd1230.pObj) = (OBJECT_ADDRESS (Wrd1229.Obj));
  (Wrd1231.Obj) = ((Wrd1230.pObj) [4]);
  (Wrd1232.pObj) = (OBJECT_ADDRESS (Wrd1231.Obj));
  (Wrd1233.Obj) = ((Wrd1232.pObj) [0]);
  (* (--Rsp)) = (Wrd1233.Obj);
  ((Wrd1232.pObj) [0]) = (Wrd1228.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd1241.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_23]));
  (Wrd1249.Obj) = ((Wrd1241.pObj) [0]);
  (Wrd1250.uLng) = (OBJECT_TYPE (Wrd1249.Obj));
  if ((Wrd1250.uLng) == 50)
    goto label_263;

DEFLABEL (label_262)
  ((Wrd1241.pObj) [0]) = (Wrd1233.Obj);

DEFLABEL (label_261)
  (Wrd1254.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_24]));
  (Wrd1257.Obj) = ((Wrd1254.pObj) [0]);
  (Wrd1258.uLng) = (OBJECT_TYPE (Wrd1257.Obj));
  if ((Wrd1258.uLng) == 50)
    goto label_260;

DEFLABEL (label_259)
  Wrd1253 = Wrd1257;

DEFLABEL (label_258)
  (* (--Rsp)) = (Wrd1253.Obj);
  (Wrd1265.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_24]));
  (Wrd1266.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd1275.Obj) = ((Wrd1265.pObj) [0]);
  (Wrd1276.uLng) = (OBJECT_TYPE (Wrd1275.Obj));
  if ((Wrd1276.uLng) == 50)
    goto label_257;

DEFLABEL (label_256)
  ((Wrd1265.pObj) [0]) = (Wrd1266.Obj);

DEFLABEL (label_255)
  (Wrd1280.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd1280.Obj);
  (Wrd1281.Obj) = (Rsp [1]);
  (Wrd1282.pObj) = (OBJECT_ADDRESS (Wrd1281.Obj));
  (Wrd1283.Obj) = ((Wrd1282.pObj) [3]);
  (Wrd1284.pObj) = (OBJECT_ADDRESS (Wrd1283.Obj));
  (Wrd1285.Obj) = ((Wrd1284.pObj) [0]);
  (* (--Rsp)) = (Wrd1285.Obj);
  ((Wrd1284.pObj) [0]) = (Wrd1280.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd1293.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_24]));
  (Wrd1301.Obj) = ((Wrd1293.pObj) [0]);
  (Wrd1302.uLng) = (OBJECT_TYPE (Wrd1301.Obj));
  if ((Wrd1302.uLng) == 50)
    goto label_254;

DEFLABEL (label_253)
  ((Wrd1293.pObj) [0]) = (Wrd1285.Obj);

DEFLABEL (label_252)
  (Wrd1306.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_25]));
  (Wrd1309.Obj) = ((Wrd1306.pObj) [0]);
  (Wrd1310.uLng) = (OBJECT_TYPE (Wrd1309.Obj));
  if ((Wrd1310.uLng) == 50)
    goto label_251;

DEFLABEL (label_250)
  Wrd1305 = Wrd1309;

DEFLABEL (label_249)
  (* (--Rsp)) = (Wrd1305.Obj);
  (Wrd1317.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_25]));
  (Wrd1318.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd1327.Obj) = ((Wrd1317.pObj) [0]);
  (Wrd1328.uLng) = (OBJECT_TYPE (Wrd1327.Obj));
  if ((Wrd1328.uLng) == 50)
    goto label_248;

DEFLABEL (label_247)
  ((Wrd1317.pObj) [0]) = (Wrd1318.Obj);

DEFLABEL (label_246)
  (Wrd1332.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd1332.Obj);
  (Wrd1333.Obj) = (Rsp [1]);
  (Wrd1334.pObj) = (OBJECT_ADDRESS (Wrd1333.Obj));
  (Wrd1335.Obj) = ((Wrd1334.pObj) [2]);
  (Wrd1336.pObj) = (OBJECT_ADDRESS (Wrd1335.Obj));
  (Wrd1337.Obj) = ((Wrd1336.pObj) [0]);
  (* (--Rsp)) = (Wrd1337.Obj);
  ((Wrd1336.pObj) [0]) = (Wrd1332.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd1345.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_25]));
  (Wrd1353.Obj) = ((Wrd1345.pObj) [0]);
  (Wrd1354.uLng) = (OBJECT_TYPE (Wrd1353.Obj));
  if ((Wrd1354.uLng) == 50)
    goto label_245;

DEFLABEL (label_244)
  ((Wrd1345.pObj) [0]) = (Wrd1337.Obj);

DEFLABEL (label_243)
  Rvl = (current_block [OBJECT_19_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_245)
  if ((Wrd1353.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_244;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_87])), (Wrd1345.pObj), (Wrd1337.Obj));

DEFLABEL (label_238)
  goto label_243;

DEFLABEL (label_248)
  if ((Wrd1327.Obj) == (Wrd1318.Obj))
    goto label_247;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_86])), (Wrd1317.pObj), (Wrd1318.Obj));

DEFLABEL (label_237)
  goto label_246;

DEFLABEL (label_251)
  if ((Wrd1309.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_250;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_85])), (Wrd1306.pObj));

DEFLABEL (label_236)
  (Wrd1305.Obj) = Rvl;
  goto label_249;

DEFLABEL (label_254)
  if ((Wrd1301.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_253;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_84])), (Wrd1293.pObj), (Wrd1285.Obj));

DEFLABEL (label_235)
  goto label_252;

DEFLABEL (label_257)
  if ((Wrd1275.Obj) == (Wrd1266.Obj))
    goto label_256;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_83])), (Wrd1265.pObj), (Wrd1266.Obj));

DEFLABEL (label_234)
  goto label_255;

DEFLABEL (label_260)
  if ((Wrd1257.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_259;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_82])), (Wrd1254.pObj));

DEFLABEL (label_233)
  (Wrd1253.Obj) = Rvl;
  goto label_258;

DEFLABEL (label_263)
  if ((Wrd1249.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_262;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_81])), (Wrd1241.pObj), (Wrd1233.Obj));

DEFLABEL (label_232)
  goto label_261;

DEFLABEL (label_266)
  if ((Wrd1223.Obj) == (Wrd1214.Obj))
    goto label_265;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_80])), (Wrd1213.pObj), (Wrd1214.Obj));

DEFLABEL (label_231)
  goto label_264;

DEFLABEL (label_269)
  if ((Wrd1205.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_268;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_79])), (Wrd1202.pObj));

DEFLABEL (label_230)
  (Wrd1201.Obj) = Rvl;
  goto label_267;

DEFLABEL (label_272)
  if ((Wrd1197.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_271;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_78])), (Wrd1189.pObj), (Wrd1181.Obj));

DEFLABEL (label_229)
  goto label_270;

DEFLABEL (label_275)
  if ((Wrd1171.Obj) == (Wrd1162.Obj))
    goto label_274;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_77])), (Wrd1161.pObj), (Wrd1162.Obj));

DEFLABEL (label_228)
  goto label_273;

DEFLABEL (label_278)
  if ((Wrd1153.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_277;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_76])), (Wrd1150.pObj));

DEFLABEL (label_227)
  (Wrd1149.Obj) = Rvl;
  goto label_276;

DEFLABEL (label_281)
  if ((Wrd1145.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_280;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_75])), (Wrd1137.pObj), (Wrd1129.Obj));

DEFLABEL (label_226)
  goto label_279;

DEFLABEL (label_284)
  if ((Wrd1119.Obj) == (Wrd1110.Obj))
    goto label_283;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_74])), (Wrd1109.pObj), (Wrd1110.Obj));

DEFLABEL (label_225)
  goto label_282;

DEFLABEL (label_287)
  if ((Wrd1101.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_286;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_73])), (Wrd1098.pObj));

DEFLABEL (label_224)
  (Wrd1097.Obj) = Rvl;
  goto label_285;

DEFLABEL (label_290)
  if ((Wrd1093.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_289;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_72])), (Wrd1085.pObj), (Wrd1077.Obj));

DEFLABEL (label_223)
  goto label_288;

DEFLABEL (label_293)
  if ((Wrd1067.Obj) == (Wrd1058.Obj))
    goto label_292;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_71])), (Wrd1057.pObj), (Wrd1058.Obj));

DEFLABEL (label_222)
  goto label_291;

DEFLABEL (label_296)
  if ((Wrd1049.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_295;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_70])), (Wrd1046.pObj));

DEFLABEL (label_221)
  (Wrd1045.Obj) = Rvl;
  goto label_294;

DEFLABEL (label_299)
  if ((Wrd1041.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_298;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_69])), (Wrd1033.pObj), (Wrd1025.Obj));

DEFLABEL (label_220)
  goto label_297;

DEFLABEL (label_302)
  if ((Wrd1015.Obj) == (Wrd1006.Obj))
    goto label_301;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_68])), (Wrd1005.pObj), (Wrd1006.Obj));

DEFLABEL (label_219)
  goto label_300;

DEFLABEL (label_305)
  if ((Wrd997.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_304;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_67])), (Wrd994.pObj));

DEFLABEL (label_218)
  (Wrd993.Obj) = Rvl;
  goto label_303;

DEFLABEL (label_308)
  if ((Wrd989.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_307;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_66])), (Wrd981.pObj), (Wrd973.Obj));

DEFLABEL (label_217)
  goto label_306;

DEFLABEL (label_311)
  if ((Wrd963.Obj) == (Wrd954.Obj))
    goto label_310;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_65])), (Wrd953.pObj), (Wrd954.Obj));

DEFLABEL (label_216)
  goto label_309;

DEFLABEL (label_314)
  if ((Wrd945.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_313;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_64])), (Wrd942.pObj));

DEFLABEL (label_215)
  (Wrd941.Obj) = Rvl;
  goto label_312;

DEFLABEL (label_317)
  if ((Wrd937.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_316;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_63])), (Wrd929.pObj), (Wrd921.Obj));

DEFLABEL (label_214)
  goto label_315;

DEFLABEL (label_320)
  if ((Wrd911.Obj) == (Wrd902.Obj))
    goto label_319;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_62])), (Wrd901.pObj), (Wrd902.Obj));

DEFLABEL (label_213)
  goto label_318;

DEFLABEL (label_323)
  if ((Wrd893.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_322;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_61])), (Wrd890.pObj));

DEFLABEL (label_212)
  (Wrd889.Obj) = Rvl;
  goto label_321;

DEFLABEL (label_326)
  if ((Wrd885.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_325;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_60])), (Wrd877.pObj), (Wrd869.Obj));

DEFLABEL (label_211)
  goto label_324;

DEFLABEL (label_329)
  if ((Wrd859.Obj) == (Wrd850.Obj))
    goto label_328;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_59])), (Wrd849.pObj), (Wrd850.Obj));

DEFLABEL (label_210)
  goto label_327;

DEFLABEL (label_332)
  if ((Wrd841.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_331;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_58])), (Wrd838.pObj));

DEFLABEL (label_209)
  (Wrd837.Obj) = Rvl;
  goto label_330;

DEFLABEL (label_335)
  if ((Wrd833.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_334;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_57])), (Wrd825.pObj), (Wrd817.Obj));

DEFLABEL (label_208)
  goto label_333;

DEFLABEL (label_338)
  if ((Wrd807.Obj) == (Wrd798.Obj))
    goto label_337;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_56])), (Wrd797.pObj), (Wrd798.Obj));

DEFLABEL (label_207)
  goto label_336;

DEFLABEL (label_341)
  if ((Wrd789.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_340;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_55])), (Wrd786.pObj));

DEFLABEL (label_206)
  (Wrd785.Obj) = Rvl;
  goto label_339;

DEFLABEL (label_344)
  if ((Wrd781.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_343;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_54])), (Wrd773.pObj), (Wrd765.Obj));

DEFLABEL (label_205)
  goto label_342;

DEFLABEL (label_347)
  if ((Wrd755.Obj) == (Wrd746.Obj))
    goto label_346;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_53])), (Wrd745.pObj), (Wrd746.Obj));

DEFLABEL (label_204)
  goto label_345;

DEFLABEL (label_350)
  if ((Wrd737.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_349;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_52])), (Wrd734.pObj));

DEFLABEL (label_203)
  (Wrd733.Obj) = Rvl;
  goto label_348;

DEFLABEL (label_353)
  if ((Wrd729.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_352;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_51])), (Wrd721.pObj), (Wrd713.Obj));

DEFLABEL (label_202)
  goto label_351;

DEFLABEL (label_356)
  if ((Wrd703.Obj) == (Wrd694.Obj))
    goto label_355;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_50])), (Wrd693.pObj), (Wrd694.Obj));

DEFLABEL (label_201)
  goto label_354;

DEFLABEL (label_359)
  if ((Wrd685.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_358;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_49])), (Wrd682.pObj));

DEFLABEL (label_200)
  (Wrd681.Obj) = Rvl;
  goto label_357;

DEFLABEL (label_362)
  if ((Wrd677.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_361;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_48])), (Wrd669.pObj), (Wrd661.Obj));

DEFLABEL (label_199)
  goto label_360;

DEFLABEL (label_365)
  if ((Wrd651.Obj) == (Wrd642.Obj))
    goto label_364;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_47])), (Wrd641.pObj), (Wrd642.Obj));

DEFLABEL (label_198)
  goto label_363;

DEFLABEL (label_368)
  if ((Wrd633.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_367;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_46])), (Wrd630.pObj));

DEFLABEL (label_197)
  (Wrd629.Obj) = Rvl;
  goto label_366;

DEFLABEL (label_371)
  if ((Wrd625.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_370;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_45])), (Wrd617.pObj), (Wrd609.Obj));

DEFLABEL (label_196)
  goto label_369;

DEFLABEL (label_374)
  if ((Wrd599.Obj) == (Wrd590.Obj))
    goto label_373;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_44])), (Wrd589.pObj), (Wrd590.Obj));

DEFLABEL (label_195)
  goto label_372;

DEFLABEL (label_377)
  if ((Wrd581.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_376;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_43])), (Wrd578.pObj));

DEFLABEL (label_194)
  (Wrd577.Obj) = Rvl;
  goto label_375;

DEFLABEL (label_380)
  if ((Wrd573.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_379;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_42])), (Wrd565.pObj), (Wrd557.Obj));

DEFLABEL (label_193)
  goto label_378;

DEFLABEL (label_383)
  if ((Wrd547.Obj) == (Wrd538.Obj))
    goto label_382;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_41])), (Wrd537.pObj), (Wrd538.Obj));

DEFLABEL (label_192)
  goto label_381;

DEFLABEL (label_386)
  if ((Wrd529.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_385;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_40])), (Wrd526.pObj));

DEFLABEL (label_191)
  (Wrd525.Obj) = Rvl;
  goto label_384;

DEFLABEL (label_389)
  if ((Wrd521.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_388;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_39])), (Wrd513.pObj), (Wrd505.Obj));

DEFLABEL (label_190)
  goto label_387;

DEFLABEL (label_392)
  if ((Wrd495.Obj) == (Wrd486.Obj))
    goto label_391;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_38])), (Wrd485.pObj), (Wrd486.Obj));

DEFLABEL (label_189)
  goto label_390;

DEFLABEL (label_395)
  if ((Wrd477.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_394;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_37])), (Wrd474.pObj));

DEFLABEL (label_188)
  (Wrd473.Obj) = Rvl;
  goto label_393;

DEFLABEL (label_398)
  if ((Wrd469.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_397;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_36])), (Wrd461.pObj), (Wrd453.Obj));

DEFLABEL (label_187)
  goto label_396;

DEFLABEL (label_401)
  if ((Wrd443.Obj) == (Wrd434.Obj))
    goto label_400;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_35])), (Wrd433.pObj), (Wrd434.Obj));

DEFLABEL (label_186)
  goto label_399;

DEFLABEL (label_404)
  if ((Wrd425.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_403;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_34])), (Wrd422.pObj));

DEFLABEL (label_185)
  (Wrd421.Obj) = Rvl;
  goto label_402;

DEFLABEL (label_407)
  if ((Wrd417.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_406;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_33])), (Wrd409.pObj), (Wrd401.Obj));

DEFLABEL (label_184)
  goto label_405;

DEFLABEL (label_410)
  if ((Wrd391.Obj) == (Wrd382.Obj))
    goto label_409;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_32])), (Wrd381.pObj), (Wrd382.Obj));

DEFLABEL (label_183)
  goto label_408;

DEFLABEL (label_413)
  if ((Wrd373.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_412;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_31])), (Wrd370.pObj));

DEFLABEL (label_182)
  (Wrd369.Obj) = Rvl;
  goto label_411;

DEFLABEL (label_416)
  if ((Wrd365.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_415;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_30])), (Wrd357.pObj), (Wrd349.Obj));

DEFLABEL (label_181)
  goto label_414;

DEFLABEL (label_419)
  if ((Wrd339.Obj) == (Wrd330.Obj))
    goto label_418;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_29])), (Wrd329.pObj), (Wrd330.Obj));

DEFLABEL (label_180)
  goto label_417;

DEFLABEL (label_422)
  if ((Wrd321.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_421;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_28])), (Wrd318.pObj));

DEFLABEL (label_179)
  (Wrd317.Obj) = Rvl;
  goto label_420;

DEFLABEL (label_425)
  if ((Wrd313.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_424;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_27])), (Wrd305.pObj), (Wrd297.Obj));

DEFLABEL (label_178)
  goto label_423;

DEFLABEL (label_428)
  if ((Wrd287.Obj) == (Wrd278.Obj))
    goto label_427;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_26])), (Wrd277.pObj), (Wrd278.Obj));

DEFLABEL (label_177)
  goto label_426;

DEFLABEL (label_431)
  if ((Wrd269.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_430;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_25])), (Wrd266.pObj));

DEFLABEL (label_176)
  (Wrd265.Obj) = Rvl;
  goto label_429;

DEFLABEL (label_434)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_433;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_24])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_175)
  goto label_432;

DEFLABEL (label_437)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_436;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_23])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_174)
  goto label_435;

DEFLABEL (label_440)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_439;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_22])), (Wrd214.pObj));

DEFLABEL (label_173)
  (Wrd213.Obj) = Rvl;
  goto label_438;

DEFLABEL (label_443)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_442;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_21])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_172)
  goto label_441;

DEFLABEL (label_446)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_445;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_20])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_171)
  goto label_444;

DEFLABEL (label_449)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_448;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_19])), (Wrd162.pObj));

DEFLABEL (label_170)
  (Wrd161.Obj) = Rvl;
  goto label_447;

DEFLABEL (label_452)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_451;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_18])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_169)
  goto label_450;

DEFLABEL (label_455)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_454;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_17])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_168)
  goto label_453;

DEFLABEL (label_458)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_457;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_16])), (Wrd110.pObj));

DEFLABEL (label_167)
  (Wrd109.Obj) = Rvl;
  goto label_456;

DEFLABEL (label_461)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_460;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_15])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_166)
  goto label_459;

DEFLABEL (label_464)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_463;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_14])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_165)
  goto label_462;

DEFLABEL (label_467)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_466;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_13])), (Wrd58.pObj));

DEFLABEL (label_164)
  (Wrd57.Obj) = Rvl;
  goto label_465;

DEFLABEL (label_470)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_469;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_12])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_163)
  goto label_468;

DEFLABEL (label_473)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_472;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_11])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_162)
  goto label_471;

DEFLABEL (label_476)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_475;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_19_10])), (Wrd6.pObj));

DEFLABEL (label_161)
  (Wrd5.Obj) = Rvl;
  goto label_474;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define LABEL_20_8 11
#define LABEL_20_9 13
#define LABEL_20_10 15
#define LABEL_20_11 17
#define LABEL_20_12 19
#define LABEL_20_13 21
#define LABEL_20_14 23
#define LABEL_20_15 25
#define LABEL_20_16 27
#define LABEL_20_17 29
#define LABEL_20_18 31
#define LABEL_20_19 33
#define LABEL_20_20 35
#define LABEL_20_21 37
#define LABEL_20_22 39
#define LABEL_20_23 41
#define LABEL_20_24 43
#define LABEL_20_25 45
#define LABEL_20_26 47
#define LABEL_20_27 49
#define LABEL_20_28 51
#define LABEL_20_29 53
#define LABEL_20_30 55
#define LABEL_20_31 57
#define ENVIRONMENT_LABEL_20_3 89
#define DEBUGGING_LABEL_20_2 88
#define OBJECT_20_1 87
#define OBJECT_20_0 86
#define FREE_ASSIGNMENT_20_26 59
#define FREE_ASSIGNMENT_20_25 60
#define FREE_ASSIGNMENT_20_24 61
#define FREE_ASSIGNMENT_20_23 62
#define FREE_ASSIGNMENT_20_22 63
#define FREE_ASSIGNMENT_20_21 64
#define FREE_ASSIGNMENT_20_20 65
#define FREE_ASSIGNMENT_20_19 66
#define FREE_ASSIGNMENT_20_18 67
#define FREE_ASSIGNMENT_20_17 68
#define FREE_ASSIGNMENT_20_16 69
#define FREE_ASSIGNMENT_20_15 70
#define FREE_ASSIGNMENT_20_14 71
#define FREE_ASSIGNMENT_20_13 72
#define FREE_ASSIGNMENT_20_12 73
#define FREE_ASSIGNMENT_20_11 74
#define FREE_ASSIGNMENT_20_10 75
#define FREE_ASSIGNMENT_20_9 76
#define FREE_ASSIGNMENT_20_8 77
#define FREE_ASSIGNMENT_20_7 78
#define FREE_ASSIGNMENT_20_6 79
#define FREE_ASSIGNMENT_20_5 80
#define FREE_ASSIGNMENT_20_4 81
#define FREE_ASSIGNMENT_20_3 82
#define FREE_ASSIGNMENT_20_2 83
#define FREE_ASSIGNMENT_20_1 84
#define FREE_ASSIGNMENT_20_0 85
#define FREE_REFERENCES_LABEL_20_0 58
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd378;
  machine_word Wrd377;
  machine_word Wrd368;
  machine_word Wrd367;
  machine_word Wrd364;
  machine_word Wrd363;
  machine_word Wrd354;
  machine_word Wrd353;
  machine_word Wrd350;
  machine_word Wrd349;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd336;
  machine_word Wrd335;
  machine_word Wrd326;
  machine_word Wrd325;
  machine_word Wrd322;
  machine_word Wrd321;
  machine_word Wrd312;
  machine_word Wrd311;
  machine_word Wrd308;
  machine_word Wrd307;
  machine_word Wrd298;
  machine_word Wrd297;
  machine_word Wrd294;
  machine_word Wrd293;
  machine_word Wrd284;
  machine_word Wrd283;
  machine_word Wrd280;
  machine_word Wrd279;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd266;
  machine_word Wrd265;
  machine_word Wrd256;
  machine_word Wrd255;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd238;
  machine_word Wrd237;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd196;
  machine_word Wrd195;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_20_4);
      goto assembler_linker_resetB_0;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_20_8);
      goto label_5;

    case 5:
      current_block = (Rpc - LABEL_20_9);
      goto label_6;

    case 6:
      current_block = (Rpc - LABEL_20_10);
      goto label_7;

    case 7:
      current_block = (Rpc - LABEL_20_11);
      goto label_8;

    case 8:
      current_block = (Rpc - LABEL_20_12);
      goto label_9;

    case 9:
      current_block = (Rpc - LABEL_20_13);
      goto label_10;

    case 10:
      current_block = (Rpc - LABEL_20_14);
      goto label_11;

    case 11:
      current_block = (Rpc - LABEL_20_15);
      goto label_12;

    case 12:
      current_block = (Rpc - LABEL_20_16);
      goto label_13;

    case 13:
      current_block = (Rpc - LABEL_20_17);
      goto label_14;

    case 14:
      current_block = (Rpc - LABEL_20_18);
      goto label_15;

    case 15:
      current_block = (Rpc - LABEL_20_19);
      goto label_16;

    case 16:
      current_block = (Rpc - LABEL_20_20);
      goto label_17;

    case 17:
      current_block = (Rpc - LABEL_20_21);
      goto label_18;

    case 18:
      current_block = (Rpc - LABEL_20_22);
      goto label_19;

    case 19:
      current_block = (Rpc - LABEL_20_23);
      goto label_20;

    case 20:
      current_block = (Rpc - LABEL_20_24);
      goto label_21;

    case 21:
      current_block = (Rpc - LABEL_20_25);
      goto label_22;

    case 22:
      current_block = (Rpc - LABEL_20_26);
      goto label_23;

    case 23:
      current_block = (Rpc - LABEL_20_27);
      goto label_24;

    case 24:
      current_block = (Rpc - LABEL_20_28);
      goto label_25;

    case 25:
      current_block = (Rpc - LABEL_20_29);
      goto label_26;

    case 26:
      current_block = (Rpc - LABEL_20_30);
      goto label_27;

    case 27:
      current_block = (Rpc - LABEL_20_31);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assembler_linker_resetB_30)
DEFLABEL (assembler_linker_resetB_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_0]));
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_111;

DEFLABEL (label_110)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_109)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_1]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_108;

DEFLABEL (label_107)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_106)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_2]));
  (Wrd32.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd41.Obj) = ((Wrd31.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_105;

DEFLABEL (label_104)
  ((Wrd31.pObj) [0]) = (Wrd32.Obj);

DEFLABEL (label_103)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_3]));
  (Wrd46.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd55.Obj) = ((Wrd45.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_102;

DEFLABEL (label_101)
  ((Wrd45.pObj) [0]) = (Wrd46.Obj);

DEFLABEL (label_100)
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_4]));
  (Wrd60.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd69.Obj) = ((Wrd59.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_99;

DEFLABEL (label_98)
  ((Wrd59.pObj) [0]) = (Wrd60.Obj);

DEFLABEL (label_97)
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_5]));
  (Wrd74.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd83.Obj) = ((Wrd73.pObj) [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if ((Wrd84.uLng) == 50)
    goto label_96;

DEFLABEL (label_95)
  ((Wrd73.pObj) [0]) = (Wrd74.Obj);

DEFLABEL (label_94)
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_6]));
  (Wrd88.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd97.Obj) = ((Wrd87.pObj) [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if ((Wrd98.uLng) == 50)
    goto label_93;

DEFLABEL (label_92)
  ((Wrd87.pObj) [0]) = (Wrd88.Obj);

DEFLABEL (label_91)
  (Wrd101.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_7]));
  (Wrd102.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd111.Obj) = ((Wrd101.pObj) [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd112.uLng) == 50)
    goto label_90;

DEFLABEL (label_89)
  ((Wrd101.pObj) [0]) = (Wrd102.Obj);

DEFLABEL (label_88)
  (Wrd115.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_8]));
  (Wrd116.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd125.Obj) = ((Wrd115.pObj) [0]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if ((Wrd126.uLng) == 50)
    goto label_87;

DEFLABEL (label_86)
  ((Wrd115.pObj) [0]) = (Wrd116.Obj);

DEFLABEL (label_85)
  (Wrd129.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_9]));
  (Wrd130.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd139.Obj) = ((Wrd129.pObj) [0]);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if ((Wrd140.uLng) == 50)
    goto label_84;

DEFLABEL (label_83)
  ((Wrd129.pObj) [0]) = (Wrd130.Obj);

DEFLABEL (label_82)
  (Wrd143.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_10]));
  (Wrd144.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd153.Obj) = ((Wrd143.pObj) [0]);
  (Wrd154.uLng) = (OBJECT_TYPE (Wrd153.Obj));
  if ((Wrd154.uLng) == 50)
    goto label_81;

DEFLABEL (label_80)
  ((Wrd143.pObj) [0]) = (Wrd144.Obj);

DEFLABEL (label_79)
  (Wrd157.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_11]));
  (Wrd158.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd167.Obj) = ((Wrd157.pObj) [0]);
  (Wrd168.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if ((Wrd168.uLng) == 50)
    goto label_78;

DEFLABEL (label_77)
  ((Wrd157.pObj) [0]) = (Wrd158.Obj);

DEFLABEL (label_76)
  (Wrd171.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_12]));
  (Wrd172.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd181.Obj) = ((Wrd171.pObj) [0]);
  (Wrd182.uLng) = (OBJECT_TYPE (Wrd181.Obj));
  if ((Wrd182.uLng) == 50)
    goto label_75;

DEFLABEL (label_74)
  ((Wrd171.pObj) [0]) = (Wrd172.Obj);

DEFLABEL (label_73)
  (Wrd185.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_13]));
  (Wrd186.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd195.Obj) = ((Wrd185.pObj) [0]);
  (Wrd196.uLng) = (OBJECT_TYPE (Wrd195.Obj));
  if ((Wrd196.uLng) == 50)
    goto label_72;

DEFLABEL (label_71)
  ((Wrd185.pObj) [0]) = (Wrd186.Obj);

DEFLABEL (label_70)
  (Wrd199.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_14]));
  (Wrd200.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd209.Obj) = ((Wrd199.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_69;

DEFLABEL (label_68)
  ((Wrd199.pObj) [0]) = (Wrd200.Obj);

DEFLABEL (label_67)
  (Wrd213.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_15]));
  (Wrd214.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd223.Obj) = ((Wrd213.pObj) [0]);
  (Wrd224.uLng) = (OBJECT_TYPE (Wrd223.Obj));
  if ((Wrd224.uLng) == 50)
    goto label_66;

DEFLABEL (label_65)
  ((Wrd213.pObj) [0]) = (Wrd214.Obj);

DEFLABEL (label_64)
  (Wrd227.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_16]));
  (Wrd228.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd237.Obj) = ((Wrd227.pObj) [0]);
  (Wrd238.uLng) = (OBJECT_TYPE (Wrd237.Obj));
  if ((Wrd238.uLng) == 50)
    goto label_63;

DEFLABEL (label_62)
  ((Wrd227.pObj) [0]) = (Wrd228.Obj);

DEFLABEL (label_61)
  (Wrd241.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_17]));
  (Wrd242.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd251.Obj) = ((Wrd241.pObj) [0]);
  (Wrd252.uLng) = (OBJECT_TYPE (Wrd251.Obj));
  if ((Wrd252.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd241.pObj) [0]) = (Wrd242.Obj);

DEFLABEL (label_58)
  (Wrd255.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_18]));
  (Wrd256.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd265.Obj) = ((Wrd255.pObj) [0]);
  (Wrd266.uLng) = (OBJECT_TYPE (Wrd265.Obj));
  if ((Wrd266.uLng) == 50)
    goto label_57;

DEFLABEL (label_56)
  ((Wrd255.pObj) [0]) = (Wrd256.Obj);

DEFLABEL (label_55)
  (Wrd269.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_19]));
  (Wrd270.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd279.Obj) = ((Wrd269.pObj) [0]);
  (Wrd280.uLng) = (OBJECT_TYPE (Wrd279.Obj));
  if ((Wrd280.uLng) == 50)
    goto label_54;

DEFLABEL (label_53)
  ((Wrd269.pObj) [0]) = (Wrd270.Obj);

DEFLABEL (label_52)
  (Wrd283.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_20]));
  (Wrd284.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd293.Obj) = ((Wrd283.pObj) [0]);
  (Wrd294.uLng) = (OBJECT_TYPE (Wrd293.Obj));
  if ((Wrd294.uLng) == 50)
    goto label_51;

DEFLABEL (label_50)
  ((Wrd283.pObj) [0]) = (Wrd284.Obj);

DEFLABEL (label_49)
  (Wrd297.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_21]));
  (Wrd298.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd307.Obj) = ((Wrd297.pObj) [0]);
  (Wrd308.uLng) = (OBJECT_TYPE (Wrd307.Obj));
  if ((Wrd308.uLng) == 50)
    goto label_48;

DEFLABEL (label_47)
  ((Wrd297.pObj) [0]) = (Wrd298.Obj);

DEFLABEL (label_46)
  (Wrd311.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_22]));
  (Wrd312.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd321.Obj) = ((Wrd311.pObj) [0]);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if ((Wrd322.uLng) == 50)
    goto label_45;

DEFLABEL (label_44)
  ((Wrd311.pObj) [0]) = (Wrd312.Obj);

DEFLABEL (label_43)
  (Wrd325.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_23]));
  (Wrd326.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd335.Obj) = ((Wrd325.pObj) [0]);
  (Wrd336.uLng) = (OBJECT_TYPE (Wrd335.Obj));
  if ((Wrd336.uLng) == 50)
    goto label_42;

DEFLABEL (label_41)
  ((Wrd325.pObj) [0]) = (Wrd326.Obj);

DEFLABEL (label_40)
  (Wrd339.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_24]));
  (Wrd340.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd349.Obj) = ((Wrd339.pObj) [0]);
  (Wrd350.uLng) = (OBJECT_TYPE (Wrd349.Obj));
  if ((Wrd350.uLng) == 50)
    goto label_39;

DEFLABEL (label_38)
  ((Wrd339.pObj) [0]) = (Wrd340.Obj);

DEFLABEL (label_37)
  (Wrd353.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_25]));
  (Wrd354.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd363.Obj) = ((Wrd353.pObj) [0]);
  (Wrd364.uLng) = (OBJECT_TYPE (Wrd363.Obj));
  if ((Wrd364.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd353.pObj) [0]) = (Wrd354.Obj);

DEFLABEL (label_34)
  (Wrd367.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_26]));
  (Wrd368.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd377.Obj) = ((Wrd367.pObj) [0]);
  (Wrd378.uLng) = (OBJECT_TYPE (Wrd377.Obj));
  if ((Wrd378.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd367.pObj) [0]) = (Wrd368.Obj);

DEFLABEL (label_31)
  Rvl = (current_block [OBJECT_20_1]);
  goto pop_return;

DEFLABEL (label_33)
  if ((Wrd377.Obj) == (Wrd368.Obj))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_31])), (Wrd367.pObj), (Wrd368.Obj));

DEFLABEL (label_28)
  goto label_31;

DEFLABEL (label_36)
  if ((Wrd363.Obj) == (Wrd354.Obj))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_30])), (Wrd353.pObj), (Wrd354.Obj));

DEFLABEL (label_27)
  goto label_34;

DEFLABEL (label_39)
  if ((Wrd349.Obj) == (Wrd340.Obj))
    goto label_38;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_29])), (Wrd339.pObj), (Wrd340.Obj));

DEFLABEL (label_26)
  goto label_37;

DEFLABEL (label_42)
  if ((Wrd335.Obj) == (Wrd326.Obj))
    goto label_41;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_28])), (Wrd325.pObj), (Wrd326.Obj));

DEFLABEL (label_25)
  goto label_40;

DEFLABEL (label_45)
  if ((Wrd321.Obj) == (Wrd312.Obj))
    goto label_44;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_27])), (Wrd311.pObj), (Wrd312.Obj));

DEFLABEL (label_24)
  goto label_43;

DEFLABEL (label_48)
  if ((Wrd307.Obj) == (Wrd298.Obj))
    goto label_47;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_26])), (Wrd297.pObj), (Wrd298.Obj));

DEFLABEL (label_23)
  goto label_46;

DEFLABEL (label_51)
  if ((Wrd293.Obj) == (Wrd284.Obj))
    goto label_50;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_25])), (Wrd283.pObj), (Wrd284.Obj));

DEFLABEL (label_22)
  goto label_49;

DEFLABEL (label_54)
  if ((Wrd279.Obj) == (Wrd270.Obj))
    goto label_53;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_24])), (Wrd269.pObj), (Wrd270.Obj));

DEFLABEL (label_21)
  goto label_52;

DEFLABEL (label_57)
  if ((Wrd265.Obj) == (Wrd256.Obj))
    goto label_56;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_23])), (Wrd255.pObj), (Wrd256.Obj));

DEFLABEL (label_20)
  goto label_55;

DEFLABEL (label_60)
  if ((Wrd251.Obj) == (Wrd242.Obj))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_22])), (Wrd241.pObj), (Wrd242.Obj));

DEFLABEL (label_19)
  goto label_58;

DEFLABEL (label_63)
  if ((Wrd237.Obj) == (Wrd228.Obj))
    goto label_62;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_21])), (Wrd227.pObj), (Wrd228.Obj));

DEFLABEL (label_18)
  goto label_61;

DEFLABEL (label_66)
  if ((Wrd223.Obj) == (Wrd214.Obj))
    goto label_65;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_20])), (Wrd213.pObj), (Wrd214.Obj));

DEFLABEL (label_17)
  goto label_64;

DEFLABEL (label_69)
  if ((Wrd209.Obj) == (Wrd200.Obj))
    goto label_68;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_19])), (Wrd199.pObj), (Wrd200.Obj));

DEFLABEL (label_16)
  goto label_67;

DEFLABEL (label_72)
  if ((Wrd195.Obj) == (Wrd186.Obj))
    goto label_71;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_18])), (Wrd185.pObj), (Wrd186.Obj));

DEFLABEL (label_15)
  goto label_70;

DEFLABEL (label_75)
  if ((Wrd181.Obj) == (Wrd172.Obj))
    goto label_74;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_17])), (Wrd171.pObj), (Wrd172.Obj));

DEFLABEL (label_14)
  goto label_73;

DEFLABEL (label_78)
  if ((Wrd167.Obj) == (Wrd158.Obj))
    goto label_77;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_16])), (Wrd157.pObj), (Wrd158.Obj));

DEFLABEL (label_13)
  goto label_76;

DEFLABEL (label_81)
  if ((Wrd153.Obj) == (Wrd144.Obj))
    goto label_80;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_15])), (Wrd143.pObj), (Wrd144.Obj));

DEFLABEL (label_12)
  goto label_79;

DEFLABEL (label_84)
  if ((Wrd139.Obj) == (Wrd130.Obj))
    goto label_83;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_14])), (Wrd129.pObj), (Wrd130.Obj));

DEFLABEL (label_11)
  goto label_82;

DEFLABEL (label_87)
  if ((Wrd125.Obj) == (Wrd116.Obj))
    goto label_86;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_13])), (Wrd115.pObj), (Wrd116.Obj));

DEFLABEL (label_10)
  goto label_85;

DEFLABEL (label_90)
  if ((Wrd111.Obj) == (Wrd102.Obj))
    goto label_89;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_12])), (Wrd101.pObj), (Wrd102.Obj));

DEFLABEL (label_9)
  goto label_88;

DEFLABEL (label_93)
  if ((Wrd97.Obj) == (Wrd88.Obj))
    goto label_92;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_11])), (Wrd87.pObj), (Wrd88.Obj));

DEFLABEL (label_8)
  goto label_91;

DEFLABEL (label_96)
  if ((Wrd83.Obj) == (Wrd74.Obj))
    goto label_95;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_10])), (Wrd73.pObj), (Wrd74.Obj));

DEFLABEL (label_7)
  goto label_94;

DEFLABEL (label_99)
  if ((Wrd69.Obj) == (Wrd60.Obj))
    goto label_98;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_9])), (Wrd59.pObj), (Wrd60.Obj));

DEFLABEL (label_6)
  goto label_97;

DEFLABEL (label_102)
  if ((Wrd55.Obj) == (Wrd46.Obj))
    goto label_101;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_8])), (Wrd45.pObj), (Wrd46.Obj));

DEFLABEL (label_5)
  goto label_100;

DEFLABEL (label_105)
  if ((Wrd41.Obj) == (Wrd32.Obj))
    goto label_104;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_7])), (Wrd31.pObj), (Wrd32.Obj));

DEFLABEL (label_4)
  goto label_103;

DEFLABEL (label_108)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_107;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_3)
  goto label_106;

DEFLABEL (label_111)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_110;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_109;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_8 9
#define LABEL_21_9 11
#define LABEL_21_10 13
#define LABEL_21_11 15
#define LABEL_21_12 17
#define LABEL_21_13 19
#define LABEL_21_14 21
#define LABEL_21_15 23
#define LABEL_21_16 25
#define LABEL_21_17 27
#define LABEL_21_20 29
#define LABEL_21_18 31
#define LABEL_21_21 33
#define LABEL_21_22 35
#define LABEL_21_23 37
#define LABEL_21_25 39
#define LABEL_21_27 41
#define LABEL_21_28 43
#define LABEL_21_24 45
#define LABEL_21_29 47
#define LABEL_21_32 49
#define LABEL_21_33 51
#define LABEL_21_34 53
#define LABEL_21_35 55
#define LABEL_21_36 57
#define LABEL_21_37 59
#define LABEL_21_38 61
#define ENVIRONMENT_LABEL_21_3 105
#define DEBUGGING_LABEL_21_2 104
#define OBJECT_21_8 103
#define OBJECT_21_7 102
#define OBJECT_21_6 101
#define OBJECT_21_5 100
#define OBJECT_21_4 99
#define OBJECT_21_3 98
#define OBJECT_21_2 97
#define OBJECT_21_1 96
#define OBJECT_21_0 95
#define EXECUTE_CACHE_21_31 63
#define EXECUTE_CACHE_21_30 65
#define EXECUTE_CACHE_21_26 67
#define EXECUTE_CACHE_21_19 69
#define EXECUTE_CACHE_21_7 71
#define FREE_REFERENCE_21_0 74
#define FREE_ASSIGNMENT_21_18 76
#define FREE_ASSIGNMENT_21_17 77
#define FREE_ASSIGNMENT_21_16 78
#define FREE_ASSIGNMENT_21_15 79
#define FREE_ASSIGNMENT_21_14 80
#define FREE_ASSIGNMENT_21_13 81
#define FREE_ASSIGNMENT_21_12 82
#define FREE_ASSIGNMENT_21_11 83
#define FREE_ASSIGNMENT_21_10 84
#define FREE_ASSIGNMENT_21_9 85
#define FREE_ASSIGNMENT_21_8 86
#define FREE_ASSIGNMENT_21_7 87
#define FREE_ASSIGNMENT_21_6 88
#define FREE_ASSIGNMENT_21_5 89
#define FREE_ASSIGNMENT_21_4 90
#define FREE_ASSIGNMENT_21_3 91
#define FREE_ASSIGNMENT_21_2 92
#define FREE_ASSIGNMENT_21_1 93
#define FREE_ASSIGNMENT_21_0 94
#define FREE_REFERENCES_LABEL_21_0 62
#define NUMBER_OF_LINKER_SECTIONS_21_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd30;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd45;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_21_4);
      goto initialize_back_endB_10;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_21_10);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_21_11);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_21_12);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_21_13);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_21_14);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_21_15);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_21_16);
      goto label_19;

    case 12:
      current_block = (Rpc - LABEL_21_17);
      goto label_20;

    case 13:
      current_block = (Rpc - LABEL_21_20);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_21_18);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_21_21);
      goto label_21;

    case 16:
      current_block = (Rpc - LABEL_21_22);
      goto label_22;

    case 17:
      current_block = (Rpc - LABEL_21_23);
      goto label_23;

    case 18:
      current_block = (Rpc - LABEL_21_25);
      goto label_24;

    case 19:
      current_block = (Rpc - LABEL_21_27);
      goto label_25;

    case 20:
      current_block = (Rpc - LABEL_21_28);
      goto label_26;

    case 21:
      current_block = (Rpc - LABEL_21_24);
      goto continuation_8;

    case 22:
      current_block = (Rpc - LABEL_21_29);
      goto continuation_9;

    case 23:
      current_block = (Rpc - LABEL_21_32);
      goto label_27;

    case 24:
      current_block = (Rpc - LABEL_21_33);
      goto label_28;

    case 25:
      current_block = (Rpc - LABEL_21_34);
      goto label_29;

    case 26:
      current_block = (Rpc - LABEL_21_35);
      goto label_30;

    case 27:
      current_block = (Rpc - LABEL_21_36);
      goto label_31;

    case 28:
      current_block = (Rpc - LABEL_21_37);
      goto label_32;

    case 29:
      current_block = (Rpc - LABEL_21_38);
      goto label_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_back_endB_35)
DEFLABEL (initialize_back_endB_10)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_0]));
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_100;

DEFLABEL (label_99)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_98)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_6);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_97;

DEFLABEL (label_96)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_95)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_94;

DEFLABEL (label_93)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_92)
  (Wrd21.Obj) = (current_block [OBJECT_21_1]);
  (Wrd22.Obj) = (current_block [OBJECT_21_0]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_3]));
  (Wrd31.Obj) = ((Wrd23.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_91;

DEFLABEL (label_90)
  ((Wrd23.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_89)
  (Wrd38.Obj) = (current_block [OBJECT_21_2]);
  (Wrd39.Obj) = (current_block [OBJECT_21_0]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_4]));
  (Wrd48.Obj) = ((Wrd40.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_88;

DEFLABEL (label_87)
  ((Wrd40.pObj) [0]) = (Wrd35.Obj);

DEFLABEL (label_86)
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_5]));
  (Wrd53.Obj) = (current_block [OBJECT_21_3]);
  (Wrd60.Obj) = ((Wrd52.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_85;

DEFLABEL (label_84)
  ((Wrd52.pObj) [0]) = (Wrd53.Obj);

DEFLABEL (label_83)
  (Wrd64.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_6]));
  (Wrd65.Obj) = (current_block [OBJECT_21_0]);
  (Wrd72.Obj) = ((Wrd64.pObj) [0]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd73.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  ((Wrd64.pObj) [0]) = (Wrd65.Obj);

DEFLABEL (label_80)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_7]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_77)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_8]));
  (Wrd19.Obj) = (current_block [OBJECT_21_0]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_76;

DEFLABEL (label_75)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_74)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_18]))));
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_18);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_9]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_71)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_70;
  Wrd22 = Wrd26;

DEFLABEL (label_69)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_68;
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if ((Wrd73.Lng) == 0)
    goto label_67;

DEFLABEL (label_66)
  (Wrd34.Obj) = (current_block [OBJECT_21_4]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_24]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_65;
  Wrd38 = Wrd42;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_26]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_21_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_31]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_21_20);
  (Wrd45.Obj) = Rvl;

DEFLABEL (label_63)
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_10]));
  (Wrd54.Obj) = ((Wrd46.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_62;

DEFLABEL (label_61)
  ((Wrd46.pObj) [0]) = (Wrd45.Obj);

DEFLABEL (label_60)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_11]));
  (Wrd59.Obj) = (current_block [OBJECT_21_0]);
  (Wrd66.Obj) = ((Wrd58.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  ((Wrd58.pObj) [0]) = (Wrd59.Obj);

DEFLABEL (label_57)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_29]))));
  (* (--Rsp)) = (Wrd72.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_30]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21_29);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_12]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_54)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_13]));
  (Wrd19.Obj) = (current_block [OBJECT_21_6]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_51)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_14]));
  (Wrd31.Obj) = (current_block [OBJECT_21_7]);
  (Wrd38.Obj) = ((Wrd30.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd30.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_48)
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_15]));
  (Wrd43.Obj) = (current_block [OBJECT_21_7]);
  (Wrd50.Obj) = ((Wrd42.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  ((Wrd42.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_45)
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_16]));
  (Wrd55.Obj) = (current_block [OBJECT_21_7]);
  (Wrd62.Obj) = ((Wrd54.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd54.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_42)
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_17]));
  (Wrd67.Obj) = (current_block [OBJECT_21_7]);
  (Wrd74.Obj) = ((Wrd66.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd66.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_39)
  (Wrd78.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_21_18]));
  (Wrd79.Obj) = (current_block [OBJECT_21_0]);
  (Wrd86.Obj) = ((Wrd78.pObj) [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd87.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd78.pObj) [0]) = (Wrd79.Obj);

DEFLABEL (label_36)
  Rvl = (current_block [OBJECT_21_8]);
  goto pop_return;

DEFLABEL (label_38)
  if ((Wrd86.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_38])), (Wrd78.pObj), (Wrd79.Obj));

DEFLABEL (label_33)
  goto label_36;

DEFLABEL (label_41)
  if ((Wrd74.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_37])), (Wrd66.pObj), (Wrd67.Obj));

DEFLABEL (label_32)
  goto label_39;

DEFLABEL (label_44)
  if ((Wrd62.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_36])), (Wrd54.pObj), (Wrd55.Obj));

DEFLABEL (label_31)
  goto label_42;

DEFLABEL (label_47)
  if ((Wrd50.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_46;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_35])), (Wrd42.pObj), (Wrd43.Obj));

DEFLABEL (label_30)
  goto label_45;

DEFLABEL (label_50)
  if ((Wrd38.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_34])), (Wrd30.pObj), (Wrd31.Obj));

DEFLABEL (label_29)
  goto label_48;

DEFLABEL (label_53)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_33])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_28)
  goto label_51;

DEFLABEL (label_56)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_55;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_32])), (Wrd6.pObj), Rvl);

DEFLABEL (label_27)
  goto label_54;

DEFLABEL (label_59)
  if ((Wrd66.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_58;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_28])), (Wrd58.pObj), (Wrd59.Obj));

DEFLABEL (label_26)
  goto label_57;

DEFLABEL (label_62)
  if ((Wrd54.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_61;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_27])), (Wrd46.pObj), (Wrd45.Obj));

DEFLABEL (label_25)
  goto label_60;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_25])), (Wrd39.pObj));

DEFLABEL (label_24)
  (Wrd38.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd45.Obj) = (current_block [OBJECT_21_5]);
  Rsp = (& (Rsp [1]));
  goto label_63;

DEFLABEL (label_68)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_23]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_22])), (Wrd23.pObj));

DEFLABEL (label_22)
  (Wrd22.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_73)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_72;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_21])), (Wrd6.pObj), Rvl);

DEFLABEL (label_21)
  goto label_71;

DEFLABEL (label_76)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_75;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_17])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_20)
  goto label_74;

DEFLABEL (label_79)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_78;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_16])), (Wrd6.pObj), Rvl);

DEFLABEL (label_19)
  goto label_77;

DEFLABEL (label_82)
  if ((Wrd72.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_14])), (Wrd64.pObj), (Wrd65.Obj));

DEFLABEL (label_18)
  goto label_80;

DEFLABEL (label_85)
  if ((Wrd60.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_84;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_13])), (Wrd52.pObj), (Wrd53.Obj));

DEFLABEL (label_17)
  goto label_83;

DEFLABEL (label_88)
  if ((Wrd48.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_87;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_12])), (Wrd40.pObj), (Wrd35.Obj));

DEFLABEL (label_16)
  goto label_86;

DEFLABEL (label_91)
  if ((Wrd31.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_90;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_11])), (Wrd23.pObj), (Wrd18.Obj));

DEFLABEL (label_15)
  goto label_89;

DEFLABEL (label_94)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_93;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_10])), (Wrd6.pObj), Rvl);

DEFLABEL (label_14)
  goto label_92;

DEFLABEL (label_97)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_96;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_13)
  goto label_95;

DEFLABEL (label_100)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_99;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_21_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_12)
  goto label_98;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_8 5
#define LABEL_22_5 7
#define TAG_22_6 2
#define LABEL_22_10 9
#define LABEL_22_11 11
#define LABEL_22_12 13
#define LABEL_22_13 15
#define LABEL_22_14 17
#define LABEL_22_15 19
#define LABEL_22_16 21
#define LABEL_22_17 23
#define LABEL_22_18 25
#define LABEL_22_19 27
#define LABEL_22_20 29
#define LABEL_22_21 31
#define LABEL_22_23 33
#define LABEL_22_9 35
#define LABEL_22_22 37
#define LABEL_22_26 39
#define LABEL_22_28 41
#define LABEL_22_29 43
#define LABEL_22_30 45
#define LABEL_22_31 47
#define LABEL_22_32 49
#define LABEL_22_33 51
#define ENVIRONMENT_LABEL_22_3 83
#define DEBUGGING_LABEL_22_2 82
#define OBJECT_22_5 81
#define OBJECT_22_4 80
#define OBJECT_22_3 79
#define OBJECT_22_2 78
#define OBJECT_22_1 77
#define OBJECT_22_0 76
#define EXECUTE_CACHE_22_27 53
#define EXECUTE_CACHE_22_25 55
#define EXECUTE_CACHE_22_24 57
#define EXECUTE_CACHE_22_7 59
#define FREE_REFERENCE_22_4 62
#define FREE_REFERENCE_22_3 63
#define FREE_REFERENCE_22_2 64
#define FREE_REFERENCE_22_1 65
#define FREE_REFERENCE_22_0 66
#define FREE_ASSIGNMENT_22_7 68
#define FREE_ASSIGNMENT_22_6 69
#define FREE_ASSIGNMENT_22_5 70
#define FREE_ASSIGNMENT_22_4 71
#define FREE_ASSIGNMENT_22_3 72
#define FREE_ASSIGNMENT_22_2 73
#define FREE_ASSIGNMENT_22_1 74
#define FREE_ASSIGNMENT_22_0 75
#define FREE_REFERENCES_LABEL_22_0 52
#define NUMBER_OF_LINKER_SECTIONS_22_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd71;
  machine_word Wrd64;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd72;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd73;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd116;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd95;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd131;
  machine_word Wrd125;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd118;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd119;
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
      current_block = (Rpc - LABEL_22_4);
      goto phase_assemble_13;

    case 1:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_22_5);
      goto lambda_36;

    case 3:
      current_block = (Rpc - LABEL_22_10);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_22_11);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_22_12);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_22_13);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_22_14);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_22_15);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_22_16);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_22_17);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_22_18);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_22_19);
      goto label_18;

    case 13:
      current_block = (Rpc - LABEL_22_20);
      goto label_19;

    case 14:
      current_block = (Rpc - LABEL_22_21);
      goto label_20;

    case 15:
      current_block = (Rpc - LABEL_22_23);
      goto label_21;

    case 16:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_11;

    case 17:
      current_block = (Rpc - LABEL_22_22);
      goto continuation_3;

    case 18:
      current_block = (Rpc - LABEL_22_26);
      goto lambda_0;

    case 19:
      current_block = (Rpc - LABEL_22_28);
      goto label_28;

    case 20:
      current_block = (Rpc - LABEL_22_29);
      goto label_29;

    case 21:
      current_block = (Rpc - LABEL_22_30);
      goto label_30;

    case 22:
      current_block = (Rpc - LABEL_22_31);
      goto label_31;

    case 23:
      current_block = (Rpc - LABEL_22_32);
      goto label_32;

    case 24:
      current_block = (Rpc - LABEL_22_33);
      goto label_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_assemble_35)
DEFLABEL (phase_assemble_13)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_22_5);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  if ((Wrd10.Obj) == (current_block [OBJECT_22_1]))
    goto label_71;
  if ((Wrd10.Obj) == (current_block [OBJECT_22_2]))
    goto label_39;
  (* (--Rsp)) = (Wrd10.Obj);
  goto label_38;

DEFLABEL (label_39)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_38)
DEFLABEL (label_70)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_2]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_69;
  Wrd19 = Wrd23;

DEFLABEL (label_68)
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_3]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_61;
  Wrd26 = Wrd30;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_59)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_2]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_58;
  Wrd32 = Wrd36;

DEFLABEL (label_57)
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_4]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_50;
  Wrd39 = Wrd43;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_48)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd53.Obj) = ((Wrd50.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_47;
  Wrd49 = Wrd53;

DEFLABEL (label_46)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_45;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if ((Wrd72.Lng) == 0)
    goto label_44;

DEFLABEL (label_43)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_22]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd65.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd68.Obj) = ((Wrd65.pObj) [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd69.uLng) == 50)
    goto label_42;
  Wrd64 = Wrd68;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd64.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_24]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_27]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_26]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_23])), (Wrd65.pObj));

DEFLABEL (label_21)
  (Wrd64.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd71.Obj) = (current_block [OBJECT_22_3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd71.Obj);
  goto label_40;

DEFLABEL (label_45)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_21]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_20])), (Wrd50.pObj));

DEFLABEL (label_19)
  (Wrd49.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_19])), (Wrd40.pObj));

DEFLABEL (label_18)
  (Wrd39.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_51)
  (Wrd74.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_4]));
  (Wrd77.Obj) = ((Wrd74.pObj) [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd78.uLng) == 50)
    goto label_56;
  Wrd73 = Wrd77;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_22_1]));
  (Wrd80.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd89.Obj) = ((Wrd79.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_54;

DEFLABEL (label_53)
  ((Wrd79.pObj) [0]) = (Wrd80.Obj);

DEFLABEL (label_52)
  (Wrd94.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd94.Obj);
  goto label_48;

DEFLABEL (label_54)
  if ((Wrd89.Obj) == (Wrd80.Obj))
    goto label_53;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_22_18])), (Wrd79.pObj), (Wrd80.Obj));

DEFLABEL (label_23)
  goto label_52;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_17])), (Wrd74.pObj));

DEFLABEL (label_22)
  (Wrd73.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_16])), (Wrd33.pObj));

DEFLABEL (label_17)
  (Wrd32.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_15])), (Wrd27.pObj));

DEFLABEL (label_16)
  (Wrd26.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd96.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_3]));
  (Wrd99.Obj) = ((Wrd96.pObj) [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd100.uLng) == 50)
    goto label_67;
  Wrd95 = Wrd99;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd101.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_22_0]));
  (Wrd102.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd111.Obj) = ((Wrd101.pObj) [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd112.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  ((Wrd101.pObj) [0]) = (Wrd102.Obj);

DEFLABEL (label_63)
  (Wrd116.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd116.Obj);
  goto label_59;

DEFLABEL (label_65)
  if ((Wrd111.Obj) == (Wrd102.Obj))
    goto label_64;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_22_14])), (Wrd101.pObj), (Wrd102.Obj));

DEFLABEL (label_25)
  goto label_63;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_13])), (Wrd96.pObj));

DEFLABEL (label_24)
  (Wrd95.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_12])), (Wrd20.pObj));

DEFLABEL (label_15)
  (Wrd19.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd119.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd122.Obj) = ((Wrd119.pObj) [0]);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if ((Wrd123.uLng) == 50)
    goto label_75;
  Wrd118 = Wrd122;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd126.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_1]));
  (Wrd129.Obj) = ((Wrd126.pObj) [0]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if ((Wrd130.uLng) == 50)
    goto label_73;
  Wrd125 = Wrd129;

DEFLABEL (label_72)
  (Wrd131.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd125.Obj);
  (* (Rhp++)) = (Wrd131.Obj);
  (Wrd133.pObj) = (& (Rhp [-2]));
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd133.pObj)));
  (* (--Rsp)) = (Wrd134.Obj);
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_11])), (Wrd126.pObj));

DEFLABEL (label_27)
  (Wrd125.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_10])), (Wrd119.pObj));

DEFLABEL (label_26)
  (Wrd118.Obj) = Rvl;
  goto label_74;

DEFLABEL (lambda_37)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_22_26);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_22_2]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_93;

DEFLABEL (label_92)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_91)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_22_3]));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_90;

DEFLABEL (label_89)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_88)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_22_4]));
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_87;

DEFLABEL (label_86)
  ((Wrd29.pObj) [0]) = (Wrd30.Obj);

DEFLABEL (label_85)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_22_5]));
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd49.Obj) = ((Wrd41.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_84;

DEFLABEL (label_83)
  ((Wrd41.pObj) [0]) = (Wrd42.Obj);

DEFLABEL (label_82)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_22_6]));
  (Wrd54.Obj) = (Rsp [4]);
  (Wrd61.Obj) = ((Wrd53.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_81;

DEFLABEL (label_80)
  ((Wrd53.pObj) [0]) = (Wrd54.Obj);

DEFLABEL (label_79)
  (Wrd65.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_22_7]));
  (Wrd66.Obj) = (Rsp [5]);
  (Wrd73.Obj) = ((Wrd65.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 50)
    goto label_78;

DEFLABEL (label_77)
  ((Wrd65.pObj) [0]) = (Wrd66.Obj);

DEFLABEL (label_76)
  Rvl = (current_block [OBJECT_22_5]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_78)
  if ((Wrd73.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_77;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_22_33])), (Wrd65.pObj), (Wrd66.Obj));

DEFLABEL (label_33)
  goto label_76;

DEFLABEL (label_81)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_80;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_22_32])), (Wrd53.pObj), (Wrd54.Obj));

DEFLABEL (label_32)
  goto label_79;

DEFLABEL (label_84)
  if ((Wrd49.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_83;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_22_31])), (Wrd41.pObj), (Wrd42.Obj));

DEFLABEL (label_31)
  goto label_82;

DEFLABEL (label_87)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_86;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_22_30])), (Wrd29.pObj), (Wrd30.Obj));

DEFLABEL (label_30)
  goto label_85;

DEFLABEL (label_90)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_89;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_22_29])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_29)
  goto label_88;

DEFLABEL (label_93)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_92;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_22_28])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_28)
  goto label_91;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_5 3
#define LABEL_23_6 5
#define LABEL_23_4 7
#define LABEL_23_7 9
#define LABEL_23_8 11
#define LABEL_23_9 13
#define LABEL_23_10 15
#define LABEL_23_11 17
#define LABEL_23_12 19
#define LABEL_23_13 21
#define LABEL_23_14 23
#define LABEL_23_15 25
#define LABEL_23_16 27
#define LABEL_23_17 29
#define LABEL_23_18 31
#define LABEL_23_19 33
#define LABEL_23_20 35
#define LABEL_23_21 37
#define LABEL_23_22 39
#define LABEL_23_26 41
#define LABEL_23_25 43
#define LABEL_23_28 45
#define LABEL_23_29 47
#define LABEL_23_30 49
#define LABEL_23_31 51
#define LABEL_23_32 53
#define LABEL_23_33 55
#define LABEL_23_35 57
#define LABEL_23_37 59
#define LABEL_23_27 61
#define LABEL_23_36 63
#define LABEL_23_39 65
#define LABEL_23_42 67
#define LABEL_23_43 69
#define LABEL_23_41 71
#define LABEL_23_44 73
#define ENVIRONMENT_LABEL_23_3 119
#define DEBUGGING_LABEL_23_2 118
#define OBJECT_23_8 117
#define OBJECT_23_7 116
#define OBJECT_23_6 115
#define OBJECT_23_5 114
#define OBJECT_23_4 113
#define OBJECT_23_3 112
#define OBJECT_23_2 111
#define OBJECT_23_1 110
#define OBJECT_23_0 109
#define EXECUTE_CACHE_23_45 75
#define EXECUTE_CACHE_23_38 77
#define EXECUTE_CACHE_23_34 79
#define EXECUTE_CACHE_23_40 81
#define EXECUTE_CACHE_23_24 83
#define EXECUTE_CACHE_23_23 85
#define FREE_REFERENCE_23_11 88
#define FREE_REFERENCE_23_10 89
#define FREE_REFERENCE_23_9 90
#define FREE_REFERENCE_23_8 91
#define FREE_REFERENCE_23_7 92
#define FREE_REFERENCE_23_6 93
#define FREE_REFERENCE_23_5 94
#define FREE_REFERENCE_23_4 95
#define FREE_REFERENCE_23_3 96
#define FREE_REFERENCE_23_2 97
#define FREE_REFERENCE_23_1 98
#define FREE_REFERENCE_23_0 99
#define FREE_ASSIGNMENT_23_7 101
#define FREE_ASSIGNMENT_23_6 102
#define FREE_ASSIGNMENT_23_5 103
#define FREE_ASSIGNMENT_23_4 104
#define FREE_ASSIGNMENT_23_3 105
#define FREE_ASSIGNMENT_23_2 106
#define FREE_ASSIGNMENT_23_1 107
#define FREE_ASSIGNMENT_23_0 108
#define FREE_REFERENCES_LABEL_23_0 74
#define NUMBER_OF_LINKER_SECTIONS_23_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd54;
  machine_word Wrd179;
  machine_word Wrd175;
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
      current_block = (Rpc - LABEL_23_5);
      goto continuation_11;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_23_4);
      goto phase_output_generation_22;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_23_8);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_23_9);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_23_10);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_23_11);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_23_12);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_23_13);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_23_14);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_23_15);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_23_16);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_23_17);
      goto label_36;

    case 14:
      current_block = (Rpc - LABEL_23_18);
      goto label_37;

    case 15:
      current_block = (Rpc - LABEL_23_19);
      goto label_38;

    case 16:
      current_block = (Rpc - LABEL_23_20);
      goto label_26;

    case 17:
      current_block = (Rpc - LABEL_23_21);
      goto label_27;

    case 18:
      current_block = (Rpc - LABEL_23_22);
      goto continuation_8;

    case 19:
      current_block = (Rpc - LABEL_23_26);
      goto label_39;

    case 20:
      current_block = (Rpc - LABEL_23_25);
      goto continuation_10;

    case 21:
      current_block = (Rpc - LABEL_23_28);
      goto label_40;

    case 22:
      current_block = (Rpc - LABEL_23_29);
      goto label_41;

    case 23:
      current_block = (Rpc - LABEL_23_30);
      goto label_42;

    case 24:
      current_block = (Rpc - LABEL_23_31);
      goto label_43;

    case 25:
      current_block = (Rpc - LABEL_23_32);
      goto label_44;

    case 26:
      current_block = (Rpc - LABEL_23_33);
      goto label_45;

    case 27:
      current_block = (Rpc - LABEL_23_35);
      goto lambda_5;

    case 28:
      current_block = (Rpc - LABEL_23_37);
      goto label_46;

    case 29:
      current_block = (Rpc - LABEL_23_27);
      goto continuation_9;

    case 30:
      current_block = (Rpc - LABEL_23_36);
      goto continuation_3;

    case 31:
      current_block = (Rpc - LABEL_23_39);
      goto continuation_13;

    case 32:
      current_block = (Rpc - LABEL_23_42);
      goto lambda_7;

    case 33:
      current_block = (Rpc - LABEL_23_43);
      goto label_47;

    case 34:
      current_block = (Rpc - LABEL_23_41);
      goto continuation_14;

    case 35:
      current_block = (Rpc - LABEL_23_44);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_output_generation_49)
DEFLABEL (phase_output_generation_22)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_107;
  Wrd6 = Wrd10;

DEFLABEL (label_106)
  if ((Wrd6.Obj) == (current_block [OBJECT_23_0]))
    goto label_105;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_23_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_24]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_6);

DEFLABEL (label_105)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_104;
  Wrd17 = Wrd21;

DEFLABEL (label_103)
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_98;
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_5]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_97;
  Wrd24 = Wrd28;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_6]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_95;
  Wrd30 = Wrd34;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_22]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_23_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_93;
  Wrd8 = Wrd12;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_5;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_23_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_91;
  Wrd8 = Wrd12;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_9]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_89;
  Wrd14 = Wrd18;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_87;
  Wrd21 = Wrd25;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_10]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_85;
  Wrd27 = Wrd31;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_3]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_83;
  Wrd33 = Wrd37;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_3]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_81;
  Wrd39 = Wrd43;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd45.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_34]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_23_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [5]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_7;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_23_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [6]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_7;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_23_41);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [7]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_7;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_23_44);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd6.Obj) = (* (Rsp++));
  (Wrd13.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd14.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-5]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_45]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Wrd175.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd175.Obj);
  (Wrd179.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd179.pObj)));
  Rsp = (& (Rsp [5]));

DEFLABEL (label_79)
  (Wrd57.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_0]));
  (Wrd65.Obj) = ((Wrd57.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_78;

DEFLABEL (label_77)
  ((Wrd57.pObj) [0]) = (Wrd54.Obj);

DEFLABEL (label_76)
  (Wrd70.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_4]));
  (Wrd73.Obj) = ((Wrd70.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 50)
    goto label_75;
  Wrd69 = Wrd73;

DEFLABEL (label_74)
  if ((Wrd69.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;

DEFLABEL (label_52)
  Rvl = (current_block [OBJECT_23_1]);
  goto pop_return;

DEFLABEL (label_53)
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_1]));
  (Wrd78.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd87.Obj) = ((Wrd77.pObj) [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd88.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  ((Wrd77.pObj) [0]) = (Wrd78.Obj);

DEFLABEL (label_71)
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_2]));
  (Wrd92.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd101.Obj) = ((Wrd91.pObj) [0]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if ((Wrd102.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  ((Wrd91.pObj) [0]) = (Wrd92.Obj);

DEFLABEL (label_68)
  (Wrd105.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_3]));
  (Wrd106.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd115.Obj) = ((Wrd105.pObj) [0]);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if ((Wrd116.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd105.pObj) [0]) = (Wrd106.Obj);

DEFLABEL (label_65)
  (Wrd119.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_4]));
  (Wrd120.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd129.Obj) = ((Wrd119.pObj) [0]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if ((Wrd130.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd119.pObj) [0]) = (Wrd120.Obj);

DEFLABEL (label_62)
  (Wrd133.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_5]));
  (Wrd134.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd143.Obj) = ((Wrd133.pObj) [0]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if ((Wrd144.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  ((Wrd133.pObj) [0]) = (Wrd134.Obj);

DEFLABEL (label_59)
  (Wrd147.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_6]));
  (Wrd148.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd157.Obj) = ((Wrd147.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  ((Wrd147.pObj) [0]) = (Wrd148.Obj);

DEFLABEL (label_56)
  (Wrd161.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_7]));
  (Wrd162.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd171.Obj) = ((Wrd161.pObj) [0]);
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd171.Obj));
  if ((Wrd172.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  ((Wrd161.pObj) [0]) = (Wrd162.Obj);
  goto label_52;

DEFLABEL (label_55)
  if ((Wrd171.Obj) == (Wrd162.Obj))
    goto label_54;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_19])), (Wrd161.pObj), (Wrd162.Obj));

DEFLABEL (label_38)
  goto label_52;

DEFLABEL (label_58)
  if ((Wrd157.Obj) == (Wrd148.Obj))
    goto label_57;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_18])), (Wrd147.pObj), (Wrd148.Obj));

DEFLABEL (label_37)
  goto label_56;

DEFLABEL (label_61)
  if ((Wrd143.Obj) == (Wrd134.Obj))
    goto label_60;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_17])), (Wrd133.pObj), (Wrd134.Obj));

DEFLABEL (label_36)
  goto label_59;

DEFLABEL (label_64)
  if ((Wrd129.Obj) == (Wrd120.Obj))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_16])), (Wrd119.pObj), (Wrd120.Obj));

DEFLABEL (label_35)
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd115.Obj) == (Wrd106.Obj))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_15])), (Wrd105.pObj), (Wrd106.Obj));

DEFLABEL (label_34)
  goto label_65;

DEFLABEL (label_70)
  if ((Wrd101.Obj) == (Wrd92.Obj))
    goto label_69;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_14])), (Wrd91.pObj), (Wrd92.Obj));

DEFLABEL (label_33)
  goto label_68;

DEFLABEL (label_73)
  if ((Wrd87.Obj) == (Wrd78.Obj))
    goto label_72;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_13])), (Wrd77.pObj), (Wrd78.Obj));

DEFLABEL (label_32)
  goto label_71;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_12])), (Wrd70.pObj));

DEFLABEL (label_31)
  (Wrd69.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_78)
  if ((Wrd65.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_77;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_11])), (Wrd57.pObj), (Wrd54.Obj));

DEFLABEL (label_30)
  goto label_76;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_33])), (Wrd40.pObj));

DEFLABEL (label_45)
  (Wrd39.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_32])), (Wrd34.pObj));

DEFLABEL (label_44)
  (Wrd33.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_31])), (Wrd28.pObj));

DEFLABEL (label_43)
  (Wrd27.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_30])), (Wrd22.pObj));

DEFLABEL (label_42)
  (Wrd21.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_29])), (Wrd15.pObj));

DEFLABEL (label_41)
  (Wrd14.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_28])), (Wrd9.pObj));

DEFLABEL (label_40)
  (Wrd8.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_26])), (Wrd9.pObj));

DEFLABEL (label_39)
  (Wrd8.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_21])), (Wrd31.pObj));

DEFLABEL (label_27)
  (Wrd30.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_20])), (Wrd25.pObj));

DEFLABEL (label_26)
  (Wrd24.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_98)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_2]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_102;
  Wrd40 = Wrd44;

DEFLABEL (label_101)
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_3]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_100;
  Wrd47 = Wrd51;

DEFLABEL (label_99)
  (Wrd53.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  goto label_79;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_10])), (Wrd48.pObj));

DEFLABEL (label_29)
  (Wrd47.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_9])), (Wrd41.pObj));

DEFLABEL (label_28)
  (Wrd40.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_8])), (Wrd18.pObj));

DEFLABEL (label_25)
  (Wrd17.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_7])), (Wrd7.pObj));

DEFLABEL (label_24)
  (Wrd6.Obj) = Rvl;
  goto label_106;

DEFLABEL (lambda_50)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_23_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_11]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_111;
  Wrd8 = Wrd12;

DEFLABEL (label_110)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_38]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_36);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_108;
  (Wrd15.Obj) = (current_block [OBJECT_23_4]);
  (Rsp [0]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_40]));

DEFLABEL (label_108)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_109;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_109)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_5]), 1);

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_37])), (Wrd9.pObj));

DEFLABEL (label_46)
  (Wrd8.Obj) = Rvl;
  goto label_110;

DEFLABEL (lambda_51)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_23_42);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_113;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_113;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_113;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd12.pObj) = (& ((Wrd20.pObj) [(Wrd7.Lng)]));
  (Wrd5.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_112)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_5;

DEFLABEL (label_113)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_43]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_7]), 2);

DEFLABEL (label_47)
  (Wrd5.Obj) = Rvl;
  goto label_112;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 8
#define DEBUGGING_LABEL_24_2 7
#define EXECUTE_CACHE_24_5 5
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto phase_info_generation_2_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_info_generation_2_3)
DEFLABEL (phase_info_generation_2_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_9 7
#define LABEL_25_10 9
#define LABEL_25_11 11
#define LABEL_25_12 13
#define LABEL_25_13 15
#define LABEL_25_14 17
#define LABEL_25_15 19
#define LABEL_25_16 21
#define LABEL_25_17 23
#define LABEL_25_18 25
#define LABEL_25_19 27
#define LABEL_25_20 29
#define LABEL_25_21 31
#define LABEL_25_22 33
#define LABEL_25_23 35
#define LABEL_25_24 37
#define LABEL_25_8 39
#define LABEL_25_26 41
#define LABEL_25_27 43
#define LABEL_25_28 45
#define LABEL_25_30 47
#define LABEL_25_29 49
#define LABEL_25_32 51
#define LABEL_25_33 53
#define ENVIRONMENT_LABEL_25_3 89
#define DEBUGGING_LABEL_25_2 88
#define OBJECT_25_6 87
#define OBJECT_25_5 86
#define OBJECT_25_4 85
#define OBJECT_25_3 84
#define OBJECT_25_2 83
#define OBJECT_25_1 82
#define OBJECT_25_0 81
#define EXECUTE_CACHE_25_36 55
#define EXECUTE_CACHE_25_35 57
#define EXECUTE_CACHE_25_34 59
#define EXECUTE_CACHE_25_31 61
#define EXECUTE_CACHE_25_25 63
#define EXECUTE_CACHE_25_7 65
#define FREE_REFERENCE_25_6 68
#define FREE_REFERENCE_25_5 69
#define FREE_REFERENCE_25_4 70
#define FREE_REFERENCE_25_3 71
#define FREE_REFERENCE_25_2 72
#define FREE_REFERENCE_25_1 73
#define FREE_REFERENCE_25_0 74
#define FREE_ASSIGNMENT_25_4 76
#define FREE_ASSIGNMENT_25_3 77
#define FREE_ASSIGNMENT_25_2 78
#define FREE_ASSIGNMENT_25_1 79
#define FREE_ASSIGNMENT_25_0 80
#define FREE_REFERENCES_LABEL_25_0 54
#define NUMBER_OF_LINKER_SECTIONS_25_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd5;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd106;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd85;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd128;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd107;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd150;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd129;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_25_4);
      goto info_generation_2_22;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_45;

    case 2:
      current_block = (Rpc - LABEL_25_9);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_25_10);
      goto label_38;

    case 4:
      current_block = (Rpc - LABEL_25_11);
      goto label_39;

    case 5:
      current_block = (Rpc - LABEL_25_12);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_25_13);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_25_14);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_25_15);
      goto label_37;

    case 9:
      current_block = (Rpc - LABEL_25_16);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_25_17);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_25_18);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_25_19);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_25_20);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_25_21);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_25_22);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_25_23);
      goto label_33;

    case 17:
      current_block = (Rpc - LABEL_25_24);
      goto label_31;

    case 18:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_8;

    case 19:
      current_block = (Rpc - LABEL_25_26);
      goto label_40;

    case 20:
      current_block = (Rpc - LABEL_25_27);
      goto label_41;

    case 21:
      current_block = (Rpc - LABEL_25_28);
      goto label_42;

    case 22:
      current_block = (Rpc - LABEL_25_30);
      goto continuation_11;

    case 23:
      current_block = (Rpc - LABEL_25_29);
      goto continuation_12;

    case 24:
      current_block = (Rpc - LABEL_25_32);
      goto continuation_15;

    case 25:
      current_block = (Rpc - LABEL_25_33);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (info_generation_2_44)
DEFLABEL (info_generation_2_22)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_101;
  Wrd8 = Wrd12;

DEFLABEL (label_100)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_94;
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_93;
  Wrd15 = Wrd19;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_91)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_90;
  Wrd24 = Wrd28;

DEFLABEL (label_89)
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_83;
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_2]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_82;
  Wrd31 = Wrd35;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_80)
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_79;
  Wrd37 = Wrd41;

DEFLABEL (label_78)
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_3]));
  (Wrd48.Obj) = ((Wrd45.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_71;
  Wrd44 = Wrd48;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_69)
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_68;
  Wrd50 = Wrd54;

DEFLABEL (label_67)
  if ((Wrd50.Obj) == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_4]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_60;
  Wrd57 = Wrd61;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_58)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_25_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_25_1])))
    goto label_48;

DEFLABEL (label_47)
  Rvl = (current_block [OBJECT_25_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_48)
  if ((Wrd7.Obj) == (current_block [OBJECT_25_2]))
    goto label_51;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_29]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_30]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_31]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_25_30);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_25_4]))
    goto label_49;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_32]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_33]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_34]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_25_32);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_36]));

DEFLABEL (label_49)
  (Wrd5.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_50)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_35]));

DEFLABEL (label_51)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_5]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_57;
  Wrd19 = Wrd23;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_6]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_55;
  Wrd26 = Wrd30;

DEFLABEL (label_54)
  (Wrd35.Obj) = ((SCHEME_OBJECT) 0);
  (Wrd37.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd38.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd34.pObj) = (& (Rhp [-4]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd34.pObj)));
  (Wrd40.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_4]));
  (Wrd52.Obj) = ((Wrd44.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd44.pObj) [0]) = (Wrd41.Obj);
  goto label_47;

DEFLABEL (label_53)
  (Wrd50.Obj) = (MAKE_OBJECT (50, (Wrd35.uLng)));
  if ((Wrd52.Obj) == (Wrd50.Obj))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_28])), (Wrd44.pObj), (Wrd41.Obj));

DEFLABEL (label_42)
  goto label_47;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_27])), (Wrd27.pObj));

DEFLABEL (label_41)
  (Wrd26.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_26])), (Wrd20.pObj));

DEFLABEL (label_40)
  (Wrd19.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_24])), (Wrd58.pObj));

DEFLABEL (label_31)
  (Wrd57.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_61)
  (Wrd64.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_4]));
  (Wrd67.Obj) = ((Wrd64.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_66;
  Wrd63 = Wrd67;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_3]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_62)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  goto label_58;

DEFLABEL (label_64)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_23])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_33)
  goto label_62;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_22])), (Wrd64.pObj));

DEFLABEL (label_32)
  (Wrd63.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_21])), (Wrd51.pObj));

DEFLABEL (label_30)
  (Wrd50.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_20])), (Wrd45.pObj));

DEFLABEL (label_29)
  (Wrd44.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_3]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_77;
  Wrd85 = Wrd89;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_2]));
  (Wrd92.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd101.Obj) = ((Wrd91.pObj) [0]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if ((Wrd102.uLng) == 50)
    goto label_75;

DEFLABEL (label_74)
  ((Wrd91.pObj) [0]) = (Wrd92.Obj);

DEFLABEL (label_73)
  (Wrd106.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd106.Obj);
  goto label_69;

DEFLABEL (label_75)
  if ((Wrd101.Obj) == (Wrd92.Obj))
    goto label_74;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_19])), (Wrd91.pObj), (Wrd92.Obj));

DEFLABEL (label_35)
  goto label_73;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_18])), (Wrd86.pObj));

DEFLABEL (label_34)
  (Wrd85.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_17])), (Wrd38.pObj));

DEFLABEL (label_28)
  (Wrd37.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_16])), (Wrd32.pObj));

DEFLABEL (label_27)
  (Wrd31.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_83)
  (Wrd108.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_2]));
  (Wrd111.Obj) = ((Wrd108.pObj) [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd112.uLng) == 50)
    goto label_88;
  Wrd107 = Wrd111;

DEFLABEL (label_87)
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd113.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_1]));
  (Wrd114.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd123.Obj) = ((Wrd113.pObj) [0]);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if ((Wrd124.uLng) == 50)
    goto label_86;

DEFLABEL (label_85)
  ((Wrd113.pObj) [0]) = (Wrd114.Obj);

DEFLABEL (label_84)
  (Wrd128.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd128.Obj);
  goto label_80;

DEFLABEL (label_86)
  if ((Wrd123.Obj) == (Wrd114.Obj))
    goto label_85;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_15])), (Wrd113.pObj), (Wrd114.Obj));

DEFLABEL (label_37)
  goto label_84;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_14])), (Wrd108.pObj));

DEFLABEL (label_36)
  (Wrd107.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_13])), (Wrd25.pObj));

DEFLABEL (label_26)
  (Wrd24.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_12])), (Wrd16.pObj));

DEFLABEL (label_25)
  (Wrd15.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_94)
  (Wrd130.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_1]));
  (Wrd133.Obj) = ((Wrd130.pObj) [0]);
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd133.Obj));
  if ((Wrd134.uLng) == 50)
    goto label_99;
  Wrd129 = Wrd133;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd129.Obj);
  (Wrd135.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_0]));
  (Wrd136.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd145.Obj) = ((Wrd135.pObj) [0]);
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if ((Wrd146.uLng) == 50)
    goto label_97;

DEFLABEL (label_96)
  ((Wrd135.pObj) [0]) = (Wrd136.Obj);

DEFLABEL (label_95)
  (Wrd150.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd150.Obj);
  goto label_91;

DEFLABEL (label_97)
  if ((Wrd145.Obj) == (Wrd136.Obj))
    goto label_96;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_11])), (Wrd135.pObj), (Wrd136.Obj));

DEFLABEL (label_39)
  goto label_95;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_10])), (Wrd130.pObj));

DEFLABEL (label_38)
  (Wrd129.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_9])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_100;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_25_29);
  (Wrd5.Obj) = Rvl;
  goto label_50;

DEFLABEL (lambda_46)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_25_33);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_5]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_103;

DEFLABEL (label_102)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_6]), 2);

DEFLABEL (label_103)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_102;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define ENVIRONMENT_LABEL_26_3 17
#define DEBUGGING_LABEL_26_2 16
#define OBJECT_26_0 15
#define EXECUTE_CACHE_26_9 9
#define EXECUTE_CACHE_26_8 11
#define EXECUTE_CACHE_26_6 13
#define FREE_REFERENCES_LABEL_26_0 8
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_26_4);
      goto compiler_dump_bci_file_3;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_dump_bci_file_6)
DEFLABEL (compiler_dump_bci_file_3)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define TAG_27_6 1
#define LABEL_27_8 7
#define ENVIRONMENT_LABEL_27_3 17
#define DEBUGGING_LABEL_27_2 16
#define OBJECT_27_0 15
#define EXECUTE_CACHE_27_10 9
#define EXECUTE_CACHE_27_9 11
#define EXECUTE_CACHE_27_7 13
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_27_4);
      goto dump_compressed_2;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dump_compressed_5)
DEFLABEL (dump_compressed_2)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_27_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_8);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_9 7
#define LABEL_28_7 9
#define LABEL_28_11 11
#define LABEL_28_8 13
#define LABEL_28_14 15
#define LABEL_28_15 17
#define LABEL_28_17 19
#define LABEL_28_18 21
#define LABEL_28_16 23
#define LABEL_28_20 25
#define ENVIRONMENT_LABEL_28_3 49
#define DEBUGGING_LABEL_28_2 48
#define OBJECT_28_10 47
#define OBJECT_28_9 46
#define OBJECT_28_8 45
#define OBJECT_28_7 44
#define OBJECT_28_6 43
#define OBJECT_28_5 42
#define OBJECT_28_4 41
#define OBJECT_28_3 40
#define OBJECT_28_2 39
#define OBJECT_28_1 38
#define OBJECT_28_0 37
#define EXECUTE_CACHE_28_19 27
#define EXECUTE_CACHE_28_13 29
#define EXECUTE_CACHE_28_12 31
#define EXECUTE_CACHE_28_10 33
#define EXECUTE_CACHE_28_6 35
#define FREE_REFERENCES_LABEL_28_0 26
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ctop_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd20;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd22;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd13;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_28_4);
      goto canonicalize_label_name_20;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_9);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_28_11);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_28_14);
      goto do_loop_16;

    case 7:
      current_block = (Rpc - LABEL_28_15);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_28_17);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_28_18);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_28_16);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_28_20);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_label_name_28)
DEFLABEL (canonicalize_label_name_20)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = (current_block [OBJECT_28_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 30))
    goto label_35;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd25.Lng))))
    goto label_35;
  (Wrd18.uLng) = ((unsigned long) (((unsigned char *) (Wrd23.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd19.Obj) = (MAKE_OBJECT (2, (Wrd18.uLng)));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (Rsp [0]) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 30))
    goto label_32;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
  (Wrd17.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto do_loop_16;

DEFLABEL (label_32)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_12]));

DEFLABEL (label_35)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.Obj) = (current_block [OBJECT_28_0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (do_loop_29)
DEFLABEL (do_loop_16)
  INTERRUPT_CHECK (26, LABEL_28_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_50;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_50;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd48.Lng) < (Wrd50.Lng))
    goto label_37;

DEFLABEL (label_36)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 30))
    goto label_49;
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_49;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd31.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_49;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd25.pChr) = (& ((Wrd33.pChr) [(Wrd22.Lng)]));
  (Wrd26.uLng) = ((unsigned long) (((unsigned char *) (Wrd25.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd27.Obj) = (MAKE_OBJECT (2, (Wrd26.uLng)));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_48)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_18]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_28_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_40)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_39;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_39;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_38)
  (Rsp [0]) = (Wrd9.Obj);
  goto do_loop_16;

DEFLABEL (label_39)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_26)
  (Wrd9.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  if ((Wrd20.Obj) == (current_block [OBJECT_28_5]))
    goto label_47;
  if ((Wrd20.Obj) == (current_block [OBJECT_28_7]))
    goto label_43;
  (Wrd26.Obj) = (current_block [OBJECT_28_9]);
  goto label_42;

DEFLABEL (label_43)
  (Wrd26.Obj) = (current_block [OBJECT_28_8]);

DEFLABEL (label_42)
DEFLABEL (label_46)
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 30)
    goto label_45;

DEFLABEL (label_44)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_10]), 3);

DEFLABEL (label_45)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_44;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) (Wrd40.Lng)) < ((unsigned long) (Wrd44.Lng))))
    goto label_44;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd36.uLng) == 2))
    goto label_44;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd37.Obj));
  (Wrd32.pChr) = (& ((Wrd42.pChr) [(Wrd29.Lng)]));
  ((Wrd32.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd26.Obj)));
  Rsp = (& (Rsp [4]));
  goto label_40;

DEFLABEL (label_47)
  (Wrd26.Obj) = (current_block [OBJECT_28_6]);
  goto label_46;

DEFLABEL (label_49)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_17]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_37;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_28_16);
  goto label_40;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define ENVIRONMENT_LABEL_3 28
#define DEBUGGING_LABEL_2 27
#define PURIFICATION_ROOT 26
#define OBJECT_6 25
#define OBJECT_5 24
#define OBJECT_4 23
#define OBJECT_3 22
#define OBJECT_2 21
#define OBJECT_1 20
#define OBJECT_0 19
#define FREE_REFERENCE_0 15
#define GLOBAL_EXECUTE_CACHE_5 17
#define FREE_REFERENCES_LABEL_0 14
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
ctop_so_62834beadb3d47a3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto expression_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_3)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_8)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_7)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	3,
	1,
	3,
	3,
	3,
	1,
	3,
	3,
	3,
	2,
	2,
	0,
	2,
	1,
	3,
	1,
	0,
	0,
	3,
	3,
	2,
	1,
	2,
	2,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 28)
      goto label_6;
    blocks = (current_block [OBJECT_6]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_8])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_6)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_5]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_ctop_so_62834beadb3d47a3 [28] =
  {
    { "ctop_so_code_1", 1, ctop_so_code_1 },
    { "ctop_so_code_2", 9, ctop_so_code_2 },
    { "ctop_so_code_3", 5, ctop_so_code_3 },
    { "ctop_so_code_4", 2, ctop_so_code_4 },
    { "ctop_so_code_5", 2, ctop_so_code_5 },
    { "ctop_so_code_6", 11, ctop_so_code_6 },
    { "ctop_so_code_7", 9, ctop_so_code_7 },
    { "ctop_so_code_8", 1, ctop_so_code_8 },
    { "ctop_so_code_9", 1, ctop_so_code_9 },
    { "ctop_so_code_10", 2, ctop_so_code_10 },
    { "ctop_so_code_11", 27, ctop_so_code_11 },
    { "ctop_so_code_12", 9, ctop_so_code_12 },
    { "ctop_so_code_13", 17, ctop_so_code_13 },
    { "ctop_so_code_14", 1, ctop_so_code_14 },
    { "ctop_so_code_15", 5, ctop_so_code_15 },
    { "ctop_so_code_16", 6, ctop_so_code_16 },
    { "ctop_so_code_17", 5, ctop_so_code_17 },
    { "ctop_so_code_18", 9, ctop_so_code_18 },
    { "ctop_so_code_19", 81, ctop_so_code_19 },
    { "ctop_so_code_20", 28, ctop_so_code_20 },
    { "ctop_so_code_21", 30, ctop_so_code_21 },
    { "ctop_so_code_22", 25, ctop_so_code_22 },
    { "ctop_so_code_23", 36, ctop_so_code_23 },
    { "ctop_so_code_24", 1, ctop_so_code_24 },
    { "ctop_so_code_25", 26, ctop_so_code_25 },
    { "ctop_so_code_26", 3, ctop_so_code_26 },
    { "ctop_so_code_27", 3, ctop_so_code_27 },
    { "ctop_so_code_28", 12, ctop_so_code_28 }
  };

int
decl_ctop_so_62834beadb3d47a3 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_ctop_so_62834beadb3d47a3);
  return (0);
}

DECLARE_COMPILED_CODE ("ctop.so", 6, decl_ctop_so_62834beadb3d47a3, ctop_so_62834beadb3d47a3)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_ctop_so_data_62834beadb3d47a3 [7365] =
  "\xf5\x01\x45\x86\x0d\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x22\x29"
  "\x21\x9d\x2b\xb9\x1d\xb0\x82\x88\x0c\x1d\xc1\xba\xc2\xbb\x81\x0d"
  "\xbc\x24\x28\x0d\x28\x0d\xbd\x28\x0d\x28\x0d\xbe\x28\x0d\xbf\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x0d\x0d\x24\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x85\x88\x0d\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1d\x0c\x0d\x1c\x25\x1b\x24\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x28\xb6\x28\xb5\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x02\x0c\x1b"
  "\x25\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d"
  "\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x0c\x0c\x02"
  "\xb4\x25\xb4\x24\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\xb6\x28\xb5"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\xb7\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0c\x1d\x0d\x0d\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\x07\xb3\x80\x0d\x1c\x24\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x08\x0d\x1c\x25\x0d\x1c\x0d\x1c\x24\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x08\x1b\x0d\x1c\x25\x1b\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x0d"
  "\x1c\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x25\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x08\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x25\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x06\x0d\x0c\x0c\x80\x0d\x0d\x08\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x25\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x0c\x0c\x0d\x1c\x0d\x1c\x0c\x0d\x1c\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x25\x1b\x0d\x0d\x1c\x1b\x1b\x24\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x80\xb3\x82\xb2\x0c\x81\x0c\x1d\x08\x1b\x0d\x1c\x1b\x1b\x0d"
  "\x1c\x0d\x1c\x1b\x1b\x25\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x24\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb3\x81"
  "\x08\x1d\x1b\x1b\x0c\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x25\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x28\xb5\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x0d\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x0f"
  "\x0f\x0f\x0f\x0f\x0c\xc1\x0c\xc2\x80\x28\x0d\x28\x0d\x28\x1b\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x17\x1c\x88\x1b\x1b\x2a\x0d\xc3\x1b\x1b\x0d\x1c\x1b\x1b\x1b\x1b"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb6\x1b\xb7\x1b\x0d\x1b"
  "\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x1b\xb4\x0d\x17\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e"
  "\x1e\x1e\x1e\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x07\xb1\x2a\x17\x28\x0d\x26\x1b\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5d\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x2f\x6d\x61\x63\x68\x69\x6e\x65\x73\x2f\x43\x2f"
  "\x63\x74\x6f\x70\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x63"
  "\x07\x04\x82\x02\x03\x02\x02\x6f\x02\x04\x63\x64\x72\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x1c\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x3a\x69\x6e\x76\x6f\x6b\x65\x2d\x63\x2d\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x3f\x02\x04\x16\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x66\x69\x6c\x65\x04\x12\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x74\x79\x70\x65\x04"
  "\x0e\x63\x3a\x77\x72\x69\x74\x65\x2d\x67\x72\x6f\x75\x70\x02\x13"
  "\x63\x2d\x6f\x75\x74\x70\x75\x74\x2d\x65\x78\x74\x65\x6e\x73\x69"
  "\x6f\x6e\x05\x0a\x63\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x06\x10\x14"
  "\x81\x89\x02\x0f\x12\x81\x87\x02\x0e\x10\x81\x87\x02\x0d\x0e\x81"
  "\x85\x02\x0c\x0c\x81\x87\x02\x0b\x0a\x81\x87\x02\x0a\x08\x81\x85"
  "\x02\x09\x06\x81\x85\x02\x08\x04\x84\x06\x13\x28\x09\x02\x1b\x2a"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x6f\x75\x74\x70\x75\x74\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2a\x1a\x2a\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2d\x69\x6e\x70\x75\x74\x2d\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2a\x03\x05\x18\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x73\x63"
  "\x6f\x64\x65\x2f\x66\x69\x6c\x65\x2f\x68\x6f\x6f\x6b\x0a\x03\x0f"
  "\x73\x74\x72\x69\x6e\x67\x69\x66\x79\x2d\x64\x61\x74\x61\x03\x15"
  "\x0c\x81\x83\x02\x14\x0a\x81\x85\x02\x13\x08\x81\x8b\x02\x12\x06"
  "\x81\x89\x02\x11\x04\x84\x06\x0b\x16\x0b\x02\x04\x15\x66\x69\x6e"
  "\x69\x73\x68\x2d\x63\x2d\x63\x6f\x6d\x70\x69\x6c\x61\x74\x69\x6f"
  "\x6e\x0c\x04\x05\x6c\x6f\x61\x64\x03\x17\x06\x81\x85\x02\x16\x04"
  "\x84\x06\x05\x0d\x0d\x02\x14\x66\x61\x73\x6c\x6f\x61\x64\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x66\x69\x6c\x65\x02\x04\x0c\x02\x19\x06"
  "\x81\x85\x02\x18\x04\x83\x04\x05\x0d\x0e\x02\x02\x04\x62\x69\x6e"
  "\x17\x2a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x66\x69\x6c\x65\x2d"
  "\x68\x61\x6e\x64\x6c\x65\x2a\x0f\x02\x0f\x02\x03\x0e\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x05\x13\x73\x68\x61\x6c"
  "\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x10\x03"
  "\x10\x66\x69\x6c\x65\x2d\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67"
  "\x02\x04\x04\x07\x65\x71\x75\x61\x6c\x3f\x07\x24\x18\x81\x83\x02"
  "\x23\x16\x81\x85\x02\x22\x14\x81\x83\x02\x21\x12\x81\x83\x02\x20"
  "\x10\x81\x83\x02\x1f\x0e\x81\x8d\x02\x1e\x0c\x81\x8b\x02\x1d\x0a"
  "\x81\x83\x02\x1c\x08\x81\x89\x02\x1b\x06\x81\x87\x02\x1a\x04\x85"
  "\x08\x17\x2d\x11\x02\x08\x02\x12\x28\x61\x6e\x6f\x6e\x79\x6d\x6f"
  "\x75\x73\x20\x73\x63\x6f\x64\x65\x20\x09\x02\x29\x0f\x02\x0f\x02"
  "\x03\x13\x72\x61\x6e\x64\x6f\x6d\x2d\x62\x79\x74\x65\x2d\x76\x65"
  "\x63\x74\x6f\x72\x12\x05\x10\x05\x0e\x73\x74\x72\x69\x6e\x67\x2d"
  "\x61\x70\x70\x65\x6e\x64\x13\x03\x17\x76\x65\x63\x74\x6f\x72\x2d"
  "\x38\x62\x2d\x3e\x68\x65\x78\x61\x64\x65\x63\x69\x6d\x61\x6c\x14"
  "\x05\x2d\x14\x81\x83\x02\x2c\x12\x81\x85\x02\x2b\x10\x81\x83\x02"
  "\x2a\x0e\x81\x83\x02\x29\x0c\x81\x83\x02\x28\x0a\x81\x89\x02\x27"
  "\x08\x81\x87\x02\x26\x06\x81\x83\x02\x25\x04\x83\x04\x13\x27\x15"
  "\x02\x09\x2e\x04\x83\x04\x03\x16\x02\x0a\x2f\x04\x83\x04\x03\x17"
  "\x02\x0b\x0f\x02\x31\x06\x81\x81\x02\x30\x04\x82\x02\x05\x0a\x18"
  "\x02\x0c\x02\x02\x2d\x02\x63\x02\x6f\x11\x02\x02\x03\x12\x03\x14"
  "\x04\x18\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c\x65"
  "\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x03\x0e\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2d\x6e\x61\x6d\x65\x02\x04\x04\x12\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x6e\x61\x6d\x65\x05\x13\x05"
  "\x0d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x77\x69\x6e\x64\x05\x10\x03"
  "\x1a\x64\x65\x61\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x74\x65\x6d\x70"
  "\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c\x65\x05\x04\x15\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2d\x66\x69\x6c\x65\x2d\x6f\x75\x74\x70\x75"
  "\x74\x14\x0e\x4c\x38\x81\x83\x02\x4b\x36\x81\x83\x02\x4a\x34\x81"
  "\x83\x02\x49\x32\x81\x83\x02\x48\x30\x81\x85\x02\x47\x2e\x81\x83"
  "\x02\x46\x2c\x81\x83\x02\x45\x2a\x81\x83\x02\x44\x28\x81\x83\x02"
  "\x43\x26\x82\x02\x42\x24\x81\x83\x02\x41\x22\x81\x83\x02\x40\x20"
  "\x81\x8f\x02\x3f\x1e\x81\x8d\x02\x3e\x1c\x81\x8b\x02\x3d\x1a\x81"
  "\x8f\x02\x3c\x18\x81\x89\x02\x3b\x16\x81\x87\x02\x3a\x14\x81\x8b"
  "\x02\x39\x12\x81\x89\x02\x38\x10\x81\x85\x02\x37\x0e\x81\x89\x02"
  "\x36\x0c\x81\x87\x02\x35\x0a\x81\x85\x02\x34\x08\x81\x87\x02\x33"
  "\x06\x81\x85\x02\x32\x04\x84\x06\x37\x5e\x12\x02\x0d\x24\x55\x6e"
  "\x61\x62\x6c\x65\x20\x74\x6f\x20\x66\x69\x6e\x64\x20\x43\x20\x69"
  "\x6e\x63\x6c\x75\x64\x65\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x2e\x03\x2d\x49\x09\x6c\x69\x61\x72\x63\x2d\x63\x63\x19\x2d\x44"
  "\x45\x4e\x41\x42\x4c\x45\x5f\x4c\x49\x41\x52\x43\x5f\x46\x49\x4c"
  "\x45\x5f\x49\x4e\x49\x54\x09\x6c\x69\x61\x72\x63\x2d\x6c\x64\x08"
  "\x69\x6e\x63\x6c\x75\x64\x65\x03\x22\x73\x79\x73\x74\x65\x6d\x2d"
  "\x6c\x69\x62\x72\x61\x72\x79\x2d\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x03\x18\x73\x79\x73\x74"
  "\x65\x6d\x2d\x6c\x69\x62\x72\x61\x72\x79\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x04\x13\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72"
  "\x69\x6e\x67\x19\x03\x06\x65\x72\x72\x6f\x72\x1a\x03\x1b\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x61\x73\x2d\x66\x69\x6c\x65\x05\x0d\x72\x75\x6e\x2d\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x1b\x07\x1b\x09\x55\x14\x81\x91\x02\x54"
  "\x12\x81\x87\x02\x53\x10\x81\x8f\x02\x52\x0e\x81\x91\x02\x51\x0c"
  "\x81\x8d\x02\x50\x0a\x81\x8b\x02\x4f\x08\x81\x89\x02\x4e\x06\x81"
  "\x87\x02\x4d\x04\x85\x08\x13\x2d\x1c\x02\x0e\x12\x55\x6e\x6b\x6e"
  "\x6f\x77\x6e\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x3a\x28\x43\x20"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x20\x72\x65\x74\x75\x72\x6e\x65"
  "\x64\x20\x6e\x6f\x6e\x2d\x7a\x65\x72\x6f\x20\x65\x78\x69\x74\x20"
  "\x63\x6f\x64\x65\x3a\x02\x07\x6f\x75\x74\x70\x75\x74\x10\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x3a\x6e\x6f\x69\x73\x79\x3f\x02\x02\x13"
  "\x6f\x70\x65\x6e\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69"
  "\x6e\x67\x04\x04\x6d\x61\x70\x1d\x06\x1b\x72\x75\x6e\x2d\x73\x79"
  "\x6e\x63\x68\x72\x6f\x6e\x6f\x75\x73\x2d\x73\x75\x62\x70\x72\x6f"
  "\x63\x65\x73\x73\x03\x0a\x70\x61\x74\x68\x6e\x61\x6d\x65\x3f\x04"
  "\x1a\x03\x13\x67\x65\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x21\x03\x19\x03\x12\x6f\x70\x65\x6e\x2d\x69\x6e"
  "\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x03\x0a\x72\x65\x61\x64"
  "\x2d\x6c\x69\x6e\x65\x03\x0c\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x3f\x03\x18\x77\x72\x69\x74\x65\x2d\x6e\x6f\x74\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x6c\x69\x6e\x65\x04\x0d\x77\x72\x69"
  "\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x0d\x66\x24\x81\x85\x02\x65"
  "\x22\x81\x85\x02\x64\x20\x81\x85\x02\x63\x1e\x81\x83\x02\x62\x1c"
  "\x81\x83\x02\x61\x1a\xfd\xff\x03\x60\x18\xfd\xff\x03\x5f\x16\x81"
  "\x83\x02\x5e\x14\xff\xff\x03\x5d\x12\x81\x89\x02\x5c\x10\x83\x04"
  "\x5b\x0e\x81\x8d\x02\x5a\x0c\x81\x89\x02\x59\x0a\x81\x89\x02\x58"
  "\x08\x81\x87\x02\x57\x06\x81\x85\x02\x56\x04\xfe\x05\x23\x45\x19"
  "\x02\x0f\x03\x73\x6f\x67\x04\x82\x02\x03\x1e\x02\x10\x20\x2a\x72"
  "\x65\x63\x75\x72\x73\x69\x76\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x65\x73\x75\x6c\x74\x73\x2a\x1f\x02\x04"
  "\x05\x73\x6f\x72\x74\x02\x6c\x0c\x81\x85\x02\x6b\x0a\x81\x85\x02"
  "\x6a\x08\x84\x06\x69\x06\x81\x83\x02\x68\x04\x82\x02\x0b\x16\x20"
  "\x02\x11\x09\x2a\x6c\x61\x62\x65\x6c\x73\x2a\x21\x09\x2a\x72\x65"
  "\x73\x75\x6c\x74\x2a\x22\x03\x03\x0f\x70\x68\x61\x73\x65\x2f\x61"
  "\x73\x73\x65\x6d\x62\x6c\x65\x23\x02\x18\x70\x68\x61\x73\x65\x2f"
  "\x6f\x75\x74\x70\x75\x74\x2d\x67\x65\x6e\x65\x72\x61\x74\x69\x6f"
  "\x6e\x24\x04\x18\x70\x68\x61\x73\x65\x2f\x69\x6e\x66\x6f\x2d\x67"
  "\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x2d\x32\x25\x04\x72\x0e\x81"
  "\x83\x02\x71\x0c\x81\x83\x02\x70\x0a\x81\x87\x02\x6f\x08\x81\x83"
  "\x02\x6e\x06\x81\x83\x02\x6d\x04\x83\x04\x0d\x1a\x26\x02\x12\x0e"
  "\x2a\x73\x74\x61\x72\x74\x2d\x6c\x61\x62\x65\x6c\x2a\x27\x02\x14"
  "\x2a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x72\x65\x73\x75\x6c"
  "\x74\x3f\x2a\x28\x0e\x2a\x62\x6c\x6f\x63\x6b\x2d\x6c\x61\x62\x65"
  "\x6c\x2a\x29\x03\x04\x15\x6c\x61\x70\x3a\x6d\x61\x6b\x65\x2d\x65"
  "\x6e\x74\x72\x79\x2d\x70\x6f\x69\x6e\x74\x04\x07\x61\x70\x70\x65"
  "\x6e\x64\x03\x77\x0c\x81\x87\x02\x76\x0a\x81\x87\x02\x75\x08\x81"
  "\x85\x02\x74\x06\x84\x06\x73\x04\x81\x85\x02\x0b\x19\x2a\x02\x13"
  "\x02\x1f\x14\x2a\x73\x68\x61\x72\x65\x64\x2d\x6e\x61\x6d\x65\x73"
  "\x74\x72\x69\x6e\x67\x2a\x2b\x03\x1f\x2b\x03\x05\x10\x02\x80\x01"
  "\x14\x81\x83\x02\x7f\x12\x81\x85\x02\x7e\x10\x81\x83\x02\x7d\x0e"
  "\x81\x83\x02\x7c\x0c\x81\x85\x02\x7b\x0a\x81\x83\x02\x7a\x08\x81"
  "\x83\x02\x79\x06\x81\x83\x02\x78\x04\x83\x04\x13\x21\x2c\x02\x14"
  "\x02\x16\x63\x75\x72\x72\x65\x6e\x74\x2d\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x6c\x69\x73\x74\x2d\x11\x66\x72\x65\x65\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x73\x2e\x10\x66\x72\x65\x65\x2d"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x2f\x0f\x66\x72\x65\x65"
  "\x2d\x75\x75\x6f\x2d\x6c\x69\x6e\x6b\x73\x30\x11\x67\x6c\x6f\x62"
  "\x61\x6c\x2d\x75\x75\x6f\x2d\x6c\x69\x6e\x6b\x73\x31\x0a\x6c\x61"
  "\x62\x65\x6c\x2d\x6e\x75\x6d\x32\x07\x6c\x61\x62\x65\x6c\x73\x33"
  "\x08\x6f\x62\x6a\x65\x63\x74\x73\x34\x18\x70\x65\x72\x6d\x61\x6e"
  "\x65\x6e\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6c\x69\x73"
  "\x74\x35\x29\x10\x2a\x64\x69\x73\x61\x6d\x62\x69\x67\x75\x61\x74"
  "\x6f\x72\x2a\x36\x27\x12\x2a\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d"
  "\x6c\x61\x62\x65\x6c\x73\x2a\x37\x11\x2a\x73\x70\x65\x63\x69\x61"
  "\x6c\x2d\x6c\x61\x62\x65\x6c\x73\x2a\x38\x13\x2a\x69\x6e\x76\x6f"
  "\x6b\x65\x2d\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x2a\x39\x18\x2a"
  "\x75\x73\x65\x64\x2d\x69\x6e\x76\x6f\x6b\x65\x2d\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x2a\x3a\x1a\x2a\x75\x73\x65\x2d\x6a\x75\x6d"
  "\x70\x2d\x65\x78\x65\x63\x75\x74\x65\x2d\x63\x68\x61\x63\x68\x65"
  "\x2a\x3b\x11\x2a\x75\x73\x65\x2d\x70\x6f\x70\x2d\x72\x65\x74\x75"
  "\x72\x6e\x2a\x3c\x1b\x2a\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x2d\x6f\x62\x6a\x65\x63\x74\x2a\x3d"
  "\x14\x2a\x65\x6e\x64\x2d\x6f\x66\x2d\x62\x6c\x6f\x63\x6b\x2d\x63"
  "\x6f\x64\x65\x2a\x3e\x0e\x2a\x63\x2d\x63\x6f\x64\x65\x2d\x6e\x61"
  "\x6d\x65\x2a\x3f\x0e\x2a\x63\x2d\x64\x61\x74\x61\x2d\x6e\x61\x6d"
  "\x65\x2a\x40\x08\x2a\x6e\x74\x61\x67\x73\x2a\x41\x21\x07\x2a\x63"
  "\x6f\x64\x65\x2a\x42\x08\x2a\x70\x72\x6f\x78\x79\x2a\x43\x1b\x2d"
  "\x2e\x2f\x30\x31\x32\x33\x34\x35\x29\x36\x27\x37\x38\x39\x3a\x3b"
  "\x3c\x3d\x3e\x3f\x40\x41\x21\x42\x43\x1b\x05\x10\x02\xd1\x01\xa4"
  "\x01\x81\x83\x02\xd0\x01\xa2\x01\x81\x85\x02\xcf\x01\xa0\x01\x81"
  "\x83\x02\xce\x01\x9e\x01\x81\x83\x02\xcd\x01\x9c\x01\x81\x85\x02"
  "\xcc\x01\x9a\x01\x81\x83\x02\xcb\x01\x98\x01\x81\x83\x02\xca\x01"
  "\x96\x01\x81\x85\x02\xc9\x01\x94\x01\x81\x83\x02\xc8\x01\x92\x01"
  "\x81\x83\x02\xc7\x01\x90\x01\x81\x85\x02\xc6\x01\x8e\x01\x81\x83"
  "\x02\xc5\x01\x8c\x01\x81\x83\x02\xc4\x01\x8a\x01\x81\x85\x02\xc3"
  "\x01\x88\x01\x81\x83\x02\xc2\x01\x86\x01\x81\x83\x02\xc1\x01\x84"
  "\x01\x81\x85\x02\xc0\x01\x82\x01\x81\x83\x02\xbf\x01\x80\x01\x81"
  "\x83\x02\xbe\x01\x7e\x81\x85\x02\xbd\x01\x7c\x81\x83\x02\xbc\x01"
  "\x7a\x81\x83\x02\xbb\x01\x78\x81\x85\x02\xba\x01\x76\x81\x83\x02"
  "\xb9\x01\x74\x81\x83\x02\xb8\x01\x72\x81\x85\x02\xb7\x01\x70\x81"
  "\x83\x02\xb6\x01\x6e\x81\x83\x02\xb5\x01\x6c\x81\x85\x02\xb4\x01"
  "\x6a\x81\x83\x02\xb3\x01\x68\x81\x83\x02\xb2\x01\x66\x81\x85\x02"
  "\xb1\x01\x64\x81\x83\x02\xb0\x01\x62\x81\x83\x02\xaf\x01\x60\x81"
  "\x85\x02\xae\x01\x5e\x81\x83\x02\xad\x01\x5c\x81\x83\x02\xac\x01"
  "\x5a\x81\x85\x02\xab\x01\x58\x81\x83\x02\xaa\x01\x56\x81\x83\x02"
  "\xa9\x01\x54\x81\x85\x02\xa8\x01\x52\x81\x83\x02\xa7\x01\x50\x81"
  "\x83\x02\xa6\x01\x4e\x81\x85\x02\xa5\x01\x4c\x81\x83\x02\xa4\x01"
  "\x4a\x81\x83\x02\xa3\x01\x48\x81\x85\x02\xa2\x01\x46\x81\x83\x02"
  "\xa1\x01\x44\x81\x83\x02\xa0\x01\x42\x81\x85\x02\x9f\x01\x40\x81"
  "\x83\x02\x9e\x01\x3e\x81\x83\x02\x9d\x01\x3c\x81\x85\x02\x9c\x01"
  "\x3a\x81\x83\x02\x9b\x01\x38\x81\x83\x02\x9a\x01\x36\x81\x85\x02"
  "\x99\x01\x34\x81\x83\x02\x98\x01\x32\x81\x83\x02\x97\x01\x30\x81"
  "\x85\x02\x96\x01\x2e\x81\x83\x02\x95\x01\x2c\x81\x83\x02\x94\x01"
  "\x2a\x81\x85\x02\x93\x01\x28\x81\x83\x02\x92\x01\x26\x81\x83\x02"
  "\x91\x01\x24\x81\x85\x02\x90\x01\x22\x81\x83\x02\x8f\x01\x20\x81"
  "\x83\x02\x8e\x01\x1e\x81\x85\x02\x8d\x01\x1c\x81\x83\x02\x8c\x01"
  "\x1a\x81\x83\x02\x8b\x01\x18\x81\x85\x02\x8a\x01\x16\x81\x83\x02"
  "\x89\x01\x14\x81\x83\x02\x88\x01\x12\x81\x85\x02\x87\x01\x10\x81"
  "\x83\x02\x86\x01\x0e\x81\x83\x02\x85\x01\x0c\x81\x85\x02\x84\x01"
  "\x0a\x81\x83\x02\x83\x01\x08\x81\x83\x02\x82\x01\x06\x81\x83\x02"
  "\x81\x01\x04\x83\x04\xa3\x01\xe0\x01\x10\x02\x15\x02\x1f\x2d\x2e"
  "\x2f\x30\x31\x32\x33\x34\x35\x29\x36\x27\x37\x38\x39\x3a\x3b\x3c"
  "\x3d\x3e\x3f\x40\x41\x21\x42\x43\x1c\xed\x01\x3a\x81\x81\x02\xec"
  "\x01\x38\x81\x81\x02\xeb\x01\x36\x81\x81\x02\xea\x01\x34\x81\x81"
  "\x02\xe9\x01\x32\x81\x81\x02\xe8\x01\x30\x81\x81\x02\xe7\x01\x2e"
  "\x81\x81\x02\xe6\x01\x2c\x81\x81\x02\xe5\x01\x2a\x81\x81\x02\xe4"
  "\x01\x28\x81\x81\x02\xe3\x01\x26\x81\x81\x02\xe2\x01\x24\x81\x81"
  "\x02\xe1\x01\x22\x81\x81\x02\xe0\x01\x20\x81\x81\x02\xdf\x01\x1e"
  "\x81\x81\x02\xde\x01\x1c\x81\x81\x02\xdd\x01\x1a\x81\x81\x02\xdc"
  "\x01\x18\x81\x81\x02\xdb\x01\x16\x81\x81\x02\xda\x01\x14\x81\x81"
  "\x02\xd9\x01\x12\x81\x81\x02\xd8\x01\x10\x81\x81\x02\xd7\x01\x0e"
  "\x81\x81\x02\xd6\x01\x0c\x81\x81\x02\xd5\x01\x0a\x81\x81\x02\xd4"
  "\x01\x08\x81\x81\x02\xd3\x01\x06\x81\x81\x02\xd2\x01\x04\x82\x02"
  "\x39\x5a\x44\x02\x16\x02\x09\x69\x6e\x66\x69\x6e\x69\x74\x79\x01"
  "\x02\x5f\x04\x62\x61\x72\x04\x66\x6f\x6f\x2d\x2e\x2f\x30\x31\x32"
  "\x33\x34\x35\x29\x36\x37\x38\x39\x3a\x3b\x3c\x3d\x3e\x14\x1f\x2a"
  "\x72\x65\x63\x75\x72\x73\x69\x76\x65\x2d\x63\x6f\x6d\x70\x69\x6c"
  "\x61\x74\x69\x6f\x6e\x2d\x6e\x75\x6d\x62\x65\x72\x2a\x3e\x02\x02"
  "\x0b\x6d\x61\x6b\x65\x2d\x74\x61\x62\x6c\x65\x02\x0f\x67\x65\x6e"
  "\x65\x72\x61\x74\x65\x2d\x6c\x61\x62\x65\x6c\x03\x0f\x6e\x75\x6d"
  "\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x35\x02\x14\x6d\x61"
  "\x6b\x65\x2d\x73\x70\x65\x63\x69\x61\x6c\x2d\x6c\x61\x62\x65\x6c"
  "\x73\x04\x13\x06\x8b\x02\x3e\x81\x81\x02\x8a\x02\x3c\x81\x81\x02"
  "\x89\x02\x3a\x81\x81\x02\x88\x02\x38\x81\x81\x02\x87\x02\x36\x81"
  "\x81\x02\x86\x02\x34\x81\x81\x02\x85\x02\x32\x81\x81\x02\x84\x02"
  "\x30\x81\x81\x02\x83\x02\x2e\x81\x85\x02\x82\x02\x2c\x81\x81\x02"
  "\x81\x02\x2a\x81\x81\x02\x80\x02\x28\x81\x87\x02\xff\x01\x26\x81"
  "\x83\x02\xfe\x01\x24\x81\x83\x02\xfd\x01\x22\x81\x81\x02\xfc\x01"
  "\x20\x81\x81\x02\xfb\x01\x1e\x81\x81\x02\xfa\x01\x1c\x81\x81\x02"
  "\xf9\x01\x1a\x81\x81\x02\xf8\x01\x18\x81\x81\x02\xf7\x01\x16\x81"
  "\x81\x02\xf6\x01\x14\x81\x81\x02\xf5\x01\x12\x81\x81\x02\xf4\x01"
  "\x10\x81\x81\x02\xf3\x01\x0e\x81\x81\x02\xf2\x01\x0c\x81\x81\x02"
  "\xf1\x01\x0a\x81\x81\x02\xf0\x01\x08\x81\x81\x02\xef\x01\x06\x81"
  "\x81\x02\xee\x01\x04\x82\x02\x3d\x6a\x34\x02\x17\x02\x02\x5f\x01"
  "\x05\x6b\x65\x65\x70\x33\x0a\x72\x65\x63\x75\x72\x73\x69\x76\x65"
  "\x32\x10\x50\x73\x65\x75\x64\x6f\x2d\x41\x73\x73\x65\x6d\x62\x6c"
  "\x79\x06\x2a\x6c\x61\x70\x2a\x31\x27\x3f\x40\x41\x21\x42\x43\x09"
  "\x3e\x17\x2a\x69\x6e\x66\x6f\x2d\x6f\x75\x74\x70\x75\x74\x2d\x66"
  "\x69\x6c\x65\x6e\x61\x6d\x65\x2a\x23\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x3a\x70\x72\x65\x73\x65\x72\x76\x65\x2d\x64\x61\x74\x61\x2d"
  "\x73\x74\x72\x75\x63\x74\x75\x72\x65\x73\x3f\x30\x31\x27\x06\x04"
  "\x0f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x70\x68\x61\x73\x65\x31"
  "\x03\x35\x06\x0a\x73\x74\x72\x69\x6e\x67\x69\x66\x79\x04\x13\x05"
  "\xa4\x02\x34\x81\x8d\x02\xa3\x02\x32\x81\x8d\x02\xa2\x02\x30\x81"
  "\x8d\x02\xa1\x02\x2e\x81\x8d\x02\xa0\x02\x2c\x81\x8d\x02\x9f\x02"
  "\x2a\x81\x8d\x02\x9e\x02\x28\x88\x0e\x9d\x02\x26\x81\x8d\x02\x9c"
  "\x02\x24\x81\x83\x02\x9b\x02\x22\x81\x8f\x02\x9a\x02\x20\x81\x8d"
  "\x02\x99\x02\x1e\x81\x8d\x02\x98\x02\x1c\x81\x89\x02\x97\x02\x1a"
  "\x81\x8b\x02\x96\x02\x18\x81\x89\x02\x95\x02\x16\x81\x89\x02\x94"
  "\x02\x14\x81\x87\x02\x93\x02\x12\x81\x89\x02\x92\x02\x10\x81\x87"
  "\x02\x91\x02\x0e\x81\x87\x02\x90\x02\x0c\x81\x87\x02\x8f\x02\x0a"
  "\x81\x85\x02\x8e\x02\x08\x81\x83\x02\x8d\x02\x06\x81\x8b\x02\x8c"
  "\x02\x04\x83\x04\x33\x54\x35\x02\x18\x1b\x74\x72\x61\x6e\x73\x6c"
  "\x61\x74\x65\x2d\x6c\x61\x62\x65\x6c\x3a\x20\x4e\x6f\x74\x20\x66"
  "\x6f\x75\x6e\x64\x32\x70\x68\x61\x73\x65\x2f\x6f\x75\x74\x70\x75"
  "\x74\x2d\x67\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x3a\x20\x43\x61"
  "\x6e\x27\x74\x20\x68\x61\x63\x6b\x20\x49\x43\x20\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x73\x02\x22\x1c\x2a\x73\x75\x62\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x6c\x69\x6e\x6b\x69\x6e\x67\x2d\x69"
  "\x6e\x66\x6f\x2a\x2f\x21\x29\x0e\x2a\x65\x6e\x74\x72\x79\x2d\x6c"
  "\x61\x62\x65\x6c\x2a\x2e\x17\x2a\x69\x63\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x73\x2a\x2d\x42\x43"
  "\x09\x2d\x28\x42\x3f\x30\x2f\x3e\x2e\x43\x41\x40\x21\x0d\x03\x19"
  "\x66\x61\x6b\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x62\x6c"
  "\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x03\x1a\x04\x1a\x0a\x19\x6d\x61"
  "\x6b\x65\x2d\x66\x61\x6b\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x2d\x62\x6c\x6f\x63\x6b\x04\x05\x61\x73\x73\x71\x06\x1d\x6d\x61"
  "\x6b\x65\x2d\x66\x61\x6b\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x07\xc8\x02\x4a\x81\x8f"
  "\x02\xc7\x02\x48\x81\x8d\x02\xc6\x02\x46\x81\x85\x02\xc5\x02\x44"
  "\x81\x85\x02\xc4\x02\x42\x81\x8b\x02\xc3\x02\x40\x81\x83\x02\xc2"
  "\x02\x3e\x81\x89\x02\xc1\x02\x3c\x81\x85\x02\xc0\x02\x3a\x81\x83"
  "\x02\xbf\x02\x38\x81\x97\x02\xbe\x02\x36\x81\x95\x02\xbd\x02\x34"
  "\x81\x93\x02\xbc\x02\x32\x81\x91\x02\xbb\x02\x30\x81\x8d\x02\xba"
  "\x02\x2e\x81\x8b\x02\xb9\x02\x2c\x81\x87\x02\xb8\x02\x2a\x81\x89"
  "\x02\xb7\x02\x28\x81\x85\x02\xb6\x02\x26\x81\x83\x02\xb5\x02\x24"
  "\x81\x81\x02\xb4\x02\x22\x81\x81\x02\xb3\x02\x20\x81\x81\x02\xb2"
  "\x02\x1e\x81\x81\x02\xb1\x02\x1c\x81\x81\x02\xb0\x02\x1a\x81\x81"
  "\x02\xaf\x02\x18\x81\x81\x02\xae\x02\x16\x81\x81\x02\xad\x02\x14"
  "\x81\x81\x02\xac\x02\x12\x81\x81\x02\xab\x02\x10\x81\x83\x02\xaa"
  "\x02\x0e\x81\x81\x02\xa9\x02\x0c\x81\x81\x02\xa8\x02\x0a\x81\x81"
  "\x02\xa7\x02\x08\x82\x02\xa6\x02\x06\x81\x81\x02\xa5\x02\x04\x81"
  "\x8d\x02\x49\x78\x2f\x02\x19\x04\x12\x69\x6e\x66\x6f\x2d\x67\x65"
  "\x6e\x65\x72\x61\x74\x69\x6f\x6e\x2d\x32\x2e\x02\xc9\x02\x04\x84"
  "\x06\x03\x2d\x02\x1a\x02\x32\x33\x21\x44\x65\x62\x75\x67\x67\x69"
  "\x6e\x67\x20\x49\x6e\x66\x6f\x72\x6d\x61\x74\x69\x6f\x6e\x20\x47"
  "\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x37\x14\x2a\x64\x62\x67\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x73\x2a\x33\x11"
  "\x2a\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73\x2a"
  "\x32\x11\x2a\x64\x62\x67\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x2a\x28\x1f\x06\x30\x37\x33\x32\x28\x1f\x3e\x08\x04\x31\x07"
  "\x18\x69\x6e\x66\x6f\x2d\x67\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e"
  "\x2d\x70\x68\x61\x73\x65\x2d\x33\x02\x1e\x72\x65\x63\x75\x72\x73"
  "\x69\x76\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x61\x74\x69\x6f\x6e\x2d"
  "\x72\x65\x73\x75\x6c\x74\x73\x3e\x04\x1d\x04\x18\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x3a\x64\x75\x6d\x70\x2d\x69\x6e\x66\x6f\x2d\x66"
  "\x69\x6c\x65\x33\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74"
  "\x6f\x72\x07\xe3\x02\x36\x83\x04\xe2\x02\x34\x81\x83\x02\xe1\x02"
  "\x32\x81\x85\x02\xe0\x02\x30\x81\x87\x02\xdf\x02\x2e\x81\x85\x02"
  "\xde\x02\x2c\x81\x87\x02\xdd\x02\x2a\x81\x85\x02\xdc\x02\x28\x81"
  "\x83\x02\xdb\x02\x26\x81\x8d\x02\xda\x02\x24\x81\x8f\x02\xd9\x02"
  "\x22\x81\x8d\x02\xd8\x02\x20\x81\x8d\x02\xd7\x02\x1e\x81\x8b\x02"
  "\xd6\x02\x1c\x81\x8d\x02\xd5\x02\x1a\x81\x8b\x02\xd4\x02\x18\x81"
  "\x8b\x02\xd3\x02\x16\x81\x89\x02\xd2\x02\x14\x81\x8b\x02\xd1\x02"
  "\x12\x81\x89\x02\xd0\x02\x10\x81\x89\x02\xcf\x02\x0e\x81\x85\x02"
  "\xce\x02\x0c\x81\x87\x02\xcd\x02\x0a\x81\x85\x02\xcc\x02\x08\x81"
  "\x85\x02\xcb\x02\x06\x81\x83\x02\xca\x02\x04\x84\x06\x35\x5a\x32"
  "\x02\x1b\x04\x62\x63\x69\x04\x04\x15\x73\x70\x6c\x69\x74\x2d\x69"
  "\x6e\x66\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x21\x04\x10\x64"
  "\x75\x6d\x70\x2d\x63\x6f\x6d\x70\x72\x65\x73\x73\x65\x64\x31\x04"
  "\xe6\x02\x08\x81\x87\x02\xe5\x02\x06\x81\x85\x02\xe4\x02\x04\x84"
  "\x06\x07\x12\x30\x02\x1c\x03\x1d\x63\x61\x6c\x6c\x2d\x77\x69\x74"
  "\x68\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c\x65"
  "\x6e\x61\x6d\x65\x05\x08\x66\x61\x73\x64\x75\x6d\x70\x04\x09\x63"
  "\x6f\x6d\x70\x72\x65\x73\x73\x04\xe9\x02\x08\x81\x85\x02\xe8\x02"
  "\x06\x81\x85\x02\xe7\x02\x04\x84\x06\x07\x12\x28\x02\x1d\x0c\x73"
  "\x74\x72\x69\x6e\x67\x2d\x73\x65\x74\x21\x01\x60\x01\x43\x01\x22"
  "\x01\x51\x01\x40\x03\x5a\x5f\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x0d\x65\x6d\x70\x74\x79\x5f\x73\x74\x72\x69"
  "\x6e\x67\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x03\x0d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x6e\x75\x6c\x6c\x3f\x03\x11\x63\x68\x61"
  "\x72\x2d\x61\x6c\x70\x68\x61\x62\x65\x74\x69\x63\x3f\x04\x13\x03"
  "\x0c\x73\x74\x72\x69\x6e\x67\x2d\x63\x6f\x70\x79\x03\x13\x63\x68"
  "\x61\x72\x2d\x61\x6c\x70\x68\x61\x6e\x75\x6d\x65\x72\x69\x63\x3f"
  "\x06\xf5\x02\x1a\x81\x87\x02\xf4\x02\x18\x81\x87\x02\xf3\x02\x16"
  "\x81\x83\x02\xf2\x02\x14\x81\x89\x02\xf1\x02\x12\x81\x87\x02\xf0"
  "\x02\x10\x81\x87\x02\xef\x02\x0e\x81\x85\x02\xee\x02\x0c\x81\x83"
  "\x02\xed\x02\x0a\x81\x83\x02\xec\x02\x08\x81\x87\x02\xeb\x02\x06"
  "\x81\x83\x02\xea\x02\x04\x83\x04\x19\x32\x1d\x1d\x1a\x1a\x1d\x04"
  "\x18\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2d\x6c\x61"
  "\x62\x65\x6c\x2d\x6e\x61\x6d\x65\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x33\x31\x17\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x3a\x64\x75\x6d\x70\x2d\x62\x63\x69\x2d\x66\x69"
  "\x6c\x65\x33\x2e\x25\x24\x23\x15\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x65\x2d\x62\x61\x63\x6b\x2d\x65\x6e\x64\x21\x18\x61\x73\x73"
  "\x65\x6d\x62\x6c\x65\x72\x26\x6c\x69\x6e\x6b\x65\x72\x2d\x72\x65"
  "\x73\x65\x74\x21\x20\x62\x69\x6e\x64\x2d\x61\x73\x73\x65\x6d\x62"
  "\x6c\x65\x72\x26\x6c\x69\x6e\x6b\x65\x72\x2d\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x73\x2a\x62\x69\x6e\x64\x2d\x61\x73\x73\x65\x6d\x62"
  "\x6c\x65\x72\x26\x6c\x69\x6e\x6b\x65\x72\x2d\x74\x6f\x70\x2d\x6c"
  "\x65\x76\x65\x6c\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x09\x77"
  "\x72\x61\x70\x2d\x6c\x61\x70\x0e\x61\x73\x73\x65\x6d\x62\x6c\x65"
  "\x26\x6c\x69\x6e\x6b\x22\x43\x42\x21\x41\x40\x3f\x3d\x3c\x3b\x3a"
  "\x39\x38\x37\x27\x36\x29\x2b\x1f\x3e\x1b\x0c\x14\x64\x65\x66\x61"
  "\x75\x6c\x74\x2d\x66\x69\x6c\x65\x2d\x68\x61\x6e\x64\x6c\x65\x0f"
  "\x14\x6f\x70\x74\x69\x6d\x69\x7a\x65\x2d\x6c\x69\x6e\x65\x61\x72"
  "\x2d\x6c\x61\x70\x1d\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x73\x63\x6f"
  "\x64\x65\x2f\x72\x65\x63\x75\x72\x73\x69\x76\x65\x2f\x68\x6f\x6f"
  "\x6b\x1b\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x73\x63\x6f\x64\x65\x2f"
  "\x6e\x6f\x2d\x66\x69\x6c\x65\x2f\x68\x6f\x6f\x6b\x0a\x25\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2d\x6f\x75\x74\x70\x75\x74\x2d\x3e\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x1b\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x3e\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x17\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x2d\x64\x61\x74\x61\x2d\x66\x72\x6f\x6d\x2d"
  "\x66\x69\x6c\x65\x14\x25\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x31\x28\x04\x30\x04\x32"
  "\x04\x2d\x04\x2f\x08\x35\x04\x34\x04\x44\x04\x10\x04\x2c\x04\x2a"
  "\x06\x26\x04\x20\x04\x1e\x04\x19\x04\x1c\x04\x12\x04\x18\x04\x17"
  "\x04\x16\x04\x15\x04\x11\x04\x0e\x04\x0d\x04\x0b\x04\x09\x04\x04"
  "\x31\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x02\x33\x02\x06\x0e\x80\x80\x04\x05\x0c\x81\x81\x02\x04"
  "\x0a\x81\x81\x02\x03\x08\x81\x83\x02\x02\x06\x81\x85\x02\x01\x04"
  "\x81\x83\x02\x0d\x1d";

SCHEME_OBJECT *
ctop_so_data_62834beadb3d47a3 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_ctop_so_data_62834beadb3d47a3 [0]))), (sizeof (prog_ctop_so_data_62834beadb3d47a3)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_10]));
}

DECLARE_COMPILED_DATA_NS ("ctop.so", ctop_so_data_62834beadb3d47a3)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("ctop.so", "f9cc28d7aa621ebb")
