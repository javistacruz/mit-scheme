/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:13-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 5
#define DEBUGGING_LABEL_1_2 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto scode_make_constant_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_make_constant_3)
DEFLABEL (scode_make_constant_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 5
#define DEBUGGING_LABEL_2_2 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto scode_constant_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_constant_value_3)
DEFLABEL (scode_constant_value_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 10
#define DEBUGGING_LABEL_3_2 9
#define EXECUTE_CACHE_3_6 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto scode_quotation_components_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_quotation_components_4)
DEFLABEL (scode_quotation_components_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define ENVIRONMENT_LABEL_4_3 17
#define DEBUGGING_LABEL_4_2 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_8 9
#define EXECUTE_CACHE_4_6 11
#define FREE_REFERENCE_4_0 14
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_4_4);
      goto scode_make_directive_4;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_make_directive_8)
DEFLABEL (scode_make_directive_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd9.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_10;
  Wrd15 = Wrd19;

DEFLABEL (label_9)
  (Wrd21.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_7])), (Wrd16.pObj));

DEFLABEL (label_6)
  (Wrd15.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_7 5
#define LABEL_5_5 7
#define LABEL_5_10 9
#define LABEL_5_8 11
#define LABEL_5_12 13
#define LABEL_5_13 15
#define ENVIRONMENT_LABEL_5_3 26
#define DEBUGGING_LABEL_5_2 25
#define OBJECT_5_1 24
#define OBJECT_5_0 23
#define EXECUTE_CACHE_5_11 17
#define EXECUTE_CACHE_5_9 19
#define EXECUTE_CACHE_5_6 21
#define FREE_REFERENCES_LABEL_5_0 16
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_5_4);
      goto scode_original_expression_6;

    case 1:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_5_12);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_5_13);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_original_expression_11)
DEFLABEL (scode_original_expression_6)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;

DEFLABEL (label_12)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_18;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_17)
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_16;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_14;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  Rvl = ((Wrd22.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_16)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_9)
  (Wrd13.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_7 9
#define LABEL_6_8 11
#define LABEL_6_9 13
#define ENVIRONMENT_LABEL_6_3 24
#define DEBUGGING_LABEL_6_2 23
#define OBJECT_6_3 22
#define OBJECT_6_2 21
#define OBJECT_6_1 20
#define OBJECT_6_0 19
#define EXECUTE_CACHE_6_10 15
#define FREE_REFERENCE_6_0 18
#define FREE_REFERENCES_LABEL_6_0 14
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_6_4);
      goto scode_comment_directiveP_7;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_6_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_comment_directiveP_15)
DEFLABEL (scode_comment_directiveP_7)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_18;

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_29;
  Wrd9 = Wrd13;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_27;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_26)
  (Wrd24.Obj) = (* (Rsp++));
  if (! ((Wrd15.Obj) == (Wrd24.Obj)))
    goto label_17;
  (Wrd25.Obj) = (Rsp [1]);
  if ((Wrd25.Obj) == (current_block [OBJECT_6_1]))
    goto label_25;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_24;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_23)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_22;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd36.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_21)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_20;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd43.Obj) = ((Wrd44.pObj) [0]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (label_20)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_13)
  (Wrd43.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_12)
  (Wrd36.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_11)
  (Wrd27.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_6_2]);
  goto label_16;

DEFLABEL (label_27)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_10)
  (Wrd15.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd10.pObj));

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define LABEL_7_10 7
#define LABEL_7_7 9
#define LABEL_7_9 11
#define ENVIRONMENT_LABEL_7_3 25
#define DEBUGGING_LABEL_7_2 24
#define OBJECT_7_0 23
#define EXECUTE_CACHE_7_13 13
#define EXECUTE_CACHE_7_12 15
#define EXECUTE_CACHE_7_11 17
#define EXECUTE_CACHE_7_8 19
#define FREE_REFERENCE_7_0 22
#define FREE_REFERENCES_LABEL_7_0 12
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_7_4);
      goto scode_make_let_3;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_7_10);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_make_let_7)
