/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:33-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define LABEL_1_10 13
#define LABEL_1_11 15
#define LABEL_1_12 17
#define LABEL_1_14 19
#define LABEL_1_15 21
#define LABEL_1_16 23
#define LABEL_1_17 25
#define LABEL_1_18 27
#define ENVIRONMENT_LABEL_1_3 42
#define DEBUGGING_LABEL_1_2 41
#define OBJECT_1_0 40
#define EXECUTE_CACHE_1_13 29
#define EXECUTE_CACHE_1_6 31
#define FREE_ASSIGNMENT_1_5 34
#define FREE_ASSIGNMENT_1_4 35
#define FREE_ASSIGNMENT_1_3 36
#define FREE_ASSIGNMENT_1_2 37
#define FREE_ASSIGNMENT_1_1 38
#define FREE_ASSIGNMENT_1_0 39
#define FREE_REFERENCES_LABEL_1_0 28
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gdatab_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_6;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_1_14);
      goto label_11;

    case 9:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_1_16);
      goto label_12;

    case 11:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_1_18);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_15)
DEFLABEL (initialize_packageB_6)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_31)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_28)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_25)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_22)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_1_0]);
  goto pop_return;

DEFLABEL (label_18)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_18])), (Wrd6.pObj), Rvl);

DEFLABEL (label_13)
  goto label_16;

DEFLABEL (label_21)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_16])), (Wrd6.pObj), Rvl);

DEFLABEL (label_12)
  goto label_19;

DEFLABEL (label_24)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_14])), (Wrd6.pObj), Rvl);

DEFLABEL (label_11)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_11])), (Wrd6.pObj), Rvl);

DEFLABEL (label_10)
  goto label_25;

DEFLABEL (label_30)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_9)
  goto label_28;

DEFLABEL (label_33)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_8)
  goto label_31;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 12
#define DEBUGGING_LABEL_2_2 11
#define EXECUTE_CACHE_2_6 7
#define FREE_REFERENCE_2_0 10
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gdatab_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_2_4);
      goto unparser_tagged_pair_method_0;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_tagged_pair_method_4)
DEFLABEL (unparser_tagged_pair_method_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
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
gdatab_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto unparser_set_tagged_pair_methodB_0;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_set_tagged_pair_methodB_4)
DEFLABEL (unparser_set_tagged_pair_methodB_0)
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
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 12
#define DEBUGGING_LABEL_4_2 11
#define EXECUTE_CACHE_4_6 7
#define FREE_REFERENCE_4_0 10
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gdatab_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto unparser_tagged_vector_method_0;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_tagged_vector_method_4)
DEFLABEL (unparser_tagged_vector_method_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
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
gdatab_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto unparser_set_tagged_vector_methodB_0;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_set_tagged_vector_methodB_4)
DEFLABEL (unparser_set_tagged_vector_methodB_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 12
#define DEBUGGING_LABEL_6_2 11
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCE_6_0 10
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gdatab_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_6_4);
      goto named_structure_get_tag_description_0;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (named_structure_get_tag_description_4)
DEFLABEL (named_structure_get_tag_description_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

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
#define ENVIRONMENT_LABEL_7_3 12
#define DEBUGGING_LABEL_7_2 11
#define EXECUTE_CACHE_7_6 7
#define FREE_REFERENCE_7_0 10
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gdatab_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto named_structure_set_tag_descriptionB_0;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (named_structure_set_tag_descriptionB_4)
DEFLABEL (named_structure_set_tag_descriptionB_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

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
gdatab_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto add_unparser_special_pairB_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_unparser_special_pairB_4)
DEFLABEL (add_unparser_special_pairB_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [1]) = Rvl;
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
gdatab_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto add_unparser_special_objectB_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_unparser_special_objectB_4)
DEFLABEL (add_unparser_special_objectB_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define ENVIRONMENT_LABEL_10_3 16
#define DEBUGGING_LABEL_10_2 15
#define OBJECT_10_1 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_8 9
#define EXECUTE_CACHE_10_6 11
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gdatab_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto unparse_with_brackets_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_with_brackets_5)
DEFLABEL (unparse_with_brackets_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Wrd5.Obj) = (current_block [OBJECT_10_1]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define TAG_11_6 1
#define LABEL_11_7 7
#define LABEL_11_9 9
#define TAG_11_10 3
#define ENVIRONMENT_LABEL_11_3 16
#define DEBUGGING_LABEL_11_2 15
#define EXECUTE_CACHE_11_11 11
#define EXECUTE_CACHE_11_8 13
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gdatab_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_11_4);
      goto convert_old_method_3;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (convert_old_method_6)