DEFLABEL (scode_make_let_3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_10;
  Wrd16 = Wrd20;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_10])), (Wrd17.pObj));

DEFLABEL (label_5)
  (Wrd16.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 8
#define DEBUGGING_LABEL_8_2 7
#define EXECUTE_CACHE_8_5 5
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto scode_make_absolute_reference_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_make_absolute_reference_3)
DEFLABEL (scode_make_absolute_reference_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define ENVIRONMENT_LABEL_9_3 15
#define DEBUGGING_LABEL_9_2 14
#define OBJECT_9_0 13
#define EXECUTE_CACHE_9_8 9
#define EXECUTE_CACHE_9_6 11
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto scode_absolute_referenceP_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_absolute_referenceP_5)
DEFLABEL (scode_absolute_referenceP_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_9_0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 8
#define DEBUGGING_LABEL_10_2 7
#define EXECUTE_CACHE_10_5 5
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto scode_absolute_reference_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_absolute_reference_name_3)
DEFLABEL (scode_absolute_reference_name_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 12
#define DEBUGGING_LABEL_11_2 11
#define EXECUTE_CACHE_11_7 7
#define EXECUTE_CACHE_11_6 9
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto scode_make_absolute_combination_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_make_absolute_combination_4)
DEFLABEL (scode_make_absolute_combination_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define ENVIRONMENT_LABEL_12_3 16
#define DEBUGGING_LABEL_12_2 15
#define EXECUTE_CACHE_12_9 9
#define EXECUTE_CACHE_12_8 11
#define EXECUTE_CACHE_12_6 13
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto scode_absolute_combinationP_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_absolute_combinationP_5)
DEFLABEL (scode_absolute_combinationP_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 12
#define DEBUGGING_LABEL_13_2 11
#define EXECUTE_CACHE_13_7 7
#define EXECUTE_CACHE_13_6 9
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto scode_absolute_combination_name_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_absolute_combination_name_4)
DEFLABEL (scode_absolute_combination_name_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 8
#define DEBUGGING_LABEL_14_2 7
#define EXECUTE_CACHE_14_5 5
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto scode_absolute_combination_operands_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_absolute_combination_operands_3)
DEFLABEL (scode_absolute_combination_operands_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define ENVIRONMENT_LABEL_15_3 14
#define DEBUGGING_LABEL_15_2 13
#define EXECUTE_CACHE_15_8 9
#define EXECUTE_CACHE_15_6 11
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto scode_absolute_combination_components_2;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_absolute_combination_components_5)
DEFLABEL (scode_absolute_combination_components_2)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_7 5
#define LABEL_16_5 7
#define LABEL_16_8 9
#define LABEL_16_11 11
#define ENVIRONMENT_LABEL_16_3 25
#define DEBUGGING_LABEL_16_2 24
#define OBJECT_16_2 23
#define OBJECT_16_1 22
#define OBJECT_16_0 21
#define EXECUTE_CACHE_16_12 13
#define EXECUTE_CACHE_16_10 15
#define EXECUTE_CACHE_16_9 17
#define EXECUTE_CACHE_16_6 19
#define FREE_REFERENCES_LABEL_16_0 12
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd23;
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
      goto scode_error_combinationP_6;

    case 1:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_error_combinationP_9)
DEFLABEL (scode_error_combinationP_6)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_7);
  if (Rvl == (current_block [OBJECT_16_0]))
    goto label_11;

DEFLABEL (label_12)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  (Wrd23.Obj) = (current_block [OBJECT_16_1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_10)
DEFLABEL (label_18)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_11);
  if (Rvl == (current_block [OBJECT_16_2]))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_16_1]);

DEFLABEL (label_15)
DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define TAG_17_6 1
#define LABEL_17_8 7
#define LABEL_17_10 9
#define LABEL_17_11 11
#define LABEL_17_9 13
#define LABEL_17_12 15
#define LABEL_17_15 17
#define LABEL_17_13 19
#define LABEL_17_20 21
#define LABEL_17_17 23
#define LABEL_17_23 25
#define LABEL_17_21 27
#define LABEL_17_26 29
#define LABEL_17_27 31
#define LABEL_17_25 33
#define LABEL_17_28 35
#define ENVIRONMENT_LABEL_17_3 57
#define DEBUGGING_LABEL_17_2 56
#define OBJECT_17_4 55
#define OBJECT_17_3 54
#define OBJECT_17_2 53
#define OBJECT_17_1 52
#define OBJECT_17_0 51
#define EXECUTE_CACHE_17_24 37
#define EXECUTE_CACHE_17_22 39
#define EXECUTE_CACHE_17_19 41
#define EXECUTE_CACHE_17_18 43
#define EXECUTE_CACHE_17_16 45
#define EXECUTE_CACHE_17_14 47
#define EXECUTE_CACHE_17_7 49
#define FREE_REFERENCES_LABEL_17_0 36
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_17_4);
      goto scode_error_combination_components_22;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_33;

    case 2:
      current_block = (Rpc - LABEL_17_8);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_17_10);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_17_11);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_17_12);
      goto loop_19;

    case 7:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_17_13);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_17_20);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_17_17);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_17_23);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_17_21);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_17_26);
      goto label_28;

    case 14:
      current_block = (Rpc - LABEL_17_27);
      goto label_29;

    case 15:
      current_block = (Rpc - LABEL_17_25);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_17_28);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_error_combination_components_32)
DEFLABEL (scode_error_combination_components_22)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_17_5);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_40;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_39)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.pObj) = (& (Rsp [1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_38;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_37)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_36;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_35)
  goto loop_19;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_36)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_25)
  (Wrd20.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_39;

DEFLABEL (loop_34)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_17_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_17_2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_41;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_15);
  if (! (Rvl == (current_block [OBJECT_17_3])))
    goto label_42;
  (Wrd17.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_16]));

DEFLABEL (label_42)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17_20);
  if (! (Rvl == (current_block [OBJECT_17_4])))
    goto label_49;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_21]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_22]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17_21);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_25]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 1))
    goto label_48;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_47)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_46;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_45)
  goto loop_19;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_17_25);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_44;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_43)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_28]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_27]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_26]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_28)
  (Wrd13.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_52;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd11.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_51)
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_50;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  Rvl = ((Wrd28.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_50)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_52)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_23]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_27)
  (Wrd11.Obj) = Rvl;
  goto label_51;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define ENVIRONMENT_LABEL_18_3 19
#define DEBUGGING_LABEL_18_2 18
#define OBJECT_18_2 17
#define OBJECT_18_1 16
#define OBJECT_18_0 15
#define EXECUTE_CACHE_18_9 9
#define EXECUTE_CACHE_18_8 11
#define EXECUTE_CACHE_18_6 13
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scode_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_18_4);
      goto scode_make_error_combination_7;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_make_error_combination_10)
DEFLABEL (scode_make_error_combination_7)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd9.Obj) = (current_block [OBJECT_18_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd21.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_18_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_18_2]);
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

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
scode_so_19dc3bdba5156027 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	1,
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 18)
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