DEFLABEL (convert_old_method_3)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_9])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_11_9);

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
gdatab_so_85cf9604a8ce5652 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2,
	2,
	2,
	2,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 11)
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

static const struct liarc_code_S arr_decl_gdatab_so_85cf9604a8ce5652 [11] =
  {
    { "gdatab_so_code_1", 13, gdatab_so_code_1 },
    { "gdatab_so_code_2", 2, gdatab_so_code_2 },
    { "gdatab_so_code_3", 2, gdatab_so_code_3 },
    { "gdatab_so_code_4", 2, gdatab_so_code_4 },
    { "gdatab_so_code_5", 2, gdatab_so_code_5 },
    { "gdatab_so_code_6", 2, gdatab_so_code_6 },
    { "gdatab_so_code_7", 2, gdatab_so_code_7 },
    { "gdatab_so_code_8", 2, gdatab_so_code_8 },
    { "gdatab_so_code_9", 2, gdatab_so_code_9 },
    { "gdatab_so_code_10", 3, gdatab_so_code_10 },
    { "gdatab_so_code_11", 4, gdatab_so_code_11 }
  };

int
decl_gdatab_so_85cf9604a8ce5652 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_gdatab_so_85cf9604a8ce5652);
  return (0);
}

DECLARE_COMPILED_CODE ("gdatab.so", 3, decl_gdatab_so_85cf9604a8ce5652, gdatab_so_85cf9604a8ce5652)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_gdatab_so_data_85cf9604a8ce5652 [1315] =
  "\x2e\x16\xaf\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x0d\xb9\x0d"
  "\xba\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe\x25\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x82"
  "\x88\xb4\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x83\x88\xb4\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\xb5\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x85\x88\xb5\x24\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x86\x88\xb6\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0c"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xb8\x17\x1c\x88\x1b\xb0\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1e\x1e"
  "\x1e\x1e\xb7\x2a\x17\x1b\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x1b\x0d\xb6"
  "\xb5\xb4\xb3\xb2\xb1\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x67\x64"
  "\x61\x74\x61\x62\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x14"
  "\x65\x76\x65\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d\x72\x65\x73\x74"
  "\x6f\x72\x65\x14\x65\x76\x65\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d"
  "\x72\x65\x73\x74\x61\x72\x74\x12\x65\x76\x65\x6e\x74\x3a\x62\x65"
  "\x66\x6f\x72\x65\x2d\x65\x78\x69\x74\x14\x74\x61\x67\x67\x65\x64"
  "\x2d\x70\x61\x69\x72\x2d\x6d\x65\x74\x68\x6f\x64\x73\x16\x74\x61"
  "\x67\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x2d\x6d\x65\x74\x68"
  "\x6f\x64\x73\x1d\x6e\x61\x6d\x65\x64\x2d\x73\x74\x72\x75\x63\x74"
  "\x75\x72\x65\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x73"
  "\x07\x02\x17\x6d\x61\x6b\x65\x2d\x65\x76\x65\x6e\x74\x2d\x64\x69"
  "\x73\x74\x72\x69\x62\x75\x74\x6f\x72\x02\x0e\x6d\x61\x6b\x65\x2d"
  "\x31\x64\x2d\x74\x61\x62\x6c\x65\x03\x10\x1c\x81\x81\x02\x0f\x1a"
  "\x81\x81\x02\x0e\x18\x81\x81\x02\x0d\x16\x81\x81\x02\x0c\x14\x81"
  "\x81\x02\x0b\x12\x81\x81\x02\x0a\x10\x81\x81\x02\x09\x0e\x81\x81"
  "\x02\x08\x0c\x81\x81\x02\x07\x0a\x81\x81\x02\x06\x08\x81\x81\x02"
  "\x05\x06\x81\x81\x02\x04\x04\x82\x02\x1b\x2b\x02\x02\x05\x0d\x31"
  "\x64\x2d\x74\x61\x62\x6c\x65\x2f\x67\x65\x74\x09\x02\x12\x06\x81"
  "\x85\x02\x11\x04\x83\x04\x05\x0d\x0a\x02\x02\x05\x0e\x31\x64\x2d"
  "\x74\x61\x62\x6c\x65\x2f\x70\x75\x74\x21\x0b\x02\x14\x06\x81\x85"
  "\x02\x13\x04\x84\x06\x05\x0d\x0c\x02\x02\x05\x09\x02\x16\x06\x81"
  "\x85\x02\x15\x04\x83\x04\x05\x0d\x0d\x02\x02\x05\x0b\x02\x18\x06"
  "\x81\x85\x02\x17\x04\x84\x06\x05\x0d\x0e\x02\x02\x05\x09\x02\x1a"
  "\x06\x81\x85\x02\x19\x04\x83\x04\x05\x0d\x09\x02\x08\x02\x05\x0b"
  "\x02\x1c\x06\x81\x85\x02\x1b\x04\x84\x06\x05\x0d\x0b\x02\x09\x03"
  "\x13\x63\x6f\x6e\x76\x65\x72\x74\x2d\x6f\x6c\x64\x2d\x6d\x65\x74"
  "\x68\x6f\x64\x0f\x04\x21\x75\x6e\x70\x61\x72\x73\x65\x72\x2f\x73"
  "\x65\x74\x2d\x74\x61\x67\x67\x65\x64\x2d\x70\x61\x69\x72\x2d\x6d"
  "\x65\x74\x68\x6f\x64\x21\x10\x03\x1e\x06\x81\x85\x02\x1d\x04\x84"
  "\x06\x05\x0d\x11\x02\x0a\x03\x0f\x04\x23\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x2f\x73\x65\x74\x2d\x74\x61\x67\x67\x65\x64\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x6d\x65\x74\x68\x6f\x64\x21\x12\x03\x20\x06"
  "\x81\x85\x02\x1f\x04\x84\x06\x05\x0d\x13\x02\x0b\x01\x5e\x03\x23"
  "\x5b\x03\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x03"
  "\x0b\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x03\x23\x08\x81\x83"
  "\x02\x22\x06\x81\x83\x02\x21\x04\x83\x04\x07\x11\x14\x02\x0c\x03"
  "\x14\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x2f"
  "\x70\x6f\x72\x74\x04\x14\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75"
  "\x74\x2d\x74\x6f\x2d\x70\x6f\x72\x74\x03\x27\x0a\x81\x83\x02\x26"
  "\x08\x81\x87\x02\x25\x06\x81\x87\x02\x24\x04\x83\x04\x09\x11\x0c"
  "\x15\x15\x04\x14\x04\x13\x04\x11\x04\x0b\x04\x09\x04\x0e\x04\x0d"
  "\x04\x0c\x04\x0a\x04\x04\x12\x0f\x16\x75\x6e\x70\x61\x72\x73\x65"
  "\x2d\x77\x69\x74\x68\x2d\x62\x72\x61\x63\x6b\x65\x74\x73\x1d\x61"
  "\x64\x64\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x70\x65\x63"
  "\x69\x61\x6c\x2d\x6f\x62\x6a\x65\x63\x74\x21\x1b\x61\x64\x64\x2d"
  "\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x70\x65\x63\x69\x61\x6c"
  "\x2d\x70\x61\x69\x72\x21\x25\x6e\x61\x6d\x65\x64\x2d\x73\x74\x72"
  "\x75\x63\x74\x75\x72\x65\x2f\x73\x65\x74\x2d\x74\x61\x67\x2d\x64"
  "\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x21\x24\x6e\x61\x6d\x65"
  "\x64\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x67\x65\x74\x2d"
  "\x74\x61\x67\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x12"
  "\x1e\x75\x6e\x70\x61\x72\x73\x65\x72\x2f\x74\x61\x67\x67\x65\x64"
  "\x2d\x76\x65\x63\x74\x6f\x72\x2d\x6d\x65\x74\x68\x6f\x64\x10\x1c"
  "\x75\x6e\x70\x61\x72\x73\x65\x72\x2f\x74\x61\x67\x67\x65\x64\x2d"
  "\x70\x61\x69\x72\x2d\x6d\x65\x74\x68\x6f\x64\x14\x69\x6e\x69\x74"
  "\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x12"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81"
  "\x02\x07\x11";

SCHEME_OBJECT *
gdatab_so_data_85cf9604a8ce5652 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_gdatab_so_data_85cf9604a8ce5652 [0]))), (sizeof (prog_gdatab_so_data_85cf9604a8ce5652)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("gdatab.so", gdatab_so_data_85cf9604a8ce5652)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("gdatab.so", "9df167c8caa39705")