static const struct liarc_code_S arr_decl_scode_so_19dc3bdba5156027 [18] =
  {
    { "scode_so_code_1", 1, scode_so_code_1 },
    { "scode_so_code_2", 1, scode_so_code_2 },
    { "scode_so_code_3", 2, scode_so_code_3 },
    { "scode_so_code_4", 3, scode_so_code_4 },
    { "scode_so_code_5", 7, scode_so_code_5 },
    { "scode_so_code_6", 6, scode_so_code_6 },
    { "scode_so_code_7", 5, scode_so_code_7 },
    { "scode_so_code_8", 1, scode_so_code_8 },
    { "scode_so_code_9", 3, scode_so_code_9 },
    { "scode_so_code_10", 1, scode_so_code_10 },
    { "scode_so_code_11", 2, scode_so_code_11 },
    { "scode_so_code_12", 3, scode_so_code_12 },
    { "scode_so_code_13", 2, scode_so_code_13 },
    { "scode_so_code_14", 1, scode_so_code_14 },
    { "scode_so_code_15", 3, scode_so_code_15 },
    { "scode_so_code_16", 5, scode_so_code_16 },
    { "scode_so_code_17", 17, scode_so_code_17 },
    { "scode_so_code_18", 3, scode_so_code_18 }
  };

int
decl_scode_so_19dc3bdba5156027 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_scode_so_19dc3bdba5156027);
  return (0);
}

DECLARE_COMPILED_CODE ("scode.so", 3, decl_scode_so_19dc3bdba5156027, scode_so_19dc3bdba5156027)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_scode_so_data_19dc3bdba5156027 [2142] =
  "\x4d\x23\xec\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x22\x29\x21\x9c"
  "\x2b\xb9\x1d\xb0\x82\x88\x22\x29\x21\x9c\x2b\xba\x1d\xb0\x83\x88"
  "\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x84\x88\x08"
  "\x0d\xbc\x24\x28\x0d\xbd\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbe\x1d\xb0\x85\x88\xc1\xbf\xc1\x1c\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1b\x07\x08\xb7\xb4\x24\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x07\xc3\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x1c\x0d\x08\x1b\xb7\x28\x0d\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\x08\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a\x0d\xb3\x2a\xb2\x2a\xb1\x2a\x17"
  "\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\xb5\x0d\xb4"
  "\x0d\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x58\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61\x73\x65\x2f\x73"
  "\x63\x6f\x64\x65\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x04"
  "\x83\x04\x03\x02\x05\x04\x83\x04\x03\x02\x03\x1b\x73\x63\x6f\x64"
  "\x65\x2f\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x02\x07\x06\x81\x85\x02\x06\x04\x84\x06"
  "\x05\x0b\x02\x16\x63\x6f\x6d\x6d\x65\x6e\x74\x2d\x74\x61\x67\x3a"
  "\x64\x69\x72\x65\x63\x74\x69\x76\x65\x02\x03\x1a\x73\x63\x6f\x64"
  "\x65\x2f\x6f\x72\x69\x67\x69\x6e\x61\x6c\x2d\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x04\x13\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b"
  "\x65\x2d\x63\x6f\x6d\x6d\x65\x6e\x74\x03\x0a\x08\x81\x89\x02\x09"
  "\x06\x81\x87\x02\x08\x04\x85\x08\x07\x12\x02\x04\x63\x61\x72\x04"
  "\x63\x64\x72\x09\x03\x0f\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x6d"
  "\x65\x6e\x74\x3f\x03\x13\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x6d"
  "\x65\x6e\x74\x2d\x74\x65\x78\x74\x03\x19\x73\x63\x6f\x64\x65\x2f"
  "\x63\x6f\x6d\x6d\x65\x6e\x74\x2d\x64\x69\x72\x65\x63\x74\x69\x76"
  "\x65\x3f\x0a\x04\x11\x10\x81\x83\x02\x10\x0e\x81\x83\x02\x0f\x0c"
  "\x81\x83\x02\x0e\x0a\x81\x85\x02\x0d\x08\x81\x83\x02\x0c\x06\x81"
  "\x83\x02\x0b\x04\x83\x04\x0f\x1b\x0b\x02\x09\x02\x04\x05\x6d\x65"
  "\x6d\x71\x02\x17\x0e\x81\x85\x02\x16\x0c\x81\x85\x02\x15\x0a\x81"
  "\x85\x02\x14\x08\x81\x87\x02\x13\x06\x81\x85\x02\x12\x04\xfe\x05"
  "\x0d\x19\x0c\x02\x08\x0f\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61\x67"
  "\x3a\x6c\x65\x74\x02\x03\x14\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b"
  "\x65\x2d\x73\x65\x71\x75\x65\x6e\x63\x65\x09\x12\x73\x63\x6f\x64"
  "\x65\x2f\x6d\x61\x6b\x65\x2d\x6c\x61\x6d\x62\x64\x61\x04\x0d\x73"
  "\x63\x61\x6e\x2d\x64\x65\x66\x69\x6e\x65\x73\x04\x17\x73\x63\x6f"
  "\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74"
  "\x69\x6f\x6e\x0d\x05\x1c\x0c\x81\x89\x02\x1b\x0a\x81\x89\x02\x1a"
  "\x08\x81\x97\x02\x19\x06\x81\x89\x02\x18\x04\xfd\x07\x0b\x1a\x0e"
  "\x02\x09\x04\x12\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x61"
  "\x63\x63\x65\x73\x73\x02\x1d\x04\x83\x04\x03\x0f\x02\x0a\x03\x0e"
  "\x73\x63\x6f\x64\x65\x2f\x61\x63\x63\x65\x73\x73\x3f\x03\x19\x73"
  "\x63\x6f\x64\x65\x2f\x61\x63\x63\x65\x73\x73\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x20\x08\x81\x83\x02\x1f\x06\x81"
  "\x83\x02\x1e\x04\x83\x04\x07\x10\x10\x02\x0b\x03\x12\x73\x63\x6f"
  "\x64\x65\x2f\x61\x63\x63\x65\x73\x73\x2d\x6e\x61\x6d\x65\x02\x21"
  "\x04\x83\x04\x03\x11\x02\x0c\x03\x1e\x73\x63\x6f\x64\x65\x2f\x6d"
  "\x61\x6b\x65\x2d\x61\x62\x73\x6f\x6c\x75\x74\x65\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x12\x04\x0d\x03\x23\x06\x81\x85\x02\x22"
  "\x04\x84\x06\x05\x0d\x13\x02\x0d\x03\x13\x73\x63\x6f\x64\x65\x2f"
  "\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x3f\x14\x03\x1b\x73"
  "\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x15\x03\x1a\x73\x63\x6f\x64"
  "\x65\x2f\x61\x62\x73\x6f\x6c\x75\x74\x65\x2d\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x3f\x16\x04\x26\x08\x81\x83\x02\x25\x06\x81\x83"
  "\x02\x24\x04\x83\x04\x07\x11\x17\x02\x0e\x03\x15\x03\x1e\x73\x63"
  "\x6f\x64\x65\x2f\x61\x62\x73\x6f\x6c\x75\x74\x65\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x6e\x61\x6d\x65\x18\x03\x28\x06\x81"
  "\x83\x02\x27\x04\x83\x04\x05\x0d\x19\x02\x0f\x03\x1b\x73\x63\x6f"
  "\x64\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x6f"
  "\x70\x65\x72\x61\x6e\x64\x73\x1a\x02\x29\x04\x83\x04\x03\x1b\x02"
  "\x10\x03\x24\x73\x63\x6f\x64\x65\x2f\x61\x62\x73\x6f\x6c\x75\x74"
  "\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x6f\x70"
  "\x65\x72\x61\x6e\x64\x73\x1c\x03\x20\x73\x63\x6f\x64\x65\x2f\x61"
  "\x62\x73\x6f\x6c\x75\x74\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74"
  "\x69\x6f\x6e\x2d\x6e\x61\x6d\x65\x1d\x03\x2c\x08\x81\x87\x02\x2b"
  "\x06\x81\x87\x02\x2a\x04\x84\x06\x07\x0f\x1e\x02\x11\x10\x65\x72"
  "\x72\x6f\x72\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x1f\x10\x65"
  "\x72\x72\x6f\x72\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x03\x14"
  "\x03\x1c\x73\x63\x6f\x64\x65\x2f\x61\x62\x73\x6f\x6c\x75\x74\x65"
  "\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x3f\x20\x03\x15"
  "\x03\x1d\x05\x31\x0c\x81\x85\x02\x30\x0a\x81\x85\x02\x2f\x08\x81"
  "\x83\x02\x2e\x06\x81\x83\x02\x2d\x04\x83\x04\x0b\x1a\x21\x02\x12"
  "\x05\x63\x6f\x6e\x73\x22\x05\x6c\x69\x73\x74\x09\x04\x1d\x73\x63"
  "\x6f\x64\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d"
  "\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x03\x20\x03\x1c\x03\x14"
  "\x03\x1d\x03\x1a\x03\x15\x08\x42\x24\x81\x87\x02\x41\x22\x81\x85"
  "\x02\x40\x20\x81\x89\x02\x3f\x1e\x81\x89\x02\x3e\x1c\x81\x85\x02"
  "\x3d\x1a\x81\x85\x02\x3c\x18\x81\x85\x02\x3b\x16\x81\x85\x02\x3a"
  "\x14\x81\x85\x02\x39\x12\x81\x85\x02\x38\x10\x81\x85\x02\x37\x0e"
  "\x81\x87\x02\x36\x0c\x81\x8b\x02\x35\x0a\x81\x8b\x02\x34\x08\x81"
  "\x87\x02\x33\x06\x81\x87\x02\x32\x04\x84\x06\x23\x3a\x1a\x02\x13"
  "\x1f\x22\x02\x1b\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x74"
  "\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x0d"
  "\x04\x20\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x61\x62\x73"
  "\x6f\x6c\x75\x74\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x22\x04\x45\x08\x81\x87\x02\x44\x06\x81\x85\x02\x43\x04\x84"
  "\x06\x07\x14\x1f\x13\x15\x15\x1f\x04\x1a\x04\x21\x04\x1e\x04\x1b"
  "\x04\x19\x04\x17\x04\x13\x04\x11\x04\x10\x04\x0f\x04\x0e\x04\x0c"
  "\x04\x0b\x04\x04\x23\x23\x5b\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x29\x63\x6f\x6d\x6d\x65\x6e\x74\x2d\x74\x61\x67\x3a\x64\x69\x72"
  "\x65\x63\x74\x69\x76\x65\x5d\x04\x04\x04\x14\x1d\x73\x63\x6f\x64"
  "\x65\x2f\x6d\x61\x6b\x65\x2d\x65\x72\x72\x6f\x72\x2d\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x23\x73\x63\x6f\x64\x65\x2f\x65"
  "\x72\x72\x6f\x72\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x19\x73\x63\x6f\x64"
  "\x65\x2f\x65\x72\x72\x6f\x72\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74"
  "\x69\x6f\x6e\x3f\x26\x73\x63\x6f\x64\x65\x2f\x61\x62\x73\x6f\x6c"
  "\x75\x74\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d"
  "\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x1c\x1d\x20\x22\x18\x16"
  "\x12\x0f\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x6c\x65\x74"
  "\x0a\x15\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x64\x69\x72"
  "\x65\x63\x74\x69\x76\x65\x1b\x73\x63\x6f\x64\x65\x2f\x71\x75\x6f"
  "\x74\x61\x74\x69\x6f\x6e\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74"
  "\x73\x15\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x2d\x76\x61\x6c\x75\x65\x14\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b"
  "\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x14\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80"
  "\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
scode_so_data_19dc3bdba5156027 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_scode_so_data_19dc3bdba5156027 [0]))), (sizeof (prog_scode_so_data_19dc3bdba5156027)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("scode.so", scode_so_data_19dc3bdba5156027)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("scode.so", "d9590ac45d5629a8")
